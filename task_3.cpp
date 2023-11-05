// TASK : 3   (completed)

// Create a program that manages student grades. Allow the user
// to input student names and their corresponding grades.
// Calculate the average grade and display it along with the highest
// and lowest grades


#include <iostream>
#include <string.h>
using namespace std;

struct student 
{
    string name;
    int grade;
};

int main ()
{
    student stude[100];
    int n;
    cout<<"enter the student give exam : ";
    cin>>n;

    

    for (int i=0;i<n;i++)
    {
        
        cout<<"enter the name of student : ";
        cin>>stude[i].name;

        cout<<"enter the grades of student : ";
        cin>>stude[i].grade;

        
    }

	for (int i=0;i<n;i++)
	{
		cout<<stude[i].name;
		cout<<"=";
		cout<<stude[i].grade;
		
	}

    int low_grade=100;
    int high_grade=0;

    for (int i=0;i<n;i++)
    {
        if (stude[i].grade<low_grade)
        {
            low_grade=stude[i].grade;
        }

        if (stude[i].grade>high_grade)
        {
            high_grade=stude[i].grade;
        }
    }


    cout<<"\nhighest grade is : "<<high_grade<<endl;
    cout<<"lowest grade is : "<<low_grade<<endl;

    int sum=0;
    int count=0;

    for (int i=0;i<n;i++)
    {
        sum=sum+stude[i].grade;
        count++;
    }

    float avg =(float)sum/count;

    cout<<"average of grades is : "<<avg;

}
