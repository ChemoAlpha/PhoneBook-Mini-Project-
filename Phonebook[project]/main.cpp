#include <iostream>
#include<windows.h>
#include<mysql.h>
#include <sstream>
#include <string.h>
#include<dos.h>
using namespace std;


insertval(MYSQL* conn)
{       int qstate;
      string name, email,number;

        cout <<"Enter name :";
        cin >> name;
        cout <<" Enter Number :";
        cin >> number;
        cout<<" Enter email :";
        cin>> email;
        stringstream ss;

        ss << " INSERT INTO users (name , phonenumber, email) values ('" << name<<"','" <<number<<" ','" <<email <<"')";

        string query = ss.str ();
        const char * q = query.c_str();
        qstate = mysql_query(conn, q);

        if (qstate == 0)
        {

            cout <<" PhoneNumber Added To Book ..."<<endl;
        }
        else
        {
            cout <<" Error, data not inserted. Error:"<<conn<<endl;
        }
}

display(MYSQL* conn)
{
    int qstate;
    MYSQL_ROW row;
    MYSQL_RES * res;
     if (conn)
    {
        qstate = mysql_query(conn, "SELECT * FROM users");

        if (!qstate)
        {
            res = mysql_store_result(conn);

         cout<<"Contacts In PhoneBook :"<<endl;
         cout<<"\tNO\tNAME\tPHONE\tEMAIL"<<endl;
        cout<<"----------------------------------------------------------"<<endl;
            while (row = mysql_fetch_row (res))
            {
               cout<<"\t"<<row[0] <<"\t"<<row[1] <<"\t"<<row[2] <<"\t"<<row[3]<<"\n";
            }
        cout<<"----------------------------------------------------------"<<endl;
        }
    }

    else
    {
        cout <<" Connection failure Please Try Again!"<<endl;
    }

}
removeContact(MYSQL* conn)
{
 //display(conn);

 int qstate;
 cout<<"Please Enter ID of Contact that you want remove :";
 string x;
 cin>>x;
  stringstream ss;
 ss << "DELETE FROM users where id = '"+ x +"'";

 string query = ss.str ();
        const char * q = query.c_str();
        qstate = mysql_query(conn, q);
        cout<<"Deleted successfully !\n";
}
updateCon(MYSQL* conn)
{

    int qstate;
 cout<<"Please Enter ID of Contact that you want Update :";
 string x;
 cin>>x;

 cout<<"Select Option that you want to edit \n";
 cout<<"1:Name\t2:Number\t3:Email\n";
 cout<<"Enter your choice :";
 int ch;
 cin>>ch;
  stringstream ss;
  string temp;
 switch(ch)
 {
 case 1:
    {
        cout<<"Please enter New Name :";
        cin>>temp;
 ss << "UPDATE users SET name = '"+ temp +"' WHERE id= '"+x+"'";

        break;
    }
 case 2:
    {
        cout<<"Please enter New Number :";
        cin>>temp;
 ss << "UPDATE users SET phonenumber = '"+ temp +"' WHERE id= '"+x+"'";
        break;
    }
 case 3:
    {
        cout<<"Please enter New Email :";
        cin>>temp;
 ss << "UPDATE users SET email = '"+ temp +"' WHERE id= '"+x+"'";

        break;
    }
 default:
    {
        cout<<"please enter the right choice!";
        break;
    }

 }
 string query = ss.str ();
        const char * q = query.c_str();
        qstate = mysql_query(conn, q);
        cout<<"Updated Successfully!\n";
}
dropbook(MYSQL* conn)
{
    cout<<"do wish to delete your phonebook [Y/N]:";
    int i=0;
    int qstate;
    char x;
    cin>>x;
        stringstream ss;
 ss << "DELETE FROM users";
    string query = ss.str ();
        const char * q = query.c_str();
        qstate = mysql_query(conn, q);
        cout<<"Contents of PhoneBook has been Deleted Successfully!\n";
    }





int main()
{
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "phonebook", 0, NULL, 0);

    int qstate;
    if(conn)
    {
//---------------------------------------
char y='Y';



cout<<"\t\t||||||||||||||||||||||\n";
cout<<"\t\t||    PHONEBOOK     ||\n";
cout<<"\t\t||\"BY PAVAN GHATE\"  ||\n";
cout<<"\t\t||||||||||||||||||||||\n";
while(y=='Y'||y=='y')
    {
	cout<<"---------------------------------------------------------------"<<endl;
	int x=0;


	cout<<"0:View your contacts\t1:Add contacts \t2:remove contact"<<endl;
	cout<<"3:Edit your Contact\t4:Delete Phonebook\t5:exit\n";
		cout<<"---------------------------------------------------------------"<<endl;
		cout<<"Please enter your Choice :";
    cin>>x;




    switch(x)
    {
case 0:
    {

        display(conn);
        break;
    }
case 1:
    {
        insertval(conn);

        break;
    }
case 2:
    {
        removeContact(conn);
        break;
    }
case 3:
    {

        updateCon(conn);
        break;
    }
case 4:
    {

        dropbook(conn);
        break;
    }
case 5:
    {
        y='t';
        break;
    }
default:
    {

        cout<<"Enterd wrong choice";
        break;
    }
    }
    if(y=='y'||y=='Y')
        {
        cout<<"do you want to continue[Y/N] :";
        cin>>y;
        }
    }
    }
    else
    {
    cout<<"Database Error Occured Please try Again";
    }

    return 0;
}

