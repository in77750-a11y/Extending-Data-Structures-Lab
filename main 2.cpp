//
//  main.cpp
//  Extending Data Structures Lab
//
//  Created by Andres Vizoso on 4/21/26.
//

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class MyQueue {
private:
    
    vector<T> data;
    
    
public:
    void push(T val) {
        data.push_back(val);
    }

    void pop() {
        data.erase(data.begin());
    }
    
    void print_vec(){
        for (int i = 0; i < data.size(); i++) {
            //i = data[i];
            //data[i] = i
            cout << data[i] << ", ";
        }
    
    }

    

};
    


template <class T>
class Quack {
private:
    
    vector<T> vec;
public:
    
    void push_back(T data){
        vec.push_back(data);
    }
    
    void pop_back(T data){
        vec.erase(vec.end() - 1);
    }
    
    void push_front(T val){
        vec.insert(vec.begin(), val);
    }
    
    void pop_front(T data){
        vec.erase(vec.begin());
    }
    
    void print_vec(){
        for (int i = 0; i < vec.size(); i++) {
            //i = data[i];
            //data[i] = i
            cout << vec[i] << ", ";
        }
    
    }
    
};


int main() {
    
    MyQueue<int> U;
    
    U.push(1);
    U.push(2);
    U.push(3);
    U.push(4);
    U.print_vec();
    cout << endl;
    
    U.pop();
    
    U.print_vec();
    cout << endl;
    
    cout << endl;
    cout << endl;
    
    Quack<int> U2;
    U2.push_back(10);
    U2.push_back(20);
    U2.push_back(30);
    U2.push_back(40);
    U2.print_vec();
    cout << endl;
    
    U2.push_front(5);
    U2.push_back(45);
    
    U2.print_vec();
    cout << endl;
    
    U2.pop_front(5);
    U2.pop_back(45);
    
    U2.print_vec();
    cout << endl;
    
    

    
    
    
    
}
