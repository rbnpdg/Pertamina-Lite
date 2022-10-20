/*Kelompok 15
1) Intan Maghfirah (2257051015)
2) Rizki Mahesa (2217051101)
3) Ruben Pandega (2217051085)
Tema : Penjualan Bensin Pada SPBU */
#include <iostream>
#include <conio.h>


using namespace std;

//header
void header(){
    cout << "===========================================\n";
    cout << "\tSelamat datang di e-SPBU\n";
    cout << "===========================================\n";
}

//footer
void footer(){
    cout << "=========== Terima Kasih =========="<<endl;
    cout << "===   Silahkan Datang Kembali   ==="<<endl;     
}

//prosessss
int proses() {
	char menu;
	float verif, bayar, pilihan, uang, transaksi, pajak, pertalite, pertamax, pertabo, dex, kurang;
	int harga[10] = {10000, 14500, 16250, 17750};
	
	do {
	    system ("color 5");
	    system("CLS");
	    header();
	    cout << endl;
	    cout << "Jenis BBM yang tersedia disini :" << endl;
	    cout << "______________________________________________\n";
	    cout << " Kode |     Jenis BBM     |  Harga/Liter\n";
	    cout << "______________________________________________\n";
	    cout << "  1   | Pertalite         |  Rp. " << harga[0] << endl;
	    cout << "  2   | Pertamax          |  Rp. " << harga[1] << endl;
	    cout << "  3   | Pertamax Turbo    |  Rp. " << harga[2] << endl;
	    cout << "  4   | Pertamina Dex     |  Rp. " << harga[3] << endl;
	    cout << "______________________________________________\n";
		   
	    cout << "Masukkan kode BBM yang akan Anda beli : ";
	    cin >> pilihan;
	    
	    if(pilihan == 1) { //Jenis BBM Pertalite
	    	//PEMESANAN
	        cout << "Masukkan jumlah pembelian Pertalite Anda\n";
	        cout << "Rp. ";
			cin >> uang;
	        
	        if(uang < 1) { //kasus terjadi jika nominal rupiah yang dimasukkan kurang dari Rp. 1
	            cout << "Nominal tidak valid, silahkan masukkan nominal pembelian kembali\n";
	            cout << "Masukkan jumlah pembelian Pertalite Anda\n";
	            cout << "Rp. ";cin >> uang;
	        }
	        
	        pertalite = uang/10000;
	        pajak = 1000;
	        
	        cout << endl;
	        //Pemilihan Metode Pembayaran
	        cout << "Pilih metode pembayaran\n[1]Cash\n[2]Dana\n";
	        cout << "Masukkan metode pembayaran : ";
	        cin >> bayar;
	 	       
	 	cout << endl;
	 	       
	        if(bayar == 1) { //jika memilih cash maka akan langsung keluar struk pembelian
	            cout << "-----Transaksi Anda berhasil!-----\n";
	        
	            
	            cout << "==========e-SPBU Invoice==========\n\n";
	            cout << "Jenis BBM\t: Pertalite\n";
	            cout << "Jumlah\t\t: " << pertalite << " liter\n";
	            cout << "Total\t\t: Rp. " << uang << endl;
	            cout << "__________________________________\n";
	       		
	       		
	        } else if( bayar == 2) { // Akan muncul nota untuk pembayaran yang disertai dengan pajak 0,2%
	            system ("CLS");
	            cout << "==================================================\n";
	            cout << "Volume pertalite\t: " << pertalite << " liter\n";
	            cout << "Harga\t\t\t: Rp. " << uang << endl;
	            cout << "Pajak\t\t\t: Rp. " << pajak << endl;
	            cout << "Total\t\t\t: Rp. " << uang + pajak << endl;
	        	
	            //Kode transaksi ketika menggunakan dana akan keluar
	            cout << "Kode transaksi dana kamu adalah '1411'\n";
	            cout << "Masukan kode transaksi yang kamu dapatkan : ";
	            cin >> verif;
	        	
	            cout << endl;
	        	
	            if(verif == 1411){ // Jika sudah memasukan kode transaksi dana akan keluar struk pembelian
	               cout << "==========e-SPBU Invoice==========\n\n";
	               cout << "Jenis BBM\t: Pertalite\n";
	               cout << "Jumlah\t\t: " << pertalite << " liter\n";
	               cout << "Total\t\t: Rp. " << uang + pajak << endl;
	               cout << "__________________________________\n";
		    } else { // Jika memasukan kode selain 1411 makan akan tidak valid
			cout << "Mohon maaf transaksi Anda dibatalkan karena kode tidak valid\n";
		    }
		}
	     } else if(pilihan == 2) { //Jenis BBM Pertamax
	    	//PEMESANAN
	        cout << "Masukkan jumlah pembelian Pertamax Anda\n";
	        cout << "Rp. ";cin >> uang;
	        
	        if(uang < 1) { //kasus terjadi jika nominal rupiah yang dimasukkan kurang dari Rp. 1
	            cout << "Nominal tidak valid, silahkan masukkan nominal pembelian kembali\n";
	            cout << "Masukkan jumlah pembelian Pertamax Anda\n";
	            cout << "Rp. ";cin >> uang;
	        }
	        
	        //penghitungan per liter yang didapat dan pajak jika menggunakan pembayaran dana
	        pertamax = uang/14500;
	        pajak = 1000;
	        
	        cout << endl;
	        // Pemilihan Metode Pembayaran
	        cout << "Pilih metode pembayaran\n[1]Cash\n[2]Dana\n";
	        cout << "Masukkan metode pembayaran : ";
		cin >> bayar;
	 	    
	 	cout << endl;
	 	    
	        if(bayar == 1) { //jika memilih cash maka akan langsung keluar struk pembelian
	           cout << "-----Transaksi Anda berhasil!-----\n";
	           cout << "==========e-SPBU Invoice==========\n\n";
	           cout << "Jenis BBM\t: Pertamax\n";
	           cout << "Jumlah\t\t: " << pertamax << " liter\n";
	           cout << "Total\t\t: Rp. " << uang << endl;
	           cout << "__________________________________\n";
	        } else if( bayar == 2) { // Akan muncul nota untuk pembayaran yang disertai dengan pajak 0,2%
		   system ("CLS");
	           cout << "Volume BBM\t: " << pertamax << " liter\n";
	           cout << "Harga\t\t: Rp. " << uang << endl;
	           cout << "Pajak\t\t: Rp. " << pajak << endl;
	           cout << "Total\t\t: Rp. " << uang + pajak << endl;
	        	
	           // Kode transaksi ketika menggunakan dana akan keluar
	           cout << "Kode transaksi dana kamu adalah '1411'\n";
	           cout << "Masukan kode transaksi yang kamu dapatkan : ";
	           cin >> verif;
	        
	           cout << endl;
	        	
	           if(verif == 1411){ // Jika sudah memasukan kode transaksi dana akan keluar struk pembelian
	               cout << "==========e-SPBU Invoice==========\n\n";
	               cout << "Jenis BBM\t: Pertamax\n";
	               cout << "Jumlah\t\t: " << pertamax << " liter\n";
	               cout << "Total\t\t: Rp. " << uang + pajak << endl;
	               cout << "__________________________________\n";
		   } else { // Jika memasukan kode selain 1411 makan akan tidak valid
		       cout << "Mohon maaf transaksi Anda dibatalkan karena kode tidak valid\n";
		   }
	        }
	     } else if(pilihan == 3) { // Jenis BBM Pertamax
	    	   //PEMESANAN
	           cout << "Masukkan jumlah pembelian Pertamax Turbo Anda\n";
	           cout << "Rp. ";cin >> uang;
	        
	           if(uang < 1) { // kasus terjadi jika nominal rupiah yang dimasukkan kurang dari Rp. 1
	               cout << "Nominal tidak valid, silahkan masukkan nominal pembelian kembali\n";
	               cout << "Masukkan jumlah pembelian Pertamax Anda\n";
	               cout << "Rp. ";cin >> uang;
	           }
	        
	           //penghitungan per liter yang didapat dan pajak jika menggunakan pembayaran dana
	           pertabo = uang/16250;
	           pajak = 1000;
	        
	           cout << endl;
	           // Pemilihan Metode Pembayaran
	           cout << "Pilih metode pembayaran\n[1]Cash\n[2]Dana\n";
	           cout << "Masukkan metode pembayaran : ";
		   cin >> bayar;
	 	    
	 	   cout << endl;
	 	    
	           if(bayar == 1) { //jika memilih cash maka akan langsung keluar struk pembelian
	               cout << "-----Transaksi Anda berhasil!-----\n";
	        
	               cout << "==========e-SPBU Invoice==========\n\n";
	               cout << "Jenis BBM\t: Pertamax Turbo\n";
	               cout << "Jumlah\t\t: " << pertabo << " liter\n";
	               cout << "Total\t\t: Rp. " << uang << endl;
	               cout << "__________________________________\n";
	           } else if( bayar == 2) { // Akan muncul nota untuk pembayaran yang disertai dengan pajak 0,2%
		       system ("CLS");
	               cout << "Volume BBM\t: " << pertabo << " liter\n";
	               cout << "Harga\t\t: Rp. " << uang << endl;
	               cout << "Pajak\t\t: Rp. " << pajak << endl;
	               cout << "Total\t\t: Rp. " << uang + pajak << endl;
	        	
	               // Kode transaksi ketika menggunakan dana akan keluar
	               cout << "Kode transaksi dana kamu adalah '1411'\n";
	               cout << "Masukan kode transaksi yang kamu dapatkan : ";
	               cin >> verif;
	        	
	               cout << endl;
	        	
	               if(verif == 1411){ // Jika sudah memasukan kode transaksi dana akan keluar struk pembelian
	        	   cout << "==========e-SPBU Invoice==========\n\n";
	                   cout << "Jenis BBM\t: Pertamax Turbo\n";
	                   cout << "Jumlah\t\t: " << pertabo << " liter\n";
	                   cout << "Total\t\t: Rp. " << uang + pajak << endl;
	                   cout << "__________________________________\n";
			} else { // Jika memasukan kode selain 1411 makan akan tidak valid
		           cout << "Mohon maaf transaksi Anda dibatalkan karena kode tidak valid\n";
			}
		    }

	      } 
			// pembelian untuk Pertamina Dex
			else if(pilihan == 4) {
	    	//PEMESANAN
	        cout << "Masukkan jumlah pembelian Pertamina Dex Anda\n";
	        cout << "Rp. ";cin >> uang;
	        
	        if(uang < 1) { // kasus terjadi jika nominal rupiah yang dimasukkan kurang dari Rp. 1
	            cout << "Nominal tidak valid, silahkan masukkan nominal pembelian kembali\n";
	            cout << "Masukkan jumlah pembelian Pertamax Anda\n";
	            cout << "Rp. ";cin >> uang;
	        }
	        
	        dex = uang/17750;
	        pajak = 1000;
	        
	        //PEMBAYARAN
	        cout << endl; 
	        // Pemilihan Metode Pembayaran
	        cout << "Pilih metode pembayaran\n[1]Cash\n[2]Dana\n";
	        cout << "Masukkan metode pembayaran : ";
			cin >> bayar;
	 	    
	 	cout << endl;
	 	       
	       	if(bayar == 1) { //jika memilih cash maka akan langsung keluar struk pembelian
	            cout << "-----Transaksi Anda berhasil!-----\n";
	        
	            
	            cout << "==========e-SPBU Invoice==========\n\n";
	            cout << "Jenis BBM\t: Pertamina Dex\n";
	            cout << "Jumlah\t\t: " << dex << " liter\n";
	            cout << "Total\t\t: Rp. " << uang << endl;
	               cout << "__________________________________\n";
	        }
	       		
	       		else if( bayar == 2) { // Akan muncul nota untuk pembayaran yang disertai dengan pajak 0,2%
	        	system ("CLS");
	        	cout << "Volume BBM\t: " << dex << " liter\n";
	        	cout << "Harga\t\t: Rp. " << uang << endl;
	        	cout << "Pajak\t\t: Rp. " << pajak << endl;
	        	cout << "Total\t\t: Rp. " << uang + pajak << endl;
	        	
	        	// Kode transaksi ketika menggunakan dana akan keluar
	        	cout << "Kode transaksi dana kamu adalah '1411'\n";
	        	cout << "Masukan kode transaksi yang kamu dapatkan : ";
	        	cin >> verif;
	        	
	        	cout << endl;	
	        	
	        	if(verif == 1411){ // Jika sudah memasukan kode transaksi dana akan keluar struk pembelian
	        	   cout << "==========e-SPBU Invoice==========\n";
	               cout << "Jenis BBM\t: Pertamina Dex\n";
	               cout << "Jumlah\t\t: " << dex << " liter\n";
	               cout << "Total\t\t: Rp. " << uang + pajak << endl;
	               cout << "__________________________________\n";
				} else { // Jika memasukan kode selain 1411 makan akan tidak valid
					cout << "Mohon maaf transaksi Anda dibatalkan karena kode tidak valid\n";
				}
			}
		} else { // Jika memilih selain diantara menu 1-4 maka cout pilihan tidak tersedia
		    cout << "Maaf, pilihan Anda belum tersedia\n";
		}
		cout << "Kembali Ke Menu Utama [Y/T] ? " ;
	    cin >> menu;
	} while(menu == 'Y' || menu == 'y');
		cout << endl;
		footer();
    }


int main() {
    proses();
    getch();
    return 0;
}
