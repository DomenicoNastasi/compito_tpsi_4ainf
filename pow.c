int potenza(int base, int esponente){
    printf("inserisci la base");
    scanf("%d",&base);
    printf("inserisci l'esponente");
    scanf("%d",&esponente);
    int risultato=1;
    for(i=0;i<esponente;i++){
        risultato *=base;
       
    }
    return risultato;
}