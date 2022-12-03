#include<iostream>
using namespace std;
int main()
{
    //taking total income of the user as input
    cout<<"Enter your total income this month"<<endl;;
    int income;
    cin>>income;
    //expense at underbelly
    cout<<"Enter your expenses at underbelly"<<endl;
    int underbelly;
    cin>>underbelly;
    //expense for stationary
    cout<<"Enter your expenses for stationary / college purposes "<<endl;
    int misc;
    cin>>misc;
    //misc expense
    cout<<"Did you spend any money other than this"<<endl;
    int other;
    cin>>other;
    //total expenditure
    int total=underbelly+misc+other;
    //total savings
    int savings=(income-total);
    //comparing 
    if(total>0.5*income){
        cout<<"You need to cut down your expenditure!"<<endl;
    }
    else if(total==0.5*income){
        cout<<"You are on the track!"<<endl;
        cout<<"Savings="+savings<<endl;
    }
    else{
        cout<<"You are doing great!"<<endl;
        cout<<"Savings="+savings<<endl;
    }
    //for final amount in hand
    cout<<"Enter saved allowances in cash"<<endl;
    int cash;
    cin>>cash;
    cout<<"Enter saved allowances in bank"<<endl;
    int credit;
    cin>>credit;
    int final=cash+credit+savings;
    cout<<"Okay! Here's your total savings in hand. Use wisely!"<<endl;
    cout<<final;
}