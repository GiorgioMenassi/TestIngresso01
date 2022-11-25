#include<stdio.h>
#include<string.h>
#define N 30
//ho creato delle struct per delineare la struttura dell'azienda
//e le caratteristiche del prodotto
typedef struct{
    char nome[N];
    int prezzo;
    int quantita;
    int condizioneprod1;
    int condizioneprod2;
    int condizioneprezzo;
    float scontoprod1;
    float scontoprod2;
    float scontoprezzo;
    int giorniconsegna;
}prodotto;

typedef struct{
    char nome[N];
    int numprod;
    prodotto prod[N];
    char mese[N];
    float sconto;
}azienda;

int main(){
    azienda aziende[3];
    int n,i,k,j,giornivet[3];
    char c[N],mese[N];
    float prezzovet[3],prezzo;
    //ho inizializzato le varie aziende
    strcpy(aziende[0].nome,"1");
    aziende[0].numprod=3;
    strcpy(aziende[0].mese,"no");
    aziende[0].sconto=0;
    strcpy(aziende[0].prod[0].nome,"telefono");
    aziende[0].prod[0].prezzo=100;
    aziende[0].prod[0].condizioneprod1=8;
    aziende[0].prod[0].condizioneprod2=0;
    aziende[0].prod[0].condizioneprezzo=0;
    aziende[0].prod[0].scontoprod1=0.05;
    aziende[0].prod[0].scontoprod2=0;
    aziende[0].prod[0].scontoprezzo=0;
    aziende[0].prod[0].giorniconsegna=7;
    aziende[0].prod[0].quantita=10;
    strcpy(aziende[0].prod[1].nome,"monitor");
    aziende[0].prod[1].prezzo=120;
    aziende[0].prod[1].condizioneprod1=0;
    aziende[0].prod[1].condizioneprod2=0;
    aziende[0].prod[1].condizioneprezzo=1000;
    aziende[0].prod[1].scontoprod1=0;
    aziende[0].prod[1].scontoprod2=0;
    aziende[0].prod[1].scontoprezzo=0.05;
    aziende[0].prod[1].giorniconsegna=5;
    aziende[0].prod[1].quantita=8;
    strcpy(aziende[0].prod[2].nome,"computer");
    aziende[0].prod[2].prezzo=95;
    aziende[0].prod[2].condizioneprod1=5;
    aziende[0].prod[2].condizioneprod2=10;
    aziende[0].prod[2].condizioneprezzo=0;
    aziende[0].prod[2].scontoprod1=0.03;
    aziende[0].prod[2].scontoprod2=0.05;
    aziende[0].prod[2].scontoprezzo=0;
    aziende[0].prod[2].giorniconsegna=5;
    aziende[0].prod[2].quantita=12;

    strcpy(aziende[1].nome,"2");
    aziende[1].numprod=4;
    strcpy(aziende[1].mese,"no");
    aziende[1].sconto=0;
    strcpy(aziende[1].prod[0].nome,"telefono");
    aziende[1].prod[0].prezzo=105;
    aziende[1].prod[0].condizioneprod1=0;
    aziende[1].prod[0].condizioneprod2=0;
    aziende[1].prod[0].condizioneprezzo=800;
    aziende[1].prod[0].scontoprod1=0;
    aziende[1].prod[0].scontoprod2=0;
    aziende[1].prod[0].scontoprezzo=0.07;
    aziende[1].prod[0].giorniconsegna=7;
    aziende[1].prod[0].quantita=11;
    strcpy(aziende[1].prod[1].nome,"monitor");
    aziende[1].prod[1].prezzo=128;
    aziende[1].prod[1].condizioneprod1=5;
    aziende[1].prod[1].condizioneprod2=10;
    aziende[1].prod[1].condizioneprezzo=0;
    aziende[1].prod[1].scontoprod1=0.03;
    aziende[1].prod[1].scontoprod2=0.05;
    aziende[1].prod[1].scontoprezzo=0;
    aziende[1].prod[1].giorniconsegna=7;
    aziende[1].prod[1].quantita=15;
    strcpy(aziende[1].prod[2].nome,"computer");
    aziende[1].prod[2].prezzo=90;
    aziende[1].prod[2].condizioneprod1=10;
    aziende[1].prod[2].condizioneprod2=0;
    aziende[1].prod[2].condizioneprezzo=0;
    aziende[1].prod[2].scontoprod1=0.07;
    aziende[1].prod[2].scontoprod2=0;
    aziende[1].prod[2].scontoprezzo=0;
    aziende[1].prod[2].giorniconsegna=10;
    aziende[1].prod[2].quantita=8;
    strcpy(aziende[1].prod[3].nome,"tablet");
    aziende[1].prod[3].prezzo=150;
    aziende[1].prod[3].condizioneprod1=8;
    aziende[1].prod[3].condizioneprod2=0;
    aziende[1].prod[3].condizioneprezzo=0;
    aziende[1].prod[3].scontoprod1=0.08;
    aziende[1].prod[3].scontoprod2=0;
    aziende[1].prod[3].scontoprezzo=0;
    aziende[1].prod[3].giorniconsegna=8;
    aziende[1].prod[3].quantita=15;

    strcpy(aziende[2].nome,"3");
    aziende[2].numprod=3;
    strcpy(aziende[2].mese,"settembre");
    aziende[2].sconto=0.02;
    strcpy(aziende[2].prod[0].nome,"telefono");
    aziende[2].prod[0].prezzo=100;
    aziende[2].prod[0].condizioneprod1=0;
    aziende[2].prod[0].condizioneprod2=0;
    aziende[2].prod[0].condizioneprezzo=800;
    aziende[2].prod[0].scontoprod1=0;
    aziende[2].prod[0].scontoprod2=0;
    aziende[2].prod[0].scontoprezzo=0.05;
    aziende[2].prod[0].giorniconsegna=5;
    aziende[2].prod[0].quantita=9;
    strcpy(aziende[2].prod[1].nome,"monitor");
    aziende[2].prod[1].prezzo=129;
    aziende[2].prod[1].condizioneprod1=0;
    aziende[2].prod[1].condizioneprod2=0;
    aziende[2].prod[1].condizioneprezzo=1000;
    aziende[2].prod[1].scontoprod1=0;
    aziende[2].prod[1].scontoprod2=0;
    aziende[2].prod[1].scontoprezzo=0.05;
    aziende[2].prod[1].giorniconsegna=4;
    aziende[2].prod[1].quantita=23;
    strcpy(aziende[2].prod[2].nome,"computer");
    aziende[2].prod[2].prezzo=95;
    aziende[2].prod[2].condizioneprod1=5;
    aziende[2].prod[2].condizioneprod2=0;
    aziende[2].prod[2].condizioneprezzo=0;
    aziende[2].prod[2].scontoprod1=0.05;
    aziende[2].prod[2].scontoprod2=0;
    aziende[2].prod[2].scontoprezzo=0;
    aziende[2].prod[2].giorniconsegna=7;
    aziende[2].prod[2].quantita=13;

    printf("SI PREGA DI SCRIVERE TUTTO IN MINUSCOLO\n");
    printf("inserire il nome del prodotto: ");
    scanf("%s",c);
    printf("inserire la quantita' richiesta: ");
    scanf("%d",&n);
    printf("inserire il mese corrente: ");
    scanf("%s",mese);
    //scorro il vettore
    i=3;
    for(k=0;k<i;k++){
        j=0;
        prezzo=0;
        //cerco il prodotto e valuto se sono applicabili gli sconti
        while(j< aziende[k].numprod){
            if(strcmp(c,aziende[k].prod[j].nome)==0){
                if(aziende[k].prod[j].quantita<n){
                    prezzovet[k]=0;
                }else{
                prezzo=n*aziende[k].prod[j].prezzo;
                giornivet[k]=aziende[k].prod[j].giorniconsegna;
                if(aziende[k].prod[j].condizioneprod1<=n){
                    if(aziende[k].prod[j].condizioneprod2<=n){
                        prezzo=prezzo*(1-aziende[k].prod[j].scontoprod2);
                    }else{
                        prezzo=prezzo*(1-aziende[k].prod[j].scontoprod1);
                    }
                }
                if(aziende[k].prod[j].condizioneprezzo<=prezzo){
                    prezzo=prezzo*(1-aziende[k].prod[j].scontoprezzo);
                }
                if (strcmp(mese,aziende[k].mese)==0)
                    prezzo=prezzo*(1-aziende[k].sconto);
                prezzovet[k]=prezzo;
                }
            }
            j++;
        }
    }
    prezzo=0;
    j=0;
    //cerco il prezzo migliore tra gli offerenti
    while(j<i){
        if(prezzovet[j]!=0){
            if(prezzo==0){
                prezzo=prezzovet[j];
                k=j;
            }else{
                if(prezzovet[j]<prezzo){
                    prezzo=prezzovet[j];
                    k=j;
                }
            }
        }
        j++;
    }
    for(j=0;j<i;j++){
        if(prezzovet[j]!=0){
            printf("Puoi ordinare dall'azienda %d al prezzo di %f; il tuo ordine verra' consegnato in %d giorni\n",j+1,prezzovet[j],giornivet[j]);
        }
    }
    if(prezzo==0){
        printf("\nIl prodotto o la quantita' richiesta non e' disponibile in nessuna azienda");
    }else{
        printf("\n\nL'azienda migliore da cui comprare e' la numero %d al prezzo di %f.\n Il tuo prodotto arrivera' in %d giorni",k+1,prezzo,giornivet[k]);
    }
    return 0;
}
