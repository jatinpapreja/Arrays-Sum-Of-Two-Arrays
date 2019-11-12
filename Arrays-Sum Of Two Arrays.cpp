#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n1=0,n2=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
            cin>>a[i];
           n1 += a[i]*pow(10,n-i-1);}
    int m;cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
            cin>>b[i];
           n2 += b[i]*pow(10,m-i-1);}
    long n3=n1+n2;
   /// cout<<n1<<" "<<" "<<n2<<" "<<n3<<endl;
    int temp=n3,o=0;
    while(temp)
    {
        o++;
        temp = temp/10;
    }
    int c[o];
    for(int i=o-1;i>=0;i--)
    {
           c[i]=n3%10;
           n3=n3/10;
    }
    for(int i=0;i<o;i++)cout<<c[i]<<", ";
    cout<<"END";
}
