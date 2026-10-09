class BitManipulation {
public:
    static long long getBit(long long n, int k) {
        return (n >> k) & 1LL;
    }

    static long long setBit(long long n, int k) {
        return n | (1LL << k);
    }

    static long long clearBit(long long n, int k) {
        return n & ~(1LL << k);
    }

    static long long toggleBit(long long n, int k) {
        return n ^ (1LL << k);
    }
};