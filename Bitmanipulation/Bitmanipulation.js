class BitManipulation {
    static getBit(n, k) {
        return (n >> BigInt(k)) & 1n;
    }

    static setBit(n, k) {
        return n | (1n << BigInt(k));
    }

    static clearBit(n, k) {
        return n & ~(1n << BigInt(k));
    }

    static toggleBit(n, k) {
        return n ^ (1n << BigInt(k));
    }
}