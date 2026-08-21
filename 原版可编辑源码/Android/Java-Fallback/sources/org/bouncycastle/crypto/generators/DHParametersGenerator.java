package org.bouncycastle.crypto.generators;

public class DHParametersGenerator {
    private static final java.math.BigInteger TWO = null;
    private int certainty;
    private java.security.SecureRandom random;
    private int size;

    static {
            r0 = 2
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.DHParametersGenerator.TWO = r0
            return
    }

    public DHParametersGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    public org.bouncycastle.crypto.params.DHParameters generateParameters() {
            r8 = this;
            int r0 = r8.size
            int r1 = r8.certainty
            java.security.SecureRandom r2 = r8.random
            java.math.BigInteger[] r0 = org.bouncycastle.crypto.generators.DHParametersHelper.generateSafePrimes(r0, r1, r2)
            r1 = 0
            r3 = r0[r1]
            r1 = 1
            r5 = r0[r1]
            java.security.SecureRandom r0 = r8.random
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.DHParametersHelper.selectGenerator(r3, r5, r0)
            org.bouncycastle.crypto.params.DHParameters r0 = new org.bouncycastle.crypto.params.DHParameters
            java.math.BigInteger r6 = org.bouncycastle.crypto.generators.DHParametersGenerator.TWO
            r7 = 0
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7)
            return r0
    }

    public void init(int r1, int r2, java.security.SecureRandom r3) {
            r0 = this;
            r0.size = r1
            r0.certainty = r2
            r0.random = r3
            return
    }
}
