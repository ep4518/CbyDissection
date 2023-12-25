#include <stdio.h>

int main() {
  enum day {sun, mon, tue, wed, thu, fri, sat};
  enum day d1, d2;

  d1 = fri;

  if (d1 == d2) {
     printf("Friday");
  }

  enum suit {clubs = 1, diamonds, hearts, spades} a, b, c;
  /* Clubs initialised to 1 so diamonds, hearts, spades have values 2, 3, 4. 
     Declaration consists of two parts:
     The type specifier: enum suit {clubs = 1, diamonds, heart, spades}
     Variables of this type: a, b, c; */

  enum fruit {apple = 7, pear, orange = 3, lemon} frt;
  /* Apple = 7 => pear = 8. orange = 3 => lemon = 4 */

  enum veg {beet = 17, carrot = 17, corn = 17} vege1, vege2;

  enum {fir, pine} tree;

  typedef int color;

  color red, green, blue;
}

int main () {
  /* Compute the next day */
  enum day {sun, mon, tue, wed, thu, fri, sat};
  
  typedef enum day day;

  day find_next_day(day d) {
    day next_day;
    switch(d) {
      case sun:
        next_day = mon;
        break;
      case mon:
        next_day = tue;
        break;
      case tue:
        next_day = wed;
        break;
      case wed:
        next_day = thu;
        break;
      case thu:
        next_day = fri;
        break;
      case fri:
        next_day = sat;
        break;
      case sat:
        next_day = sun;
        break;
    }
    return next_day;
  }


