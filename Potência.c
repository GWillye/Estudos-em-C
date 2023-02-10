int main()
{
    int a, b, r = 0;
    scanf("%i", &a);
    scanf("%i", &b);
    
    
    //Potencia 
    r = a;
    for(int cont = 1; cont < b; cont++)
    {
        r *= a; 
    }
    printf("%i", r);
    
    return 0;
}

