#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

struct infoDataDaerah {
    string nama;
    string ibukota;
    string bupati;
    int luas;
    int populasi ;
};

typedef struct elmRelasiDaerah *adrRelasiDaerah;
typedef struct elmDataDaerah *adrDataDaerah;

struct elmDataDaerah1 {
    infoDataDaerah info;
    adrDataDaerah next;
    adrDataDaerah nextToRelasi;
    adrDataDaerah prev;
    adrRelasiDaerah nextToPotensi;
};

struct elmDataDaerah2 {
    infoDataDaerah info;
    adrDataDaerah nextToRelasi;
    adrDataDaerah nextToRelasi;
    nextToRelasi nextToRelasi;
};

struct ListDataDaerah {
    adrDataDaerah first;
    adrDataDaerah last;
};

struct infoRelasiDaerah {
    string potensi
};

struct elmRelasiDaerah {
    infoRelasiDaerah info;
    adrDataDaerah next;
};

struct ListRelasiDaerah {
    adrDataDaerah first;
};
// A. Penambahan Data Daerah
void createListDataDaerah (ListDataDaerah &L1);
void alokNamaDaerah(adrDataDaerah &P1, infoDataDaerah nama);
void alokIbukotaDaerah(adrDataDaerah &P1, infoDataDaerah ibukota);
void alokBupatiDaerah(adrDataDaerah &P1, infoDataDaerah bupati);
void alokLuasDaerah(adrDataDaerah &P1, infoDataDaerah Luas);
void alokPopulasiDaerah(adrDataDaerah &P1, infoDataDaerah populasi);

//B. Penambahan Data potensi
void createListPotensi(ListRelasiDaerah &L2);
void alokPotensi(adrRelasiDaerah &P2,infoRelasiDaerah potensi);


//C. Penentuan Relasi daerah dan potensi
void addRelasiDaerah(ListRelasiDaerah &L2, adrRelasiDaerah X2);

//D. Menhapus data daerah tertentu
//void delDataDaerah(ListDataDaerah &L1, infoDataDaerah searchWord1);
void DelDaerah(ListDataDaerah &L,infoDataDaerah info);


//E. Menghapus data potensi tertentu
//void delDataPotensi(ListDataDaerah &L1, ListRelasiDaerah &L2, infoRelasiDaerah searchWord2);
void delPotensi(ListDataDaerah &L,infoDataDaerah info);


//F. Menampilkan data keseluruhan daerah beserta potensi unggulanya
void printAll(ListDataDaerah L1, ListRelasiDaerah L2);

//G. Menampilkan data daerah yang memiliki potensi tertentu
void printDaerah();

//H. menampilkan data potensi yang dimiliki oleh suatu daerah tertentu
void printPotensi();

//I. Menampilkan data daerah yang paling kaya dan miskin
void maxPotensi(ListDataDaerah L1, ListRelasiDaerah L2);
void minPotensi(ListDataDaerah L1,ListRelasiDaerah L2);


#endif // HEAD_H_INCLUDED
