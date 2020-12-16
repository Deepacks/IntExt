#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <vector>
#include <conio.h>

using namespace std;

int main(void) {

  //reg
  string a =  "Matteo Balestrini" ;
  string b =  "Stephane Bethaz" ;
  string c =  "Carolina Bravo" ;
  string d =  "Vladimir Cuneaz" ;
  string e =  "Alessandro Ledda" ;
  string f =  "Simone Mimotti" ;
  string g =  "Mattia Molinari" ;
  string h =  "Filippo Petey" ;
  string i =  "Chiara Renda" ;
  string j =  "Filippo Rosset" ;
  string k =  "Giada Scarpante" ;
  string l =  "Emanuel Simioana" ;
  string m =  "Gaia Spinella" ;
  string n =  "Carmine Sterrantino" ;
  string o =  "Samuele Tartoni" ;
  string p =  "Davide Trossello " ;
  string q =  "Maxime Uroni" ;
  string r =  "Beatrice Zani" ;
  //reg

  //dat
  int days ;
  int flag = 0 ;
  int dumb = 0;
  int ppl[9] ;
  cout << "Numero giorni: " ;
  cin >> days ;
  do {
    if (flag > 0) {
      cout << "Qui non tornano i conti :/" << endl << endl ;
      flag = 0 ;
      dumb = 0 ;
    }
    for (int idx=0 ; idx<days ; idx++) {
      cout << "Numero persone";
      if (idx == 0) cout << " primo " ;
      if (idx == 1) cout << " secondo " ;
      if (idx == 2) cout << " terzo " ;
      if (idx == 3) cout << " quarto " ;
      if (idx == 4) cout << " quinto " ;
      if (idx == 5) cout << " sesto " ;
      if (idx == 6) cout << " settimo " ;
      if (idx == 7) cout << " ottavo" ;
      if (idx == 8) cout << " nono " ;
      cout << "giorno: " ;
      cin >> ppl[idx] ;
      dumb = dumb + ppl[idx] ;
    }
    cout << endl << endl;
    if (dumb != 18) flag++ ;
  }while (flag > 0) ;
  //dat

  //gen
  std::vector<int> ext ;

  for (int idx=0 ; idx<18 ; idx++) {
    ext.push_back(idx) ;
  }

  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::shuffle(ext.begin(), ext.end(), std::default_random_engine(seed));
  //gen

  //render
  int nidx = 0 ; //name-index
  int didx ; //day-index
  int pcidx ; //people-count-index
    for (didx=0 ; didx<days ; didx ++) {
      if (didx == 0) cout << "Primo " ;
      if (didx == 1) cout << "Secondo " ;
      if (didx == 2) cout << "Terzo " ;
      if (didx == 3) cout << "Quarto " ;
      if (didx == 4) cout << "Quinto " ;
      if (didx == 5) cout << "Sesto " ;
      if (didx == 6) cout << "Settimo " ;
      if (didx == 7) cout << "Ottavo" ;
      if (didx == 8) cout << "Nono " ;
      cout << "giorno: " << endl << endl ;
      for (pcidx=0 ;pcidx<ppl[didx] ; pcidx++) {
        switch (ext[nidx]) {
          case 0 :
            cout << a ;
          break ;
          case 1 :
            cout << b ;
          break ;
          case 2 :
            cout << c ;
          break ;
          case 3 :
            cout << d ;
          break ;
          case 4 :
            cout << e ;
          break ;
          case 5 :
            cout << f ;
          break ;
          case 6 :
            cout << g ;
          break ;
          case 7 :
            cout << h ;
          break ;
          case 8 :
            cout << i ;
          break ;
          case 9 :
            cout << j ;
          break ;
          case 10 :
            cout << k ;
          break ;
          case 11 :
            cout << l ;
          break ;
          case 12 :
            cout << m ;
          break ;
          case 13 :
            cout << n ;
          break ;
          case 14 :
            cout << o ;
          break ;
          case 15 :
            cout << p ;
          break ;
          case 16 :
            cout << q ;
          break ;
          case 17 :
            cout << r ;
          break ;
        }
        nidx++ ;
        cout << endl ;
        if (nidx == 19) break;
      }
      cout << endl << endl ;
    }
  //render

  getch() ;
  return 0 ;
}
