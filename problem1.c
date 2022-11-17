#include <stdio.h>

int main()
{
    //the formulas are from web https://www.algebra.com/algebra/homework/coordinate/Linear-systems.faq.question.1090975.html
    
    double A, B, C ,D,E,F, x1, x2, x,y1, y2, y;
     scanf("%lf %lf %lf %lf %lf %lf", &A, &B, &C, &D, &E, &F ) ;
     x1 = (C*E - F*B);
     x2 = (A*E - B*D);
     
     y1 = (A*F - C*D);
     y2 = (A*E - B*D);
     
     
     
     if (x2 == 0 || y2 == 0)
         {
         printf("no answer");
         }
     x = x1/x2;
     y = y1/y2;
     y = (A*F - C*D) / (A*E - B*D);
     
     printf("%lf %lf", x, y);
    return 0;
}
