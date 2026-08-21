package org.bouncycastle.crypto;

public interface Digest {
    int doFinal(byte[] r1, int r2);

    java.lang.String getAlgorithmName();

    int getDigestSize();

    void reset();

    void update(byte r1);

    void update(byte[] r1, int r2, int r3);
}
