#include <iostream>
#include <cmath>

int main(int argc, char **argv) {

//ax² + bx + c = 0

    double a;
    double b;
    double c;
    double wurzel = std::sqrt(2,0);
    int i = 2;
    std::cout << "a =" <<
              std::flush;
    std::cin >> a;
    std::cout << "b =" <<
              std::flush;
    std::cin >>
             b;
    std::cout << "c =" <<
              std::flush;
    std::cin >>
             c;
    if (a == 0) {
        std::cout << "ungültige eingabe" << std::endl;


    }

    double p = b / a;
    double q = c / a;
    double h = wurzel(2,(p/i)*(p/i) -q);
    double x= -p/i - h;
   double xx= -p/i + wurzel((p/i)*(p/i) -q);

   return x;


}
