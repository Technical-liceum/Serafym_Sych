/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Book{
    string name;
    string author;
    static int num;
public:
    int get_num(){return num;}
};
int Book::num = 3;
int main()
{
    Book Earth, News;
    cout<<Earth.get_num()<<"\t"<<News.get_num();

    return 0;
}
