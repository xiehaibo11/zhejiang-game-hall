package org.bouncycastle.crypto.generators;

public class RSABlindingFactorGenerator {
    private static java.math.BigInteger ONE;
    private static java.math.BigInteger ZERO;
    private org.bouncycastle.crypto.params.RSAKeyParameters key;
    private java.security.SecureRandom random;

    static {
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.RSABlindingFactorGenerator.ZERO = r0
            r0 = 1
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.RSABlindingFactorGenerator.ONE = r0
            return
    }

    public RSABlindingFactorGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.math.BigInteger generateBlindingFactor() {
            r5 = this;
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = r5.key
            if (r0 == 0) goto L32
            java.math.BigInteger r0 = r0.getModulus()
            int r1 = r0.bitLength()
            int r1 = r1 + (-1)
        Le:
            java.math.BigInteger r2 = new java.math.BigInteger
            java.security.SecureRandom r3 = r5.random
            r2.<init>(r1, r3)
            java.math.BigInteger r3 = r2.gcd(r0)
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.RSABlindingFactorGenerator.ZERO
            boolean r4 = r2.equals(r4)
            if (r4 != 0) goto Le
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.RSABlindingFactorGenerator.ONE
            boolean r4 = r2.equals(r4)
            if (r4 != 0) goto Le
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.RSABlindingFactorGenerator.ONE
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto Le
            return r2
        L32:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "generator not initialised"
            r0.<init>(r1)
            throw r0
    }

    public void init(org.bouncycastle.crypto.CipherParameters r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r0 == 0) goto L13
            org.bouncycastle.crypto.params.ParametersWithRandom r2 = (org.bouncycastle.crypto.params.ParametersWithRandom) r2
            org.bouncycastle.crypto.CipherParameters r0 = r2.getParameters()
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = (org.bouncycastle.crypto.params.RSAKeyParameters) r0
            r1.key = r0
            java.security.SecureRandom r2 = r2.getRandom()
            goto L1c
        L13:
            org.bouncycastle.crypto.params.RSAKeyParameters r2 = (org.bouncycastle.crypto.params.RSAKeyParameters) r2
            r1.key = r2
            java.security.SecureRandom r2 = new java.security.SecureRandom
            r2.<init>()
        L1c:
            r1.random = r2
            org.bouncycastle.crypto.params.RSAKeyParameters r2 = r1.key
            boolean r2 = r2 instanceof org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters
            if (r2 != 0) goto L25
            return
        L25:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "generator requires RSA public key"
            r2.<init>(r0)
            throw r2
    }
}
