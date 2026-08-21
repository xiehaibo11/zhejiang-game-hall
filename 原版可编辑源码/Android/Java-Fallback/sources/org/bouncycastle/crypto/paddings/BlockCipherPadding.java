package org.bouncycastle.crypto.paddings;

public interface BlockCipherPadding {
    int addPadding(byte[] r1, int r2);

    java.lang.String getPaddingName();

    void init(java.security.SecureRandom r1) throws java.lang.IllegalArgumentException;

    int padCount(byte[] r1) throws org.bouncycastle.crypto.InvalidCipherTextException;
}
