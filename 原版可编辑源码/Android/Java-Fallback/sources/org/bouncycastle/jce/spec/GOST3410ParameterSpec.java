package org.bouncycastle.jce.spec;

public class GOST3410ParameterSpec implements java.security.spec.AlgorithmParameterSpec, org.bouncycastle.jce.interfaces.GOST3410Params {
    private java.lang.String digestParamSetOID;
    private java.lang.String encryptionParamSetOID;
    private java.lang.String keyParamSetOID;
    private org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec keyParameters;

    public GOST3410ParameterSpec(java.lang.String r3) {
            r2 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_CryptoProParamSet
            java.lang.String r0 = r0.getId()
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public GOST3410ParameterSpec(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public GOST3410ParameterSpec(java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r4 = this;
            r4.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier     // Catch: java.lang.IllegalArgumentException -> Ld
            r0.<init>(r5)     // Catch: java.lang.IllegalArgumentException -> Ld
            org.bouncycastle.asn1.cryptopro.GOST3410ParamSetParameters r0 = org.bouncycastle.asn1.cryptopro.GOST3410NamedParameters.getByOID(r0)     // Catch: java.lang.IllegalArgumentException -> Ld
            goto L1e
        Ld:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.cryptopro.GOST3410NamedParameters.getOID(r5)
            if (r0 == 0) goto L1d
            java.lang.String r5 = r0.getId()
            org.bouncycastle.asn1.cryptopro.GOST3410ParamSetParameters r0 = org.bouncycastle.asn1.cryptopro.GOST3410NamedParameters.getByOID(r0)
            goto L1e
        L1d:
            r0 = 0
        L1e:
            if (r0 == 0) goto L3a
            org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec r1 = new org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec
            java.math.BigInteger r2 = r0.getP()
            java.math.BigInteger r3 = r0.getQ()
            java.math.BigInteger r0 = r0.getA()
            r1.<init>(r2, r3, r0)
            r4.keyParameters = r1
            r4.keyParamSetOID = r5
            r4.digestParamSetOID = r6
            r4.encryptionParamSetOID = r7
            return
        L3a:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "no key parameter set for passed in name/OID."
            r5.<init>(r6)
            throw r5
    }

    public GOST3410ParameterSpec(org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec r1) {
            r0 = this;
            r0.<init>()
            r0.keyParameters = r1
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_CryptoProParamSet
            java.lang.String r1 = r1.getId()
            r0.digestParamSetOID = r1
            r1 = 0
            r0.encryptionParamSetOID = r1
            return
    }

    public static org.bouncycastle.jce.spec.GOST3410ParameterSpec fromPublicKeyAlg(org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r3) {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r3.getEncryptionParamSet()
            if (r0 == 0) goto L24
            org.bouncycastle.jce.spec.GOST3410ParameterSpec r0 = new org.bouncycastle.jce.spec.GOST3410ParameterSpec
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r3.getPublicKeyParamSet()
            java.lang.String r1 = r1.getId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = r3.getDigestParamSet()
            java.lang.String r2 = r2.getId()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = r3.getEncryptionParamSet()
            java.lang.String r3 = r3.getId()
            r0.<init>(r1, r2, r3)
            return r0
        L24:
            org.bouncycastle.jce.spec.GOST3410ParameterSpec r0 = new org.bouncycastle.jce.spec.GOST3410ParameterSpec
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r3.getPublicKeyParamSet()
            java.lang.String r1 = r1.getId()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = r3.getDigestParamSet()
            java.lang.String r3 = r3.getId()
            r0.<init>(r1, r3)
            return r0
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.jce.spec.GOST3410ParameterSpec
            r1 = 0
            if (r0 == 0) goto L2a
            org.bouncycastle.jce.spec.GOST3410ParameterSpec r4 = (org.bouncycastle.jce.spec.GOST3410ParameterSpec) r4
            org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec r0 = r3.keyParameters
            org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec r2 = r4.keyParameters
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L2a
            java.lang.String r0 = r3.digestParamSetOID
            java.lang.String r2 = r4.digestParamSetOID
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L2a
            java.lang.String r0 = r3.encryptionParamSetOID
            java.lang.String r4 = r4.encryptionParamSetOID
            if (r0 == r4) goto L29
            if (r0 == 0) goto L2a
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L2a
        L29:
            r1 = 1
        L2a:
            return r1
    }

    @Override
    public java.lang.String getDigestParamSetOID() {
            r1 = this;
            java.lang.String r0 = r1.digestParamSetOID
            return r0
    }

    @Override
    public java.lang.String getEncryptionParamSetOID() {
            r1 = this;
            java.lang.String r0 = r1.encryptionParamSetOID
            return r0
    }

    @Override
    public java.lang.String getPublicKeyParamSetOID() {
            r1 = this;
            java.lang.String r0 = r1.keyParamSetOID
            return r0
    }

    @Override
    public org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec getPublicKeyParameters() {
            r1 = this;
            org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec r0 = r1.keyParameters
            return r0
    }

    public int hashCode() {
            r2 = this;
            org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec r0 = r2.keyParameters
            int r0 = r0.hashCode()
            java.lang.String r1 = r2.digestParamSetOID
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            java.lang.String r1 = r2.encryptionParamSetOID
            if (r1 == 0) goto L16
            int r1 = r1.hashCode()
            goto L17
        L16:
            r1 = 0
        L17:
            r0 = r0 ^ r1
            return r0
    }
}
