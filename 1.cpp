#include <iostream>
#include <cmath>

double diametro(int x);
double perimetro (int x);
double area (int x);


int main(void)
{
    std::cout<<"ingrese el valor del radio"<<std::endl;
    int N;
    // se pide el valor de N
    std::cin>>N;
    
    std:: cout <<"el diametro es"<<diametro(N)<<"con un radio de:"<<N<<std::endl;
    std:: cout <<"el perimetro"<<perimetro(N)<<"con un radio de:"<<N<<std::endl;
    
    return 0;
}

double diametro(int x)
{
    return x*2;
}
double perimetro(int x)
{
return 2*M_PI*x;
}
