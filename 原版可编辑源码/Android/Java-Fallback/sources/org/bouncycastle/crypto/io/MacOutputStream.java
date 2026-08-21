package org.bouncycastle.crypto.io;

public class MacOutputStream extends java.io.FilterOutputStream {
    protected org.bouncycastle.crypto.Mac mac;

    public MacOutputStream(java.io.OutputStream r1, org.bouncycastle.crypto.Mac r2) {
            r0 = this;
            r0.<init>(r1)
            r0.mac = r2
            return
    }

    public org.bouncycastle.crypto.Mac getMac() {
            r1 = this;
            org.bouncycastle.crypto.Mac r0 = r1.mac
            return r0
    }

    @Override
    public void write(int r3) throws java.io.IOException {
            r2 = this;
            org.bouncycastle.crypto.Mac r0 = r2.mac
            byte r1 = (byte) r3
            r0.update(r1)
            java.io.OutputStream r0 = r2.out
            r0.write(r3)
            return
    }

    @Override
    public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            org.bouncycastle.crypto.Mac r0 = r1.mac
            r0.update(r2, r3, r4)
            java.io.OutputStream r0 = r1.out
            r0.write(r2, r3, r4)
            return
    }
}
