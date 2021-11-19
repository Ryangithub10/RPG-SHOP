#include <iostream>
using namespace std;

int main(){
	//membuat program jual beli barang sederhana
	char pesen;
	char pesenM;
	char pesenA;
	char pesenS;
	char pesenJ;
	int count;

	cout << "Selamat datang di toko kami, mau beli apa" << endl;
	cout << "1. Barang" << endl;
	cout << "2. Aksesoris" << endl;
	cout << "3. Senjata" << endl;
	cout << "4. Jual" << endl << endl;

	puts("NOTE: UNTUK MEMILIH MENU, KAMU HARUS MEMASUKAN NOMOR YANG ADA DI MENU!\n");

	cout << ':';
	cin >> pesen;

	if(pesen == '1'){
		cout << "mau yang mana?" << endl;
		cout << "1. lays\t\t\tHP: 80\tPrice: 10000" << endl << endl;

		cout << "2. indomie goreng\tHP: 200\tPrice: 50000" << endl << endl;

		cout << "3. minuman energi\tHP: 30\tSP: 40\tPrice: 5000\tSPECIAL: Meningkatkan kecepatan hanya sekali pertarungan" << endl << endl;

		cout << "4. health capsul\tHP: 30\tPrice: 1000" << endl << endl;

		cout << "5. stamina capsul\tSP: 20\tPrice: 2000" << endl << endl;

		cout << "6. revive chip\t\tHP: TO THE MAX\tPrice: 60000" << endl << endl;

		cout << ':';
		cin >> pesenM;

		if(pesenM == '1'){
			cout << "berapa?: ";
			cin >> count;
			int total_harga = count * 10000;
			cout << "\n*kamu membeli lays dengan jumlah " << count << " dan harga " << "DRP." << total_harga  << endl << endl;
		}
		else if(pesenM == '2'){
			cout << "berapa?: ";
			cin >> count;
			int total_harga = count * 50000;
			cout << "\n*kamu membeli indomie goreng dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;
		}
		else if(pesenM == '3'){
			cout << "berapa?: ";
			cin >> count;
			int total_harga = count * 5000;
			cout << "\n*kamu membeli minuman energi dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;
		}
		else if(pesenM == '4'){
			cout << "berapa?: ";
			cin >> count;
			int total_harga = count * 1000;
			cout << "\n*kamu membeli health capsul dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;
		}
		else if(pesenM == '5'){
			cout << "berapa?: ";
			cin >> count;
			int total_harga = count * 2000;
			cout << "\n*kamu membeli stamina capsul dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;

		}
		else if(pesenM == '6'){
			cout << "berapa?: ";
			cin >> count;
			int total_harga = count * 60000;
			cout << "\n*kamu membeli revive chip dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;
		}
	}

//==================================

	if(pesen == '2'){
		cout << "mau yang mana?" << endl;
		cout << "1. ring exp\t\tATK: +8\t\tDEF: +9\t\tSPECIAL: Memberikan exp tambahan setiap pertarungan selesai\t\tPrice: 25000" << endl << endl;
		cout << "2. digital armor\tDEF: +10\tSPD: +9\t\tPrice: 33000" << endl << endl;
		cout << "3. heavy armor\t\tDEF: +20\tSPD: -8\t\tPrice: 20000" << endl << endl;
		cout << "4. stamina capsul pouch\t SPMAX: +10\tPrice: 40000" << endl << endl << endl;

		cout << ':';
		cin >> pesenA;

		if(pesenA == '1'){
			cout << "berapa?: ";
			cin >> count;

			int total_harga = count * 25000;
			cout << "\n*kamu membeli ring exp dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;
		}
		else if(pesenA == '2'){
			cout << "berapa?: ";
			cin >> count;

			int total_harga = count * 33000;
			cout << "\n*kamu membeli digital armor dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;
		}
		else if(pesenA == '3'){
			cout << "berapa?: ";
			cin >> count;

			int total_harga = count * 20000;
			cout << "\n*kamu membeli heavy armor dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;
		}
		else if(pesenA == '4'){
			cout << "berapa?: ";
			cin >> count;

			int total_harga = count * 40000;
			cout << "\n*kamu membeli stamina capsul pouch dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;
		}
	}
//============senjata==============

	if(pesen == '3'){
		cout << "mau yang mana?" << endl;

		cout << "1. cyber mp5 gun\t ATK: +20\t price: 30000" << endl << endl;

		cout << "2. cyber crescent\t ATK: +25\t price: 45000" << endl << endl;

		cout << ':';
		cin >> pesenS;

		if(pesenS == '1'){
			cout << "*kamu membeli cyber mp5 gun" << endl << endl;
		}
		else if(pesenS == '2'){
			cout << "*kamu membeli cyber crescent" << endl << endl;
		}
	}

//==============jual===============
	
	if(pesen == '4'){
		cout << "apa yang kamu mau jual?" << endl;
		cout << "1. doge coin\t price: 500000" << endl << endl;

		cout << "2. scrap\t price: 5000" << endl << endl;

		cout << "3. red scarf\t price: 20000" << endl << endl;

		cout << "4. buster gun\t price: 40000" << endl << endl;

		cout << "5. X sword\t price: 50000" << endl << endl;

		cout << "demon of dark crescent\t price: 50000" << endl << endl;

		cout << "doble demon gun\t price: 30000" << endl << endl;

		cout << ':';
		cin >> pesenJ;

		if(pesenJ == '1'){
			cout << "berapa: ";
			cin >> count;

			int total_harga = count * 500000;
			cout << "\n*kamu menjual doge coin  dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;
		}
		else if(pesenJ == '2'){
			cout << "berapa: ";
			cin >> count;

			int total_harga = count * 5000;
			cout << "\n*kamu menjual scrap dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;
		}
		else if(pesenJ == '3'){
			cout << "berapa: ";
			cin >> count;

			int total_harga = count * 20000;
			cout << "\n*kamu menjual red scarf dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;
		}
		else if(pesenJ == '4'){
			cout << "berapa: ";
			cin >> count;

			int total_harga = count * 40000;
			cout << "\n*kamu menjual buster gun dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;
		}
		else if(pesenJ == '5'){
			cout << "berapa: ";
			cin >> count;

			int total_harga = count * 50000;
			cout << "\n*kamu menjual X sword dengan jumlah " << count << " dan harga " << "DRP." << total_harga << endl << endl;
		}
	}

	cout << "semoga hari mu menyenangkan!" << endl;

	return 0;
}
