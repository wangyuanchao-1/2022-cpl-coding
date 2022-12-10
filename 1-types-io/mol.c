#include <stdio.h>

//
// Created by HP on 2022/12/10.
//
int main()
{
    const double MOL=6.02e23;
    const int MOL_PER_GRAM=32;
    int mass =6;

    double quantity=mass*1.0/32*MOL;


   printf("quantity=%.3e\nquantity=%.5g\n",
   quantity,quantity);
    return 0;
}