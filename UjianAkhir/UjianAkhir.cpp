#include <iostream>
#include <string>

using namespace std;

class MasukUniversitas //abstraksi
{
private:  // isi access modifier disini
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;
    // isi daftar variable yang dibutuhkan di bawah ini

public:
    MasukUniversitas() {
        uangPendaftaran = 0;
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
        // isi nilai default variable yang dibutuhkan di bawah ini
    }
    virtual void namaJalurMasuk() 
    { 
        cout << "SNBT";
        cout << "SNBP";
        return; 
    }
    // isi disini dengan fungsi virtual yang dibutuhkan
    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }
    int getUangPendaftaran() {
        return uangPendaftaran;
    }
    void setUangSemesterPertama(int nilai)
    {
        this->uangSemesterPertama = nilai;
    }
    int getUangSemesterPertama()
    {
        return uangSemesterPertama;
    }
    void setUangBangunan(int nilai)
    {
        this->uangBangunan = nilai;
    }
    int getUangBangunan()
    {
        return uangBangunan;
    }
    void setTotalBiaya(int nilai)
    {
        this->totalBiaya = nilai;
    }
    int getTotalBiaya()
    {
        return totalBiaya;
    }
    // isi setter dan getter variable yang dibutuhkan di bawah ini
    void input1()
    {
        cout << "Masukkan Uang Pendaftaran: " << endl;
        cin >> uangPendaftaran;
        cout << "Masukkan Uang Semester Pertama: " << endl;
        cin >> uangSemesterPertama;
        cout << "Masukkan Uang Bangunan: " << endl;
        cin >> uangBangunan;
    }
    void input2()
    {
        cout << "Masukkan Uang Pendaftaran: " << endl;
        cin >> uangPendaftaran;
        cout << "Masukkan Uang Semester Pertama: " << endl;
        cin >> uangSemesterPertama;
    }
};
class SNBT : public MasukUniversitas {
public: 

    // isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBP
};
int main() 
{
    MasukUniversitas mu;
    int choice;

    cout << "Pilih Jalur Masuk: " << endl;
    cout << "1. SNBT" << endl;
    cout << "2. SNBP" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilihan: ";
    cin >> choice;

    switch (choice)
    {
    case 1: 
        mu.input1();
        break;
    case 2:
        mu.input2();
        break;
    case 3:
        break;
    default:
        cout << "Invalid coice, please try again\n";
    }
    return 0;
    // isi disini untuk fungsi main
}