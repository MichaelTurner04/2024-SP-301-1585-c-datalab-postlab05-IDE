unsigned long factorial(unsigned long n)
{
    if(n < 2)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

unsigned long combination(unsigned long n, unsigned long m)
{   
    
    return factorial(n)/(factorial(m)* factorial(n-m));
}
