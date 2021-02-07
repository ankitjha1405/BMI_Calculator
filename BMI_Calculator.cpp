#include <iostream>
using namespace std;

// Declration of global variables

double height_of_person;
double weight_of_person;
double bmi=0;
char gender_of_person;

// Declaration of all functions

void height();
void weight();
void gender();
void check();
void male();
void female();



int main()
{
    height();
    weight();
    gender();
    double square = height_of_person * height_of_person;
    bmi=weight_of_person/square;
    bmi=bmi*10000;
    cout << "Your BMI is: " <<bmi<<endl;
    check();

    return 0;
}


void height()
{
    cout << "Enter your height (in cm): "<<endl;
    cin >> height_of_person;
    if (height_of_person <= 0)
    {
        cout << endl
             << "Plaese enter value greater then 0" << endl;
        height();
    }
}

void weight(){
    cout << "Enter your Weight(in KGs): "<<endl;
    cin >> weight_of_person;
    if (weight_of_person <= 0)
    {
        cout << endl
             << "Plaese enter value greater then 0" << endl;
        weight();
    }

}

void gender()
{
    cout<<"Enter your gender(m for Male and f for female)"<<endl;
    cin>>gender_of_person;
    if(gender_of_person=='m' || gender_of_person=='M' || gender_of_person=='f' || gender_of_person=='F')
    {
        return;
    }
    else{
        cout<<"Wrong Input"<<endl;
        gender();
    }
}

void check()
{
    if(gender_of_person=='m' || gender_of_person=='M')
    {
        male();
    }
    else{
        female();
    }
}

void male()
{
    if (bmi >= 0 && bmi <= 18.5)
    {
        cout << "You are UnderWeight!";
    }
    if(bmi>18.5 && bmi<=24.9)
    {
        cout<<"You are Healthy person!"<<endl;
    }
    if(bmi>24.9 && bmi<=29.9)
    {
        cout<<"You are in Class-1 obesity Category!";
    }
    if(bmi>29.9 && bmi<=39.9)
    {
        cout<<"You are in Class-2 obesity Category!";
    }
        if(bmi>39.9 )
    {
        cout<<"You are in Class-3 obesity Category!";
    }

}

void female()
{
    if (bmi >= 0 && bmi <= 19.1)
    {
        cout << "You are UnderWeight!";
    }
    if(bmi>19.1 && bmi<=25.8)
    {
        cout<<"You are Healthy person!"<<endl;
    }
    if(bmi>25.8 && bmi<=27.3)
    {
        cout<<"You are in Class-1 obesity Category!";
    }
    if(bmi>27.3 && bmi<=32.2)
    {
        cout<<"You are in Class-2 obesity Category!";
    }
        if(bmi>32.3)
    {
        cout<<"You are in Class-3 obesity Category!";
    }
}
