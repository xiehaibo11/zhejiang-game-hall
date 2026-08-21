package org.bouncycastle.crypto.modes;

public interface AEADBlockCipher {
    int doFinal(byte[] r1, int r2) throws java.lang.IllegalStateException, org.bouncycastle.crypto.InvalidCipherTextException;

    java.lang.String getAlgorithmName();

    byte[] getMac();

    int getOutputSize(int r1);

    org.bouncycastle.crypto.BlockCipher getUnderlyingCipher();

    int getUpdateOutputSize(int r1);

    void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2) throws java.lang.IllegalArgumentException;

    int processByte(byte r1, byte[] r2, int r3) throws org.bouncycastle.crypto.DataLengthException;

    int processBytes(byte[] r1, int r2, int r3, byte[] r4, int r5) throws org.bouncycastle.crypto.DataLengthException;

    void reset();
}
