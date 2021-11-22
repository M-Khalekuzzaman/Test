#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //reverse number and palindrome;
    int num,rev = 0 ,rem,temp;
    cout<<"Enter your reverse number : ";
    cin>>num;
    temp = num;
    while(temp != 0 )
    {
        rem = temp % 10;
        rev = rev + rem*rem*rem;
        temp = temp/10;

    }
    //cout<<"The reverse number is : "<<rev<<endl;
    /*
    if(rev == num)
        cout<<"This number is palindrome number";
    else
        cout<<"Number is not palindrome";
    */
    if(rev == num)
        cout<<"This number is armstrong number";
    else
        cout<<"This number is not armstrong number ";
    getch();
}
