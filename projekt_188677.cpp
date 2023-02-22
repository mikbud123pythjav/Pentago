#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <time.h>
#include <string>

using namespace std;

 	//Timer 
void timer();

 
 		void pozioma_kreska()
 	{
 	cout<<char(0xBA)<<endl<<setw(2)<<char(0xCC);
		for(int i = 0; i < 3; i++)
		cout<<char(0xCD);
		cout<<char(0xCE);
		for(int i = 0; i < 3; i++)
		cout<<char(0xCD);
		cout<<char(0xCE);
		for(int i = 0; i < 3; i++)
		cout<<char(0xCD);
		cout<<char(0xCE)<<char(0xCD)<<char(0xCE);
		for(int i = 0; i < 3; i++)
		cout<<char(0xCD);
		cout<<char(0xCE);
		for(int i = 0; i < 3; i++)
		cout<<char(0xCD);
		cout<<char(0xCE);
		for(int i = 0; i < 3; i++)
		cout<<char(0xCD);
		cout<<char(0xB9)<<endl;	
	}
 
/* 
tablica char z unicodu

0xB9       0x2563    Prawy œródek

0xBA      0x2551    Krawedz

0xBB ¬    0x2557    Prawy góra

0xBC     0x255D    Prawy dól

0xC8     0x255A   lewy dól

0xC9     0x2554    lewy góra

0xCA     0x2569    Dó³ œrodek

0xCB     0x2566   Góra œrodek

0xCC    0x2560    lewy œrodek

0xCD    0x2550    Sufit 

0xCE    0x256C    spójnik
*/ 

//funkcja która rysuje nam tablice w której bêdzie odbywa³a siê gra
void tablica_1_2_3_4(char tab1[],char tab2[],char tab3[],char tab4[])
{
	//Rysowanie Sufitu naszej tablicy
	cout<<setw(2)<<char(0xC9);
	for(int k = 0; k < 3; k++) 
		{
			cout<<char(0xCD);
		}
		cout<<char(0xCB);
			for(int k = 0; k < 3; k++) 
		{
			cout<<char(0xCD);
		}
		cout<<char(0xCB);
			for(int k = 0; k < 3; k++) 
		{
			cout<<char(0xCD);
		}
			cout<<char(0xCB)<<char(0xCD)<<char(0xCB);
	for(int k = 0; k < 3; k++) 
		{
			cout<<char(0xCD);
		}
		cout<<char(0xCB);
			for(int k = 0; k < 3; k++) 
		{
			cout<<char(0xCD);
		}
		cout<<char(0xCB);
			for(int k = 0; k < 3; k++) 
		{
			cout<<char(0xCD);
		}
		cout<<char(0xBB);
	cout<<endl<<setw(10);
	
	//Rysowanie naszej pierwszej linii
	for(int i = 0; i < 6; i++)
		{
			if(i==3)cout<<char(0xBA);
			if(i <= 2) cout<<setw(2)<<char(0xBA)<<setw(2)<<tab1[i+6]<<setw(2);
			else cout<<setw(2)<<char(0xBA)<<setw(2)<<tab2[i+3]<<setw(2);
		}
		//Wypisywanie œrodka pomiêdzy liczbami w poziome i spójnika  
		pozioma_kreska();
		
		//Rysowanie naszej drugiej linii
	for(int i = 0; i < 6; i++)
		{
			if(i==3)cout<<char(0xBA);
			if(i <= 2) cout<<setw(2)<<char(0xBA)<<setw(2)<<tab1[i+3]<<setw(2);
			else cout<<setw(2)<<char(0xBA)<<setw(2)<<tab2[i]<<setw(2);
		}
			//Wypisywanie œrodka pomiêdzy liczbami w poziome i spójnika
		pozioma_kreska();
		//Rysowanie naszej trzeciej linii
	for(int i = 0; i < 6; i++)
		{
			if(i==3) cout<<char(0xBA);
			if(i <= 2) cout<<setw(2)<<char(0xBA)<<setw(2)<<tab1[i]<<setw(2);
			else cout<<setw(2)<<char(0xBA)<<setw(2)<<tab2[i-3]<<setw(2);
		}
			//Wypisywanie œrodka pomiêdzy liczbami w poziome i spójnika
		pozioma_kreska();
		
		cout<<setw(2);
		cout<<char(0xCC);
		//Rysowanie naszej dolenj krawêdzi pierwszych dwóch kwadratów
	for(int j = 0; j < 3; j++)
	{
			cout<<char(0xCD);
	}
	cout<<char(0xCE);
		for(int j = 0; j < 3; j++)
	{
			cout<<char(0xCD);
	}
		cout<<char(0xCE);
		for(int j = 0; j < 3; j++)
	{
			cout<<char(0xCD);
	}
cout<<char(0xCE)<<char(0xCD)<<char(0xCE);
	
	for(int j = 0; j < 3; j++)
	{
			cout<<char(0xCD);
	}
	cout<<char(0xCE );
	for(int j = 0; j < 3; j++)
	{
			cout<<char(0xCD);
	}
	cout<<char(0xCE );
	for(int j = 0; j < 3; j++)
	{
			cout<<char(0xCD);
	}
	cout<<char(0xB9);
	
	//Rysowanie naszej czwartej  linii
	cout<<endl<<setw(10);
	for(int k = 0; k < 6; k++)
		{
			if(k==3)cout<<char(0xBA);
			if(k <= 2) cout<<setw(2)<<char(0xBA)<<setw(2)<<tab3[k+6]<<setw(2)<<setw(2);
			else cout<<setw(2)<<char(0xBA)<<setw(2)<<tab4[k+3]<<setw(2);
		}
			//Wypisywanie œrodka pomiêdzy liczbami w poziome i spójnika
	pozioma_kreska();
		
		//Rysowanie naszej pi¹tej linii
	for(int k = 0; k < 6; k++)
		{
			if(k==3)cout<<char(0xBA);
			if(k <= 2) cout<<setw(2)<<char(0xBA)<<setw(2)<<tab3[k+3]<<setw(2);
			else cout<<setw(2)<<char(0xBA)<<setw(2)<<tab4[k]<<setw(2);
		}
			//Wypisywanie œrodka pomiêdzy liczbami w poziome i spójnika
	pozioma_kreska();
		//Rysowanie naszej szóstej linii
		for(int k = 0; k < 6; k++)
		{
			if(k==3)cout<<char(0xBA);
			if(k <= 2) cout<<setw(2)<<char(0xBA)<<setw(2)<<tab3[k]<<setw(2);
			else cout<<setw(2)<<char(0xBA)<<setw(2)<<tab4[k-3]<<setw(2);
		}
		cout<<char(0xBA);
		//rysownie podstawy ca³ej tablicy
		cout<<endl;
		cout<<setw(2)<<char(0xC8);
	for(int m = 0; m < 3; m++)
	{
			cout<<char(0xCD);
	}
	cout<<char(0xCA);
	for(int m = 0; m < 3; m++)
	{
			cout<<char(0xCD);
	}
		cout<<char(0xCA);
	for(int m = 0; m < 3; m++)
	{
			cout<<char(0xCD);
	}
	cout<<char(0xCA)<<char(0xCD)<<char(0xCA);
	
	for(int m = 0; m < 3; m++)
	{
			cout<<char(0xCD);
	}
		cout<<char(0xCA);
		for(int m = 0; m < 3; m++)
	{
			cout<<char(0xCD);
	}
		cout<<char(0xCA);
		for(int m = 0; m < 3; m++)
	{
			cout<<char(0xCD);
	}
	cout<<char(0xBC)<<endl;
	//Tablica pomocnicza do wyboru kwadratu
	cout<<"Tablica pomocnicza"<<endl;
	cout<<setw(2)<<"-----"<<char(0xBA)<<"-----"<<endl;
	cout<<setw(2)<<"--q--"<<char(0xBA)<<"--w--"<<endl;
	cout<<setw(2)<<"-----"<<char(0xBA)<<"-----"<<endl;
	cout<<char(0xCD)<<char(0xCD)<<char(0xCD)<<char(0xCD)<<char(0xCD);
	cout<<char(0xCE);
	cout<<char(0xCD)<<char(0xCD)<<char(0xCD)<<char(0xCD)<<char(0xCD)<<endl;
	cout<<setw(2)<<"-----"<<char(0xBA)<<"-----"<<endl;
	cout<<setw(2)<<"--a--"<<char(0xBA)<<"--s--"<<endl;
	cout<<setw(2)<<"-----"<<char(0xBA)<<"-----"<<endl;
}	

//jest to opis gry w kó³ko i krzy¿yk
void opis_kolka()
{
	cout<<" Kolko i Krzyzyk: ";
	cout<<"Gra polega na dostawianiu pionkow przez dwuch graczy, ktorzy rywalizuja o to, ktory"<<endl;
	cout<<"ulozy 5 swoich pionkow w prostej linii zarowno w pionie poziomie jak i na skos. Po "<<endl;
	cout<<"dokonaniu tego wygrywa partie."<<endl;
}
//jest to opis gry w Pentago
void opis_pentago()
{
	cout<<" Pentago: ";
	cout<<"Gra polega na dostawianiu pionkow przez dwuch graczy, ktorzy rywalizuja o to, ktory"<<endl;
	cout<<"ulozy 5 swoich pionkow w prostej linii zarowno w pionie poziomie jak i na skos. Po "<<endl;
	cout<<"dokonaniu tego wygrywa partie."<<endl;	
}

//Funkcja, która sprawdza wygran¹ gracza i po uzysakniu wygranej wypisuje który gracz wygra³
void wygrana(char zmienna,char tab1[], char tab2[], char tab3[], char tab4[], int nr, char  podmianka, int licznik, string imie1, string imie2, string imie)
{
	//dla gracza o imieniu 1
	//-----------------------------
	//pierwszy i drugi kwadrat poziomo
		if(tab1[0] == tab1[1] && tab1[1] == tab1[2] && tab1[2] == tab2[0] && tab2[0] == tab2[1] &&  (tab2[1] == 'X' || tab2[1] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		if(tab1[1] == tab1[2] && tab1[2] == tab2[0] && tab2[0] == tab2[1] && tab2[1] == tab2[2] && (tab2[2] == 'X' || tab2[2] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
			if(tab1[3] == tab1[4] && tab1[4] == tab1[5] && tab1[5] == tab2[3] && tab2[3] == tab2[4] && (tab2[4] == 'X' || tab2[4] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
		if(tab1[4] == tab1[5] && tab1[5] == tab2[3] && tab2[3] == tab2[4] && tab2[4] == tab2[5] && (tab2[5] == 'X' || tab2[5] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		if(tab1[6] == tab1[7] && tab1[7] == tab1[8] && tab1[8] == tab2[6] && tab2[6] == tab2[7] && (tab2[7] == 'X' || tab2[7] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		if(tab1[7] == tab1[8] && tab1[8] == tab2[6] && tab2[6] == tab2[7] && tab2[7] == tab2[8] && (tab2[8] == 'X' || tab2[1] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
		if(tab3[6] == tab3[7] && tab3[7] == tab3[8] && tab3[8] == tab4[6] && tab4[6] == tab4[7] && (tab4[7] == 'X' || tab4[7] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
			if(tab3[7] == tab3[8] && tab3[8] == tab4[6] && tab4[6] == tab4[7] && tab4[7] == tab4[8] && (tab4[8] == 'X' || tab4[8] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
			if(tab3[3] == tab3[4] && tab3[4] == tab3[5] && tab3[5] == tab4[3] && tab4[3] == tab4[4] && (tab4[4] == 'X' || tab4[4] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
			if(tab3[4] == tab3[5] && tab3[5] == tab4[3] && tab4[3] == tab4[4] && tab4[4] == tab4[5] &&(tab4[5] == 'X' || tab4[5] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
			if(tab3[0] == tab3[1] && tab3[1] == tab3[2] && tab3[2] == tab4[0] && tab4[0] == tab4[1] && (tab4[1] == 'X' || tab4[1] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
			if(tab3[1] == tab3[2] && tab3[2] == tab4[0] && tab4[0] == tab4[1] && tab4[1] == tab4[2] && (tab4[2] == 'X' || tab4[2] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		//sprawdzanie poziomo 1 3 
		if(tab1[6] == tab1[3] && tab1[3] == tab1[0] && tab1[0] == tab3[6] && tab3[6] == tab3[3] && (tab3[3] == 'X' || tab4[2] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
	}
		
		if(tab1[3] == tab1[0] && tab1[0] == tab3[6] && tab3[6] == tab3[3] && tab3[3] == tab3[0] && (tab3[0] == 'X' || tab3[0] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
			if(tab1[7] == tab1[4] && tab1[4] == tab1[1] && tab1[1] == tab3[7] && tab3[7] == tab3[4] && (tab3[4] == 'X' || tab3[4] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
		if(tab1[4] == tab1[1] && tab1[1] == tab3[7] && tab3[7] == tab3[4] && tab3[4] == tab3[1] && (tab3[1] == 'X' || tab3[1] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
		if(tab1[8] == tab1[5] && tab1[5] == tab1[2] && tab1[2] == tab3[8] && tab3[8] == tab3[5] && (tab3[5] == 'X' || tab3[5] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
		if(tab1[5] == tab1[2] && tab1[2] == tab3[8] && tab3[8] == tab3[5] && tab3[5] == tab3[2] && (tab3[2] == 'X' || tab3[2] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}

		//pionowo tab2 tab4
		
		if( tab2[6] == tab2[3] && tab2[3] == tab2[0] && tab2[0] == tab4[6] && tab4[6] == tab4[3] && (tab4[3] == 'X' || tab4[3] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
		if(tab2[3] == tab2[0] && tab2[0] == tab4[6] && tab4[6] == tab4[3] && tab4[3] == tab4[0] && (tab4[0] == 'X' || tab4[0] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		if(tab2[7] == tab2[4] && tab2[4] == tab2[1] && tab4[7] == tab4[7] && tab4[4] == tab4[4] && (tab4[4] == 'X' || tab4[4] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
		if(tab2[4] == tab2[1] && tab2[1] == tab4[7] && tab4[7] == tab4[4] && tab4[4] == tab4[1] && (tab4[1] == 'X' || tab4[1] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
			if(tab2[8] == tab2[5] && tab2[5] == tab2[2] && tab2[2] == tab4[8] && tab4[8] == tab4[5] && (tab4[5] == 'X' || tab4[5] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
		if(tab2[5] == tab2[2] && tab2[2] == tab4[8] && tab4[8] == tab4[5] && tab4[5] == tab4[2] && (tab4[2] == 'X' || tab4[2] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		//skos q7  do s5
		if(tab1[6] == tab1[4] && tab1[4] == tab1[2] && tab1[2] == tab4[6] && tab4[6] == tab4[4] && (tab4[4] == 'X' || tab4[4] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
			//skos q4  do s3
		if(tab1[4] == tab1[2] && tab1[2] == tab1[6] && tab1[6] == tab4[4] && tab4[4] == tab4[2] && (tab4[2] == 'X' || tab4[2] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
		if(tab1[3] == tab1[1] && tab1[1] == tab3[8] && tab3[8] == tab4[3] && tab4[3] == tab4[1] && (tab4[1] == 'X' || tab4[1] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
		if(tab1[7] == tab1[5] && tab1[5] == tab2[0] && tab2[0] == tab4[7] && tab4[7] == tab4[5] && (tab4[5] == 'X' || tab4[5] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
		if(tab2[7] == tab2[3] && tab2[3] == tab1[2] && tab1[2] == tab3[7] && tab3[7] == tab3[3] && (tab3[3] == 'X' || tab3[3] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		if(tab2[8] == tab2[4] && tab2[4] == tab2[0] && tab2[0] == tab3[8] && tab3[8] == tab3[4] && (tab3[4] == 'X' || tab3[4] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		if( tab2[4] == tab2[0] && tab2[0] == tab3[8] && tab3[8] == tab3[4] && tab3[4] == tab3[0] && (tab3[0] == 'X' || tab3[0] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}
		
		if(tab2[5] == tab2[1] && tab2[1] == tab4[6] && tab4[6] == tab3[5] && tab3[5] == tab3[1] && (tab3[1] == 'X' || tab3[1] == 'O' ))
		{
			if(tab1[1] == 'X')
			{
			cout<<"Wygral "<<imie1;
			exit(0);
			}
			else
			{
			cout<<"Wygral "<<imie2;
			exit(0);
			}
		}		
}

//funkcja która wypisuje imiona i kto jakim gra ¿etonem
void wypisywanie_imion(string imie1, string imie2, int licznik)
{
	if(licznik == 0) cout<<"Ruch gracza: "<<imie1<<" Gra on zetonem X"<<endl;
	else if(licznik == 1) cout<<"Ruch gracza: "<<imie2<<" Gra on zetonem O"<<endl;
	else if(licznik % 2 == 0) cout<<"Ruch gracza: "<<imie1<<" Gra on zetonem X"<<endl;
	else cout<<"Ruch gracza: "<<imie2<<" Gra on zetonem O"<<endl;
}

//sprawdza czy mo¿na postawiæ ¿eton na danym polu
bool sprawdzanie(char zmienna,char zmienna1, char zmienna2, char tab1[], char tab2[], char tab3[], char tab4[], int nr, char  podmianka)
{   
		while(true)
		{
		       switch(podmianka)
	    {
	        case 'q': case'Q':
	            {
	                if((tab1[nr-1] == 'X') || (tab1[nr-1] == 'O'))
	            {
					cout<<"Nie mozna wykonac tego ruchu: ";
	                return true;
	                break;
				}
	            }
	        case 'w': case'W':
	            {
	                if((tab2[nr-1] == 'X') || (tab2[nr-1] == 'O'))
	                {                                                                        
					cout<<"Nie mozna wykonac tego ruchu: ";
	                return true;
	                break;
					}
	            }
	        case 'a': case'A':
	            {
	            if((tab3[nr-1] == 'X') || (tab3[nr-1] == 'O'))
	            	{
					cout<<"Nie mozna wykonac tego ruchu: ";
	                return true;
	                break;
					}
	            }
	        case 's': case 'S':
	            {
	                if((tab4[nr-1] == 'X') || (tab4[nr-1] == 'O'))
					{
					cout<<"Nie mozna wykonac tego ruchu: ";
	                return true;
	                break;
					}}
			default: 
			return false;
			break;
	    }	
		}
	    return false;
}

//funkcja, która jest zastosowana jako pauza po wciœnieciu p  
void pauza()
{
	system("cls");
	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"                            Pauza"<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
	system("pause");
	system("cls");	
}

//funkcja która podczas której wybieramy jaki ruch chcemy zrobiæ oraz inne funkcje które mo¿emy wybraæ z poziomu programu 
void zmiana_numer(char zmienna, char zmienna1, char zmienna2, char tab1[], char tab2[], char tab3[], char tab4[], int nr, char  podmianka, int licznik, string imie1, string imie2)
{
    if(licznik == 0) zmienna = zmienna1;
    else if(licznik == 1) zmienna = zmienna2;
    else if(licznik % 2 == 0) zmienna = zmienna1;
    else zmienna = zmienna2;
    
    bool bledny_ruch = true;
    while(bledny_ruch)
    {
    cout<<"Wpisz, ktory kwadrat chcesz wybrac kwadrat i ktory nr chcesz zamienic: ";
    cin >> podmianka;
    switch(podmianka)
    {
    case 'q': case 'Q':
    	{
    		cin>>nr;
    		switch(nr)
    		{
    			case 1:
    				{
		    			bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka);
			            if(bledny_ruch == false)
			    		tab1[0] = zmienna;
			        	break;
					}
    			case 2:
    				{
		    			bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab1[1] = zmienna;
			            break;		
					}
    			case 3:
    				{
	    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab1[2] = zmienna;
			            break;
					}
    			case 4:
    				{
	    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab1[3] = zmienna;
			            break;	
					}
    			case 5:
    				{
	    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab1[4] = zmienna;
			            break;		
					}
    			case 6:
    				{
	    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab1[5] = zmienna;
			            break;
					}
    			case 7:
    				{
	    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab1[6] = zmienna;
			            break;	
					}
    			case 8:
    				{
	    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab1[7] = zmienna;
			            break;
					}
    		 	case 9:
    		 		{
						bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		          	  	if(bledny_ruch == false)
		            	tab1[8] = zmienna;
		            	break;
					}
				default:
					{
					system("cls");
					wypisywanie_imion(imie1, imie2, licznik);
					timer();
	            	tablica_1_2_3_4( tab1, tab2, tab3, tab4);
	           		cout<<"Zla kombinacja znakow!!!"<<endl;
	           		bledny_ruch == true;
	           		break;					
					}
				}
		break;	
		}
    case 'w': case 'W':
    	{
    		cin>>nr;
    		switch(nr)
    		{
    			case 1:
    				{
		    		bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka);
			        if(bledny_ruch == false)
			    	tab2[0] = zmienna;
			        break;
					}
    			case 2:
    				{
	    			bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		            if(bledny_ruch == false)
		            tab2[1] = zmienna;
		            break;		
					}
    			case 3:
    				{
    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		            if(bledny_ruch == false)
		            tab2[2] = zmienna;
		            break;
					}
    			case 4:
    				{
    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		            if(bledny_ruch == false)
		            tab2[3] = zmienna;
		            break;
					}
    			case 5:
    				{
    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		            if(bledny_ruch == false)
		            tab2[4] = zmienna;
		            break;		
					}
    			case  6:
    				{
    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		            if(bledny_ruch == false)
		            tab2[5] = zmienna;
		            break;
					}
    			case 7:
    				{
	    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab2[6] = zmienna;
			            break;	
					}
    			case 8:
    				{
    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		            if(bledny_ruch == false)
		            tab2[7] = zmienna;
		            break;
					}
    		 	case 9:
    		 		{
					bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
	          	  	if(bledny_ruch == false)
	            	tab2[8] = zmienna;
	            	break;
						}
				default:
	            {
		           system("cls");
					wypisywanie_imion(imie1, imie2, licznik);
					timer();
	            	tablica_1_2_3_4( tab1, tab2, tab3, tab4);
	           		cout<<"Zla kombinacja znakow!!!"<<endl;
	           		bledny_ruch == true;
	           		break;
				}
				}
			break;
			}
    case 'a': case 'A':
    	{
    		cin>>nr;
	    		switch(nr)
	    		{
	    			case 1:
	    				{
			    			bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka);
				            if(bledny_ruch == false)
				    		tab3[0] = zmienna;
				        	break;
						}
	    			case 2:
	    				{
		    			bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab3[1] = zmienna;
			            break;		
						}
	    			case 3:
	    				{
	    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab3[2] = zmienna;
			            break;
						}
	    			case 4:
	    				{
	    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab3[3] = zmienna;
			            break;	
						}
	    			case 5:
	    				{
	    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab3[4] = zmienna;
			            break;		
						}
	    			case 6:
	    				{
	    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab3[5] = zmienna;
			            break;
						}
	    			case 7:
	    				{
		    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
				            if(bledny_ruch == false)
				            tab3[6] = zmienna;
				            break;	
						}
	    			case 8:
	    				{
	    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab3[7] = zmienna;
			            break;
						}
	    		 	case 9:
	    		 		{
						bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		          	  	if(bledny_ruch == false)
		            	tab3[8] = zmienna;
		            	break;
						}				
					default:
		            {
			            system("cls");
						wypisywanie_imion(imie1, imie2, licznik);
						timer();
		            	tablica_1_2_3_4( tab1, tab2, tab3, tab4);
		           		cout<<"Zla kombinacja znakow!!!"<<endl;
		           		bledny_ruch == true;
		           		break;
					}	
				}
			break;}
   		 case 's': case 'S':
    	{
  		cin>>nr;
    			switch(nr)
    		{
    			case 1:
    				{
		    			bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka);
			            if(bledny_ruch == false)
			    		tab4[0] = zmienna;
			        	break;
					}
    			case 2:
    				{
	    			bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		            if(bledny_ruch == false)
		            tab4[1] = zmienna;
		            break;		
					}
    			case 3:
    				{
    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		            if(bledny_ruch == false)
		            tab4[2] = zmienna;
		            break;
					}
    			case 4:
    				{
    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		            if(bledny_ruch == false)
		            tab4[3] = zmienna;
		            break;	
					}
    			case 5:
    				{
    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		            if(bledny_ruch == false)
		            tab4[4] = zmienna;
		            break;		
					}
    			case 6:
    				{
    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		            if(bledny_ruch == false)
		            tab4[5] = zmienna;
		            break;
					}
    			case 7:
    				{
	    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
			            if(bledny_ruch == false)
			            tab4[6] = zmienna;
			            break;	
					}
    			case 8:
    				{
    				bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
		            if(bledny_ruch == false)
		            tab4[7] = zmienna;
		            break;
					}
    		 	case 9:
    		 		{
					bledny_ruch = sprawdzanie(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka );
	          	  	if(bledny_ruch == false)
	            	tab4[8] = zmienna;
	            	break;
					}			
				default:
		            {
			           system("cls");
						wypisywanie_imion(imie1, imie2, licznik);
						timer();
	            		tablica_1_2_3_4( tab1, tab2, tab3, tab4);
	           			cout<<"Zla kombinacja znakow!!!"<<endl;
	           			bledny_ruch == true;
	           			break;
					}
				}
		break;
		}
	case 'p': case 'P':
		{
		system("cls");
		pauza();
		wypisywanie_imion(imie1, imie2, licznik);
		timer();
	    tablica_1_2_3_4( tab1, tab2, tab3, tab4);
		bledny_ruch = true;
		break;
		}
	case 'h': case 'H':
		{
		system("cls");
		opis_kolka();
		cout<<endl;
		opis_pentago();
		system("pause");
		system("cls");
		wypisywanie_imion(imie1, imie2, licznik);
		timer();
	    tablica_1_2_3_4( tab1, tab2, tab3, tab4);
		cout<<"Zla kombinacja znakow!!!"<<endl;
	    zmiana_numer( zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka, licznik, imie1, imie2);
		bledny_ruch = true;
		break;
		}
	default:
        {
	    system("cls");
	    wypisywanie_imion(imie1, imie2, licznik);
		timer();
	    tablica_1_2_3_4( tab1, tab2, tab3, tab4);
		cout<<"Zla kombinacja znakow!!!"<<endl;
		bledny_ruch = true;
		break;
		}
	}
  }
}

// funkcja, która krêci dany kwadrat (q,w,a,s) w lewo
void zamiana_z(char krecenie, char zmienna, char zmienna1, char zmienna2, char tab1[], char tab2[], char tab3[], char tab4[], int nr)
{
	bool prawda = true;
	while(prawda)
	{
		cin>>krecenie;
		switch(krecenie)
		{
			case 'q': case 'Q':
			{
				swap(tab1[0], tab1[6]);
				swap(tab1[0], tab1[8]);
				swap(tab1[0], tab1[2]);
				swap(tab1[3], tab1[7]);
				swap(tab1[3], tab1[5]);
				swap(tab1[3], tab1[1]);
					prawda = false;
					break;
			}
			case 'w': case 'W':
			{
				swap(tab2[0], tab2[6]);
				swap(tab2[0], tab2[8]);
				swap(tab2[0], tab2[2]);
				swap(tab2[3], tab2[7]);
				swap(tab2[3], tab2[5]);
				swap(tab2[3], tab2[1]);
				prawda = false;	
				break;
			}
			case 'a': case 'A':
			{
				swap(tab3[0], tab3[6]);
				swap(tab3[0], tab3[8]);
				swap(tab3[0], tab3[2]);
				swap(tab3[3], tab3[7]);
				swap(tab3[3], tab3[5]);
				swap(tab3[3], tab3[1]);
					prawda = false;
					break;
			}
			case 's': case'S':
			{
				swap(tab4[0], tab4[6]);
				swap(tab4[0], tab4[8]);
				swap(tab4[0], tab4[2]);
				swap(tab4[3], tab4[7]);
				swap(tab4[3], tab4[5]);
				swap(tab4[3], tab4[1]);
				prawda = false;
				break;	
			}
			default:
			{
				cout<<"Zly znak, wprowadz jeszcze raz: ";
				prawda = true;
				break;
			}
		}	
	}
}

// funkcja, która krêci dany kwadrat (q,w,a,s) w prawo
void zamiana_x(char krecenie, char zmienna, char zmienna1, char zmienna2, char tab1[], char tab2[], char tab3[], char tab4[], int nr)
{
		bool prawda = true;
	while(prawda)
	{
		cin>>krecenie;
		switch(krecenie)
		{
			case 'q': case 'Q':
			{
				swap(tab1[0], tab1[2]);
				swap(tab1[0], tab1[8]);
				swap(tab1[0], tab1[6]);
				swap(tab1[1], tab1[5]);
				swap(tab1[1], tab1[7]);
				swap(tab1[1], tab1[3]);
					prawda = false;
					break;
			}
			case 'w': case 'W':
			{
				swap(tab2[0], tab2[2]);
				swap(tab2[0], tab2[8]);
				swap(tab2[0], tab2[6]);
				swap(tab2[1], tab2[5]);
				swap(tab2[1], tab2[7]);
				swap(tab2[1], tab2[3]);
				prawda = false;	
				break;
			}
			case 'a': case 'A':
			{
				swap(tab3[0], tab3[2]);
				swap(tab3[0], tab3[8]);
				swap(tab3[0], tab3[6]);
				swap(tab3[1], tab3[5]);
				swap(tab3[1], tab3[7]);
				swap(tab3[1], tab3[3]);
					prawda = false;
					break;
			}
			case 's': case'S':
			{
				swap(tab4[0], tab4[2]);
				swap(tab4[0], tab4[8]);
				swap(tab4[0], tab4[6]);
				swap(tab4[1], tab4[5]);
				swap(tab4[1], tab4[7]);
				swap(tab4[1], tab4[3]);
				prawda = false;
				break;	
			}
			default:
			{
				cout<<"Zly znak, wprowadz jeszcze raz: ";
				prawda = true;
				break;
			}
		}	
	}	
}

//funkacj która pozwala wybraæ w któr¹ stronê chce zakrêciæ gracz
void wybor_krecenia(char krecenie, char zmienna, char zmienna1, char zmienna2, char tab1[], char tab2[], char tab3[], char tab4[], int nr)
{
	char wybor_krec;
	cout<<"Wpisz w ktora strone chcesz zakrecic jedna z 4 planszy(z - w prawo, x - lewo): "<<endl;
	cout<<"A nastêpnie ktory kwadrat chcesz zakrecic(q,w,a,s): ";
	cin>>wybor_krec;
	if(wybor_krec == 'z' || wybor_krec == 'Z')
	{
		zamiana_z(krecenie, zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr);
	}
	if(wybor_krec == 'x' || wybor_krec == 'X')
	{
		zamiana_x(krecenie, zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr);
	}
}

//funkcja która po wyborze daje kó³ko i krzy¿yk 
void kolko_i_krzyzyk( char zmienna, char zmienna1, char zmienna2, char tab1[], char tab2[], char tab3[], char tab4[], int nr, char  podmianka, int licznik, string imie1, string imie2, string imie)
{
	
	cout<<"Wpisz imie gracza 1: ";
	cin>>imie1;
	cout<<"Wpisz imie gracza 2: ";
	cin>>imie2;
	system("cls");
	
		for(int i = 0; i < 37; i++)
		{
			if(i == 36) 
			{
				cout<<"REMIS!!!";
				exit(0);
			}
				wypisywanie_imion(imie1, imie2, licznik);
				timer();
				tablica_1_2_3_4( tab1, tab2, tab3, tab4);
				wygrana(zmienna, tab1, tab2, tab3, tab4, nr, podmianka, licznik, imie1, imie2, imie);
				zmiana_numer(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka, licznik, imie1, imie2);
				system("cls");
		licznik++;	
		}
}
//funkacja gry pentago
void pentago(char zmienna, char zmienna1, char zmienna2, char tab1[], char tab2[], char tab3[], char tab4[], int nr, char  podmianka, int licznik, string imie1, string imie2, string imie, char krecenie)
{
	cout<<"Wpisz imie gracza 1: ";
	cin>>imie1;
	cout<<"Wpisz imie gracza 2: ";
	cin>>imie2;
	system("cls");
		for(int i = 0; i < 37; i++)
		{
			if(i == 36) 
			{
				cout<<"REMIS!!!";
				exit(0);
			}
				wypisywanie_imion(imie1, imie2, licznik);
				timer();
				tablica_1_2_3_4( tab1, tab2, tab3, tab4);
				zmiana_numer(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka, licznik, imie1, imie2);
				system("cls");
				wypisywanie_imion(imie1, imie2, licznik);
				timer();
				tablica_1_2_3_4( tab1, tab2, tab3, tab4);
				wybor_krecenia(krecenie, zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr);
				wygrana(zmienna, tab1, tab2, tab3, tab4, nr, podmianka, licznik, imie1, imie2, imie);
				system("cls");
		licznik++;	
	}
}
//funkacja z tablica predefiniowan¹ 
void tablica_predfiniowana(char zmienna, char zmienna1, char zmienna2, char tab1_p[], char tab2_p[], char tab3_p[], char tab4_p[], int nr, char  podmianka, int licznik, string imie1, string imie2, string imie, char krecenie)
{
	cout<<"Wpisz imie gracza 1: ";
	cin>>imie1;
	cout<<"Wpisz imie gracza 2: ";
	cin>>imie2;
	system("cls");
		for(int i = 0; i < 21; i++)
		{
			if(i == 20) 
			{
				cout<<"REMIS!!!";
				exit(0);
			}
				//sprawdzanie(char zmienna,char zmienna1, char zmienna2, char tab1[], char tab2[], char tab3[], char tab4[], int nr, char  podmianka)
				wypisywanie_imion(imie1, imie2, licznik);
				timer();
				tablica_1_2_3_4( tab1_p, tab2_p, tab3_p, tab4_p);
				zmiana_numer(zmienna, zmienna1, zmienna2, tab1_p, tab2_p, tab3_p, tab4_p, nr, podmianka, licznik, imie1, imie2);
				system("cls");
				tablica_1_2_3_4( tab1_p, tab2_p, tab3_p, tab4_p);
				wybor_krecenia(krecenie, zmienna, zmienna1, zmienna2, tab1_p, tab2_p, tab3_p, tab4_p, nr);
				wygrana(zmienna,tab1_p, tab2_p, tab3_p, tab4_p, nr, podmianka, licznik, imie1, imie2, imie);
				system("cls");
		licznik++;	
	}
}
//funckja ktora wybiera, która 
bool wybor_gry(char zmienna, char zmienna1, char zmienna2, char tab1[], char tab2[], char tab3[], char tab4[],char tab1_p[], char tab2_p[], char tab3_p[], char tab4_p[], int nr, char  podmianka, int licznik, string imie1, string imie2, string imie, char krecenie);

//funkacj g³ówna 
int main()
{
	//deklaracje czterech tablic jednowymiarowych do wypisywania tablicy
	//pod nimi deklaracja zmiennych, które bêd¹ u¿ywane w ca³ym programie
	const int TAB_MAX = 9;
	string imie1, imie2, imie;
	char tab1[TAB_MAX] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	char tab2[TAB_MAX] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	char tab3[TAB_MAX] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	char tab4[TAB_MAX] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	char tab1_p[TAB_MAX] = {' ','X',' ','X','X','O',' ','O',' '};
	char tab2_p[TAB_MAX] = {' ',' ',' ','X','O',' ',' ','X',' '};
	char tab3_p[TAB_MAX] = {' ','O',' ','O',' ','X','X','X',' '};
	char tab4_p[TAB_MAX] = {' ','O','O',' ','O',' ',' ','X',' '};
	
	long double timer1, timer2;
	int zmienna_menu, wpisz_zmienna_menu;
	char podmianka;
	char znak_gracz_1;
	char znak_gracz_2;
	znak_gracz_1 = 'O';
	znak_gracz_1 = 'X';
	int licznik = 0;
	int nr;
	char krecenie;
	char numerek;
	char zmienna , zmienna1 = 'X', zmienna2 = 'O';
	//ta czêœæ programu pozwala graczom wprowadziæ swoje imiona. 
	 wybor_gry(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, tab1_p, tab2_p, tab3_p, tab4_p, nr, podmianka, licznik, imie1, imie2, imie, krecenie);
	system("pause");
	return 0;
}

//funkcja która wybiera gre
bool wybor_gry(char zmienna, char zmienna1, char zmienna2, char tab1[], char tab2[], char tab3[], char tab4[], char tab1_p[], char tab2_p[], char tab3_p[], char tab4_p[], int nr, char  podmianka, int licznik, string imie1, string imie2, string imie, char krecenie)
{
	char wybor_gry;
	bool prawda = true;
	while(prawda)
	{	
	cout<<"Wybierz gre w ktora chcesz zagrac: "<<endl;
	cout<<"1 - kolko i krzyzyk"<<endl;
	cout<<"2 - pentago"<<endl;
	cout<<"3 - instrukcja obslugi gry w pentago: "<<endl;
	cout<<"4 - instrukcja obslugi gry w kolko i krzyzyk: "<<endl;
	cout<<"h- wyswietl opis programu dla Pentago i kolka i krzyzy: "<<endl;
	cout<<"o - wyswietl tablice predefiniowana(Pentago): "<<endl;
	cout<<">";
	cin>>wybor_gry;
	system("cls");
	switch(wybor_gry)
	{
		case '1':
			{
				kolko_i_krzyzyk(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka, licznik, imie1, imie2, imie);
				prawda = false;
				return prawda;
					break;
			}
		case '2':
			{
				pentago(zmienna, zmienna1, zmienna2, tab1, tab2, tab3, tab4, nr, podmianka, licznik, imie1, imie2, imie, krecenie);
				prawda = false;
				return prawda; 
					break;
			}
		case '3':	
			{
			cout<<"	q,w,a,s - wybor czesci planszy odpowiednio: lewej gornej, prawej gornej, lewej dolnej, prawej dolnej"<<endl;
  			cout<<"	1..9 - wybor pola na czesci planszy jak na klawiaturze numerycznej tj. 1 to dolne lewe pole"<<endl;
			cout<<"	z,x - obrot odpowiednio: zgodnie z ruchem wskazowek zegara, odwrotnie do ruchu wskazowek"<<endl;
			cout<<"	p - pauza"<<endl;		
			cout<<"	u - undo"<<endl;
			cout<<"	o - wczytanie predefiniowanej planszy"<<endl;
			cout<<"	m - wejscie do opcji"<<endl;
			cout<<"	h - wejscie do opisu programu"<<endl;
			system("pause");
			system("cls");
			break;
			}
		case '4':
			{
			cout<<"	q,w,a,s - wybor czesci planszy odpowiednio: lewej gornej, prawej gornej, lewej dolnej, prawej dolnej"<<endl;
  			cout<<"	1..9 - wybor pola na czêœci planszy jak na klawiaturze numerycznej tj. 1 to dolne lewe pole"<<endl;
			cout<<"	p - pauza"<<endl;		
			cout<<"	u - undo"<<endl;
			cout<<"	o - wczytanie predefiniowanej planszy"<<endl;
			cout<<"	m - wejscie do opcji"<<endl;
			cout<<"	h - wejscie do opisu programu"<<endl;	
			system("pause");
			system("cls");
				break;
			}
		case 'h':
			{
				cout<<"Aby wrocic do menu glownego kliknij jakikolwiek przycisk: "<<endl<<endl;
				opis_kolka();
				cout<<endl;
				opis_pentago();
				cout<<endl;
				system("pause");
				system("cls");
				main();
				return prawda;
					break;
			}	
		case 'o': 
			{
				tablica_predfiniowana(zmienna, zmienna1, zmienna2, tab1_p, tab2_p, tab3_p, tab4_p, nr, podmianka, licznik, imie1, imie2, imie, krecenie);
			}
			
		default:
		{
			main();
			break;
		}	
		}	
	}
	return false;
}

void timer()
{
    time_t start_timer1, current_timer1, start_timer2, current_timer2;
  struct tm y2k = {0};
  double seconds;
  double czas_gracza_1 = 50000, czas_gracza_2 = 50000;
  y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
  y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;
 
  time(&start_timer1);  /* get current time; same as: timer = time(NULL)  */
    time(&current_timer1);
    time(&start_timer2);  /* get current time; same as: timer = time(NULL)  */
  
    time(&current_timer2);
  seconds = difftime(start_timer1,current_timer1);
  cout<<"Zostalo graczowi tyle sekund: "<<czas_gracza_1 - seconds<<endl;
}
