package org.bouncycastle.crypto;

public interface Mac {
    int doFinal(byte[] r1, int r2) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException;

    java.lang.String getAlgorithmName();

    int getMacSize();

    void init(org.bouncycastle.crypto.CipherParameters r1) throws java.lang.IllegalArgumentException;

    void reset();

    void update(byte r1) throws java.lang.IllegalStateException;

    void update(byte[] r1, int r2, int r3) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException;
}
