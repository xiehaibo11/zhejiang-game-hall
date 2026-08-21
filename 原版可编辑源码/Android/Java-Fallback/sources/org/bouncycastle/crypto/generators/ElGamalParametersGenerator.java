package org.bouncycastle.crypto.generators;

public class ElGamalParametersGenerator {
    private int certainty;
    private java.security.SecureRandom random;
    private int size;

    public ElGamalParametersGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    public org.bouncycastle.crypto.params.ElGamalParameters generateParameters() {
            r3 = this;
            int r0 = r3.size
            int r1 = r3.certainty
            java.security.SecureRandom r2 = r3.random
            java.math.BigInteger[] r0 = org.bouncycastle.crypto.generators.DHParametersHelper.generateSafePrimes(r0, r1, r2)
            r1 = 0
            r1 = r0[r1]
            r2 = 1
            r0 = r0[r2]
            java.security.SecureRandom r2 = r3.random
            java.math.BigInteger r0 = org.bouncycastle.crypto.generators.DHParametersHelper.selectGenerator(r1, r0, r2)
            org.bouncycastle.crypto.params.ElGamalParameters r2 = new org.bouncycastle.crypto.params.ElGamalParameters
            r2.<init>(r1, r0)
            return r2
    }

    public void init(int r1, int r2, java.security.SecureRandom r3) {
            r0 = this;
            r0.size = r1
            r0.certainty = r2
            r0.random = r3
            return
    }
}
