package org.bouncycastle.jce.provider;

public class ECUtil {
    public ECUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    static int[] convertMidTerms(int[] r6) {
            r0 = 3
            int[] r1 = new int[r0]
            int r2 = r6.length
            r3 = 0
            r4 = 1
            if (r2 != r4) goto Ld
            r6 = r6[r3]
            r1[r3] = r6
            goto L76
        Ld:
            int r2 = r6.length
            if (r2 != r0) goto L77
            r0 = r6[r3]
            r2 = r6[r4]
            r5 = 2
            if (r0 >= r2) goto L39
            r0 = r6[r3]
            r2 = r6[r5]
            if (r0 >= r2) goto L39
            r0 = r6[r3]
            r1[r3] = r0
            r0 = r6[r4]
            r2 = r6[r5]
            if (r0 >= r2) goto L30
            r0 = r6[r4]
            r1[r4] = r0
            r6 = r6[r5]
            r1[r5] = r6
            goto L76
        L30:
            r0 = r6[r5]
            r1[r4] = r0
            r6 = r6[r4]
            r1[r5] = r6
            goto L76
        L39:
            r0 = r6[r4]
            r2 = r6[r5]
            if (r0 >= r2) goto L5b
            r0 = r6[r4]
            r1[r3] = r0
            r0 = r6[r3]
            r2 = r6[r5]
            if (r0 >= r2) goto L52
            r0 = r6[r3]
            r1[r4] = r0
            r6 = r6[r5]
            r1[r5] = r6
            goto L76
        L52:
            r0 = r6[r5]
            r1[r4] = r0
            r6 = r6[r3]
            r1[r5] = r6
            goto L76
        L5b:
            r0 = r6[r5]
            r1[r3] = r0
            r0 = r6[r3]
            r2 = r6[r4]
            if (r0 >= r2) goto L6e
            r0 = r6[r3]
            r1[r4] = r0
            r6 = r6[r4]
            r1[r5] = r6
            goto L76
        L6e:
            r0 = r6[r4]
            r1[r4] = r0
            r6 = r6[r3]
            r1[r5] = r6
        L76:
            return r1
        L77:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Only Trinomials and pentanomials supported"
            r6.<init>(r0)
            throw r6
    }

    static org.bouncycastle.crypto.params.AsymmetricKeyParameter generatePrivateKeyParameter(java.security.PrivateKey r9) throws java.security.InvalidKeyException {
            boolean r0 = r9 instanceof org.bouncycastle.jce.interfaces.ECPrivateKey
            if (r0 == 0) goto L34
            org.bouncycastle.jce.interfaces.ECPrivateKey r9 = (org.bouncycastle.jce.interfaces.ECPrivateKey) r9
            org.bouncycastle.jce.spec.ECParameterSpec r0 = r9.getParameters()
            if (r0 != 0) goto L10
            org.bouncycastle.jce.spec.ECParameterSpec r0 = org.bouncycastle.jce.provider.ProviderUtil.getEcImplicitlyCa()
        L10:
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r1 = new org.bouncycastle.crypto.params.ECPrivateKeyParameters
            java.math.BigInteger r9 = r9.getD()
            org.bouncycastle.crypto.params.ECDomainParameters r8 = new org.bouncycastle.crypto.params.ECDomainParameters
            org.bouncycastle.math.ec.ECCurve r3 = r0.getCurve()
            org.bouncycastle.math.ec.ECPoint r4 = r0.getG()
            java.math.BigInteger r5 = r0.getN()
            java.math.BigInteger r6 = r0.getH()
            byte[] r7 = r0.getSeed()
            r2 = r8
            r2.<init>(r3, r4, r5, r6, r7)
            r1.<init>(r9, r8)
            return r1
        L34:
            java.security.InvalidKeyException r9 = new java.security.InvalidKeyException
            java.lang.String r0 = "can't identify EC private key."
            r9.<init>(r0)
            throw r9
    }

    static org.bouncycastle.crypto.params.AsymmetricKeyParameter generatePublicKeyParameter(java.security.PublicKey r9) throws java.security.InvalidKeyException {
            boolean r0 = r9 instanceof org.bouncycastle.jce.interfaces.ECPublicKey
            if (r0 == 0) goto L5a
            org.bouncycastle.jce.interfaces.ECPublicKey r9 = (org.bouncycastle.jce.interfaces.ECPublicKey) r9
            org.bouncycastle.jce.spec.ECParameterSpec r0 = r9.getParameters()
            if (r0 != 0) goto L36
            org.bouncycastle.jce.spec.ECParameterSpec r0 = org.bouncycastle.jce.provider.ProviderUtil.getEcImplicitlyCa()
            org.bouncycastle.crypto.params.ECPublicKeyParameters r1 = new org.bouncycastle.crypto.params.ECPublicKeyParameters
            org.bouncycastle.jce.provider.JCEECPublicKey r9 = (org.bouncycastle.jce.provider.JCEECPublicKey) r9
            org.bouncycastle.math.ec.ECPoint r9 = r9.engineGetQ()
            org.bouncycastle.crypto.params.ECDomainParameters r8 = new org.bouncycastle.crypto.params.ECDomainParameters
            org.bouncycastle.math.ec.ECCurve r3 = r0.getCurve()
            org.bouncycastle.math.ec.ECPoint r4 = r0.getG()
            java.math.BigInteger r5 = r0.getN()
            java.math.BigInteger r6 = r0.getH()
            byte[] r7 = r0.getSeed()
            r2 = r8
            r2.<init>(r3, r4, r5, r6, r7)
            r1.<init>(r9, r8)
            return r1
        L36:
            org.bouncycastle.crypto.params.ECPublicKeyParameters r1 = new org.bouncycastle.crypto.params.ECPublicKeyParameters
            org.bouncycastle.math.ec.ECPoint r9 = r9.getQ()
            org.bouncycastle.crypto.params.ECDomainParameters r8 = new org.bouncycastle.crypto.params.ECDomainParameters
            org.bouncycastle.math.ec.ECCurve r3 = r0.getCurve()
            org.bouncycastle.math.ec.ECPoint r4 = r0.getG()
            java.math.BigInteger r5 = r0.getN()
            java.math.BigInteger r6 = r0.getH()
            byte[] r7 = r0.getSeed()
            r2 = r8
            r2.<init>(r3, r4, r5, r6, r7)
            r1.<init>(r9, r8)
            return r1
        L5a:
            java.security.InvalidKeyException r9 = new java.security.InvalidKeyException
            java.lang.String r0 = "can't identify EC public key."
            r9.<init>(r0)
            throw r9
    }

    public static java.lang.String getCurveName(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            java.lang.String r0 = org.bouncycastle.asn1.x9.X962NamedCurves.getName(r1)
            if (r0 != 0) goto L16
            java.lang.String r0 = org.bouncycastle.asn1.sec.SECNamedCurves.getName(r1)
            if (r0 != 0) goto L10
            java.lang.String r0 = org.bouncycastle.asn1.nist.NISTNamedCurves.getName(r1)
        L10:
            if (r0 != 0) goto L16
            java.lang.String r0 = org.bouncycastle.asn1.teletrust.TeleTrusTNamedCurves.getName(r1)
        L16:
            return r0
    }

    public static org.bouncycastle.asn1.x9.X9ECParameters getNamedCurveByOid(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.x9.X962NamedCurves.getByOID(r1)
            if (r0 != 0) goto L16
            org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.sec.SECNamedCurves.getByOID(r1)
            if (r0 != 0) goto L10
            org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.nist.NISTNamedCurves.getByOID(r1)
        L10:
            if (r0 != 0) goto L16
            org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.teletrust.TeleTrusTNamedCurves.getByOID(r1)
        L16:
            return r0
    }

    public static org.bouncycastle.asn1.DERObjectIdentifier getNamedCurveOid(java.lang.String r1) {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x9.X962NamedCurves.getOID(r1)
            if (r0 != 0) goto L1c
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.sec.SECNamedCurves.getOID(r1)
            if (r0 != 0) goto L10
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTNamedCurves.getOID(r1)
        L10:
            if (r0 != 0) goto L16
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.teletrust.TeleTrusTNamedCurves.getOID(r1)
        L16:
            if (r0 != 0) goto L1c
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.getOID(r1)
        L1c:
            return r0
    }
}
