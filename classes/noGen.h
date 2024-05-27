#ifndef NOGEN_H
#define NOGEN_H

#include <iostream>

using namespace std;

template <class T>
class noGen
{
    private:
        T info;
        noGen<T>* next;
    public:
        noGen(T infor)
        {
            info=infor;
            next=NULL;
        }
        
        void setNext(noGen<T>* pt){next=pt;}
        void setInfo(T in){info=in;}


        T getInfo(){return info;}
        noGen<T>* getNext(){return next;} 

};
#endif