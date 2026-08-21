package org.bouncycastle.crypto.tls;

public class TlsNullCipherSuite extends TlsCipherSuite {
    @Override
    protected byte[] decodeCiphertext(short s, byte[] bArr, int i, int i2, TlsProtocolHandler tlsProtocolHandler) {
        byte[] bArr2 = new byte[i2];
        System.arraycopy(bArr, i, bArr2, 0, i2);
        return bArr2;
    }

    @Override
    protected byte[] encodePlaintext(short s, byte[] bArr, int i, int i2) {
        byte[] bArr2 = new byte[i2];
        System.arraycopy(bArr, i, bArr2, 0, i2);
        return bArr2;
    }

    @Override
    protected short getKeyExchangeAlgorithm() {
        return (short) 0;
    }

    @Override
    protected void init(byte[] bArr, byte[] bArr2, byte[] bArr3) {
        throw new TlsRuntimeException("Sorry, init of TLS_NULL_WITH_NULL_NULL is forbidden");
    }
}
