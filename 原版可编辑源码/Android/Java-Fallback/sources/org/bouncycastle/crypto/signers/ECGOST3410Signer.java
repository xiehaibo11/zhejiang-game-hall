package org.bouncycastle.crypto.signers;

public class ECGOST3410Signer implements org.bouncycastle.crypto.DSA {
    org.bouncycastle.crypto.params.ECKeyParameters key;
    java.security.SecureRandom random;

    public ECGOST3410Signer() {
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
            org.bouncycastle.crypto.params.ECKeyParameters r1 = r6.key
            org.bouncycastle.crypto.params.ECDomainParameters r1 = r1.getParameters()
            java.math.BigInteger r1 = r1.getN()
        L21:
            java.math.BigInteger r3 = new java.math.BigInteger
            int r4 = r1.bitLength()
            java.security.SecureRandom r5 = r6.random
            r3.<init>(r4, r5)
            java.math.BigInteger r4 = org.bouncycastle.math.ec.ECConstants.ZERO
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L21
            org.bouncycastle.crypto.params.ECKeyParameters r4 = r6.key
            org.bouncycastle.crypto.params.ECDomainParameters r4 = r4.getParameters()
            org.bouncycastle.math.ec.ECPoint r4 = r4.getG()
            org.bouncycastle.math.ec.ECPoint r4 = r4.multiply(r3)
            org.bouncycastle.math.ec.ECFieldElement r4 = r4.getX()
            java.math.BigInteger r4 = r4.toBigInteger()
            java.math.BigInteger r4 = r4.mod(r1)
            java.math.BigInteger r5 = org.bouncycastle.math.ec.ECConstants.ZERO
            boolean r5 = r4.equals(r5)
            if (r5 != 0) goto L21
            org.bouncycastle.crypto.params.ECKeyParameters r5 = r6.key
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r5 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r5
            java.math.BigInteger r5 = r5.getD()
            java.math.BigInteger r3 = r3.multiply(r7)
            java.math.BigInteger r5 = r5.multiply(r4)
            java.math.BigInteger r3 = r3.add(r5)
            java.math.BigInteger r3 = r3.mod(r1)
            java.math.BigInteger r5 = org.bouncycastle.math.ec.ECConstants.ZERO
            boolean r5 = r3.equals(r5)
            if (r5 != 0) goto L21
            r7 = 2
            java.math.BigInteger[] r7 = new java.math.BigInteger[r7]
            r7[r2] = r4
            r7[r0] = r3
            return r7
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
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r1 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r1
            r0.key = r1
            goto L25
        L17:
            java.security.SecureRandom r1 = new java.security.SecureRandom
            r1.<init>()
            r0.random = r1
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r2 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r2
            goto L23
        L21:
            org.bouncycastle.crypto.params.ECPublicKeyParameters r2 = (org.bouncycastle.crypto.params.ECPublicKeyParameters) r2
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
            org.bouncycastle.crypto.params.ECKeyParameters r0 = r5.key
            org.bouncycastle.crypto.params.ECDomainParameters r0 = r0.getParameters()
            java.math.BigInteger r0 = r0.getN()
            java.math.BigInteger r1 = org.bouncycastle.math.ec.ECConstants.ONE
            int r1 = r7.compareTo(r1)
            if (r1 < 0) goto L7e
            int r1 = r7.compareTo(r0)
            if (r1 < 0) goto L30
            goto L7e
        L30:
            java.math.BigInteger r1 = org.bouncycastle.math.ec.ECConstants.ONE
            int r1 = r8.compareTo(r1)
            if (r1 < 0) goto L7e
            int r1 = r8.compareTo(r0)
            if (r1 < 0) goto L3f
            goto L7e
        L3f:
            java.math.BigInteger r6 = r6.modInverse(r0)
            java.math.BigInteger r8 = r8.multiply(r6)
            java.math.BigInteger r8 = r8.mod(r0)
            java.math.BigInteger r1 = r0.subtract(r7)
            java.math.BigInteger r6 = r1.multiply(r6)
            java.math.BigInteger r6 = r6.mod(r0)
            org.bouncycastle.crypto.params.ECKeyParameters r1 = r5.key
            org.bouncycastle.crypto.params.ECDomainParameters r1 = r1.getParameters()
            org.bouncycastle.math.ec.ECPoint r1 = r1.getG()
            org.bouncycastle.crypto.params.ECKeyParameters r2 = r5.key
            org.bouncycastle.crypto.params.ECPublicKeyParameters r2 = (org.bouncycastle.crypto.params.ECPublicKeyParameters) r2
            org.bouncycastle.math.ec.ECPoint r2 = r2.getQ()
            org.bouncycastle.math.ec.ECPoint r6 = org.bouncycastle.math.ec.ECAlgorithms.sumOfTwoMultiplies(r1, r8, r2, r6)
            org.bouncycastle.math.ec.ECFieldElement r6 = r6.getX()
            java.math.BigInteger r6 = r6.toBigInteger()
            java.math.BigInteger r6 = r6.mod(r0)
            boolean r6 = r6.equals(r7)
            return r6
        L7e:
            return r2
    }
}
