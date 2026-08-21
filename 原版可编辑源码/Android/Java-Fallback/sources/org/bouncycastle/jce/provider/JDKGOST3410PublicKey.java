package org.bouncycastle.jce.provider;

public class JDKGOST3410PublicKey implements org.bouncycastle.jce.interfaces.GOST3410PublicKey {
    private org.bouncycastle.jce.interfaces.GOST3410Params gost3410Spec;
    private java.math.BigInteger y;

    JDKGOST3410PublicKey(java.math.BigInteger r1, org.bouncycastle.jce.spec.GOST3410ParameterSpec r2) {
            r0 = this;
            r0.<init>()
            r0.y = r1
            r0.gost3410Spec = r2
            return
    }

    JDKGOST3410PublicKey(org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r6) {
            r5 = this;
            r5.<init>()
            org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r0 = new org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r6.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r6 = r6.getPublicKey()     // Catch: java.io.IOException -> L3c
            org.bouncycastle.asn1.DEROctetString r6 = (org.bouncycastle.asn1.DEROctetString) r6     // Catch: java.io.IOException -> L3c
            byte[] r6 = r6.getOctets()     // Catch: java.io.IOException -> L3c
            int r1 = r6.length     // Catch: java.io.IOException -> L3c
            byte[] r1 = new byte[r1]     // Catch: java.io.IOException -> L3c
            r2 = 0
        L20:
            int r3 = r6.length     // Catch: java.io.IOException -> L3c
            r4 = 1
            if (r2 == r3) goto L2e
            int r3 = r6.length     // Catch: java.io.IOException -> L3c
            int r3 = r3 - r4
            int r3 = r3 - r2
            r3 = r6[r3]     // Catch: java.io.IOException -> L3c
            r1[r2] = r3     // Catch: java.io.IOException -> L3c
            int r2 = r2 + 1
            goto L20
        L2e:
            java.math.BigInteger r6 = new java.math.BigInteger     // Catch: java.io.IOException -> L3c
            r6.<init>(r4, r1)     // Catch: java.io.IOException -> L3c
            r5.y = r6     // Catch: java.io.IOException -> L3c
            org.bouncycastle.jce.spec.GOST3410ParameterSpec r6 = org.bouncycastle.jce.spec.GOST3410ParameterSpec.fromPublicKeyAlg(r0)
            r5.gost3410Spec = r6
            return
        L3c:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "invalid info structure in GOST3410 public key"
            r6.<init>(r0)
            throw r6
    }

    JDKGOST3410PublicKey(org.bouncycastle.crypto.params.GOST3410PublicKeyParameters r1, org.bouncycastle.jce.spec.GOST3410ParameterSpec r2) {
            r0 = this;
            r0.<init>()
            java.math.BigInteger r1 = r1.getY()
            r0.y = r1
            r0.gost3410Spec = r2
            return
    }

    JDKGOST3410PublicKey(org.bouncycastle.jce.interfaces.GOST3410PublicKey r2) {
            r1 = this;
            r1.<init>()
            java.math.BigInteger r0 = r2.getY()
            r1.y = r0
            org.bouncycastle.jce.interfaces.GOST3410Params r2 = r2.getParameters()
            r1.gost3410Spec = r2
            return
    }

    JDKGOST3410PublicKey(org.bouncycastle.jce.spec.GOST3410PublicKeySpec r5) {
            r4 = this;
            r4.<init>()
            java.math.BigInteger r0 = r5.getY()
            r4.y = r0
            org.bouncycastle.jce.spec.GOST3410ParameterSpec r0 = new org.bouncycastle.jce.spec.GOST3410ParameterSpec
            org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec r1 = new org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec
            java.math.BigInteger r2 = r5.getP()
            java.math.BigInteger r3 = r5.getQ()
            java.math.BigInteger r5 = r5.getA()
            r1.<init>(r2, r3, r5)
            r0.<init>(r1)
            r4.gost3410Spec = r0
            return
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.jce.provider.JDKGOST3410PublicKey
            r1 = 0
            if (r0 == 0) goto L1c
            org.bouncycastle.jce.provider.JDKGOST3410PublicKey r4 = (org.bouncycastle.jce.provider.JDKGOST3410PublicKey) r4
            java.math.BigInteger r0 = r3.y
            java.math.BigInteger r2 = r4.y
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L1c
            org.bouncycastle.jce.interfaces.GOST3410Params r0 = r3.gost3410Spec
            org.bouncycastle.jce.interfaces.GOST3410Params r4 = r4.gost3410Spec
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L1c
            r1 = 1
        L1c:
            return r1
    }

    @Override
    public java.lang.String getAlgorithm() {
            r1 = this;
            java.lang.String r0 = "GOST3410"
            return r0
    }

    @Override
    public byte[] getEncoded() {
            r9 = this;
            java.math.BigInteger r0 = r9.getY()
            byte[] r0 = r0.toByteArray()
            r1 = 0
            r2 = r0[r1]
            if (r2 != 0) goto L11
            int r2 = r0.length
            int r2 = r2 + (-1)
            goto L12
        L11:
            int r2 = r0.length
        L12:
            byte[] r2 = new byte[r2]
        L14:
            int r3 = r2.length
            if (r1 == r3) goto L22
            int r3 = r0.length
            int r3 = r3 + (-1)
            int r3 = r3 - r1
            r3 = r0[r3]
            r2[r1] = r3
            int r1 = r1 + 1
            goto L14
        L22:
            org.bouncycastle.jce.interfaces.GOST3410Params r0 = r9.gost3410Spec
            boolean r1 = r0 instanceof org.bouncycastle.jce.spec.GOST3410ParameterSpec
            if (r1 == 0) goto L9b
            java.lang.String r0 = r0.getEncryptionParamSetOID()
            if (r0 == 0) goto L6a
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_94
            org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r4 = new org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters
            org.bouncycastle.asn1.DERObjectIdentifier r5 = new org.bouncycastle.asn1.DERObjectIdentifier
            org.bouncycastle.jce.interfaces.GOST3410Params r6 = r9.gost3410Spec
            java.lang.String r6 = r6.getPublicKeyParamSetOID()
            r5.<init>(r6)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = new org.bouncycastle.asn1.DERObjectIdentifier
            org.bouncycastle.jce.interfaces.GOST3410Params r7 = r9.gost3410Spec
            java.lang.String r7 = r7.getDigestParamSetOID()
            r6.<init>(r7)
            org.bouncycastle.asn1.DERObjectIdentifier r7 = new org.bouncycastle.asn1.DERObjectIdentifier
            org.bouncycastle.jce.interfaces.GOST3410Params r8 = r9.gost3410Spec
            java.lang.String r8 = r8.getEncryptionParamSetOID()
            r7.<init>(r8)
            r4.<init>(r5, r6, r7)
            org.bouncycastle.asn1.DERObject r4 = r4.getDERObject()
            r1.<init>(r3, r4)
            org.bouncycastle.asn1.DEROctetString r3 = new org.bouncycastle.asn1.DEROctetString
            r3.<init>(r2)
            r0.<init>(r1, r3)
            goto Lac
        L6a:
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_94
            org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r4 = new org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters
            org.bouncycastle.asn1.DERObjectIdentifier r5 = new org.bouncycastle.asn1.DERObjectIdentifier
            org.bouncycastle.jce.interfaces.GOST3410Params r6 = r9.gost3410Spec
            java.lang.String r6 = r6.getPublicKeyParamSetOID()
            r5.<init>(r6)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = new org.bouncycastle.asn1.DERObjectIdentifier
            org.bouncycastle.jce.interfaces.GOST3410Params r7 = r9.gost3410Spec
            java.lang.String r7 = r7.getDigestParamSetOID()
            r6.<init>(r7)
            r4.<init>(r5, r6)
            org.bouncycastle.asn1.DERObject r4 = r4.getDERObject()
            r1.<init>(r3, r4)
            org.bouncycastle.asn1.DEROctetString r3 = new org.bouncycastle.asn1.DEROctetString
            r3.<init>(r2)
            r0.<init>(r1, r3)
            goto Lac
        L9b:
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_94
            r1.<init>(r3)
            org.bouncycastle.asn1.DEROctetString r3 = new org.bouncycastle.asn1.DEROctetString
            r3.<init>(r2)
            r0.<init>(r1, r3)
        Lac:
            byte[] r0 = r0.getDEREncoded()
            return r0
    }

    @Override
    public java.lang.String getFormat() {
            r1 = this;
            java.lang.String r0 = "X.509"
            return r0
    }

    @Override
    public org.bouncycastle.jce.interfaces.GOST3410Params getParameters() {
            r1 = this;
            org.bouncycastle.jce.interfaces.GOST3410Params r0 = r1.gost3410Spec
            return r0
    }

    @Override
    public java.math.BigInteger getY() {
            r1 = this;
            java.math.BigInteger r0 = r1.y
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.y
            int r0 = r0.hashCode()
            org.bouncycastle.jce.interfaces.GOST3410Params r1 = r2.gost3410Spec
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "line.separator"
            java.lang.String r1 = java.lang.System.getProperty(r1)
            java.lang.String r2 = "GOST3410 Public Key"
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "            y: "
            r0.append(r2)
            java.math.BigInteger r2 = r4.getY()
            r3 = 16
            java.lang.String r2 = r2.toString(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
