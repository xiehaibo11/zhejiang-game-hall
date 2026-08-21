package org.bouncycastle.util.encoders;

public interface Translator {
    int decode(byte[] r1, int r2, int r3, byte[] r4, int r5);

    int encode(byte[] r1, int r2, int r3, byte[] r4, int r5);

    int getDecodedBlockSize();

    int getEncodedBlockSize();
}
