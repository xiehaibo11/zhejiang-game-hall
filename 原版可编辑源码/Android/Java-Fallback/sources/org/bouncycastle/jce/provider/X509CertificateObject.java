package org.bouncycastle.jce.provider;

public class X509CertificateObject extends java.security.cert.X509Certificate implements org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier {
    private org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier attrCarrier;
    private org.bouncycastle.asn1.x509.BasicConstraints basicConstraints;
    private org.bouncycastle.asn1.x509.X509CertificateStructure c;
    private boolean[] keyUsage;

    public X509CertificateObject(org.bouncycastle.asn1.x509.X509CertificateStructure r8) throws java.security.cert.CertificateParsingException {
            r7 = this;
            r7.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r7.attrCarrier = r0
            r7.c = r8
            java.lang.String r8 = "2.5.29.19"
            byte[] r8 = r7.getExtensionBytes(r8)     // Catch: java.lang.Exception -> L7a
            if (r8 == 0) goto L1e
            org.bouncycastle.asn1.ASN1Object r8 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r8)     // Catch: java.lang.Exception -> L7a
            org.bouncycastle.asn1.x509.BasicConstraints r8 = org.bouncycastle.asn1.x509.BasicConstraints.getInstance(r8)     // Catch: java.lang.Exception -> L7a
            r7.basicConstraints = r8     // Catch: java.lang.Exception -> L7a
        L1e:
            java.lang.String r8 = "2.5.29.15"
            byte[] r8 = r7.getExtensionBytes(r8)     // Catch: java.lang.Exception -> L62
            if (r8 == 0) goto L5e
            org.bouncycastle.asn1.ASN1Object r8 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r8)     // Catch: java.lang.Exception -> L62
            org.bouncycastle.asn1.DERBitString r8 = org.bouncycastle.asn1.DERBitString.getInstance(r8)     // Catch: java.lang.Exception -> L62
            byte[] r0 = r8.getBytes()     // Catch: java.lang.Exception -> L62
            int r1 = r0.length     // Catch: java.lang.Exception -> L62
            int r1 = r1 * 8
            int r8 = r8.getPadBits()     // Catch: java.lang.Exception -> L62
            int r1 = r1 - r8
            r8 = 9
            if (r1 >= r8) goto L3f
            goto L40
        L3f:
            r8 = r1
        L40:
            boolean[] r8 = new boolean[r8]     // Catch: java.lang.Exception -> L62
            r7.keyUsage = r8     // Catch: java.lang.Exception -> L62
            r8 = 0
            r2 = 0
        L46:
            if (r2 == r1) goto L61
            boolean[] r3 = r7.keyUsage     // Catch: java.lang.Exception -> L62
            int r4 = r2 / 8
            r4 = r0[r4]     // Catch: java.lang.Exception -> L62
            r5 = 128(0x80, float:1.8E-43)
            int r6 = r2 % 8
            int r5 = r5 >>> r6
            r4 = r4 & r5
            if (r4 == 0) goto L58
            r4 = 1
            goto L59
        L58:
            r4 = 0
        L59:
            r3[r2] = r4     // Catch: java.lang.Exception -> L62
            int r2 = r2 + 1
            goto L46
        L5e:
            r8 = 0
            r7.keyUsage = r8     // Catch: java.lang.Exception -> L62
        L61:
            return
        L62:
            r8 = move-exception
            java.security.cert.CertificateParsingException r0 = new java.security.cert.CertificateParsingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "cannot construct KeyUsage: "
            r1.append(r2)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
        L7a:
            r8 = move-exception
            java.security.cert.CertificateParsingException r0 = new java.security.cert.CertificateParsingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "cannot construct BasicConstraints: "
            r1.append(r2)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
    }

    private void checkSignature(java.security.PublicKey r3, java.security.Signature r4) throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.InvalidKeyException {
            r2 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r2.c
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getSignatureAlgorithm()
            org.bouncycastle.asn1.x509.X509CertificateStructure r1 = r2.c
            org.bouncycastle.asn1.x509.TBSCertificateStructure r1 = r1.getTBSCertificate()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r1.getSignature()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L40
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r2.c
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getSignatureAlgorithm()
            org.bouncycastle.asn1.DEREncodable r0 = r0.getParameters()
            org.bouncycastle.jce.provider.X509SignatureUtil.setSignatureParameters(r4, r0)
            r4.initVerify(r3)
            byte[] r3 = r2.getTBSCertificate()
            r4.update(r3)
            byte[] r3 = r2.getSignature()
            boolean r3 = r4.verify(r3)
            if (r3 == 0) goto L38
            return
        L38:
            java.security.InvalidKeyException r3 = new java.security.InvalidKeyException
            java.lang.String r4 = "Public key presented not for certificate signature"
            r3.<init>(r4)
            throw r3
        L40:
            java.security.cert.CertificateException r3 = new java.security.cert.CertificateException
            java.lang.String r4 = "signature algorithm in TBS cert not same as outer cert"
            r3.<init>(r4)
            throw r3
    }

    private byte[] getExtensionBytes(java.lang.String r3) {
            r2 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r2.c
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r0.getTBSCertificate()
            org.bouncycastle.asn1.x509.X509Extensions r0 = r0.getExtensions()
            if (r0 == 0) goto L20
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r3)
            org.bouncycastle.asn1.x509.X509Extension r3 = r0.getExtension(r1)
            if (r3 == 0) goto L20
            org.bouncycastle.asn1.ASN1OctetString r3 = r3.getValue()
            byte[] r3 = r3.getOctets()
            return r3
        L20:
            r3 = 0
            return r3
    }

    @Override
    public void checkValidity() throws java.security.cert.CertificateExpiredException, java.security.cert.CertificateNotYetValidException {
            r1 = this;
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            r1.checkValidity(r0)
            return
    }

    @Override
    public void checkValidity(java.util.Date r6) throws java.security.cert.CertificateExpiredException, java.security.cert.CertificateNotYetValidException {
            r5 = this;
            long r0 = r6.getTime()
            java.util.Date r2 = r5.getNotAfter()
            long r2 = r2.getTime()
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto L42
            long r0 = r6.getTime()
            java.util.Date r6 = r5.getNotBefore()
            long r2 = r6.getTime()
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 < 0) goto L21
            return
        L21:
            java.security.cert.CertificateNotYetValidException r6 = new java.security.cert.CertificateNotYetValidException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "certificate not valid till "
            r0.append(r1)
            org.bouncycastle.asn1.x509.X509CertificateStructure r1 = r5.c
            org.bouncycastle.asn1.x509.Time r1 = r1.getStartDate()
            java.lang.String r1 = r1.getTime()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L42:
            java.security.cert.CertificateExpiredException r6 = new java.security.cert.CertificateExpiredException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "certificate expired on "
            r0.append(r1)
            org.bouncycastle.asn1.x509.X509CertificateStructure r1 = r5.c
            org.bouncycastle.asn1.x509.Time r1 = r1.getEndDate()
            java.lang.String r1 = r1.getTime()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
    }

    @Override
    public boolean equals(java.lang.Object r3) {
            r2 = this;
            if (r3 != r2) goto L4
            r3 = 1
            return r3
        L4:
            boolean r0 = r3 instanceof java.security.cert.Certificate
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            java.security.cert.Certificate r3 = (java.security.cert.Certificate) r3
            byte[] r0 = r2.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> L19
            byte[] r3 = r3.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> L19
            boolean r3 = org.bouncycastle.util.Arrays.areEqual(r0, r3)     // Catch: java.security.cert.CertificateEncodingException -> L19
            return r3
        L19:
            return r1
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
    public int getBasicConstraints() {
            r2 = this;
            org.bouncycastle.asn1.x509.BasicConstraints r0 = r2.basicConstraints
            r1 = -1
            if (r0 == 0) goto L22
            boolean r0 = r0.isCA()
            if (r0 == 0) goto L22
            org.bouncycastle.asn1.x509.BasicConstraints r0 = r2.basicConstraints
            java.math.BigInteger r0 = r0.getPathLenConstraint()
            if (r0 != 0) goto L17
            r0 = 2147483647(0x7fffffff, float:NaN)
            return r0
        L17:
            org.bouncycastle.asn1.x509.BasicConstraints r0 = r2.basicConstraints
            java.math.BigInteger r0 = r0.getPathLenConstraint()
            int r0 = r0.intValue()
            return r0
        L22:
            return r1
    }

    @Override
    public java.util.Set getCriticalExtensionOIDs() {
            r5 = this;
            int r0 = r5.getVersion()
            r1 = 3
            if (r0 != r1) goto L3b
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.asn1.x509.X509CertificateStructure r1 = r5.c
            org.bouncycastle.asn1.x509.TBSCertificateStructure r1 = r1.getTBSCertificate()
            org.bouncycastle.asn1.x509.X509Extensions r1 = r1.getExtensions()
            if (r1 == 0) goto L3b
            java.util.Enumeration r2 = r1.oids()
        L1c:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto L3a
            java.lang.Object r3 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            org.bouncycastle.asn1.x509.X509Extension r4 = r1.getExtension(r3)
            boolean r4 = r4.isCritical()
            if (r4 == 0) goto L1c
            java.lang.String r3 = r3.getId()
            r0.add(r3)
            goto L1c
        L3a:
            return r0
        L3b:
            r0 = 0
            return r0
    }

    @Override
    public byte[] getEncoded() throws java.security.cert.CertificateEncodingException {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
            r1.<init>(r0)
            org.bouncycastle.asn1.x509.X509CertificateStructure r2 = r3.c     // Catch: java.io.IOException -> L14
            r1.writeObject(r2)     // Catch: java.io.IOException -> L14
            byte[] r0 = r0.toByteArray()     // Catch: java.io.IOException -> L14
            return r0
        L14:
            r0 = move-exception
            java.security.cert.CertificateEncodingException r1 = new java.security.cert.CertificateEncodingException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public java.util.List getExtendedKeyUsage() throws java.security.cert.CertificateParsingException {
            r4 = this;
            java.lang.String r0 = "2.5.29.37"
            byte[] r0 = r4.getExtensionBytes(r0)
            if (r0 == 0) goto L3c
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L34
            r1.<init>(r0)     // Catch: java.lang.Exception -> L34
            org.bouncycastle.asn1.DERObject r0 = r1.readObject()     // Catch: java.lang.Exception -> L34
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0     // Catch: java.lang.Exception -> L34
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L34
            r1.<init>()     // Catch: java.lang.Exception -> L34
            r2 = 0
        L19:
            int r3 = r0.size()     // Catch: java.lang.Exception -> L34
            if (r2 == r3) goto L2f
            org.bouncycastle.asn1.DEREncodable r3 = r0.getObjectAt(r2)     // Catch: java.lang.Exception -> L34
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3     // Catch: java.lang.Exception -> L34
            java.lang.String r3 = r3.getId()     // Catch: java.lang.Exception -> L34
            r1.add(r3)     // Catch: java.lang.Exception -> L34
            int r2 = r2 + 1
            goto L19
        L2f:
            java.util.List r0 = java.util.Collections.unmodifiableList(r1)     // Catch: java.lang.Exception -> L34
            return r0
        L34:
            java.security.cert.CertificateParsingException r0 = new java.security.cert.CertificateParsingException
            java.lang.String r1 = "error processing extended key usage extension"
            r0.<init>(r1)
            throw r0
        L3c:
            r0 = 0
            return r0
    }

    @Override
    public byte[] getExtensionValue(java.lang.String r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r3.c
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r0.getTBSCertificate()
            org.bouncycastle.asn1.x509.X509Extensions r0 = r0.getExtensions()
            if (r0 == 0) goto L3c
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r4)
            org.bouncycastle.asn1.x509.X509Extension r4 = r0.getExtension(r1)
            if (r4 == 0) goto L3c
            org.bouncycastle.asn1.ASN1OctetString r4 = r4.getValue()     // Catch: java.lang.Exception -> L20
            byte[] r4 = r4.getEncoded()     // Catch: java.lang.Exception -> L20
            return r4
        L20:
            r4 = move-exception
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "error parsing "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L3c:
            r4 = 0
            return r4
    }

    @Override
    public java.security.Principal getIssuerDN() {
            r2 = this;
            org.bouncycastle.jce.X509Principal r0 = new org.bouncycastle.jce.X509Principal
            org.bouncycastle.asn1.x509.X509CertificateStructure r1 = r2.c
            org.bouncycastle.asn1.x509.X509Name r1 = r1.getIssuer()
            r0.<init>(r1)
            return r0
    }

    @Override
    public boolean[] getIssuerUniqueID() {
            r8 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r8.c
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r0.getTBSCertificate()
            org.bouncycastle.asn1.DERBitString r0 = r0.getIssuerUniqueId()
            if (r0 == 0) goto L33
            byte[] r1 = r0.getBytes()
            int r2 = r1.length
            int r2 = r2 * 8
            int r0 = r0.getPadBits()
            int r2 = r2 - r0
            boolean[] r0 = new boolean[r2]
            r3 = 0
            r4 = 0
        L1c:
            if (r4 == r2) goto L32
            int r5 = r4 / 8
            r5 = r1[r5]
            r6 = 128(0x80, float:1.8E-43)
            int r7 = r4 % 8
            int r6 = r6 >>> r7
            r5 = r5 & r6
            if (r5 == 0) goto L2c
            r5 = 1
            goto L2d
        L2c:
            r5 = 0
        L2d:
            r0[r4] = r5
            int r4 = r4 + 1
            goto L1c
        L32:
            return r0
        L33:
            r0 = 0
            return r0
    }

    @Override
    public javax.security.auth.x500.X500Principal getIssuerX500Principal() {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> L1d
            r0.<init>()     // Catch: java.io.IOException -> L1d
            org.bouncycastle.asn1.ASN1OutputStream r1 = new org.bouncycastle.asn1.ASN1OutputStream     // Catch: java.io.IOException -> L1d
            r1.<init>(r0)     // Catch: java.io.IOException -> L1d
            org.bouncycastle.asn1.x509.X509CertificateStructure r2 = r3.c     // Catch: java.io.IOException -> L1d
            org.bouncycastle.asn1.x509.X509Name r2 = r2.getIssuer()     // Catch: java.io.IOException -> L1d
            r1.writeObject(r2)     // Catch: java.io.IOException -> L1d
            javax.security.auth.x500.X500Principal r1 = new javax.security.auth.x500.X500Principal     // Catch: java.io.IOException -> L1d
            byte[] r0 = r0.toByteArray()     // Catch: java.io.IOException -> L1d
            r1.<init>(r0)     // Catch: java.io.IOException -> L1d
            return r1
        L1d:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "can't encode issuer DN"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public boolean[] getKeyUsage() {
            r1 = this;
            boolean[] r0 = r1.keyUsage
            return r0
    }

    @Override
    public java.util.Set getNonCriticalExtensionOIDs() {
            r5 = this;
            int r0 = r5.getVersion()
            r1 = 3
            if (r0 != r1) goto L3b
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.asn1.x509.X509CertificateStructure r1 = r5.c
            org.bouncycastle.asn1.x509.TBSCertificateStructure r1 = r1.getTBSCertificate()
            org.bouncycastle.asn1.x509.X509Extensions r1 = r1.getExtensions()
            if (r1 == 0) goto L3b
            java.util.Enumeration r2 = r1.oids()
        L1c:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto L3a
            java.lang.Object r3 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            org.bouncycastle.asn1.x509.X509Extension r4 = r1.getExtension(r3)
            boolean r4 = r4.isCritical()
            if (r4 != 0) goto L1c
            java.lang.String r3 = r3.getId()
            r0.add(r3)
            goto L1c
        L3a:
            return r0
        L3b:
            r0 = 0
            return r0
    }

    @Override
    public java.util.Date getNotAfter() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.c
            org.bouncycastle.asn1.x509.Time r0 = r0.getEndDate()
            java.util.Date r0 = r0.getDate()
            return r0
    }

    @Override
    public java.util.Date getNotBefore() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.c
            org.bouncycastle.asn1.x509.Time r0 = r0.getStartDate()
            java.util.Date r0 = r0.getDate()
            return r0
    }

    @Override
    public java.security.PublicKey getPublicKey() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.c
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = r0.getSubjectPublicKeyInfo()
            java.security.PublicKey r0 = org.bouncycastle.jce.provider.JDKKeyFactory.createPublicKeyFromPublicKeyInfo(r0)
            return r0
    }

    @Override
    public java.math.BigInteger getSerialNumber() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.c
            org.bouncycastle.asn1.DERInteger r0 = r0.getSerialNumber()
            java.math.BigInteger r0 = r0.getValue()
            return r0
    }

    @Override
    public java.lang.String getSigAlgName() {
            r6 = this;
            java.lang.String r0 = "BC"
            java.security.Provider r0 = java.security.Security.getProvider(r0)
            java.lang.String r1 = "Alg.Alias.Signature."
            if (r0 == 0) goto L24
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r3 = r6.getSigAlgOID()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = r0.getProperty(r2)
            if (r0 == 0) goto L24
            return r0
        L24:
            java.security.Provider[] r0 = java.security.Security.getProviders()
            r2 = 0
        L29:
            int r3 = r0.length
            if (r2 == r3) goto L4b
            r3 = r0[r2]
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r1)
            java.lang.String r5 = r6.getSigAlgOID()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r3 = r3.getProperty(r4)
            if (r3 == 0) goto L48
            return r3
        L48:
            int r2 = r2 + 1
            goto L29
        L4b:
            java.lang.String r0 = r6.getSigAlgOID()
            return r0
    }

    @Override
    public java.lang.String getSigAlgOID() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.c
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getSignatureAlgorithm()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            java.lang.String r0 = r0.getId()
            return r0
    }

    @Override
    public byte[] getSigAlgParams() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.c
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getSignatureAlgorithm()
            org.bouncycastle.asn1.DEREncodable r0 = r0.getParameters()
            if (r0 == 0) goto L1f
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.c
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getSignatureAlgorithm()
            org.bouncycastle.asn1.DEREncodable r0 = r0.getParameters()
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            byte[] r0 = r0.getDEREncoded()
            return r0
        L1f:
            r0 = 0
            return r0
    }

    @Override
    public byte[] getSignature() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.c
            org.bouncycastle.asn1.DERBitString r0 = r0.getSignature()
            byte[] r0 = r0.getBytes()
            return r0
    }

    @Override
    public java.security.Principal getSubjectDN() {
            r2 = this;
            org.bouncycastle.jce.X509Principal r0 = new org.bouncycastle.jce.X509Principal
            org.bouncycastle.asn1.x509.X509CertificateStructure r1 = r2.c
            org.bouncycastle.asn1.x509.X509Name r1 = r1.getSubject()
            r0.<init>(r1)
            return r0
    }

    @Override
    public boolean[] getSubjectUniqueID() {
            r8 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r8.c
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r0.getTBSCertificate()
            org.bouncycastle.asn1.DERBitString r0 = r0.getSubjectUniqueId()
            if (r0 == 0) goto L33
            byte[] r1 = r0.getBytes()
            int r2 = r1.length
            int r2 = r2 * 8
            int r0 = r0.getPadBits()
            int r2 = r2 - r0
            boolean[] r0 = new boolean[r2]
            r3 = 0
            r4 = 0
        L1c:
            if (r4 == r2) goto L32
            int r5 = r4 / 8
            r5 = r1[r5]
            r6 = 128(0x80, float:1.8E-43)
            int r7 = r4 % 8
            int r6 = r6 >>> r7
            r5 = r5 & r6
            if (r5 == 0) goto L2c
            r5 = 1
            goto L2d
        L2c:
            r5 = 0
        L2d:
            r0[r4] = r5
            int r4 = r4 + 1
            goto L1c
        L32:
            return r0
        L33:
            r0 = 0
            return r0
    }

    @Override
    public javax.security.auth.x500.X500Principal getSubjectX500Principal() {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> L1d
            r0.<init>()     // Catch: java.io.IOException -> L1d
            org.bouncycastle.asn1.ASN1OutputStream r1 = new org.bouncycastle.asn1.ASN1OutputStream     // Catch: java.io.IOException -> L1d
            r1.<init>(r0)     // Catch: java.io.IOException -> L1d
            org.bouncycastle.asn1.x509.X509CertificateStructure r2 = r3.c     // Catch: java.io.IOException -> L1d
            org.bouncycastle.asn1.x509.X509Name r2 = r2.getSubject()     // Catch: java.io.IOException -> L1d
            r1.writeObject(r2)     // Catch: java.io.IOException -> L1d
            javax.security.auth.x500.X500Principal r1 = new javax.security.auth.x500.X500Principal     // Catch: java.io.IOException -> L1d
            byte[] r0 = r0.toByteArray()     // Catch: java.io.IOException -> L1d
            r1.<init>(r0)     // Catch: java.io.IOException -> L1d
            return r1
        L1d:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "can't encode issuer DN"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public byte[] getTBSCertificate() throws java.security.cert.CertificateEncodingException {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
            r1.<init>(r0)
            org.bouncycastle.asn1.x509.X509CertificateStructure r2 = r3.c     // Catch: java.io.IOException -> L18
            org.bouncycastle.asn1.x509.TBSCertificateStructure r2 = r2.getTBSCertificate()     // Catch: java.io.IOException -> L18
            r1.writeObject(r2)     // Catch: java.io.IOException -> L18
            byte[] r0 = r0.toByteArray()     // Catch: java.io.IOException -> L18
            return r0
        L18:
            r0 = move-exception
            java.security.cert.CertificateEncodingException r1 = new java.security.cert.CertificateEncodingException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public int getVersion() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.c
            int r0 = r0.getVersion()
            return r0
    }

    @Override
    public boolean hasUnsupportedCriticalExtension() {
            r5 = this;
            int r0 = r5.getVersion()
            r1 = 3
            if (r0 != r1) goto L8c
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r5.c
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r0.getTBSCertificate()
            org.bouncycastle.asn1.x509.X509Extensions r0 = r0.getExtensions()
            if (r0 == 0) goto L8c
            java.util.Enumeration r1 = r0.oids()
        L17:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L8c
            java.lang.Object r2 = r1.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = (org.bouncycastle.asn1.DERObjectIdentifier) r2
            java.lang.String r3 = r2.getId()
            java.lang.String r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.KEY_USAGE
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L17
            java.lang.String r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CERTIFICATE_POLICIES
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L17
            java.lang.String r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.POLICY_MAPPINGS
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L17
            java.lang.String r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.INHIBIT_ANY_POLICY
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L17
            java.lang.String r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CRL_DISTRIBUTION_POINTS
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L17
            java.lang.String r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.ISSUING_DISTRIBUTION_POINT
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L17
            java.lang.String r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.DELTA_CRL_INDICATOR
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L17
            java.lang.String r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.POLICY_CONSTRAINTS
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L17
            java.lang.String r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.BASIC_CONSTRAINTS
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L17
            java.lang.String r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.SUBJECT_ALTERNATIVE_NAME
            boolean r4 = r3.equals(r4)
            if (r4 != 0) goto L17
            java.lang.String r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.NAME_CONSTRAINTS
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L80
            goto L17
        L80:
            org.bouncycastle.asn1.x509.X509Extension r2 = r0.getExtension(r2)
            boolean r2 = r2.isCritical()
            if (r2 == 0) goto L17
            r0 = 1
            return r0
        L8c:
            r0 = 0
            return r0
    }

    @Override
    public int hashCode() {
            r6 = this;
            r0 = 0
            byte[] r1 = r6.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> L16
            r2 = 0
            r3 = 0
        L7:
            int r4 = r1.length     // Catch: java.security.cert.CertificateEncodingException -> L16
            if (r2 == r4) goto L15
            r4 = r1[r2]     // Catch: java.security.cert.CertificateEncodingException -> L16
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r5 = r2 % 4
            int r4 = r4 << r5
            r3 = r3 ^ r4
            int r2 = r2 + 1
            goto L7
        L15:
            return r3
        L16:
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
    public java.lang.String toString() {
            r9 = this;
            java.lang.String r0 = " value = "
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.lang.String r2 = "line.separator"
            java.lang.String r2 = java.lang.System.getProperty(r2)
            java.lang.String r3 = "  [0]         Version: "
            r1.append(r3)
            int r3 = r9.getVersion()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = "         SerialNumber: "
            r1.append(r3)
            java.math.BigInteger r3 = r9.getSerialNumber()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = "             IssuerDN: "
            r1.append(r3)
            java.security.Principal r3 = r9.getIssuerDN()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = "           Start Date: "
            r1.append(r3)
            java.util.Date r3 = r9.getNotBefore()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = "           Final Date: "
            r1.append(r3)
            java.util.Date r3 = r9.getNotAfter()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = "            SubjectDN: "
            r1.append(r3)
            java.security.Principal r3 = r9.getSubjectDN()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = "           Public Key: "
            r1.append(r3)
            java.security.PublicKey r3 = r9.getPublicKey()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = "  Signature Algorithm: "
            r1.append(r3)
            java.lang.String r3 = r9.getSigAlgName()
            r1.append(r3)
            r1.append(r2)
            byte[] r3 = r9.getSignature()
            java.lang.String r4 = "            Signature: "
            r1.append(r4)
            java.lang.String r4 = new java.lang.String
            r5 = 20
            r6 = 0
            byte[] r6 = org.bouncycastle.util.encoders.Hex.encode(r3, r6, r5)
            r4.<init>(r6)
            r1.append(r4)
            r1.append(r2)
            r4 = 20
        La2:
            int r6 = r3.length
            if (r4 >= r6) goto Lcc
            int r6 = r3.length
            int r6 = r6 - r5
            java.lang.String r7 = "                       "
            r1.append(r7)
            if (r4 >= r6) goto Lb8
            java.lang.String r6 = new java.lang.String
            byte[] r7 = org.bouncycastle.util.encoders.Hex.encode(r3, r4, r5)
            r6.<init>(r7)
            goto Lc3
        Lb8:
            java.lang.String r6 = new java.lang.String
            int r7 = r3.length
            int r7 = r7 - r4
            byte[] r7 = org.bouncycastle.util.encoders.Hex.encode(r3, r4, r7)
            r6.<init>(r7)
        Lc3:
            r1.append(r6)
            r1.append(r2)
            int r4 = r4 + 20
            goto La2
        Lcc:
            org.bouncycastle.asn1.x509.X509CertificateStructure r3 = r9.c
            org.bouncycastle.asn1.x509.TBSCertificateStructure r3 = r3.getTBSCertificate()
            org.bouncycastle.asn1.x509.X509Extensions r3 = r3.getExtensions()
            if (r3 == 0) goto L1af
            java.util.Enumeration r4 = r3.oids()
            boolean r5 = r4.hasMoreElements()
            if (r5 == 0) goto Le7
            java.lang.String r5 = "       Extensions: \n"
            r1.append(r5)
        Le7:
            boolean r5 = r4.hasMoreElements()
            if (r5 == 0) goto L1af
            java.lang.Object r5 = r4.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r5 = (org.bouncycastle.asn1.DERObjectIdentifier) r5
            org.bouncycastle.asn1.x509.X509Extension r6 = r3.getExtension(r5)
            org.bouncycastle.asn1.ASN1OctetString r7 = r6.getValue()
            if (r7 == 0) goto L1aa
            org.bouncycastle.asn1.ASN1OctetString r7 = r6.getValue()
            byte[] r7 = r7.getOctets()
            org.bouncycastle.asn1.ASN1InputStream r8 = new org.bouncycastle.asn1.ASN1InputStream
            r8.<init>(r7)
            java.lang.String r7 = "                       critical("
            r1.append(r7)
            boolean r6 = r6.isCritical()
            r1.append(r6)
            java.lang.String r6 = ") "
            r1.append(r6)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.x509.X509Extensions.BasicConstraints     // Catch: java.lang.Exception -> L19b
            boolean r6 = r5.equals(r6)     // Catch: java.lang.Exception -> L19b
            if (r6 == 0) goto L135
            org.bouncycastle.asn1.x509.BasicConstraints r6 = new org.bouncycastle.asn1.x509.BasicConstraints     // Catch: java.lang.Exception -> L19b
            org.bouncycastle.asn1.DERObject r7 = r8.readObject()     // Catch: java.lang.Exception -> L19b
            org.bouncycastle.asn1.ASN1Sequence r7 = (org.bouncycastle.asn1.ASN1Sequence) r7     // Catch: java.lang.Exception -> L19b
            r6.<init>(r7)     // Catch: java.lang.Exception -> L19b
        L12e:
            r1.append(r6)     // Catch: java.lang.Exception -> L19b
        L131:
            r1.append(r2)     // Catch: java.lang.Exception -> L19b
            goto Le7
        L135:
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.x509.X509Extensions.KeyUsage     // Catch: java.lang.Exception -> L19b
            boolean r6 = r5.equals(r6)     // Catch: java.lang.Exception -> L19b
            if (r6 == 0) goto L149
            org.bouncycastle.asn1.x509.KeyUsage r6 = new org.bouncycastle.asn1.x509.KeyUsage     // Catch: java.lang.Exception -> L19b
            org.bouncycastle.asn1.DERObject r7 = r8.readObject()     // Catch: java.lang.Exception -> L19b
            org.bouncycastle.asn1.DERBitString r7 = (org.bouncycastle.asn1.DERBitString) r7     // Catch: java.lang.Exception -> L19b
            r6.<init>(r7)     // Catch: java.lang.Exception -> L19b
            goto L12e
        L149:
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.misc.MiscObjectIdentifiers.netscapeCertType     // Catch: java.lang.Exception -> L19b
            boolean r6 = r5.equals(r6)     // Catch: java.lang.Exception -> L19b
            if (r6 == 0) goto L15d
            org.bouncycastle.asn1.misc.NetscapeCertType r6 = new org.bouncycastle.asn1.misc.NetscapeCertType     // Catch: java.lang.Exception -> L19b
            org.bouncycastle.asn1.DERObject r7 = r8.readObject()     // Catch: java.lang.Exception -> L19b
            org.bouncycastle.asn1.DERBitString r7 = (org.bouncycastle.asn1.DERBitString) r7     // Catch: java.lang.Exception -> L19b
            r6.<init>(r7)     // Catch: java.lang.Exception -> L19b
            goto L12e
        L15d:
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.misc.MiscObjectIdentifiers.netscapeRevocationURL     // Catch: java.lang.Exception -> L19b
            boolean r6 = r5.equals(r6)     // Catch: java.lang.Exception -> L19b
            if (r6 == 0) goto L171
            org.bouncycastle.asn1.misc.NetscapeRevocationURL r6 = new org.bouncycastle.asn1.misc.NetscapeRevocationURL     // Catch: java.lang.Exception -> L19b
            org.bouncycastle.asn1.DERObject r7 = r8.readObject()     // Catch: java.lang.Exception -> L19b
            org.bouncycastle.asn1.DERIA5String r7 = (org.bouncycastle.asn1.DERIA5String) r7     // Catch: java.lang.Exception -> L19b
            r6.<init>(r7)     // Catch: java.lang.Exception -> L19b
            goto L12e
        L171:
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.misc.MiscObjectIdentifiers.verisignCzagExtension     // Catch: java.lang.Exception -> L19b
            boolean r6 = r5.equals(r6)     // Catch: java.lang.Exception -> L19b
            if (r6 == 0) goto L185
            org.bouncycastle.asn1.misc.VerisignCzagExtension r6 = new org.bouncycastle.asn1.misc.VerisignCzagExtension     // Catch: java.lang.Exception -> L19b
            org.bouncycastle.asn1.DERObject r7 = r8.readObject()     // Catch: java.lang.Exception -> L19b
            org.bouncycastle.asn1.DERIA5String r7 = (org.bouncycastle.asn1.DERIA5String) r7     // Catch: java.lang.Exception -> L19b
            r6.<init>(r7)     // Catch: java.lang.Exception -> L19b
            goto L12e
        L185:
            java.lang.String r6 = r5.getId()     // Catch: java.lang.Exception -> L19b
            r1.append(r6)     // Catch: java.lang.Exception -> L19b
            r1.append(r0)     // Catch: java.lang.Exception -> L19b
            org.bouncycastle.asn1.DERObject r6 = r8.readObject()     // Catch: java.lang.Exception -> L19b
            java.lang.String r6 = org.bouncycastle.asn1.util.ASN1Dump.dumpAsString(r6)     // Catch: java.lang.Exception -> L19b
            r1.append(r6)     // Catch: java.lang.Exception -> L19b
            goto L131
        L19b:
            java.lang.String r5 = r5.getId()
            r1.append(r5)
            r1.append(r0)
            java.lang.String r5 = "*****"
            r1.append(r5)
        L1aa:
            r1.append(r2)
            goto Le7
        L1af:
            java.lang.String r0 = r1.toString()
            return r0
    }

    @Override
    public final void verify(java.security.PublicKey r3) throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.security.InvalidKeyException, java.security.NoSuchProviderException, java.security.SignatureException {
            r2 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r2.c
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getSignatureAlgorithm()
            java.lang.String r0 = org.bouncycastle.jce.provider.X509SignatureUtil.getSignatureName(r0)
            java.lang.String r1 = "BC"
            java.security.Signature r0 = java.security.Signature.getInstance(r0, r1)     // Catch: java.lang.Exception -> L11
            goto L15
        L11:
            java.security.Signature r0 = java.security.Signature.getInstance(r0)
        L15:
            r2.checkSignature(r3, r0)
            return
    }

    @Override
    public final void verify(java.security.PublicKey r2, java.lang.String r3) throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.security.InvalidKeyException, java.security.NoSuchProviderException, java.security.SignatureException {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.c
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getSignatureAlgorithm()
            java.lang.String r0 = org.bouncycastle.jce.provider.X509SignatureUtil.getSignatureName(r0)
            java.security.Signature r3 = java.security.Signature.getInstance(r0, r3)
            r1.checkSignature(r2, r3)
            return
    }
}
