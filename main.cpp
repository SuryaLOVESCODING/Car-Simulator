#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
using namespace std;

struct Car{
    string name;
    int price;
    bool available;

};

int main() {
    vector <string> cars;  
    
    int money = 1000;
    cout<<"Welcome to the Car Rental System"<<endl<<"You start of with 1000 dollars"<<endl;
    while (true){
        cout<<"1)Work"<<endl;
        cout<<"2)Show Cars"<<endl;
        cout<<"3)Buy Cars"<<endl;
        cout<<"4)Sell Cars"<<endl;
        int optionWelcome;
        cout<<"Pick an option:";
        cin>>optionWelcome;
        cout<<endl<<endl;
        string Shop[5] = {"Toyata", "Honda", "Audi", "Tesla", "Hennessy Venom h5"};
        int Toyota_Price=500;
        int Honda_Price=700;
        int Audi_Price=1000;
        int Tesla_Price=1500;
        int Hennessy_Venom_H5=2000;
        if(optionWelcome==1){
            money+=10;
            cout<<"You now have "<<money<<" dollars"<<endl;;

            //auto val = random::get(-10, 10);
            }

        else if(optionWelcome==2){
            cout<<"Cars available:"<<endl;
            
            cout<<Shop[0]<<endl;
            cout<<Shop[1]<<endl;
            cout<<Shop[2]<<endl;
            cout<<Shop[3]<<endl;
            cout<<Shop[4]<<endl;
            cout<<"\n";

            cout<<"Your Cars:"<<endl;
            
            if(cars.size()==0){
              cout<<"You don't have cars"<<endl;
              cout<<"\n";
            }
            for(auto car: cars){
                cout << car << endl;; 
            }

            

            

            
            
        }

        else if(optionWelcome==3){
          int cartobuy;
          cout<<"1."<<Shop[0]<<"=500 dollars" <<endl;
          cout<<"2."<<Shop[1]<<"=700 dollars"<<endl;
          cout<<"3."<<Shop[2]<<"=1000 dollars"<<endl;
          cout<<"4."<<Shop[3]<<"=1500 dollars"<<endl;
          cout<<"5."<<Shop[4]<<"=2000 dollars"<<endl;
          cout<<"Pick a Car to Buy:";
          cin>>cartobuy;
          cout<<"\n";

        if(money>=500 && cartobuy==1){
              cars.push_back("Toyota");
              money-=500;
              cout<<"You have "<<money<<" dollars"<<endl;
              cout<<"Congrats you just bought a Toyota"<<endl;
              cout<<"\n";
              

          }

        if(money>=700 && cartobuy==2){
            cars.push_back("Honda");
            money-=700;
            cout<<"Congrats you just bought a Honda"<<endl;
            cout<<"You have "<<money<<" dollars"<<endl;
            cout<<"\n";

          }

        if(money>=1000 && cartobuy==3){
            cars.push_back("Audi");
            money-=1000;
            
            cout<<"Congrats you just bought a Audi"<<endl;
            cout<<"You have "<<money<<" dollars"<<endl;
            cout<<"\n";

          }


          if(money>=1500 && cartobuy==4){
            cars.push_back("Tesla");
            money-=1500;
            
            cout<<"Congrats you just bought a Tesla"<<endl;
            cout<<"You have "<<money<<" dollars"<<endl;
            cout<<"\n";

          }

        if(money>=2000 && cartobuy==5){
            cars.push_back("Hennessy Venom h5");
            money-=2000;
            
            cout<<"Congrats you just bought a Hennessy Venom h5"<<endl;
            cout<<"You have "<<money<<" dollars"<<endl;
            cout<<"\n";

          }

        

        
        }
        

        else if(optionWelcome==4){
          string sell;
          if(cars.size()==0){
            
            cout<<"You dont' have cars, press a key to continue"<<endl;
          }
          if(cars.size()!=0)
            
            cout<<"Pick a Car to Sell:"<<endl;
            for(auto car: cars){
                cout << car << endl;
                cout<<"\n";
              }
            cin>>sell;
            
            
            
            


            
            std::vector<std::string>::iterator i;
            i=std::find(cars.begin(),cars.end(),"Toyota");

            std::vector<std::string>::iterator z;
            z=std::find(cars.begin(),cars.end(),"Honda");

            std::vector<std::string>::iterator x;
            x=std::find(cars.begin(),cars.end(),"Audi");

            std::vector<std::string>::iterator y;
            y=std::find(cars.begin(),cars.end(),"Tesla");

            std::vector<std::string>::iterator u;
            u=std::find(cars.begin(),cars.end(),"Hennessy Venom H5");

          

            bool found=false;
            if(i!=cars.end() || z!=cars.end() || x!=cars.end()|| y!=cars.end() || u!=cars.end()){
              found=true;
            }
            if(found==true && sell=="Toyota"){
              cout<<"\n";
              cout<<"You just sold your Toyota!"<<endl;
              money+=700;
              cout<<"You now have "<<money<<" dollars"<<endl;
              cout<<"\n";

            }

            else if(found==true && sell=="Honda"){
              cout<<"\n";
              cout<<"You just sold your Honda!"<<endl;
              money+=900;
              cout<<"You now have "<<money<<" dollars"<<endl;
              cout<<"\n";
            }

            else if(found==true && sell=="Audi"){
              cout<<"\n";
              cout<<"You just sold your Audi!"<<endl;
              money+=1200;
              cout<<"You now have "<<money<<" dollars"<<endl;
              cout<<"\n";
            }

            else if(found==true && sell=="Tesla"){
              cout<<"\n";
              cout<<"You just sold your Tesla!"<<endl;
              money+=1700;
              cout<<"You now have "<<money<<" dollars"<<endl;
              cout<<"\n";
            }

            else if(found==true && sell=="Hennessy Venom H5"){
              cout<<"\n";
              cout<<"You just sold your Hennessy Venom H5!"<<endl;
              money+=2200;
              cout<<"You now have "<<money<<" dollars"<<endl;
              cout<<"\n";
            }


          }
          
        } 

            
}




    
  
  

  

  
    
    


  
    

// Put money 
// Show cars
// buy cars
// sell cars
// The cars are gonna stored in a array
// disaster management system/ natural disaster
//BY Surya Nachiappan
