package org.apache.commons.codec.binary;

public class Base32OutputStream extends org.apache.commons.codec.binary.BaseNCodecOutputStream {
    public Base32OutputStream(java.io.OutputStream r2) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r0)
            return
    }

    public Base32OutputStream(java.io.OutputStream r3, boolean r4) {
            r2 = this;
            org.apache.commons.codec.binary.Base32 r0 = new org.apache.commons.codec.binary.Base32
            r1 = 0
            r0.<init>(r1)
            r2.<init>(r3, r0, r4)
            return
    }

    public Base32OutputStream(java.io.OutputStream r2, boolean r3, int r4, byte[] r5) {
            r1 = this;
            org.apache.commons.codec.binary.Base32 r0 = new org.apache.commons.codec.binary.Base32
            r0.<init>(r4, r5)
            r1.<init>(r2, r0, r3)
            return
    }
}
