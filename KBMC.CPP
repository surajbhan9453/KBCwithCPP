#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 clrscr();
 char ch[50],ch1,ch2,ch3,ch4,ch5,ch6;
 cout<<" Enter password to open "<<endl;
 cin>>ch1>>ch4>>ch3>>ch5>>ch6;
 if(ch1=='*')
 {
 if(ch4=='*')
 if(ch3=='*')
 if(ch5=='*')
 if(ch6=='*')
 cout<<"Password Accepted\n  "<<endl;
 }
 else
 {
 cout<<" Wrong Password "<<endl;
 getch();
 exit(0);
 }
 cout<<"                * ******************************************* *        "<<endl;
 cout<<"               *                    Welcome                    *       "<<endl;
 cout<<"                *                     To                      *        "<<endl;
 cout<<"               *           Kaun Banega Mahacrore Pati          *       "<<endl;
 cout<<"                *          Play And Win Rs.10,0000000         *        "<<endl;
 cout<<"               * ********************************************* *       "<<endl;
 cout<<"________________________________________________________________________________"<<endl;
 cout<<"                                      Made by:-Suraj Bhan & Pranjal Dubey(Group)"<<endl;
 cout<<"                                                Guide By:- Mr.Ashish Shukla(Sir)     "<<endl;
 cout<<""<<endl;
 cout<<"If You want to Play, Press y else Press n !"<<endl;
 cin>>ch1;
 if(ch1=='y')
 {cout<<"                       OK"<<endl;}
 else
 {cout<<"                 Bye"<<endl;
 getch();
 exit(0);
 }
 cout<<""<<endl;
 getch();
 cout<<"ENTER YOUR NAME:"<<endl;
 cin>>ch;
 cout<<""<<endl;
 cout<<ch<<" Welcome to K.B.C."<<endl;
 getch();
 cout<<""<<endl;
 cout<<"Instruction:-"<<endl;
 cout<<"             * Enter answer in form of a,b,c & d only"<<endl;
 cout<<"             * If You Play and Win the 5th and 10th Question,then the money will be fixed which is awarded on 5th and 10th questions."<<endl;
 getch();
 cout<<" st"<<endl;
 cout<<"1. Question for Rs.50,000 Thousand "<<endl;
 cout<<""<<endl;
 getch();
 cout<<" * Who is the mother of Rama in Ramayan?"<<endl;
 getch();
 cout<<" a.Kaushlaya.\n b.Kaikayi.\n c.Mansi.\n d.Sita."<<endl;
 cout<<""<<endl;
 cin>>ch1;
 if(ch1=='a')
 {cout<<"Correct Answer You Won Rs.50,000 Thousand "<<endl;}
 else
 {cout<<"Incorrect Answer You Lose "<<endl;
 getch();
 cout<<"             Thanks for Playing "<<ch<<endl;
 getch();
 exit(0);
 }
 getch();
 cout<<"________________________________________________________________________________"<<endl;
 cout<<""<<endl;
 cout<<" nd"<<endl;
 cout<<"2. Question for Rs.80,000 Thousand "<<endl;
 cout<<""<<endl;
 getch();
 cout<<" * Who is the first President of India?"<<endl;
 getch();
 cout<<" a.Ravi Prakash.\n b.Prakhar Gupta.\n c.Dr. Rajendra Prashad.\n d.Dr. Shyamlal."<<endl;
 cout<<""<<endl;
 cin>>ch1;
 if(ch1=='c')
 {cout<<"Correct Answer You won Rs.80,000 Thousand "<<endl;}
 else
 {cout<<"Incorrect Answer You lose "<<endl;
 getch();
 cout<<"             Thanks for Playing "<<ch<<endl;
 getch();
 exit(0);
 }
 getch();
 cout<<"________________________________________________________________________________"<<endl;
 cout<<" rd"<<endl;
 cout<<"3. Question for Rs.1,00000 Lakh "<<endl;
 cout<<""<<endl;
 getch();
 cout<<" * What is the full form of SSA?"<<endl;
 getch();
 cout<<" a.Sarva Shiksha Abhiyan.\n b.Sarva Seva Abhiyan.\n c.Sarva Sahayata Abhiyan. \n d.Sarva Sena Abhiyan."<<endl;
 cout<<""<<endl;
 cin>>ch1;
 if(ch1=='a')
 {cout<<"Correct Answer You Won Rs.1,00000 Lakh "<<endl;}
 else
 {cout<<"Incorrect Answer You lose"<<endl;
 getch();
 cout<<"             Thanks For Playing "<<ch<<endl;
 getch();
 exit(0);}
 getch();
 cout<<"________________________________________________________________________________"<<endl;
 cout<<" th"<<endl;
 cout<<"4. Question For Rs.5,00000 lakh "<<endl;
 cout<<""<<endl;
 getch();
 cout<<" * Kyodo is the news agency of which country?"<<endl;
 getch();
 cout<<" a.Pakistan.\n b.China.\n c.Japan.\n d.Malaysia."<<endl;
 cout<<""<<endl;
 cin>>ch1;
 if(ch1=='c')
 {cout<<"Correct Answer You Won Rs.5,00000 lack "<<endl;}
 else
 {cout<<"Incorrect Answer You Lose you have Rs.1,00000 Lakh "<<endl;
 getch();
 cout<<"             Thanks For Playing "<<ch<<endl;
 getch();
 exit(0); }
 getch();
 cout<<"________________________________________________________________________________"<<endl;
 cout<<" th"<<endl;
 cout<<"5. Question For Rs.50,00000 Lakh"<<endl;
 cout<<""<<endl;
 getch();
 cout<<" * How many countries are there in the continent of Africa?"<<endl;
 getch();
 cout<<" a.57.\n b.56.\n c.55.\n d.54."<<endl;
 cout<<""<<endl;
 cin>>ch1;
 if(ch1=='d')
 {cout<<"Correct answer You Won Rs.50,00000 Lakh"<<endl;}
 else
 {cout<<"Incorrect Answer You Lose you have Rs.1,00000 Lakh"<<endl;
 getch();
 cout<<"             Thanks For Playing "<<ch<<endl;
 getch();
 exit(0);}
 getch();
 cout<<"________________________________________________________________________________"<<endl;
 cout<<" th"<<endl;
 cout<<"6. Question For Rs.1,0000000 Crore"<<endl;
 cout<<""<<endl;
 getch();
 cout<<" * What is called as 'The Land of Midnight Sun'?"<<endl;
 getch();
 cout<<" a.Norway.\n b.Japan.\n c.Australia.\n d.India."<<endl;
 cout<<""<<endl;
 cin>>ch1;
 if(ch1=='a')
 {cout<<"Correct Answer You Won Rs.1,0000000 Crore"<<endl;}
 else
 {cout<<"Incorrect Answer You Lose you have Rs.50,00000 Lakh"<<endl;
 getch();
 cout<<"             Thanks For Playing "<<ch<<endl;
 getch();
 exit(0);}
 getch();
 cout<<"________________________________________________________________________________"<<endl;
 cout<<" th"<<endl;
 cout<<"7. Question For Rs.1,5000000 Crore"<<endl;
 cout<<""<<endl;
 getch();
 cout<<" * What is called as 'THE GIFT OF NILE'?"<<endl;
 getch();
 cout<<" a.Chicago.\n b.Egypt.\n c.Australia.\n d.Africa."<<endl;
 cout<<""<<endl;
 cin>>ch1;
 if(ch1=='b')
 {cout<<"Correct Answer You Won Rs.1,5000000 Crore"<<endl;}
 else
 {cout<<"Incorrect Answer You Lose You have Rs.50,00000 Lakh"<<endl;
 getch();
 cout<<"             Thanks For Playing "<<ch<<endl;
 getch();
 exit(0);}
 getch();
 cout<<"________________________________________________________________________________"<<endl;
 cout<<" th"<<endl;
 cout<<"8.Question For Rs.3,0000000 Crore"<<endl;
 cout<<""<<endl;
 getch();
 cout<<" * Who is the developer of C++ ?"<<endl;
 getch();
 cout<<" a.Dj Bravo.\n b.Steve donovan.\n c.St. Smith.\n d.Bjarne Stroustrup."<<endl;
 cout<<""<<endl;
 cin>>ch1;
 if(ch1=='d')
 {cout<<"Correct Answer You Won Rs.3,0000000 Lakh"<<endl;}
 else
 {cout<<"Incorrect Answer You Lose You Have Rs.1,5000000 Lakh"<<endl;
 getch();
 cout<<"             Thanks For Playing "<<ch<<endl;
 getch();
 exit(0);}
 getch();
 cout<<"________________________________________________________________________________"<<endl;
 cout<<" th"<<endl;
 cout<<"9. Question For Rs.5,0000000 Crore "<<endl;
 cout<<""<<endl;
 getch();
 cout<<" * When was web TV Introduce?"<<endl;
 getch();
 cout<<" a.1990.\n b.1992.\n c.1994.\n d.1996."<<endl;
 cout<<""<<endl;
 cin>>ch1;
 if(ch1=='d')
 {cout<<"Correct Answer You Won Rs.5,0000000 Crore     "<<endl; }
 else
 {cout<<"Incorrect Answer You Lose You have Rs.1,5000000 Crore   "<<endl;
 getch();
 cout<<"             Thanks For Playing "<<ch<<endl;
 getch();
 exit(0);}
 getch();
 cout<<"________________________________________________________________________________"<<endl;
 cout<<"  th"<<endl;
 cout<<"10. Question For Rs.6,5000000 Crore"<<endl;
 cout<<""<<endl;
 getch();
 cout<<" * Which is responsible to Parliament for all matters concerning Defence?"<<endl;
 getch();
 cout<<" a.President.\n b.Prime Minister.\n c.Home Minister.\n d.Defence Minister."<<endl;
 cout<<""<<endl;
 cin>>ch1;
 if(ch1=='d')
 {cout<<"Correct Answer You Won Rs.6,5000000 Crore"<<endl; }
 else
 {cout<<"Incorrect Answer You Lose You have Rs.1,5000000 Crore"<<endl;
 getch();
 cout<<"             Thanks for Playing "<<ch<<endl;
 getch();
 exit(0);}
 getch();
 cout<<"________________________________________________________________________________"<<endl;
 cout<<"  th"<<endl;
 cout<<"11. Question For Rs.8,5000000 Crore"<<endl;
 cout<<""<<endl;
 getch();
 cout<<" * Which of this Indian missiles was Developed by DRDO?"<<endl;
 getch();
 cout<<" a.Akash.\n b.Prithvi.\n c.Trishul.\n d.Nag"<<endl;
 cout<<""<<endl;
 cin>>ch1;
 if(ch1=='b')
 {cout<<"Correct Answer You Won Rs.8,5000000 Crore"<<endl;}
 else
 {cout<<"Incorrect Answer You Lose.You have Rs.6,5000000 Crore"<<endl;
 getch();
 cout<<"             Thanks For Playing  "<<ch<<endl;
 getch();
 exit(0);}
 getch();
 cout<<"________________________________________________________________________________"<<endl;
 cout<<""<<endl;
 cout<<"********** Be Carefull this is the last question ********** "<<endl;
 getch();
 cout<<"  th"<<endl;
 cout<<"12.  Questions For Rs.10,0000000 CRORE"<<endl;
 cout<<""<<endl;
 getch();
 cout<<" * Which book is the official report of the british Government?"<<endl;
 getch();
 cout<<" a.Orange Book.\n b.Grey Book.\n c.Blue Book.\n d.Green Book."<<endl;
 cout<<""<<endl;
 cin>>ch1;
 if(ch1=='c')
 {cout<<" ****************************************************************"<<endl;
 cout<<"  *           "<<ch<<" You Won Rs.10,0000000 Crore              *"<<endl;
 cout<<"  ***                                                         *** "<<endl;
 cout<<"  *****              "<<ch<<" You Are Mahacrore Pati        ***** "  <<endl;
 cout<<"  ***                                                         *** " <<endl;
 cout<<"  *     "<<ch<<" is the Winner of Kaun Banega Mahacrore Pati    * "<<endl;
 cout<<"  ****************************************************************"<<endl;
 cout<<"______________________________________________________________________________"<<endl;
 }
 else
 {cout<<"Incorrect Answer You Lose You have Rs.6,5000000"<<endl;
 getch();
 cout<<" Oh! You was too close to become Mahacrore Pati. " <<ch<<"! "<<endl;
 getch();
 cout<<"             Thanks For Playing           "<<endl;
 getch();
 exit(0);}
 getch();
 }