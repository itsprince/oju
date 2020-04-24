//takes something returns something
#include<iostream>
using namespace std;
int dis(int);
int main()
{
    int n=200;
    cout<<"in main\n";
    n=dis(n);
    cout<<n;
}
int dis(int a)
{
    int c;
    int x=100;
    c=x+a;
    return(c);

}
