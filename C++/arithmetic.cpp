/*
Task
Read two integers from STDIN and print three lines where:

The first line contains the sum of the two numbers.
The second line contains the difference of the two numbers (first - second).
The third line contains the product of the two numbers.
*/

#include "iostream"

using namespace std;

class arithmetic{
    public:
        int add(int x, int y){
           cout<<"Sum : "<<x+y<<endl;
           return 0;
        }
        int sub(int x, int y){
            cout<<"Difference : "<<x-y<<endl;
            return 0;
        }
        int mul(int x, int y){
            cout<<"Multiplication : "<<x*y<<endl;
            return 0;
        }
};

int main(){
    int a,b;
    cout<<"Enter two integers a and b: "<<endl;
    cin>>a;
    cin>>b;
    arithmetic b1;
    b1.add(a,b);
    b1.sub(a,b);
    b1.mul(a,b);
}
