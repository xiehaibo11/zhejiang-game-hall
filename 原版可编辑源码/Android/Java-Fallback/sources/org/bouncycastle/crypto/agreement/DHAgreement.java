package org.bouncycastle.crypto.agreement;

public class DHAgreement {
    private org.bouncycastle.crypto.params.DHParameters dhParams;
    private org.bouncycastle.crypto.params.DHPrivateKeyParameters key;
    private java.math.BigInteger privateValue;
    private java.security.SecureRandom random;

    public DHAgreement() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.math.BigInteger calculateAgreement(org.bouncycastle.crypto.params.DHPublicKeyParameters r3, java.math.BigInteger r4) {
            r2 = this;
            org.bouncycastle.crypto.params.DHParameters r0 = r3.getParameters()
            org.bouncycastle.crypto.params.DHParameters r1 = r2.dhParams
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3b
            org.bouncycastle.crypto.params.DHPrivateKeyParameters r0 = r2.key
            java.math.BigInteger r0 = r0.getX()
            org.bouncycastle.crypto.params.DHParameters r1 = r2.dhParams
            java.math.BigInteger r1 = r1.getP()
            java.math.BigInteger r4 = r4.modPow(r0, r1)
            java.math.BigInteger r3 = r3.getY()
            java.math.BigInteger r0 = r2.privateValue
            org.bouncycastle.crypto.params.DHParameters r1 = r2.dhParams
            java.math.BigInteger r1 = r1.getP()
            java.math.BigInteger r3 = r3.modPow(r0, r1)
            java.math.BigInteger r3 = r4.multiply(r3)
            org.bouncycastle.crypto.params.DHParameters r4 = r2.dhParams
            java.math.BigInteger r4 = r4.getP()
            java.math.BigInteger r3 = r3.mod(r4)
            return r3
        L3b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Diffie-Hellman public key has wrong parameters."
            r3.<init>(r4)
            throw r3
    }

    public java.math.BigInteger calculateMessage() {
            r3 = this;
            org.bouncycastle.crypto.params.DHParameters r0 = r3.dhParams
            java.math.BigInteger r0 = r0.getP()
            int r0 = r0.bitLength()
            int r0 = r0 + (-1)
            java.math.BigInteger r1 = new java.math.BigInteger
            java.security.SecureRandom r2 = r3.random
            r1.<init>(r0, r2)
            int r0 = r0 + (-1)
            java.math.BigInteger r0 = r1.setBit(r0)
            r3.privateValue = r0
            org.bouncycastle.crypto.params.DHParameters r0 = r3.dhParams
            java.math.BigInteger r0 = r0.getG()
            java.math.BigInteger r1 = r3.privateValue
            org.bouncycastle.crypto.params.DHParameters r2 = r3.dhParams
            java.math.BigInteger r2 = r2.getP()
            java.math.BigInteger r0 = r0.modPow(r1, r2)
            return r0
    }

    public void init(org.bouncycastle.crypto.CipherParameters r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r0 == 0) goto L11
            org.bouncycastle.crypto.params.ParametersWithRandom r2 = (org.bouncycastle.crypto.params.ParametersWithRandom) r2
            java.security.SecureRandom r0 = r2.getRandom()
            r1.random = r0
            org.bouncycastle.crypto.CipherParameters r2 = r2.getParameters()
            goto L18
        L11:
            java.security.SecureRandom r0 = new java.security.SecureRandom
            r0.<init>()
            r1.random = r0
        L18:
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r2 = (org.bouncycastle.crypto.params.AsymmetricKeyParameter) r2
            boolean r0 = r2 instanceof org.bouncycastle.crypto.params.DHPrivateKeyParameters
            if (r0 == 0) goto L29
            org.bouncycastle.crypto.params.DHPrivateKeyParameters r2 = (org.bouncycastle.crypto.params.DHPrivateKeyParameters) r2
            r1.key = r2
            org.bouncycastle.crypto.params.DHParameters r2 = r2.getParameters()
            r1.dhParams = r2
            return
        L29:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "DHEngine expects DHPrivateKeyParameters"
            r2.<init>(r0)
            throw r2
    }
}
