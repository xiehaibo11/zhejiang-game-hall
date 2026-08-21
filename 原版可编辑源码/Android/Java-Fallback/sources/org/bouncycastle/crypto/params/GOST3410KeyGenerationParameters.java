package org.bouncycastle.crypto.params;

public class GOST3410KeyGenerationParameters extends org.bouncycastle.crypto.KeyGenerationParameters {
    private org.bouncycastle.crypto.params.GOST3410Parameters params;

    public GOST3410KeyGenerationParameters(java.security.SecureRandom r2, org.bouncycastle.crypto.params.GOST3410Parameters r3) {
            r1 = this;
            java.math.BigInteger r0 = r3.getP()
            int r0 = r0.bitLength()
            int r0 = r0 + (-1)
            r1.<init>(r2, r0)
            r1.params = r3
            return
    }

    public org.bouncycastle.crypto.params.GOST3410Parameters getParameters() {
            r1 = this;
            org.bouncycastle.crypto.params.GOST3410Parameters r0 = r1.params
            return r0
    }
}
