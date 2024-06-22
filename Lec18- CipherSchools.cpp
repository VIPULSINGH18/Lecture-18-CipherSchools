// writing a function to take two integers and then swap the values of those integers...


#include<iostream>
using namespace std;
int swap(int a , int b){
	cout<<"Value of a before swapping: "<<a<<endl;
	cout<<"Value of b before swapping: "<<b<<endl;
	int k;
	k=a;
	a=b;
	b=k;
	cout<<"Value of a after swapping: "<<a<<endl;
	cout<<"Value of b after swapping: "<<b<<endl;
	return 0;
	
}
int main(){
	swap(10,20);
	return 0;
}





// Value passed inside the function is known as formal paramters..
// Value called outside the function is known as actual parameters..
// there are two methods to assign value to variable: Passing By Value and Passing By Reference
// Variables inside the function is known as Local Variables..
// Accessibility of variables to any function is known as Scope Of Variables..
// In Passing By Value method values which we called outside the function known as actual paramters is copied to
// actual paramters.. 
//In passing By Reference method actual parameters is not copied to formal parameter .. formal parameters
// get its value inside the function only...




// Passing By Value Method example



# include<iostream>
using namespace std;
int Function_1(int a, int b)  /*local variables */ { 
    
	cout<<"Values of a and b is : "<<a<<" "<<b;

	return 0;
} 
int main(){
	Function_1(10,20); // Passing By Value Method..
	return 0;
}






// Passing By Reference Method..




# include<iostream>
using namespace std;
int Function_1(int a, int b)  /* Passing By Reference method by using & symbol */ { 
    a=100;
	b=200;

	cout<<"Values of a and b is : "<<a<<" "<<b;
	
	return 0;
} 
int main(){
	Function_1(10,20); // Passing By Value Method..
	return 0;
}



