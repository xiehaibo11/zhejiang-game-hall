package org.bouncycastle.util.encoders;

public interface Encoder {
    int decode(java.lang.String r1, java.io.OutputStream r2) throws java.io.IOException;

    int decode(byte[] r1, int r2, int r3, java.io.OutputStream r4) throws java.io.IOException;

    int encode(byte[] r1, int r2, int r3, java.io.OutputStream r4) throws java.io.IOException;
}
