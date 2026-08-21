package org.bouncycastle.crypto;

public interface AsymmetricBlockCipher {
    int getInputBlockSize();

    int getOutputBlockSize();

    void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2);

    byte[] processBlock(byte[] r1, int r2, int r3) throws org.bouncycastle.crypto.InvalidCipherTextException;
}
