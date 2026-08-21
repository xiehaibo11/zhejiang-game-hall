package org.bouncycastle.crypto.signers;

public class ECNRSigner implements org.bouncycastle.crypto.DSA {
    private boolean forSigning;
    private org.bouncycastle.crypto.params.ECKeyParameters key;
    private java.security.SecureRandom random;

    public ECNRSigner() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.math.BigInteger[] generateSignature(byte[] r8) {
            r7 = this;
            boolean r0 = r7.forSigning
            if (r0 == 0) goto L88
            org.bouncycastle.crypto.params.ECKeyParameters r0 = r7.key
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r0 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r0
            org.bouncycastle.crypto.params.ECDomainParameters r0 = r0.getParameters()
            java.math.BigInteger r0 = r0.getN()
            int r1 = r0.bitLength()
            java.math.BigInteger r2 = new java.math.BigInteger
            r3 = 1
            r2.<init>(r3, r8)
            int r8 = r2.bitLength()
            org.bouncycastle.crypto.params.ECKeyParameters r4 = r7.key
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r4 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r4
            if (r8 > r1) goto L80
        L24:
            org.bouncycastle.crypto.generators.ECKeyPairGenerator r8 = new org.bouncycastle.crypto.generators.ECKeyPairGenerator
            r8.<init>()
            org.bouncycastle.crypto.params.ECKeyGenerationParameters r1 = new org.bouncycastle.crypto.params.ECKeyGenerationParameters
            org.bouncycastle.crypto.params.ECDomainParameters r5 = r4.getParameters()
            java.security.SecureRandom r6 = r7.random
            r1.<init>(r5, r6)
            r8.init(r1)
            org.bouncycastle.crypto.AsymmetricCipherKeyPair r8 = r8.generateKeyPair()
            org.bouncycastle.crypto.CipherParameters r1 = r8.getPublic()
            org.bouncycastle.crypto.params.ECPublicKeyParameters r1 = (org.bouncycastle.crypto.params.ECPublicKeyParameters) r1
            org.bouncycastle.math.ec.ECPoint r1 = r1.getQ()
            org.bouncycastle.math.ec.ECFieldElement r1 = r1.getX()
            java.math.BigInteger r1 = r1.toBigInteger()
            java.math.BigInteger r1 = r1.add(r2)
            java.math.BigInteger r1 = r1.mod(r0)
            java.math.BigInteger r5 = org.bouncycastle.math.ec.ECConstants.ZERO
            boolean r5 = r1.equals(r5)
            if (r5 != 0) goto L24
            java.math.BigInteger r2 = r4.getD()
            org.bouncycastle.crypto.CipherParameters r8 = r8.getPrivate()
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r8 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r8
            java.math.BigInteger r8 = r8.getD()
            java.math.BigInteger r2 = r1.multiply(r2)
            java.math.BigInteger r8 = r8.subtract(r2)
            java.math.BigInteger r8 = r8.mod(r0)
            r0 = 2
            java.math.BigInteger[] r0 = new java.math.BigInteger[r0]
            r2 = 0
            r0[r2] = r1
            r0[r3] = r8
            return r0
        L80:
            org.bouncycastle.crypto.DataLengthException r8 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r0 = "input too large for ECNR key."
            r8.<init>(r0)
            throw r8
        L88:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.String r0 = "not initialised for signing"
            r8.<init>(r0)
            throw r8
    }

    @Override
    public void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2) {
            r0 = this;
            r0.forSigning = r1
            if (r1 == 0) goto L23
            boolean r1 = r2 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r1 == 0) goto L19
            org.bouncycastle.crypto.params.ParametersWithRandom r2 = (org.bouncycastle.crypto.params.ParametersWithRandom) r2
            java.security.SecureRandom r1 = r2.getRandom()
            r0.random = r1
            org.bouncycastle.crypto.CipherParameters r1 = r2.getParameters()
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r1 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r1
            r0.key = r1
            goto L27
        L19:
            java.security.SecureRandom r1 = new java.security.SecureRandom
            r1.<init>()
            r0.random = r1
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r2 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r2
            goto L25
        L23:
            org.bouncycastle.crypto.params.ECPublicKeyParameters r2 = (org.bouncycastle.crypto.params.ECPublicKeyParameters) r2
        L25:
            r0.key = r2
        L27:
            return
    }

    @Override
    public boolean verifySignature(byte[] r6, java.math.BigInteger r7, java.math.BigInteger r8) {
            r5 = this;
            boolean r0 = r5.forSigning
            if (r0 != 0) goto L6d
            org.bouncycastle.crypto.params.ECKeyParameters r0 = r5.key
            org.bouncycastle.crypto.params.ECPublicKeyParameters r0 = (org.bouncycastle.crypto.params.ECPublicKeyParameters) r0
            org.bouncycastle.crypto.params.ECDomainParameters r1 = r0.getParameters()
            java.math.BigInteger r1 = r1.getN()
            int r2 = r1.bitLength()
            java.math.BigInteger r3 = new java.math.BigInteger
            r4 = 1
            r3.<init>(r4, r6)
            int r6 = r3.bitLength()
            if (r6 > r2) goto L65
            java.math.BigInteger r6 = org.bouncycastle.math.ec.ECConstants.ONE
            int r6 = r7.compareTo(r6)
            r2 = 0
            if (r6 < 0) goto L64
            int r6 = r7.compareTo(r1)
            if (r6 < 0) goto L30
            goto L64
        L30:
            java.math.BigInteger r6 = org.bouncycastle.math.ec.ECConstants.ZERO
            int r6 = r8.compareTo(r6)
            if (r6 < 0) goto L64
            int r6 = r8.compareTo(r1)
            if (r6 < 0) goto L3f
            goto L64
        L3f:
            org.bouncycastle.crypto.params.ECDomainParameters r6 = r0.getParameters()
            org.bouncycastle.math.ec.ECPoint r6 = r6.getG()
            org.bouncycastle.math.ec.ECPoint r0 = r0.getQ()
            org.bouncycastle.math.ec.ECPoint r6 = org.bouncycastle.math.ec.ECAlgorithms.sumOfTwoMultiplies(r6, r8, r0, r7)
            org.bouncycastle.math.ec.ECFieldElement r6 = r6.getX()
            java.math.BigInteger r6 = r6.toBigInteger()
            java.math.BigInteger r6 = r7.subtract(r6)
            java.math.BigInteger r6 = r6.mod(r1)
            boolean r6 = r6.equals(r3)
            return r6
        L64:
            return r2
        L65:
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "input too large for ECNR key."
            r6.<init>(r7)
            throw r6
        L6d:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r7 = "not initialised for verifying"
            r6.<init>(r7)
            throw r6
    }
}
