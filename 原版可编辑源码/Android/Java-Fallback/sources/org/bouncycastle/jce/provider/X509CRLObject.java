package org.bouncycastle.jce.provider;

public class X509CRLObject extends java.security.cert.X509CRL {
    private org.bouncycastle.asn1.x509.CertificateList c;
    private boolean isIndirect;
    private java.lang.String sigAlgName;
    private byte[] sigAlgParams;

    public X509CRLObject(org.bouncycastle.asn1.x509.CertificateList r4) throws java.security.cert.CRLException {
            r3 = this;
            r3.<init>()
            r3.c = r4
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r4.getSignatureAlgorithm()     // Catch: java.lang.Exception -> L34
            java.lang.String r0 = org.bouncycastle.jce.provider.X509SignatureUtil.getSignatureName(r0)     // Catch: java.lang.Exception -> L34
            r3.sigAlgName = r0     // Catch: java.lang.Exception -> L34
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r4.getSignatureAlgorithm()     // Catch: java.lang.Exception -> L34
            org.bouncycastle.asn1.DEREncodable r0 = r0.getParameters()     // Catch: java.lang.Exception -> L34
            if (r0 == 0) goto L2a
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r4 = r4.getSignatureAlgorithm()     // Catch: java.lang.Exception -> L34
            org.bouncycastle.asn1.DEREncodable r4 = r4.getParameters()     // Catch: java.lang.Exception -> L34
            org.bouncycastle.asn1.ASN1Encodable r4 = (org.bouncycastle.asn1.ASN1Encodable) r4     // Catch: java.lang.Exception -> L34
            byte[] r4 = r4.getDEREncoded()     // Catch: java.lang.Exception -> L34
            r3.sigAlgParams = r4     // Catch: java.lang.Exception -> L34
            goto L2d
        L2a:
            r4 = 0
            r3.sigAlgParams = r4     // Catch: java.lang.Exception -> L34
        L2d:
            boolean r4 = r3.isIndirectCRL()     // Catch: java.lang.Exception -> L34
            r3.isIndirect = r4     // Catch: java.lang.Exception -> L34
            return
        L34:
            r4 = move-exception
            java.security.cert.CRLException r0 = new java.security.cert.CRLException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "CRL contents invalid: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private java.util.Set getExtensionOIDs(boolean r6) {
            r5 = this;
            int r0 = r5.getVersion()
            r1 = 2
            if (r0 != r1) goto L3b
            org.bouncycastle.asn1.x509.CertificateList r0 = r5.c
            org.bouncycastle.asn1.x509.TBSCertList r0 = r0.getTBSCertList()
            org.bouncycastle.asn1.x509.X509Extensions r0 = r0.getExtensions()
            if (r0 == 0) goto L3b
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            java.util.Enumeration r2 = r0.oids()
        L1c:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto L3a
            java.lang.Object r3 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            org.bouncycastle.asn1.x509.X509Extension r4 = r0.getExtension(r3)
            boolean r4 = r4.isCritical()
            if (r6 != r4) goto L1c
            java.lang.String r3 = r3.getId()
            r1.add(r3)
            goto L1c
        L3a:
            return r1
        L3b:
            r6 = 0
            return r6
    }

    private boolean isIndirectCRL() throws java.security.cert.CRLException {
            r3 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.IssuingDistributionPoint
            java.lang.String r0 = r0.getId()
            byte[] r0 = r3.getExtensionValue(r0)
            if (r0 == 0) goto L22
            org.bouncycastle.asn1.ASN1Object r0 = org.bouncycastle.x509.extension.X509ExtensionUtil.fromExtensionValue(r0)     // Catch: java.lang.Exception -> L19
            org.bouncycastle.asn1.x509.IssuingDistributionPoint r0 = org.bouncycastle.asn1.x509.IssuingDistributionPoint.getInstance(r0)     // Catch: java.lang.Exception -> L19
            boolean r0 = r0.isIndirectCRL()     // Catch: java.lang.Exception -> L19
            goto L23
        L19:
            r0 = move-exception
            org.bouncycastle.jce.provider.ExtCRLException r1 = new org.bouncycastle.jce.provider.ExtCRLException
            java.lang.String r2 = "Exception reading IssuingDistributionPoint"
            r1.<init>(r2, r0)
            throw r1
        L22:
            r0 = 0
        L23:
            return r0
    }

    private java.util.Set loadCRLEntries() {
            r6 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.asn1.x509.CertificateList r1 = r6.c
            java.util.Enumeration r1 = r1.getRevokedCertificateEnumeration()
            javax.security.auth.x500.X500Principal r2 = r6.getIssuerX500Principal()
        Lf:
            boolean r3 = r1.hasMoreElements()
            if (r3 == 0) goto L2a
            java.lang.Object r3 = r1.nextElement()
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry r3 = (org.bouncycastle.asn1.x509.TBSCertList.CRLEntry) r3
            org.bouncycastle.jce.provider.X509CRLEntryObject r4 = new org.bouncycastle.jce.provider.X509CRLEntryObject
            boolean r5 = r6.isIndirect
            r4.<init>(r3, r5, r2)
            r0.add(r4)
            javax.security.auth.x500.X500Principal r2 = r4.getCertificateIssuer()
            goto Lf
        L2a:
            return r0
    }

    @Override
    public java.util.Set getCriticalExtensionOIDs() {
            r1 = this;
            r0 = 1
            java.util.Set r0 = r1.getExtensionOIDs(r0)
            return r0
    }

    @Override
    public byte[] getEncoded() throws java.security.cert.CRLException {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
            r1.<init>(r0)
            org.bouncycastle.asn1.x509.CertificateList r2 = r3.c     // Catch: java.io.IOException -> L14
            r1.writeObject(r2)     // Catch: java.io.IOException -> L14
            byte[] r0 = r0.toByteArray()     // Catch: java.io.IOException -> L14
            return r0
        L14:
            r0 = move-exception
            java.security.cert.CRLException r1 = new java.security.cert.CRLException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public byte[] getExtensionValue(java.lang.String r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.CertificateList r0 = r3.c
            org.bouncycastle.asn1.x509.TBSCertList r0 = r0.getTBSCertList()
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
            org.bouncycastle.asn1.x509.CertificateList r1 = r2.c
            org.bouncycastle.asn1.x509.X509Name r1 = r1.getIssuer()
            r0.<init>(r1)
            return r0
    }

    @Override
    public javax.security.auth.x500.X500Principal getIssuerX500Principal() {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> L1d
            r0.<init>()     // Catch: java.io.IOException -> L1d
            org.bouncycastle.asn1.ASN1OutputStream r1 = new org.bouncycastle.asn1.ASN1OutputStream     // Catch: java.io.IOException -> L1d
            r1.<init>(r0)     // Catch: java.io.IOException -> L1d
            org.bouncycastle.asn1.x509.CertificateList r2 = r3.c     // Catch: java.io.IOException -> L1d
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
    public java.util.Date getNextUpdate() {
            r1 = this;
            org.bouncycastle.asn1.x509.CertificateList r0 = r1.c
            org.bouncycastle.asn1.x509.Time r0 = r0.getNextUpdate()
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.CertificateList r0 = r1.c
            org.bouncycastle.asn1.x509.Time r0 = r0.getNextUpdate()
            java.util.Date r0 = r0.getDate()
            return r0
        L13:
            r0 = 0
            return r0
    }

    @Override
    public java.util.Set getNonCriticalExtensionOIDs() {
            r1 = this;
            r0 = 0
            java.util.Set r0 = r1.getExtensionOIDs(r0)
            return r0
    }

    @Override
    public java.security.cert.X509CRLEntry getRevokedCertificate(java.math.BigInteger r6) {
            r5 = this;
            org.bouncycastle.asn1.x509.CertificateList r0 = r5.c
            java.util.Enumeration r0 = r0.getRevokedCertificateEnumeration()
            javax.security.auth.x500.X500Principal r1 = r5.getIssuerX500Principal()
        La:
            boolean r2 = r0.hasMoreElements()
            if (r2 == 0) goto L31
            java.lang.Object r2 = r0.nextElement()
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry r2 = (org.bouncycastle.asn1.x509.TBSCertList.CRLEntry) r2
            org.bouncycastle.jce.provider.X509CRLEntryObject r3 = new org.bouncycastle.jce.provider.X509CRLEntryObject
            boolean r4 = r5.isIndirect
            r3.<init>(r2, r4, r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.getUserCertificate()
            java.math.BigInteger r1 = r1.getValue()
            boolean r1 = r6.equals(r1)
            if (r1 == 0) goto L2c
            return r3
        L2c:
            javax.security.auth.x500.X500Principal r1 = r3.getCertificateIssuer()
            goto La
        L31:
            r6 = 0
            return r6
    }

    @Override
    public java.util.Set getRevokedCertificates() {
            r2 = this;
            java.util.Set r0 = r2.loadCRLEntries()
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto Lf
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            return r0
        Lf:
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getSigAlgName() {
            r1 = this;
            java.lang.String r0 = r1.sigAlgName
            return r0
    }

    @Override
    public java.lang.String getSigAlgOID() {
            r1 = this;
            org.bouncycastle.asn1.x509.CertificateList r0 = r1.c
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getSignatureAlgorithm()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            java.lang.String r0 = r0.getId()
            return r0
    }

    @Override
    public byte[] getSigAlgParams() {
            r4 = this;
            byte[] r0 = r4.sigAlgParams
            if (r0 == 0) goto Lc
            int r1 = r0.length
            byte[] r2 = new byte[r1]
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r2, r3, r1)
            return r2
        Lc:
            r0 = 0
            return r0
    }

    @Override
    public byte[] getSignature() {
            r1 = this;
            org.bouncycastle.asn1.x509.CertificateList r0 = r1.c
            org.bouncycastle.asn1.DERBitString r0 = r0.getSignature()
            byte[] r0 = r0.getBytes()
            return r0
    }

    @Override
    public byte[] getTBSCertList() throws java.security.cert.CRLException {
            r2 = this;
            org.bouncycastle.asn1.x509.CertificateList r0 = r2.c     // Catch: java.io.IOException -> Ld
            org.bouncycastle.asn1.x509.TBSCertList r0 = r0.getTBSCertList()     // Catch: java.io.IOException -> Ld
            java.lang.String r1 = "DER"
            byte[] r0 = r0.getEncoded(r1)     // Catch: java.io.IOException -> Ld
            return r0
        Ld:
            r0 = move-exception
            java.security.cert.CRLException r1 = new java.security.cert.CRLException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public java.util.Date getThisUpdate() {
            r1 = this;
            org.bouncycastle.asn1.x509.CertificateList r0 = r1.c
            org.bouncycastle.asn1.x509.Time r0 = r0.getThisUpdate()
            java.util.Date r0 = r0.getDate()
            return r0
    }

    @Override
    public int getVersion() {
            r1 = this;
            org.bouncycastle.asn1.x509.CertificateList r0 = r1.c
            int r0 = r0.getVersion()
            return r0
    }

    @Override
    public boolean hasUnsupportedCriticalExtension() {
            r2 = this;
            java.util.Set r0 = r2.getCriticalExtensionOIDs()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.ISSUING_DISTRIBUTION_POINT
            r0.remove(r1)
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.DELTA_CRL_INDICATOR
            r0.remove(r1)
            boolean r0 = r0.isEmpty()
            r0 = r0 ^ 1
            return r0
    }

    @Override
    public boolean isRevoked(java.security.cert.Certificate r5) {
            r4 = this;
            java.lang.String r0 = r5.getType()
            java.lang.String r1 = "X.509"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L35
            org.bouncycastle.asn1.x509.CertificateList r0 = r4.c
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry[] r0 = r0.getRevokedCertificates()
            r1 = 0
            if (r0 == 0) goto L34
            java.security.cert.X509Certificate r5 = (java.security.cert.X509Certificate) r5
            java.math.BigInteger r5 = r5.getSerialNumber()
            r2 = 0
        L1c:
            int r3 = r0.length
            if (r2 >= r3) goto L34
            r3 = r0[r2]
            org.bouncycastle.asn1.DERInteger r3 = r3.getUserCertificate()
            java.math.BigInteger r3 = r3.getValue()
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L31
            r5 = 1
            return r5
        L31:
            int r2 = r2 + 1
            goto L1c
        L34:
            return r1
        L35:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.String r0 = "X.509 CRL used with non X.509 Cert"
            r5.<init>(r0)
            throw r5
    }

    @Override
    public java.lang.String toString() {
            r9 = this;
            java.lang.String r0 = " value = "
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.lang.String r2 = "line.separator"
            java.lang.String r2 = java.lang.System.getProperty(r2)
            java.lang.String r3 = "              Version: "
            r1.append(r3)
            int r3 = r9.getVersion()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = "             IssuerDN: "
            r1.append(r3)
            java.security.Principal r3 = r9.getIssuerDN()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = "          This update: "
            r1.append(r3)
            java.util.Date r3 = r9.getThisUpdate()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = "          Next update: "
            r1.append(r3)
            java.util.Date r3 = r9.getNextUpdate()
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
        L75:
            int r6 = r3.length
            if (r4 >= r6) goto L9f
            int r6 = r3.length
            int r6 = r6 - r5
            java.lang.String r7 = "                       "
            r1.append(r7)
            if (r4 >= r6) goto L8b
            java.lang.String r6 = new java.lang.String
            byte[] r7 = org.bouncycastle.util.encoders.Hex.encode(r3, r4, r5)
            r6.<init>(r7)
            goto L96
        L8b:
            java.lang.String r6 = new java.lang.String
            int r7 = r3.length
            int r7 = r7 - r4
            byte[] r7 = org.bouncycastle.util.encoders.Hex.encode(r3, r4, r7)
            r6.<init>(r7)
        L96:
            r1.append(r6)
            r1.append(r2)
            int r4 = r4 + 20
            goto L75
        L9f:
            org.bouncycastle.asn1.x509.CertificateList r3 = r9.c
            org.bouncycastle.asn1.x509.TBSCertList r3 = r3.getTBSCertList()
            org.bouncycastle.asn1.x509.X509Extensions r3 = r3.getExtensions()
            if (r3 == 0) goto L19c
            java.util.Enumeration r4 = r3.oids()
            boolean r5 = r4.hasMoreElements()
            if (r5 == 0) goto Lbd
            java.lang.String r5 = "           Extensions: "
        Lb7:
            r1.append(r5)
        Lba:
            r1.append(r2)
        Lbd:
            boolean r5 = r4.hasMoreElements()
            if (r5 == 0) goto L19c
            java.lang.Object r5 = r4.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r5 = (org.bouncycastle.asn1.DERObjectIdentifier) r5
            org.bouncycastle.asn1.x509.X509Extension r6 = r3.getExtension(r5)
            org.bouncycastle.asn1.ASN1OctetString r7 = r6.getValue()
            if (r7 == 0) goto Lba
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
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.x509.X509Extensions.CRLNumber     // Catch: java.lang.Exception -> L18e
            boolean r6 = r5.equals(r6)     // Catch: java.lang.Exception -> L18e
            if (r6 == 0) goto L111
            org.bouncycastle.asn1.x509.CRLNumber r6 = new org.bouncycastle.asn1.x509.CRLNumber     // Catch: java.lang.Exception -> L18e
            org.bouncycastle.asn1.DERObject r7 = r8.readObject()     // Catch: java.lang.Exception -> L18e
            org.bouncycastle.asn1.DERInteger r7 = org.bouncycastle.asn1.DERInteger.getInstance(r7)     // Catch: java.lang.Exception -> L18e
            java.math.BigInteger r7 = r7.getPositiveValue()     // Catch: java.lang.Exception -> L18e
            r6.<init>(r7)     // Catch: java.lang.Exception -> L18e
        L10a:
            r1.append(r6)     // Catch: java.lang.Exception -> L18e
        L10d:
            r1.append(r2)     // Catch: java.lang.Exception -> L18e
            goto Lbd
        L111:
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.x509.X509Extensions.DeltaCRLIndicator     // Catch: java.lang.Exception -> L18e
            boolean r6 = r5.equals(r6)     // Catch: java.lang.Exception -> L18e
            if (r6 == 0) goto L13f
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L18e
            r6.<init>()     // Catch: java.lang.Exception -> L18e
            java.lang.String r7 = "Base CRL: "
            r6.append(r7)     // Catch: java.lang.Exception -> L18e
            org.bouncycastle.asn1.x509.CRLNumber r7 = new org.bouncycastle.asn1.x509.CRLNumber     // Catch: java.lang.Exception -> L18e
            org.bouncycastle.asn1.DERObject r8 = r8.readObject()     // Catch: java.lang.Exception -> L18e
            org.bouncycastle.asn1.DERInteger r8 = org.bouncycastle.asn1.DERInteger.getInstance(r8)     // Catch: java.lang.Exception -> L18e
            java.math.BigInteger r8 = r8.getPositiveValue()     // Catch: java.lang.Exception -> L18e
            r7.<init>(r8)     // Catch: java.lang.Exception -> L18e
            r6.append(r7)     // Catch: java.lang.Exception -> L18e
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L18e
        L13b:
            r1.append(r6)     // Catch: java.lang.Exception -> L18e
            goto L10d
        L13f:
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.x509.X509Extensions.IssuingDistributionPoint     // Catch: java.lang.Exception -> L18e
            boolean r6 = r5.equals(r6)     // Catch: java.lang.Exception -> L18e
            if (r6 == 0) goto L153
            org.bouncycastle.asn1.x509.IssuingDistributionPoint r6 = new org.bouncycastle.asn1.x509.IssuingDistributionPoint     // Catch: java.lang.Exception -> L18e
            org.bouncycastle.asn1.DERObject r7 = r8.readObject()     // Catch: java.lang.Exception -> L18e
            org.bouncycastle.asn1.ASN1Sequence r7 = (org.bouncycastle.asn1.ASN1Sequence) r7     // Catch: java.lang.Exception -> L18e
            r6.<init>(r7)     // Catch: java.lang.Exception -> L18e
            goto L10a
        L153:
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.x509.X509Extensions.CRLDistributionPoints     // Catch: java.lang.Exception -> L18e
            boolean r6 = r5.equals(r6)     // Catch: java.lang.Exception -> L18e
            if (r6 == 0) goto L167
            org.bouncycastle.asn1.x509.CRLDistPoint r6 = new org.bouncycastle.asn1.x509.CRLDistPoint     // Catch: java.lang.Exception -> L18e
            org.bouncycastle.asn1.DERObject r7 = r8.readObject()     // Catch: java.lang.Exception -> L18e
            org.bouncycastle.asn1.ASN1Sequence r7 = (org.bouncycastle.asn1.ASN1Sequence) r7     // Catch: java.lang.Exception -> L18e
            r6.<init>(r7)     // Catch: java.lang.Exception -> L18e
            goto L10a
        L167:
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.x509.X509Extensions.FreshestCRL     // Catch: java.lang.Exception -> L18e
            boolean r6 = r5.equals(r6)     // Catch: java.lang.Exception -> L18e
            if (r6 == 0) goto L17b
            org.bouncycastle.asn1.x509.CRLDistPoint r6 = new org.bouncycastle.asn1.x509.CRLDistPoint     // Catch: java.lang.Exception -> L18e
            org.bouncycastle.asn1.DERObject r7 = r8.readObject()     // Catch: java.lang.Exception -> L18e
            org.bouncycastle.asn1.ASN1Sequence r7 = (org.bouncycastle.asn1.ASN1Sequence) r7     // Catch: java.lang.Exception -> L18e
            r6.<init>(r7)     // Catch: java.lang.Exception -> L18e
            goto L10a
        L17b:
            java.lang.String r6 = r5.getId()     // Catch: java.lang.Exception -> L18e
            r1.append(r6)     // Catch: java.lang.Exception -> L18e
            r1.append(r0)     // Catch: java.lang.Exception -> L18e
            org.bouncycastle.asn1.DERObject r6 = r8.readObject()     // Catch: java.lang.Exception -> L18e
            java.lang.String r6 = org.bouncycastle.asn1.util.ASN1Dump.dumpAsString(r6)     // Catch: java.lang.Exception -> L18e
            goto L13b
        L18e:
            java.lang.String r5 = r5.getId()
            r1.append(r5)
            r1.append(r0)
            java.lang.String r5 = "*****"
            goto Lb7
        L19c:
            java.util.Set r0 = r9.getRevokedCertificates()
            if (r0 == 0) goto L1b7
            java.util.Iterator r0 = r0.iterator()
        L1a6:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L1b7
            java.lang.Object r3 = r0.next()
            r1.append(r3)
            r1.append(r2)
            goto L1a6
        L1b7:
            java.lang.String r0 = r1.toString()
            return r0
    }

    @Override
    public void verify(java.security.PublicKey r2) throws java.security.cert.CRLException, java.security.NoSuchAlgorithmException, java.security.InvalidKeyException, java.security.NoSuchProviderException, java.security.SignatureException {
            r1 = this;
            java.lang.String r0 = "BC"
            r1.verify(r2, r0)
            return
    }

    @Override
    public void verify(java.security.PublicKey r3, java.lang.String r4) throws java.security.cert.CRLException, java.security.NoSuchAlgorithmException, java.security.InvalidKeyException, java.security.NoSuchProviderException, java.security.SignatureException {
            r2 = this;
            org.bouncycastle.asn1.x509.CertificateList r0 = r2.c
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getSignatureAlgorithm()
            org.bouncycastle.asn1.x509.CertificateList r1 = r2.c
            org.bouncycastle.asn1.x509.TBSCertList r1 = r1.getTBSCertList()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r1.getSignature()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3b
            java.lang.String r0 = r2.getSigAlgName()
            java.security.Signature r4 = java.security.Signature.getInstance(r0, r4)
            r4.initVerify(r3)
            byte[] r3 = r2.getTBSCertList()
            r4.update(r3)
            byte[] r3 = r2.getSignature()
            boolean r3 = r4.verify(r3)
            if (r3 == 0) goto L33
            return
        L33:
            java.security.SignatureException r3 = new java.security.SignatureException
            java.lang.String r4 = "CRL does not verify with supplied public key."
            r3.<init>(r4)
            throw r3
        L3b:
            java.security.cert.CRLException r3 = new java.security.cert.CRLException
            java.lang.String r4 = "Signature algorithm on CertificateList does not match TBSCertList."
            r3.<init>(r4)
            throw r3
    }
}
