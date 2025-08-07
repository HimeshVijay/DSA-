#include<bits/stdc++.h>
using namespace std;
bool palindrome(int x){
    int rem=0, sum=0, og=x;
    while(x!=0){
        rem=x%10;
        sum=sum*10+rem;
        x=x/10;
    }
    return og==sum;
}
int main(){
    int x;
    cin>>x;
    if(palindrome(x)){
        cout<<"is palindrome"<<endl;
    }
    else
    cout<< "is not palindrome"<<endl;
}
