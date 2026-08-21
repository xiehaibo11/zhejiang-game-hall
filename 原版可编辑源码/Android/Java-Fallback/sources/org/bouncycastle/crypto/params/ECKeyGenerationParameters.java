package org.bouncycastle.crypto.params;

public class ECKeyGenerationParameters extends org.bouncycastle.crypto.KeyGenerationParameters {
    private org.bouncycastle.crypto.params.ECDomainParameters domainParams;

    public ECKeyGenerationParameters(org.bouncycastle.crypto.params.ECDomainParameters r2, java.security.SecureRandom r3) {
            r1 = this;
            java.math.BigInteger r0 = r2.getN()
            int r0 = r0.bitLength()
            r1.<init>(r3, r0)
            r1.domainParams = r2
            return
    }

    public org.bouncycastle.crypto.params.ECDomainParameters getDomainParameters() {
            r1 = this;
            org.bouncycastle.crypto.params.ECDomainParameters r0 = r1.domainParams
            return r0
    }
}
