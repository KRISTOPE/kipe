void dolar()
{
    float rupiah, dolar;
    
    printf("Masukan Jumlah rupiah : ");
    scanf("%f",&rupiah);
    dolar = rupiah/15845;
    printf ("\t nilai konversi rupiah ke dolar adalah : $ %f\n, dolar");
    
}

void rupiah()
{
    float rupiah, dolar;
    printf("Masukan Jumlah dolar : ");
    scanf("%f",&dolar);
    rupiah = dolar*15845;
    printf ("\t nilai konversi rupiah ke dolar adalah : RP %f\n, rupiah");
    
}
