#include<iostream>
using namespace std;
void prime_fun(int, int);
int check_prime(int, int);

using namespace std;
int main()
{
    int range;
    cout<<"enter the maximum range of prime number";
    cin>>range;

    prime_fun(range,2);
    return 0;
}

void prime_fun(int range,int number)
{
    int check;
    if(number==range)
        return;

    check=check_prime(number,2);

    if(check==1)
        cout<<endl<<number;
    
    prime_fun(range,++number);
}

int check_prime(int numb,int value)
{
    if(value<=(numb/2))
    {
    if((numb%value)==0)
        return 0;
    check_prime(numb,++value);
    }
    else
        return 1;
}