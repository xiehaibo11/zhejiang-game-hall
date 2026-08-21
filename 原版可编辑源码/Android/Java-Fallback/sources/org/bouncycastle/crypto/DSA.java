package org.bouncycastle.crypto;

public interface DSA {
    java.math.BigInteger[] generateSignature(byte[] r1);

    void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2);

    boolean verifySignature(byte[] r1, java.math.BigInteger r2, java.math.BigInteger r3);
}
