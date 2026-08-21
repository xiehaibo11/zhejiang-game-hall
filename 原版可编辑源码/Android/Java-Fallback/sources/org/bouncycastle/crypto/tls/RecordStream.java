package org.bouncycastle.crypto.tls;

public class RecordStream {
    private org.bouncycastle.crypto.tls.TlsProtocolHandler handler;
    protected org.bouncycastle.crypto.tls.CombinedHash hash1;
    protected org.bouncycastle.crypto.tls.CombinedHash hash2;
    private java.io.InputStream is;
    private java.io.OutputStream os;
    protected org.bouncycastle.crypto.tls.TlsCipherSuite readSuite;
    protected org.bouncycastle.crypto.tls.TlsCipherSuite writeSuite;

    protected RecordStream(org.bouncycastle.crypto.tls.TlsProtocolHandler r2, java.io.InputStream r3, java.io.OutputStream r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.readSuite = r0
            r1.writeSuite = r0
            r1.handler = r2
            r1.is = r3
            r1.os = r4
            org.bouncycastle.crypto.tls.CombinedHash r2 = new org.bouncycastle.crypto.tls.CombinedHash
            r2.<init>()
            r1.hash1 = r2
            org.bouncycastle.crypto.tls.CombinedHash r2 = new org.bouncycastle.crypto.tls.CombinedHash
            r2.<init>()
            r1.hash2 = r2
            org.bouncycastle.crypto.tls.TlsNullCipherSuite r2 = new org.bouncycastle.crypto.tls.TlsNullCipherSuite
            r2.<init>()
            r1.readSuite = r2
            r1.writeSuite = r2
            return
    }

    protected void close() throws java.io.IOException {
            r2 = this;
            java.io.InputStream r0 = r2.is     // Catch: java.io.IOException -> L7
            r0.close()     // Catch: java.io.IOException -> L7
            r0 = 0
            goto L8
        L7:
            r0 = move-exception
        L8:
            java.io.OutputStream r1 = r2.os     // Catch: java.io.IOException -> Le
            r1.close()     // Catch: java.io.IOException -> Le
            goto Lf
        Le:
            r0 = move-exception
        Lf:
            if (r0 != 0) goto L12
            return
        L12:
            throw r0
    }

    protected byte[] decodeAndVerify(short r7, java.io.InputStream r8, int r9) throws java.io.IOException {
            r6 = this;
            byte[] r2 = new byte[r9]
            org.bouncycastle.crypto.tls.TlsUtils.readFully(r2, r8)
            org.bouncycastle.crypto.tls.TlsCipherSuite r0 = r6.readSuite
            org.bouncycastle.crypto.tls.TlsProtocolHandler r5 = r6.handler
            r3 = 0
            r1 = r7
            r4 = r9
            byte[] r7 = r0.decodeCiphertext(r1, r2, r3, r4, r5)
            return r7
    }

    protected void flush() throws java.io.IOException {
            r1 = this;
            java.io.OutputStream r0 = r1.os
            r0.flush()
            return
    }

    public void readData() throws java.io.IOException {
            r5 = this;
            java.io.InputStream r0 = r5.is
            short r0 = org.bouncycastle.crypto.tls.TlsUtils.readUint8(r0)
            java.io.InputStream r1 = r5.is
            org.bouncycastle.crypto.tls.TlsProtocolHandler r2 = r5.handler
            org.bouncycastle.crypto.tls.TlsUtils.checkVersion(r1, r2)
            java.io.InputStream r1 = r5.is
            int r1 = org.bouncycastle.crypto.tls.TlsUtils.readUint16(r1)
            java.io.InputStream r2 = r5.is
            byte[] r1 = r5.decodeAndVerify(r0, r2, r1)
            org.bouncycastle.crypto.tls.TlsProtocolHandler r2 = r5.handler
            int r3 = r1.length
            r4 = 0
            r2.processData(r0, r1, r4, r3)
            return
    }

    protected void writeMessage(short r4, byte[] r5, int r6, int r7) throws java.io.IOException {
            r3 = this;
            r0 = 22
            if (r4 != r0) goto Le
            org.bouncycastle.crypto.tls.CombinedHash r0 = r3.hash1
            r0.update(r5, r6, r7)
            org.bouncycastle.crypto.tls.CombinedHash r0 = r3.hash2
            r0.update(r5, r6, r7)
        Le:
            org.bouncycastle.crypto.tls.TlsCipherSuite r0 = r3.writeSuite
            byte[] r5 = r0.encodePlaintext(r4, r5, r6, r7)
            int r6 = r5.length
            r7 = 5
            int r6 = r6 + r7
            byte[] r6 = new byte[r6]
            r0 = 0
            org.bouncycastle.crypto.tls.TlsUtils.writeUint8(r4, r6, r0)
            r4 = 1
            r1 = 3
            org.bouncycastle.crypto.tls.TlsUtils.writeUint8(r1, r6, r4)
            r2 = 2
            org.bouncycastle.crypto.tls.TlsUtils.writeUint8(r4, r6, r2)
            int r4 = r5.length
            org.bouncycastle.crypto.tls.TlsUtils.writeUint16(r4, r6, r1)
            int r4 = r5.length
            java.lang.System.arraycopy(r5, r0, r6, r7, r4)
            java.io.OutputStream r4 = r3.os
            r4.write(r6)
            java.io.OutputStream r4 = r3.os
            r4.flush()
            return
    }
}
