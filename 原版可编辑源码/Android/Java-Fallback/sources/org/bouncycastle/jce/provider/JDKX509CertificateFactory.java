package org.bouncycastle.jce.provider;

public class JDKX509CertificateFactory extends java.security.cert.CertificateFactorySpi {
    private static final org.bouncycastle.jce.provider.PEMUtil PEM_CERT_PARSER = null;
    private static final org.bouncycastle.jce.provider.PEMUtil PEM_CRL_PARSER = null;
    private java.io.InputStream currentCrlStream;
    private java.io.InputStream currentStream;
    private org.bouncycastle.asn1.ASN1Set sCrlData;
    private int sCrlDataObjectCount;
    private org.bouncycastle.asn1.ASN1Set sData;
    private int sDataObjectCount;

    static {
            org.bouncycastle.jce.provider.PEMUtil r0 = new org.bouncycastle.jce.provider.PEMUtil
            java.lang.String r1 = "CERTIFICATE"
            r0.<init>(r1)
            org.bouncycastle.jce.provider.JDKX509CertificateFactory.PEM_CERT_PARSER = r0
            org.bouncycastle.jce.provider.PEMUtil r0 = new org.bouncycastle.jce.provider.PEMUtil
            java.lang.String r1 = "CRL"
            r0.<init>(r1)
            org.bouncycastle.jce.provider.JDKX509CertificateFactory.PEM_CRL_PARSER = r0
            return
    }

    public JDKX509CertificateFactory() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.sData = r0
            r1 = 0
            r2.sDataObjectCount = r1
            r2.currentStream = r0
            r2.sCrlData = r0
            r2.sCrlDataObjectCount = r1
            r2.currentCrlStream = r0
            return
    }

    private java.security.cert.CRL getCRL() throws java.security.cert.CRLException {
            r3 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r3.sCrlData
            if (r0 == 0) goto L22
            int r1 = r3.sCrlDataObjectCount
            int r0 = r0.size()
            if (r1 < r0) goto Ld
            goto L22
        Ld:
            org.bouncycastle.asn1.ASN1Set r0 = r3.sCrlData
            int r1 = r3.sCrlDataObjectCount
            int r2 = r1 + 1
            r3.sCrlDataObjectCount = r2
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectAt(r1)
            org.bouncycastle.asn1.x509.CertificateList r0 = org.bouncycastle.asn1.x509.CertificateList.getInstance(r0)
            java.security.cert.CRL r0 = r3.createCRL(r0)
            return r0
        L22:
            r0 = 0
            return r0
    }

    private java.security.cert.Certificate getCertificate() throws java.security.cert.CertificateParsingException {
            r3 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r3.sData
            if (r0 == 0) goto L28
        L4:
            int r0 = r3.sDataObjectCount
            org.bouncycastle.asn1.ASN1Set r1 = r3.sData
            int r1 = r1.size()
            if (r0 >= r1) goto L28
            org.bouncycastle.asn1.ASN1Set r0 = r3.sData
            int r1 = r3.sDataObjectCount
            int r2 = r1 + 1
            r3.sDataObjectCount = r2
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectAt(r1)
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r1 == 0) goto L4
            org.bouncycastle.jce.provider.X509CertificateObject r1 = new org.bouncycastle.jce.provider.X509CertificateObject
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r0)
            r1.<init>(r0)
            return r1
        L28:
            r0 = 0
            return r0
    }

    private java.security.cert.CRL readDERCRL(org.bouncycastle.asn1.ASN1InputStream r4) throws java.io.IOException, java.security.cert.CRLException {
            r3 = this;
            org.bouncycastle.asn1.DERObject r4 = r4.readObject()
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4
            int r0 = r4.size()
            r1 = 1
            if (r0 <= r1) goto L3c
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r2 = r4.getObjectAt(r0)
            boolean r2 = r2 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            if (r2 == 0) goto L3c
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.signedData
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L3c
            org.bouncycastle.asn1.pkcs.SignedData r0 = new org.bouncycastle.asn1.pkcs.SignedData
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r4 = (org.bouncycastle.asn1.ASN1TaggedObject) r4
            org.bouncycastle.asn1.ASN1Sequence r4 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r4, r1)
            r0.<init>(r4)
            org.bouncycastle.asn1.ASN1Set r4 = r0.getCRLs()
            r3.sCrlData = r4
            java.security.cert.CRL r4 = r3.getCRL()
            return r4
        L3c:
            org.bouncycastle.asn1.x509.CertificateList r4 = org.bouncycastle.asn1.x509.CertificateList.getInstance(r4)
            java.security.cert.CRL r4 = r3.createCRL(r4)
            return r4
    }

    private java.security.cert.Certificate readDERCertificate(org.bouncycastle.asn1.ASN1InputStream r4) throws java.io.IOException, java.security.cert.CertificateParsingException {
            r3 = this;
            org.bouncycastle.asn1.DERObject r4 = r4.readObject()
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4
            int r0 = r4.size()
            r1 = 1
            if (r0 <= r1) goto L3c
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r2 = r4.getObjectAt(r0)
            boolean r2 = r2 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            if (r2 == 0) goto L3c
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.signedData
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L3c
            org.bouncycastle.asn1.pkcs.SignedData r0 = new org.bouncycastle.asn1.pkcs.SignedData
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r4 = (org.bouncycastle.asn1.ASN1TaggedObject) r4
            org.bouncycastle.asn1.ASN1Sequence r4 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r4, r1)
            r0.<init>(r4)
            org.bouncycastle.asn1.ASN1Set r4 = r0.getCertificates()
            r3.sData = r4
            java.security.cert.Certificate r4 = r3.getCertificate()
            return r4
        L3c:
            org.bouncycastle.jce.provider.X509CertificateObject r0 = new org.bouncycastle.jce.provider.X509CertificateObject
            org.bouncycastle.asn1.x509.X509CertificateStructure r4 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r4)
            r0.<init>(r4)
            return r0
    }

    private java.security.cert.CRL readPEMCRL(java.io.InputStream r2) throws java.io.IOException, java.security.cert.CRLException {
            r1 = this;
            org.bouncycastle.jce.provider.PEMUtil r0 = org.bouncycastle.jce.provider.JDKX509CertificateFactory.PEM_CRL_PARSER
            org.bouncycastle.asn1.ASN1Sequence r2 = r0.readPEMObject(r2)
            if (r2 == 0) goto L11
            org.bouncycastle.asn1.x509.CertificateList r2 = org.bouncycastle.asn1.x509.CertificateList.getInstance(r2)
            java.security.cert.CRL r2 = r1.createCRL(r2)
            return r2
        L11:
            r2 = 0
            return r2
    }

    private java.security.cert.Certificate readPEMCertificate(java.io.InputStream r2) throws java.io.IOException, java.security.cert.CertificateParsingException {
            r1 = this;
            org.bouncycastle.jce.provider.PEMUtil r0 = org.bouncycastle.jce.provider.JDKX509CertificateFactory.PEM_CERT_PARSER
            org.bouncycastle.asn1.ASN1Sequence r2 = r0.readPEMObject(r2)
            if (r2 == 0) goto L12
            org.bouncycastle.jce.provider.X509CertificateObject r0 = new org.bouncycastle.jce.provider.X509CertificateObject
            org.bouncycastle.asn1.x509.X509CertificateStructure r2 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r2)
            r0.<init>(r2)
            return r0
        L12:
            r2 = 0
            return r2
    }

    protected java.security.cert.CRL createCRL(org.bouncycastle.asn1.x509.CertificateList r2) throws java.security.cert.CRLException {
            r1 = this;
            org.bouncycastle.jce.provider.X509CRLObject r0 = new org.bouncycastle.jce.provider.X509CRLObject
            r0.<init>(r2)
            return r0
    }

    @Override
    public java.security.cert.CRL engineGenerateCRL(java.io.InputStream r5) throws java.security.cert.CRLException {
            r4 = this;
            java.io.InputStream r0 = r4.currentCrlStream
            r1 = 0
            r2 = 0
            if (r0 != 0) goto Ld
        L6:
            r4.currentCrlStream = r5
            r4.sCrlData = r2
            r4.sCrlDataObjectCount = r1
            goto L10
        Ld:
            if (r0 == r5) goto L10
            goto L6
        L10:
            org.bouncycastle.asn1.ASN1Set r0 = r4.sCrlData     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            if (r0 == 0) goto L28
            int r5 = r4.sCrlDataObjectCount     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            org.bouncycastle.asn1.ASN1Set r0 = r4.sCrlData     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            int r0 = r0.size()     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            if (r5 == r0) goto L23
            java.security.cert.CRL r5 = r4.getCRL()     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            return r5
        L23:
            r4.sCrlData = r2     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            r4.sCrlDataObjectCount = r1     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            return r2
        L28:
            int r0 = org.bouncycastle.jce.provider.ProviderUtil.getReadLimit(r5)     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            java.io.PushbackInputStream r1 = new java.io.PushbackInputStream     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            r1.<init>(r5)     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            int r5 = r1.read()     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            r3 = -1
            if (r5 != r3) goto L39
            return r2
        L39:
            r1.unread(r5)     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            r2 = 48
            if (r5 == r2) goto L45
            java.security.cert.CRL r5 = r4.readPEMCRL(r1)     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            return r5
        L45:
            org.bouncycastle.asn1.ASN1InputStream r5 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            r2 = 1
            r5.<init>(r1, r0, r2)     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            java.security.cert.CRL r5 = r4.readDERCRL(r5)     // Catch: java.lang.Exception -> L50 java.security.cert.CRLException -> L5b
            return r5
        L50:
            r5 = move-exception
            java.security.cert.CRLException r0 = new java.security.cert.CRLException
            java.lang.String r5 = r5.toString()
            r0.<init>(r5)
            throw r0
        L5b:
            r5 = move-exception
            throw r5
    }

    @Override
    public java.util.Collection engineGenerateCRLs(java.io.InputStream r3) throws java.security.cert.CRLException {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        L5:
            java.security.cert.CRL r1 = r2.engineGenerateCRL(r3)
            if (r1 == 0) goto Lf
            r0.add(r1)
            goto L5
        Lf:
            return r0
    }

    @Override
    public java.security.cert.CertPath engineGenerateCertPath(java.io.InputStream r2) throws java.security.cert.CertificateException {
            r1 = this;
            java.lang.String r0 = "PkiPath"
            java.security.cert.CertPath r2 = r1.engineGenerateCertPath(r2, r0)
            return r2
    }

    @Override
    public java.security.cert.CertPath engineGenerateCertPath(java.io.InputStream r2, java.lang.String r3) throws java.security.cert.CertificateException {
            r1 = this;
            org.bouncycastle.jce.provider.PKIXCertPath r0 = new org.bouncycastle.jce.provider.PKIXCertPath
            r0.<init>(r2, r3)
            return r0
    }

    @Override
    public java.security.cert.CertPath engineGenerateCertPath(java.util.List r4) throws java.security.cert.CertificateException {
            r3 = this;
            java.util.Iterator r0 = r4.iterator()
        L4:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            if (r1 == 0) goto L4
            boolean r2 = r1 instanceof java.security.cert.X509Certificate
            if (r2 == 0) goto L15
            goto L4
        L15:
            java.security.cert.CertificateException r4 = new java.security.cert.CertificateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "list contains non X509Certificate object while creating CertPath\n"
            r0.append(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            throw r4
        L30:
            org.bouncycastle.jce.provider.PKIXCertPath r0 = new org.bouncycastle.jce.provider.PKIXCertPath
            r0.<init>(r4)
            return r0
    }

    @Override
    public java.security.cert.Certificate engineGenerateCertificate(java.io.InputStream r5) throws java.security.cert.CertificateException {
            r4 = this;
            java.io.InputStream r0 = r4.currentStream
            r1 = 0
            r2 = 0
            if (r0 != 0) goto Ld
        L6:
            r4.currentStream = r5
            r4.sData = r2
            r4.sDataObjectCount = r1
            goto L10
        Ld:
            if (r0 == r5) goto L10
            goto L6
        L10:
            org.bouncycastle.asn1.ASN1Set r0 = r4.sData     // Catch: java.lang.Exception -> L4f
            if (r0 == 0) goto L28
            int r5 = r4.sDataObjectCount     // Catch: java.lang.Exception -> L4f
            org.bouncycastle.asn1.ASN1Set r0 = r4.sData     // Catch: java.lang.Exception -> L4f
            int r0 = r0.size()     // Catch: java.lang.Exception -> L4f
            if (r5 == r0) goto L23
            java.security.cert.Certificate r5 = r4.getCertificate()     // Catch: java.lang.Exception -> L4f
            return r5
        L23:
            r4.sData = r2     // Catch: java.lang.Exception -> L4f
            r4.sDataObjectCount = r1     // Catch: java.lang.Exception -> L4f
            return r2
        L28:
            int r0 = org.bouncycastle.jce.provider.ProviderUtil.getReadLimit(r5)     // Catch: java.lang.Exception -> L4f
            java.io.PushbackInputStream r1 = new java.io.PushbackInputStream     // Catch: java.lang.Exception -> L4f
            r1.<init>(r5)     // Catch: java.lang.Exception -> L4f
            int r5 = r1.read()     // Catch: java.lang.Exception -> L4f
            r3 = -1
            if (r5 != r3) goto L39
            return r2
        L39:
            r1.unread(r5)     // Catch: java.lang.Exception -> L4f
            r2 = 48
            if (r5 == r2) goto L45
            java.security.cert.Certificate r5 = r4.readPEMCertificate(r1)     // Catch: java.lang.Exception -> L4f
            return r5
        L45:
            org.bouncycastle.asn1.ASN1InputStream r5 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L4f
            r5.<init>(r1, r0)     // Catch: java.lang.Exception -> L4f
            java.security.cert.Certificate r5 = r4.readDERCertificate(r5)     // Catch: java.lang.Exception -> L4f
            return r5
        L4f:
            r5 = move-exception
            java.security.cert.CertificateException r0 = new java.security.cert.CertificateException
            java.lang.String r5 = r5.toString()
            r0.<init>(r5)
            throw r0
    }

    @Override
    public java.util.Collection engineGenerateCertificates(java.io.InputStream r3) throws java.security.cert.CertificateException {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        L5:
            java.security.cert.Certificate r1 = r2.engineGenerateCertificate(r3)
            if (r1 == 0) goto Lf
            r0.add(r1)
            goto L5
        Lf:
            return r0
    }

    @Override
    public java.util.Iterator engineGetCertPathEncodings() {
            r1 = this;
            java.util.List r0 = org.bouncycastle.jce.provider.PKIXCertPath.certPathEncodings
            java.util.Iterator r0 = r0.iterator()
            return r0
    }
}
