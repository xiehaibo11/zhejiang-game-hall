package org.bouncycastle.crypto.agreement;

public class ECDHBasicAgreement implements org.bouncycastle.crypto.BasicAgreement {
    private org.bouncycastle.crypto.params.ECPrivateKeyParameters key;

    public ECDHBasicAgreement() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.math.BigInteger calculateAgreement(org.bouncycastle.crypto.CipherParameters r2) {
            r1 = this;
            org.bouncycastle.crypto.params.ECPublicKeyParameters r2 = (org.bouncycastle.crypto.params.ECPublicKeyParameters) r2
            org.bouncycastle.math.ec.ECPoint r2 = r2.getQ()
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r0 = r1.key
            java.math.BigInteger r0 = r0.getD()
            org.bouncycastle.math.ec.ECPoint r2 = r2.multiply(r0)
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getX()
            java.math.BigInteger r2 = r2.toBigInteger()
            return r2
    }

    @Override
    public void init(org.bouncycastle.crypto.CipherParameters r1) {
            r0 = this;
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r1 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r1
            r0.key = r1
            return
    }
}
