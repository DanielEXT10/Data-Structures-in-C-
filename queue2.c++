#include <iostream>

using namespace std;

int queue[100], n = 100, tail = 1;
void enqueue(int val){
    if (tail >= n-1)
    {
        cout<<"queue overflow"<<endl;
    }
    else
    {
       tail++;
       queue[tail]= val;
       
    }
    
    
}

void dequeue(){
    if (tail<= 1)
    {
        
    }
    
}

int main(){
    
    return 0;
}