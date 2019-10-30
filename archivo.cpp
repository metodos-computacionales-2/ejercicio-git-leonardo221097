#include <iostream>
#include <cmath>


int main(void)
{
 std::cout<<"ingrese el valor del entero 1"<<std::endl;
    int N1;
    // se pide el valor de N1
    std::cin>>N1;
   std::cout<<"ingrese el valor del entero 2"<<std::endl;
    int N2;
    // se pide el valor de N
    std::cin>>N2;
     std::cout<<"ingrese el valor del entero 3"<<std::endl;
    int N3;
    // se pide el valor de N
    std::cin>>N3;
    
    if ((N1*N1)+(N2*N2)==N3*N3)
{
 std::cout<<"si"<<std::endl;
}
else if (N1*N1+N3*N3==N2*N2)
{
std::cout<<"si"<<std::endl;
}
 else if (N2*N2+N3*N3==N1*N1)
{
 std::cout<<"si"<<std::endl;
}
else 
{std::cout<<"no"<<std::endl;}

}





 
