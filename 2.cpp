#include<iostream>
#include<string.h>
using namespace std;
// employee information

class Emp
{
	public:
	int emp_id;
	char emp_name[50];
	int emp_age;
	char emp_role[50];
	char emp_email[50];
	char emp_city[50];
	int emp_ex_year;
	char emp_com_name[50];
};

int main()
{
	Emp e1,e2,e3,e4,e5,e6,e7,e8;
	
	cout << "--------enter 1 employee information-----------" << endl;
	cout << "employree id : "; cin >> e1.emp_id; 
	cout << "employree name : "; cin >> e1.emp_name; 
	cout << "employree age : "; cin >> e1.emp_age; 
	cout << "employree role : "; cin >> e1.emp_role; 
	cout << "employree email : "; cin >> e1.emp_email; 
	cout << "employree city name : "; cin >> e1.emp_city; 
	cout << "employree experience year : "; cin >> e1.emp_ex_year; 
	cout << "employree company name : "; cin >> e1.emp_com_name; 
	cout << endl;
	
	cout << "--------enter 2 employee information-----------" << endl;
	cout << "employree id : "; cin >> e2.emp_id; 
	cout << "employree name : "; cin >> e2.emp_name; 
	cout << "employree age : "; cin >> e2.emp_age; 
	cout << "employree role : "; cin >> e2.emp_role; 
	cout << "employree email : "; cin >> e2.emp_email; 
	cout << "employree city name : "; cin >> e2.emp_city; 
	cout << "employree experience year : "; cin >> e2.emp_ex_year; 
	cout << "employree company name : "; cin >> e2.emp_com_name; 
	cout << endl;
	
	cout << "--------enter 3 employee information-----------" << endl;
	cout << "employree id : "; cin >> e3.emp_id; 
	cout << "employree name : "; cin >> e3.emp_name; 
	cout << "employree age : "; cin >> e3.emp_age; 
	cout << "employree role : "; cin >> e3.emp_role; 
	cout << "employree email : "; cin >> e3.emp_email; 
	cout << "employree city name : "; cin >> e3.emp_city; 
	cout << "employree experience year : "; cin >> e3.emp_ex_year; 
	cout << "employree company name : "; cin >> e3.emp_com_name; 
	cout << endl;
	
	cout << "--------enter 4 employee information-----------" << endl;
	cout << "employree id : "; cin >> e4.emp_id; 
	cout << "employree name : "; cin >> e4.emp_name; 
	cout << "employree age : "; cin >> e4.emp_age; 
	cout << "employree role : "; cin >> e4.emp_role; 
	cout << "employree email : "; cin >> e4.emp_email; 
	cout << "employree city name : "; cin >> e4.emp_city; 
	cout << "employree experience year : "; cin >> e4.emp_ex_year; 
	cout << "employree company name : "; cin >> e4.emp_com_name; 
	cout << endl;
	
	cout << "--------enter 5 employee information-----------" << endl;
	cout << "employree id : "; cin >> e5.emp_id; 
	cout << "employree name : "; cin >> e5.emp_name; 
	cout << "employree age : "; cin >> e5.emp_age; 
	cout << "employree role : "; cin >> e5.emp_role; 
	cout << "employree email : "; cin >> e5.emp_email; 
	cout << "employree city name : "; cin >> e5.emp_city; 
	cout << "employree experience year : "; cin >> e5.emp_ex_year; 
	cout << "employree company name : "; cin >> e5.emp_com_name; 
	cout << endl;
	cout << "--------enter 6 employee information-----------" << endl;
	cout << "employree id : "; cin >> e6.emp_id; 
	cout << "employree name : "; cin >> e6.emp_name; 
	cout << "employree age : "; cin >> e6.emp_age; 
	cout << "employree role : "; cin >> e6.emp_role; 
	cout << "employree email : "; cin >> e6.emp_email; 
	cout << "employree city name : "; cin >> e6.emp_city; 
	cout << "employree experience year : "; cin >> e6.emp_ex_year; 
	cout << "employree company name : "; cin >> e6.emp_com_name; 
	cout << endl;
	
	cout << "--------enter 7 employee information-----------" << endl;
	cout << "employree id : "; cin >> e7.emp_id; 
	cout << "employree name : "; cin >> e7.emp_name; 
	cout << "employree age : "; cin >> e7.emp_age; 
	cout << "employree role : "; cin >> e7.emp_role; 
	cout << "employree email : "; cin >> e7.emp_email; 
	cout << "employree city name : "; cin >> e7.emp_city; 
	cout << "employree experience year : "; cin >> e7.emp_ex_year; 
	cout << "employree company name : "; cin >> e7.emp_com_name; 
	cout << endl;
	
	cout << "--------enter 8 employee information-----------" << endl;
	cout << "employree id : "; cin >> e8.emp_id; 
	cout << "employree name : "; cin >> e8.emp_name; 
	cout << "employree age : "; cin >> e8.emp_age; 
	cout << "employree role : "; cin >> e8.emp_role; 
	cout << "employree email : "; cin >> e8.emp_email; 
	cout << "employree city name : "; cin >> e8.emp_city; 
	cout << "employree experience year : "; cin >> e8.emp_ex_year; 
	cout << "employree company name : "; cin >> e8.emp_com_name; 
	cout << endl;
	
    cout << "-------- 1 employee information-----------" << endl;	
	cout << "employree id : " << e1.emp_id << endl
	     << "employree name : " << e1.emp_name << endl
	     << "employree age : "  << e1.emp_age << endl
	     << "employree role : " << e1.emp_role << endl
	     << "employree email : " << e1.emp_email << endl
	     << "employree city name : " << e1.emp_city << endl
	     << "employree experience year : " << e1.emp_ex_year << endl
	     << "employree company name : " <<  e1.emp_com_name << endl;
	     
    cout << "-------- 2 employee information-----------" << endl;	
	cout << "employree id : " << e2.emp_id << endl
	     << "employree name : " << e2.emp_name << endl
	     << "employree age : "  << e2.emp_age << endl
	     << "employree role : " << e2.emp_role << endl
	     << "employree email : " << e2.emp_email << endl
	     << "employree city name : " << e2.emp_city << endl
	     << "employree experience year : " << e2.emp_ex_year << endl
	     << "employree company name : " <<  e2.emp_com_name << endl;
	     
	cout << "-------- 3 employee information-----------" << endl;	
	cout << "employree id : " << e3.emp_id << endl
	     << "employree name : " << e3.emp_name << endl
	     << "employree age : "  << e3.emp_age << endl
	     << "employree role : " << e3.emp_role << endl
	     << "employree email : " << e3.emp_email << endl
	     << "employree city name : " << e3.emp_city << endl
	     << "employree experience year : " << e3.emp_ex_year << endl
	     << "employree company name : " <<  e3.emp_com_name << endl;
	     
	     
    cout << "-------- 4 employee information-----------" << endl;	
	cout << "employree id : " << e4.emp_id << endl
	     << "employree name : " << e4.emp_name << endl
	     << "employree age : "  << e4.emp_age << endl
	     << "employree role : " << e4.emp_role << endl
	     << "employree email : " << e4.emp_email << endl
	     << "employree city name : " << e4.emp_city << endl
	     << "employree experience year : " << e4.emp_ex_year << endl
	     << "employree company name : " <<  e4.emp_com_name << endl;
	     
    cout << "-------- 5 employee information-----------" << endl;	
	cout << "employree id : " << e5.emp_id << endl
	     << "employree name : " << e5.emp_name << endl
	     << "employree age : "  << e5.emp_age << endl
	     << "employree role : " << e5.emp_role << endl
	     << "employree email : " << e5.emp_email << endl
	     << "employree city name : " << e5.emp_city << endl
	     << "employree experience year : " << e5.emp_ex_year << endl
	     << "employree company name : " <<  e5.emp_com_name << endl;
	     
	     
	cout << "-------- 6 employee information-----------" << endl;	
	cout << "employree id : " << e6.emp_id << endl
	     << "employree name : " << e6.emp_name << endl
	     << "employree age : "  << e6.emp_age << endl
	     << "employree role : " << e6.emp_role << endl
	     << "employree email : " << e6.emp_email << endl
	     << "employree city name : " << e6.emp_city << endl
	     << "employree experience year : " << e6.emp_ex_year << endl
	     << "employree company name : " <<  e6.emp_com_name << endl;
	     
    cout << "-------- 7 employee information-----------" << endl;	
	cout << "employree id : " << e7.emp_id << endl
	     << "employree name : " << e7.emp_name << endl
	     << "employree age : "  << e7.emp_age << endl
	     << "employree role : " << e7.emp_role << endl
	     << "employree email : " << e7.emp_email << endl
	     << "employree city name : " << e7.emp_city << endl
	     << "employree experience year : " << e7.emp_ex_year << endl
	     << "employree company name : " <<  e7.emp_com_name << endl;
	     
	cout << "-------- 8 employee information-----------" << endl;	
	cout << "employree id : " << e8.emp_id << endl
	     << "employree name : " << e8.emp_name << endl
	     << "employree age : "  << e8.emp_age << endl
	     << "employree role : " << e8.emp_role << endl
	     << "employree email : " << e8.emp_email << endl
	     << "employree city name : " << e8.emp_city << endl
	     << "employree experience year : " << e8.emp_ex_year << endl
	     << "employree company name : " <<  e8.emp_com_name << endl;
	
	
}
