#include <iostream>
#include "rlutil.h"
#include "Grid.h"
#include "Player.h"
/*
#include "Grid.h"
#include "Level.h"

MiniTower.h MiniTower.cpp Player.cpp Player.h Level.cpp Level.h Grid.h Grid.cpp Hero.cpp Hero.h

*/

using namespace std;

int ara_cikacak_menu( void )//her bölüm arasý çýkacak fonksiyon.
{
	int deger;
	
	rlutil::saveDefaultColor();//ekranýn þuanki temel rengi alýnýyor.
	rlutil::setColor(14);//coin colorý tanýmlanýyor.
	rlutil::setBackgroundColor(1);//arka plan rengi ayarlanýyor.
	
	cout << "---------------------------------------          " << endl;
	cout << "Coin : 1312                                      " << endl ;//player coini ekrana basýlýyor.
	cout << "Healt : 12   Armor : 23                          " << endl;
	cout << "Atack's of Kuleler                               " << endl;
	cout << "Kule1: 3 kule2: 4 kule3: 4 kule4: 5 kule6: 1     " << endl;
	cout << "---------------------------------------          " << endl;
	
	rlutil::setBackgroundColor(3);
	rlutil::setColor(14);
	cout << "Satin Alma Menusu                                " << endl;
	cout << "1 - Kule Satin Al                                " << endl;
	cout << "2 - Kule Gelistir                                " << endl;
	cout << "3 - Cikis                                        " << endl;

	rlutil::resetColor(); //color resetleniyor.
	rlutil::setColor(13);	
	cout << "Enter your answer (1-3): ";
	cin >> deger;//userdan cevap alýnýyor.

	rlutil::resetColor(); //color resetleniyor.
	
	return deger;
	
}

void kule_sekli( int x , int y , char s1 , char s2){

	rlutil::saveDefaultColor();
	rlutil::setBackgroundColor(2);
	rlutil::locate( x , y );cout<<"        ";rlutil::locate( x+9 , y );cout<<"  ";rlutil::locate( x+9 , y+1 );cout<<"  ";
	rlutil::locate( x , y+1 );cout<<"  ";     
	
	rlutil::setBackgroundColor(0);rlutil::locate( x+2 , y+1 );rlutil::setColor(7);cout<<"^";rlutil::setBackgroundColor(2);  
	rlutil::setBackgroundColor(0);rlutil::locate( x+3 , y+1 );rlutil::setColor(7);cout<<" |";rlutil::setBackgroundColor(2);
	rlutil::setBackgroundColor(0);rlutil::locate( x+5 , y+1 );rlutil::setColor(7);cout<<"  ^";rlutil::setBackgroundColor(2);
	
	rlutil::setBackgroundColor(0);rlutil::locate( x+4 , y+2 );rlutil::setColor(7);cout<<"-";rlutil::setBackgroundColor(2);  
	rlutil::setBackgroundColor(0);rlutil::locate( x+5 , y+2 );rlutil::setColor(7);cout<<"|";rlutil::setBackgroundColor(2);
	rlutil::setBackgroundColor(0);rlutil::locate( x+6 , y+2 );rlutil::setColor(7);cout<<"-";rlutil::setBackgroundColor(2);

	rlutil::setBackgroundColor(0);rlutil::locate( x+4 , y+3 );rlutil::setColor(7);cout<<"#";rlutil::setBackgroundColor(2);  
	rlutil::setBackgroundColor(0);rlutil::locate( x+5 , y+3 );rlutil::setColor(7);cout<<"|";rlutil::setBackgroundColor(2);
	rlutil::setBackgroundColor(0);rlutil::locate( x+6 , y+3 );rlutil::setColor(7);cout<<"#";rlutil::setBackgroundColor(2);
	
	rlutil::setBackgroundColor(0);rlutil::locate( x+4 , y+2 );rlutil::setColor(7);cout<<"-";rlutil::setBackgroundColor(2);  
	rlutil::setBackgroundColor(0);rlutil::locate( x+5 , y+2 );rlutil::setColor(7);cout<<"|";rlutil::setBackgroundColor(2);
	rlutil::setBackgroundColor(0);rlutil::locate( x+6 , y+2 );rlutil::setColor(7);cout<<"-";rlutil::setBackgroundColor(2);

	rlutil::setBackgroundColor(0);rlutil::locate( x+2 , y+4 );rlutil::setColor(7);cout<<"#";rlutil::setBackgroundColor(2);  
	rlutil::setBackgroundColor(0);rlutil::locate( x+4 , y+4 );rlutil::setColor(7);cout<<"-";rlutil::setBackgroundColor(2);
	rlutil::setBackgroundColor(0);rlutil::locate( x+5 , y+4);rlutil::setColor(7);cout<<"|";rlutil::setBackgroundColor(2);
	rlutil::setBackgroundColor(0);rlutil::locate( x+6 , y+4 );rlutil::setColor(7);cout<<"-";rlutil::setBackgroundColor(2);
	rlutil::setBackgroundColor(0);rlutil::locate( x+8 , y+4 );rlutil::setColor(7);cout<<"#";rlutil::setBackgroundColor(2);

	rlutil::locate( x+9 , y+2 );cout<<"  ";
	
	rlutil::locate( x+8 , y );cout<<"  ";
	rlutil::locate( x , y+2 );cout<<"  ";		rlutil::locate( x+9 , y+3 );cout<<"  ";
	rlutil::locate( x , y+3 );cout<<"  ";		rlutil::locate( x+9, y+4 );cout<<"  ";
	rlutil::locate( x , y+4 );cout<<"  ";		rlutil::locate( x+9 , y+5 );cout<<"  ";rlutil::locate( x+8 , y+5 );cout<<" ";
	rlutil::locate( x , y+5 );cout<<"    " << s1 << " " << s2 << "  "; 
	

	rlutil::resetColor();
}

int main()
{
	int choice=1 , num ;
	char ch ;

	int control[6] ;
	
	for(int i=0 ; i<6 ; ++i)
	{
		control[i]=0 ;
	}
	

	//playerdaki score ile coin i abstractmý ne yapmayý teklif et.

	cout << endl<<endl<< endl;
	int user_menu_secenek;
	
	while(choice == 1 )
	{
	
	user_menu_secenek = ara_cikacak_menu() ;
	if( user_menu_secenek == 1 )
	{
		num = Player :: BuyTower() ;
		control[num]=1 ;
		if(num==2)
		{
			kule_sekli(19 , 1 , ' ' , ' ') ;
			
		}	
		
		else if(num == 3)
		{
			kule_sekli(37 , 1 , ' ' , ' ') ;
		}
		
		else if(num==4)
		{
			kule_sekli(1 , 9 , ' ' , ' ') ;
		}
		
		else if(num==5)
		{
			kule_sekli(19 , 9 , ' ' , ' ') ;
		}
		
		else if(num==6)
		{
			kule_sekli(37 , 9 , ' ' , ' ') ;
		}
		cout << "Do you want to do anything else? (Y/N)" ;
		cin >> ch ;
		
		if(ch == 'Y')
		{	
			choice = 1 ;
		
		}
		
		else if (ch == 'N')
		{
			choice = 0 ;
		
		}
		
	}
	else if( user_menu_secenek == 2 )
	{
		
		
		cout << "Do you want to do anything else? (Y/N)" ;
		cin >> ch ;
		
		if(ch == 'Y')
		{	
			choice = 1 ;
		
		}
		
		else if (ch == 'N')
		{
			choice = 0 ;
		
		}
	}
	else if( user_menu_secenek == 3 )
	{
		
		
		
	}
	else{
		cout << "Hatali bir tuslama yaptýnýz.";
	}
	
	}
	return 0;
}
