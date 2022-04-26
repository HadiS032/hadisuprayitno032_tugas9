#include<iostream>
 
using namespace std;
 
// fungsi dari penyortingan shell.
void ShellSort(int a[], int n)
{
	int selisih_indeks, banyak_indeks, tinggi_indeks, temp;
	// jarak antar indeks data yang disorting, setiap dari indeks yang telah disorting akan dibagi 2
	for(selisih_indeks = n/2; selisih_indeks > 0; selisih_indeks = selisih_indeks/2)
	{
		for(banyak_indeks= selisih_indeks; banyak_indeks< n; banyak_indeks++)
		{
			for(tinggi_indeks = banyak_indeks-selisih_indeks; tinggi_indeks  >= 0; tinggi_indeks = tinggi_indeks -selisih_indeks)
			{
				// jika nilaipada tinggi indeks lebih besar maka looping berhenti
				if(a[tinggi_indeks+selisih_indeks] >= a[tinggi_indeks])
				break;
				// tinggi ditukarkan dengan sebaliknya.
				else
				{
					temp = a[tinggi_indeks];
					a[tinggi_indeks] = a[tinggi_indeks+selisih_indeks];
					a[tinggi_indeks+selisih_indeks] = temp;
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
