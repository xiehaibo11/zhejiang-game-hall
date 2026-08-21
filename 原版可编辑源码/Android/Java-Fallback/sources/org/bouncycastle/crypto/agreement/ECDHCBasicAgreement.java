package org.bouncycastle.crypto.agreement;

public class ECDHCBasicAgreement implements org.bouncycastle.crypto.BasicAgreement {
    org.bouncycastle.crypto.params.ECPrivateKeyParameters key;

    public ECDHCBasicAgreement() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.math.BigInteger calculateAgreement(org.bouncycastle.crypto.CipherParameters r3) {
            r2 = this;
            org.bouncycastle.crypto.params.ECPublicKeyParameters r3 = (org.bouncycastle.crypto.params.ECPublicKeyParameters) r3
            org.bouncycastle.crypto.params.ECDomainParameters r0 = r3.getParameters()
            org.bouncycastle.math.ec.ECPoint r3 = r3.getQ()
            java.math.BigInteger r0 = r0.getH()
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r1 = r2.key
            java.math.BigInteger r1 = r1.getD()
            java.math.BigInteger r0 = r0.multiply(r1)
            org.bouncycastle.math.ec.ECPoint r3 = r3.multiply(r0)
            org.bouncycastle.math.ec.ECFieldElement r3 = r3.getX()
            java.math.BigInteger r3 = r3.toBigInteger()
            return r3
    }

    @Override
    public void init(org.bouncycastle.crypto.CipherParameters r1) {
            r0 = this;
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r1 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r1
            r0.key = r1
            return
    }
}
