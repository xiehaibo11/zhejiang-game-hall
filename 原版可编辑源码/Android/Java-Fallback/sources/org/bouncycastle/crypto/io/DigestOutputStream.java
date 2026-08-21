package org.bouncycastle.crypto.io;

public class DigestOutputStream extends java.io.FilterOutputStream {
    protected org.bouncycastle.crypto.Digest digest;

    public DigestOutputStream(java.io.OutputStream r1, org.bouncycastle.crypto.Digest r2) {
            r0 = this;
            r0.<init>(r1)
            r0.digest = r2
            return
    }

    public org.bouncycastle.crypto.Digest getDigest() {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            return r0
    }

    @Override
    public void write(int r3) throws java.io.IOException {
            r2 = this;
            org.bouncycastle.crypto.Digest r0 = r2.digest
            byte r1 = (byte) r3
            r0.update(r1)
            java.io.OutputStream r0 = r2.out
            r0.write(r3)
            return
    }

    @Override
    public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.update(r2, r3, r4)
            java.io.OutputStream r0 = r1.out
            r0.write(r2, r3, r4)
            return
    }
}
