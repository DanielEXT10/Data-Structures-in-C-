#include <iostream>
#include <queue>
using namespace std;

//Queue implementation in C++ using std::queue
int main(){

    queue<string> q;
    q.push("A");
    q.push("B");
    q.push("C");
    q.push("D");

    // Return the number of elements present in the queue
    cout << "Queue size is" << q.size()<<endl;
    
    return 0;
}