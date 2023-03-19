#include<iostream>
using namespace std;

//Struct 

struct NE
{
   int val[20];
   int index[20];
};

//Class with Functions

class NumberEditor
{
	
	//Private Members of Class
	
	private:
	    int num[20];
	    int counter=0;
	    NE undo[20];
	    int top=0;
	
	//Public Members of Class
	
	public:
	
	//Function to Check Space
	
	bool isfull(){
	    if (counter<10)
	    {
	        return true;
	    }
	    else{
	        return false;
	    }
	}
	//Function to Insert Values
	
	void insert(){
	     cout<<"Enter values\n";
	    for (int i = 0; i < 10; i++)
	    {
	        cin>>num[i];
	        counter++;
	    }
	}
	
	//Function to Check Empty Space
	
	bool isEmpty()
	{
	    if (counter==0)
	    {
	        return true;
	    }
	    else
		{
	        return false;
	    } 
	}
	
	//Function to Delete
	
	void del(int number)
	{
	    int val,flag=0;
		for (int i = 0; i < counter; i++)
		{
		    if (number==num[i])
		    {
		        for (int i = top; i < top+1; i++)
				{
		    		undo[i].index[i]=val;
		    		undo[i].val[i]=number;
				}
		        flag=1;
		        val=i;
		        for (int j = i; j < counter; j++)
		        {
		            num[j]=num[j+1];
		        }
		        counter--; 
		        cout<<"Successfully delete\n";
		    }  
		}
		
		if (flag!=1)
		{
		    cout<<"Entered number not available in array\n";
		}
		top++;
	}
	
	//Function to View Numbers
	
	void view()
	{
	    for (int i = 0; i < counter; i++)
	    {
	        cout<<"Num["<<i<<"]= "<<num[i]<<"\n";
	    }
	}
	
	//Function to Check Undo
	
	bool isundo()
	{
	    if (top==0)
	    {
	        return false;
	    }
	    else
		{
	        return true;
	    }
	}
	
	//Function to Undo
	
	void undoo()
	{
	    for (int i = counter; i > undo[top-1].index[top-1]; i--)
	    {
	        num[i]=num[i-1];
	    }
	    counter++;
	    num[undo[top-1].index[top-1]]=undo[top-1].val[top-1];
	    top--;
	}
	
	//Function to Edit Number
	
	void editNum(int number)
	{
	    int flag=0;
	    for (int i = 0; i < counter; i++)
	    {
	        if (num[i]==number)
	        {
	            int value;
	            cout<<"Enter number you want to replace with\n";
	            cin>>value;
	            flag=1;
	            num[i]=value;
	            cout<<"Number successfully edited\n";
	            
	        }
	        
		}
		if (flag!=1)
		{
		    cout<<"Entered number not available in array\n";
		}     
	}
	
	//Function to Find Number
	
	void findNum(int number)
	{
	    int flag=0;
	    for (int i = 0; i < counter; i++)
	    {
	        if (num[i]==number)
	        {
	            flag=1;
	            cout<<"Your Input Number is on index "<<i<<"\n";
	        }
	        if (flag!=1)
			{
			    cout<<"Entered number not available in array\n";
			}  
	    } 
	}
	
	//Function to Replace Number One Time
	
	void findreplaceone(int number)
	{
	    int arr[10],counter1=0;
	    int index,flag=0;
	    for (int i = 0; i < counter; i++)
	    {
	        if (num[i]==number)
	        {
	            flag=1;
	            arr[i]=i;
	            counter1++;
	        }  
	    }
	    if(flag=1)
		{
	        int replace;
		    cout<<"Your input number found on folllowing index. Please select one you want to replace with\n ";
		    for (int j = 0; j < counter1; j++)
		    {
		        cout<<arr[j]<<"\n";
		    }
		    cout<<"Index Number= ";
		    cin>>index;
		    cout<<"Please select number you want to replace with\n";
		    cin>>replace;
		    num[index]=replace;;
	    }
	    if (flag!=1)
	    {
	        cout<<"Your entered number is no available in ginven array\n";
	    }   
	}
	
	//Function to Replace All Number
	
	void replaceAll(int number)
	{
	    int rep=0,flag=0;
	    cout<<"Enter number you want to replace with\n";
	    cin>>rep;
	    for (int i = 0; i < counter; i++)
	    {
	        if (num[i]==number)
	        {
	            num[i]=rep;
	            flag=1;
	        } 
	    }
	     if (flag==1)
	    {
	        cout<<"Successfully Replaced with all matching numbers\n";
	    }  
	    if (flag!=1)
	    {
	        cout<<"Your entered number is no available in given array\n";
	    }  
	}
	
};//End Class

//Main

int main()
{
	NumberEditor ne;
	int opt=0;
	while (opt!=11)
	{
	    cout<<"Press 1 to Insert Number.\nPress 2 to Delete Number.\nPress 3 to Undo Last Function.\nPress 4 to View\nPress 5 to Edit Number\nPress 6 to Find Number\nPress 7 to Replace Number At Specific Index.\nPress 8 to Replace With All Numbers\nPress 9 to Exit\n";
	    cin>>opt;
	    switch (opt)
	    {
			case 1:
		    	if (ne.isfull())
		       	{
		    	ne.insert();
		       	}
		       	else
			   	{
		        	cout<<"Space unavilable in array\n";
		    	}
		    	break;
		    case 2:
			    if (ne.isEmpty())
			    {
			        cout<<"Unable to delete Array is empty\n";
			    }
			    else
				{
			        int num;
			        cout<<"Enter number you want to delete\n";
			        cin>>num;
			        ne.del(num);
			    }
		    	break;
		    case 3:
			    if (ne.isundo())
			    {
			        ne.undoo();
			        cout<<"Successfuly undo\n";
			    }
			    else
				{
			        cout<<"First delete something then try to undo\n";
			    }
			    break;
		    case 4:
			    ne.view();
			    break;
			    case 5:
			    int number;
			    if (ne.isEmpty())
			    {
			        cout<<"Unable to Edit. Array is empty\n";
			    }
			    else
				{
			    	cout<<"Enter number you want to edit\n";
			        cin>>number;
			    	ne.editNum(number);
			    }
			    break;
		    case 6:
			    if (ne.isEmpty())
			    {
			        cout<<"Unable to Find Number. Array is empty\n";
			    }
			    else
				{
			    	int num;
			        cout<<"Enter number you want to Find\n";
			        cin>>num;
			    	ne.findNum(num);
			    }
			    break;
		    case 7:
			    if (ne.isEmpty())
			    {
			        cout<<"Unable to Replace Number. Array is empty\n";
			    }
			    else
				{
			        int num2;
			        cout<<"Enter number you want to Replace\n";
			        cin>>num2;
			        ne.findreplaceone(num2);
			    }
			    break;
		    case 8:
			    if (ne.isEmpty())
			    {
			        cout<<"Unable to Replace Number. Array is empty\n";
			    }
			    else
				{
			        int number1;
			        cout<<"Enter number you want to Replace\n";
			        cin>>number1;
			        ne.replaceAll(number1);
			    }
			    break;
		    case 9:
			    opt=11;
			    break;
		    default:
		    	cout<<"Wrong number select given one\n";
		        break;
		    
	    }//End switch
	    
	}//End While1
	
}
