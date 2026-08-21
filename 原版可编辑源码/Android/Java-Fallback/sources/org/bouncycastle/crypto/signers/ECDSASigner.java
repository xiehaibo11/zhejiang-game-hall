package org.bouncycastle.crypto.signers;

public class ECDSASigner implements org.bouncycastle.math.ec.ECConstants, org.bouncycastle.crypto.DSA {
    org.bouncycastle.crypto.params.ECKeyParameters key;
    java.security.SecureRandom random;

    public ECDSASigner() {
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
            if (r0 <= r1) goto L10
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
    public java.math.BigInteger[] generateSignature(byte[] r6) {
            r5 = this;
            org.bouncycastle.crypto.params.ECKeyParameters r0 = r5.key
            org.bouncycastle.crypto.params.ECDomainParameters r0 = r0.getParameters()
            java.math.BigInteger r0 = r0.getN()
            java.math.BigInteger r6 = r5.calculateE(r0, r6)
        Le:
            int r1 = r0.bitLength()
        L12:
            java.math.BigInteger r2 = new java.math.BigInteger
            java.security.SecureRandom r3 = r5.random
            r2.<init>(r1, r3)
            java.math.BigInteger r3 = org.bouncycastle.crypto.signers.ECDSASigner.ZERO
            boolean r3 = r2.equals(r3)
            if (r3 != 0) goto L12
            org.bouncycastle.crypto.params.ECKeyParameters r3 = r5.key
            org.bouncycastle.crypto.params.ECDomainParameters r3 = r3.getParameters()
            org.bouncycastle.math.ec.ECPoint r3 = r3.getG()
            org.bouncycastle.math.ec.ECPoint r3 = r3.multiply(r2)
            org.bouncycastle.math.ec.ECFieldElement r3 = r3.getX()
            java.math.BigInteger r3 = r3.toBigInteger()
            java.math.BigInteger r3 = r3.mod(r0)
            java.math.BigInteger r4 = org.bouncycastle.crypto.signers.ECDSASigner.ZERO
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L12
            org.bouncycastle.crypto.params.ECKeyParameters r1 = r5.key
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r1 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r1
            java.math.BigInteger r1 = r1.getD()
            java.math.BigInteger r2 = r2.modInverse(r0)
            java.math.BigInteger r1 = r1.multiply(r3)
            java.math.BigInteger r1 = r6.add(r1)
            java.math.BigInteger r1 = r2.multiply(r1)
            java.math.BigInteger r1 = r1.mod(r0)
            java.math.BigInteger r2 = org.bouncycastle.crypto.signers.ECDSASigner.ZERO
            boolean r2 = r1.equals(r2)
            if (r2 != 0) goto Le
            r6 = 2
            java.math.BigInteger[] r6 = new java.math.BigInteger[r6]
            r0 = 0
            r6[r0] = r3
            r0 = 1
            r6[r0] = r1
            return r6
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
    public boolean verifySignature(byte[] r4, java.math.BigInteger r5, java.math.BigInteger r6) {
            r3 = this;
            org.bouncycastle.crypto.params.ECKeyParameters r0 = r3.key
            org.bouncycastle.crypto.params.ECDomainParameters r0 = r0.getParameters()
            java.math.BigInteger r0 = r0.getN()
            java.math.BigInteger r4 = r3.calculateE(r0, r4)
            java.math.BigInteger r1 = org.bouncycastle.crypto.signers.ECDSASigner.ONE
            int r1 = r5.compareTo(r1)
            r2 = 0
            if (r1 < 0) goto L68
            int r1 = r5.compareTo(r0)
            if (r1 < 0) goto L1e
            goto L68
        L1e:
            java.math.BigInteger r1 = org.bouncycastle.crypto.signers.ECDSASigner.ONE
            int r1 = r6.compareTo(r1)
            if (r1 < 0) goto L68
            int r1 = r6.compareTo(r0)
            if (r1 < 0) goto L2d
            goto L68
        L2d:
            java.math.BigInteger r6 = r6.modInverse(r0)
            java.math.BigInteger r4 = r4.multiply(r6)
            java.math.BigInteger r4 = r4.mod(r0)
            java.math.BigInteger r6 = r5.multiply(r6)
            java.math.BigInteger r6 = r6.mod(r0)
            org.bouncycastle.crypto.params.ECKeyParameters r1 = r3.key
            org.bouncycastle.crypto.params.ECDomainParameters r1 = r1.getParameters()
            org.bouncycastle.math.ec.ECPoint r1 = r1.getG()
            org.bouncycastle.crypto.params.ECKeyParameters r2 = r3.key
            org.bouncycastle.crypto.params.ECPublicKeyParameters r2 = (org.bouncycastle.crypto.params.ECPublicKeyParameters) r2
            org.bouncycastle.math.ec.ECPoint r2 = r2.getQ()
            org.bouncycastle.math.ec.ECPoint r4 = org.bouncycastle.math.ec.ECAlgorithms.sumOfTwoMultiplies(r1, r4, r2, r6)
            org.bouncycastle.math.ec.ECFieldElement r4 = r4.getX()
            java.math.BigInteger r4 = r4.toBigInteger()
            java.math.BigInteger r4 = r4.mod(r0)
            boolean r4 = r4.equals(r5)
            return r4
        L68:
            return r2
    }
}
