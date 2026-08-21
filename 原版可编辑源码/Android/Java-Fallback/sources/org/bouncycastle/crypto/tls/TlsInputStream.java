package org.bouncycastle.crypto.tls;

public class TlsInputStream extends java.io.InputStream {
    private byte[] buf;
    private org.bouncycastle.crypto.tls.TlsProtocolHandler handler;

    TlsInputStream(org.bouncycastle.crypto.tls.TlsProtocolHandler r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            byte[] r0 = new byte[r0]
            r1.buf = r0
            r0 = 0
            r1.handler = r0
            r1.handler = r2
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            org.bouncycastle.crypto.tls.TlsProtocolHandler r0 = r1.handler
            r0.close()
            return
    }

    @Override
    public int read() throws java.io.IOException {
            r2 = this;
            byte[] r0 = r2.buf
            int r0 = r2.read(r0)
            if (r0 >= 0) goto La
            r0 = -1
            return r0
        La:
            byte[] r0 = r2.buf
            r1 = 0
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            return r0
    }

    @Override
    public int read(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            org.bouncycastle.crypto.tls.TlsProtocolHandler r0 = r1.handler
            int r2 = r0.readApplicationData(r2, r3, r4)
            return r2
    }
}
