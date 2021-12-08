#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"displaying this vector"<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" "<<endl;
        // cout<<v.at(i)<<" "<<endl;
    }
    cout<<endl;

};

int main(){
    vector<int> vec1;
    vector<char> vec2(4);
    vector<char> vec3(vec2);
    vector<int> vec4(6,3);
    
    display(vec4);

    cout<<vec4.size()<<endl;

    int element, size=5;

    return 0;
}

