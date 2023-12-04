#include <stdio.h>
#include <stdlib.h>

// float square(int);
// float cubed(int);
// void prn_banner(void);
// void prn_header(void);
// void prn_values(int);

// int main () {
//     float number;
//     printf("Please input a number: \n");
//     scanf("%f", &number);

//     prn_banner();
//     prn_header();
//     prn_values(number);

//     exit(0);
// }

// float square(int n) {
//     float sqrd = n * n;
//     return(sqrd);
// }

// float cubed(int n) {
//     float cubd = n * n * n;
//     return(cubd);
// }

// void prn_banner(void) {
//     printf("\n%s%s%s\n",
//         "********************************************\n",
//         "*         Squared and Cubed Values         *\n",
//         "********************************************\n");
// }

// void prn_header(void) {
//     printf("%5s%12s%12s\n\n",
//         "Integer", "Squared", "Cubed");
// }

// void prn_values(int n) {
//     for (int i = 1; i < n; i++) {
//         printf("%5d%12.0f%12.0f\n", i, square(i), cubed(i));
//     }
//     printf("\n");
// }

// double smallest(double, double, double, double);
// double min(double, double);

// int main () {
//     printf("%.1lf\n", min(3.4,2.5));
//     printf("%.1lf\n", smallest(1.3,0.1,4.2,2.9));
//     exit(0);
// }

// double min(double x, double y) {
//     if (x > y) 
//         return y;
//     else 
//         return x;
// }

// double smallest(double w, double x, double y, double z) {
//     return (min(min(min(w,x),y),z));
// }

// int main() {
//     int n, cnt = 0;

//     printf("Let n_0 be a positive integer: \n");
//     scanf("%d", &n);
//     do 
//     {
//         cnt++;
//         printf("%5d", n);
//         if (n % 2 == 0)
//             n /= 2;
//         else
//             n = 3 * n + 1;
//         if (cnt % 6 == 0)
//             printf("\n");
//     } while (n != 1.0);
//     printf("%5d\n", n);
// }

#include <stdbool.h>

// #define START 2
// #define FINISH 1100

// bool is_prime(int);

// int main() {
//     printf("Every even number greater than 2 is the sum of two primes:");
//     for (int i = START; i <= FINISH; i+= 2){
//         for (int j = 1; j < i / 2 + 1; j++) {
//             if (is_prime(j) && is_prime(i - j)) {
//                 printf("%d = %d + %d\n", i, j, i-j);
//                 break;
//                 }
//         }
//     }

//     return 0;
// }

// bool is_prime(int n) {
//     if (n <= 1) {
//         return false; // 0 and 1 are not prime numbers
//     }

//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) {
//             return false; // If n is divisible by any number other than 1 and itself, it's not prime
//         }
//     }

//     return true; // If the loop completes, n is a prime number
// }

#include <ctype.h>

// int main () {

//     int c;

//     while ((c = getchar()) != EOF) {
//         while (c == '\n') {
//             c = getchar();
//         }
//         if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
//             putchar(c);
//             putchar(c);
//             putchar(c);
//             putchar('\n');
//         }
//         else if (c == 32 || c == EOF)
//             ;
//         else {
//             putchar(c);
//         }
//     }
//     exit(0);
// }

// int main () {

//     int c;

//     bool isvowel(int);

//     while ((c = getchar()) != EOF) {
//         c = tolower(c);
//         if (isvowel(c)) {
//             c = toupper(c);
//         }
//         putchar(c);
//     }

//     exit(0);
// }

// bool isvowel(int c) {
//     c = tolower(c);
//     return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); 
// }

// int main () {

//     int cnt = 0;

//     for (int i = 0; i < 127; i++) {
//         if (isascii(i)) {
//             if (isprint(i)) {
//                 putchar(i);
//                 cnt++;
//             }
//         }
//     }
//     printf("\n");
//     printf("%d\n",cnt);
// }

// #define N 30

// int main () {

//     int c, cnt = 0;


//     while ((c = getchar()) != EOF) {
//         cnt++;
//         if (cnt <= N) {
//             if (c == '\n') {
//                 c = 32;
//             }
//         }
//         else if (c == 32) {
//             c = '\n';
//             cnt = 0;
//         }
//         putchar(c);
//     }
// }

// #define N 33

// int main () {

//     char c = 'X';
//     char s = 32;
//     int i;
//     void repeat(char, int);

//     for (i = 1; i < N; i += 2) {
//         repeat(s,N - i);
//         repeat(c, 2*i);
//         putchar('\n');
//     }
//     for (i = 0; i < N; i += 2) {
//         repeat(s,i);
//         repeat(c, 2 * N - 2*i);
//         putchar('\n');
//     }
// }

// void repeat(char c, int n) {
//     int i;

//     for (i = 0; i < n; i++) {
//         putchar(c);
//     }
// }

#include <math.h>

// int main () {
//    double x;

//    printf("\n%s\n%s\n%s\n\n",
//       "The square root of x and x raised",
//       "to the power of x will be computed.",
//       "---");
//    while (1) {
//       printf("Input x:  ");
//       scanf("%lf", &x);
//       if (x >= 0.0)
//          printf("\n%15s%22.15e\n%15s%22.15e\n%15s%22.15e\n\n",
//          "x = ", x,
//          "sqrt(x) = ", sqrt(x),
//          "pow(x,x) = ", pow(x,x));
//       else 
//          printf("\nSorry, your number must have been non-negative.\n\n");
//    }
// }

/*********************************
 * 
 *  Interest rate model 
 * 
 **********************************/

// double compute(double p, double r, int n);
// void prn_instructions(void);
// void prn_results(double a, double p, double r, int n);

// int main () {

//     double amount, principal, rate;
//     int nyears;

//     prn_instructions();
//     for ( ; ; ) {
//         printf("Input three items: ");
//         scanf("%lf%lf%d", &principal, &rate, & nyears);

//         // amount = compute(principal, rate, nyears);   /* Replace with pow */
//         rate *= 0.01;
//         amount = pow(1.0 + rate, (double) nyears) * principal; /* nyears has been cast to double */
//         rate /= 100;

//         prn_results(amount, principal, rate, nyears);
//     }
// }

// void prn_instructions(void) {
//     printf("%s",
//     "This program computes interest compounded yearly.\n"
//     "You must input principal, interest, and no. of years.\n"
//     "For $1000 at 5.5% for 17 years here is an example: \n\n"
//     "Example input: 1000 5.5 17\n\n");

// }

// double compute(double principal, double rate, int nyears) {
//     int i; 
//     double amount = principal;

//     rate *= 0.01;                   /* example: convert 7% to 0.07 */
//     for (i = 0; i < nyears; ++i) {  
//         amount *= 1.0 + rate;
//     }
//     return (amount);
// }

// void prn_results(double a, double p, double r, int n) {
//     double interest = a - p;        /* amount - principal  */
    
//     printf("\n%s%g%c\n%s%d%s\n\n",
//         "Interest rate: ", r, '%',
//         "  Time period: ", n, " years");
//     printf("%s%9.2f\n%s%9.2f\n%s%9.2f\n",
//         "Beginning principal: ", p,
//         "   Interest accrued: ", interest,
//         "       Total amount:", a);
// }

// int main () {
//     double x = 123.45123451234512345;
//     double y = 123.45123451234512300;

//     printf("%.17f   %.17f\n", x, y);
// }

// double sin(double), cos(double), x, y;   /* sin() is not declared */

// int main () {
//     while (1) {
//         printf("Input a number:   ");
//         scanf("%lf",  &x);
//         y = sin(x) * sin(x) + cos(x) * cos(x);
//         printf("\n%s%.15g\n%s%.15e\n\n",
//             "x = ", x,
//             "sin(x) * sin(x) + cos(x) * cos(x) = ", y);
//     }
// }

// #define PI 3.14159265359

// double tan(double), sin(double), cos(double);
// void prn_header(void);
// void prn_banner(void);
// void prn_values(double x);

// int main () {
//     double x = 0;
//     int i;

//     prn_banner();
//     prn_header();
//     for (i = 0; i < 20; ++i) {
//         x = PI * i / 20.0;
//         prn_values(x);
//     }
// }

// void prn_header(void) {
//     printf("%s%13s%14s%14s\n\n", 
//     "x",
//     "sin(x)",
//     "cos(x)",
//     "tan(x)");
// }

// void prn_banner(void) {
//     printf("\n%s%s%s\n",
//         "********************************************\n",
//         "*     Trigonometric values from 0 - pi     *\n",
//         "********************************************\n");
// }

// void prn_values(double x) {
//     printf("%.3f%10.5f%14.5f%14.5f\n",
//         x,
//         sin(x),
//         cos(x),
//         tan(x));
// }

// double pow(double, double);
// void prn_values(int);
// void prn_banner(void);

// int main () {
//     int i;

//     prn_banner();
//     printf("%s%20s%20s\n",
//         "Integer",
//         "Square Root",
//         "Fourth Root");
//     printf("%s\n\n",
//         "-----------------------------------------------");
//     for (i = 0; i < 101; ++i) {
//         prn_values(i);
//     }
// }

// void prn_values(int i) {
//     printf("%7d%20.9e%20.9e\n",
//         i,
//         pow((double) i, 0.5),
//         pow((double) i, 0.25));
// }

// void prn_banner(void) {
//     printf("\n%s%s%s\n",
//         "***********************************************\n",
//         "*      Square and Fourth Root, i : [1,100]    *\n",
//         "***********************************************\n");
// }

// /*********************************
// * 
// *  Interest rate model 2
// * 
// **********************************/

// double compute(double p, double r, double c_rate, int n);
// void prn_instructions(void);
// void prn_results(double a, double p, double r, double c, int n);

// int main () {

//     double amount;      /* accrued value */
//     double principal;   /* initial amount */
//     double c_rate;      /* compounding rate: daily compounding rate = 365.0 */
//     double rate;        /* interest rate */
//     int nyears;         /* in years */

//     prn_instructions();
//     for ( ; ; ) {
//         printf("Input four items: ");
//         scanf("%lf%lf%lf%d", &principal, &rate, &c_rate ,&nyears);

//         amount = compute(principal, rate, c_rate, nyears);  

//         prn_results(amount, principal, rate, c_rate, nyears);
//     }
// }

// void prn_instructions(void) {
//     printf("%s",
//     "This program computes interest compounded at a given rate.\n"
//     "You must input principal, interest, compound rate and no. of years.\n"
//     "For $1000 at 5.5%, compounded daily (365.0) for 17 years here is an example: \n\n"
//     "Example input: 1000 5.5 365.0 17\n\n");

// }

// double compute(double principal, double rate, double c_rate, int nyears) {
//     int i; 
//     double amount = principal;

//     rate *= 0.01;                   /* example: convert 7% to 0.07 */
//     printf("%f\n",1.0 + rate / c_rate);
//     amount = pow(1.0 + rate / c_rate, nyears * c_rate) * principal;
//     return (amount);
// }

// void prn_results(double a, double p, double r, double c, int n) {
//     double interest = a - p;        /* amount - principal  */
    
//     printf("\n%s%g%c\n%s%d%s\n%s%g%s\n\n",
//         "Interest rate: ", r, '%',
//         "  Time period: ", n, " years",
//         "Compound rate: ", c, " (years^-1)");
//     printf("%s%9.2f\n%s%9.2f\n%s%9.2f\n",
//         "Beginning principal: ", p,
//         "   Interest accrued: ", interest,
//         "       Total amount: ", a);
// }

// #include <gsl/gsl_matrix.h>
// #include <gsl/gsl_blas.h>

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