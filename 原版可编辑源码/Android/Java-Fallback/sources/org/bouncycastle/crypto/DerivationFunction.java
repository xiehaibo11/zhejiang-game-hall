package org.bouncycastle.crypto;

public interface DerivationFunction {
    int generateBytes(byte[] r1, int r2, int r3) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalArgumentException;

    org.bouncycastle.crypto.Digest getDigest();

    void init(org.bouncycastle.crypto.DerivationParameters r1);
}
