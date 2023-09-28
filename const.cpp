/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class BankAccount{
    string num;
    float ballance;
public:
    void set_num(string a){num=a;}
    void set_ballance(float a){ballance=a;}
    const string get_num(){return num;}
    const float get_ballance(){return ballance;}
};



int main()
{
    BankAccount A1;
    A1.set_num("11223344");
    A1.set_ballance(123.45);
    cout<<A1.get_num()<<"\t"<<A1.get_ballance()<<endl;

    return 0;
}