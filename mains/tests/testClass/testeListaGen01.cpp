#include <iostream>
#include <string>

#include "listaGen.h"

using namespace std;
#define tempa template <class T>

int main(int argc,char* argv[])
{
    listaGen<int> l;
    for(int i=0;i<10;i++)
    {
        l.insertK(9-i,i);
    }
    cout<<"         Inicio do teste de integridade de dados:"<<endl;
    for(int i=0;i<l.getN();i++)
    {
        cout<<"l("<<i<<"): "<<l.getInfo(i)<<endl;
    }
    cout<<"         Fim do teste de integridade de dados:"<<endl;

    return 0;
}