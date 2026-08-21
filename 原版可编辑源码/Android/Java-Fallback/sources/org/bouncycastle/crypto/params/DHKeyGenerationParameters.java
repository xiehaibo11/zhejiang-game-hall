package org.bouncycastle.crypto.params;

public class DHKeyGenerationParameters extends org.bouncycastle.crypto.KeyGenerationParameters {
    private org.bouncycastle.crypto.params.DHParameters params;

    public DHKeyGenerationParameters(java.security.SecureRandom r2, org.bouncycastle.crypto.params.DHParameters r3) {
            r1 = this;
            java.math.BigInteger r0 = r3.getP()
            int r0 = r0.bitLength()
            r1.<init>(r2, r0)
            r1.params = r3
            return
    }

    public org.bouncycastle.crypto.params.DHParameters getParameters() {
            r1 = this;
            org.bouncycastle.crypto.params.DHParameters r0 = r1.params
            return r0
    }
}
