//Write a program to find minimum number in an array...

#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Entered values are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	//Minimum number...............
	cout<<"\n-------------------------------------";
	int min=arr[0];
	for(int i=1;i<5;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	
	cout<<"\nThe minimum number is : "<<min;
	return 0;
}