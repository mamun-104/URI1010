#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    int a1,b1;
    int a2,b2;
    double d1,d2, val;

    scanf("%d%d%lf",&a1,&b1,&d1);
    scanf("%d%d%lf",&a2,&b2,&d2);

    val = b1*d1+b2*d2;
    printf("VALOR A PAGAR: R$ %.2lf\n",val);

    return 0;
}
