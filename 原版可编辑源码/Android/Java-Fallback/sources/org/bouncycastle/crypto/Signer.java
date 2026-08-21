package org.bouncycastle.crypto;

public interface Signer {
    byte[] generateSignature() throws org.bouncycastle.crypto.CryptoException, org.bouncycastle.crypto.DataLengthException;

    void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2);

    void reset();

    void update(byte r1);

    void update(byte[] r1, int r2, int r3);

    boolean verifySignature(byte[] r1);
}
