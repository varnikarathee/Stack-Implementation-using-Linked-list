#include <iostream>
using namespace std;


//Declare Linked List node
struct node{
    int data;
    struct node* next;
    };

 //inserting node at index 0
 struct node* push(struct node* top,int x)
 {
     struct node* newnode =(struct node*)malloc(sizeof(struct node));
     if(newnode==NULL){                         //if the user is unable to dynamicallly create anymore nodes.
         cout<<"Stack Overflow"<<endl;
     }
     else
     {   newnode->data=x;      newnode->next=top;
     top = newnode;
     return top;
     }
     
 }   


//deleting the nodes
void pop(struct node* top)
{
    if(top==NULL){                              //Checking if stack is empty
    cout<<"Stack Underflow"<<endl;
    }
    
    else{
        struct node* temp = top;
        top= top->next;
        free(temp);
        }
}

//displaying elements
void display(struct node* top){
    while(top != NULL)
    {
        cout<<"ELEMENT: "<<top->data<<" ";
        top= top-> next;
    }
}

//returns element pointed by top 
void peek(struct node* top)
{
    if(top==NULL){                             //Checking if stack is empty
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        int x = top->data;
        cout<<"ELEMENT POINTED BY TOP: "<<x<<endl;
    }
}


//split two stack
 void split(struct node *top, int p, int q)
 {
     int n = 0;
    struct node *temp;
    temp = top;

 // Find the length of the list
    while (temp != NULL)
   {
        n += 1;
        temp = temp->next;
   }

 // If ratio exceeds the actual length
    if (p + q > n)
   {
        cout << "-1" << endl;return;
   }
 
    temp = top;
    while (p > 1)
   {
        temp = temp->next;
        p -= 1;
   }

 // second head node after splitting
    struct node *top_p =  temp->next;
    temp->next = NULL;
    cout<<"STACK 2:  "<<endl;display(top_p);
    cout<<endl<<"STACK 1: "<<endl;
    display(top);
 }


 //Combine two stacks
void combine(struct node* top){
    struct node* top_p=NULL;
    int cho=0;
    do{
        cout<<"ENTER 1 FOR FILLING STACK 2: | 0 FOR EXIT"<<endl;cin>>cho;
        if(cho==1){
            int val_p;
            cout<<"ENTER VALUE"<<endl;
            cin>>val_p;
            top_p=push(top_p,val_p);
            }
        }while(cho!=0);
        
    if(top==NULL&&top_p==NULL){
        cout<<"LIST IS EMPTY"<<endl;
    }
    
    else if(top==NULL)
    {
        display(top_p);
    }
    else if(top_p==NULL)
    {
        display(top);
    }
    else
    {
        while(top_p != NULL){
            top=push(top,top_p->data);
            top_p=top_p->next;
        }
        display(top);
    }
}

int main()
{
    struct node* top1=NULL;
    struct node* top2=NULL;
    int choice, chara;
    
    do{
        cout<<"ENTER 1 FOR CONTINUE AND 0 FOR EXIT"<<endl;
        cin>>choice;
            if (choice==1)
            {
                cout<<"1: PUSH ELEMENTS IN MAIN STACK: "<<endl<<"2: POP ELEMENT FROM MAIN STACK: "<<endl<<"3: PEEK ELEMENT"<<endl<<"4: SPLIT THE MAIN STACK"<<endl<<"5: COMBINE THE STACKS"<<endl<<"6: DISPLAY STACK: "<<endl;
                
                cin>>chara;

        switch(chara)
        {
            case 1: 
               int val;\
               cout<<"ENTER VALUE: "<<endl;
               cin>>val;
               top1=push(top1,val);
               cout<<"STACK 1 ELEMENTS: " <<endl;
               display(top1);
               cout<<endl;
               break;
            case 2:
               pop(top1);
               cout<<"STACK 1 ELEMENTS: " <<endl;
               display(top1);
               break;
            case 3:
               peek(top1);
               break;
            case 4:
               int p,q;
               cout<<"ENTER RATIO P:Q "<<endl;
               cin>>p>>q;
               cout<<"SPLITTING STACK 1"<<endl;
               split(top1,p,q);
               cout<<endl;break;
            case 5:
               combine (top1);break;
            case 6: 
               display(top1);break;
            default:       
               cout<<endl<<"ENTERED WRONG OPTION:"<<endl;
            }
        }
    }while(choice!=0);
    
    return 0;
    
} 