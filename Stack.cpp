#include<iostream>
#include<stack>
using namespace std;

class Stack{
public:
    //properties
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }else{
            cout << "Stack is overflow" << endl;
        }
    }
    
    void pop(){
        if(top >= 0){
            top--;
        }else{
            cout << "stack is underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];   
        }else{
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    Stack st(5);

    st.push(3);
    st.push(73);
    st.push(6);
    st.push(7);
    st.push(2);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    if(st.isEmpty()){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Stack is not empty" << endl;
    }     
}