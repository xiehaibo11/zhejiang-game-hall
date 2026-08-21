package org.bouncycastle.jce.provider;

public class JCEECPrivateKey implements java.security.interfaces.ECPrivateKey, org.bouncycastle.jce.interfaces.ECPrivateKey, org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier, org.bouncycastle.jce.interfaces.ECPointEncoder {
    private java.lang.String algorithm;
    private org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier attrCarrier;
    private java.math.BigInteger d;
    private java.security.spec.ECParameterSpec ecSpec;
    private boolean withCompression;

    protected JCEECPrivateKey() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "EC"
            r1.algorithm = r0
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            return
    }

    JCEECPrivateKey(java.lang.String r2, java.security.spec.ECPrivateKeySpec r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "EC"
            r1.algorithm = r0
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            r1.algorithm = r2
            java.math.BigInteger r2 = r3.getS()
            r1.d = r2
            java.security.spec.ECParameterSpec r2 = r3.getParams()
            r1.ecSpec = r2
            return
    }

    JCEECPrivateKey(java.lang.String r2, org.bouncycastle.crypto.params.ECPrivateKeyParameters r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "EC"
            r1.algorithm = r0
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            r1.algorithm = r2
            java.math.BigInteger r2 = r3.getD()
            r1.d = r2
            r2 = 0
            r1.ecSpec = r2
            return
    }

    JCEECPrivateKey(java.lang.String r4, org.bouncycastle.crypto.params.ECPrivateKeyParameters r5, java.security.spec.ECParameterSpec r6) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "EC"
            r3.algorithm = r0
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r3.attrCarrier = r0
            org.bouncycastle.crypto.params.ECDomainParameters r0 = r5.getParameters()
            r3.algorithm = r4
            java.math.BigInteger r4 = r5.getD()
            r3.d = r4
            if (r6 != 0) goto L59
            org.bouncycastle.math.ec.ECCurve r4 = r0.getCurve()
            byte[] r5 = r0.getSeed()
            java.security.spec.EllipticCurve r4 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r4, r5)
            java.security.spec.ECParameterSpec r5 = new java.security.spec.ECParameterSpec
            java.security.spec.ECPoint r6 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECPoint r1 = r0.getG()
            org.bouncycastle.math.ec.ECFieldElement r1 = r1.getX()
            java.math.BigInteger r1 = r1.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r2 = r0.getG()
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getY()
            java.math.BigInteger r2 = r2.toBigInteger()
            r6.<init>(r1, r2)
            java.math.BigInteger r1 = r0.getN()
            java.math.BigInteger r0 = r0.getH()
            int r0 = r0.intValue()
            r5.<init>(r4, r6, r1, r0)
            r3.ecSpec = r5
            goto L5b
        L59:
            r3.ecSpec = r6
        L5b:
            return
    }

    JCEECPrivateKey(java.lang.String r4, org.bouncycastle.crypto.params.ECPrivateKeyParameters r5, org.bouncycastle.jce.spec.ECParameterSpec r6) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "EC"
            r3.algorithm = r0
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r3.attrCarrier = r0
            org.bouncycastle.crypto.params.ECDomainParameters r0 = r5.getParameters()
            r3.algorithm = r4
            java.math.BigInteger r4 = r5.getD()
            r3.d = r4
            if (r6 != 0) goto L57
            org.bouncycastle.math.ec.ECCurve r4 = r0.getCurve()
            byte[] r5 = r0.getSeed()
            java.security.spec.EllipticCurve r4 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r4, r5)
            java.security.spec.ECParameterSpec r5 = new java.security.spec.ECParameterSpec
            java.security.spec.ECPoint r6 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECPoint r1 = r0.getG()
            org.bouncycastle.math.ec.ECFieldElement r1 = r1.getX()
            java.math.BigInteger r1 = r1.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r2 = r0.getG()
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getY()
            java.math.BigInteger r2 = r2.toBigInteger()
            r6.<init>(r1, r2)
            java.math.BigInteger r1 = r0.getN()
            java.math.BigInteger r0 = r0.getH()
            int r0 = r0.intValue()
            r5.<init>(r4, r6, r1, r0)
            goto L91
        L57:
            org.bouncycastle.math.ec.ECCurve r4 = r6.getCurve()
            byte[] r5 = r6.getSeed()
            java.security.spec.EllipticCurve r4 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r4, r5)
            java.security.spec.ECParameterSpec r5 = new java.security.spec.ECParameterSpec
            java.security.spec.ECPoint r0 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECPoint r1 = r6.getG()
            org.bouncycastle.math.ec.ECFieldElement r1 = r1.getX()
            java.math.BigInteger r1 = r1.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r2 = r6.getG()
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getY()
            java.math.BigInteger r2 = r2.toBigInteger()
            r0.<init>(r1, r2)
            java.math.BigInteger r1 = r6.getN()
            java.math.BigInteger r6 = r6.getH()
            int r6 = r6.intValue()
            r5.<init>(r4, r0, r1, r6)
        L91:
            r3.ecSpec = r5
            return
    }

    JCEECPrivateKey(java.lang.String r2, org.bouncycastle.jce.provider.JCEECPrivateKey r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "EC"
            r1.algorithm = r0
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            r1.algorithm = r2
            java.math.BigInteger r2 = r3.d
            r1.d = r2
            java.security.spec.ECParameterSpec r2 = r3.ecSpec
            r1.ecSpec = r2
            boolean r2 = r3.withCompression
            r1.withCompression = r2
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r2 = r3.attrCarrier
            r1.attrCarrier = r2
            return
    }

    JCEECPrivateKey(java.lang.String r2, org.bouncycastle.jce.spec.ECPrivateKeySpec r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "EC"
            r1.algorithm = r0
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            r1.algorithm = r2
            java.math.BigInteger r2 = r3.getD()
            r1.d = r2
            org.bouncycastle.jce.spec.ECParameterSpec r2 = r3.getParams()
            if (r2 == 0) goto L39
            org.bouncycastle.jce.spec.ECParameterSpec r2 = r3.getParams()
            org.bouncycastle.math.ec.ECCurve r2 = r2.getCurve()
            org.bouncycastle.jce.spec.ECParameterSpec r0 = r3.getParams()
            byte[] r0 = r0.getSeed()
            java.security.spec.EllipticCurve r2 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r2, r0)
            org.bouncycastle.jce.spec.ECParameterSpec r3 = r3.getParams()
            java.security.spec.ECParameterSpec r2 = org.bouncycastle.jce.provider.EC5Util.convertSpec(r2, r3)
            goto L3a
        L39:
            r2 = 0
        L3a:
            r1.ecSpec = r2
            return
    }

    JCEECPrivateKey(java.security.interfaces.ECPrivateKey r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "EC"
            r1.algorithm = r0
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            java.math.BigInteger r0 = r2.getS()
            r1.d = r0
            java.lang.String r0 = r2.getAlgorithm()
            r1.algorithm = r0
            java.security.spec.ECParameterSpec r2 = r2.getParams()
            r1.ecSpec = r2
            return
    }

    JCEECPrivateKey(org.bouncycastle.asn1.pkcs.PrivateKeyInfo r11) {
            r10 = this;
            r10.<init>()
            java.lang.String r0 = "EC"
            r10.algorithm = r0
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r10.attrCarrier = r0
            org.bouncycastle.asn1.x9.X962Parameters r0 = new org.bouncycastle.asn1.x9.X962Parameters
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r11.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.DERObject r1 = (org.bouncycastle.asn1.DERObject) r1
            r0.<init>(r1)
            boolean r1 = r0.isNamedCurve()
            if (r1 == 0) goto Lac
            org.bouncycastle.asn1.DERObject r0 = r0.getParameters()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            org.bouncycastle.asn1.x9.X9ECParameters r1 = org.bouncycastle.jce.provider.ECUtil.getNamedCurveByOid(r0)
            if (r1 != 0) goto L70
            org.bouncycastle.crypto.params.ECDomainParameters r1 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.getByOID(r0)
            org.bouncycastle.math.ec.ECCurve r2 = r1.getCurve()
            byte[] r3 = r1.getSeed()
            java.security.spec.EllipticCurve r6 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r2, r3)
            org.bouncycastle.jce.spec.ECNamedCurveSpec r2 = new org.bouncycastle.jce.spec.ECNamedCurveSpec
            java.lang.String r5 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.getName(r0)
            java.security.spec.ECPoint r7 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECPoint r0 = r1.getG()
            org.bouncycastle.math.ec.ECFieldElement r0 = r0.getX()
            java.math.BigInteger r0 = r0.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r3 = r1.getG()
            org.bouncycastle.math.ec.ECFieldElement r3 = r3.getY()
            java.math.BigInteger r3 = r3.toBigInteger()
            r7.<init>(r0, r3)
            java.math.BigInteger r8 = r1.getN()
            java.math.BigInteger r9 = r1.getH()
            r4 = r2
            r4.<init>(r5, r6, r7, r8, r9)
            goto Lfb
        L70:
            org.bouncycastle.math.ec.ECCurve r2 = r1.getCurve()
            byte[] r3 = r1.getSeed()
            java.security.spec.EllipticCurve r6 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r2, r3)
            org.bouncycastle.jce.spec.ECNamedCurveSpec r2 = new org.bouncycastle.jce.spec.ECNamedCurveSpec
            java.lang.String r5 = org.bouncycastle.jce.provider.ECUtil.getCurveName(r0)
            java.security.spec.ECPoint r7 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECPoint r0 = r1.getG()
            org.bouncycastle.math.ec.ECFieldElement r0 = r0.getX()
            java.math.BigInteger r0 = r0.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r3 = r1.getG()
            org.bouncycastle.math.ec.ECFieldElement r3 = r3.getY()
            java.math.BigInteger r3 = r3.toBigInteger()
            r7.<init>(r0, r3)
            java.math.BigInteger r8 = r1.getN()
            java.math.BigInteger r9 = r1.getH()
            r4 = r2
            r4.<init>(r5, r6, r7, r8, r9)
            goto Lfb
        Lac:
            boolean r1 = r0.isImplicitlyCA()
            if (r1 == 0) goto Lb6
            r0 = 0
            r10.ecSpec = r0
            goto Lfd
        Lb6:
            org.bouncycastle.asn1.x9.X9ECParameters r1 = new org.bouncycastle.asn1.x9.X9ECParameters
            org.bouncycastle.asn1.DERObject r0 = r0.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0
            r1.<init>(r0)
            org.bouncycastle.math.ec.ECCurve r0 = r1.getCurve()
            byte[] r2 = r1.getSeed()
            java.security.spec.EllipticCurve r0 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r0, r2)
            java.security.spec.ECParameterSpec r2 = new java.security.spec.ECParameterSpec
            java.security.spec.ECPoint r3 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECPoint r4 = r1.getG()
            org.bouncycastle.math.ec.ECFieldElement r4 = r4.getX()
            java.math.BigInteger r4 = r4.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r5 = r1.getG()
            org.bouncycastle.math.ec.ECFieldElement r5 = r5.getY()
            java.math.BigInteger r5 = r5.toBigInteger()
            r3.<init>(r4, r5)
            java.math.BigInteger r4 = r1.getN()
            java.math.BigInteger r1 = r1.getH()
            int r1 = r1.intValue()
            r2.<init>(r0, r3, r4, r1)
        Lfb:
            r10.ecSpec = r2
        Lfd:
            org.bouncycastle.asn1.DERObject r0 = r11.getPrivateKey()
            boolean r0 = r0 instanceof org.bouncycastle.asn1.DERInteger
            if (r0 == 0) goto L110
            org.bouncycastle.asn1.DERObject r11 = r11.getPrivateKey()
            org.bouncycastle.asn1.DERInteger r11 = (org.bouncycastle.asn1.DERInteger) r11
            java.math.BigInteger r11 = r11.getValue()
            goto L11f
        L110:
            org.bouncycastle.asn1.sec.ECPrivateKeyStructure r0 = new org.bouncycastle.asn1.sec.ECPrivateKeyStructure
            org.bouncycastle.asn1.DERObject r11 = r11.getPrivateKey()
            org.bouncycastle.asn1.ASN1Sequence r11 = (org.bouncycastle.asn1.ASN1Sequence) r11
            r0.<init>(r11)
            java.math.BigInteger r11 = r0.getKey()
        L11f:
            r10.d = r11
            return
    }

    org.bouncycastle.jce.spec.ECParameterSpec engineGetSpec() {
            r2 = this;
            java.security.spec.ECParameterSpec r0 = r2.ecSpec
            if (r0 == 0) goto Lb
            boolean r1 = r2.withCompression
            org.bouncycastle.jce.spec.ECParameterSpec r0 = org.bouncycastle.jce.provider.EC5Util.convertSpec(r0, r1)
            return r0
        Lb:
            org.bouncycastle.jce.spec.ECParameterSpec r0 = org.bouncycastle.jce.provider.ProviderUtil.getEcImplicitlyCa()
            return r0
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.jce.provider.JCEECPrivateKey
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.jce.provider.JCEECPrivateKey r4 = (org.bouncycastle.jce.provider.JCEECPrivateKey) r4
            java.math.BigInteger r0 = r3.getD()
            java.math.BigInteger r2 = r4.getD()
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L25
            org.bouncycastle.jce.spec.ECParameterSpec r0 = r3.engineGetSpec()
            org.bouncycastle.jce.spec.ECParameterSpec r4 = r4.engineGetSpec()
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L25
            r1 = 1
        L25:
            return r1
    }

    @Override
    public java.lang.String getAlgorithm() {
            r1 = this;
            java.lang.String r0 = r1.algorithm
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
    public java.math.BigInteger getD() {
            r1 = this;
            java.math.BigInteger r0 = r1.d
            return r0
    }

    @Override
    public byte[] getEncoded() {
            r7 = this;
            java.security.spec.ECParameterSpec r0 = r7.ecSpec
            boolean r1 = r0 instanceof org.bouncycastle.jce.spec.ECNamedCurveSpec
            if (r1 == 0) goto L16
            org.bouncycastle.jce.spec.ECNamedCurveSpec r0 = (org.bouncycastle.jce.spec.ECNamedCurveSpec) r0
            java.lang.String r0 = r0.getName()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.jce.provider.ECUtil.getNamedCurveOid(r0)
            org.bouncycastle.asn1.x9.X962Parameters r1 = new org.bouncycastle.asn1.x9.X962Parameters
            r1.<init>(r0)
            goto L5a
        L16:
            if (r0 != 0) goto L20
            org.bouncycastle.asn1.x9.X962Parameters r1 = new org.bouncycastle.asn1.x9.X962Parameters
            org.bouncycastle.asn1.DERNull r0 = org.bouncycastle.asn1.DERNull.INSTANCE
            r1.<init>(r0)
            goto L5a
        L20:
            java.security.spec.EllipticCurve r0 = r0.getCurve()
            org.bouncycastle.math.ec.ECCurve r2 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r0)
            org.bouncycastle.asn1.x9.X9ECParameters r0 = new org.bouncycastle.asn1.x9.X9ECParameters
            java.security.spec.ECParameterSpec r1 = r7.ecSpec
            java.security.spec.ECPoint r1 = r1.getGenerator()
            boolean r3 = r7.withCompression
            org.bouncycastle.math.ec.ECPoint r3 = org.bouncycastle.jce.provider.EC5Util.convertPoint(r2, r1, r3)
            java.security.spec.ECParameterSpec r1 = r7.ecSpec
            java.math.BigInteger r4 = r1.getOrder()
            java.security.spec.ECParameterSpec r1 = r7.ecSpec
            int r1 = r1.getCofactor()
            long r5 = (long) r1
            java.math.BigInteger r5 = java.math.BigInteger.valueOf(r5)
            java.security.spec.ECParameterSpec r1 = r7.ecSpec
            java.security.spec.EllipticCurve r1 = r1.getCurve()
            byte[] r6 = r1.getSeed()
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            org.bouncycastle.asn1.x9.X962Parameters r1 = new org.bouncycastle.asn1.x9.X962Parameters
            r1.<init>(r0)
        L5a:
            java.lang.String r0 = r7.algorithm
            java.lang.String r2 = "ECGOST3410"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L82
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            r2.<init>(r3, r1)
            org.bouncycastle.asn1.sec.ECPrivateKeyStructure r1 = new org.bouncycastle.asn1.sec.ECPrivateKeyStructure
            java.math.BigInteger r3 = r7.getS()
            r1.<init>(r3)
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            r0.<init>(r2, r1)
            goto L9f
        L82:
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_ecPublicKey
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            r2.<init>(r3, r1)
            org.bouncycastle.asn1.sec.ECPrivateKeyStructure r1 = new org.bouncycastle.asn1.sec.ECPrivateKeyStructure
            java.math.BigInteger r3 = r7.getS()
            r1.<init>(r3)
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            r0.<init>(r2, r1)
        L9f:
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
    public org.bouncycastle.jce.spec.ECParameterSpec getParameters() {
            r2 = this;
            java.security.spec.ECParameterSpec r0 = r2.ecSpec
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r1 = r2.withCompression
            org.bouncycastle.jce.spec.ECParameterSpec r0 = org.bouncycastle.jce.provider.EC5Util.convertSpec(r0, r1)
            return r0
    }

    @Override
    public java.security.spec.ECParameterSpec getParams() {
            r1 = this;
            java.security.spec.ECParameterSpec r0 = r1.ecSpec
            return r0
    }

    @Override
    public java.math.BigInteger getS() {
            r1 = this;
            java.math.BigInteger r0 = r1.d
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.getD()
            int r0 = r0.hashCode()
            org.bouncycastle.jce.spec.ECParameterSpec r1 = r2.engineGetSpec()
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            return r0
    }

    @Override
    public void setBagAttribute(org.bouncycastle.asn1.DERObjectIdentifier r2, org.bouncycastle.asn1.DEREncodable r3) {
            r1 = this;
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r0 = r1.attrCarrier
            r0.setBagAttribute(r2, r3)
            return
    }

    @Override
    public void setPointFormat(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "UNCOMPRESSED"
            boolean r2 = r0.equalsIgnoreCase(r2)
            r2 = r2 ^ 1
            r1.withCompression = r2
            return
    }
}
