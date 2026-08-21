package org.bouncycastle.crypto.generators;

public class RSAKeyPairGenerator implements org.bouncycastle.crypto.AsymmetricCipherKeyPairGenerator {
    private static final java.math.BigInteger ONE = null;
    private org.bouncycastle.crypto.params.RSAKeyGenerationParameters param;

    static {
            r0 = 1
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.RSAKeyPairGenerator.ONE = r0
            return
    }

    public RSAKeyPairGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public org.bouncycastle.crypto.AsymmetricCipherKeyPair generateKeyPair() {
            r13 = this;
            org.bouncycastle.crypto.params.RSAKeyGenerationParameters r0 = r13.param
            int r0 = r0.getStrength()
            int r1 = r0 + 1
            int r1 = r1 / 2
            int r2 = r0 - r1
            int r0 = r0 / 3
            org.bouncycastle.crypto.params.RSAKeyGenerationParameters r3 = r13.param
            java.math.BigInteger r6 = r3.getPublicExponent()
        L14:
            java.math.BigInteger r3 = new java.math.BigInteger
            org.bouncycastle.crypto.params.RSAKeyGenerationParameters r4 = r13.param
            java.security.SecureRandom r4 = r4.getRandom()
            r5 = 1
            r3.<init>(r1, r5, r4)
            java.math.BigInteger r4 = r3.mod(r6)
            java.math.BigInteger r7 = org.bouncycastle.crypto.generators.RSAKeyPairGenerator.ONE
            boolean r4 = r4.equals(r7)
            if (r4 == 0) goto L2d
            goto L14
        L2d:
            org.bouncycastle.crypto.params.RSAKeyGenerationParameters r4 = r13.param
            int r4 = r4.getCertainty()
            boolean r4 = r3.isProbablePrime(r4)
            if (r4 != 0) goto L3a
            goto L14
        L3a:
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.RSAKeyPairGenerator.ONE
            java.math.BigInteger r4 = r3.subtract(r4)
            java.math.BigInteger r4 = r6.gcd(r4)
            java.math.BigInteger r7 = org.bouncycastle.crypto.generators.RSAKeyPairGenerator.ONE
            boolean r4 = r4.equals(r7)
            if (r4 == 0) goto L14
        L4c:
            java.math.BigInteger r1 = new java.math.BigInteger
            org.bouncycastle.crypto.params.RSAKeyGenerationParameters r4 = r13.param
            java.security.SecureRandom r4 = r4.getRandom()
            r1.<init>(r2, r5, r4)
            java.math.BigInteger r4 = r1.subtract(r3)
            java.math.BigInteger r4 = r4.abs()
            int r4 = r4.bitLength()
            if (r4 >= r0) goto L66
            goto L4c
        L66:
            java.math.BigInteger r4 = r1.mod(r6)
            java.math.BigInteger r7 = org.bouncycastle.crypto.generators.RSAKeyPairGenerator.ONE
            boolean r4 = r4.equals(r7)
            if (r4 == 0) goto L73
            goto L4c
        L73:
            org.bouncycastle.crypto.params.RSAKeyGenerationParameters r4 = r13.param
            int r4 = r4.getCertainty()
            boolean r4 = r1.isProbablePrime(r4)
            if (r4 != 0) goto L80
            goto L4c
        L80:
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.RSAKeyPairGenerator.ONE
            java.math.BigInteger r4 = r1.subtract(r4)
            java.math.BigInteger r4 = r6.gcd(r4)
            java.math.BigInteger r7 = org.bouncycastle.crypto.generators.RSAKeyPairGenerator.ONE
            boolean r4 = r4.equals(r7)
            if (r4 == 0) goto L4c
            java.math.BigInteger r7 = r3.multiply(r1)
            int r4 = r7.bitLength()
            org.bouncycastle.crypto.params.RSAKeyGenerationParameters r8 = r13.param
            int r8 = r8.getStrength()
            if (r4 != r8) goto Le1
            int r0 = r3.compareTo(r1)
            if (r0 >= 0) goto Lab
            r8 = r1
            r9 = r3
            goto Lad
        Lab:
            r9 = r1
            r8 = r3
        Lad:
            java.math.BigInteger r0 = org.bouncycastle.crypto.generators.RSAKeyPairGenerator.ONE
            java.math.BigInteger r0 = r8.subtract(r0)
            java.math.BigInteger r1 = org.bouncycastle.crypto.generators.RSAKeyPairGenerator.ONE
            java.math.BigInteger r1 = r9.subtract(r1)
            java.math.BigInteger r2 = r0.multiply(r1)
            java.math.BigInteger r2 = r6.modInverse(r2)
            java.math.BigInteger r10 = r2.remainder(r0)
            java.math.BigInteger r11 = r2.remainder(r1)
            java.math.BigInteger r12 = r9.modInverse(r8)
            org.bouncycastle.crypto.AsymmetricCipherKeyPair r0 = new org.bouncycastle.crypto.AsymmetricCipherKeyPair
            org.bouncycastle.crypto.params.RSAKeyParameters r1 = new org.bouncycastle.crypto.params.RSAKeyParameters
            r3 = 0
            r1.<init>(r3, r7, r6)
            org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters r3 = new org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters
            r4 = r3
            r5 = r7
            r7 = r2
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12)
            r0.<init>(r1, r3)
            return r0
        Le1:
            java.math.BigInteger r3 = r3.max(r1)
            goto L4c
    }

    @Override
    public void init(org.bouncycastle.crypto.KeyGenerationParameters r1) {
            r0 = this;
            org.bouncycastle.crypto.params.RSAKeyGenerationParameters r1 = (org.bouncycastle.crypto.params.RSAKeyGenerationParameters) r1
            r0.param = r1
            return
    }
}
