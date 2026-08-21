package org.bouncycastle.crypto;

public interface Wrapper {
    java.lang.String getAlgorithmName();

    void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2);

    byte[] unwrap(byte[] r1, int r2, int r3) throws org.bouncycastle.crypto.InvalidCipherTextException;

    byte[] wrap(byte[] r1, int r2, int r3);
}
