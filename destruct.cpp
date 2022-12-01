#include<iostream>
using namespace std;

int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"this is the time when constructor is called for object number"<<count<<endl;
        }
        ~num(){
            cout<<"this is the time when destructor is called for object number"<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"we are inside ou main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;
}
