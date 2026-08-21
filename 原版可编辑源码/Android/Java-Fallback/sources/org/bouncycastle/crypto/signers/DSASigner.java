package org.bouncycastle.crypto.signers;

public class DSASigner implements org.bouncycastle.crypto.DSA {
    org.bouncycastle.crypto.params.DSAKeyParameters key;
    java.security.SecureRandom random;

    public DSASigner() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.math.BigInteger calculateE(java.math.BigInteger r4, byte[] r5) {
            r3 = this;
            int r0 = r4.bitLength()
            int r1 = r5.length
            int r1 = r1 * 8
            r2 = 1
            if (r0 < r1) goto L10
            java.math.BigInteger r4 = new java.math.BigInteger
            r4.<init>(r2, r5)
            return r4
        L10:
            int r4 = r4.bitLength()
            int r4 = r4 / 8
            byte[] r0 = new byte[r4]
            r1 = 0
            java.lang.System.arraycopy(r5, r1, r0, r1, r4)
            java.math.BigInteger r4 = new java.math.BigInteger
            r4.<init>(r2, r0)
            return r4
    }

    @Override
    public java.math.BigInteger[] generateSignature(byte[] r5) {
            r4 = this;
            org.bouncycastle.crypto.params.DSAKeyParameters r0 = r4.key
            org.bouncycastle.crypto.params.DSAParameters r0 = r0.getParameters()
            java.math.BigInteger r1 = r0.getQ()
            java.math.BigInteger r5 = r4.calculateE(r1, r5)
            java.math.BigInteger r1 = r0.getQ()
            int r1 = r1.bitLength()
        L16:
            java.math.BigInteger r2 = new java.math.BigInteger
            java.security.SecureRandom r3 = r4.random
            r2.<init>(r1, r3)
            java.math.BigInteger r3 = r0.getQ()
            int r3 = r2.compareTo(r3)
            if (r3 >= 0) goto L16
            java.math.BigInteger r1 = r0.getG()
            java.math.BigInteger r3 = r0.getP()
            java.math.BigInteger r1 = r1.modPow(r2, r3)
            java.math.BigInteger r3 = r0.getQ()
            java.math.BigInteger r1 = r1.mod(r3)
            java.math.BigInteger r3 = r0.getQ()
            java.math.BigInteger r2 = r2.modInverse(r3)
            org.bouncycastle.crypto.params.DSAKeyParameters r3 = r4.key
            org.bouncycastle.crypto.params.DSAPrivateKeyParameters r3 = (org.bouncycastle.crypto.params.DSAPrivateKeyParameters) r3
            java.math.BigInteger r3 = r3.getX()
            java.math.BigInteger r3 = r3.multiply(r1)
            java.math.BigInteger r5 = r5.add(r3)
            java.math.BigInteger r5 = r2.multiply(r5)
            java.math.BigInteger r0 = r0.getQ()
            java.math.BigInteger r5 = r5.mod(r0)
            r0 = 2
            java.math.BigInteger[] r0 = new java.math.BigInteger[r0]
            r2 = 0
            r0[r2] = r1
            r1 = 1
            r0[r1] = r5
            return r0
    }

    @Override
    public void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2) {
            r0 = this;
            if (r1 == 0) goto L21
            boolean r1 = r2 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r1 == 0) goto L17
            org.bouncycastle.crypto.params.ParametersWithRandom r2 = (org.bouncycastle.crypto.params.ParametersWithRandom) r2
            java.security.SecureRandom r1 = r2.getRandom()
            r0.random = r1
            org.bouncycastle.crypto.CipherParameters r1 = r2.getParameters()
            org.bouncycastle.crypto.params.DSAPrivateKeyParameters r1 = (org.bouncycastle.crypto.params.DSAPrivateKeyParameters) r1
            r0.key = r1
            goto L25
        L17:
            java.security.SecureRandom r1 = new java.security.SecureRandom
            r1.<init>()
            r0.random = r1
            org.bouncycastle.crypto.params.DSAPrivateKeyParameters r2 = (org.bouncycastle.crypto.params.DSAPrivateKeyParameters) r2
            goto L23
        L21:
            org.bouncycastle.crypto.params.DSAPublicKeyParameters r2 = (org.bouncycastle.crypto.params.DSAPublicKeyParameters) r2
        L23:
            r0.key = r2
        L25:
            return
    }

    @Override
    public boolean verifySignature(byte[] r5, java.math.BigInteger r6, java.math.BigInteger r7) {
            r4 = this;
            org.bouncycastle.crypto.params.DSAKeyParameters r0 = r4.key
            org.bouncycastle.crypto.params.DSAParameters r0 = r0.getParameters()
            java.math.BigInteger r1 = r0.getQ()
            java.math.BigInteger r5 = r4.calculateE(r1, r5)
            r1 = 0
            java.math.BigInteger r1 = java.math.BigInteger.valueOf(r1)
            int r2 = r1.compareTo(r6)
            r3 = 0
            if (r2 >= 0) goto L8c
            java.math.BigInteger r2 = r0.getQ()
            int r2 = r2.compareTo(r6)
            if (r2 > 0) goto L26
            goto L8c
        L26:
            int r1 = r1.compareTo(r7)
            if (r1 >= 0) goto L8c
            java.math.BigInteger r1 = r0.getQ()
            int r1 = r1.compareTo(r7)
            if (r1 > 0) goto L37
            goto L8c
        L37:
            java.math.BigInteger r1 = r0.getQ()
            java.math.BigInteger r7 = r7.modInverse(r1)
            java.math.BigInteger r5 = r5.multiply(r7)
            java.math.BigInteger r1 = r0.getQ()
            java.math.BigInteger r5 = r5.mod(r1)
            java.math.BigInteger r7 = r6.multiply(r7)
            java.math.BigInteger r1 = r0.getQ()
            java.math.BigInteger r7 = r7.mod(r1)
            java.math.BigInteger r1 = r0.getG()
            java.math.BigInteger r2 = r0.getP()
            java.math.BigInteger r5 = r1.modPow(r5, r2)
            org.bouncycastle.crypto.params.DSAKeyParameters r1 = r4.key
            org.bouncycastle.crypto.params.DSAPublicKeyParameters r1 = (org.bouncycastle.crypto.params.DSAPublicKeyParameters) r1
            java.math.BigInteger r1 = r1.getY()
            java.math.BigInteger r2 = r0.getP()
            java.math.BigInteger r7 = r1.modPow(r7, r2)
            java.math.BigInteger r5 = r5.multiply(r7)
            java.math.BigInteger r7 = r0.getP()
            java.math.BigInteger r5 = r5.mod(r7)
            java.math.BigInteger r7 = r0.getQ()
            java.math.BigInteger r5 = r5.mod(r7)
            boolean r5 = r5.equals(r6)
            return r5
        L8c:
            return r3
    }
}
