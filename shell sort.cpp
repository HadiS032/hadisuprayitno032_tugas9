#include<iostream>
 
using namespace std;
 
// fungsi dari penyortingan shell.
void ShellSort(int a[], int n)
{
	int selisih_indeks, celah_indeks,jumlah_indeks, temp;
	// jarak indeks adalah jumlah data dibagi 2 , lalu proses berikutnya akan dibagi dua lagi sehingga n/2/2 = n/4
	for(selisih_indeks = n/2; selisih_indeks > 0; selisih_indeks = selisih_indeks/2)
	{
		for(celah_indeks= selisih_indeks; celah_indeks< n; celah_indeks++)
		{
			for(jumlah_indeks = celah_indeks-selisih_indeks; jumlah_indeks  >= 0; jumlah_indeks = jumlah_indeks -selisih_indeks)
			{
				// jika nilaipada jumlah indeks lebih besar maka looping berhenti
				if(a[jumlah_indeks+selisih_indeks] >= a[jumlah_indeks])
				break;
				// proses sorting yang telah dilakukan akan disimpan.
				else
				{
					temp = a[jumlah_indeks];
					a[jumlah_indeks] = a[jumlah_indeks+selisih_indeks];
					a[jumlah_indeks+selisih_indeks] = temp;
				}
			}
		}
	}
}
int main()
{	// input banyaknya data yang disorting
	int n, i;
	cout<<"\nmasukkan jumlah data yang ingin di sorting: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"masukkan data "<<i+1<<": ";
		cin>>arr[i];
	}
 
	ShellSort(arr, n);
 
	// mencetak hasil sorting data.
	cout<<"\nhasil sorting ";
	for (i = 0; i < n; i++)
		cout<< "  "<<arr[i];
 
	return 0;
}
