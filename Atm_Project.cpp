#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class bank {
  //private variables used to be inside class
  private:
         string name;
         int acnumber;
         char type[10];
         int amount=0;
         int total=0;
  //public variables
  public:
        //function to set the person's data
        void setvalue(){
          cout << "Enter Your Name:"<<endl;
          cin.ignore();
          
          //to use space in the string
          getline(cin,name);

          cout << "Enter Account Number:" << endl;
          cin >> acnumber;
          cout << "Enter Account Type:" << endl;
          cin >> type;
          cout << "Enter balance:" << endl;
          cin >> total;

        }
        //Function to display the required data
        void yourdata(){
          cout << "Name:" << name << endl;
          cout << "Account Number:" << acnumber << endl;
          cout << "Account type:" << type << endl;
          cout << "Balance:" << total << endl;
        }

        //Function to deposit the Amount in Account
        void deposit(){
          cout << endl << "Enter amount to be deposited:" << endl;
          cin >> amount;
        }

        //Function to show the balance in the account
        void showbalance(){
          total = total + amount;
          cout << endl << "Total balance is:" << total;
        }

        //Function to withdraw the amount from the account
        void withdrawn(){
          int temp, available_bal;
          cout << "Enter the Amount to be withdrawn:" << endl;
          cin >> temp;
          available_bal = total - temp;
          cout << "Available balance is: " << available_bal << endl;
        }
   //ending of the class bank
};
        //Main function begins 
int main(){
    //Object of the class 'bank'
    bank a;
    int choice;
    
    //Infinite loop to choose options everytime
    while(1){
         cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n";
         cout << "Welcome to State Bank of India, we are most trustable and secure bank of India" << endl;
         cout << "Enter your choice" << endl;
         cout << "\t 1. Enter Name , Account Number , Account Type:-" << endl;
         cout << "\t 2. Balance Enquiry:-" << endl;
         cout << "\t 3. Deposit money:-" << endl;
         cout << "\t 4. Check Total Balance:-" << endl;
         cout << "\t 5. Withdraw Money:-" << endl;
         cout << "\t 6. Cancel" << endl;
         cin >> choice;

         //choices to be select using switch case
         switch(choice){
           case 1:
                 a.setvalue();
                 break;
           case 2:
                a.yourdata();
                 break;
           case 3:
                 a.deposit();
                 break;
           case 4:
                 a.showbalance();
                 break;
           case 5:
                 a.withdrawn();
                 break;
           case 6:
                 cout << "Thank You !! Vist Again please";
                 exit(1);
                 break;
           default:
                 cout << endl << "Invalid Choice!!" << endl;      
         }
    }

}