long long modpow (long long a, long long n, long long MOD) 
  {                                
      long long res = 1LL; 
      a=a%MOD;
       while (n) 
        {
           if (n & 1)
                  res =(res* a)%MOD;
             a =(a* a)%MOD;
             n >>= 1;
         }
   return res;
  }
