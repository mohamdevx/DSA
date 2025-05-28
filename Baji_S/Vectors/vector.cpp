#include<iostream>
#include<vector>
using namespace std;


int main(){
vector<int > vec;

vec.push_back(0);
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);



cout<<vec.size()<<endl;
cout<<vec.capacity()<<endl;

// cout<<"size of vector is "<<vec.size()<<endl;
// vec.push_back(10);
// vec.push_back(20);
// vec.push_back(30);
// vec.push_back(40);
// // cout<<"\nsize of vector is "<<vec.size()<<endl;
// // vec.pop_back();
// // cout<<"\nsize of vector is "<<vec.size()<<endl;

// cout<<vec.front()<<endl;
// cout<<vec.back()<<endl;
// cout<<vec.at(2)<<endl;

    return 0;
}