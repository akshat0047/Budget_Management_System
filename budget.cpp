#include<iostream.h>
#include<conio.h>

class budget_system{

public:
  struct data{
    int income;
    int food_expenditure;
    int stationary_expenditure;
    int extra_expenses;
    int savings;
    int borrowed_money;
    }month[11];

  void show_meu();
  void show_record();
  void add_info();

  budget_system()
  {
  int i=0;
  for(i=0;<i<12;i++)
  {
   month[i].income=0;
   month[i].food_expenditure=0;
   month[i].stationary_expenditure=0;
   month[i].extra_expenses=0;
   month[i].savings=0;
   month[i].borrowed_money=0;
  }
  }
};

void budget_system::show_menu()
{
int ch;
cout<<"PERSONAL BUDGET ASSISTANT"<<endl<<"****************************************"<<endl<endl;
cout<<"1- CHECK RECORD"<<endl<<"2- ADD RECORD"<<endl<<"3- CHECK LOAN"<<endl<<"4- CHECK SAVINGS"<<endl"5- BACK"<<endl<<endl;
cout<<"****************************************"<<endl<<endl;
cin>>ch;

switch(ch)
{
case 1:

break;

case 2:
 obj.add_info();
break;

case 3:

break;

case 4:

break;

default:
}
}

void budget_system::add_info(){
int n;
cout<<ENTER MONTH<<endl;
cin>>n;
cout<<"*********ENTER THE BUDGET INFORMATION*********"<<endl;
cout<<endl<<"ENTER INCOME"<<endl;
cin>>month[i].income;
cout<<endl<<"ENTER FOOD EXPENDITURE"<<endl;
cin>>month[i].food_Expenditure;
cout<<endl<<"ENTER STATIONARY EXPENDITURE"<<endl;
cin>>month[i].stationary_expenditure;
cout<<endl<<"ENTER EXTRA EXPENSES"<<endl;
cin>>month[i].extra_expenses;
cout<<endl<<"ENTER SAVINGS"<<endl;
cin>>month[i].savings;
cout<<endl<<"BORROWED MONEY"<<endl;
cin>>month[i].borrowed_money;
cout<<endl<<"*********THANK YOU*********"<<endl;

fstream file(,ios::out)
show_menu();
}


class student_user: public budget_system{
 private:
   string pwd;
 public:
   string username;

   user()
   {
   cout<<endl<<endl<<"ENTER USERNAME"<<endl<<"******************";
   getline(cin.username);
   cout<<endl<<"ENTER PASSWORD"<<endl<<"******************";
   getline(cin.pwd);

   if(username!=NULL && pwd!=NULL)
   {
   ofstream ofobj;
   if(ofobj.open("users.txt",ios::app))
   {
    getline(ofobj.username);
    getline(ofobj.pwd);
    ofobj<<endl<<endl;
   }

   else{

   }

   budget_system obj.show_menu();
   }
   }
   void start_budget_management();
   void delete_acount();
   };

class script{

private:
string author="AKSHAT PANDE";
string date="15/11/2018";
string benefits="xyz";

public:
 void show_details()
 {
  cout<<"********DETAILS********"<<endl<<endl;
  cout<<endl<<"AUTHOR"<<endl<<"----------"<<endl;
  puts(author);
  cout<<endl<<"DATE"<<endl<<"----------"<<endl;
  puts(date);
  cout<<endl<<"BENEFITS OF USE"<<endl<<"----------"<<endl;
  puts(benefits);
 }

script()
{
  show_details();
}
}

void main()
{
 int ch;
 cout<<"PERSONAL BUDGET ASSISTANT"<<endl<<"****************************************"<<endl<endl;
 cout<<"1- MAKE ACCOUNT"<<endl<<"2- DELETE ACCOUNT"<<endl<<"3- LOGIN"<<endl<<"3- BENEFITS OF USING"<<endl<<endl;
 cout<<"****************************************";

 switch(ch)
 {
 case 1:
 user obj;

 break;

 case 2:

 break;

 case 3:

 break;

 case 4:
 script obj;
 break;
 }
}
