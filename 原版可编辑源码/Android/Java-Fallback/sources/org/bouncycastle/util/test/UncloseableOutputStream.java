package org.bouncycastle.util.test;

public class UncloseableOutputStream extends java.io.FilterOutputStream {
    public UncloseableOutputStream(java.io.OutputStream r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public void close() {
            r2 = this;
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "close() called on UncloseableOutputStream"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            java.io.OutputStream r0 = r1.out
            r0.write(r2, r3, r4)
            return
    }
}
