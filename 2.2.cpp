#include<iostream>
using namespace std;

class student {
private:
    int rollno;
    string name;
    float m1,m2,m3;
    float average;

public:
    student(){
    rollno=0;
    name="";
    m1=m2=m3=0;
    average = 0;
    }
    student(int r,string n,float a,float b,float c){
    rollno=r;
    name=n;
    m1=a;
    m2=b;
    m3=c;
    calculateaverage();
    }
    void calculateaverage(){
    average =(m1 +m2 +m3)/3;
     }
    void display(){
    cout<<"-----result-----\n";
    cout<<"Roll No:"<<rollno;
    cout<<"\nName:"<<name;
    cout<<"\nMarks:"<<m1<<","<<m2<<","<<m3;
    cout<<"\nAverage Marks:"<<average <<endl;
    }
    };
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;

      student students[10];


    for (int i=0;i<n;i++){
        int roll;
        string name;
        float a,b,c;
        cout<<"\nEnter details for student"<<i+1<<endl;
        cout<<"Roll no:";
        cin>>roll;
//        cin.ignor();
        cout<<"Name:";
       // getline(cin,name);
        cin>>name;
        cout<<"Marks in 3 subjects:";
        cin>>a>>b>>c;
        students[i]=student(roll,name,a,b,c);
    }
    for(int i=0;i<n;i++){
        students[i].display();

    }
    return 0;
}
