#include <iostream>
#include <string>
using namespace std;

int main()
{
int r,f ;
const int i = 100;
int option;
int ticket[i];
int numticket = 0;
int ticketOption = 0;
string name[r];
int totalTicket =0;
char match;
int ticketSub;
int totalPrice;
int sentinel = -999;


	cout <<"\n================================================================================================  " ;
	cout <<"\n\t                                    WELCOME TO                                                   " ;
    cout <<"\n	                                                                 *** ***  ***  ***              ";
	cout <<"\n                                                                         *  *   *    *   *             ";
	cout <<"\n          CCCCC  EEEEEE  LLL      CCCCC    OOOOOOO    MM          MM      *             *            " ;
	cout <<"\n        CC       E       LLL    CC       OO       OO  MM M      M MM       *           *             " ;
	cout <<"\n       CC        EEEEEE  LLL   CC        OO       OO  MM   M  M   MM        *        *             " ;
	cout <<"\n        CC       E       LLL    CC       OO       OO  MM     M    MM         ********               " ;
	cout <<"\n          CCCCC  EEEEEE  LLLLLLLL CCCCC    OOOOOOO    MM          MM         **    **           " ;
	cout <<"\n	                                                                      ******          " ;
	cout <<"\n                             AXIATA MALAYSIA OPEN 2022\n                                        " ;
	cout <<"\n================================================================================================   " ;
	
	cout << "                                           Menu\n"
		 << "		1.Buy a ticket\n"
		 <<	"		2.Add ticket\n"
		 <<	"		3.Cancel ticket\n"
		 <<	"		Press -999 to exit\n";
	cin  >> option;
	cout << endl;
	
	//The user have choosen option - start repetition
	while ( option != sentinel)
	{
		switch (option)
		{
			case 1:
				
				cout << "Enter number of ticket you want to buy:";
				cin  >> ticket[i];
				cout << endl;
				numticket = numticket + ticket[i];
				for (int f = 1; f <= numticket+1 ; ++f)
		{
			cout << "Enter your name: \n" << endl ;
			getline (cin,name[f]);
		}
				
		// the user have entered number of ticket and name but not dispalyed yet.
			if (totalTicket < 100)
			{
		
			while (totalTicket < 100)
			{
			
				while ( ticketOption < numticket)
				{
					if (ticketOption == numticket)
						break;
					if (ticketOption == 101)
					{
						cout << "SORRY THE TICKET HAS BEEN SOLD OUT." << endl;
						break;
					}
				 
					cout << "Choose the match to watch\n"
							"A. LEE ZII JIA VS CHEN LONG\n"
							"B. KENTO MOMOTA VS VIKTOR AXELSEN\n"
							"C. ANTHONY GINTING VS NG TZE YONG\n"
							"D. KIDAMBI SRIKANTH VS ANDERS ANTONSEN\n";
					cout << "Match : "  ;
					cin  >> match;
					cout << endl;
				 	
					if( totalTicket < 100)
					{

						switch (match)
						{
							case 'A':
							case 'a':
								cout << "MATCH: LEE ZII JIA VS CHEN LONG\n"	
									 << "COURT: A \n" << endl;
								ticketOption++;
								totalTicket++;	
								break;
							case 'B':
							case 'b':
								cout << "MATCH: KENTO MOMOTA VS VIKTOR AXELSEN\n"
									 << "COURT: B\n" << endl;
								ticketOption++;
								totalTicket++;	
								break;
							case 'C':
							case 'c':
								cout << "MATCH: ANTHONY GINTING VS NG TZE YONG\n"
									 << "COURT: C\n" << endl;
								ticketOption++;
					 			totalTicket++;	
								break;
							case 'D':
							case 'd':
								cout << "MATCH: KIDAMBI SRIKANTH VS ANDERS ANTONSEN\n"
									 << "COURT: D\n" << endl;
								ticketOption++;
								totalTicket++;	
								break;
							default:
								cout << "THE OPTION IS UNAVAILABLE" << endl;
						}
					}
					else 
						cout << "SORRY THE TICKET HAS BEEN SOLD OUT." << endl;
				}
			
		
			cout << "PRESS \n"
					 << "2 TO ADD TICKET\n"
					 << "3 TO DELETE TICKET.\n"
					 << "-999 TO EXIT\n" << endl;
				cin  >> option;
				cout << endl;
				break;
			
			case 2:
				option = 1;
			
				cout << endl;
				break;
		
			case 3:
				cout <<"Delete Number Of Ticket.";
				cin  >> ticketSub;
				totalTicket -= ticketSub;
				numticket = numticket - ticketSub;
				cout << "Your ticket has been deleted. \n ";
				cout << "PRESS 2 TO ADD TICKET \n OR \n"
					 << "-999 TO EXIT";
				cin  >> option;
				break;
	  		}
		  }
		  else
		  {
		  
		  	cout << "SORRY THE TICKET HAS BEEN SOLD OUT." << endl;
		  	numticket = numticket - ticket[i];
		  		cout << "PRESS \n"
					 << "2 TO ADD TICKET\n"
					 << "3 TO DELETE TICKET.\n"
					 << "-999 TO EXIT\n" << endl;
				cin  >> option;
				cout << endl;
				break;
		  	}
	}
	}
	

		totalPrice = numticket* 10.00;
		cout << "\n The total price is " << numticket << " X RM 10 = RM " << totalPrice <<endl ;
		cout << "DETAILS" <<endl;
		for (int f = 0; f <= numticket ; ++f)
		{
			cout << "\nName : " << name[f] <<endl ;
			cout << "Date :22/2/2022 "<<endl;
			cout << "Time :08:00 a.m - 10:00 p.m "<<endl;
			cout << "Hall :CELCOM AXIATA ARENA" <<endl;
			cout << "Match : " << match << endl;	
		}
		return 0;
}


