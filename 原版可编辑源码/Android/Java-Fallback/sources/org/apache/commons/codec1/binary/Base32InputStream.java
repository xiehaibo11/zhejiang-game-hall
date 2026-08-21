package org.apache.commons.codec1.binary;

public class Base32InputStream extends org.apache.commons.codec1.binary.BaseNCodecInputStream {
    public Base32InputStream(java.io.InputStream r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public Base32InputStream(java.io.InputStream r3, boolean r4) {
            r2 = this;
            org.apache.commons.codec1.binary.Base32 r0 = new org.apache.commons.codec1.binary.Base32
            r1 = 0
            r0.<init>(r1)
            r2.<init>(r3, r0, r4)
            return
    }

    public Base32InputStream(java.io.InputStream r2, boolean r3, int r4, byte[] r5) {
            r1 = this;
            org.apache.commons.codec1.binary.Base32 r0 = new org.apache.commons.codec1.binary.Base32
            r0.<init>(r4, r5)
            r1.<init>(r2, r0, r3)
            return
    }
}
