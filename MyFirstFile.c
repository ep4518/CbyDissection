#include <stdio.h>

// int main(){
//     int inches, feet, fathoms;

//     fathoms = 7;
//     inches = 6 * fathoms;
//     feet = 12 * inches;

//     printf("Wreck of the Hesperus:\n");
//     printf("Its depth at sea is different in units:\n");
//     printf("%d fathoms\n", fathoms);
//     printf("%d feet \n", feet);
//     printf("%d inches\n", inches);
// }

// int main() {
//     char c;

//     c = 'A';
//     printf("%c\n", c);
// }

// int main() {
//     float x, y;

//     x = 1.0;
//     y = 2.0;
//     printf("The sum of x and y is %.2f\n", x + y);
// }

// int main() {
// #define PI 3.14159
// #define LIMIT 100
// }

// int main() {
//     printf("Get set: %s %d %f %c%c\n", "one", 2 , 3.33, 'G', 'O');

//     printf("%s%s\n",
//     "This statement will print",
//     "just one very long line of text on the screen.");
// }

// c as character
// d as a decimal integer
// e as a floating point number in scientific notation
// f as a floating point number
// g in the e-format of f-format, which ever is shorter 
// s as a string

// int main() {
//     printf("Field width: %c%3c%7c\n", 'A','B','C');

//     printf("Precision + Field width: %7.1f%7.2f%7.3f\n", 4.0, 5.0, 6.0);

// }

// int main () {
//     // Won't run
//     scanf("%d", &x);
// }

// Character conversion scanf()
// c to a character
// d to a decimal integer
// f to a floating point number (float)
// lf to a floating point number (double)
// Lf to a floating point number (long double)
// s to a string

// int main () {
//     char first, middle, last;
//     int age;

//     printf("Input your three initals and your age: ");
//     scanf("%c%c%c%d", &first, &middle, &last, &age);
//     printf("\nGreetings %c.%c.%c.  %s %d.\n",
//         first, middle, last,
//         "Next year your age will be", age + 1);
// }

// // Area of a Circle
// #define PI 3.141592653589793
// int main() {
//     double radius;

//     printf("\n%s\n\n%s",
//         "This program computes the area of a circle.",
//         "Input the radius: ");
//     scanf("%lf", &radius);
//     printf("\n%s\n%s%.2f%s%.2f%s%.2f\n%s%.5f\n\n",
//         "Area = PI * radius * radius",
//         "   = ", PI, " * ", radius, " * ", radius,
//         "   = ", PI * radius * radius);
// }

// // While loop
// int main () {
//     int i = 1, sum = 0;

//     while(i <= 10) {
//         sum += i;
//         i += 1;
//     }
//     printf("Sum: %d\n", sum);
// }

// int main () 
// {
//     int cnt = 0;
//     float sum = 0.0, x;

//     printf("The sum of your numbers will be computed.\n\n");
//     printf("Input some numbers:  \n");
//     while (scanf("%f", &x) == 1) {
//         cnt += 1;
//         sum += x;
//     }
//     printf("\n%s%5d\n%s%12f\n\n",
//         "Count:", cnt,
//         "Sum: ", sum);
// }

// // cc MyFirstFile.c -o dbl_out
// // ./dbl_out < infile.txt > outfile.txt
// int main ()
// {
//     char c;

//     while (scanf("%c", &c) == 1) 
//     {
//         printf("%c", c);
//         printf("%c", c);
//     }
// }

// int main ()
// {
//     int a, b, c, sum;

//     printf("Input three integers: ");
//     scanf("%d%d%d", &a, &b, &c);
//     printf("Twice the sum of your integers plus 7 is %d -- bye!\n", 2 * (a + b + c) + 7);
// }

// // ANSI Check
// int main () 
// {
//     int a, b;

//     printf("Input two non-zero integers: ");
//     scanf("%d%d", &a, &b);
//     printf("%s%4d\n%s%4d\n%s%4d\n%s%4d\n%s%4d\n",
//         "   a =", a,
//         "   b =", b,
//         "   a / b =", a / b,
//         "   a % b =", a % b,
//         "ANSI check=", (a / b) * b + a % b - a);
// }

// int main () {
//     int sum,
//         h,      /* number of half dollars */
//         q,      /* number of quarters */
//         d,      /* number of dimes */
//         n,      /* number of nickels */
//         p;      /* number of pennies */
    
//     float p2;
    
//     printf("The value of your change will be computed.\n\n");
//     printf("How many half dollars do you have?\n");
//     scanf("%d", &h);
//     printf("How many quarters do you have?\n");
//     scanf("%d", &q);
//     printf("How many dimes do you have?\n");
//     scanf("%d", &d);
//     printf("How many nickels do you have?\n");
//     scanf("%d", &n);
//     printf("How many pennies do you have?\n");
//     scanf("%d", &p);
//     printf("You entered: %3d half dollars\n%16d quarters\n%16d dimes\n%16d nickels\n%16d pennies\n", h, q, d, n, p);
//     sum = p + n + d + q + h;
//     p = p + 5 * n + 10 * d + 25 * q + 50 * h;
//     p2 = p;
//     printf("The value of your %d coin collection is equivalent to %d pennies.\n", sum, p);
//     printf("The value of your %d coins is $%.2f\n", sum, p2 / 100);
// }

#include <stdlib.h>

// int main () 
// {
//     int i, n;
//     printf("\n%s\n%s",
//         "Some randomly distributed integers will be printed.",
//         "How many do you want to see?  ");
//     scanf("%d", &n);
//     for (i = 0; i < n; ++i){
//         if (i % 6 == 0)
//             printf("\n");
//         printf("%12d", rand());
//     }
//     printf("\n");
// }

// /*
// *   Organisation:   SOCRATIC SOLUTIONS (Trade Mark)
// *   Programmer:     Constance B. Diligent
// *   Date:           19 April 1993
// *   
// *   Purpose:        Birthday Greetings
// */

// int main () 
// {
//     printf("\nHappy Birthday! \n\n")
// }

// int main () 
// {
//     int a = 2, b = 1, c = 4  ;
//     if (!(a < 1 || b < 2 && c < 3)) 
//         printf("1\n");
//     if (a >= 1 && b >= 2 || c >= 3)
//         printf("2\n");
// }

// int main () {
//     double salary, sumSalary, fTax, sTax, sumFTax, sumSTax;

//     while (scanf("%lf", &salary) == 1) {
//         fTax = 0.23 * salary;
//         sTax = 0.07 * salary;
//         sumFTax += fTax;
//         sumSTax += sTax;
//         sumSalary += salary;
//         printf("Salary: %4.lf, Federal Tax: %4.2lf, State Tax: %4.2lf\n", salary, fTax, sTax);
//     }
//     printf("Total Salaries: %4.lf \
//             Total Federal Taxes: %4.2lf \
//             Total State Taxes: %4.2lf\n", sumSalary, sumFTax, sumSTax);

// }

// /*
// *
// *       A simulation of Heads or Tails
// *
// */

// int main () {
//     int n;
//     void prn_instructions(void), play(int);

//     prn_instructions();
//     printf("How many times do you want to play?  ");
//     scanf("%d", &n);
//     play(n);
//     return 0;
// }

// void prn_instructions(void) {
//     printf("\n%s\n%s\n%s\n%s\n%s\n\n",
//         "This is the game of calling heads or tails.",
//         "I will flip a coin; you call it.",
//         "If you call it correctly you win; otherwise, I win.",
//         "To call heads, type 0; to call tails, type 1.",
//         "As I toss my coin I will tell you to \"call it\".");
// }

// void play(int n) { /* machine does the tossing, user does the calling */
//     int coin, i , lose = 0, win = 0;
//     int toss(void), get_call_from_user(void);
//     void report_a_win(int), report_a_loss(int);
//     void prn_final_report(int, int, int);

//     for (i = 0; i < n; i++) {
//         printf("Call it: ");
//         coin = toss();
//         if (get_call_from_user() == coin) {
//             ++win;
//             report_a_win(coin);
//         }
//         else {
//             ++lose;
//             report_a_loss(coin);
//         }
//     }
//     prn_final_report(win,lose,n);
// }

// int toss(void) {    /* return 0 for heads and 1 for tails */
//     return (rand() % 2);
// }

// int get_call_from_user(void) {      /* return 0 for heads and 1 for tails */
//     int guess; 

//     scanf("%d", &guess);
//     while (guess != 0 && guess != 1) {
//         printf("ERROR: type 0 for heads and 1 for tails\n");
//         scanf("%d", &guess);
//     }
//     return guess;
// }

// void report_a_win(int coin) {
//     if (coin == 0)
//         printf("I have heads, you win.\n");
//     else
//         printf("I have tails, you win.\n");
// }

// void report_a_loss(int coin) {
//     if (coin == 0)
//         printf("I have a heads, you lose.\n");
//     else
//         printf("I have a tails, you lose.\n");
// }

// void prn_final_report(int win, int lose, int n) {
//     printf("\n%s\n%s%3d\n%s%3d\n%s%3d\n\n",
//     "Final Report: ",
//     "   Number of games that you won:   ", win,
//     "   Number of games that you lost:  ", lose,
//     "   Total number of games:          ", n);  
// }