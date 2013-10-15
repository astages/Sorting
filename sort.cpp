#include <iostream>
#include <stdlib.h>
template <class T> void exch(T &, T &);
template <class T> void compexch(T &, T &);
template <class T> void selection(T *, int, int);
template <class T> void insertion(T *, int, int);
template <class T> void bubble(T *, int, int);
using namespace std;
int main(int argc, char *argv[])
{
    //int i, N = atoi(argv[1]), KaDaryt = atoi(argv[2]);
	int i 
	int N = 100, int KaDaryt = 1;
    int *a = new int[N]; //isskiriame vietos
    if (KaDaryt==1) // Atsitiktinai sugeneruoja N skaičių intervale: 1,...,1000.
      for (i = 0; i < N; i++) // cia else if 2 truksta. 1 - atsitiktinis, 2 - geriausias, 3 - blogiausias, visa kita- pats
        a[i] = 1000*(1.0*rand()/RAND_MAX);
		else if 
		for........//geriausias masyvas sugeneruoja
		else if
		for.................//blogiausias masyvas sugeneruoja
    else // Savo nuožiūra įvedame skaičius. Norėdami baigti įvedimą, įvedame bet kokį simbolį - ne skaičių. cia, jei ranka suvedineti
      { N = 0; while (cin >> a[N]) N++; }
    cout << "Įvestas skaičių masyvas yra:" << endl;//cia isvedimas
	
    for (i = 0; i < N; i++) cout << a[i] << " ";
    cout << endl;
    selection(a, 0, N-1); //kreipimasis
    cout << "Surūšiuotas skaičių masyvas yra:" << endl;
    for (i = 0; i < N; i++) cout << a[i] << " ";
    cout << endl;
	cout <<"Atliko lyginimo operaciju arba L(N)="<<endl;
	cout <<"Atliko sukeitimo operaciju arba S(N)="<<endl;
	cout <<"Atliko is viso operaciju arba L(N)+S(N)="<<endl;
	//analogiskai su 
	 insertion(a, 0, N-1); //kreipimasis
	 //analogiskai su 
	 bubble (a, 0, N-1); //kreipimasis
	 
}

// Sukeičia elementus vietomis
template <class T>
  void exch(T &A, T &B)
    { T t = A ; A = B; B = t; }
// Sukeičia elementus vietomis tik jei patenkinta sąlyga
template <class T>
  void compexch(T &A, T &B)
    { if (B < A) exch(A, B); }
// Išrinkimo algoritmo realizacija
template <class T>
void selection(T a[], int l, int r)
  { for (int i = l; i < r; i++)
      { int min = i;
        for (int j = i+1; j <= r; j++)
            if (a[j] < a[min]) min = j;
        exch(a[i], a[min]);
      }
  }
// Įterpimo algoritmo realizacija
template <class T>
void insertion(T a[], int l, int r)
  { int i;
    for (i = r; i > l; i--) compexch(a[i-1], a[i]);
    for (i = l+2; i <= r; i++)
      { int j = i; T v = a[i];
        while (v < a[j-1])
          { a[j] = a[j-1]; j--; }
        a[j] = v;
      }
  }
// Burbulo algoritmas
template <class T>
void bubble(T a[], int l, int r)
  { for (int i = l; i < r; i++)
      for (int j = r; j > i; j--)
        compexch(a[j-1], a[j]);
  }

