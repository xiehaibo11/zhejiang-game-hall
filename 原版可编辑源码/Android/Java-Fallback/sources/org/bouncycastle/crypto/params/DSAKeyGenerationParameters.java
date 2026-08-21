package org.bouncycastle.crypto.params;

public class DSAKeyGenerationParameters extends org.bouncycastle.crypto.KeyGenerationParameters {
    private org.bouncycastle.crypto.params.DSAParameters params;

    public DSAKeyGenerationParameters(java.security.SecureRandom r2, org.bouncycastle.crypto.params.DSAParameters r3) {
            r1 = this;
            java.math.BigInteger r0 = r3.getP()
            int r0 = r0.bitLength()
            int r0 = r0 + (-1)
            r1.<init>(r2, r0)
            r1.params = r3
            return
    }

    public org.bouncycastle.crypto.params.DSAParameters getParameters() {
            r1 = this;
            org.bouncycastle.crypto.params.DSAParameters r0 = r1.params
            return r0
    }
}
