package org.bouncycastle.crypto.signers;

public class GOST3410Signer implements org.bouncycastle.crypto.DSA {
    org.bouncycastle.crypto.params.GOST3410KeyParameters key;
    java.security.SecureRandom random;

    public GOST3410Signer() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.math.BigInteger[] generateSignature(byte[] r7) {
            r6 = this;
            int r0 = r7.length
            byte[] r1 = new byte[r0]
            r2 = 0
            r3 = 0
        L5:
            if (r3 == r0) goto L11
            int r4 = r0 + (-1)
            int r4 = r4 - r3
            r4 = r7[r4]
            r1[r3] = r4
            int r3 = r3 + 1
            goto L5
        L11:
            java.math.BigInteger r7 = new java.math.BigInteger
            r0 = 1
            r7.<init>(r0, r1)
            org.bouncycastle.crypto.params.GOST3410KeyParameters r1 = r6.key
            org.bouncycastle.crypto.params.GOST3410Parameters r1 = r1.getParameters()
        L1d:
            java.math.BigInteger r3 = new java.math.BigInteger
            java.math.BigInteger r4 = r1.getQ()
            int r4 = r4.bitLength()
            java.security.SecureRandom r5 = r6.random
            r3.<init>(r4, r5)
            java.math.BigInteger r4 = r1.getQ()
            int r4 = r3.compareTo(r4)
            if (r4 >= 0) goto L1d
            java.math.BigInteger r4 = r1.getA()
            java.math.BigInteger r5 = r1.getP()
            java.math.BigInteger r4 = r4.modPow(r3, r5)
            java.math.BigInteger r5 = r1.getQ()
            java.math.BigInteger r4 = r4.mod(r5)
            java.math.BigInteger r7 = r3.multiply(r7)
            org.bouncycastle.crypto.params.GOST3410KeyParameters r3 = r6.key
            org.bouncycastle.crypto.params.GOST3410PrivateKeyParameters r3 = (org.bouncycastle.crypto.params.GOST3410PrivateKeyParameters) r3
            java.math.BigInteger r3 = r3.getX()
            java.math.BigInteger r3 = r3.multiply(r4)
            java.math.BigInteger r7 = r7.add(r3)
            java.math.BigInteger r1 = r1.getQ()
            java.math.BigInteger r7 = r7.mod(r1)
            r1 = 2
            java.math.BigInteger[] r1 = new java.math.BigInteger[r1]
            r1[r2] = r4
            r1[r0] = r7
            return r1
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
            org.bouncycastle.crypto.params.GOST3410PrivateKeyParameters r1 = (org.bouncycastle.crypto.params.GOST3410PrivateKeyParameters) r1
            r0.key = r1
            goto L25
        L17:
            java.security.SecureRandom r1 = new java.security.SecureRandom
            r1.<init>()
            r0.random = r1
            org.bouncycastle.crypto.params.GOST3410PrivateKeyParameters r2 = (org.bouncycastle.crypto.params.GOST3410PrivateKeyParameters) r2
            goto L23
        L21:
            org.bouncycastle.crypto.params.GOST3410PublicKeyParameters r2 = (org.bouncycastle.crypto.params.GOST3410PublicKeyParameters) r2
        L23:
            r0.key = r2
        L25:
            return
    }

    @Override
    public boolean verifySignature(byte[] r6, java.math.BigInteger r7, java.math.BigInteger r8) {
            r5 = this;
            int r0 = r6.length
            byte[] r1 = new byte[r0]
            r2 = 0
            r3 = 0
        L5:
            if (r3 == r0) goto L11
            int r4 = r0 + (-1)
            int r4 = r4 - r3
            r4 = r6[r4]
            r1[r3] = r4
            int r3 = r3 + 1
            goto L5
        L11:
            java.math.BigInteger r6 = new java.math.BigInteger
            r0 = 1
            r6.<init>(r0, r1)
            org.bouncycastle.crypto.params.GOST3410KeyParameters r0 = r5.key
            org.bouncycastle.crypto.params.GOST3410Parameters r0 = r0.getParameters()
            r3 = 0
            java.math.BigInteger r1 = java.math.BigInteger.valueOf(r3)
            int r3 = r1.compareTo(r7)
            if (r3 >= 0) goto Lb2
            java.math.BigInteger r3 = r0.getQ()
            int r3 = r3.compareTo(r7)
            if (r3 > 0) goto L35
            goto Lb2
        L35:
            int r1 = r1.compareTo(r8)
            if (r1 >= 0) goto Lb2
            java.math.BigInteger r1 = r0.getQ()
            int r1 = r1.compareTo(r8)
            if (r1 > 0) goto L46
            goto Lb2
        L46:
            java.math.BigInteger r1 = r0.getQ()
            java.math.BigInteger r2 = new java.math.BigInteger
            java.lang.String r3 = "2"
            r2.<init>(r3)
            java.math.BigInteger r1 = r1.subtract(r2)
            java.math.BigInteger r2 = r0.getQ()
            java.math.BigInteger r6 = r6.modPow(r1, r2)
            java.math.BigInteger r8 = r8.multiply(r6)
            java.math.BigInteger r1 = r0.getQ()
            java.math.BigInteger r8 = r8.mod(r1)
            java.math.BigInteger r1 = r0.getQ()
            java.math.BigInteger r1 = r1.subtract(r7)
            java.math.BigInteger r6 = r1.multiply(r6)
            java.math.BigInteger r1 = r0.getQ()
            java.math.BigInteger r6 = r6.mod(r1)
            java.math.BigInteger r1 = r0.getA()
            java.math.BigInteger r2 = r0.getP()
            java.math.BigInteger r8 = r1.modPow(r8, r2)
            org.bouncycastle.crypto.params.GOST3410KeyParameters r1 = r5.key
            org.bouncycastle.crypto.params.GOST3410PublicKeyParameters r1 = (org.bouncycastle.crypto.params.GOST3410PublicKeyParameters) r1
            java.math.BigInteger r1 = r1.getY()
            java.math.BigInteger r2 = r0.getP()
            java.math.BigInteger r6 = r1.modPow(r6, r2)
            java.math.BigInteger r6 = r8.multiply(r6)
            java.math.BigInteger r8 = r0.getP()
            java.math.BigInteger r6 = r6.mod(r8)
            java.math.BigInteger r8 = r0.getQ()
            java.math.BigInteger r6 = r6.mod(r8)
            boolean r6 = r6.equals(r7)
            return r6
        Lb2:
            return r2
    }
}
