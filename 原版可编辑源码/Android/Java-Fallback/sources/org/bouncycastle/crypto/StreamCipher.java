package org.bouncycastle.crypto;

public interface StreamCipher {
    java.lang.String getAlgorithmName();

    void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2) throws java.lang.IllegalArgumentException;

    void processBytes(byte[] r1, int r2, int r3, byte[] r4, int r5) throws org.bouncycastle.crypto.DataLengthException;

    void reset();

    byte returnByte(byte r1);
}
