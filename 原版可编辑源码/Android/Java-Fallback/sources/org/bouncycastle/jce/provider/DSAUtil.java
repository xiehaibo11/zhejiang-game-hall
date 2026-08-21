package org.bouncycastle.jce.provider;

public class DSAUtil {
    public DSAUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter generatePrivateKeyParameter(java.security.PrivateKey r5) throws java.security.InvalidKeyException {
            boolean r0 = r5 instanceof java.security.interfaces.DSAPrivateKey
            if (r0 == 0) goto L2d
            java.security.interfaces.DSAPrivateKey r5 = (java.security.interfaces.DSAPrivateKey) r5
            org.bouncycastle.crypto.params.DSAPrivateKeyParameters r0 = new org.bouncycastle.crypto.params.DSAPrivateKeyParameters
            java.math.BigInteger r1 = r5.getX()
            org.bouncycastle.crypto.params.DSAParameters r2 = new org.bouncycastle.crypto.params.DSAParameters
            java.security.interfaces.DSAParams r3 = r5.getParams()
            java.math.BigInteger r3 = r3.getP()
            java.security.interfaces.DSAParams r4 = r5.getParams()
            java.math.BigInteger r4 = r4.getQ()
            java.security.interfaces.DSAParams r5 = r5.getParams()
            java.math.BigInteger r5 = r5.getG()
            r2.<init>(r3, r4, r5)
            r0.<init>(r1, r2)
            return r0
        L2d:
            java.security.InvalidKeyException r5 = new java.security.InvalidKeyException
            java.lang.String r0 = "can't identify DSA private key."
            r5.<init>(r0)
            throw r5
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter generatePublicKeyParameter(java.security.PublicKey r5) throws java.security.InvalidKeyException {
            boolean r0 = r5 instanceof java.security.interfaces.DSAPublicKey
            if (r0 == 0) goto L2d
            java.security.interfaces.DSAPublicKey r5 = (java.security.interfaces.DSAPublicKey) r5
            org.bouncycastle.crypto.params.DSAPublicKeyParameters r0 = new org.bouncycastle.crypto.params.DSAPublicKeyParameters
            java.math.BigInteger r1 = r5.getY()
            org.bouncycastle.crypto.params.DSAParameters r2 = new org.bouncycastle.crypto.params.DSAParameters
            java.security.interfaces.DSAParams r3 = r5.getParams()
            java.math.BigInteger r3 = r3.getP()
            java.security.interfaces.DSAParams r4 = r5.getParams()
            java.math.BigInteger r4 = r4.getQ()
            java.security.interfaces.DSAParams r5 = r5.getParams()
            java.math.BigInteger r5 = r5.getG()
            r2.<init>(r3, r4, r5)
            r0.<init>(r1, r2)
            return r0
        L2d:
            java.security.InvalidKeyException r0 = new java.security.InvalidKeyException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "can't identify DSA public key: "
            r1.append(r2)
            java.lang.Class r5 = r5.getClass()
            java.lang.String r5 = r5.getName()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }
}
