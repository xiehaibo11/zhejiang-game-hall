package org.bouncycastle.jce.provider;

public class DHUtil {
    public DHUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter generatePrivateKeyParameter(java.security.PrivateKey r6) throws java.security.InvalidKeyException {
            boolean r0 = r6 instanceof javax.crypto.interfaces.DHPrivateKey
            if (r0 == 0) goto L2e
            javax.crypto.interfaces.DHPrivateKey r6 = (javax.crypto.interfaces.DHPrivateKey) r6
            org.bouncycastle.crypto.params.DHPrivateKeyParameters r0 = new org.bouncycastle.crypto.params.DHPrivateKeyParameters
            java.math.BigInteger r1 = r6.getX()
            org.bouncycastle.crypto.params.DHParameters r2 = new org.bouncycastle.crypto.params.DHParameters
            javax.crypto.spec.DHParameterSpec r3 = r6.getParams()
            java.math.BigInteger r3 = r3.getP()
            javax.crypto.spec.DHParameterSpec r4 = r6.getParams()
            java.math.BigInteger r4 = r4.getG()
            r5 = 0
            javax.crypto.spec.DHParameterSpec r6 = r6.getParams()
            int r6 = r6.getL()
            r2.<init>(r3, r4, r5, r6)
            r0.<init>(r1, r2)
            return r0
        L2e:
            java.security.InvalidKeyException r6 = new java.security.InvalidKeyException
            java.lang.String r0 = "can't identify DH private key."
            r6.<init>(r0)
            throw r6
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter generatePublicKeyParameter(java.security.PublicKey r6) throws java.security.InvalidKeyException {
            boolean r0 = r6 instanceof javax.crypto.interfaces.DHPublicKey
            if (r0 == 0) goto L2e
            javax.crypto.interfaces.DHPublicKey r6 = (javax.crypto.interfaces.DHPublicKey) r6
            org.bouncycastle.crypto.params.DHPublicKeyParameters r0 = new org.bouncycastle.crypto.params.DHPublicKeyParameters
            java.math.BigInteger r1 = r6.getY()
            org.bouncycastle.crypto.params.DHParameters r2 = new org.bouncycastle.crypto.params.DHParameters
            javax.crypto.spec.DHParameterSpec r3 = r6.getParams()
            java.math.BigInteger r3 = r3.getP()
            javax.crypto.spec.DHParameterSpec r4 = r6.getParams()
            java.math.BigInteger r4 = r4.getG()
            r5 = 0
            javax.crypto.spec.DHParameterSpec r6 = r6.getParams()
            int r6 = r6.getL()
            r2.<init>(r3, r4, r5, r6)
            r0.<init>(r1, r2)
            return r0
        L2e:
            java.security.InvalidKeyException r6 = new java.security.InvalidKeyException
            java.lang.String r0 = "can't identify DH public key."
            r6.<init>(r0)
            throw r6
    }
}
