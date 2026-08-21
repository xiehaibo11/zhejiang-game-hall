package org.bouncycastle.jce.provider;

class RSAUtil {
    RSAUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    static org.bouncycastle.crypto.params.RSAKeyParameters generatePrivateKeyParameter(java.security.interfaces.RSAPrivateKey r10) {
            boolean r0 = r10 instanceof java.security.interfaces.RSAPrivateCrtKey
            if (r0 == 0) goto L2d
            java.security.interfaces.RSAPrivateCrtKey r10 = (java.security.interfaces.RSAPrivateCrtKey) r10
            org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters r9 = new org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters
            java.math.BigInteger r1 = r10.getModulus()
            java.math.BigInteger r2 = r10.getPublicExponent()
            java.math.BigInteger r3 = r10.getPrivateExponent()
            java.math.BigInteger r4 = r10.getPrimeP()
            java.math.BigInteger r5 = r10.getPrimeQ()
            java.math.BigInteger r6 = r10.getPrimeExponentP()
            java.math.BigInteger r7 = r10.getPrimeExponentQ()
            java.math.BigInteger r8 = r10.getCrtCoefficient()
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return r9
        L2d:
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = new org.bouncycastle.crypto.params.RSAKeyParameters
            r1 = 1
            java.math.BigInteger r2 = r10.getModulus()
            java.math.BigInteger r10 = r10.getPrivateExponent()
            r0.<init>(r1, r2, r10)
            return r0
    }

    static org.bouncycastle.crypto.params.RSAKeyParameters generatePublicKeyParameter(java.security.interfaces.RSAPublicKey r3) {
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = new org.bouncycastle.crypto.params.RSAKeyParameters
            java.math.BigInteger r1 = r3.getModulus()
            java.math.BigInteger r3 = r3.getPublicExponent()
            r2 = 0
            r0.<init>(r2, r1, r3)
            return r0
    }

    static boolean isRsaOid(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.rsaEncryption
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L23
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509ObjectIdentifiers.id_ea_rsa
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L23
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L23
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSAES_OAEP
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L21
            goto L23
        L21:
            r1 = 0
            goto L24
        L23:
            r1 = 1
        L24:
            return r1
    }
}
