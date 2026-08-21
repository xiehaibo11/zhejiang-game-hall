package org.bouncycastle.crypto.params;

public class RSAKeyGenerationParameters extends org.bouncycastle.crypto.KeyGenerationParameters {
    private int certainty;
    private java.math.BigInteger publicExponent;

    public RSAKeyGenerationParameters(java.math.BigInteger r1, java.security.SecureRandom r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r2, r3)
            r2 = 12
            if (r3 < r2) goto L1b
            r2 = 0
            boolean r2 = r1.testBit(r2)
            if (r2 == 0) goto L13
            r0.publicExponent = r1
            r0.certainty = r4
            return
        L13:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "public exponent cannot be even"
            r1.<init>(r2)
            throw r1
        L1b:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "key strength too small"
            r1.<init>(r2)
            throw r1
    }

    public int getCertainty() {
            r1 = this;
            int r0 = r1.certainty
            return r0
    }

    public java.math.BigInteger getPublicExponent() {
            r1 = this;
            java.math.BigInteger r0 = r1.publicExponent
            return r0
    }
}
