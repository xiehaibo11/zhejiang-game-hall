package org.bouncycastle.crypto;

public interface BlockCipher {
    java.lang.String getAlgorithmName();

    int getBlockSize();

    void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2) throws java.lang.IllegalArgumentException;

    int processBlock(byte[] r1, int r2, byte[] r3, int r4) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException;

    void reset();
}
