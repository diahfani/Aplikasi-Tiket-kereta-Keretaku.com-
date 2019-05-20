//Aplikasi Penjualan Tiket Online
//EDify Project Algorthma dan Pemrograman

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Akun {
    public:
    string id, nama, pw, ktp, hp, tgl,email;
    Akun(string newid, string newnama, string newpw, string newktp, string newhp, string newemail){
    id  = newid;
    nama = newnama;
    pw = newpw;
    ktp = newktp;
    hp = newhp;
    email = newemail;
    }
    string getid(){
    return id;
    }
    string getnama(){
    return nama;
    }
    string getpw(){
    return pw;
    }
};
void login();
void reg();
void menu();
void stasiun();
int kelas();
void jam();
void garis();
void jenis();
char h, id[10], pw[8], nama[30], ktp[16], hp[13], tgl[20];
int a, k, j;
string email, s, t, asal, tujuan, jp, kel;
float harga, total, ho;
Akun *A= NULL;
Akun A1 = Akun("diahaufa", "Diah Aufa Arini", "123456", "1810631170194008", "085894745887", "diahaufaarini5@gmail.com");
Akun A2 = Akun("enohakimah","Eno Hakimah KD", "567890", "1810631170014", "085311207519", "enohakimah85@gmail.com");
Akun A3 = Akun("","","","","","");
main()
{
    a:
    garis();
    cout<<"\n\n\t=============== Selamat Datang di Keretaku.com ==============="<<endl;
    garis();
    cout<<"\n\n\n\t         Apakah Anda sudah memiliki akun? (Y/T) : "; cin>>h;
    switch(h)
    {
    case 'Y':
        login();
        break;
    case 'T':
        reg();
        break;
    default:
    cout<<"\n\n\t   (Maaf, huruf yang Anda masukkan salah! (Masukan Y atau T)";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
    getch();
    system("cls");
    goto a;
    }
}
void login()
{
    system ("cls");
    x:
    garis();
    cout<<"\n\n\t  =============== Selamat Datang di Keretaku.com ==============="<<endl;
    garis();
    cout<<"\n\n\n\n\t                         LOG IN DISINI!"<<endl<<endl<<endl;
    cout<<"\t\t       Masukkan ID Username dan Password"<<endl;
    cout<<"\t\t    --------------------------------------";
    cout<<"\n\t\t       ID Username   :  "; cin>>id;
    cout<<"\n\n\t\t       Password      :  "; cin>>pw;
    cout<<"\t\t    --------------------------------------";
    if (id==A1.id)
    {
        if (pw==A1.pw)
        {
            A=&A1;
            getch();
            menu();
        }
    else
        {
    cout<<"\n\n\n\n\t         (Maaf, ID Username atau Password Anda salah)";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
            getch();
            system("cls");
            goto x;
        }
    } else if (id==A2.id)
    {
        if (pw==A2.pw)
        {
            A=&A2;
            getch();
            menu();
        }
        else
        {
    cout<<"\n\n\n\n\t         (Maaf, ID Username atau Password Anda salah)";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
            getch();
            system("cls");
            goto x;
        }
    } else if (id==A3.id)
    {
        if (pw==A3.pw)
        {
            A=&A3;
            getch();
            menu();
        }
        else
        {
    cout<<"\n\n\n\n\t         (Maaf, ID Username atau Password Anda salah)";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
            getch();
            system("cls");
            goto x;
        }
        }
    else
        {
    cout<<"\n\n\n\n\t         (Maaf, ID Username atau Password Anda salah)";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
            getch();
            system("cls");
            goto x;
        }
}
void reg()
{
    system ("cls");
    garis();
    cout<<"\n\n\t  =============== Selamat Datang di Keretaku.com ==============="<<endl;
    garis();
    cout<<"\n\n\n\n\t                         REGISTRASI DISINI!"<<endl;
    cin.ignore();
    cout<<"\t   -------------------------------------------------------------";
    cout<<"\n\n\n\t    Nama Lengkap  : "; cin.getline(nama,30);
    cout<<"\n\t    Nomor KTP     : "; cin>>ktp;
    cout<<"\n\t    Nomor HP/Telp : "; cin>>hp;
    cout<<"\n\t    ID Username   : "; cin>>id;
    cout<<"\n\t    Password      : "; cin>>pw;
    A3.nama=nama;
    A3.ktp=ktp;
    A3.id=id;
    A3.hp=hp;
    A3.email=email;
    A3.pw=pw;
    system("cls");
    garis();
    cout<<"\n\n\t  =============== Selamat Datang di Keretaku.com ==============="<<endl;
    garis();
    cout<<endl<<endl<<endl<<endl;
    cout<<"\n\n\t ***Selamat! akun anda telah dibuat, silahkan login kembali***";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
    getch();
    login();
}
void menu()
{
    system("cls");
    cout<<"\n\n     === keretaku.com === keretaku.com === keretaku.com === keretaku.com ==="<<endl;
    garis();
    cout<<"\n\n\n\t Selamat Pagi, "<<A->getnama();
    cout<<"! "<<endl;
    cout<<"\t Mau berpergian kemana nih?"<<endl;
    cout<<"\n\n\n\n\t                         PESAN DIBAWAH INI!"<<endl;
    cin.ignore();
    cout<<"\t   -------------------------------------------------------------";
    cout<<"\n\n\t             Silahkan tekan enter untuk melanjutkan";
    getch();

    system("cls");
    cout<<"\n\n     === keretaku.com === keretaku.com === keretaku.com === keretaku.com ==="<<endl;
    garis();
    cout<<endl<<endl;
    cout<<"\n\n\n\n\t                         PESAN DISINI!"<<endl;
    cout<<"\t   -------------------------------------------------------------";
    cout<<"\n\n\n\t  Nama Pemesan\t : "; cin.getline(nama,30);
    cout<<"\n\t  Nomor KTP\t : "; cin>>ktp;
    cout<<"\n\t  Tanggal keberangkatan (format HHBBTT) : "; cin>>tgl;
    getch();
    system("cls");
    cout<<"\n\n     === keretaku.com === keretaku.com === keretaku.com === keretaku.com ==="<<endl;
    garis();
    cout<<endl<<endl;
    cout<<"\t   -------------------------------------------------------------";
    cout<<"\n\n\t                          STASIUN ANDA"<<endl<<endl;
    cin.ignore();
    cout<<"\t   -------------------------------------------------------------";

    cout<<"\n\n\t1.  STASIUN ASAL";
    stasiun();
    asal=s;
    getch();
    cout<<endl<<endl;
    cout<<"\n\n\t2. STASIUN TUJUAN";
    stasiun();
    tujuan=s;
    getch();

    system("cls");
    cout<<"\n\n     === keretaku.com === keretaku.com === keretaku.com === keretaku.com ==="<<endl;
    garis();
    cout<<endl<<endl;
    cout<<"\t   -------------------------------------------------------------";
    cout<<"\n\n\t                         JADWAL KEBERANGKATAN"<<endl<<endl;
    cin.ignore();
    cout<<"\t   -------------------------------------------------------------";
    jam();
    getch();

    system("cls");
    cout<<"\n\n     === keretaku.com === keretaku.com === keretaku.com === keretaku.com ==="<<endl;
    garis();
    cout<<endl<<endl<<endl;
    cout<<"\t   -------------------------------------------------------------";
    cout<<"\n\n\t                         KELAS KERETA"<<endl<<endl;
    cin.ignore();
    cout<<"\t   -------------------------------------------------------------";
    kelas();
    getch();

    system("cls");
    cout<<"\n\n     === keretaku.com === keretaku.com === keretaku.com === keretaku.com ==="<<endl;
    garis();
    cout<<endl<<endl;
    cout<<"\t   -------------------------------------------------------------";
    cout<<"\n\n\t                        JENIS PEMBAYARAN"<<endl<<endl;
    cin.ignore();
    cout<<"\t   -------------------------------------------------------------";
    jenis();
    getch();

    system("cls");
    cout<<"\n\n\n\n\t                         RINCIAN PEMESANAN"<<endl;
    cin.ignore();
    cout<<"\t   -------------------------------------------------------------";
    cout<<"\n\n\t    Nama Pemesan          :  "<<nama;
    cout<<"\n\n\t    No. KTP               :  "<<ktp;
    cout<<"\n\n\t    Tanggal Keberangkatan :  "<<tgl;
    cout<<"\n\n\t    Stasiun Awal          :  "<<asal;
    cout<<"\n\n\t    Stasiun Tujuan        :  "<<tujuan;
    cout<<"\n\n\t    Jadwal Keberangkatan  :  "<<t;
    cout<<"\n\n\t         Kelas / Jml Penumpang :  "<<kel<<" / "<<j;
    cout<<"\n\n\t         Harga per-orang       :  "<<harga;
    cout<<"\n\n\t         Jenis Pembayaran      :  "<<jp;
    cout<<"\n\n\t         Total                 :  "<<ho;
    cout<<"\n\t   -------------------------------------------------------------";

    cout<<"\n\n\n\n\t========================= Terima Kasih ==========================";
    getch();

    e:
    system("cls");
    cout<<"\n\n     === keretaku.com === keretaku.com === keretaku.com === keretaku.com ==="<<endl;
    garis();
    cout<<"\n\n\n\t         Apakah Anda sudah selesai? (Y/T)  :  "; cin>>h;
    switch(h)
    {
    case 'Y':
    cout<<"\n\n\t              Terima Kasih Atas Kepercayaan Anda!";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
    getch();
        login();
        break;
    case 'T':
        menu();
        break;

    default:
    cout<<"\n\n\t   (Maaf, huruf yang Anda masukkan salah! (Masukan Y atau T)";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
    getch();
    system("cls");
    goto e;
    }
}
void stasiun()
{
    mulai:
    cout<<endl<<endl;
    cout<<"\n\n\n\t                DAFTAR STASIUN KERETA API LOKAL"<<endl;
    cout<<"\t   -------------------------------------------------------------";
    cout<<endl<<endl;
    cout<<"\n\t       1. Stasiun Kemayoran          6.  Stasiun Kedunggedeh";
    cout<<"\n\t       2. Stasiun Pasar Senen        7.  Stasiun Karawang";
    cout<<"\n\t       3. Stasiun Tambun             8.  Stasiun Klari";
    cout<<"\n\t       4. Stasiun Cikarang           9.  Stasiun Kosambi";
    cout<<"\n\t       5. Stasiun Lemah Abang       10.  Stasiun Purwakarta";
    cout<<"\n\n\tPilihan anda (1-10)  : "; cin>>a;
     switch(a)
     {
     case 1:
        s="Stasiun Kemayoran";
        break;
     case 2:
        s="Stasiun Pasar Senen";
        break;
     case 3:
        s="Stasiun Tambun";
        break;
     case 4:
        s="Stasiun Cikarang";
        break;
     case 5:
        s="Stasiun Lemah Abang";
        break;
     case 6:
        s="Stasiun Kedunggedeh";
        break;
     case 7:
        s="Stasiun Karawang";
        break;
     case 8:
        s="Stasiun Klari";
        break;
     case 9:
        s="Stasiun Kosambi";
        break;
     case 10:
        s="Stasiun Purwakarta";
        break;
     default:
        cout<<"\n\n\t   (Maaf, pilihan anda tidak terdaftar. silahkan pilih 1-10.";
        cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
        getch();
        system("cls");
        goto mulai;
     }
    cout<<"\n\tStasiun    :  "<<s;
}
void jam()
{
     mulai:
     cout<<endl<<endl;
     cout<<"\n\n\n\t                    JADWAL KEBERANGKATAN KERETA "<<endl;
     cout<<"\t   -------------------------------------------------------------";
     cout<<endl<<endl;
     cout<<"\t\t                1. 07:00  WIB";
     cout<<"\n\n\t\t                2. 09:00  WIB";
     cout<<"\n\n\t\t                3. 13:00  WIB";
     cout<<"\n\n\t\t                4. 15:00  WIB";
     cout<<"\n\n\t\t                5. 20:00  WIB";
     cout<<"\n\n\n\tPilihan anda (1-5)  : "; cin>>a;
     switch (a)
     {
     case 1:
        t="Pukul 07:00";
        break;
     case 2:
        t="Pukul 09:00";
        break;
     case 3:
        t="Pukul 13:00";
        break;
     case 4:
        t="Pukul 15:00";
        break;
     case 5:
        t="Pukul 20:00";
        break;
     default:
        cout<<"\n\n\t   (Maaf, pilihan anda tidak terdaftar. silahkan pilih 1-5.";
        cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
        getch();
        system("cls");
        goto mulai;
     }
    cout<<"\n\tJam Keberangkatan   : "<<t<<" WIB";
}
int kelas()
{
    cout<<endl<<endl;
    cout<<"\n\n\n\t                    DAFTAR KELAS YANG TERSEDIA"<<endl;
    cout<<"\t   -------------------------------------------------------------";
    cout<<endl<<endl;

    cout<<"\t\t               1. Ekonomi\n\t\t                  Harga : Rp. 6.000,-/orang";
    cout<<"\n\n\t\t               2. Bisnis\n\t\t                  Harga : Rp. 12.000,-/orang";
    cout<<"\n\n\t\t               3. Eksekutif\n\t\t                  Harga : Rp. 18.000,-/orang";
    cout<<"\n\n\n\n\t  Pilihan Anda (1-3)        : "; cin>>k;
    cout<<"\n\t  Tentukan Jumlah Penumpang : "; cin>>j;
    switch (k)
    {
    case 1:
        kel="Ekonomi";
        harga=6000;
        break;
    case 2:
        kel="Bisnis";
        harga=12000;
        break;
    case 3:
        kel="Eksekutif";
        harga=18000;
        break;
    default:
        cout<<"\n\n\t   (Maaf, pilihan anda tidak terdaftar. silahkan pilih 1-5.";
        cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
        getch();
        system("cls");
        kelas();
    }
    cout<<"\n\n\t\tRincian   :";
    cout<<"\n\n\t\tKelas "<<kel<<"\n\t\tHarga Rp. "<<harga<<",-/orang"<<endl;
    ho=harga*j;
    cout<<"\t   -------------------------------------------------------------";
    cout<<"\n\t\t\t           Total : Rp. "<<ho<<",-"<<endl;
    return (ho);
}
void jenis()
{
    cout<<endl<<endl;
    cout<<"\n\n\n\t                 Jenis Pembayaran yang Tersedia :"<<endl;
    cout<<"\t   -------------------------------------------------------------";
    cout<<endl<<endl;
    cout<<"\n\t\t               1. Alfamart";
    cout<<"\n\n\t\t               2. Indomart";
    cout<<"\n\n\t\t               3. LinkAja";
    cout<<"\n\n\n\n\tPilihan Anda (1-3)    : "; cin>>a;
    switch (a)
    {
    case 1:
        jp="Alfamart";
        break;
    case 2:
        jp="Indomart";
        break;
    case 3:
        jp="LinkAja";
        break;
    default:
        cout<<"\n\n\t   (Maaf, pilihan anda tidak terdaftar. silahkan pilih 1-5.";
        cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
        getch();
        system("cls");
        jenis();
    }
    cout<<"\n\tJenis Pembayaran      : "<<jp;
    if (a!=3)
    {
        total=ho+(ho/10);
    }
    getch();
}

void garis()
{
    cout<<"\n................................................................................";
}
