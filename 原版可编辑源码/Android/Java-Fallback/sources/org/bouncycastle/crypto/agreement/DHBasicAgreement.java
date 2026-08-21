package org.bouncycastle.crypto.agreement;

public class DHBasicAgreement implements org.bouncycastle.crypto.BasicAgreement {
    private org.bouncycastle.crypto.params.DHParameters dhParams;
    private org.bouncycastle.crypto.params.DHPrivateKeyParameters key;

    public DHBasicAgreement() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.math.BigInteger calculateAgreement(org.bouncycastle.crypto.CipherParameters r3) {
            r2 = this;
            org.bouncycastle.crypto.params.DHPublicKeyParameters r3 = (org.bouncycastle.crypto.params.DHPublicKeyParameters) r3
            org.bouncycastle.crypto.params.DHParameters r0 = r3.getParameters()
            org.bouncycastle.crypto.params.DHParameters r1 = r2.dhParams
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L23
            java.math.BigInteger r3 = r3.getY()
            org.bouncycastle.crypto.params.DHPrivateKeyParameters r0 = r2.key
            java.math.BigInteger r0 = r0.getX()
            org.bouncycastle.crypto.params.DHParameters r1 = r2.dhParams
            java.math.BigInteger r1 = r1.getP()
            java.math.BigInteger r3 = r3.modPow(r0, r1)
            return r3
        L23:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Diffie-Hellman public key has wrong parameters."
            r3.<init>(r0)
            throw r3
    }

    @Override
    public void init(org.bouncycastle.crypto.CipherParameters r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r0 == 0) goto La
            org.bouncycastle.crypto.params.ParametersWithRandom r2 = (org.bouncycastle.crypto.params.ParametersWithRandom) r2
            org.bouncycastle.crypto.CipherParameters r2 = r2.getParameters()
        La:
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r2 = (org.bouncycastle.crypto.params.AsymmetricKeyParameter) r2
            boolean r0 = r2 instanceof org.bouncycastle.crypto.params.DHPrivateKeyParameters
            if (r0 == 0) goto L1b
            org.bouncycastle.crypto.params.DHPrivateKeyParameters r2 = (org.bouncycastle.crypto.params.DHPrivateKeyParameters) r2
            r1.key = r2
            org.bouncycastle.crypto.params.DHParameters r2 = r2.getParameters()
            r1.dhParams = r2
            return
        L1b:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "DHEngine expects DHPrivateKeyParameters"
            r2.<init>(r0)
            throw r2
    }
}
