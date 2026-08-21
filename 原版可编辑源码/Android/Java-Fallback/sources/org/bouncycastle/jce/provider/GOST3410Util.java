package org.bouncycastle.jce.provider;

public class GOST3410Util {
    public GOST3410Util() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter generatePrivateKeyParameter(java.security.PrivateKey r5) throws java.security.InvalidKeyException {
            boolean r0 = r5 instanceof org.bouncycastle.jce.interfaces.GOST3410PrivateKey
            if (r0 == 0) goto L29
            org.bouncycastle.jce.interfaces.GOST3410PrivateKey r5 = (org.bouncycastle.jce.interfaces.GOST3410PrivateKey) r5
            org.bouncycastle.jce.interfaces.GOST3410Params r0 = r5.getParameters()
            org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec r0 = r0.getPublicKeyParameters()
            org.bouncycastle.crypto.params.GOST3410PrivateKeyParameters r1 = new org.bouncycastle.crypto.params.GOST3410PrivateKeyParameters
            java.math.BigInteger r5 = r5.getX()
            org.bouncycastle.crypto.params.GOST3410Parameters r2 = new org.bouncycastle.crypto.params.GOST3410Parameters
            java.math.BigInteger r3 = r0.getP()
            java.math.BigInteger r4 = r0.getQ()
            java.math.BigInteger r0 = r0.getA()
            r2.<init>(r3, r4, r0)
            r1.<init>(r5, r2)
            return r1
        L29:
            java.security.InvalidKeyException r5 = new java.security.InvalidKeyException
            java.lang.String r0 = "can't identify GOST3410 private key."
            r5.<init>(r0)
            throw r5
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter generatePublicKeyParameter(java.security.PublicKey r5) throws java.security.InvalidKeyException {
            boolean r0 = r5 instanceof org.bouncycastle.jce.interfaces.GOST3410PublicKey
            if (r0 == 0) goto L29
            org.bouncycastle.jce.interfaces.GOST3410PublicKey r5 = (org.bouncycastle.jce.interfaces.GOST3410PublicKey) r5
            org.bouncycastle.jce.interfaces.GOST3410Params r0 = r5.getParameters()
            org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec r0 = r0.getPublicKeyParameters()
            org.bouncycastle.crypto.params.GOST3410PublicKeyParameters r1 = new org.bouncycastle.crypto.params.GOST3410PublicKeyParameters
            java.math.BigInteger r5 = r5.getY()
            org.bouncycastle.crypto.params.GOST3410Parameters r2 = new org.bouncycastle.crypto.params.GOST3410Parameters
            java.math.BigInteger r3 = r0.getP()
            java.math.BigInteger r4 = r0.getQ()
            java.math.BigInteger r0 = r0.getA()
            r2.<init>(r3, r4, r0)
            r1.<init>(r5, r2)
            return r1
        L29:
            java.security.InvalidKeyException r0 = new java.security.InvalidKeyException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "can't identify GOST3410 public key: "
            r1.append(r2)
            java.lang.Class r5 = r5.getClass()
            java.lang.String r5 = r5.getName()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }
}
