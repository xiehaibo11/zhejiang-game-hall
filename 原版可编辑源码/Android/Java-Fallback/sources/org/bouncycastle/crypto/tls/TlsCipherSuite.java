package org.bouncycastle.crypto.tls;

public abstract class TlsCipherSuite {
    protected static final short KE_DHE_DSS = 3;
    protected static final short KE_DHE_DSS_EXPORT = 4;
    protected static final short KE_DHE_RSA = 5;
    protected static final short KE_DHE_RSA_EXPORT = 6;
    protected static final short KE_DH_DSS = 7;
    protected static final short KE_DH_RSA = 8;
    protected static final short KE_DH_anon = 9;
    protected static final short KE_RSA = 1;
    protected static final short KE_RSA_EXPORT = 2;

    public TlsCipherSuite() {
            r0 = this;
            r0.<init>()
            return
    }

    protected abstract byte[] decodeCiphertext(short r1, byte[] r2, int r3, int r4, org.bouncycastle.crypto.tls.TlsProtocolHandler r5) throws java.io.IOException;

    protected abstract byte[] encodePlaintext(short r1, byte[] r2, int r3, int r4);

    protected abstract short getKeyExchangeAlgorithm();

    protected abstract void init(byte[] r1, byte[] r2, byte[] r3);
}
