#include<iostream>
#include<conio.h>
#include<process.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

// Various User Defined Function

void mainpage(); //starting page
void date();// to get current date





void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}


void date()
{
  time_t T= time(NULL);
  struct  tm tm = *localtime(&T);
  printf("\n\n\n");

  printf("\t\t\t\t\t   Date:%02d/%02d/%04d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);

}


void mainpage()
{
  int process=0;
  date();
  cout<<"\n";
  cout<<"\t\t\t\t    ---------------------------\n";
  cout<<"\t\t\t\t        MAHARASHTRA TOURISM\n";
  cout<<"\t\t\t\t    ---------------------------\n";
  cout<<"\n\n";
  cout<<"\t\t\t\t    Press Enter to continue......";
  cout<<"\n\n";
  getchar();
  cout<<"\t\t\t\tLoading";
  for(process=0;process<25;process++)
  {
    delay(150);
    system("Color B2");
    printf(".");
    system("Color Bc");

  }
   system("cls");
}



//lonavala

class Lonavala;
class Matheran;
class Mahableshwar;
class Data
{
    public:
        int ch,age,no_guest;
        string name,yes_no;


};

class Lonavala:public Data
{
    public:
        void display_heading();
        void lonavala();
        void lonavala_attraction();
        void lonavala_hotel();
        void lonavala_reach();
        void lonavala_time();
        void display_title();


};
void Lonavala::display_title()
{
    system("cls");
    cout<<" \n\t\t\t 1. Lonavala \t\t\t 3.Mahableshwar "<<endl;
    cout<<" \t\t\t 2. Matheran \t\t\t  4.Ajanta Caves "<<endl;



}

void Lonavala::lonavala_attraction()
{
    system("cls");
    cout<<"\n\t\t\t\tTourist attraction in lonavala"<<endl;
    cout<<" \n\t\t\t 1. Bushi Dam \t\t\t 2.Lonavala Lake "<<endl;
    cout<<" \t\t\t 2. Visapur Fort \t\t4.Lohagad Fort "<<endl;
    cout<<" \t\t\t 5. Rajamchi Fort \t\t 6.Bhairavnath Temple \n"<<endl;
}

void Lonavala::lonavala_hotel()
{

    cout<<"\n-----------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|     Reg.No        |       Hotel Name             |       Price           |        Offer              "<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
    cout<<"       1001         |      Aamby Valley City       |       Rs.2000         |       50% for students    "<<endl;
    cout<<"       1002         |      Zostel Plus Lonavala    |       Rs.1000         |          30%              "<<endl;
    cout<<"       1003         |      Lagoona Resort          |       Rs.2500         |          20%              "<<endl;
    cout<<"       1004         |      hotel rain sky inn      |       Rs.3000         |          40%              "<<endl;
    cout<<"       1005         |      The Lotus Resort        |       Rs.900          |          15%              "<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<"\n\t\t\tWould you want to book any above hotel(Y/N) : ";
    cin>>yes_no;
    if(yes_no == "Y")
    {
        cout<<"\n\t\t\tEnter Hotel Register number : ";
        cin>>ch;
        if(ch==1001)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            if(age<18)
            {
                cout<<"\t\t\tHotel Price : 1000(with offers)"<<endl;
            }
            else
            {
                 cout<<"\t\t\tHotel Price : 2000"<<endl;
            }
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
                lonavala_hotel();
            }
            else
            {
                system("cls");
                lonavala();
            }
        }
        if(ch==1002)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            cout<<"\t\t\tHotel Price : 1000"<<endl;
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
                lonavala_hotel();
            }
            else
            {
                system("cls");
                lonavala();
            }
        }
        if(ch==1003)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            cout<<"\t\t\tHotel Price : 2500"<<endl;
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
                lonavala_hotel();
            }
            else
            {
                system("cls");
                lonavala();
            }
        }
        if(ch==1004)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            cout<<"\t\t\tHotel Price : 3000"<<endl;
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
                lonavala_hotel();
            }
            else
            {
                system("cls");
                lonavala();
            }
        }
        if(ch==1005)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            cout<<"\t\t\tHotel Price : 900"<<endl;
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
                lonavala_hotel();
            }
            else
            {
                system("cls");
                lonavala();
            }
        }
        if(ch!=1001 && ch!=1002 && ch!=1003 && ch!=1004 && ch!=1005)
        {
            cout<<"\n\t\t\tInvalid hotel register number !!"<<endl;
        }
    }
    if(yes_no == "N")
    {
        system("cls");
        lonavala();
    }
}
void Lonavala::lonavala_reach()
{

cout<<"\n\n\t\t\t\t 1] By Airport"<<endl;
cout<<"\t\t\t\t 2] By Railway"<<endl;
cout<<"\t\t\t\t 3] By Road"<<endl;
cout<<"\n\t\t\t\t Choose Option[1/2/3] : ";
cin>>ch;
if(ch==1)
{
    cout<<"\t\tThe nearest airport to reach Lonavala is at Pune about 36 miles away. "<<endl;
}
if(ch==2)
{
    cout<<"\t\tLonavala is connected with all major stations of India through the main city of Mumbai and Pune"<<endl;
}
if(ch==3)
{
    cout<<"\t\tFrequently buses are available from pune and mumbai.It take 2 hours from mumbai"<<endl;
}
if(ch!=3 && ch!=2 && ch!=1)
{
    cout<<"\t\t\tinvalid Choice !!\n";
}

cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
cin>>yes_no;
if(yes_no == "Y")
{
    system("cls");
    lonavala_reach();
}
else{
    system("cls");
    lonavala();
}

}


void Lonavala::lonavala_time()
{
cout<<"\n\t\tSeptember to April is the perfect time to travel to Lonavala."<<endl;;
}

void Lonavala::lonavala()
{
    system("cls");
    cout<<"\n\t\t\t------------------ LONAVALA -------------------------\n"<<endl;

    do
    {
        cout<<"\n\t\t\t\t1. Tourist attraction in lonavala"<<endl;
        cout<<"\t\t\t\t2. Hotel Informations"<<endl;
        cout<<"\t\t\t\t3. How to reach"<<endl;
        cout<<"\t\t\t\t4. Best time to visit"<<endl;
        cout<<"\t\t\t\t5.  Exit"<<endl;

        cout<<"\n\n\t\t\t\t Choose options:[1/2/3/4/5]: ";
        cin>>ch;
        switch(ch)
        {
            case 1: lonavala_attraction();
                break;
            case 2: lonavala_hotel();
                break;
            case 3: lonavala_reach();
                break;
            case 4: lonavala_time();
                break;
            case 5: display_title();
                break;
            default:
                cout<<"Invalid Choice !!";
        }
    } while(ch != 5);
}
class Matheran: public Data
{
    public:
        void matheranheading();
        void matheran();
        void matheran_attraction();
        void matheran_hotel();
        void matheran_reach();
        void matheran_time();
        void matheran_title();
        void matheran_display();
};
void Matheran::matheran()
{

    system("cls");
    cout<<"\n\t\t\t------------------ Matheran -------------------------\n"<<endl;

    do
    {
        cout<<"\n\t\t\t\t1. Tourist attraction in Matheran"<<endl;
        cout<<"\t\t\t\t2. Hotel Informations"<<endl;
        cout<<"\t\t\t\t3. How to reach"<<endl;
        cout<<"\t\t\t\t4. Best time to visit"<<endl;
        cout<<"\t\t\t\t5.  Exit"<<endl;

        cout<<"\n\n\t\t\t\t Choose options:[1/2/3/4/5]: ";
        cin>>ch;
        switch(ch)
        {
            case 1: matheran_attraction();
                break;
            case 2: matheran_hotel();
                break;
            case 3: matheran_reach();
                break;
            case 4: matheran_time();
                break;
            case 5: matheran_display();
                break;
            default:
                cout<<"Invalid Choice !!";
        }
    } while(ch != 5);
}

void Matheran:: matheran_attraction()
{
        system("cls");
    cout<<"\n\t\t\t\tTourist attraction in Matheran"<<endl;
    cout<<" \n\t\t\t 1.Louisa point \t\t 2.One Hill Point "<<endl;
    cout<<" \t\t\t 2.Little Chowk Point \t\t 4.Charlotte Point "<<endl;
    cout<<" \t\t\t 5. King George Point \t\t 6.Porcupine Point \n"<<endl;

}
void Matheran::matheran_hotel()
{
    cout<<"\n-----------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|     Reg.No        |       Hotel Name             |       Price           |        Offer              "<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
    cout<<"       1001         |      Royal Hotel              |       Rs.1000         |       50% for students    "<<endl;
    cout<<"       1002         |      Westend Hotel            |       Rs.1000         |          30%              "<<endl;
    cout<<"       1003         |      Hotel Point View         |       Rs.2500         |          20%              "<<endl;
    cout<<"       1004         |     Horse Land Hotel          |       Rs.3000         |          40%              "<<endl;
    cout<<"       1005         |     New Green Hill resort     |       Rs.900          |          15%              "<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<"\n\t\t\tWould you want to book any above hotel(Y/N) : ";
    cin>>yes_no;
    if(yes_no == "Y")
    {
        cout<<"\n\t\t\tEnter Hotel Register number : ";
        cin>>ch;
        if(ch==1001)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            if(age<18)
            {
                cout<<"\t\t\tHotel Price : 1000(with offers)"<<endl;
            }
            else
            {
                 cout<<"\t\t\tHotel Price : 2000"<<endl;
            }
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
                matheran_hotel();
            }
            else
            {
                system("cls");
                matheran();
            }
        }
        if(ch==1002)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            cout<<"\t\t\tHotel Price : 1000"<<endl;
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
                matheran_hotel();
            }
            else
            {
                system("cls");
                matheran();
            }
        }
        if(ch==1003)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            cout<<"\t\t\tHotel Price : 2500"<<endl;
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
             matheran_hotel();
            }
            else
            {
                system("cls");
                matheran();
            }
        }
        if(ch==1004)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            cout<<"\t\t\tHotel Price : 3000"<<endl;
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
                matheran_hotel();
            }
            else
            {
                system("cls");
              matheran();
            }
        }
        if(ch==1005)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            cout<<"\t\t\tHotel Price : 900"<<endl;
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
                matheran_hotel();
            }
            else
            {
                system("cls");
                matheran();
            }
        }
        if(ch!=1001 && ch!=1002 && ch!=1003 && ch!=1004 && ch!=1005)
        {
            cout<<"\n\t\t\tInvalid hotel register number !!"<<endl;
        }
    }
    if(yes_no == "N")
    {
        system("cls");
        matheran();
    }
}

void Matheran:: matheran_reach()
{
    cout<<"\n\n\t\t\t\t 1] By Airport"<<endl;
cout<<"\t\t\t\t 2] By Railway"<<endl;
cout<<"\t\t\t\t 3] By Road"<<endl;
cout<<"\n\t\t\t\t Choose Option[1/2/3] : ";
cin>>ch;
if(ch==1)
{
    cout<<"\t\tThe nearest airport to reach matheran is at Mumbai . "<<endl;
}
if(ch==2)
{
    cout<<"\t\tMatheran is connected with all major stations of India through the main city of Mumbai "<<endl;
}
if(ch==3)
{
    cout<<"\t\tFrequently buses are available from mumbai."<<endl;
}
if(ch!=3 && ch!=2 && ch!=1)
{
    cout<<"\t\t\tinvalid Choice !!\n";
}

cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
cin>>yes_no;
if(yes_no == "Y")
{
    system("cls");
    matheran_reach();
}
else{
    system("cls");
  matheran();
}

}
void Matheran::matheran_display()
{
    system("cls");
    cout<<" \n\t\t\t 1. Lonavala \t\t\t 3.Mahableshwar "<<endl;
    cout<<" \t\t\t 2. Matheran \t\t\t  4.Ajanta Caves "<<endl;

}
void Matheran::matheran_time()
{
    cout<<"Best visiting time to Matheran is  between October and May "<<endl;
}

class Mahableshwar :public Data
{
    public:

        void mahableshwar();
        void mahableshwar_attraction();
        void mahableshwar_hotel();
        void mahableshwar_reach();
        void mahableshwar_time();
        void mahableshwar_display();
};
void Mahableshwar::mahableshwar_display()
{
    system("cls");
    cout<<" \n\t\t\t\t\t 1.  Lonavala \t\t\t\t  3.Mahableshwar "<<endl;
    cout<<" \t\t      2. Matheran \t\t  4.Ajanta Caves "<<endl;

}
void Mahableshwar::mahableshwar()
{
      system("cls");
    cout<<"\n\t\t\t------------------ Mahableshwar -------------------------\n"<<endl;

    do
    {
        cout<<"\n\t\t\t\t1. Tourist attraction in Mahableshwar"<<endl;
        cout<<"\t\t\t\t2. Hotel Informations"<<endl;
        cout<<"\t\t\t\t3. How to reach"<<endl;
        cout<<"\t\t\t\t4. Best time to visit"<<endl;
        cout<<"\t\t\t\t5.  Exit"<<endl;

        cout<<"\n\n\t\t\t\t Choose options:[1/2/3/4/5]: ";
        cin>>ch;
        switch(ch)
        {
            case 1: mahableshwar_attraction();
                break;
            case 2: mahableshwar_hotel();
                break;
            case 3: mahableshwar_reach();
                break;
            case 4: mahableshwar_time();
                break;
            case 5: mahableshwar_display();
                break;
            default:
                cout<<"Invalid Choice !!";
        }
    } while(ch != 5);
}
void Mahableshwar::mahableshwar_hotel()
{
     cout<<"\n-----------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|     Reg.No        |       Hotel Name             |       Price           |        Offer              "<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
    cout<<"       1001         |     Hotel Sunrise             |       Rs.1000         |       50% for students    "<<endl;
    cout<<"       1002         |     Lake Paradise             |       Rs.1000         |          30%              "<<endl;
    cout<<"       1003         |     Hotel mahableshwar        |       Rs.2500         |          20%              "<<endl;
    cout<<"       1004         |     Treebo Trend              |       Rs.3000         |          40%              "<<endl;
    cout<<"       1005         |     Panchgani Hotel           |       Rs.900          |          15%              "<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<"\n\t\t\tWould you want to book any above hotel(Y/N) : ";
    cin>>yes_no;
    if(yes_no == "Y")
    {
        cout<<"\n\t\t\tEnter Hotel Register number : ";
        cin>>ch;
        if(ch==1001)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            if(age<18)
            {
                cout<<"\t\t\tHotel Price : 1000(with offers)"<<endl;
            }
            else
            {
                 cout<<"\t\t\tHotel Price : 2000"<<endl;
            }
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
                mahableshwar_hotel();
            }
            else
            {
                system("cls");
                mahableshwar();
            }
        }
        if(ch==1002)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            cout<<"\t\t\tHotel Price : 1000"<<endl;
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
                mahableshwar_hotel();
            }
            else
            {
                system("cls");
               mahableshwar();
            }
        }
        if(ch==1003)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            cout<<"\t\t\tHotel Price : 2500"<<endl;
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
             mahableshwar_hotel();
            }
            else
            {
                system("cls");
                mahableshwar();
            }
        }
        if(ch==1004)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            cout<<"\t\t\tHotel Price : 3000"<<endl;
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
                mahableshwar_hotel();
            }
            else
            {
                system("cls");
              mahableshwar();
            }
        }
        if(ch==1005)
        {
            cout<<"\t\t\tEnter your name : ";
            cin>>name;
            cout<<"\t\t\tHow many guest will you wanted to book : ";
            cin>>no_guest;
            cout<<"\t\t\tEnter age : ";
            cin>>age;
            cout<<"\t\t\tHotel Price : 900"<<endl;
            cout<<"\t\t\tWould you want to confirm your booking(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                 cout<<"\t\t\tSuccesfully registed!!"<<endl;
            }
            else
            {
                cout<<"\t\t\tSorry your booking not confirm !!";
            }
            cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
            cin>>yes_no;
            if(yes_no == "Y")
            {
                system("cls");
               mahableshwar_hotel();
            }
            else
            {
                system("cls");
                mahableshwar();
            }
        }
        if(ch!=1001 && ch!=1002 && ch!=1003 && ch!=1004 && ch!=1005)
        {
            cout<<"\n\t\t\tInvalid hotel register number !!"<<endl;
        }
    }
    if(yes_no == "N")
    {
        system("cls");
        mahableshwar();
    }
}
void Mahableshwar::mahableshwar_reach()
{
        cout<<"\n\n\t\t\t\t 1] By Airport"<<endl;
cout<<"\t\t\t\t 2] By Railway"<<endl;
cout<<"\t\t\t\t 3] By Road"<<endl;
cout<<"\n\t\t\t\t Choose Option[1/2/3] : ";
cin>>ch;
if(ch==1)
{
    cout<<"\t\tThe nearest airport to reach mahableshwar is at Pune about 120 miles away. "<<endl;
}
if(ch==2)
{
    cout<<"\t\tMahableshwar is connected with all major stations of India through the main city of Pune and satara"<<endl;
}
if(ch==3)
{
    cout<<"\t\tFrequently buses are available from satara and pune."<<endl;
}
if(ch!=3 && ch!=2 && ch!=1)
{
    cout<<"\t\t\tinvalid Choice !!\n";
}

cout<<"\n\t\t\tWould you want to continue(Y/N) : ";
cin>>yes_no;
if(yes_no == "Y")
{
    system("cls");
    mahableshwar_reach();
}
else{
    system("cls");
mahableshwar();
}
}
void Mahableshwar::mahableshwar_time()
{
    cout<<"Best Visiting timing to Mahableshwar is from December to February"<<endl;
}
void Mahableshwar::mahableshwar_attraction()
{
            system("cls");
    cout<<"\n\t\t\t\t Tourist attraction in Mahableshwar"<<endl;
    cout<<" \n\t\t\t      1.Echo Point  \t\t\t   2. Ephin stone Point "<<endl;
    cout<<" \t\t\t      3.Sunset Point\t\t\t   4. Mahableshwar Hill Station "<<endl;
    cout<<" \t\t\t      5.Wilson Point\t\t\t   6. Venna Lake \n"<<endl;
}


int main()
{


    system("cls");
    system("Color BF");
    Lonavala l1;
    Matheran m1;
    Mahableshwar M1;
    mainpage();
    int choice;
    cout<<"\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t --- MAHARASHTRA TOURIST PLACES --- "<<endl;
    l1.display_title();
    do
    {
        cout<<" \n\n ";
        cout<<"\t\t\t\t Choose options:[1/2/3/4]: ";
        cin>>choice;
        switch(choice)
        {
            case 1: l1.lonavala();
                break;
            case 2: m1.matheran();
                break;
            case 3: M1.mahableshwar();
                break;
            default:cout<<"Please enter correct choice"<<endl;



        }
    } while(choice != 5);

    return 0;
}
