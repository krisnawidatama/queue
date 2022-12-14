#include <iostream>
using namespace std;

int cek = 0;
int data_antrian[4];
int main()
{
    int data, hapus;
    int pil;

    cout<<"1. Tambah Antrian"<<endl;
    cout<<"2. Hapus Antrian"<<endl;
    cout<<"3. Lihat Antrian"<<endl;
    cout<<"4. Keluar"<<endl;
    cout<<"Silahkan masukkan pilihan anda : ";
    cin>>pil;
    switch(pil){
        case 1:
            if(cek==4){
                cout<<"Antrian Penuh\n";
                cout<<"\n\n--------------\n";
            }else{
                cout<<"Masukkan nilai = ";
                cin>>data;
                data_antrian[cek]=data;
                cek++;
                cout<<"\n\n--------------\n";
                main();
            }
            break;
        case 2:
            if(cek==0){
                cout<<"Antrian kosong "<<cek;
                cout<<"\n\n--------------\n";
            }else{
                hapus=data_antrian[0];
                for(int a=0; a<cek; a++){
                    data_antrian[a]=data_antrian[a+1];
                }
                cek--;
                cout<<"Data dengan nilai "<<hapus<<" terhapus";
                cout<<"\n\n--------------\n";
                main();
            }
        case 3:
            if(cek==0){
                cout<<"Antrian Kosong";
                cout<<"\n\n--------------\n";
            }else{
                cout<<endl;
                for(int b=0; b<cek; b++)
                {
                    cout<<" | ";
                    cout<<" "<<data_antrian[b];
                    cout<<" | ";
                }
                cout<<"\n\n--------------\n";
                main();
            }
        case 4:
            exit(0);
            break;
        default:
            cout<<"Pilihan Tidak Ada"<<endl;
            cout<<"\n\n--------------\n";
            break;
    }
}
