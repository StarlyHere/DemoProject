#include <iostream>
using namespace std;

int main(){

    int choice(0);

    double base_cost(2.50);
    int max_meters(10);
    int first_volume(100);
    int second_volume(500);
    double first_surcharge(0.10);
    double second_surcharge(0.50);
    int volume(0);
    cout<<" "<<endl;
    cout<<" "<<endl;
    
    cout<<"Choice [1]: Book a Carpet Cleaning Service"<<endl;
    cout<<"Choice [2]: Genarate your Washing Expense with Tax"<<endl;
    cout<<"Choice [3]: Genarate to check how Change can be returned "<<endl;
    cout<<"Choice [4]: Genarate yout Shipping Expenses "<<endl;
    cout<<"Enter your choice of task: ";
    cin>>choice;


    if(choice ==1){
        cout<<"------------------------------------ "<<endl;
        cout<<"FRANK'S CARPET SERVICE BOOKING !"<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<endl;

        int width, height, length;
        cout<<"Please enter the dimensions of your Carpet (in order width, height, length): "<<endl;
        cout<<endl;

        cin>>width;
        cin>> height;
        cin>>length;
        

        if(width>max_meters || height>max_meters || length>max_meters){
            cout<<endl;
            cout<<"Booking Failed. Dimension exceeds limit."<<endl;
            cout<<"Make sure all dimensions of your Carpet are within 10 meters."<<endl;
            cout<<endl;
        }else {
            cout<<endl;
            cout<<"Booking successfull."<<endl;
            cout<<endl;
            

        }



    }
    else if(choice == 2){

        cout<<"------------------------------------ "<<endl;
        cout<<"  WASHING EXPENSE GENERATOR  !"         <<endl;
        cout<<"------------------------------------"<<endl;
        cout<<endl;

        int width, height, length;
        cout<<"Please enter the dimensions of your Carpet (in order width, height, length): "<<endl;
        cout<<endl;

        cin>>width;
        cin>> height;
        cin>>length;

        int package_volume;
        package_volume = width*height*length;
        int base_wash(15);
        double tier2_surcharge(0.50);
        double tier3_surcharge(0.75);
        double tax(0.60);
        int total_cost(0);
        cout<<endl;
        cout<<"Carpet Vomlume          : "<<package_volume<<" cubic meteres"<<endl;

        if(package_volume>700){
            cout<<"Base cost           $ :"<<base_wash<<endl;
            cout<<"Surcharge             : $ "<<tier3_surcharge<<endl;
            cout<<"Your washing cost is  : $"<<base_wash + base_wash*tier3_surcharge<<endl;
            cout<<"Tax                   : $"<<(base_wash + base_wash*tier3_surcharge)*tax<<endl;
           
            total_cost = (base_wash + base_wash*tier3_surcharge) +(base_wash + base_wash*tier3_surcharge)*tax;
            



        }else if(package_volume>500 && package_volume<700){
            cout<<"Base cost           $ :"<<base_wash<<endl;
            cout<<"Surcharge: $  "<<tier2_surcharge<<endl;
            cout<<"Your wahing cost is: $"<< base_wash + base_wash*tier2_surcharge<<endl;
             cout<<"Tax                   : $"<<(base_wash + base_wash*tier2_surcharge)*tax<<endl;
            
            total_cost = (base_wash + base_wash*tier2_surcharge) +(base_wash + base_wash*tier2_surcharge)*tax;
            


        }else if(package_volume<500){
            cout<<"Base cost              : $"<<base_wash<<endl;
            cout<<"Surcharge              : $0 "<<endl;
            cout<<"Your washing cost is    : $"<< base_wash<<endl;
            cout<<"Tax                   : $"<<base_wash*tax<<endl;
           
            total_cost = base_wash + (base_wash*tax);
            


        }
        cout<<"------------------------------------------------------"<<endl;
        cout<< "                  $"<< total_cost                         <<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<"Thank You"<<endl;






    }



















if(choice==4){   

    cout<<"------------------------------------ "<<endl;
    cout<<"FRANK'S SHIPPING CHARGE GENERATOR !"<<endl;
    cout<<"------------------------------------"<<endl;


    int height,length,width;
    cout<<"Enter in order length, height and width: "<<endl;
    cin>>length>>height>>width;


    if (length>max_meters||height>max_meters||width>max_meters){
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



    }}




}
