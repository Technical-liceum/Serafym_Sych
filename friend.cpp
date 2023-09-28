/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class triangle{
    float a;
    float h;
public:
    void set_a(float x){a=x;}
    void set_h(float x){h=x;}
    //float ah(){return a*h/2;}
    friend void S(triangle &A1, triangle &A2);
};
 void S(triangle &A1, triangle &A2){
        if(A1.a*A1.h/2>A2.a*A2.h/2){cout<<"S(A1)>S(A2)";}
        else {cout<<"S(A1)<S(A2)";}
    }
    
int main()
{
    triangle B1, B2;
    B1.set_a(2);B1.set_h(2);
    B2.set_a(3);B2.set_h(3);
    S(B1,B2);
   
    return 0;
}
