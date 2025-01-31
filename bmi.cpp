#include <iostream>
using namespace std;

int main(){
    float b;
    double minw, maxw, weight, height;

    cout<<"For Body mass index we would need"<<endl;
    cout<<"weight in kg: "<<endl;
    cin>>weight;
    cout<<"height in m: "<<endl;
    cin>>height;

    b=float (weight/(height*height));
    cout<<"Then BMI is: "<<b<<endl;
    
    minw=(18.5*height*height);
    maxw=(24.9*height*height);
    
    if (b<=18.5){
        cout<<"Category: Underweight"<<endl
        <<"You need to gain atleast "<<(minw-weight)<<" kg to reach normal range"<<endl;
    }

    else if (b<24.9 && b>=18.5){
        cout<<"Category: Normal weight"<<endl
        <<"You are healthy keep up good work"<<endl;
    }

    else if (b<29.9 && 25<=b){
        cout<<"Category: Overweight"<<endl
        <<"You need to lose atleast "<<(weight-maxw)<<" kg to reach normal range"<<endl;
    }

    else if (30<=b && b<=35){
        cout<<"Category: Obese"<<endl
        <<"You need to lose atleast "<<(weight-maxw)<<" kg to reach normal range"<<endl;
    }

    else{
        cout<<"Category: Extremely obese "<<endl
        <<"You need to lose atleast "<<(weight-maxw)<<" kg to reach normal range"<<endl;
    }
    
    return 0;
}
