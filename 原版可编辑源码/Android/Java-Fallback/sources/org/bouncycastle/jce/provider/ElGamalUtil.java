package org.bouncycastle.jce.provider;

public class ElGamalUtil {
    public ElGamalUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter generatePrivateKeyParameter(java.security.PrivateKey r4) throws java.security.InvalidKeyException {
            boolean r0 = r4 instanceof org.bouncycastle.jce.interfaces.ElGamalPrivateKey
            if (r0 == 0) goto L25
            org.bouncycastle.jce.interfaces.ElGamalPrivateKey r4 = (org.bouncycastle.jce.interfaces.ElGamalPrivateKey) r4
            org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters r0 = new org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters
            java.math.BigInteger r1 = r4.getX()
            org.bouncycastle.crypto.params.ElGamalParameters r2 = new org.bouncycastle.crypto.params.ElGamalParameters
            org.bouncycastle.jce.spec.ElGamalParameterSpec r3 = r4.getParameters()
            java.math.BigInteger r3 = r3.getP()
            org.bouncycastle.jce.spec.ElGamalParameterSpec r4 = r4.getParameters()
            java.math.BigInteger r4 = r4.getG()
            r2.<init>(r3, r4)
            r0.<init>(r1, r2)
            return r0
        L25:
            boolean r0 = r4 instanceof javax.crypto.interfaces.DHPrivateKey
            if (r0 == 0) goto L4a
            javax.crypto.interfaces.DHPrivateKey r4 = (javax.crypto.interfaces.DHPrivateKey) r4
            org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters r0 = new org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters
            java.math.BigInteger r1 = r4.getX()
            org.bouncycastle.crypto.params.ElGamalParameters r2 = new org.bouncycastle.crypto.params.ElGamalParameters
            javax.crypto.spec.DHParameterSpec r3 = r4.getParams()
            java.math.BigInteger r3 = r3.getP()
            javax.crypto.spec.DHParameterSpec r4 = r4.getParams()
            java.math.BigInteger r4 = r4.getG()
            r2.<init>(r3, r4)
            r0.<init>(r1, r2)
            return r0
        L4a:
            java.security.InvalidKeyException r4 = new java.security.InvalidKeyException
            java.lang.String r0 = "can't identify private key for El Gamal."
            r4.<init>(r0)
            throw r4
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter generatePublicKeyParameter(java.security.PublicKey r4) throws java.security.InvalidKeyException {
            boolean r0 = r4 instanceof org.bouncycastle.jce.interfaces.ElGamalPublicKey
            if (r0 == 0) goto L25
            org.bouncycastle.jce.interfaces.ElGamalPublicKey r4 = (org.bouncycastle.jce.interfaces.ElGamalPublicKey) r4
            org.bouncycastle.crypto.params.ElGamalPublicKeyParameters r0 = new org.bouncycastle.crypto.params.ElGamalPublicKeyParameters
            java.math.BigInteger r1 = r4.getY()
            org.bouncycastle.crypto.params.ElGamalParameters r2 = new org.bouncycastle.crypto.params.ElGamalParameters
            org.bouncycastle.jce.spec.ElGamalParameterSpec r3 = r4.getParameters()
            java.math.BigInteger r3 = r3.getP()
            org.bouncycastle.jce.spec.ElGamalParameterSpec r4 = r4.getParameters()
            java.math.BigInteger r4 = r4.getG()
            r2.<init>(r3, r4)
            r0.<init>(r1, r2)
            return r0
        L25:
            boolean r0 = r4 instanceof javax.crypto.interfaces.DHPublicKey
            if (r0 == 0) goto L4a
            javax.crypto.interfaces.DHPublicKey r4 = (javax.crypto.interfaces.DHPublicKey) r4
            org.bouncycastle.crypto.params.ElGamalPublicKeyParameters r0 = new org.bouncycastle.crypto.params.ElGamalPublicKeyParameters
            java.math.BigInteger r1 = r4.getY()
            org.bouncycastle.crypto.params.ElGamalParameters r2 = new org.bouncycastle.crypto.params.ElGamalParameters
            javax.crypto.spec.DHParameterSpec r3 = r4.getParams()
            java.math.BigInteger r3 = r3.getP()
            javax.crypto.spec.DHParameterSpec r4 = r4.getParams()
            java.math.BigInteger r4 = r4.getG()
            r2.<init>(r3, r4)
            r0.<init>(r1, r2)
            return r0
        L4a:
            java.security.InvalidKeyException r4 = new java.security.InvalidKeyException
            java.lang.String r0 = "can't identify public key for El Gamal."
            r4.<init>(r0)
            throw r4
    }
}
