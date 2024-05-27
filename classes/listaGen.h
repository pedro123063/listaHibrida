#ifndef LISTAGEN_H
#define LISTAGEN_H
//                                                          TUDO VALIDADO EM LÓGICA.FALTA TESTE
#include <iostream>
#include "noGen.h"

using namespace std;

template <class T>
class listaGen
{
    private:
        noGen<T>* first;
        int n;
        
        bool verifPos(int k);           //ok
        noGen<T>* goNoK(int k);     //ok   
       
    
    public: 
         listaGen()             //ok
        {
            first=NULL;
            n=0;
        }
         listaGen(noGen<T>* r)              //ok
        {
            first=r;
            n=1;
        }
         ~listaGen()                    //ok    
        {
            noGen<T>* atual=first,*prox=NULL;
            if(atual!=NULL)
            {
                while(atual->getNext() != NULL)
                {
                    prox=atual->getNext();
                    delete atual;
                    atual=prox;
                }
                delete atual;
                n=0;
            }
        }

        void insertK(noGen<T> *ins , int k);       //ok 
        void insertK(T info,int k);                        

        
        void removeK(int k);                       

        T getInfo(int k);                          

        int getN(){return n;}              //ok
};
#endif