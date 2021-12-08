#include<iostream>
using namespace std;

void printNumber(int* numberptr){
    cout<< *numberptr <<endl;
}

void printLetter(char* letterptr){
    cout<< *letterptr <<endl;
}

void print(void* prt,char type){
    switch (type){
        case 'i':cout<< *((int*)prt)<< endl; break;
        case 'c':cout<< *((char*)prt)<< endl; break;
    }
}

int main()
{
    int number = 5;
    char letter = 'a';
    //printNumber(&number);
    //printLetter(&letter);

    print(&number, 'i');
    print(&letter, 'c');

    return 0;

}