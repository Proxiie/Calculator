#include <iostream>
using namespace std;

///Simple Calculator

void multi() //multiplication
{
    int x= 0, num;
    int count = 1;
    cout<<"How many numbers do you want to multiply?"<<endl;
    cin>> num;

    int array[num];
    cout<<"Multiply"<<endl;

    for(int i = 0; i<num; i++)
    {
        cout<<"Number "<<count++<<":";
        cin>>x;
        array[i] = x;
    }

    int total;
    for(int i = 0; i<num; i++)
    {
        if(i == 0)
        total =  array[i]*array[i++];

        else
            total = total*array[i];
    }
    cout<<total;
}

void add()//addition
{
    int x= 0, num;
    int count = 1;
    cout<<"How many numbers do you want to Add?"<<endl;
    cin>> num;

    int array[num];
    cout<<"Addition"<<endl;

    for(int i = 0; i<num; i++)
    {
        cout<<"Number "<<count++<<":";
        cin>>x;
        array[i] = x;
    }

    int total=0;
    for(int i = 0; i<num; i++)
    {
        total += array[i];
    }
    cout<<total;
}

void sub()//subtraction
{
    int x= 0, num;
    int count = 1;

    int total = 0;

    cout<<"How many numbers do you want to Subtract?"<<endl;
    cin>> num;

    int array[num];
    cout<<"Subtraction"<<endl;

    cout<<"What Number do you want to subtract from:";
        cin>>total;

    for(int i = 0; i<num; i++)
    {
        cout<<"Number "<<count++<<":";
        cin>>x;
        array[i] = x;
    }

    for(int i = 0; i<num; i++)
    {
        total = total - array[i];
    }
    cout<<total;
}

void div()//division
{
    double x, y;

    cout<<"What number do you want to divide from:";
        cin>>x;

    cout<<x<<" divided by: ";
    cin>>y;

    double endResult = x/y;

    cout<<endResult;
}


int main()
{
    int usrMath;

    while(true)
    {

        cout<<endl<<endl;

        cout << "Calculator" << endl;
        cout << "==========" << endl;

        cout << "1:Multiply" << endl;
        cout << "2:Addition" << endl;
        cout << "3:Division" << endl;
        cout << "4:Subtraction" << endl;
        cout << "5:End Program" << endl<<endl;

        cin >> usrMath;

        if (usrMath == 1) {
            multi();
        }

        if (usrMath == 2) {
            add();
        }

        if (usrMath == 4) {
            sub();
        }

        if (usrMath == 3) {
            div();
        }

        if (usrMath == 5) {
            return 0;
        }
    }
}