#include<iostream>
using namespace std;
int gradeSystem(string ch){
    if(ch=="A1"){
        return 10;
    }
    else if(ch=="A2"){
        return 9;
    }
    else if(ch=="B1"){
        return 8;
    }
    else if(ch=="B2"){
        return 7;
    }
    else if(ch=="C1"){
        return 6;
    }
    else if(ch=="C2"){
        return 5;
    }
    else if(ch=="D1"){
        return 4;
    }
    else if(ch=="D2"){
        return 3;
    }
    else if(ch=="E"){
        return 2;
    }
}
string averageGrade(int n){
    string arr[11]={"E","E","E","D2","D1","C2","C1","B2","B1","A2","A1"};
    return arr[n];
}
int main(){
    string name;
    int ans=0;
    string grade; 
    cout<<"Enter you name:- ";
    cin>>name;
    cout<<"enter you grades :- "<<endl;
    for(int i=1;i<=5;i++){
        cout<<"enter the grade of subject"<<i<<":- ";
        cin>>grade;
        ans = ans+gradeSystem(grade);
    }
    ans = ans/5;
    cout<<name<<" your Average grade is :-  "<<averageGrade(ans);

}