#include<iostream>

#define n 20
using namespace std;

class queue{
    int* arr;
    int front,back;
    
    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x){
        if(back == n-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        back++;
        arr[back] = x;

        if(front == -1){
            front++;
        }
    }

    void pop(){
        if(front==-1 || front>back){
            cout<<"No elements in Queue"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front ==-1 || front > back){
            cout<<"No Elements in Queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front ==-1 || front>back){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    queue que;

    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    cout<<que.peek()<<endl;
    cout<<que.empty()<<endl;
    que.pop();
    cout<<que.peek()<<endl;
    return 0;
}