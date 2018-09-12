#include<iostream.h>
#include<conio.h>

   class FLI{
       int f_number;
       char a_name[20];
       char destination[20];
       char source[20];
       char d_date[20];
       char d_time[20];
       char a_date[20];
       char a_time[20];
       float price;
       public:
       //To add the data
       void add_data(){

	      cout<<"\nEnter flight number: ";
	      cin>>f_number;
	      cout<<"\nEnter airlines name: ";
	      cin>>a_name;
	      cout<<"\nEnter Destination: ";
	      cin>>destination;
	      cout<<"\nEnter Source: ";
	      cin>>source;
	      cout<<"\nEnter Departure Date: ";
	      cin>>d_date;
	      cout<<"\nEnter Departure Time: ";
	      cin>>d_time;
	      cout<<"\nEnter Arrival Date: ";
	      cin>>a_date;
	      cout<<"\nEnter Arrival Time: ";
	      cin>>a_time;
	      cout<<"\nEnter price: ";
	      cin>>price;
	      cout<<"\nData is saved.";

	}
	 void display(){
	    cout<<"\nFlight Number: "<<f_number;
	    cout<<"\nAirlines Name: "<<a_name;
	    cout<<"\nDestination : "<<destination;
	    cout<<"\nSource: "<<source;
	    cout<<"\n Departure Date: "<<d_date;
	    cout<<"\n Departure Time: "<<d_time;
	    cout<<"\n Arrival Date: "<<a_date;
	    cout<<"\n Arrival Time: "<<a_time;
	    cout<<"\n Price: "<<price;
	    }
	   int priceis(){
	   return price;
	   }

       };

     void main(){
	 clrscr();
	 int n;
	 cout<<"\nHow many flights data do you want to enter: ";
	 cin>>n;
	  FLI fl[100];
	  int ans;
	  //To add the details and save it in an array;
	  for(int i = 0; i <n; i++){
	      fl[i].add_data();
	      cout<<"\nDo you want to enter more data? (1 if yes 0 if no)";
	      cin>>ans;
	      if (ans==0)
		 break;
		}
	    //To filter the data using price
		for(int j =0; j<n;j++){
		  if(fl[j].priceis()<=250)
		      fl[j].display();
		      }
	     //To display all the data stored;
	     for(int k = 0 ; k<n ; k++){
		 fl[k].display();
		 }
		getch();
	    }