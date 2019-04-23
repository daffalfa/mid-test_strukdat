#include<iostream>
using namespace std;

struct data
{
    int no;
    char tim[30];
    char asal[30];
    int gol;
    Data* next;
};
typedef Data* pointer;
typedef pointer list;

void createList(pointer& pBaru)
{
    first=NULL;
}

void createElement(pointer& pBaru)
{
    pBaru=new Data;
    cout<<"Masukkan Nomor Daftar";cin>> pBaru->no;
    cout<<"Masukkan Asal tim";cin>>pBaru->asal;
    cout<<"Masukkan jumlah gol";cin>>pBaru->gol;
}
void insertLast(list& first, pointer pBaru )
{
    pointer last;
    if (first=NULL)
    {
        first=pBaru;
    }
    else
    {
        last=first;
        while(last->next!=NULL)
        {
            last=last->next
        }
        last->next=pBaru
    }

}

void update(list& first)
{
    pointer pBaru;
    pBantu=first;
    while(pBantu=NULL)
    {
        cout<<"tim";cin>>pbaru->tim;
        cout<<"Masukkan gol";cin>>pBaru->gol;
        pBantu=pBantu->next
    }
}

void transversl(list first, int n)
{
    pointer pBantu;
    pBantu=first;
    int k;
    cout<<"nomor daftar\tim\t\tgol\n";
    for(int i=0; i<n; i++)
    {
        while(pBantu->next->next!=NULL)
        {
            if(pBantu->next->gol<pBantu->next->next->gol)
            {
                pSwitch=pBantu->next;
                pBantu->next=pSwitch
            }
        }
    }

}

int main(){
	pointer p;
	List first;
	int n;
	cout << "Jumlah Tim	: ";
	cin >> n;
	createList(First);
	for (int i=0; i<n; i++){
		createElement(p);
		insertLast(first, p);
	}
	update(first);
	traversal(first, n);
}


























