package org.bouncycastle.crypto.tls;

public class TlsNullCipherSuite extends org.bouncycastle.crypto.tls.TlsCipherSuite {
    public TlsNullCipherSuite() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected byte[] decodeCiphertext(short r1, byte[] r2, int r3, int r4, org.bouncycastle.crypto.tls.TlsProtocolHandler r5) {
            r0 = this;
            byte[] r1 = new byte[r4]
            r5 = 0
            java.lang.System.arraycopy(r2, r3, r1, r5, r4)
            return r1
    }

    @Override
    protected byte[] encodePlaintext(short r2, byte[] r3, int r4, int r5) {
            r1 = this;
            byte[] r2 = new byte[r5]
            r0 = 0
            java.lang.System.arraycopy(r3, r4, r2, r0, r5)
            return r2
    }

    @Override
    protected short getKeyExchangeAlgorithm() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected void init(byte[] r1, byte[] r2, byte[] r3) {
            r0 = this;
            org.bouncycastle.crypto.tls.TlsRuntimeException r1 = new org.bouncycastle.crypto.tls.TlsRuntimeException
            java.lang.String r2 = "Sorry, init of TLS_NULL_WITH_NULL_NULL is forbidden"
            r1.<init>(r2)
            throw r1
    }
}
