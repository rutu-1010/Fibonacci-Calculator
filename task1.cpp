#include <iostream>
using namespace std;
void fib(int x){
    int t1 = 0;
    int t2 = 1;
    int next_term;

    for(int i=1;i<=x;i++){
        cout<<t1<<endl;
        next_term=t1+t2;
        t1=t2;
        t2=next_term;

    }
    return;
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    fib(n);
}