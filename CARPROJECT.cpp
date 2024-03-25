#include<iostream>
#include<thread>
#include<ctime>
#include<string>
#include<fstream>
using namespace std;
//defined classes for different cars

class HondaCity
{
   public:
   HondaCity()
   {
      int k;
      int Rent=3000;
      cout<<"Rate=3000"<<endl;
      cout<<"Colour=Black";
      cout<<"enter the days you need the car";
      cin>>k;
      int Rate=Rent*k;
      cout<<"Total payable amount is :"<<Rate;
   }
};
class HondaAmaze
{
   public:
   HondaAmaze()
   {
      int k;
      int Rent=2000;
      cout<<"Rate=2000"<<endl;
      cout<<"Colour=White\n";
      cout<<"enter the days you need the car";
      cin>>k;
      int Rate=Rent*k;
      cout<<"Total payable amount is :"<<Rate;
   }
};
class SkodaSup
{
   public:
   SkodaSup()
   {
      int k;
      int Rent=2300;
      cout<<"Rate=2300"<<endl;
      cout<<"Colour=Navy Blue\n";
      cout<<"enter the days you need the car";
      cin>>k;
      int Rate=Rent*k;
      cout<<"Total payable amount is :"<<Rate;
   }
};
class Mercedes
{
   public:
   Mercedes()
   {
      int k;
      int Rent=4600;
      cout<<"Rate=4600"<<endl;
      cout<<"Colour=Shining White \n";
      cout<<"enter the days you need the car";
      cin>>k;
      int Rate=Rent*k;
      cout<<"Total payable amount is :"<<Rate;
   }
};
class BMW
{
   public:
   BMW()
   {
      int k;
      int Rent=5600;
      cout<<"Rate=5600"<<endl;
      cout<<"Colour=Grey Metallic  \n";
      cout<<"enter the days you need the car";
      cin>>k;
      int Rate=Rent*k;
      cout<<"Total payable amount is :"<<Rate;
   }
};
class LandCr
{
   public:
   LandCr()
   {
      int k;
      int Rent=8600;
      cout<<"Rate=8600"<<endl;
      cout<<"Colour=White\n";
      cout<<"enter the days you need the car";
      cin>>k;
      int Rate=Rent*k;
      cout<<"Total payable amount is :"<<Rate;
   }
};
class Fortuner
{
   public:
   Fortuner()
   {
      int k;
      int Rent=3600;
      cout<<"Rate=3600"<<endl;
      cout<<"Colour=White\n";
      cout<<"enter the days you need the car";
      cin>>k;
      int Rate=Rent*k;
      cout<<"Total payable amount is :"<<Rate;
   }
};
class Vitara
{
   public:
   Vitara()
   {
      int k;
      int Rent=1600;
      cout<<"Rate=1600"<<endl;
      cout<<"Colour=Orange-White\n";
      cout<<"enter the days you need the car";
      cin>>k;
      int Rate=Rent*k;
      cout<<"Total payable amount is :"<<Rate;
   }
};
class Creta
{
   public:
   Creta()
   {
      int k;
      int Rent=2000;
      cout<<"Rate=2000"<<endl;
      cout<<"Colour=Off-White\n";
      cout<<"enter the days you need the car";
      cin>>k;
      int Rate=Rent*k;
      cout<<"Total payable amount is :"<<Rate;
   }
};
//function called in the main function if the user chooses an SUV to rent 
void SUV()
{   
   int f,b,m;
   
   cout<<"SUVs for the toughest"<<endl;
   cout<<"5 seater,7 seater or (enter numerical value only)";
   cin>>f;

   if(f==5)
      {
      cout<<"SUVs available are::1)Vitara Brezza\t2)Hyundai Creta\nChoose among them";
      cin>>b;

      if(b==1)
      {
         cout<<"You chose Vitara Brezza";
         Vitara VB;
      }

      else if (f==2)
      {
         cout<<"You chose Hyundai Creta";
         Creta C;
      }   
}

else if (f==7)
{
   cout<<"SUVs available are::1)Land Cruiser /t2)Toyota Fortuner\nChoose among them";
   cin>>m;

   if(m==1)
   {
      cout<<"You chose Land Cruiser ";
      LandCr LC;
   }

   else if(m==2)
   {
      cout<<"You chose Toyota Fortuner ";
      Fortuner F;
   }
}
}
//function called in the main function if the user chooses Sedan to rent 
void Sedan()
{
   int g,h,i;

   cout<<"Sedan, where comfort matters\n";
   cout<<"4 seater or  6 seater(enter numerical value only)";
   cin>>g;

   if(g==4)
   {
      cout<<"4 seater SEDANs available are:\n1) Hondacity 2) Honda Amaze 3)Skoda Superb,Which one will you like to go on ?";
      cin>>h;
   if(h==1)
   {
      cout<<"You chose Honda City"<<endl;
      HondaCity HC;
   }
   else if (h==2)
   {
      cout<<"You chose Honda Amaze";
      HondaAmaze HA;
   }
   else if(h==3)
   {
      cout<<"You chose Skoda Superb";
      SkodaSup SS;
   }
}
   else if(g==6)
   {
      cout<<"6 seater SEDANs available are 1)Mercedes S340 2) BMW X250";
      cin>>i;
      if(i==1)
      {
         cout<<"You chose Mercedes S340";
         Mercedes MS;
      }
      else if(i==2)
      {
         cout<<"You chose BMW X250\n";
         BMW B;
      }
   }
}


int main()
{ 
   int v;
   char y;
   //different string variables for file handling 
   string UserNamess,Passwordss,UserNames,Passwords,a,UserName,Password,start;
   cout<<"\t\t\t\t\t\tKaRent Car Rental"<<endl;

   //sleep function delays the execution by the amount of seconds i have set,i can change the amount of seconds depending upon time required.

   this_thread::sleep_for(1s);

   cout<<"\t\t\t-------------------------------------------------------------"<<endl;
   cout<<"\t\t\tThe Most Trusted Car Rental Brand which cares for the customer"<<endl;
   cout<<"\t\t\t-------------------------------------------------------------"<<endl;

   this_thread::sleep_for(1.20s);

   cout<<"Welcome to the most user friendly place to rent cars ,we feel obliged to tell that we have again topped the list of the" <<endl<<"highest number of cars rented by a company"<<endl;

   //asking to signup or login.

   cout<<"Signup or Login:";
   cin>>start;

   //if user presses sign up he/she sets a username and password for it and this gets saved into a file i created naming userid.txt and when he/she logins again the ifstream reads from the file if the one entered during login and the one set earlier in the file is same or not ,it only gives access to move ahead only if both matches .

   if(start=="Signup")
   {
      cout<<"enter username for you";
      cin>>UserName;
      cout<<"set up a password";
      cin>>Password;

      ofstream userid("userid.txt");//ofstream means to put in a file 
      userid<<UserName<<endl<<Password;   
   }
   else if (start=="Login")
   {
      cout<<"enter your preset username ";
      cin>>UserNamess;
      cout<<"Enter your Password";
      cin>>Passwordss;

      ifstream userid("userid.txt");
      //used getline to not get error if the user writes more than one word
      getline(userid,UserNames);
      getline(userid,Passwords);

      if(UserNamess==UserNames && Passwordss==Passwords)
      {
         cout<<"Access granted";
      }
      else
      { 
         cout<<"Wrong credentials";
         return 0;
      }
    }
      else
      {
         cout<<"Write among Signup and Login only";
         return 0;
      }
      cout<<"\nPlease enter the year you were born";
      cin>>v;

     //using ctime library checking whether the user is above 18 or not .

      time_t now =time(0);
      tm*localTime=localtime(&now) ;//tm is a predefined struct in ctime header file
      int presentyear=localTime->tm_year+1900;

   if(presentyear-v>=18)
   {
      cout<<"You are eligible to drive(18+)";

      this_thread::sleep_for(1.20s);

      cout<<endl<<"Which type of car are you looking for ,Sedan or SUV";
      cin>>a;

      if(a=="Sedan"||a=="SEDAN")
      {
         Sedan();
      }
      else if (a=="SUV"||a=="SUV")
      {
         SUV();
      }
      else

      cout<<"please chose valid option-";
      cin>>a;

      if(a=="sedan"||a=="SEDAN")
      {
         Sedan();
      }
      else if (a=="SUV"||a=="suv")
     {
        SUV();
     }      
 }

else
{
cout<<"You are under the age of 18 ,cannot drive ,go ride a bicycle"<<endl;
}
cout<<"Thanks for visiting us ,happy to serve you always:\n Karent cars";
}
