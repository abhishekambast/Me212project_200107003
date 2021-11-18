#include<iostream>
#include <iomanip>
using namespace std;
class Problem{
    private:
     double r, D, allowable, avgstress, ratio, K, allowableload;
    
    public:
    double t;
    double allow(){
        r=0.006;D=0.075;allowable=110000000.00;ratio=(2.00)*r/D;//every data is having SI UNIT;
        cout<<"what is the thickness??"<<endl; 
        cin>>t;
        K=3.00-3.13*ratio+3.66*ratio*ratio-1.53*ratio*ratio*ratio;
        avgstress=allowable/K;
        allowableload=avgstress*(D-2.0*r)*t/1000.00;
        return allowableload;
    };
    
};
int main(){
    cout<<"Number of test cases you are going to run this program for?"<<endl;
    int n,m;
    cin>>n;
    m=n;
    double** table=new double*[n];
    for(int i=0;i<n;i++){
        table[i]=new double[2];
    };

while(m--){
    Problem *test=new Problem;
    double result=test->allow();

  

    table[n-m-1][0]=test->t;
    table[n-m-1][1]=result;
    cout<<result<<endl;





};
cout<<"your table with ur respective data is ready"<<endl;
cout<<"t(in mm)"<<"   "<<"load(in N)"<<endl;
for(int i=0;i<n;i++){
    cout<<table[i][0]<<"          "<<table[i][1]<<endl;
};
for(int i=0;i<n;i++){
    delete []table[i];
};
delete []table;};