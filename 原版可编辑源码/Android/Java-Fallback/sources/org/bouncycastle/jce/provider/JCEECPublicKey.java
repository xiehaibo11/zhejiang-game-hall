package org.bouncycastle.jce.provider;

public class JCEECPublicKey implements java.security.interfaces.ECPublicKey, org.bouncycastle.jce.interfaces.ECPublicKey, org.bouncycastle.jce.interfaces.ECPointEncoder {
    private java.lang.String algorithm;
    private java.security.spec.ECParameterSpec ecSpec;
    private org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters gostParams;
    private org.bouncycastle.math.ec.ECPoint q;
    private boolean withCompression;

    JCEECPublicKey(java.lang.String r2, java.security.spec.ECPublicKeySpec r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "EC"
            r1.algorithm = r0
            r1.algorithm = r2
            java.security.spec.ECParameterSpec r2 = r3.getParams()
            r1.ecSpec = r2
            java.security.spec.ECPoint r3 = r3.getW()
            r0 = 0
            org.bouncycastle.math.ec.ECPoint r2 = org.bouncycastle.jce.provider.EC5Util.convertPoint(r2, r3, r0)
            r1.q = r2
            return
    }

    JCEECPublicKey(java.lang.String r2, org.bouncycastle.crypto.params.ECPublicKeyParameters r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "EC"
            r1.algorithm = r0
            r1.algorithm = r2
            org.bouncycastle.math.ec.ECPoint r2 = r3.getQ()
            r1.q = r2
            r2 = 0
            r1.ecSpec = r2
            return
    }

    JCEECPublicKey(java.lang.String r2, org.bouncycastle.crypto.params.ECPublicKeyParameters r3, java.security.spec.ECParameterSpec r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "EC"
            r1.algorithm = r0
            org.bouncycastle.crypto.params.ECDomainParameters r0 = r3.getParameters()
            r1.algorithm = r2
            org.bouncycastle.math.ec.ECPoint r2 = r3.getQ()
            r1.q = r2
            if (r4 != 0) goto L28
            org.bouncycastle.math.ec.ECCurve r2 = r0.getCurve()
            byte[] r3 = r0.getSeed()
            java.security.spec.EllipticCurve r2 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r2, r3)
            java.security.spec.ECParameterSpec r2 = r1.createSpec(r2, r0)
            r1.ecSpec = r2
            goto L2a
        L28:
            r1.ecSpec = r4
        L2a:
            return
    }

    JCEECPublicKey(java.lang.String r2, org.bouncycastle.crypto.params.ECPublicKeyParameters r3, org.bouncycastle.jce.spec.ECParameterSpec r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "EC"
            r1.algorithm = r0
            org.bouncycastle.crypto.params.ECDomainParameters r0 = r3.getParameters()
            r1.algorithm = r2
            org.bouncycastle.math.ec.ECPoint r2 = r3.getQ()
            r1.q = r2
            if (r4 != 0) goto L26
            org.bouncycastle.math.ec.ECCurve r2 = r0.getCurve()
            byte[] r3 = r0.getSeed()
            java.security.spec.EllipticCurve r2 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r2, r3)
            java.security.spec.ECParameterSpec r2 = r1.createSpec(r2, r0)
            goto L36
        L26:
            org.bouncycastle.math.ec.ECCurve r2 = r4.getCurve()
            byte[] r3 = r4.getSeed()
            java.security.spec.EllipticCurve r2 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r2, r3)
            java.security.spec.ECParameterSpec r2 = org.bouncycastle.jce.provider.EC5Util.convertSpec(r2, r4)
        L36:
            r1.ecSpec = r2
            return
    }

    JCEECPublicKey(java.lang.String r2, org.bouncycastle.jce.provider.JCEECPublicKey r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "EC"
            r1.algorithm = r0
            r1.algorithm = r2
            org.bouncycastle.math.ec.ECPoint r2 = r3.q
            r1.q = r2
            java.security.spec.ECParameterSpec r2 = r3.ecSpec
            r1.ecSpec = r2
            boolean r2 = r3.withCompression
            r1.withCompression = r2
            org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r2 = r3.gostParams
            r1.gostParams = r2
            return
    }

    JCEECPublicKey(java.lang.String r3, org.bouncycastle.jce.spec.ECPublicKeySpec r4) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "EC"
            r2.algorithm = r0
            r2.algorithm = r3
            org.bouncycastle.math.ec.ECPoint r3 = r4.getQ()
            r2.q = r3
            org.bouncycastle.jce.spec.ECParameterSpec r3 = r4.getParams()
            if (r3 == 0) goto L34
            org.bouncycastle.jce.spec.ECParameterSpec r3 = r4.getParams()
            org.bouncycastle.math.ec.ECCurve r3 = r3.getCurve()
            org.bouncycastle.jce.spec.ECParameterSpec r0 = r4.getParams()
            byte[] r0 = r0.getSeed()
            java.security.spec.EllipticCurve r3 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r3, r0)
            org.bouncycastle.jce.spec.ECParameterSpec r4 = r4.getParams()
            java.security.spec.ECParameterSpec r3 = org.bouncycastle.jce.provider.EC5Util.convertSpec(r3, r4)
        L31:
            r2.ecSpec = r3
            goto L61
        L34:
            org.bouncycastle.math.ec.ECPoint r3 = r2.q
            org.bouncycastle.math.ec.ECCurve r3 = r3.getCurve()
            if (r3 != 0) goto L5f
            org.bouncycastle.jce.spec.ECParameterSpec r3 = org.bouncycastle.jce.provider.ProviderUtil.getEcImplicitlyCa()
            org.bouncycastle.math.ec.ECCurve r3 = r3.getCurve()
            org.bouncycastle.math.ec.ECPoint r4 = r2.q
            org.bouncycastle.math.ec.ECFieldElement r4 = r4.getX()
            java.math.BigInteger r4 = r4.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r0 = r2.q
            org.bouncycastle.math.ec.ECFieldElement r0 = r0.getY()
            java.math.BigInteger r0 = r0.toBigInteger()
            r1 = 0
            org.bouncycastle.math.ec.ECPoint r3 = r3.createPoint(r4, r0, r1)
            r2.q = r3
        L5f:
            r3 = 0
            goto L31
        L61:
            return
    }

    JCEECPublicKey(java.security.interfaces.ECPublicKey r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "EC"
            r2.algorithm = r0
            java.lang.String r0 = r3.getAlgorithm()
            r2.algorithm = r0
            java.security.spec.ECParameterSpec r0 = r3.getParams()
            r2.ecSpec = r0
            java.security.spec.ECPoint r3 = r3.getW()
            r1 = 0
            org.bouncycastle.math.ec.ECPoint r3 = org.bouncycastle.jce.provider.EC5Util.convertPoint(r0, r3, r1)
            r2.q = r3
            return
    }

    JCEECPublicKey(org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r14) {
            r13 = this;
            r13.<init>()
            java.lang.String r0 = "EC"
            r13.algorithm = r0
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r14.getAlgorithmId()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001
            boolean r0 = r0.equals(r1)
            java.lang.String r1 = "error recovering public key"
            r2 = 0
            r3 = 1
            if (r0 == 0) goto Lc7
            org.bouncycastle.asn1.DERBitString r0 = r14.getPublicKeyData()
            java.lang.String r4 = "ECGOST3410"
            r13.algorithm = r4
            byte[] r0 = r0.getBytes()     // Catch: java.io.IOException -> Lc1
            org.bouncycastle.asn1.ASN1Object r0 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r0)     // Catch: java.io.IOException -> Lc1
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0     // Catch: java.io.IOException -> Lc1
            byte[] r0 = r0.getOctets()
            r1 = 32
            byte[] r4 = new byte[r1]
            byte[] r5 = new byte[r1]
            r6 = 0
        L38:
            if (r6 == r1) goto L43
            int r7 = 31 - r6
            r7 = r0[r7]
            r4[r6] = r7
            int r6 = r6 + 1
            goto L38
        L43:
            r6 = 0
        L44:
            if (r6 == r1) goto L4f
            int r7 = 63 - r6
            r7 = r0[r7]
            r5[r6] = r7
            int r6 = r6 + 1
            goto L44
        L4f:
            org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r0 = new org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r14 = r14.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r14 = r14.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r14 = (org.bouncycastle.asn1.ASN1Sequence) r14
            r0.<init>(r14)
            r13.gostParams = r0
            org.bouncycastle.asn1.DERObjectIdentifier r14 = r0.getPublicKeyParamSet()
            java.lang.String r14 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.getName(r14)
            org.bouncycastle.jce.spec.ECNamedCurveParameterSpec r14 = org.bouncycastle.jce.ECGOST3410NamedCurveTable.getParameterSpec(r14)
            org.bouncycastle.math.ec.ECCurve r0 = r14.getCurve()
            byte[] r1 = r14.getSeed()
            java.security.spec.EllipticCurve r8 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r0, r1)
            java.math.BigInteger r1 = new java.math.BigInteger
            r1.<init>(r3, r4)
            java.math.BigInteger r4 = new java.math.BigInteger
            r4.<init>(r3, r5)
            org.bouncycastle.math.ec.ECPoint r0 = r0.createPoint(r1, r4, r2)
            r13.q = r0
            org.bouncycastle.jce.spec.ECNamedCurveSpec r0 = new org.bouncycastle.jce.spec.ECNamedCurveSpec
            org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r1 = r13.gostParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r1.getPublicKeyParamSet()
            java.lang.String r7 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.getName(r1)
            java.security.spec.ECPoint r9 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECPoint r1 = r14.getG()
            org.bouncycastle.math.ec.ECFieldElement r1 = r1.getX()
            java.math.BigInteger r1 = r1.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r2 = r14.getG()
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getY()
            java.math.BigInteger r2 = r2.toBigInteger()
            r9.<init>(r1, r2)
            java.math.BigInteger r10 = r14.getN()
            java.math.BigInteger r11 = r14.getH()
            r6 = r0
            r6.<init>(r7, r8, r9, r10, r11)
            r13.ecSpec = r0
            goto L1c4
        Lc1:
            java.lang.IllegalArgumentException r14 = new java.lang.IllegalArgumentException
            r14.<init>(r1)
            throw r14
        Lc7:
            org.bouncycastle.asn1.x9.X962Parameters r0 = new org.bouncycastle.asn1.x9.X962Parameters
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r4 = r14.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r4 = r4.getParameters()
            org.bouncycastle.asn1.DERObject r4 = (org.bouncycastle.asn1.DERObject) r4
            r0.<init>(r4)
            boolean r4 = r0.isNamedCurve()
            if (r4 == 0) goto L124
            org.bouncycastle.asn1.DERObject r0 = r0.getParameters()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            org.bouncycastle.asn1.x9.X9ECParameters r4 = org.bouncycastle.jce.provider.ECUtil.getNamedCurveByOid(r0)
            org.bouncycastle.math.ec.ECCurve r5 = r4.getCurve()
            byte[] r6 = r4.getSeed()
            java.security.spec.EllipticCurve r9 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r5, r6)
            org.bouncycastle.jce.spec.ECNamedCurveSpec r6 = new org.bouncycastle.jce.spec.ECNamedCurveSpec
            java.lang.String r8 = org.bouncycastle.jce.provider.ECUtil.getCurveName(r0)
            java.security.spec.ECPoint r10 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECPoint r0 = r4.getG()
            org.bouncycastle.math.ec.ECFieldElement r0 = r0.getX()
            java.math.BigInteger r0 = r0.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r7 = r4.getG()
            org.bouncycastle.math.ec.ECFieldElement r7 = r7.getY()
            java.math.BigInteger r7 = r7.toBigInteger()
            r10.<init>(r0, r7)
            java.math.BigInteger r11 = r4.getN()
            java.math.BigInteger r12 = r4.getH()
            r7 = r6
            r7.<init>(r8, r9, r10, r11, r12)
        L121:
            r13.ecSpec = r6
            goto L17c
        L124:
            boolean r4 = r0.isImplicitlyCA()
            if (r4 == 0) goto L136
            r0 = 0
            r13.ecSpec = r0
            org.bouncycastle.jce.spec.ECParameterSpec r0 = org.bouncycastle.jce.provider.ProviderUtil.getEcImplicitlyCa()
            org.bouncycastle.math.ec.ECCurve r5 = r0.getCurve()
            goto L17c
        L136:
            org.bouncycastle.asn1.x9.X9ECParameters r4 = new org.bouncycastle.asn1.x9.X9ECParameters
            org.bouncycastle.asn1.DERObject r0 = r0.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0
            r4.<init>(r0)
            org.bouncycastle.math.ec.ECCurve r5 = r4.getCurve()
            byte[] r0 = r4.getSeed()
            java.security.spec.EllipticCurve r0 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r5, r0)
            java.security.spec.ECParameterSpec r6 = new java.security.spec.ECParameterSpec
            java.security.spec.ECPoint r7 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECPoint r8 = r4.getG()
            org.bouncycastle.math.ec.ECFieldElement r8 = r8.getX()
            java.math.BigInteger r8 = r8.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r9 = r4.getG()
            org.bouncycastle.math.ec.ECFieldElement r9 = r9.getY()
            java.math.BigInteger r9 = r9.toBigInteger()
            r7.<init>(r8, r9)
            java.math.BigInteger r8 = r4.getN()
            java.math.BigInteger r4 = r4.getH()
            int r4 = r4.intValue()
            r6.<init>(r0, r7, r8, r4)
            goto L121
        L17c:
            org.bouncycastle.asn1.DERBitString r14 = r14.getPublicKeyData()
            byte[] r14 = r14.getBytes()
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            r0.<init>(r14)
            r2 = r14[r2]
            r4 = 4
            if (r2 != r4) goto L1b9
            r2 = r14[r3]
            int r3 = r14.length
            r4 = 2
            int r3 = r3 - r4
            if (r2 != r3) goto L1b9
            r2 = r14[r4]
            r3 = 3
            if (r2 == r4) goto L19e
            r2 = r14[r4]
            if (r2 != r3) goto L1b9
        L19e:
            org.bouncycastle.asn1.x9.X9IntegerConverter r2 = new org.bouncycastle.asn1.x9.X9IntegerConverter
            r2.<init>()
            int r2 = r2.getByteLength(r5)
            int r4 = r14.length
            int r4 = r4 - r3
            if (r2 < r4) goto L1b9
            org.bouncycastle.asn1.ASN1Object r14 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r14)     // Catch: java.io.IOException -> L1b3
            r0 = r14
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0     // Catch: java.io.IOException -> L1b3
            goto L1b9
        L1b3:
            java.lang.IllegalArgumentException r14 = new java.lang.IllegalArgumentException
            r14.<init>(r1)
            throw r14
        L1b9:
            org.bouncycastle.asn1.x9.X9ECPoint r14 = new org.bouncycastle.asn1.x9.X9ECPoint
            r14.<init>(r5, r0)
            org.bouncycastle.math.ec.ECPoint r14 = r14.getPoint()
            r13.q = r14
        L1c4:
            return
    }

    private java.security.spec.ECParameterSpec createSpec(java.security.spec.EllipticCurve r5, org.bouncycastle.crypto.params.ECDomainParameters r6) {
            r4 = this;
            java.security.spec.ECParameterSpec r0 = new java.security.spec.ECParameterSpec
            java.security.spec.ECPoint r1 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECPoint r2 = r6.getG()
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getX()
            java.math.BigInteger r2 = r2.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r3 = r6.getG()
            org.bouncycastle.math.ec.ECFieldElement r3 = r3.getY()
            java.math.BigInteger r3 = r3.toBigInteger()
            r1.<init>(r2, r3)
            java.math.BigInteger r2 = r6.getN()
            java.math.BigInteger r6 = r6.getH()
            int r6 = r6.intValue()
            r0.<init>(r5, r1, r2, r6)
            return r0
    }

    private void extractBytes(byte[] r6, int r7, java.math.BigInteger r8) {
            r5 = this;
            byte[] r8 = r8.toByteArray()
            int r0 = r8.length
            r1 = 0
            r2 = 32
            if (r0 >= r2) goto L13
            byte[] r0 = new byte[r2]
            int r3 = r8.length
            int r3 = 32 - r3
            int r4 = r8.length
            java.lang.System.arraycopy(r8, r1, r0, r3, r4)
        L13:
            if (r1 == r2) goto L22
            int r0 = r7 + r1
            int r3 = r8.length
            int r3 = r3 + (-1)
            int r3 = r3 - r1
            r3 = r8[r3]
            r6[r0] = r3
            int r1 = r1 + 1
            goto L13
        L22:
            return
    }

    org.bouncycastle.math.ec.ECPoint engineGetQ() {
            r1 = this;
            org.bouncycastle.math.ec.ECPoint r0 = r1.q
            return r0
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
            boolean r0 = r4 instanceof org.bouncycastle.jce.provider.JCEECPublicKey
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.jce.provider.JCEECPublicKey r4 = (org.bouncycastle.jce.provider.JCEECPublicKey) r4
            org.bouncycastle.math.ec.ECPoint r0 = r3.engineGetQ()
            org.bouncycastle.math.ec.ECPoint r2 = r4.engineGetQ()
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
    public byte[] getEncoded() {
            r7 = this;
            java.lang.String r0 = r7.algorithm
            java.lang.String r1 = "ECGOST3410"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L5a
            org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r0 = r7.gostParams
            if (r0 == 0) goto Lf
            goto L22
        Lf:
            org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters r0 = new org.bouncycastle.asn1.cryptopro.GOST3410PublicKeyAlgParameters
            java.security.spec.ECParameterSpec r1 = r7.ecSpec
            org.bouncycastle.jce.spec.ECNamedCurveSpec r1 = (org.bouncycastle.jce.spec.ECNamedCurveSpec) r1
            java.lang.String r1 = r1.getName()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.getOID(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_CryptoProParamSet
            r0.<init>(r1, r2)
        L22:
            org.bouncycastle.math.ec.ECPoint r1 = r7.q
            org.bouncycastle.math.ec.ECFieldElement r1 = r1.getX()
            java.math.BigInteger r1 = r1.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r2 = r7.q
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getY()
            java.math.BigInteger r2 = r2.toBigInteger()
            r3 = 64
            byte[] r3 = new byte[r3]
            r4 = 0
            r7.extractBytes(r3, r4, r1)
            r1 = 32
            r7.extractBytes(r3, r1, r2)
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r1 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            r2.<init>(r4, r0)
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            r0.<init>(r3)
            r1.<init>(r2, r0)
            goto Lfa
        L5a:
            java.security.spec.ECParameterSpec r0 = r7.ecSpec
            boolean r1 = r0 instanceof org.bouncycastle.jce.spec.ECNamedCurveSpec
            if (r1 == 0) goto L70
            org.bouncycastle.jce.spec.ECNamedCurveSpec r0 = (org.bouncycastle.jce.spec.ECNamedCurveSpec) r0
            java.lang.String r0 = r0.getName()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.jce.provider.ECUtil.getNamedCurveOid(r0)
            org.bouncycastle.asn1.x9.X962Parameters r1 = new org.bouncycastle.asn1.x9.X962Parameters
            r1.<init>(r0)
            goto Lb4
        L70:
            if (r0 != 0) goto L7a
            org.bouncycastle.asn1.x9.X962Parameters r1 = new org.bouncycastle.asn1.x9.X962Parameters
            org.bouncycastle.asn1.DERNull r0 = org.bouncycastle.asn1.DERNull.INSTANCE
            r1.<init>(r0)
            goto Lb4
        L7a:
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
        Lb4:
            org.bouncycastle.math.ec.ECPoint r0 = r7.engineGetQ()
            org.bouncycastle.math.ec.ECCurve r0 = r0.getCurve()
            org.bouncycastle.asn1.x9.X9ECPoint r2 = new org.bouncycastle.asn1.x9.X9ECPoint
            org.bouncycastle.math.ec.ECPoint r3 = r7.getQ()
            org.bouncycastle.math.ec.ECFieldElement r3 = r3.getX()
            java.math.BigInteger r3 = r3.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r4 = r7.getQ()
            org.bouncycastle.math.ec.ECFieldElement r4 = r4.getY()
            java.math.BigInteger r4 = r4.toBigInteger()
            boolean r5 = r7.withCompression
            org.bouncycastle.math.ec.ECPoint r0 = r0.createPoint(r3, r4, r5)
            r2.<init>(r0)
            org.bouncycastle.asn1.DERObject r0 = r2.getDERObject()
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r2 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_ecPublicKey
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            r3.<init>(r4, r1)
            byte[] r0 = r0.getOctets()
            r2.<init>(r3, r0)
            r1 = r2
        Lfa:
            byte[] r0 = r1.getDEREncoded()
            return r0
    }

    @Override
    public java.lang.String getFormat() {
            r1 = this;
            java.lang.String r0 = "X.509"
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
    public org.bouncycastle.math.ec.ECPoint getQ() {
            r4 = this;
            java.security.spec.ECParameterSpec r0 = r4.ecSpec
            if (r0 != 0) goto L2f
            org.bouncycastle.math.ec.ECPoint r0 = r4.q
            boolean r0 = r0 instanceof org.bouncycastle.math.ec.ECPoint.Fp
            r1 = 0
            if (r0 == 0) goto L1d
            org.bouncycastle.math.ec.ECPoint$Fp r0 = new org.bouncycastle.math.ec.ECPoint$Fp
            org.bouncycastle.math.ec.ECPoint r2 = r4.q
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getX()
            org.bouncycastle.math.ec.ECPoint r3 = r4.q
            org.bouncycastle.math.ec.ECFieldElement r3 = r3.getY()
            r0.<init>(r1, r2, r3)
            return r0
        L1d:
            org.bouncycastle.math.ec.ECPoint$F2m r0 = new org.bouncycastle.math.ec.ECPoint$F2m
            org.bouncycastle.math.ec.ECPoint r2 = r4.q
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getX()
            org.bouncycastle.math.ec.ECPoint r3 = r4.q
            org.bouncycastle.math.ec.ECFieldElement r3 = r3.getY()
            r0.<init>(r1, r2, r3)
            return r0
        L2f:
            org.bouncycastle.math.ec.ECPoint r0 = r4.q
            return r0
    }

    @Override
    public java.security.spec.ECPoint getW() {
            r3 = this;
            java.security.spec.ECPoint r0 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECPoint r1 = r3.q
            org.bouncycastle.math.ec.ECFieldElement r1 = r1.getX()
            java.math.BigInteger r1 = r1.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r2 = r3.q
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getY()
            java.math.BigInteger r2 = r2.toBigInteger()
            r0.<init>(r1, r2)
            return r0
    }

    public int hashCode() {
            r2 = this;
            org.bouncycastle.math.ec.ECPoint r0 = r2.engineGetQ()
            int r0 = r0.hashCode()
            org.bouncycastle.jce.spec.ECParameterSpec r1 = r2.engineGetSpec()
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            return r0
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

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "line.separator"
            java.lang.String r1 = java.lang.System.getProperty(r1)
            java.lang.String r2 = "EC Public Key"
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "            X: "
            r0.append(r2)
            org.bouncycastle.math.ec.ECPoint r2 = r4.q
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getX()
            java.math.BigInteger r2 = r2.toBigInteger()
            r3 = 16
            java.lang.String r2 = r2.toString(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "            Y: "
            r0.append(r2)
            org.bouncycastle.math.ec.ECPoint r2 = r4.q
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getY()
            java.math.BigInteger r2 = r2.toBigInteger()
            java.lang.String r2 = r2.toString(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
