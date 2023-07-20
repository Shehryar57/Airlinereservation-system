
#include<iostream>   //input output
#include<conio.h>     //console input output
#include<iomanip>      //access set() to decimal
#include<fstream>      // control read write data
#include<ctime>        //time
using namespace std;
	char l_destination[5][20]={"LAHORE","ISLAMABAD","KARACHI","PESHAWAR","QUETTA"};
    char i_destination[10][20]={"LONDON","BERLIN","DUBAI","NEW_YORK","BEIJING","PARIS","CAPE_TOWN","TOKYO","LOS_ANGELES","MUMBAI"};
class mytime
{
	public:
		int choice;
 		void getdata()
 		{
			cout<<"\n";
			cout<<setw(97)<<"ON WHICH TIME YOU WANT TO TRAVEL"<<endl;
			cout<<setw(90)<<"PRESS 1 FOR 11 AM"<<endl;
			cout<<setw(90)<<"PRESS 2 FOR 10 AM"<<endl;
			cout<<setw(89)<<"PRESS 3 FOR 9 AM"<<endl;
			cin>>choice;
 		}
 		void show()
 		{
  			if(choice==1)
  			{
    			cout<<"|                                                                         "<<endl;
    			cout<<"|flight mytime 11 AM                                                        "<<endl;
    			cout<<"|_________________________________________________________________________"<<endl;
    			cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    			ofstream outfile;
    			outfile.open("E:\\E_ticket.txt",ios::app);
    			outfile<<"|                                                                         "<<endl<<
             			 "|flight mytime 11 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
       					 "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  			}
  			if(choice==2)
  			{
    			cout<<"|                                                                         "<<endl;
    			cout<<"|flight mytime 10 AM                                                        "<<endl;
    			cout<<"|_________________________________________________________________________"<<endl;
    			cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    			ofstream outfile;
    			outfile.open("E:\\E_ticket.txt",ios::app);
    			outfile<<"|                                                                         "<<endl<<
             			 "|flight mytime 10 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
      				 	 "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  			}
  			if(choice==3)
  			{
    			cout<<"|                                                                         "<<endl;
    			cout<<"|flight mytime 9 AM                                                        "<<endl;
    			cout<<"|_________________________________________________________________________"<<endl;
    			cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
   				ofstream outfile;
    			outfile.open("E:\\E_ticket.txt",ios::app);
    			outfile<<"|                                                                         "<<endl<<
             			 "|flight mytime 9 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
       					 "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  			}
  		}
};
class passenger
{
	public:
    	virtual void getdata(){}
		virtual void show(){}
};
class booking:public passenger
{
	protected:
		static int t;
   		static int r;
 		string firstname;
 		string lastname;
 		string address;
 		string c_loc;
 		string dest;
 		string reservation_no;
 		int option;
 		int ti;
 		int check;
	public:
 		void getdata()
 		{
  			cout<<setw(40)<<"\n\n";
			cout<<setw(105)<<"::PLEASE ENTER THE REQUIRED INFORMATION FOR PASSENGER::"<<endl;  
  			cout<<"\n\n\nEnter the firstname of passenger: ";
   			cin>>firstname;
   			cout<<endl;
   			cout<<"Enter the lastname of passenger: ";
   			cin>>lastname;
   			cout<<endl;
   			cout<<"Enter address of passenger:  ";
   			cin>>address;
   			cout<<endl;
   			cout<<"Enter the Resevation No. of Ticket:  ";
   			cin>>reservation_no;
   			cout<<endl;
  	 		cout<<"Enter the current location of passenger(IN CAPITAL LETTERS ONLY):  ";
   			cin>>c_loc;
   			cout<<endl;
   			cout<<"Enter the destination of passenger(IN CAPITAL LETTERS ONLY):  ";
   			cin>>dest;
   			cout<<endl;
   			system("CLS");
 		}
 		void show()
 		{
 			time_t now = time(0);
 			char *dt = ctime(&now);
   			cout<<setw(40)<<"Your E-Ticket is :"<<endl;
  			cout<<"                           AIRLINE TICKET                                 "<<endl;
  			cout<<"|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl;
  			cout<<"|_________________________________________________________________________"<<endl;
  			cout<<"|Resevation No. :"<<reservation_no<<"                                     "<<endl;
  			cout<<"|__________________________________________________________________________"<<endl;
  			cout<<"|Passenger Information :                                                  "<<endl;
  			cout<<"|Name :"<<lastname<<"/"<<firstname<<"                                     "<<endl;
  			cout<<"|                                                                         "<<endl;
  			cout<<"|Address :"<<address<<"                                                   "<<endl;
  			cout<<"|_________________________________________________________________________"<<endl;
     		cout<<"|flight Information :                                                     "<<endl;
  			cout<<"|"<<dt<<"                                                                 "<<endl;
  			cout<<"|_________________________________________________________________________"<<endl;
  			cout<<"|Depart :"<<c_loc<<"                                                      "<<endl;
  			cout<<"|Arrive :"<<dest<<"                                                       "<<endl;
  			cout<<"|*BAGGAGE allowed 40 Kilos*                                               "<<endl;
  			cout<<"|Ticket Price="<<ti<<"                                                    "<<endl;
  			cout<<"|_________________________________________________________________________"<<endl; 
  			ofstream outfile("E:\\E_ticket.txt");
        	outfile<<"                           AIRLINE TICKET                                 "<<endl<<
   					 "|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl<<
      				 "|_________________________________________________________________________"<<endl<<
   					 "|Resevation No. :"<<reservation_no<<"                                     "<<endl<<
   					 "|__________________________________________________________________________"<<endl<<
     				 "|Passenger Information :                                                  "<<endl<<
     				 "|Name :"<<lastname<<"/"<<firstname<<"                                     "<<endl<<
     				 "|                                                                         "<<endl<<
     				 "|Address :"<<address<<"                                                   "<<endl<<
     				 "|_________________________________________________________________________"<<endl<<
        			 "|flight Information :                                                     "<<endl<<
     				 "|"<<dt<<"                                                                 "<<endl<<
     				 "|_________________________________________________________________________"<<endl<<
     				 "|Depart :"<<c_loc<<"                                                      "<<endl<<
     				 "|Arrive :"<<dest<<"                                                       "<<endl<<
     				 "|*BAGGAGE allowed 40 Kilos*                                               "<<endl<<
     				 "|Ticket Price="<<ti<<"                                                    "<<endl<<
     				 "|_________________________________________________________________________"<<endl;
			t=t+1;
			r=r+1;
}
};
int booking::t=1;
int booking::r=12345;
class search
{
	public:
		void searching()
 		{
  			cout<<"FOLLOWING ARE THE INTERNATIONAL FLIGHTS AVAILABLE\n"<<endl;
			for(int i=0;i<5;i++)
 			{ 
  				for(int j=0;j<10;j++) 
  				{ 
   					cout<<"FLIGHT FROM "<<l_destination[i]<<" TO "<<i_destination[j]<<endl;
  				}
  			}
  		}
};
class local: public booking
{
	private:
    	static int b_seat;
 		static int e_seat;
 		int k;
 		int p;
 		int choice;
 	mytime t1;
	public:
 		void getdata()
 		{
  			k=0;
  			p=0;
  			l:
  			cout<<setw(100)<<"\n\n\n\n\n\n\n\n\n\n\n";
			cout<<setw(100)<<"In WHICH AIRLINE YOU WANT TO TRAVEL"<<endl<<endl;
  			cout<<setw(70)<<"1)PIA"<<endl;
  			cout<<setw(75)<<"2)AIR BLUE"<<endl;
  			cout<<setw(80)<<"3)ARAB EMIRATES"<<endl;
  			cout<<setw(80)<<"4)QATAR AIRWAYS"<<endl<<endl;
  			cout<<setw(82)<<"ENTER YOUR CHOICE"<<endl;
  			cin>>option;
  			system ("cls");
  			switch(option)
  			{
  				case 1:
   					if (option==1)
   					{
    					cout<<setw(100)<<"\n\n\n";
						cout<<setw(85)<<"WELCOME TO PIA"<<endl;
    				}
   				break;
  				case 2:
   					if(option==2)
    				{
    					cout<<setw(100)<<"\n\n\n";
						cout<<setw(85)<<"WELCOME TO AIR BLUE"<<endl;
    				}
   				break;
  				case 3:
   					if(option==3)
    				{
    					cout<<setw(100)<<"\n\n\n";
						cout<<setw(85)<<"WELCOME TO ARAB EMIRATES"<<endl;
    				}
   				break;
  				case 4:
   					if(option==4)
    				{
    					cout<<setw(100)<<"\n\n\n";
						cout<<setw(85)<<"WELCOME TO QATAR AIRWAYS"<<endl;
    				}
   				break;
   				default:
   					system("CLS");
					cout<<"PRESS THE GIVEN NUMBERS....!\n";
   					getch();
   					system("CLS");
   					goto l;
  			}		
  	cout<<setw(100)<<"\n";
	cout<<setw(100)<<"THESE ARE THE LOCAL PLACES AVAILABLE\n\n\n"<<endl;
  	for(int i=0;i<5;i++)
  	{
   		cout<<setw(85)<<l_destination[i]<<endl;
  	}
  	ti=20000;
  	check=1;
  	booking::getdata();
  	for(int j=0;j<5;j++)
  	{
   		if(l_destination[j]==c_loc)
   		{
    		k++;
   		}
  	}
  	for( int i=0;i<5;i++)
  	{
		if(l_destination[i]==dest) 
		{ 
		  	p++;
   		}
  	}
  	if(k==1&&p==1)
  	{
  		n:
  		cout<<"\n\n\n\n";
		cout<<setw(95)<<" FLIGHT AVAILABLE ON THIS ROUTE"<<endl<<endl;
		cout<<setw(98)<<"IN WHICH CLASS YOU WANT TO TRAVEL?"<<endl<<endl;      
		cout<<"\n\n\n\n";
    	cout<<setw(100)<<"*************************************"<<endl;
    	cout<<setw(100)<<"*     PRESS 1 FOR BUSINESS CLASS    *"<<endl;
    	cout<<setw(100)<<"*     PRESS 2 FOR ECONOMY CLASS     *"<<endl;
		cout<<setw(100)<<"*************************************"<<endl<<endl<<endl<<endl;
		cout<<"ENTER YOUR CHOICE"<<endl; 
		cin>>choice; 
   		cout<<endl;
   		switch(choice) 
   		{
   			case 1:
   				b_seat--; 
    			if(b_seat<0)
     			{
					cout<<setw(85)<<"SORRY NO SEAT AVAILABLE"<<endl;
     				getch();
     				exit(0);
     			}
    			else
     				cout<<setw(88)<<"SEAT AVAILABLE"<<endl<<endl;
    		break;
   			case 2:
    			e_seat--;
    			if(e_seat<0)
    			{
     				cout<<setw(85)<<"SORRY NO SEAT AVAILABLE"<<endl;
     				getch();
     				exit(0);
     			}
    			else 
    				cout<<setw(88)<<"SEAT AVAILABLE"<<endl<<endl;
    		break;
    		default:
    			system("CLS");
    			cout<<"PRESS THE GIVEN NUMBERS....!\n";
    			getch();
    			system("CLS");
    			goto n;
   		}
   	e:
   	t1.getdata();
   	if(t1.choice>3)
   	{
   		system("CLS");
   		cout<<"ENTER GIVEN NUMBERS....!\n";
   		getch();
   		system("CLS");
   		goto e;
   		system("CLS");
   	}
   	system("CLS");
   	booking::show();
   	if(choice==1)
   	{
    	cout<<"|                                                                         "<<endl;
    	cout<<"|Ticket Information:                                                      "<<endl;
    	cout<<"|BUISNESS CLASS                                                           "<<endl;
    	ofstream outfile;
    	outfile.open("E:\\E_ticket.txt",ios::app);
    	outfile<<"|                                                                         "<<endl<<
            	 "|Ticket Information:                                                      "<<endl<<
            	 "|BUISNESS CLASS                                                           "<<endl;
	}
   	if(choice==2)
   	{
    	cout<<"|                                                                         "<<endl;
    	cout<<"|Ticket Information:                                                      "<<endl;
    	cout<<"|ECONOMY CLASS                                                            "<<endl;
    	ofstream outfile;
    	outfile.open("E:\\E_ticket.txt",ios::app);
    	outfile<<"|                                                                         "<<endl<<
            	 "|Ticket Information:                                                      "<<endl<<
            	 "|ECONOMY CLASS                                                           "<<endl;
   	}
    	cout<<"|Status: confirmed                                                        "<<endl;
    	ofstream outfile;
    	outfile.open("E:\\E_ticket.txt",ios::app);
    	outfile<<"|Status: confirmed                                                        "<<endl;
    	t1.show();
  	}
  	else
  	{
     	cout<<"__________________________________________________________________________"<<endl;
     	cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
     	cout<<"__________________________________________________________________________"<<endl;
  	}
  	getch();
	system("CLS");
}
};
int local::b_seat=30;
int local::e_seat=40;
class international:public booking
{
	private:
		static int b1_seat;
		static int e1_seat;
		int b;
		int v;
		int choice;
    mytime t1;
 	public:
 		
  		void getdata()
 		{
			b=0;
			v=0;
			l:
        	cout<<setw(100)<<"\n\n\n\n\n\n\n\n\n\n\n";
			cout<<setw(100)<<"In WHICH AIRLINE YOU WANT TO TRAVEL"<<endl<<endl;
  			cout<<setw(70)<<"1)PIA"<<endl;
  			cout<<setw(75)<<"2)AIR BLUE"<<endl;
  			cout<<setw(80)<<"3)ARAB EMIRATES"<<endl;
  			cout<<setw(80)<<"4)QATAR AIRWAYS"<<endl<<endl;
  			cout<<setw(82)<<"ENTER YOUR CHOICE"<<endl;
  			cin>>option;
  			system ("cls");
  			switch(option)
  			{
  				case 1:
   					if (option==1)
   					{
    					cout<<setw(100)<<"\n\n\n";
						cout<<setw(85)<<"WELCOME TO PIA"<<endl;
    				}
   				break;
  				case 2:
   					if(option==2)
    				{
    					cout<<setw(100)<<"\n\n\n";
						cout<<setw(85)<<"WELCOME TO AIR BLUE"<<endl;
    				}
   				break;
  				case 3:
   					if(option==3)
    				{
    					cout<<setw(100)<<"\n\n\n";
						cout<<setw(85)<<"WELCOME TO ARAB EMIRATES"<<endl;
    				}
   				break;
  				case 4:
   					if(option==4)
    				{
    					cout<<setw(100)<<"\n\n\n";
						cout<<setw(85)<<"WELCOME TO QATAR AIRWAYS"<<endl;
    				}
   				default:
   					system("CLS");
					cout<<"PRESS THE GIVEN NUMBERS....!\n";
   					getch();
   					system("CLS");
   					goto l;
			} 
   		cout<<setw(100)<<"\n";
		cout<<setw(100)<<"THESE ARE THE INTERNATIONAL PLACES AVAILABLE\n\n\n"<<endl;
   		for(int i=0;i<10;i++)
   		{
    		cout<<setw(85)<<i_destination[i]<<endl; 
   		}
   booking::getdata();
   for(int j=0;j<10;j++)
	{
		if(i_destination[j]==dest)
    	{
			v++;
    	}
	}
   for( int i=0;i<5;i++)
	{
    	if(l_destination[i]==c_loc)
    	{
     		b++;
    	}
	}
	if(b==1&&v==1)
	{
		n:
    	cout<<"\n\n\n\n";
		cout<<setw(95)<<" FLIGHT AVAILABLE ON THIS ROUTE"<<endl<<endl;
		cout<<setw(98)<<"IN WHICH CLASS YOU WANT TO TRAVEL?"<<endl<<endl;      
		cout<<"\n\n\n\n";
    	cout<<setw(100)<<"*************************************"<<endl;
    	cout<<setw(100)<<"*     PRESS 1 FOR BUSINESS CLASS    *"<<endl;
    	cout<<setw(100)<<"*     PRESS 2 FOR ECONOMY CLASS     *"<<endl;
		cout<<setw(100)<<"*************************************"<<endl<<endl<<endl<<endl;
		cout<<"ENTER YOUR CHOICE"<<endl;
  		cin>>choice;  
  		cout<<endl;
  		switch(choice)
  		{
  			case 1:
   				b1_seat--;
   				if(b1_seat<0)
   				{
    				cout<<setw(85)<<"SORRY NO SEAT AVAILABLE"<<endl;
    				getch();
    				exit(0);
    			}
   				else
    				cout<<setw(85)<<"SEAT AVAILABLE"<<endl;
   			break;
  			case 2:
   				e1_seat--;
   				if(e1_seat<0)
   				{
    				cout<<setw(85)<<"SORRY NO SEAT AVAILABLE"<<endl;
					getch();
					exit(0);
				}
   				else
    				cout<<setw(85)<<"SEAT AVAILABLE"<<endl;
   			break;
   			default:
   				system("CLS");
   				cout<<"PRESS GIVEN NUMBERS....!\n";
   				getch();
   				system("CLS");
   				goto n;
  		}
  	e:
  	t1.getdata();
  	ti=100000;
   	if(t1.choice>3)
   	{
   		system("CLS");
   		cout<<"ENTER GIVEN NUMBERS....!\n";
   		getch();
   		system("CLS");
   		goto e;
   		system("CLS");
   	}
   	system("CLS");
  	booking::show();
  	if(choice==1)
  	{
    	cout<<"|                                                                         "<<endl;
    	cout<<"|Ticket Information:                                                      "<<endl;
    	cout<<"|BUISNESS CLASS                                                           "<<endl;
    	ofstream outfile;
    	outfile.open("E:\\E_ticket.txt",ios::app);
    	outfile<<"|                                                                         "<<endl<<
            	 "|Ticket Information:                                                      "<<endl<<
             	 "|BUSINESS CLASS                                                           "<<endl;
  	}
  	if(choice==2)
  	{
    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|ECONOMY CLASS                                                           "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Ticket Information:                                                      "<<endl<<
             "|ECONOMY CLASS                                                           "<<endl;
  	}
  	cout<<"|Status: confirmed                                                        "<<endl;
  	
  	ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|Status: confirmed                                                        "<<endl;  
  	t1.show();
   	}
   	else
   	{
    	cout<<" ________________________________________________________________________"<<endl;
     	cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                  |"<<endl;
   		cout<<"|________________________________________________________________________|"<<endl;
   	}
}
};
int international::b1_seat=30;
int international::e1_seat=40;
class main1
{
	private:
		string filename;
  		int menu_choice;
  		mytime t1;
 	public:
		void getdata()
		{
			m:
   			cout<<"\n\n\n\n\n\n";
   			cout<<setw(100)<<"*************************************"<<endl;
   			cout<<setw(100)<<"*        AIRLINE RESERVATION        *"<<endl;
   			cout<<setw(100)<<"*                                   *"<<endl;
   			cout<<setw(100)<<"*             MAIN MENU             *"<<endl;
			cout<<setw(100)<<"*        ENTER YOUR CHOICE          *"<<endl;
  	 		cout<<setw(100)<<"*     PRESS 1 FOR LOCAL BOOKING     *"<<endl;
   			cout<<setw(100)<<"* PRESS 2 FOR INTERNATIONAL BOOKING *"<<endl;
   			cout<<setw(100)<<"*   PRESS 3 FOR SEARCH OF FLIGHTS   *"<<endl;
   			cout<<setw(100)<<"*   PRESS 4 TO CHECK LAST TICKET    *"<<endl;
			cout<<setw(100)<<"*         PRESS 5 FOR EXIT          *"<<endl;
   			cout<<setw(100)<<"*                                   *"<<endl;
   			cout<<setw(100)<<"*       NOW ENTER YOUR CHOICE:      *"<<endl;
   			cout<<setw(100)<<"*************************************"<<endl<<endl;
   			cout<<"--->";
			cin>>menu_choice;
  			system("cls");
			passenger *p1;
   			international i1;
   			local l1;
   			char back;
   			if (menu_choice==4)
   			{
   				ifstream outfile;
    				outfile.open("E:\\E_ticket.txt");
    				string text;
    				outfile>>text;
    				while(outfile.good())
    				{
    					cout<<text<<endl;
    					outfile>>text;
					}
					cout<<"TO GO TO MAIN MENU PRESS b/B"<<endl;
    				cin>>back;  
   					system("CLS");
    				if (back=='b'||back=='B')
    				{
     					goto m;
    				}
    				else 
    				{
     					cout<<"\n\n\n\n\n\n";
     					cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
    				}
			}
			switch(menu_choice)
   			{
   				case 1:
					p1=&l1;
					p1->getdata();
    				cout<<"TO GO TO MAIN MENU PRESS b/B"<<endl;
    				cin>>back;
    				system("CLS");
    				if (back=='b'||back=='B')
    				{
     					goto m;
    				}
    				else
    				{
     					cout<<"\n\n\n\n\n\n";
     					cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
    				}
    			break;
   				
				case 2:
					p1=&i1;
					p1->getdata();
    				cout<<"TO GO TO MAIN MENU PRESS b/B"<<endl;
    				cin>>back;
    				system("CLS");
					if (back=='b'||back=='B')
  					{
 						goto m;
    				}
    				else
    				{
     					cout<<"\n\n\n\n\n\n";
     					cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
    				}
  				break;
   				
				case 3:
    				search s1;
					s1.searching();
    				cout<<"TO GO TO MAIN MENU PRESS b/B"<<endl;
    				cin>>back;  
   					system("CLS");
    				if (back=='b'||back=='B')
    				{
     					goto m;
    				}
    				else 
    				{
     					cout<<"\n\n\n\n\n\n";
     					cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
    				}
    			break;
    			case 4:
    				cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
    				getch();
    				exit(0);
    			break;
    
    			default:
    				system("CLS");
    				cout<<"PRESS THE GIVEN NUMBERS....!\n";
    				getch();
    				system("CLS");
    				goto m;
}
} 
};
int main()
{
	system("cls");
	main1 m1;
	m1.getdata();
}
