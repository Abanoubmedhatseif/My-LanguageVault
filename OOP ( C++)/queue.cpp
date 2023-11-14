
#include <iostream>

using namespace std;

class queue{

    int *arr;
    int size;
    int top;

    public:
    queue () {
    }; // empty construct

    queue (int Size){
    size=Size ;
    top = -1;
    arr = new int (size);
    } // end construct

    void EnQueue(int x){
        if (top == size-1){
            cout<<"queue full"<<endl ;
        }
        else if (top < size-1){
            top ++ ;
            arr[top]=x;
        }
        arr[top+1]=0;
    } // end EnQueue

    void deQueue(){
        if (top>=0){
                for(int i=0;i<=top;i++){
                    arr[i]=arr[i+1];
                }
                top--;
        }
    }

    void printqueue(){
     for(int i=0; i<=top; i++)
     {
         cout<<arr[i]<<endl;
     }
    }


    ~queue(){
    delete arr;
    cout<<"Deleted Successfully"<<endl;
    }




}; // class end

int main()
{

queue *s1 = new queue(10);
s1->EnQueue(5);
s1->EnQueue(4);
s1->EnQueue(3);
s1->EnQueue(5);
s1->EnQueue(7);
s1->deQueue();
s1->deQueue();
s1->printqueue();

}
