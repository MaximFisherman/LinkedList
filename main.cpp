#include <iostream>

using namespace std;

struct element{
int x;
element *Next;//adress
};

class List{
element *Head;
public:
List(){Head = NULL;}
~List(){
    while(Head!=NULL){
    element *temp = Head->Next;
    delete Head;
    Head = temp;
    }}

void Add(int x){
element *temp = new element;//Выделение памяти
temp->x = x ;
temp->Next = Head;
Head = temp;
}
void Show(){
element *temp = Head;
while(temp != NULL){
    cout<<temp->x<<" ";
    temp= temp->Next;
}
}
};

int main()
{
    int N;
    int x;
    List lis;
    cout<<"Input N please : "; cin>>N;
    for(int i=0;i<N;i++){
        cin>>x;
        lis.Add(x);
    }
    lis.Show();
    return 0;
}
