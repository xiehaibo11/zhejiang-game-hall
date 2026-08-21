package org.bouncycastle.crypto.io;

public class DigestInputStream extends java.io.FilterInputStream {
    protected org.bouncycastle.crypto.Digest digest;

    public DigestInputStream(java.io.InputStream r1, org.bouncycastle.crypto.Digest r2) {
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
    public int read() throws java.io.IOException {
            r3 = this;
            java.io.InputStream r0 = r3.in
            int r0 = r0.read()
            if (r0 < 0) goto Le
            org.bouncycastle.crypto.Digest r1 = r3.digest
            byte r2 = (byte) r0
            r1.update(r2)
        Le:
            return r0
    }

    @Override
    public int read(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            java.io.InputStream r0 = r1.in
            int r4 = r0.read(r2, r3, r4)
            if (r4 <= 0) goto Ld
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.update(r2, r3, r4)
        Ld:
            return r4
    }
}
