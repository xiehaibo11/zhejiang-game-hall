package org.bouncycastle.crypto.engines;

public class RSABlindedEngine implements org.bouncycastle.crypto.AsymmetricBlockCipher {
    private static java.math.BigInteger ZERO;
    private org.bouncycastle.crypto.engines.RSACoreEngine core;
    private org.bouncycastle.crypto.params.RSAKeyParameters key;
    private java.security.SecureRandom random;

    static {
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.engines.RSABlindedEngine.ZERO = r0
            return
    }

    public RSABlindedEngine() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = new org.bouncycastle.crypto.engines.RSACoreEngine
            r0.<init>()
            r1.core = r0
            return
    }

    private java.math.BigInteger calculateR(java.math.BigInteger r3) {
            r2 = this;
            int r3 = r3.bitLength()
            int r3 = r3 + (-1)
            int r0 = r3 / 2
            java.security.SecureRandom r1 = r2.random
            int r1 = r1.nextInt()
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r3 = r3 - r0
            int r3 = r3 / 255
            int r1 = r1 * r3
            int r1 = r1 + r0
            java.math.BigInteger r3 = new java.math.BigInteger
            java.security.SecureRandom r0 = r2.random
            r3.<init>(r1, r0)
        L1d:
            java.math.BigInteger r0 = org.bouncycastle.crypto.engines.RSABlindedEngine.ZERO
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L2d
            java.math.BigInteger r3 = new java.math.BigInteger
            java.security.SecureRandom r0 = r2.random
            r3.<init>(r1, r0)
            goto L1d
        L2d:
            return r3
    }

    @Override
    public int getInputBlockSize() {
            r1 = this;
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r1.core
            int r0 = r0.getInputBlockSize()
            return r0
    }

    @Override
    public int getOutputBlockSize() {
            r1 = this;
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r1.core
            int r0 = r0.getOutputBlockSize()
            return r0
    }

    @Override
    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) {
            r1 = this;
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r1.core
            r0.init(r2, r3)
            boolean r2 = r3 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r2 == 0) goto L18
            org.bouncycastle.crypto.params.ParametersWithRandom r3 = (org.bouncycastle.crypto.params.ParametersWithRandom) r3
            org.bouncycastle.crypto.CipherParameters r2 = r3.getParameters()
            org.bouncycastle.crypto.params.RSAKeyParameters r2 = (org.bouncycastle.crypto.params.RSAKeyParameters) r2
            r1.key = r2
            java.security.SecureRandom r2 = r3.getRandom()
            goto L21
        L18:
            org.bouncycastle.crypto.params.RSAKeyParameters r3 = (org.bouncycastle.crypto.params.RSAKeyParameters) r3
            r1.key = r3
            java.security.SecureRandom r2 = new java.security.SecureRandom
            r2.<init>()
        L21:
            r1.random = r2
            return
    }

    @Override
    public byte[] processBlock(byte[] r3, int r4, int r5) {
            r2 = this;
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = r2.key
            if (r0 == 0) goto L52
            boolean r1 = r0 instanceof org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters
            if (r1 == 0) goto L47
            org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters r0 = (org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters) r0
            java.math.BigInteger r1 = r0.getPublicExponent()
            if (r1 == 0) goto L47
            org.bouncycastle.crypto.engines.RSACoreEngine r1 = r2.core
            java.math.BigInteger r3 = r1.convertInput(r3, r4, r5)
            java.math.BigInteger r4 = r0.getModulus()
            java.math.BigInteger r5 = r2.calculateR(r4)
            org.bouncycastle.crypto.engines.RSACoreEngine r1 = r2.core
            java.math.BigInteger r0 = r0.getPublicExponent()
            java.math.BigInteger r0 = r5.modPow(r0, r4)
            java.math.BigInteger r3 = r0.multiply(r3)
            java.math.BigInteger r3 = r3.mod(r4)
            java.math.BigInteger r3 = r1.processBlock(r3)
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r2.core
            java.math.BigInteger r5 = r5.modInverse(r4)
            java.math.BigInteger r3 = r3.multiply(r5)
            java.math.BigInteger r3 = r3.mod(r4)
        L42:
            byte[] r3 = r0.convertOutput(r3)
            return r3
        L47:
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r2.core
            java.math.BigInteger r3 = r0.convertInput(r3, r4, r5)
            java.math.BigInteger r3 = r0.processBlock(r3)
            goto L42
        L52:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "RSA engine not initialised"
            r3.<init>(r4)
            throw r3
    }
}
