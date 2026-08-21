package org.bouncycastle.jce.provider;

public class JDKGOST3410PrivateKey implements org.bouncycastle.jce.interfaces.GOST3410PrivateKey, org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier {
    private org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier attrCarrier;
    org.bouncycastle.jce.interfaces.GOST3410Params gost3410Spec;
    java.math.BigInteger x;

    protected JDKGOST3410PrivateKey() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            return
    }

    JDKGOST3410PrivateKey(org.bouncycastle.asn1.pkcs.PrivateKeyInfo r6) {
            r5 = this;
            r5.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r5.attrCarrier = r0
            org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r0 = new org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r6.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r6 = r6.getPrivateKey()
            org.bouncycastle.asn1.DEROctetString r6 = (org.bouncycastle.asn1.DEROctetString) r6
            byte[] r6 = r6.getOctets()
            int r1 = r6.length
            byte[] r1 = new byte[r1]
            r2 = 0
        L27:
            int r3 = r6.length
            r4 = 1
            if (r2 == r3) goto L35
            int r3 = r6.length
            int r3 = r3 - r4
            int r3 = r3 - r2
            r3 = r6[r3]
            r1[r2] = r3
            int r2 = r2 + 1
            goto L27
        L35:
            java.math.BigInteger r6 = new java.math.BigInteger
            r6.<init>(r4, r1)
            r5.x = r6
            org.bouncycastle.jce.spec.GOST3410ParameterSpec r6 = org.bouncycastle.jce.spec.GOST3410ParameterSpec.fromPublicKeyAlg(r0)
            r5.gost3410Spec = r6
            return
    }

    JDKGOST3410PrivateKey(org.bouncycastle.crypto.params.GOST3410PrivateKeyParameters r2, org.bouncycastle.jce.spec.GOST3410ParameterSpec r3) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            java.math.BigInteger r2 = r2.getX()
            r1.x = r2
            r1.gost3410Spec = r3
            if (r3 == 0) goto L15
            return
        L15:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "spec is null"
            r2.<init>(r3)
            throw r2
    }

    JDKGOST3410PrivateKey(org.bouncycastle.jce.interfaces.GOST3410PrivateKey r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            java.math.BigInteger r0 = r2.getX()
            r1.x = r0
            org.bouncycastle.jce.interfaces.GOST3410Params r2 = r2.getParameters()
            r1.gost3410Spec = r2
            return
    }

    JDKGOST3410PrivateKey(org.bouncycastle.jce.spec.GOST3410PrivateKeySpec r5) {
            r4 = this;
            r4.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r4.attrCarrier = r0
            java.math.BigInteger r0 = r5.getX()
            r4.x = r0
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

    @Override
    public java.lang.String getAlgorithm() {
            r1 = this;
            java.lang.String r0 = "GOST3410"
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DEREncodable getBagAttribute(org.bouncycastle.asn1.DERObjectIdentifier r2) {
            r1 = this;
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r0 = r1.attrCarrier
            org.bouncycastle.asn1.DEREncodable r2 = r0.getBagAttribute(r2)
            return r2
    }

    @Override
    public java.util.Enumeration getBagAttributeKeys() {
            r1 = this;
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r0 = r1.attrCarrier
            java.util.Enumeration r0 = r0.getBagAttributeKeys()
            return r0
    }

    @Override
    public byte[] getEncoded() {
            r8 = this;
            java.math.BigInteger r0 = r8.getX()
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
            org.bouncycastle.jce.interfaces.GOST3410Params r0 = r8.gost3410Spec
            boolean r0 = r0 instanceof org.bouncycastle.jce.spec.GOST3410ParameterSpec
            if (r0 == 0) goto L59
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_94
            org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r4 = new org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters
            org.bouncycastle.asn1.DERObjectIdentifier r5 = new org.bouncycastle.asn1.DERObjectIdentifier
            org.bouncycastle.jce.interfaces.GOST3410Params r6 = r8.gost3410Spec
            java.lang.String r6 = r6.getPublicKeyParamSetOID()
            r5.<init>(r6)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = new org.bouncycastle.asn1.DERObjectIdentifier
            org.bouncycastle.jce.interfaces.GOST3410Params r7 = r8.gost3410Spec
            java.lang.String r7 = r7.getDigestParamSetOID()
            r6.<init>(r7)
            r4.<init>(r5, r6)
            org.bouncycastle.asn1.DERObject r4 = r4.getDERObject()
            r1.<init>(r3, r4)
            org.bouncycastle.asn1.DEROctetString r3 = new org.bouncycastle.asn1.DEROctetString
            r3.<init>(r2)
            r0.<init>(r1, r3)
            goto L6a
        L59:
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_94
            r1.<init>(r3)
            org.bouncycastle.asn1.DEROctetString r3 = new org.bouncycastle.asn1.DEROctetString
            r3.<init>(r2)
            r0.<init>(r1, r3)
        L6a:
            byte[] r0 = r0.getDEREncoded()
            return r0
    }

    @Override
    public java.lang.String getFormat() {
            r1 = this;
            java.lang.String r0 = "PKCS#8"
            return r0
    }

    @Override
    public org.bouncycastle.jce.interfaces.GOST3410Params getParameters() {
            r1 = this;
            org.bouncycastle.jce.interfaces.GOST3410Params r0 = r1.gost3410Spec
            return r0
    }

    @Override
    public java.math.BigInteger getX() {
            r1 = this;
            java.math.BigInteger r0 = r1.x
            return r0
    }

    @Override
    public void setBagAttribute(org.bouncycastle.asn1.DERObjectIdentifier r2, org.bouncycastle.asn1.DEREncodable r3) {
            r1 = this;
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r0 = r1.attrCarrier
            r0.setBagAttribute(r2, r3)
            return
    }
}
