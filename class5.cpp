#include<iostream>
#include<string>

using namespace std;

class students
{
public:
 string name;
 string reg;
 string current_year;
 int age;
 string gender;
 string schools_attended;
 int kCPE_MARKS;
 string grade;
 int units_in_campus;
 
 void data_intake()
 {
cout<<"STUDENTS NAME: ";
getline(cin,name);

cout<< endl;

cout<<"ENTER THE REG-NO:";
getline(cin, reg);
 
 cout<<endl;
 
 cout<<"ENTER THE STUDENTS CURRENT YEAR:";
 getline(cin,current_year);

cout<<endl;

cout<<"ENTER STUDENT'S AGE: ";
cin>>age;
cout<<endl;


cout<<"ENTER STUDENT'S KCPE MARKS: ";
cin>>kCPE_MARKS;
cout<<endl;
cout<<endl;
cout<<"ENTER STUDENT'S KCSE GRADE: ";
getline(cin,grade);
cout<<endl;
cout<<"Enter Number of unit the student has done so far: ";
cin>>units_in_campus;
}

void print_data()
{
	cout<< "The name  of the student is " <<name<< endl;
    cout<< "Students Registration Number: " <<reg<<endl;
    cout<< " The students's current year:" <<current_year<< endl;
    cout<< "Student's age': " <<age << endl;
    cout<< "Student's KCPE marks:" <<kCPE_MARKS<< endl;
    cout<< "Student's KCSE grade:" <<grade<< endl;
    cout<<"Number of unit the student has done so far:"<<units_in_campus<<endl;
}

};

int main()
{
	students student1;
	
	student1.data_intake();
	
	
	
	student1.print_data();
	
	students student2;
	
	student2.data_intake();
	
	student2.print_data();
	
}
