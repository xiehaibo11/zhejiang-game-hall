package org.bouncycastle.crypto.tls;

public class TlsOuputStream extends java.io.OutputStream {
    private byte[] buf;
    private org.bouncycastle.crypto.tls.TlsProtocolHandler handler;

    TlsOuputStream(org.bouncycastle.crypto.tls.TlsProtocolHandler r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            byte[] r0 = new byte[r0]
            r1.buf = r0
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

    public void cose() throws java.io.IOException {
            r1 = this;
            org.bouncycastle.crypto.tls.TlsProtocolHandler r0 = r1.handler
            r0.close()
            return
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            org.bouncycastle.crypto.tls.TlsProtocolHandler r0 = r1.handler
            r0.flush()
            return
    }

    @Override
    public void write(int r3) throws java.io.IOException {
            r2 = this;
            byte[] r0 = r2.buf
            byte r3 = (byte) r3
            r1 = 0
            r0[r1] = r3
            r3 = 1
            r2.write(r0, r1, r3)
            return
    }

    @Override
    public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            org.bouncycastle.crypto.tls.TlsProtocolHandler r0 = r1.handler
            r0.writeData(r2, r3, r4)
            return
    }
}
