package org.bouncycastle.jce.provider;

public class X509CertParser extends org.bouncycastle.x509.X509StreamParserSpi {
    private static final org.bouncycastle.jce.provider.PEMUtil PEM_PARSER = null;
    private java.io.InputStream currentStream;
    private org.bouncycastle.asn1.ASN1Set sData;
    private int sDataObjectCount;

    static {
            org.bouncycastle.jce.provider.PEMUtil r0 = new org.bouncycastle.jce.provider.PEMUtil
            java.lang.String r1 = "CERTIFICATE"
            r0.<init>(r1)
            org.bouncycastle.jce.provider.X509CertParser.PEM_PARSER = r0
            return
    }

    public X509CertParser() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.sData = r0
            r1 = 0
            r2.sDataObjectCount = r1
            r2.currentStream = r0
            return
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

    private java.security.cert.Certificate readDERCertificate(java.io.InputStream r4) throws java.io.IOException, java.security.cert.CertificateParsingException {
            r3 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            int r1 = org.bouncycastle.jce.provider.ProviderUtil.getReadLimit(r4)
            r0.<init>(r4, r1)
            org.bouncycastle.asn1.DERObject r4 = r0.readObject()
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4
            int r0 = r4.size()
            r1 = 1
            if (r0 <= r1) goto L45
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r2 = r4.getObjectAt(r0)
            boolean r2 = r2 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            if (r2 == 0) goto L45
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.signedData
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L45
            org.bouncycastle.asn1.pkcs.SignedData r0 = new org.bouncycastle.asn1.pkcs.SignedData
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r4 = (org.bouncycastle.asn1.ASN1TaggedObject) r4
            org.bouncycastle.asn1.ASN1Sequence r4 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r4, r1)
            r0.<init>(r4)
            org.bouncycastle.asn1.ASN1Set r4 = r0.getCertificates()
            r3.sData = r4
            java.security.cert.Certificate r4 = r3.getCertificate()
            return r4
        L45:
            org.bouncycastle.jce.provider.X509CertificateObject r0 = new org.bouncycastle.jce.provider.X509CertificateObject
            org.bouncycastle.asn1.x509.X509CertificateStructure r4 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r4)
            r0.<init>(r4)
            return r0
    }

    private java.security.cert.Certificate readPEMCertificate(java.io.InputStream r2) throws java.io.IOException, java.security.cert.CertificateParsingException {
            r1 = this;
            org.bouncycastle.jce.provider.PEMUtil r0 = org.bouncycastle.jce.provider.X509CertParser.PEM_PARSER
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

    @Override
    public void engineInit(java.io.InputStream r2) {
            r1 = this;
            r1.currentStream = r2
            r0 = 0
            r1.sData = r0
            r0 = 0
            r1.sDataObjectCount = r0
            boolean r2 = r2.markSupported()
            if (r2 != 0) goto L17
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream
            java.io.InputStream r0 = r1.currentStream
            r2.<init>(r0)
            r1.currentStream = r2
        L17:
            return
    }

    @Override
    public java.lang.Object engineRead() throws org.bouncycastle.x509.util.StreamParsingException {
            r3 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r3.sData     // Catch: java.lang.Exception -> L47
            r1 = 0
            if (r0 == 0) goto L1a
            int r0 = r3.sDataObjectCount     // Catch: java.lang.Exception -> L47
            org.bouncycastle.asn1.ASN1Set r2 = r3.sData     // Catch: java.lang.Exception -> L47
            int r2 = r2.size()     // Catch: java.lang.Exception -> L47
            if (r0 == r2) goto L14
            java.security.cert.Certificate r0 = r3.getCertificate()     // Catch: java.lang.Exception -> L47
            return r0
        L14:
            r3.sData = r1     // Catch: java.lang.Exception -> L47
            r0 = 0
            r3.sDataObjectCount = r0     // Catch: java.lang.Exception -> L47
            return r1
        L1a:
            java.io.InputStream r0 = r3.currentStream     // Catch: java.lang.Exception -> L47
            r2 = 10
            r0.mark(r2)     // Catch: java.lang.Exception -> L47
            java.io.InputStream r0 = r3.currentStream     // Catch: java.lang.Exception -> L47
            int r0 = r0.read()     // Catch: java.lang.Exception -> L47
            r2 = -1
            if (r0 != r2) goto L2b
            return r1
        L2b:
            r1 = 48
            if (r0 == r1) goto L3b
            java.io.InputStream r0 = r3.currentStream     // Catch: java.lang.Exception -> L47
            r0.reset()     // Catch: java.lang.Exception -> L47
            java.io.InputStream r0 = r3.currentStream     // Catch: java.lang.Exception -> L47
            java.security.cert.Certificate r0 = r3.readPEMCertificate(r0)     // Catch: java.lang.Exception -> L47
            return r0
        L3b:
            java.io.InputStream r0 = r3.currentStream     // Catch: java.lang.Exception -> L47
            r0.reset()     // Catch: java.lang.Exception -> L47
            java.io.InputStream r0 = r3.currentStream     // Catch: java.lang.Exception -> L47
            java.security.cert.Certificate r0 = r3.readDERCertificate(r0)     // Catch: java.lang.Exception -> L47
            return r0
        L47:
            r0 = move-exception
            org.bouncycastle.x509.util.StreamParsingException r1 = new org.bouncycastle.x509.util.StreamParsingException
            java.lang.String r2 = r0.toString()
            r1.<init>(r2, r0)
            throw r1
    }

    @Override
    public java.util.Collection engineReadAll() throws org.bouncycastle.x509.util.StreamParsingException {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        L5:
            java.lang.Object r1 = r2.engineRead()
            java.security.cert.Certificate r1 = (java.security.cert.Certificate) r1
            if (r1 == 0) goto L11
            r0.add(r1)
            goto L5
        L11:
            return r0
    }
}
