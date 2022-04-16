/*NAME :-PRIYANSH RUSIA
DATE:-30/12/2021
TIME:-15:45
ENROLLMENT NO:-0187CS201123*/



#include<stdio.h>
#include<stdlib.h>   //for exit,malloc

#define MAX 50          //for array
int arr[MAX];
int n,i,pos,x,j;

void insertion_Myarray();     //for insertion in array
void deletion_Myarray();      //for deletion in array
void searching_Myarray();      //for searching elements in array
void display();                //for displaying elements in array
//---------------------------------------------------------------------------------------------------------------------------//

struct node        //for singlylinklist
{
	int data;
	struct node *link;
};

struct node *head;

void insertionatbegin_Mylist();     //for insertion at beginning
void insertionatpos_Mylist();       //for insertion at given position
void insertionatend_Mylist();       //for insertion at ending
void deletionatbegin_Mylist();      //for insertion at beginning
void deletionatpos_Mylist();        //for deletion at given position
void deletionatend_Mylist();        //for deletion at ending
void display_Mylist();               //for displaying elements
void searching_Mylist();             //for searching elements
//---------------------------------------------------------------------------------------------------------------------------//


int top=-1;                      //for stack
int stack_arr[MAX];

void push_Mystack();      
int pop_Mystack();         
void display_Mystack();  
int top_Mystack();  
int val;
//---------------------------------------------------------------------------------------------------------------------------//


int queue_arr[MAX];             //for queue
int rear=-1;
int front=-1;
int item;

void enqueue_Myqueue();   //for inserting elements in queue
int dequeue_Myqueue();    //for deleting elements from queue
void display_Myqueue();   //for diaplaying elements of queue

//---------------------------------------------------------------------------------------------------------------------------//
int tree_arr[MAX];
int i;

void insert_Mytree();        //for inserting elements in tree
void display_Mytree();       //for displaying elements of tree

//---------------------------------------------------------------------------------------------------------------------------//


int Myarray();                 // main function of array
int Mylinklist();              // main function of linklist
int Mystack();                 //main function of stack
int Myqueue();                 //main function of queue
int Mytree();                  //main function of tree


//---------------------------------------------------------------------------------------------------------------------------//




int main()                            //main function
{
	while(1)
  {
	
	int choice;
	printf("\n***************************************DATA STRUCTURE MENU*******************************************\n");
	printf("\n\t1.ARRAY");
	printf("\n\t2.LINKLIST");
	printf("\n\t3.DOUBLY LINKLIST");
	printf("\n\t4.CIRCULAR LINKLIST");
	printf("\n\t5.STACK");
	printf("\n\t6.QUEUE");
	printf("\n\t7.TREE");
	printf("\n\t8.EXIT\n");
	printf("\nENTER YOUR CHOICE :-");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:Myarray(); 
		       break;
		
		case 2:Mylist();
		        break;
			
		case 3:printf("\nSORRY,UNAVAILABLE DUE TO MAINTAINANCE");
		       printf("\n\nSERVICES WILL RESUME SHORTLY\n\n"); 
		       break;	
				
		case 4:printf("\nSORRY,UNAVAILABLE DUE TO MAINTAINANCE");
		       printf("\n\nSERVICES WILL RESUME SHORTLY\n\n"); 
		       break;
				
		case 5:Mystack();
		       break;
					
		case 6:Myqueue();
		       break;
						
		case 7:printf("\nSORRY,UNAVAILABLE DUE TO MAINTAINANCE");
		       printf("\n\nSERVICES WILL RESUME SHORTLY\n\n"); 
		       break;
		
		case 8: printf("\n\t\t\t\t*****THANK YOU FOR USING THE CODE***** ");
		        exit(0);
			  
	}
 }
	
 return 0;                  //end of main function	
}

//=======================================================================================================================//


int Mystack()                  
{
int choice;

printf("\n***************************************MENU DRIVEN PROGRAM FOR STACK*****************************************");

while(1){

printf("\n\n\t1.PUSH");
printf("\n\t2.POP");
printf("\n\t3.VIEW ELEMENTS OF STACK");
printf("\n\t4.TOP ELEMENT");
printf("\n\t5.EXIT\n");
printf("\nENTER YOUR CHOICE(1-4) :-");
scanf("%d",&choice);


switch(choice)
{

   case 1: push_Mystack();
           break;
     
   case 2: pop_Mystack();
           printf("\n\nOPERATION SUCCESSFUL \nDELETED ELEMENT= %d",val);
           break;
     
   case 3:display_Mystack();
          break; 
          
    case 4:top_Mystack();
           break;
          
    case 5: printf("\n\t\t\t\t*****THANK YOU FOR USING THE CODE***** ");
	        exit(0);
           

    default:printf("\nARE YOU BLIND OR WHAT @#$%^&^&*");
            break;          
 
}
}
return 0;
}

void push_Mystack()
{   int data;
if(top==MAX-1)
{
printf("\nOPERATION NOT POSSIBLE !!!\n STACK OVERFLOW ");
exit(0);
}

else
{   printf("\nENTER ELEMENT TO BE INSERTED :-");
   scanf("%d",&data);
   
top=top+1;
stack_arr[top]=data;


printf("\nOPERATION SUCCESSFUL");
getch();

}

}

int pop_Mystack()
{  
   
   
if(top==-1)
{
printf("\nOPERATION NOT POSSIBLE !!!\n STACK OVERFLOW ");
exit(0);
}
else
{
  val=stack_arr[top];
  top=top-1;
  return(val);  
}
}

void display_Mystack()
{   int i=0;
   
    if(top==-1)
{
printf("\nOPERATION NOT POSSIBLE !!!\n STACK OVERFLOW ");
exit(0);
}   
else
{
for( i=top;i>=0;i--)
{
printf("\n | %d |\n",stack_arr[i]);
}
}
}

int top_Mystack()
{
	printf("\nELEMENT AT TOP IS :- %d ",stack_arr[top]);
	return 0;
}
// @priyansh_rusia

//=======================================================================================================================//

int Myqueue()
{
        int choice;
        	printf("\n**************************************MENU DRIVEN QUEUE*****************************************\n");
       
        while(1)
        {	
                printf("\n1.INSERTION IN QUEUE\n2.DELETION IN QUEUE\n3.DISPLAY ALL ELEMENTS OF QUEUE\n4.EXIT\nENTER YOUR CHOICE : ");
                scanf("%d",&choice);

                switch(choice)
             {
                case 1: enqueue_Myqueue();
                        break;
                case 2:
                        dequeue_Myqueue();
                        printf("\nDeleted element is  %d\n",item);
                        break;
                case 3:
                        display_Myqueue();
                        break;
                case 4:
                        exit(1);
                default:
                        printf("\nARE YOU BLIND OR WHAT @#$%^&^&*");
                        break;
             }
        }

        return 0;

}

void enqueue_Myqueue()
{
        if(rear==MAX-1)
        {
            printf("\nOPERATION NOT POSSIBLE !!!\n QUEUE OVERFLOW ");
            exit(0);
        }
        if(front ==-1 && rear==-1)
        front=0;
        rear=rear+1;
        printf("\nENTER ELEMENT TO BE INSERTED");
        scanf("%d",&item);
        queue_arr[rear]=item ;
        printf("\nOPERATION SUCCESSFUL");
         
}

int dequeue_Myqueue()
{
        
        if(front==-1 || front==rear+1 )
        {
                printf("\nOPERATION NOT POSSIBLE !!!\n STACK UNDERFLOW ");
                exit(1);
        }
        item=queue_arr[front];
        front=front+1;
        return item;
}


void display_Myqueue()
{
        int i;
        if (front==-1 || front==rear+1   )
        {
                printf("\nOPERATION NOT POSSIBLE !!!\n STACK UNDERFLOW ");
                return;
        }
        printf("\nQueue is :\n\n");
        for(i=front;i<=rear;i++)
                printf("%d  ",queue_arr[i]);
        printf("\n\n");
}

 //@priyansh_rusia


int Myarray()
{
	while(1)
	{

	int choice;
	printf("\n**********************************MENU DRIVEN ARRAY*****************************");
	printf("\n\n\t~1.INSERTION IN ARRAY~");
	printf("\n\t~2.DELETION IN ARRAY~");
	printf("\n\t~3.SEARCHING IN ARRAY~");
	printf("\n\t~4.DISPLAY ELEMENTS OF ARRAY~");
	printf("\n\n\tENTER YOUR CHOICE :-");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :insertion_Myarray();
		        break;
		        
		case 2 :deletion_Myarray();
		        break;
		        
		case 3:searching_Myarray();
		       break;
		
		case 4:display();
		       break;
		       
		default:printf("\nWRONG CHOICE\n");
		        break;
	}
	
}
  return 0;	
}
// @priyansh_rusia

void insertion_Myarray()     //1
{
	
	
	printf("\nENTER THE SIZE OF ARRAY :-");
	scanf("%d",&n);
	printf("\nENTER ELEMENTS OF ARRAY :-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nELEMNTS OF ARRAY:-\n");
	for(i=0;i<n;i++)
	{
	  printf("%d\n",arr[i]);
	}
	printf("\n");
	n++;
	
   	printf("\nENTER THE POSITION OF ELEMENT :-\n");
    scanf("%d",&pos);
    
    printf("\nENTER THE ELEMENT :-\n");
    scanf("%d",&x);
    
    for(i=n-1;i>=pos;i--)
	{
	  arr[i]=arr[i-1];
	}
	  arr[pos-1]=x; 
    
	printf("\nUPDATED ARRAY IS:-\n");
	for(i=0;i<n;i++)
	{
	  printf("%d\n",arr[i]);
	}
}

void deletion_Myarray()    //2
{	
	i--;
	printf("\nENTER THE POSITION :-");
	scanf("%d",&pos);
	for(j=pos-1;j<=i;j++)
	arr[j]=arr[j+1];
    n--;
    
    printf("\nUPDATED ARRAY IS:-");
	for(i=0;i<n;i++)
	{
	  printf("\n%d",arr[i]);
	}

}

void searching_Myarray()      //3
{

	
	printf("\nENTER ELEMENTS TO BE SEARCHED :-");
	scanf("%d",&x);
	
  	for(i=0;i<n;i++)
  	{
  	 if(arr[i]==x)	
  	 {
  	   printf("\nELEMENT %d FOUND",x);
  	   pos=i+1;
  	   printf("\nPOSITION OF ELEMENT:- %d",pos);
	   break;	
	 }
	}
	 if(i==n)
	printf("\nELEMENT NOT FOUND");
       
}

void display()   //4
{     

	printf("\nELEMNTS OF ARRAY:-");
	for(i=0;i<n;i++)
	{
	  printf("\n%d",arr[i]);
	}	
}


//code developed by @priyansh_rusia

//=======================================================================================================================//

int Mylist() 
{
	int choice,item;
	while(1) 
	{
	printf("\n*************************************************LINKLIST MENU DRIVEN*********************************************");
	 printf("\n1.INSERTION AT BEGINNING");
	 printf("\n2.INSERTION AT POSITION ");
	 printf("\n3.INSERTION AT ENDING");
	 printf("\n4.DELETION AT BEGINNING");
	 printf("\n5.DELETION AT POSITION");
	 printf("\n6.DELETION AT ENDING");
	 printf("\n7.DISPLAY LIST");
	 printf("\n8.SEARCH ELEMENT");
	 printf("\n9.EXIT");	
		printf("\n\nENTER THE CHOICE:");
		scanf("%d",&choice);
		switch(choice) 
		{
			case 1:
				insertionatbegin_Mylist();
				break; 
			case 2:
					insertionatpos_Mylist();
				break;
			case 3:
			        insertionatend_Mylist();
				break;
			case 4:
				deletionatbegin_Mylist();
				break;
			case 5:
				deletionatpos_Mylist();
				break;
			case 6:
				deletionatend_Mylist();
				break;
			case 7:
				display_Mylist();
				break;
			case 8:
				searching_Mylist();
				break;
			case 9:
				exit (0);
				
			default:printf("\nWRONG CHOICE");
			        break;
		}
	}
	return 0;
}



void insertionatbegin_Mylist() {
	int item;
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	
		printf("\nENTER THE VALUE TO INSERT:");
		scanf("%d",&item);
		ptr->data=item;
		ptr->link=head;
		head=ptr;	
}

void display_Mylist() 
{
	struct node *ptr=head;
	while(ptr!=NULL) {
		printf("%d\t\t",ptr->data);
		ptr=ptr->link;
	}
}

void insertionatend_Mylist() {
	struct node *ptr,*temp;
	int item;
	printf("\nENTER THE VALUE TO INSERT:");
	scanf("%d",&item);
	ptr=head;
	temp=(struct node *)malloc(sizeof(struct node)) ;
	temp->data=item;
	temp->link=NULL;
	while(ptr->link!=NULL) {
		ptr=ptr->link;
	}
	ptr->link=temp;
}
void insertionatpos_Mylist() {
	int data,pos,i=1;

	printf("\nENTER THE POSITION:");
	scanf("%d",&pos);
	if(pos==1) 
	{
		insertionatbegin_Mylist();
	} 
	else 
	{

		printf("\nENTER THE VALUE TO INSERT:");
		scanf("%d",&data);
		struct node *ptr=head;
		struct node *ptr2=(struct node*)malloc(sizeof(struct node));
		ptr2->data=data;

	while(i<=pos-1) 
	    {
			ptr=ptr->link;
			i++;
		}
		ptr2->link=ptr->link;
		ptr->link=ptr2;
	}
}
void deletionatbegin_Mylist()
{
	int value;
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp=head;
	value=head->data;
	head=temp->link;
	free(temp);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
	printf("DELETED VALUE:%d",value);
}
void deletionatend_Mylist()
{
	int item;
	struct node *temp,*temp2;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=head;
	temp2=head;                
	while(temp->link!=NULL)
	{
	temp2=temp;
	temp=temp->link;
	}
	item=temp->data;
	temp2->link=NULL;
	free(temp);
	temp=NULL;
	printf("DELETED ELEMENT:%d",item);
}
void deletionatpos_Mylist(){
	int item,i=1,pos;
	struct node *temp,*temp2;
	temp=head;
	temp=head;
	printf("ENTER THE POSITION TO DELETE:");
	scanf("%d",&pos);
	while(i<=pos-1){
		temp2=temp;
		temp=temp->link;
		i++;
	}
	temp2->link=temp->link;
	item=temp->data;
	free(temp);
	printf("DELETED ELEMENT:%d",item);
	
}
void searching_Mylist()
{
	int value;
	struct node*ptr=head;
	printf("ENTER THE VALUE TO SEARCH:");
	scanf("%d",&value);
	while(ptr->link!=NULL){
	
		if(ptr->data==value){
			printf("ELEMENT FOUND!!");
			break;
		}
			ptr=ptr->link;
	}
	 if(ptr->link==NULL)
		{
			printf("ELEMENT NOT FOUND!!!");
		}
	
}


//=======================================================================================================================//

int Mytree()
{
int choice;
while(1)
{
printf("\n**********************************MENU DRIVEN TREE**************************************");
printf("\n\t1.INSERT");
printf("\n\t2.DELETE");
printf("\n\t3.DISPLAY");
printf("\n\t4.EXIT");
printf("\nENTER YOUR CHOICE");
scanf("%d",&choice);
switch(choice)
   {
    case 1:insert_Mytree();
       break;
    case 2:printf("deleted !");
       // delete_Mytree();
       break;
       
    case 3:display_Mytree();
       break;
       
    case 4:exit(1);
       
    default:printf("\nWRONG CHOICE");
        break;

   }
}
}


 void insert_Mytree()
 {
  int data,i;
  printf("enter data::");
  scanf("%d",&data);
 
// if(arr[0]==NULL)
while(i<10)
{
  if(tree_arr[i]==0)
   {
    printf("tree was empty\ndata was inserted at root node");
    printf("tree was empt but the dataa is inserted");
    tree_arr[i]=data;
    break;
   }
  else if(data<=tree_arr[i])
  {
   i=2*i+1;
  }
  else
  {
   i=2*i+2;
  }

}


 }
 void display_Mytree()
{
  int i;
  for(i=0;i<10;i++)
  {
  printf("%d__",tree_arr[i]);
  }
}	
