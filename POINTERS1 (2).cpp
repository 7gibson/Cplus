//pointers stores an address a memory location.

#include<iostream>
using namespace std;
void printnumber(int *numberptr)//the function is receiving an interger pointer we call it numberptr
{
	cout << *numberptr<<endl;
}

void printchar(char *characterptr)
{
	cout<<*characterptr<<endl;
}


//int main()
//{
//	int a=5;
//	cout<<&a;
//	int *ptr=&a; //point should have an address
//	
//	cout<<endl;
//	cout<<ptr;
//	cout<<endl;
//	cout<<*ptr;
//	cout<<endl;
//	
//	// changing the value stored in the ptr address
//	*ptr=10;//
//	cout<<*ptr;
//	
//	int v=45;
//	int *ptr2=&v;// should have the same data type
//	cout<<*ptr2;
//}
                   //VOID POINTERS
//a point can hold the address of a variable of the same type as of the pointer,
//but they is an expection to that rule (a void pointer) but you can directly de reference a void pointer
 void print(void*ptr,char type){//tht type parameter keeps track which data type is passed to the void type
 //switch case anbles us to do that
 switch(type)
 {
 	case'i':cout<<*((int*)ptr)<<endl;break;
 	case'c':cout<<*((char*)ptr)<<endl;break;
 	case'f':cout<<*((float*)ptr)<<endl;break;
 }
}
int main()
{
	int number=8;
	//printnumber(&number);
	float decimal=2.2;
	char character='a';
//	printchar(&character);
print(&number,'i');
print(&character,'c');
print(&decimal,'f');	
	system("pause>0");//invoking the print number function since it is receiving a pointer we have to pass it an address
}
