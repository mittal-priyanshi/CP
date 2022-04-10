bool IsPowerOfTwo(long long x)
{
    return (x != 0) && ((x & (x - 1)) == 0);
}
