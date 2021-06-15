#include <iostream>
#include "Head.h"

using namespace std;

void createListDataDaerah(ListDataDaerah &L1){
    L1.first=NULL;
}

void createListPotensi(ListRelasiDaerah &L2){
    L2.first= NULL;
}

void DelDaerah(ListDataDaerah &L,infoDataDaerah info){
    adrDataDaerah L,K;
    L= L1.first;
    while (L->info != infoDataDaerah && L != NUll){
       L= L1->next;
    }
    if (L !=NULL){
        if(L== L1.first){
            L1.first = L->next;
            L->Next = NULL;
        }else{
            K=L1.first;
        while(K->next != L){
            K=K->next;
        }
        K->next = L->next;
        P->next = NULL;
    }
}
}

void delPotensi(ListDataDaerah &L,infoDataDaerah info){

}

void addRelasiDaerah(ListRelasiDaerah &L,adrRelasiDaerah X2){
    adrDataDaerah T,Y;
    T=L.first;
    while (T->info != infoDataDaerah && T!= NULL){
        T= T->nextToRelasi;
    }
    Y = L2.first;
    while(Y->infoDataDaerah != nama_ibukota && Y !=NULL ){
      w = W->nextToRelasi;
    }
}

