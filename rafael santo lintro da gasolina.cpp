/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
     int kmi,kmf,lg,result;
    std::cout<< "escreva os litros de gasolina";
    std::cin>> lg;
     std::cout<< "escreva os KMs iniciais";
    std::cin>> kmi;
     std::cout<< "escreva os KMs finais";
     std::cin>> kmf;
     
     result = (100*lg)/(kmf-kmi);
     
    std::cout<< "escreva ele gastou "<< result<< " aos 100 ";

    return 0;
}