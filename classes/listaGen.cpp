#include "listaGen.h"

#define TEMP template <class T>

TEMP
bool listaGen<T>::verifPos(int k)
{
    if(k<0 || k>=n)
        return false;
    return true;
}

TEMP
noGen<T>* listaGen<T>::goNoK(int k)
{
    if(!verifPos(k))
    {
        cout<<"Erro!!! Tentativa de acessar goNoK("<<k<<") invalido. Encerrando o programa."<<endl;
        exit(1);
    }
    nogen<T>* atual=first;
    for(int i=0;i<k;i++)
    {
        atual=atual->get.next();
    }
    return atual;
}

TEMP
void listaGen<T>::insertK(noGen<T>* ins,int k)
{
    n++;
    if(!verifPos(k))
    {
        cout<<"Erro!!!!Tentativa de inserir no em posicao invalida: insertK(noGen<T>* ins,int "<<k<<").Encerrando o programa."<<endl;
        exit(2);
    }
    if(k==0 && k<n-1)
    {     
        ins->setNext(first);
        first=ins;   
    }
    else if(k==0 && k==n-1)
         {
            first=ins;
            ins->setNext(NULL);
         }
         else if(k>0 && k<n-1)
              {
                noGen<T> *prev,*cur;
                prev=goNoK(k-1);
                cur=prev->next();
                prev->setNext(ins);
                ins->setNext(cur);
              }
              else if(k>0 && k==n-1)
                   {
                        noGen<T> *prev=goNoK(k-1);
                        prev->setNext(ins);
                        ins->setNext(NULL);
                   }
}