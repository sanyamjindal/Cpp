#include<iostream>
using namespace std;
int main(){

    long n;
    long rev = 0;
    long temp;
    cout<<"Enter The Integer:";
    cin>>n;

    while (n!=0)
    {
    temp = n % 10;
    rev = rev * 10 + temp ;
    n = n / 10;
    }
    
    cout<<rev;
    return 0;
}