//
//  main.cpp
//  Extending Data Structures Lab
//
//  Created by Andres Vizoso on 4/21/26.
//

#include <iostream>
#include <vector>

using namespace std;
    

template <class T>
class Que_ue {
private:
    
    vector<T> vec;
public:
    
    void push(T data){
        vec.push_back(data);
    }
    
    T pop(){
        return vec.pop_back();
    }
};

template <class T>
class Quack {
private:
    
    vector<T> vec;
public:
    
    void push(T data){
        vec.push_back(data);
    }
    
    T pop(){
        return vec.pop_back();
    }
};


int main() {
    
    Que_ue<int> U;
    U.push(3);
    
    
}
