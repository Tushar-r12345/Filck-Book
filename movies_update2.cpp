#include <bits/stdc++.h>
#include <conio.h>
#include <unistd.h>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

void pay(int);
void display_homepage();
int q_no = 1;
int correct = 0;
int wrong = 0;
bool ask[5] = {true,true,true,true,true};
void display_question();
void display_buzz();
void question(string question, string a, string b, string c, string d, char correct_answer);
void result();
int solve;
void date();
void display_events();
void display_streams_booking();
void display_events_in_booking();
void display_movies_booking();
void display_plays_in_booking();
void booking();
void display_first_screen();
void movie_booking();
void my_booking();
void about_us();
void display_movies();
void display_streams();
void display_events_in();
void display_plays();
void display_buzz();
void exit();
void exit1();
void handle_unknown();
int month,year;
char c;

class ticket{

public:
	char name[20];
	char cno[20];

	void print_out(){

	    cout<<"\n\t\t\t\tName : "<<name<<endl;
	    cout<<"\t\t\t\tContact Number : "<<cno<<endl;

	}

	void display_streams() {
    system("CLS");

    int n;
    cout<<"\n\n"<<endl;
    cout<<"=============================================THE EVENTS ARE......==============================================\n\n"<<endl;


    cout<<"\t[1]. Youtube Live\t\t\t[2]. BUY & RENT\t\t\t[3]. Press 3 to go back....\n"<<endl;

    cout<<"===============================================================================================================\n\n"<<endl;
    cout<<"\t\t\t\t\tEnter your Choice ----> ";

    cin>>n;

    if(n == 1){
        char c;
        system("CLS");
        cout<<"\n\n"<<endl;
        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\t\t\t\t\t[1]. 90's GAMES MARATHON\n"<<endl;
        cout<<"\t\t\t\t\t[2]. LET'S GET BACK TO THIS! - NO PROMOTION\n"<<endl;
        cout<<"\t\t\t\t\t[3]. MAVERICKS AT CLIPPERS\n"<<endl;
        cout<<"\t\t\t\t\t[4]. AUSTRALIA V/S INDIA 2020-21\n"<<endl;
        cout<<"\t\t\t\t\t[5]. TEAM CENA V/S TEAM AUTHORITY\n"<<endl;
        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\n\t\t\t\t\t PRESS Y TO GO BACK----> (Y) : ";
        cin>>c;
        if(c == 'Y'|| c == 'y'){
        display_streams();
        }
    }
    else if(n == 2){
        char c;
        system("CLS");
        cout<<"\n\n"<<endl;

        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\t\t\t\t\t[1]. Godzilla vs. Kong\n"<<endl;
        cout<<"\t\t\t\t\t[2]. HEY JUDGE(telugu)\n"<<endl;
        cout<<"\t\t\t\t\t[3]. WONDER WOMAN 1984\n"<<endl;
        cout<<"\t\t\t\t\t[4]. THE CLIMB\n"<<endl;
        cout<<"\t\t\t\t\t[5]. SPIDER-MAN: INTO THE SPIDER-VERSE\n"<<endl;
        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\n\t\t\t\t\t PRESS Y TO GO BACK----> (Y) : ";
        cin>>c;
        if(c == 'Y'|| c == 'y'){
        display_streams();
        }
    }

    else if(n != 2) {
        display_events();
    }
}

void display_events_in() {
    char c;

    system("CLS");
    cout<<"\n\n"<<endl;

        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\t\t\t\t\t[1]. GALAXY UNPACKED APRIL 2021: OFFICIAL REPLAY\n"<<endl;
        cout<<"\t\t\t\t\t[2]. MARVEL STUDIOS' ETERNALS\n"<<endl;
        cout<<"\t\t\t\t\t[3]. MICROSOFT LICENSING ON AWS\n"<<endl;
        cout<<"\t\t\t\t\t[4]. KGF CHAPTER 2 TEASER\n"<<endl;
        cout<<"\t\t\t\t\t[5]. ASHISH MEETS THE FALCON AND THE WINTER SOLDIER\n"<<endl;
        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\n\t\t\t\t\t PRESS Y TO GO BACK----> (Y) : ";
        cin>>c;
        if(c == 'Y'|| c == 'y'){

        display_events();
        }
}

void display_plays() {

    system("CLS");
    cout<<"\n\n"<<endl;

        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\t\t\t\t\t[1]. FROZEN\n"<<endl;
        cout<<"\t\t\t\t\t[2]. GOOD DOG\n"<<endl;
        cout<<"\t\t\t\t\t[3]. RICHARD II - SWINGING THE LENS\n"<<endl;
        cout<<"\t\t\t\t\t[4]. DREAM COME TRUE(hindi)\n"<<endl;
        cout<<"\t\t\t\t\t[5]. ROYAL OPERA HOUSE\n"<<endl;
        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\n\t\t\t\t\t PRESS Y TO GO BACK----> (Y) : ";
        cin>>c;
        if(c == 'Y'|| c == 'y'){
        system("CLS");
        display_events();
        }
}

}t;

class d_ticket2:public ticket{

}dt2;

void pay(int a)
{
	int normal, gold, amt[2],id;
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	fstream fin;
	fin.open("card.dat", ios::in|ios::app);
	fin>>id;
	cout<<"\t\tThank you for selecting the show. Now we request you to select your type of seating \n\n\t\t\t\t 1.Normal Class \n\t\t\t\t OR \n\t\t\t\t 2. Gold Class";
	int c;
	cin>>c;
	if(c==1)
	{
		cout<<"\n\n\t\t\tYou selected for a Normal show \n\n\t\t\t\t";
		system("PAUSE");
		system("CLS");
		amt[1] = a * 400;
		char final;
		cout<<"\n\t=======================================================================================================\n\n"<<endl;

		cout<<"\n\t\t\t\t\tWant to pay by Card(y/n): ";
		char rep;
		cin>>rep;
		cout<<"\n\t\t\t\t\t"<<"Paying :"<<amt[1]<<"\n";
		if (rep=='y'||rep=='Y')
		{
			cout<<"\t\t\t\t\tName of the card holder: ";
			char n[10];
			cin>>n;
			cin.get();
			cout<<"\n\t\t\t\t\tEnter the card number: ";
			char Card[16];
			cin.get();
			cout<<"\t\t\t\t\t Expiry (MM-YYYY) : ";
			cin>>month;
			cout<<"-";
			cin>>year;
			char password_card[3],vh;
			int h;
			cout<<"\t\t\t\t\t   Enter the CVV/CVV2 ";

			cout<<"\n\t\t\t\t\t  ";
			while (1)
			{
				if (h<0)
					h=0;
				vh=getch();
				if (vh==13)
					break;
				if (vh==8)
				{
					putch(NULL);
					putch(NULL);
					putch(NULL);
					h--;
					continue;
				}
				password_card[h++]=vh;
				vh='*';
				putch(vh);
			}
			password_card[h]=='\0';

		}

		cout<<"\n\t========================================================================================================\n"<<endl;
	}
	else
	{
		cout<<"\n\n\t\t\tYou selected for the Gold Class \n\t\t\t\t";
			system("PAUSE");
		system("CLS");
		amt[2] = a * 700;
		cout<<"\n\t\t\tWant to pay by Card(y/n): ";
		char rep;
		cin>>rep;
		cout<<"\n\t\t\t"<<"Paying :"<<amt[2]<<"\n";
		if (rep=='y'||rep=='Y')
		{
			cout<<"\t\t\tName of the card holder: ";
			char n[10];
			cin>>n;
			cin.get();
			char Card[16];
			cout<<"\n\t\t\tEnter the card number: ";
			char year[10];
			cin.get();
			cout<<"\n\t\t\tExpiry(YY): ";


			cin>>year;

			char password_card[3],vh;
			int h;
			puts("\n\t\t\tEnter the CVV/CVV2: ");
			while (1)
			{
				if (h<0)
					h=0;
				vh=getch();
				if (vh==13)
					break;
				if (vh==8)
				{
					putch(NULL);
					putch(NULL);
					putch(NULL);
					h--;
					continue;
				}
				password_card[h++]=vh;
				vh='*';
				putch(vh);
			};
			password_card[h]=='\0';
			}
	}
}


bool is_Logged_In(){
	string username, password, ur_name, ps_word;
	cout<<"\t\t\t\t\t    Enter Username: ";
	cin>>username;
	cout<<"\t\t\t\t\t    Enter password: ";
	cin>>password;

	ifstream myFile;
	myFile.open("data12\\" + username + ".txt");
	getline(myFile,ur_name);
	getline(myFile,ps_word);

	if(ur_name == username && ps_word == password){
		return true;
	}else{
		return false;
	}
}

int main() {


    string username;
    int a,b;
    char ans;
    int selection{};

    do {
        int option;
    system("color 03");

    cout<<"\n\n\n"<<endl;
    cout<<"\t\t--------------------------------------------------------------------------------"<<endl;
    cout<<"\n"<<endl;

    cout<<"\t\t************************\t\t\t\t************************"<<endl;
    cout<<"\t\t*                      *\t\t\t\t*                      *"<<endl;
    cout<<"\t\t*   1.REGISTER NOW     *\t\t\t\t*        2.LOGIN       *"<<endl;
    cout<<"\t\t*                      *\t\t\t\t*                      *"<<endl;
    cout<<"\t\t************************\t\t\t\t************************"<<endl;
    cout<<"\n"<<endl;

    cout<<"\t\t---------------------------------------------------------------------------------"<<endl;


	cout<<"\n\t\t\t\t\tPlease Enter Your Choice: ";
	cin>>option;

	if(option == 1){
		string username, password;

		cout<<"\t\t\t\t\tSelect a Username: ";
		cin>>username;
		cout<<"\t\t\t\t\tSelect a password: ";
		cin>>password;

		cout<<"\n\t\t\tCongratulation!.... you are being successfully registered"<<endl;
		cout<<"\n\t\t\t\t\t";system("PAUSE");


		ofstream MyFile;
		MyFile.open("data12\\" + username + ".txt");
		MyFile<<username<<endl<<password;
		MyFile.close();
		system("CLS");
		main();
	}else if(option == 2){
		bool status = is_Logged_In();

		if(!status){
			cout<<"Incorrect Username Or password!"<<endl;
			system("PAUSE");
			return 0;
		}else{
			cout<<"\n\t\t\t\t\tSuccesfully Logged In........"<<endl;
			cout<<"\t\t\t\t\t";system("PAUSE");
			system("CLS");
		}
	}

        display_homepage();
        cout<<"\t\t\t\t\tEnter your Choice ----> ";
        cin>>selection;
        switch(selection) {

        case 1:
            display_events();
            break;

        case 2:
            booking();
            break;

        case 3:
            system("CLS");
    cout<<"\n\n"<<endl;
    cout<<"========================================THE MOVIES ARE......=====================================================\n\n"<<endl;
			cout<<"\t\t\t\t\t[1]. Avengers: Endgame(english,hindi,tamil,telugu)\n";
			cout<<"\t\t\t\t\t[2]. Sardar Ka Grandson\n";
			cout<<"\t\t\t\t\t[3]. Deadpool 3\n";
			cout<<"\t\t\t\t\t[4]. Aquaman(hindi)\n";
			cout<<"\t\t\t\t\t[5]. Ready or Not\n";
    cout<<"===============================================================================================================\n\n"<<endl;
			cout<<"\n\t\t\tEnter Your Choice :"<<"\t";
			cin>>a;
			cout<<"\n\n\t\t\tThe Timings for the selected show are:";
			switch(a)
			{
				case 1:
					system("CLS");
				 cout<<"\n\n\t\t\tSelect the the timings: ";
					cout<<"\n\t\t\t1. 08:00";
					cout<<"\n\t\t\t2. 13:00";
					cout<<"\n\t\t\t3. 14:50";
					cout<<"\n\t\t\t4. 18:00";
					cout<<"\n\t\t\t5. 21:00";
					cout<<"\n\t\t\t6. 01:00 \n";
					cout<<"\n\n\t\tPlease select the timings: ";
					cin>>b;
					cout<<"\n\n\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\n\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\n\t\tEnter the number of tickets you want to purchase: ";
					int x;
					cin>>x;
					pay(x);
					cout<<"\n\n\n\t\t\tYour ticket is here: ";
					cout<<"\n\t\t\tName 		:"<<t.name;
					cout<<"\n\t\t\tContact No	:"<<t.cno;
					cout<<"\n\t\t\tShow timings 	:";
					switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
						}
						cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						display_first_screen();
						break;
				case 2:
				system("CLS");
				cout<<"\n\n\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t1. 09:00";
					cout<<"\n\t\t\t2. 11:00";
					cout<<"\n\t\t\t3. 12:50";
					cout<<"\n\t\t\t4. 15:00";
					cout<<"\n\t\t\t5. 20:00";
					cout<<"\n\t\t\t6. 22:00";
					cout<<"\n\t\t\tPlease select the timings: ";
					cin>>b;
					cout<<"\n\n\t\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\tYour ticket is here:";
					cout<<"\n\t\t\tName 		:"<<t.name;
					cout<<"\n\t\t\tContact No	:"<<t.cno;
					cout<<"\n\t\t\tShow timings 	:";
					switch(b)
					{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
					}
					cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 3:
				system("CLS");
				cout<<"\n\n\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t1. 08:00";
					cout<<"\n\t\t\t2. 13:00";
					cout<<"\n\t\t\t3. 14:50";
					cout<<"\n\t\t\t4. 18:00";
					cout<<"\n\t\t\t5. 21:00";
					cout<<"\n\t\t\t6. 01:00";
					cout<<"\n\t\t\tPlease select the timings";
					cin>>b;
					cout<<"\n\t\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\tYour ticket is here: ";
					cout<<"\n\t\t\tName 		:"<<t.name;
					cout<<"\n\t\t\tContact No	:"<<t.cno;
					cout<<"\n\t\t\tShow timings 	:";
					switch(b)
					{
							case 1:	cout<<"09:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
					}
					cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 4:
				system("CLS");
				cout<<"\n\n\t\t\tSelect the the timings: ";
					cout<<"\n\t\t\t1. 08:00";
					cout<<"\n\t\t\t2. 13:00";
					cout<<"\n\t\t\t3. 14:50";
					cout<<"\n\t\t\t4. 18:00";
					cout<<"\n\t\t\t5. 21:00";
					cout<<"\n\t\t\t6. 01:00";
					cout<<"\n\t\t\tPlease select the timings: ";
					cin>>b;
					cout<<"\n\t\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\tYour ticket is here: ";
					cout<<"\n\t\t\tName 		:"<<t.name;
					cout<<"\n\t\t\tContact No	:"<<t.cno;
					cout<<"\n\t\t\tShow timings 	:";
					switch(b)
					{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
					}
						cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 5:
				system("CLS");
				cout<<"\n\n\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t1. 08:00";
					cout<<"\n\t\t\t2. 13:00";
					cout<<"\n\t\t\t3. 14:50";
					cout<<"\n\t\t\t4. 18:00";
					cout<<"\n\t\t\t5. 21:00";
					cout<<"\n\t\t\t6. 01:00";
					cout<<"\n\t\t\tPlease select the timings: ";
					cin>>b;
					cout<<"\n\t\t\tEnter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\tEnter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n \n\t\t\tYour ticket is here: ";
					cout<<"\n\t\t\tName 		:"<<t.name;
					cout<<"\n\t\t\tContact No	:"<<t.cno;
					cout<<"\n\t\t\tShow timings 	:";
					switch(b)
					{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"13:00";
								break;
							case 3:	cout<<"14:50";
								break;
							case 4:	cout<<"18:00";
								break;
							case 5:	cout<<"21:00";
								break;
							case 6:	cout<<"01:00";
								break;
					}
					cout<<"\n\n\t\t\tDo you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			}
            break;

        case 4:
            display_buzz();
            break;

        case 5:
            my_booking();
            break;
        case 6:
            about_us();
            break;
        case 7:
            exit();
            break;

        default:
           handle_unknown();
           }
           cout<<endl;
        }while(selection != 6);
        cout<<endl;
        return 0;
}



void display_homepage(){
    cout<<"\n\n"<<endl;
    system("color 02");
    // system("color A1") - for background color
    cout<<"============================================ WELCOME TO FLICK BOOK ===========================================\n\n"<<endl;
    cout<<"\t\t\t\t\t[1]. View shows and events\n"<<endl;
    cout<<"\t\t\t\t\t[2]. Streams\n"<<endl;
    cout<<"\t\t\t\t\t[3]. Book Tickets\n"<<endl;
    cout<<"\t\t\t\t\t[4]. Buzz\n"<<endl;
    cout<<"\t\t\t\t\t[5]. My Booking\n"<<endl;
    cout<<"\t\t\t\t\t[6]. About us\n"<<endl;
    cout<<"\t\t\t\t\t[7]. Exit\n"<<endl;
    cout<<"===============================================================================================================\n\n"<<endl;
}

void display_first_screen(){

    int solve{};
    do{
        display_homepage();
        cout<<"\t\t\t\t\tEnter your Choice ----> ";
        cin>>solve;
        switch(solve) {

        case 1:
            display_events();
            break;

        case 2:
            booking();
            break;

        case 3:
            movie_booking();
            break;

        case 4:
            display_buzz();
            break;

        case 5:
            my_booking();
            break;

        case 6:
            about_us();
            break;
        case 7:
            exit();
            break;

        default:
           handle_unknown();
           }
           cout<<endl;
        }while(solve != 7);
        cout<<endl;


    }
void display_events(){

    system("CLS");
    int choice;
    cout<<"\n\n"<<endl;
    cout<<"===============================================================================================================\n\n"<<endl;
    cout<<"\t\t\t\t\t[1]. Streams\n"<<endl;
    cout<<"\t\t\t\t\t[2]. Events\n"<<endl;
    cout<<"\t\t\t\t\t[3]. Plays and Theatre\n"<<endl;
    cout<<"\t\t\t\t\t[4]. Exit\n"<<endl;

    cout<<"===============================================================================================================\n\n"<<endl;

    do {
        cout<<"\t\t\t\t\tEnter your Choice ----> ";
        cin>>choice;
        switch(choice) {

        case 1:
            dt2.display_streams();
            break;

        case 2:
            dt2.display_events_in();
            break;

        case 3:
            dt2.display_plays();
            break;

        case 4:
            exit1();
            break;

        default:
           handle_unknown();
           }
        }while(choice!=4);
        cout<<endl;

}

void display_streams_booking() {
    system("CLS");
    time_t tt;
    struct tm *ti;
    time(&tt);
    ti = localtime(&tt);

    int n;
    cout<<"\n\n"<<endl;
    cout<<"=============================================THE EVENTS ARE......==============================================\n\n"<<endl;


    cout<<"\t[1]. Youtube Live\t\t\t[2]. BUY & RENT\t\t\t[3]. Press 3 to go back....\n"<<endl;

    cout<<"===============================================================================================================\n\n"<<endl;
    cout<<"\t\t\t\t\tEnter your Choice ----> ";

    cin>>n;

    if(n == 1){
        int c_no;
        system("CLS");
        cout<<"\n\n"<<endl;
        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\t\t\t\t\t[1]. 90's GAMES MARATHON\n"<<endl;
        cout<<"\t\t\t\t\t[2]. LET'S GET BACK TO THIS! - NO PROMOTION\n"<<endl;
        cout<<"\t\t\t\t\t[3]. MAVERICKS AT CLIPPERS\n"<<endl;
        cout<<"\t\t\t\t\t[4]. AUSTRALIA V/S INDIA 2020-21\n"<<endl;
        cout<<"\t\t\t\t\t[5]. TEAM CENA V/S TEAM AUTHORITY\n"<<endl;
        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\n\t\t\t\t\t WHICH STREAM YOU WANT TO GO ENJOY..!----> : ";
        cin>>c_no;
        if(c_no == 1){
        system("start https:www.youtube.com/watch?v=YBq1jNaQP2o");
        }
        else if(c_no == 2){
            system("start https://www.youtube.com/watch?v=N850o7UAwo8");
        }
        else if(c_no == 3){
            system("start https://www.youtube.com/watch?v=MRXXZjeV1cU");
        }
        else if(c_no == 4){
            system("start https://www.youtube.com/watch?v=9TSFP-Ant4M");
        }
        else if(c_no == 5){
            system("start https://www.youtube.com/watch?v=gD7qJ3TW1jw");
        }

         booking();
    }
    else if(n == 2){
        int r,s,total = 0;
        string username,password,ur_name,pw_word;
        system("CLS");
        cout<<"\n\n"<<endl;

        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\t\t\t[1]. Godzilla vs. Kong                   ------------------   Rs 1500\n"<<endl;
        cout<<"\t\t\t[2]. HEY JUDGE(telugu)                   ------------------   Rs 2000\n"<<endl;
        cout<<"\t\t\t[3]. WONDER WOMAN 1984                   ------------------   Rs 1500\n"<<endl;
        cout<<"\t\t\t[4]. THE CLIMB                           ------------------   Rs 1000\n"<<endl;
        cout<<"\t\t\t[5]. SPIDER-MAN: INTO THE SPIDER-VERSE   ------------------   Rs 2000\n"<<endl;
        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\n\t\t\t\t\t PRESS WHICH FLICK YOU WANT TO BUY----> : ";
        cin>>r;
        cout<<"\t\t\t\t\t\t Enter your Username : ";
        cin>>username;
        //cin>>password;
        if(r == 1){
        cout<<"\t\t\tEnter if you want want buy combo (include Aloo Tikka Burger , Coca - Cola) : ";
        cin>>s;
        total = 1500 + s*270;
        cout<<"\t\t\t\t\tYour total bill for the stream is Rs. "<<total<<endl;
        if(s==0){
        cout<<"\t\t\t\t......Enjoy your movie at home and stay safe and healthy......\n\n";}
        else
            cout<<"\t\t.....Your meal will be delivered at registered address and stay safe and healthy.....\n\n";
        system("PAUSE");
        ofstream MyFile;


        MyFile.open("data12_movie\\" + username + ".txt",ios::app);
       // MyFile<<username<<endl;
        if(!MyFile){
        cout<<"............ error!..........";
       // return 1;
	   }
        total = 1500 + s*270;
        //MyFile<< total <<"\n"<<s<<endl;
        MyFile<<"\n\tDate: "<< asctime(ti)<<"\n\t\t\t(*).MOVIE :  Godzilla vs. Kong"<<"--------------> Rs. "<<total<<" including "<<s<< " Food Combo\n"<<endl;
        MyFile.close();
        display_streams_booking();
        }
        else if(r == 2){
        cout<<"\t\t\tEnter if you want want buy combo (include Burger, Popcorn , Coca - Cola) : ";
        cin>>s;
        if(s==0){
        cout<<"\t\t\t\t......Enjoy your movie at home and stay safe and healthy.....\n\n.";}
        else
            cout<<"\t\t.....Your meal will be delivered at registered address and stay safe and healthy.....\n\n";
        system("PAUSE");
        ofstream MyFile;


        MyFile.open("data12_movie\\" + username + ".txt",ios::app);
       // MyFile<<username<<endl;
        if(!MyFile){
        cout<<"............ error!..........";
       // return 1;
	   }
        total = 2000 + s*270;
        //MyFile<< total <<"\n"<<s<<endl;
        MyFile<<"\n\tDate: "<< asctime(ti)<<"\n\t\t\t(*).MOVIE :  HEY JUDGE(telugu)"<<"--------------> Rs. "<<total<<" including "<<s<< " Food Combo\n"<<endl;
        MyFile.close();
        display_streams_booking();

        }
        else if(r==3){
            cout<<"\t\t\tEnter if you want want buy combo (include Aloo Tikka Burger , Coca - Cola) : ";
        cin>>s;
        if(s==0){
        cout<<"\t\t\t\t......Enjoy your movie at home and stay safe and healthy......\n\n";}
        else
            cout<<"\t\t.....Your meal will be delivered at registered address and stay safe and healthy.....\n\n";
        system("PAUSE");
        ofstream MyFile;


        MyFile.open("data12_movie\\" + username + ".txt",ios::app);
       // MyFile<<username<<endl;
        if(!MyFile){
        cout<<"............ error!..........";
       // return 1;
	   }
        total = 1500 + s*270;
        //MyFile<< total <<"\n"<<s<<endl;
        MyFile<<"\n\tDate: "<< asctime(ti)<<"\n\t\t\t(*).MOVIE :  WONDER WOMAN 1984"<<"--------------> Rs. "<<total<<" including "<<s<< " Food Combo\n"<<endl;
        MyFile.close();
        display_streams_booking();
        }
        else if (r == 4){
            cout<<"\t\t\tEnter if you want want buy combo (include Aloo Tikka Burger , Coca - Cola) : ";
        cin>>s;
        if(s==0){
        cout<<"\t\t\t\t......Enjoy your movie at home and stay safe and healthy......\n\n";}
        else
            cout<<"\t\t.....Your meal will be delivered at registered address and stay safe and healthy.....\n\n";
        system("PAUSE");
        ofstream MyFile;


        MyFile.open("data12_movie\\" + username + ".txt",ios::app);
       // MyFile<<username<<endl;
        if(!MyFile){
        cout<<"............ error!..........";
       // return 1;
	   }
        total = 1000 + s*270;
        //MyFile<< total <<"\n"<<s<<endl;
        MyFile<<"\n\tDate: "<< asctime(ti)<<"\n\t\t\t(*).MOVIE :  THE CLIMB"<<"--------------> Rs. "<<total<<" including "<<s<< " Food Combo\n"<<endl;

        MyFile.close();
        display_streams_booking();
        }
        else if(r == 5){
            cout<<"\t\t\tEnter if you want want buy combo (include Aloo Tikka Burger , Coca - Cola) : ";
        cin>>s;
        if(s==0){
        cout<<"\t\t\t\t......Enjoy your movie at home and stay safe and healthy......\n\n";}
        else
            cout<<"\t\t.....Your meal will be delivered at registered address and stay safe and healthy.....\n\n";
        system("PAUSE");
        ofstream MyFile;


        MyFile.open("data12_movie\\" + username + ".txt",ios::app);
       // MyFile<<username<<endl;
        if(!MyFile){
        cout<<"............ error!..........";
       // return 1;
	   }
        total = 2000 + s*270;
        //MyFile<< total <<"\n"<<s<<endl;
        MyFile<<"\n\tDate: "<< asctime(ti)<<"\n\t\t\t(*).MOVIE :  SPIDER-MAN: INTO THE SPIDER-VERSE"<<"--------------> Rs. "<<total<<" including "<<s<< " Food Combo\n"<<endl;
        MyFile.close();
        display_streams_booking();
        }
    }

    else if(n != 2) {
        booking();
    }
}

void display_events_in_booking(){
    int event_no;

    system("CLS");
    cout<<"\n\n"<<endl;

        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\t\t\t\t\t[1]. GALAXY UNPACKED APRIL 2021: OFFICIAL REPLAY\n"<<endl;
        cout<<"\t\t\t\t\t[2]. MARVEL STUDIOS' ETERNALS\n"<<endl;
        cout<<"\t\t\t\t\t[3]. MICROSOFT LICENSING ON AWS\n"<<endl;
        cout<<"\t\t\t\t\t[4]. KGF CHAPTER 2 TEASER\n"<<endl;
        cout<<"\t\t\t\t\t[5]. ASHISH MEETS THE FALCON AND THE WINTER SOLDIER\n"<<endl;
        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\n\t\t\t\t\t WHICH EVENT YOU WANT TO ENJOY....... !! ---->  : ";
        cin>>event_no;

        if (event_no == 1){
            cout<<"\t Please wait while we are taking you.....to the event and enjoy.....and stay safe and healthy at home...!!";
            sleep(5);
            system("start https://www.youtube.com/watch?v=PUtk3ryShOo");

        }
        else if(event_no == 2){
            cout<<"\t Please wait while we are taking you.....to the event and enjoy.....and stay safe and healthy at home...!!";
            sleep(5);
            system("start https://www.youtube.com/watch?v=0WVDKZJkGlY");

        }
        else if(event_no == 3){
            cout<<"\t Please wait while we are taking you.....to the event and enjoy.....and stay safe and healthy at home...!!";
            sleep(5);
            system("start https://www.youtube.com/watch?v=aOAOEFRh1kg");

        }
        else if(event_no == 4){
            cout<<"\t Please wait while we are taking you.....to the event and enjoy.....and stay safe and healthy at home...!!";
            sleep(5);
            system("start https://www.youtube.com/watch?v=Qah9sSIXJqk");

        }
        else if(event_no == 5){
            cout<<"\t Please wait while we are taking you.....to the event and enjoy.....and stay safe and healthy at home...!!";
            sleep(5);
            system("start https://www.youtube.com/watch?v=nR1qC45-2C8");

        }
        system("cls");
        display_first_screen();

}

void display_plays_in_booking(){
    int event_no;

    system("CLS");
    cout<<"\n\n"<<endl;

        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\t\t\t\t\t[1]. FROZEN\n"<<endl;
        cout<<"\t\t\t\t\t[2]. GOOD DOG\n"<<endl;
        cout<<"\t\t\t\t\t[3]. RICHARD II - SWINGING THE LENS\n"<<endl;
        cout<<"\t\t\t\t\t[4]. DREAM COME TRUE(hindi)\n"<<endl;
        cout<<"\t\t\t\t\t[5]. ROYAL OPERA HOUSE\n"<<endl;
        cout<<"===============================================================================================================\n\n"<<endl;
        cout<<"\n\t\t\t\t\t WHICH EVENT YOU WANT TO ENJOY....... !! ---->  : ";
        cin>>event_no;

        if (event_no == 1){
            cout<<"\t Please wait while we are taking you.....to the event and enjoy.....and stay safe and healthy at home...!!";
            sleep(5);
            system("start https://youtu.be/BgL3vp8bEK0");

        }
        else if(event_no == 2){
            cout<<"\t Please wait while we are taking you.....to the event and enjoy.....and stay safe and healthy at home...!!";
            sleep(5);
            system("start https://youtu.be/T9K_QH3p3zI");

        }
        else if(event_no == 3){
            cout<<"\t Please wait while we are taking you.....to the event and enjoy.....and stay safe and healthy at home...!!";
            sleep(5);
            system("start https://www.youtube.com/watch?v=aOAOEFRh1kg");

        }
        else if(event_no == 4){
            cout<<"\t Please wait while we are taking you.....to the event and enjoy.....and stay safe and healthy at home...!!";
            sleep(5);
            system("start https://www.youtube.com/watch?v=Qah9sSIXJqk");

        }
        else if(event_no == 5){
            cout<<"\t Please wait while we are taking you.....to the event and enjoy.....and stay safe and healthy at home...!!";
            sleep(5);
            system("start https://www.youtube.com/watch?v=nR1qC45-2C8");

        }

        booking();


    cout<<endl;
}

void booking(){
    system("CLS");
    int choice;
    cout<<"\n\n"<<endl;
    cout<<"===============================================================================================================\n\n"<<endl;

    cout<<"\t\t\t\t\t[1]. Streams\n"<<endl;
    cout<<"\t\t\t\t\t[2]. Events\n"<<endl;
    cout<<"\t\t\t\t\t[3]. Plays and Theatre\n"<<endl;
    cout<<"\t\t\t\t\t[4]. Exit\n"<<endl;

    cout<<"===============================================================================================================\n\n"<<endl;

    do {
        cout<<"\t\t\t\t\tEnter your Choice ----> ";
        cin>>choice;
        switch(choice) {

        case 1:
            display_streams_booking();
            break;

        case 2:
            display_events_in_booking();
            break;

        case 3:
            display_plays_in_booking();
            break;

        case 4:
            exit1();
            break;

        default:
           handle_unknown();
           }
        }while(choice!=4);
        cout<<endl;

}
void date(){

    time_t tt;
    struct tm *ti;
    time(&tt);
    ti = localtime(&tt);

    cout<<"details: "<< asctime(ti)<<endl;
}

void movie_booking(){
    cout<<"movies"<<endl;

}
void my_booking(){
    system("CLS");
    char c;
    string line{};
    string username,password,ur_name,pw_word;
    cout<<"\n\n"<<endl;
    cout<<"======================================== WELCOME TO MY BOOKING =====================================================\n\n"<<endl;
    cout<<"\n\t\t\t\t\t Enter your Username : ";
    cin>>username;
    cout<<"\n\t\t\t\tPlease wait while we are fetching your data........";
    sleep(5);
   // strcpy(line,username);
    ifstream myFile;

    //getline(myFile,ur_name);
    //getline(myFile,pw_word);
    myFile.open("data12_movie\\" + username + ".txt");
    if(!myFile){
            sleep(2);
        cout<<".......erroe!........."<<endl;
    //    return 1;
    }

    while(getline(myFile,line)){
        cout<<line<<endl;
    }
    myFile.close();
    cout<<endl;
    cout<<"\n\t\t\t\t\t DO YOU WANT TO GO BACK----> (Y/N) : ";
    cin>>c;
    if(c == 'Y'|| c == 'y'){
        system("CLS");
        display_first_screen();

    }
    else if(c=='N'||c=='n'){
        display_first_screen();
    }

}
void about_us(){
    system("cls");
     cout<<"\n\n============================================== ABOUT US.....==========================================================\n\n"<<endl;
     cout<<"\n\tThe Project titled 'Flick Book' submitted by Siddharth Bothra ( 2K20/CO/442) and Tushar Pal (2k20/CO/461)"<<endl;
     cout<<"\trespectively from Department of Computer Science and Engineering , Delhi Technological University, Delhi as"<<endl;
     cout<<"\tpart of Innovative Work"<<endl;
     cout<<"\n\n=======================================================================================================================\n\n"<<endl;

     sleep(4);
     system("cls");

     display_first_screen();


}

void exit(){
    cout<<"Goodbye and have a nice day......"<<endl;
    system("PAUSE");
    exit(0);
    cout<<endl;
}

void display_buzz(){
    system("CLS");
    cout<<"\n\n"<<endl;
    cout<<"=================================== .....Welcome to Buzz..... ================================================="<<endl;
    cout<<"\n\t\t\t\t\tQuestion : "<<q_no<<"\t"<<"Correct : "<<correct<<"\t"<<"Wrong : "<<wrong<<endl;
    display_question();
}

void display_question(){
    srand(time(0));
    bool remaining = false;
    for(int i = 0; i<5;i++){
        if(ask[i]){
            remaining = true;
            break;
        }
    }
    while(remaining){
        int no = rand()%5;
        if(ask[no]){
            ask[no] = false;
            switch(no)
            {
            case 0:
                question("\n\t\t\t[#] Who played role of Tony Stark in 'Iron Man - III' ","Robert Downey Jr. ","Chris Evans ","Benedict Cumberbatch ","Henry cavill ",'a');
                break;
            case 1:
                question("\n\t\t\t[#]Guess the movie from the following : Bade bade shehron mein aisi chhoti chhoti baatein\n\t\t\t   hoti rehti hain, Senorita.","Dabangg ","Dilwale Dulhaniya Le Jaayenge ","hum aapke hain koun ","maine pyar kiya ",'b');
                break;
            case 2:
                question("\n\t\t\t[#]Who directed 'guardians of the galaxy 2' ","James Gunn ","Chris Pratt ","Morten Tyldum ","jon favreau ",'a');
                break;
            case 3:
                question("\n\t\t\t[#]For how much did Raju sell Shyam suit in 'Phir Hera Pheri'? ","Rs 500 ","Rs 1000","Rs 1750 ","Rs 2000 ",'b');
                break;
            case 4:
                question("\n\t\t\t[#]Is Gwyneth Paltrow part of 'Spider-Man: Homecoming' that released in 2017 ? ","Yes ","May Be ","No ","Cameo Part",'c');
                break;
            }
        }
    }
    result();

}

void result(){
    system("cls");
    cout<<"\n\n"<<endl;
    cout<<"\n\t\t\t.............................Your Result is....................................."<<endl;
    cout<<"\n\t\t\tQuestion : "<<q_no-1<<endl;
    cout<<"\n\t\t\tcorrect : "<<correct<<endl;
    cout<<"\n\t\t\twrong : "<<wrong<<endl;
    if(correct>wrong){
        cout<<"\n\t\t\t.................congragulation for maximum points....................."<<endl;
        if(wrong==0){
        cout<<"\n\n\t\t Congragulations, you get will free ticket of any movie of your choice : "<<endl;

        t.print_out();
    }
    }


    else if(correct<wrong){
        cout<<"\n\t\t\t.................Better luck next time for maximum points....................."<<endl;
    }

    else
        cout<<"\n\t\t\t...........................A Draw....................."<<endl;
    cout<<"\n.................................Please wait while we are generating your super points............................"<<endl;
    sleep(2);

    cout<<"\n\t\t\t.....................You are credited with "<<correct*10<<" points....................."<<endl;

    sleep(4);
    system("cls");

    display_first_screen();
}

void question(string question, string a, string b, string c, string d, char correct_answer){

    cout<<question<<endl;
    cout<<"\t\t\t(a.) "<<a<<endl;
    cout<<"\t\t\t(b.) "<<b<<endl;
    cout<<"\t\t\t(c.) "<<c<<endl;
    cout<<"\t\t\t(d.) "<<d<<endl;

    char answer;
    cout<<"\n\t\t\tEnter your Answer : ";
    cin>>answer;
    if(answer == correct_answer)
        correct++;
    else
        wrong++;

    q_no;
    display_buzz();

}

void exit1(){
    system("CLS");
    display_first_screen();
}

void handle_unknown(){
    cout<<"Unknown selection - try again"<<endl;
}


