#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void prn_banner(void);
void prn_instructions(void);
double binomial_tree_call(int, double, double, double, double, double);
void prn_results(int, double, double, double, double, double, double);
double** zeros(int);
void prn_matrix(double**, int, int);
void freeMatrix(double**, int);
double** matrixPower(double** matrix, int N, int power);
double** matrixMultiplication(double** A, double** B, int rowsA, int colsA, int colsB);



int main () {
    int N;          /* Number of nodes */ 
    double S0;      /* Initial Price */
    double K;       /* Strike Price */
    double Rf;      /* Risk Free Rate */
    double T;       /* Time Period (Years) */
    double Vol;     /* Volatility */
    double p;       /* Price */

    prn_banner();
    prn_instructions();

    printf("Input six items: ");
    scanf("%d%lf%lf%lf%lf%lf", &N, &S0, &K ,&Rf, &T, &Vol);

        // N = 2; S0 = 40.0; K = 40.0; Rf = 4; T = 0.5; Vol = 0.3;

    p  = binomial_tree_call((int) N, (double) S0, (double) K, (double) Rf, (double) T, (double) Vol);
    prn_results((int) N, (double) S0, (double) K, (double) Rf, (double) T, (double) Vol, (double) p);
}

double binomial_tree_call(int N, double S0, double K, double Rf, double T, double Vol) {
    Rf *= 0.01;
    double result;
    double dt = T / N;
    double u = exp(Vol * sqrt(dt));
    double d = 1 / u;
    double q = (exp(Rf * dt) - d) / (u - d);

    double** psi = zeros(N + 1);

    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N; ++j) {
            if (j == i) {
                psi[i][j] = q * exp(-Rf * dt);
            } else if (j - 1 == i) {
                psi[i][j] = (1 - q) * exp(-Rf * dt);
            }
        }
    }

    double** S = zeros(N+1);

    for (int i = 0; i <= N; ++i) {      /* Calculate stock prices at each node */
        for (int j = 0; j <= i; ++j) {
            S[j][i] = S0 * pow(u,(i - j)) * pow(d,j);
        }       
    }

    // Initialize V matrix
    double** V = zeros(N + 1);

    // Calculate option values
    for (int i = 0; i <= N; ++i) {
        V[i][0] = fmax(S[i][N] - K, 0.0);
    }
    
    double** vector = matrixMultiplication(matrixPower(psi, N+1, N),V,N+1,N+1,N+1);

    // Print the V matrix
    // prn_matrix(vector, N + 1, 1);

    // Free the allocated memory
    freeMatrix(psi, N+1);
    freeMatrix(S, N+1);
    freeMatrix(V, N+1);
    // freeMatrix(vector, N + 1);

    result = vector[0][0];

    return (result);
}

void prn_banner(void) {
    printf("\n%s%s%s\n",
        "*******************************************************\n",
        "*    European Call Option - Binomial Pricing Model    *\n",
        "*******************************************************\n");
}

void prn_instructions(void) {
    printf("%s",
    "This program computes the price of a European call option via the Binomial Model.\n"
    "You must input No. of periods, initial stock price, strike price, risk-free rate,\n"
    "time period and volatility.\n"
    "For a binomial model with 2 bisections, S0 = 1000, strike 40, Rf 4%,"
    " T = 1/2 year, Vol = 0.3 here is an example: \n\n"
    "Example input: 2 40 40 4 0.5 0.3\n\n");
}

void prn_results(int N, double S0, double K, double Rf, double T, double Vol, double p) {

    printf("\n%s%7d\n%s%7.1f%s\n%s%5g%c\n\n",
        "       Periods: ", N,
        "   Time period: ", T, " years",
        "Risk-free rate: ", Rf, '%');
    printf("%s%9.2f%s\n%s%7.1f\n%s%9.2f%s\n%s%8.2f%s\n",
        "   Stock Price: ", S0, " £",
        "    Volatility: ", Vol,
        "  Strike Price: ", K, " £",
        "  Option Price: ", p, "  £");
}

void prn_matrix(double** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

double** zeros(int N) {
    double** matrix = (double**)malloc((N + 1) * sizeof(double*));
    for (int i = 0; i <= N; ++i) {
        matrix[i] = (double*)malloc((N + 1) * sizeof(double));
    }

    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N; ++j) {
            matrix[i][j] = 0.0;
        }
    }

    return matrix;
}

double** matrixMultiplication(double** A, double** B, int rowsA, int colsA, int colsB) {
    double** result = (double**)malloc(rowsA * sizeof(double*));
    for (int i = 0; i < rowsA; ++i) {
        result[i] = (double*)malloc(colsB * sizeof(double));
    }

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            result[i][j] = 0.0;
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return result;
}

double** matrixPower(double** matrix, int N, int power) {
    double** result = (double**)malloc((N + 1) * sizeof(double*));
    for (int i = 0; i <= N; ++i) {
        result[i] = (double*)malloc((N + 1) * sizeof(double));
    }

    if (power == 0) {
        // Identity matrix
        for (int i = 0; i <= N; ++i) {
            for (int j = 0; j <= N; ++j) {
                result[i][j] = (i == j) ? 1.0 : 0.0;
            }
        }
    } else {
        // Copy the original matrix into the result matrix
        for (int i = 0; i <= N; ++i) {
            for (int j = 0; j <= N; ++j) {
                result[i][j] = matrix[i][j];
            }
        }

        double** temp;

        for (int p = 1; p < power; ++p) {
            temp = matrixMultiplication(matrix, result, N + 1, N + 1, N + 1);
            for (int i = 0; i <= N; ++i) {
                for (int j = 0; j <= N; ++j) {
                    result[i][j] = temp[i][j];
                }
            }

            // Free temporary matrix
            for (int i = 0; i <= N; ++i) {
                free(temp[i]);
            }
            free(temp);
        }
    }

    return result;
}

void freeMatrix(double** matrix, int N) {
    for (int i = 0; i <= N; ++i) {
        free(matrix[i]);
    }
    free(matrix);
}