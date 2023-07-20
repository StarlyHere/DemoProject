#include <iostream>
using namespace std;

int main(){

    
    double base_cost(2.50);
    int max_inches(10);
    int first_volume(100);
    int second_volume(500);
    double first_surcharge(0.10);
    double second_surcharge(0.50);
    int volume(0);
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"If this doesn't work, -_- i'll try again."<<endl;
    cout<<"hello"<<endl;
    cout<<"------------------------------------ "<<endl;

    cout<<"FRANK'S SHIPPING CHARGE GENERATOR !"<<endl;
    cout<<"------------------------------------"<<endl;
    int height,length,width;
    cout<<"Enter in order length, height and width: "<<endl;
    cin>>length>>height>>width;
    if (length>max_inches||height>max_inches||width>max_inches){
        cout<<"Sorry! Package rejected - dimension exceeded. ";
        cout<<" "<<endl;
    }else{

        double package_cost(0);
        int package_volume(0);
        double shipping_cost(0);
        package_volume = length * height * width;
        cout<<"The volume of your package is: "<<package_volume<<endl;
        cout<<" "<<endl;
        

        if(package_volume>500){
            
            shipping_cost = base_cost + base_cost*first_surcharge;
            cout<<"Tier 2 surcharge has been added!"<<endl;


        } else if(package_volume>100){
            
            shipping_cost = base_cost + second_surcharge*base_cost;
            cout<<"Tier 1 surcharge has been added!"<<endl;

        }else{
            shipping_cost = base_cost;
            cout<<"No surcharge has been added!"<<endl;
        } 
        cout<<"________________________________________________________"<<endl;
        cout<<"Your package will cost:  $"<<shipping_cost<<" to ship. "<<endl;
        cout<<"________________________________________________________"<<endl;
        cout<<" "<<endl;



    }




}
