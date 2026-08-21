package org.bouncycastle.x509;

public class X509V2AttributeCertificate implements org.bouncycastle.x509.X509AttributeCertificate {
    private org.bouncycastle.asn1.x509.AttributeCertificate cert;
    private java.util.Date notAfter;
    private java.util.Date notBefore;

    public X509V2AttributeCertificate(java.io.InputStream r2) throws java.io.IOException {
            r1 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r0.<init>(r2)
            org.bouncycastle.asn1.DERObject r2 = r0.readObject()
            org.bouncycastle.asn1.x509.AttributeCertificate r2 = org.bouncycastle.asn1.x509.AttributeCertificate.getInstance(r2)
            r1.<init>(r2)
            return
    }

    X509V2AttributeCertificate(org.bouncycastle.asn1.x509.AttributeCertificate r2) throws java.io.IOException {
            r1 = this;
            r1.<init>()
            r1.cert = r2
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r0 = r2.getAcinfo()     // Catch: java.text.ParseException -> L2a
            org.bouncycastle.asn1.x509.AttCertValidityPeriod r0 = r0.getAttrCertValidityPeriod()     // Catch: java.text.ParseException -> L2a
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r0.getNotAfterTime()     // Catch: java.text.ParseException -> L2a
            java.util.Date r0 = r0.getDate()     // Catch: java.text.ParseException -> L2a
            r1.notAfter = r0     // Catch: java.text.ParseException -> L2a
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r2 = r2.getAcinfo()     // Catch: java.text.ParseException -> L2a
            org.bouncycastle.asn1.x509.AttCertValidityPeriod r2 = r2.getAttrCertValidityPeriod()     // Catch: java.text.ParseException -> L2a
            org.bouncycastle.asn1.DERGeneralizedTime r2 = r2.getNotBeforeTime()     // Catch: java.text.ParseException -> L2a
            java.util.Date r2 = r2.getDate()     // Catch: java.text.ParseException -> L2a
            r1.notBefore = r2     // Catch: java.text.ParseException -> L2a
            return
        L2a:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r0 = "invalid data structure in certificate!"
            r2.<init>(r0)
            throw r2
    }

    public X509V2AttributeCertificate(byte[] r2) throws java.io.IOException {
            r1 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    private java.util.Set getExtensionOIDs(boolean r6) {
            r5 = this;
            org.bouncycastle.asn1.x509.AttributeCertificate r0 = r5.cert
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r0 = r0.getAcinfo()
            org.bouncycastle.asn1.x509.X509Extensions r0 = r0.getExtensions()
            if (r0 == 0) goto L34
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            java.util.Enumeration r2 = r0.oids()
        L15:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto L33
            java.lang.Object r3 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            org.bouncycastle.asn1.x509.X509Extension r4 = r0.getExtension(r3)
            boolean r4 = r4.isCritical()
            if (r4 != r6) goto L15
            java.lang.String r3 = r3.getId()
            r1.add(r3)
            goto L15
        L33:
            return r1
        L34:
            r6 = 0
            return r6
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
    public void checkValidity(java.util.Date r3) throws java.security.cert.CertificateExpiredException, java.security.cert.CertificateNotYetValidException {
            r2 = this;
            java.util.Date r0 = r2.getNotAfter()
            boolean r0 = r3.after(r0)
            if (r0 != 0) goto L30
            java.util.Date r0 = r2.getNotBefore()
            boolean r3 = r3.before(r0)
            if (r3 != 0) goto L15
            return
        L15:
            java.security.cert.CertificateNotYetValidException r3 = new java.security.cert.CertificateNotYetValidException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "certificate not valid till "
            r0.append(r1)
            java.util.Date r1 = r2.getNotBefore()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
        L30:
            java.security.cert.CertificateExpiredException r3 = new java.security.cert.CertificateExpiredException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "certificate expired on "
            r0.append(r1)
            java.util.Date r1 = r2.getNotAfter()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            if (r3 != r2) goto L4
            r3 = 1
            return r3
        L4:
            boolean r0 = r3 instanceof org.bouncycastle.x509.X509AttributeCertificate
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            org.bouncycastle.x509.X509AttributeCertificate r3 = (org.bouncycastle.x509.X509AttributeCertificate) r3
            byte[] r0 = r2.getEncoded()     // Catch: java.io.IOException -> L19
            byte[] r3 = r3.getEncoded()     // Catch: java.io.IOException -> L19
            boolean r3 = org.bouncycastle.util.Arrays.areEqual(r0, r3)     // Catch: java.io.IOException -> L19
            return r3
        L19:
            return r1
    }

    @Override
    public org.bouncycastle.x509.X509Attribute[] getAttributes() {
            r5 = this;
            org.bouncycastle.asn1.x509.AttributeCertificate r0 = r5.cert
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r0 = r0.getAcinfo()
            org.bouncycastle.asn1.ASN1Sequence r0 = r0.getAttributes()
            int r1 = r0.size()
            org.bouncycastle.x509.X509Attribute[] r1 = new org.bouncycastle.x509.X509Attribute[r1]
            r2 = 0
        L11:
            int r3 = r0.size()
            if (r2 == r3) goto L27
            org.bouncycastle.x509.X509Attribute r3 = new org.bouncycastle.x509.X509Attribute
            org.bouncycastle.asn1.DEREncodable r4 = r0.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1Encodable r4 = (org.bouncycastle.asn1.ASN1Encodable) r4
            r3.<init>(r4)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L11
        L27:
            return r1
    }

    @Override
    public org.bouncycastle.x509.X509Attribute[] getAttributes(java.lang.String r6) {
            r5 = this;
            org.bouncycastle.asn1.x509.AttributeCertificate r0 = r5.cert
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r0 = r0.getAcinfo()
            org.bouncycastle.asn1.ASN1Sequence r0 = r0.getAttributes()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
        L10:
            int r3 = r0.size()
            if (r2 == r3) goto L31
            org.bouncycastle.x509.X509Attribute r3 = new org.bouncycastle.x509.X509Attribute
            org.bouncycastle.asn1.DEREncodable r4 = r0.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1Encodable r4 = (org.bouncycastle.asn1.ASN1Encodable) r4
            r3.<init>(r4)
            java.lang.String r4 = r3.getOID()
            boolean r4 = r4.equals(r6)
            if (r4 == 0) goto L2e
            r1.add(r3)
        L2e:
            int r2 = r2 + 1
            goto L10
        L31:
            int r6 = r1.size()
            if (r6 != 0) goto L39
            r6 = 0
            return r6
        L39:
            int r6 = r1.size()
            org.bouncycastle.x509.X509Attribute[] r6 = new org.bouncycastle.x509.X509Attribute[r6]
            java.lang.Object[] r6 = r1.toArray(r6)
            org.bouncycastle.x509.X509Attribute[] r6 = (org.bouncycastle.x509.X509Attribute[]) r6
            org.bouncycastle.x509.X509Attribute[] r6 = (org.bouncycastle.x509.X509Attribute[]) r6
            return r6
    }

    @Override
    public java.util.Set getCriticalExtensionOIDs() {
            r1 = this;
            r0 = 1
            java.util.Set r0 = r1.getExtensionOIDs(r0)
            return r0
    }

    @Override
    public byte[] getEncoded() throws java.io.IOException {
            r1 = this;
            org.bouncycastle.asn1.x509.AttributeCertificate r0 = r1.cert
            byte[] r0 = r0.getEncoded()
            return r0
    }

    @Override
    public byte[] getExtensionValue(java.lang.String r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.AttributeCertificate r0 = r3.cert
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r0 = r0.getAcinfo()
            org.bouncycastle.asn1.x509.X509Extensions r0 = r0.getExtensions()
            if (r0 == 0) goto L3e
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r4)
            org.bouncycastle.asn1.x509.X509Extension r4 = r0.getExtension(r1)
            if (r4 == 0) goto L3e
            org.bouncycastle.asn1.ASN1OctetString r4 = r4.getValue()     // Catch: java.lang.Exception -> L22
            java.lang.String r0 = "DER"
            byte[] r4 = r4.getEncoded(r0)     // Catch: java.lang.Exception -> L22
            return r4
        L22:
            r4 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "error encoding "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L3e:
            r4 = 0
            return r4
    }

    @Override
    public org.bouncycastle.x509.AttributeCertificateHolder getHolder() {
            r2 = this;
            org.bouncycastle.x509.AttributeCertificateHolder r0 = new org.bouncycastle.x509.AttributeCertificateHolder
            org.bouncycastle.asn1.x509.AttributeCertificate r1 = r2.cert
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r1 = r1.getAcinfo()
            org.bouncycastle.asn1.x509.Holder r1 = r1.getHolder()
            org.bouncycastle.asn1.DERObject r1 = r1.toASN1Object()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            return r0
    }

    @Override
    public org.bouncycastle.x509.AttributeCertificateIssuer getIssuer() {
            r2 = this;
            org.bouncycastle.x509.AttributeCertificateIssuer r0 = new org.bouncycastle.x509.AttributeCertificateIssuer
            org.bouncycastle.asn1.x509.AttributeCertificate r1 = r2.cert
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r1 = r1.getAcinfo()
            org.bouncycastle.asn1.x509.AttCertIssuer r1 = r1.getIssuer()
            r0.<init>(r1)
            return r0
    }

    @Override
    public boolean[] getIssuerUniqueID() {
            r8 = this;
            org.bouncycastle.asn1.x509.AttributeCertificate r0 = r8.cert
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r0 = r0.getAcinfo()
            org.bouncycastle.asn1.DERBitString r0 = r0.getIssuerUniqueID()
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
    public java.util.Set getNonCriticalExtensionOIDs() {
            r1 = this;
            r0 = 0
            java.util.Set r0 = r1.getExtensionOIDs(r0)
            return r0
    }

    @Override
    public java.util.Date getNotAfter() {
            r1 = this;
            java.util.Date r0 = r1.notAfter
            return r0
    }

    @Override
    public java.util.Date getNotBefore() {
            r1 = this;
            java.util.Date r0 = r1.notBefore
            return r0
    }

    @Override
    public java.math.BigInteger getSerialNumber() {
            r1 = this;
            org.bouncycastle.asn1.x509.AttributeCertificate r0 = r1.cert
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r0 = r0.getAcinfo()
            org.bouncycastle.asn1.DERInteger r0 = r0.getSerialNumber()
            java.math.BigInteger r0 = r0.getValue()
            return r0
    }

    @Override
    public byte[] getSignature() {
            r1 = this;
            org.bouncycastle.asn1.x509.AttributeCertificate r0 = r1.cert
            org.bouncycastle.asn1.DERBitString r0 = r0.getSignatureValue()
            byte[] r0 = r0.getBytes()
            return r0
    }

    @Override
    public int getVersion() {
            r1 = this;
            org.bouncycastle.asn1.x509.AttributeCertificate r0 = r1.cert
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r0 = r0.getAcinfo()
            org.bouncycastle.asn1.DERInteger r0 = r0.getVersion()
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            return r0
    }

    @Override
    public boolean hasUnsupportedCriticalExtension() {
            r1 = this;
            java.util.Set r0 = r1.getCriticalExtensionOIDs()
            if (r0 == 0) goto Le
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    public int hashCode() {
            r6 = this;
            r0 = 0
            byte[] r1 = r6.getEncoded()     // Catch: java.io.IOException -> L16
            r2 = 0
            r3 = 0
        L7:
            int r4 = r1.length     // Catch: java.io.IOException -> L16
            if (r2 == r4) goto L15
            r4 = r1[r2]     // Catch: java.io.IOException -> L16
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
    public final void verify(java.security.PublicKey r3, java.lang.String r4) throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.security.InvalidKeyException, java.security.NoSuchProviderException, java.security.SignatureException {
            r2 = this;
            org.bouncycastle.asn1.x509.AttributeCertificate r0 = r2.cert
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getSignatureAlgorithm()
            org.bouncycastle.asn1.x509.AttributeCertificate r1 = r2.cert
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r1 = r1.getAcinfo()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r1.getSignature()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L53
            org.bouncycastle.asn1.x509.AttributeCertificate r0 = r2.cert
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getSignatureAlgorithm()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            java.lang.String r0 = r0.getId()
            java.security.Signature r4 = java.security.Signature.getInstance(r0, r4)
            r4.initVerify(r3)
            org.bouncycastle.asn1.x509.AttributeCertificate r3 = r2.cert     // Catch: java.io.IOException -> L4b
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r3 = r3.getAcinfo()     // Catch: java.io.IOException -> L4b
            byte[] r3 = r3.getEncoded()     // Catch: java.io.IOException -> L4b
            r4.update(r3)     // Catch: java.io.IOException -> L4b
            byte[] r3 = r2.getSignature()
            boolean r3 = r4.verify(r3)
            if (r3 == 0) goto L43
            return
        L43:
            java.security.InvalidKeyException r3 = new java.security.InvalidKeyException
            java.lang.String r4 = "Public key presented not for certificate signature"
            r3.<init>(r4)
            throw r3
        L4b:
            java.security.SignatureException r3 = new java.security.SignatureException
            java.lang.String r4 = "Exception encoding certificate info object"
            r3.<init>(r4)
            throw r3
        L53:
            java.security.cert.CertificateException r3 = new java.security.cert.CertificateException
            java.lang.String r4 = "Signature algorithm in certificate info not same as outer certificate"
            r3.<init>(r4)
            throw r3
    }
}
