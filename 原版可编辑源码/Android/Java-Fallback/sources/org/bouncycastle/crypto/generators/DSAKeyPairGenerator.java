package org.bouncycastle.crypto.generators;

public class DSAKeyPairGenerator implements org.bouncycastle.crypto.AsymmetricCipherKeyPairGenerator {
    private static final java.math.BigInteger ZERO = null;
    private org.bouncycastle.crypto.params.DSAKeyGenerationParameters param;

    static {
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.DSAKeyPairGenerator.ZERO = r0
            return
    }

    public DSAKeyPairGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public org.bouncycastle.crypto.AsymmetricCipherKeyPair generateKeyPair() {
            r7 = this;
            org.bouncycastle.crypto.params.DSAKeyGenerationParameters r0 = r7.param
            org.bouncycastle.crypto.params.DSAParameters r0 = r0.getParameters()
            org.bouncycastle.crypto.params.DSAKeyGenerationParameters r1 = r7.param
            java.security.SecureRandom r1 = r1.getRandom()
            java.math.BigInteger r2 = r0.getQ()
            java.math.BigInteger r3 = r0.getP()
            java.math.BigInteger r4 = r0.getG()
        L18:
            java.math.BigInteger r5 = new java.math.BigInteger
            r6 = 160(0xa0, float:2.24E-43)
            r5.<init>(r6, r1)
            java.math.BigInteger r6 = org.bouncycastle.crypto.generators.DSAKeyPairGenerator.ZERO
            boolean r6 = r5.equals(r6)
            if (r6 != 0) goto L18
            int r6 = r5.compareTo(r2)
            if (r6 >= 0) goto L18
            java.math.BigInteger r1 = r4.modPow(r5, r3)
            org.bouncycastle.crypto.AsymmetricCipherKeyPair r2 = new org.bouncycastle.crypto.AsymmetricCipherKeyPair
            org.bouncycastle.crypto.params.DSAPublicKeyParameters r3 = new org.bouncycastle.crypto.params.DSAPublicKeyParameters
            r3.<init>(r1, r0)
            org.bouncycastle.crypto.params.DSAPrivateKeyParameters r1 = new org.bouncycastle.crypto.params.DSAPrivateKeyParameters
            r1.<init>(r5, r0)
            r2.<init>(r3, r1)
            return r2
    }

    @Override
    public void init(org.bouncycastle.crypto.KeyGenerationParameters r1) {
            r0 = this;
            org.bouncycastle.crypto.params.DSAKeyGenerationParameters r1 = (org.bouncycastle.crypto.params.DSAKeyGenerationParameters) r1
            r0.param = r1
            return
    }
}
