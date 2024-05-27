#include <iostream> 

#include "C:\Users\Pedro\ProgramasdoPedro\AprendendoCplusplus\listaHibrida\classes\noGen.h"
using namespace std;

int main(int argc,char* argv[])
{
    noGen<int> n(772);

    cout<<""<<n.getInfo()<<endl;
    return 0;
}