package org.bouncycastle.crypto.params;

public class RSABlindingParameters implements org.bouncycastle.crypto.CipherParameters {
    private java.math.BigInteger blindingFactor;
    private org.bouncycastle.crypto.params.RSAKeyParameters publicKey;

    public RSABlindingParameters(org.bouncycastle.crypto.params.RSAKeyParameters r2, java.math.BigInteger r3) {
            r1 = this;
            r1.<init>()
            boolean r0 = r2 instanceof org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters
            if (r0 != 0) goto Lc
            r1.publicKey = r2
            r1.blindingFactor = r3
            return
        Lc:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "RSA parameters should be for a public key"
            r2.<init>(r3)
            throw r2
    }

    public java.math.BigInteger getBlindingFactor() {
            r1 = this;
            java.math.BigInteger r0 = r1.blindingFactor
            return r0
    }

    public org.bouncycastle.crypto.params.RSAKeyParameters getPublicKey() {
            r1 = this;
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = r1.publicKey
            return r0
    }
}
