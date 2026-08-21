package org.bouncycastle.x509;

public class X509V1CertificateGenerator {
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier sigAlgId;
    private org.bouncycastle.asn1.DERObjectIdentifier sigOID;
    private java.lang.String signatureAlgorithm;
    private org.bouncycastle.asn1.x509.V1TBSCertificateGenerator tbsGen;

    public X509V1CertificateGenerator() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = new org.bouncycastle.asn1.x509.V1TBSCertificateGenerator
            r0.<init>()
            r1.tbsGen = r0
            return
    }

    private java.security.cert.X509Certificate generateJcaObject(org.bouncycastle.asn1.x509.TBSCertificateStructure r3, byte[] r4) throws java.security.cert.CertificateEncodingException {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r0.add(r3)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = r2.sigAlgId
            r0.add(r3)
            org.bouncycastle.asn1.DERBitString r3 = new org.bouncycastle.asn1.DERBitString
            r3.<init>(r4)
            r0.add(r3)
            org.bouncycastle.jce.provider.X509CertificateObject r3 = new org.bouncycastle.jce.provider.X509CertificateObject     // Catch: java.security.cert.CertificateParsingException -> L25
            org.bouncycastle.asn1.x509.X509CertificateStructure r4 = new org.bouncycastle.asn1.x509.X509CertificateStructure     // Catch: java.security.cert.CertificateParsingException -> L25
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence     // Catch: java.security.cert.CertificateParsingException -> L25
            r1.<init>(r0)     // Catch: java.security.cert.CertificateParsingException -> L25
            r4.<init>(r1)     // Catch: java.security.cert.CertificateParsingException -> L25
            r3.<init>(r4)     // Catch: java.security.cert.CertificateParsingException -> L25
            return r3
        L25:
            r3 = move-exception
            org.bouncycastle.x509.ExtCertificateEncodingException r4 = new org.bouncycastle.x509.ExtCertificateEncodingException
            java.lang.String r0 = "exception producing certificate object"
            r4.<init>(r0, r3)
            throw r4
    }

    public java.security.cert.X509Certificate generate(java.security.PrivateKey r2) throws java.security.cert.CertificateEncodingException, java.lang.IllegalStateException, java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.InvalidKeyException {
            r1 = this;
            r0 = 0
            java.security.SecureRandom r0 = (java.security.SecureRandom) r0
            java.security.cert.X509Certificate r2 = r1.generate(r2, r0)
            return r2
    }

    public java.security.cert.X509Certificate generate(java.security.PrivateKey r2, java.lang.String r3) throws java.security.cert.CertificateEncodingException, java.lang.IllegalStateException, java.security.NoSuchProviderException, java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.InvalidKeyException {
            r1 = this;
            r0 = 0
            java.security.cert.X509Certificate r2 = r1.generate(r2, r3, r0)
            return r2
    }

    public java.security.cert.X509Certificate generate(java.security.PrivateKey r8, java.lang.String r9, java.security.SecureRandom r10) throws java.security.cert.CertificateEncodingException, java.lang.IllegalStateException, java.security.NoSuchProviderException, java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.InvalidKeyException {
            r7 = this;
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r7.tbsGen
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r0.generateTBSCertificate()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r7.sigOID     // Catch: java.io.IOException -> L17
            java.lang.String r2 = r7.signatureAlgorithm     // Catch: java.io.IOException -> L17
            r3 = r9
            r4 = r8
            r5 = r10
            r6 = r0
            byte[] r8 = org.bouncycastle.x509.X509Util.calculateSignature(r1, r2, r3, r4, r5, r6)     // Catch: java.io.IOException -> L17
            java.security.cert.X509Certificate r8 = r7.generateJcaObject(r0, r8)
            return r8
        L17:
            r8 = move-exception
            org.bouncycastle.x509.ExtCertificateEncodingException r9 = new org.bouncycastle.x509.ExtCertificateEncodingException
            java.lang.String r10 = "exception encoding TBS cert"
            r9.<init>(r10, r8)
            throw r9
    }

    public java.security.cert.X509Certificate generate(java.security.PrivateKey r4, java.security.SecureRandom r5) throws java.security.cert.CertificateEncodingException, java.lang.IllegalStateException, java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.InvalidKeyException {
            r3 = this;
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r3.tbsGen
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r0.generateTBSCertificate()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r3.sigOID     // Catch: java.io.IOException -> L13
            java.lang.String r2 = r3.signatureAlgorithm     // Catch: java.io.IOException -> L13
            byte[] r4 = org.bouncycastle.x509.X509Util.calculateSignature(r1, r2, r4, r5, r0)     // Catch: java.io.IOException -> L13
            java.security.cert.X509Certificate r4 = r3.generateJcaObject(r0, r4)
            return r4
        L13:
            r4 = move-exception
            org.bouncycastle.x509.ExtCertificateEncodingException r5 = new org.bouncycastle.x509.ExtCertificateEncodingException
            java.lang.String r0 = "exception encoding TBS cert"
            r5.<init>(r0, r4)
            throw r5
    }

    public java.security.cert.X509Certificate generateX509Certificate(java.security.PrivateKey r3) throws java.lang.SecurityException, java.security.SignatureException, java.security.InvalidKeyException {
            r2 = this;
            java.lang.String r0 = "BC"
            r1 = 0
            java.security.cert.X509Certificate r3 = r2.generateX509Certificate(r3, r0, r1)     // Catch: java.security.NoSuchProviderException -> L8
            return r3
        L8:
            java.lang.SecurityException r3 = new java.lang.SecurityException
            java.lang.String r0 = "BC provider not installed!"
            r3.<init>(r0)
            throw r3
    }

    public java.security.cert.X509Certificate generateX509Certificate(java.security.PrivateKey r2, java.lang.String r3) throws java.security.NoSuchProviderException, java.lang.SecurityException, java.security.SignatureException, java.security.InvalidKeyException {
            r1 = this;
            r0 = 0
            java.security.cert.X509Certificate r2 = r1.generateX509Certificate(r2, r3, r0)
            return r2
    }

    public java.security.cert.X509Certificate generateX509Certificate(java.security.PrivateKey r2, java.lang.String r3, java.security.SecureRandom r4) throws java.security.NoSuchProviderException, java.lang.SecurityException, java.security.SignatureException, java.security.InvalidKeyException {
            r1 = this;
            java.security.cert.X509Certificate r2 = r1.generate(r2, r3, r4)     // Catch: java.security.GeneralSecurityException -> L5 java.security.InvalidKeyException -> L1d java.security.SignatureException -> L1f java.security.NoSuchProviderException -> L21
            return r2
        L5:
            r2 = move-exception
            java.lang.SecurityException r3 = new java.lang.SecurityException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "exception: "
            r4.append(r0)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.<init>(r2)
            throw r3
        L1d:
            r2 = move-exception
            throw r2
        L1f:
            r2 = move-exception
            throw r2
        L21:
            r2 = move-exception
            throw r2
    }

    public java.security.cert.X509Certificate generateX509Certificate(java.security.PrivateKey r2, java.security.SecureRandom r3) throws java.lang.SecurityException, java.security.SignatureException, java.security.InvalidKeyException {
            r1 = this;
            java.lang.String r0 = "BC"
            java.security.cert.X509Certificate r2 = r1.generateX509Certificate(r2, r0, r3)     // Catch: java.security.NoSuchProviderException -> L7
            return r2
        L7:
            java.lang.SecurityException r2 = new java.lang.SecurityException
            java.lang.String r3 = "BC provider not installed!"
            r2.<init>(r3)
            throw r2
    }

    public java.util.Iterator getSignatureAlgNames() {
            r1 = this;
            java.util.Iterator r0 = org.bouncycastle.x509.X509Util.getAlgNames()
            return r0
    }

    public void reset() {
            r1 = this;
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = new org.bouncycastle.asn1.x509.V1TBSCertificateGenerator
            r0.<init>()
            r1.tbsGen = r0
            return
    }

    public void setIssuerDN(javax.security.auth.x500.X500Principal r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r3.tbsGen     // Catch: java.io.IOException -> Lf
            org.bouncycastle.jce.X509Principal r1 = new org.bouncycastle.jce.X509Principal     // Catch: java.io.IOException -> Lf
            byte[] r4 = r4.getEncoded()     // Catch: java.io.IOException -> Lf
            r1.<init>(r4)     // Catch: java.io.IOException -> Lf
            r0.setIssuer(r1)     // Catch: java.io.IOException -> Lf
            return
        Lf:
            r4 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "can't process principal: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public void setIssuerDN(org.bouncycastle.asn1.x509.X509Name r2) {
            r1 = this;
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r1.tbsGen
            r0.setIssuer(r2)
            return
    }

    public void setNotAfter(java.util.Date r3) {
            r2 = this;
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.x509.Time r1 = new org.bouncycastle.asn1.x509.Time
            r1.<init>(r3)
            r0.setEndDate(r1)
            return
    }

    public void setNotBefore(java.util.Date r3) {
            r2 = this;
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.x509.Time r1 = new org.bouncycastle.asn1.x509.Time
            r1.<init>(r3)
            r0.setStartDate(r1)
            return
    }

    public void setPublicKey(java.security.PublicKey r5) {
            r4 = this;
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r4.tbsGen     // Catch: java.lang.Exception -> L1f
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r1 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo     // Catch: java.lang.Exception -> L1f
            org.bouncycastle.asn1.ASN1InputStream r2 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L1f
            java.io.ByteArrayInputStream r3 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L1f
            byte[] r5 = r5.getEncoded()     // Catch: java.lang.Exception -> L1f
            r3.<init>(r5)     // Catch: java.lang.Exception -> L1f
            r2.<init>(r3)     // Catch: java.lang.Exception -> L1f
            org.bouncycastle.asn1.DERObject r5 = r2.readObject()     // Catch: java.lang.Exception -> L1f
            org.bouncycastle.asn1.ASN1Sequence r5 = (org.bouncycastle.asn1.ASN1Sequence) r5     // Catch: java.lang.Exception -> L1f
            r1.<init>(r5)     // Catch: java.lang.Exception -> L1f
            r0.setSubjectPublicKeyInfo(r1)     // Catch: java.lang.Exception -> L1f
            return
        L1f:
            r5 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unable to process key - "
            r1.append(r2)
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    public void setSerialNumber(java.math.BigInteger r3) {
            r2 = this;
            java.math.BigInteger r0 = java.math.BigInteger.ZERO
            int r0 = r3.compareTo(r0)
            if (r0 <= 0) goto L13
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r3)
            r0.setSerialNumber(r1)
            return
        L13:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "serial number must be a positive integer"
            r3.<init>(r0)
            throw r3
    }

    public void setSignatureAlgorithm(java.lang.String r2) {
            r1 = this;
            r1.signatureAlgorithm = r2
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.x509.X509Util.getAlgorithmOID(r2)     // Catch: java.lang.Exception -> L14
            r1.sigOID = r0     // Catch: java.lang.Exception -> L14
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = org.bouncycastle.x509.X509Util.getSigAlgID(r0, r2)
            r1.sigAlgId = r2
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r1.tbsGen
            r0.setSignature(r2)
            return
        L14:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Unknown signature type requested"
            r2.<init>(r0)
            throw r2
    }

    public void setSubjectDN(javax.security.auth.x500.X500Principal r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r3.tbsGen     // Catch: java.io.IOException -> Lf
            org.bouncycastle.jce.X509Principal r1 = new org.bouncycastle.jce.X509Principal     // Catch: java.io.IOException -> Lf
            byte[] r4 = r4.getEncoded()     // Catch: java.io.IOException -> Lf
            r1.<init>(r4)     // Catch: java.io.IOException -> Lf
            r0.setSubject(r1)     // Catch: java.io.IOException -> Lf
            return
        Lf:
            r4 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "can't process principal: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public void setSubjectDN(org.bouncycastle.asn1.x509.X509Name r2) {
            r1 = this;
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r1.tbsGen
            r0.setSubject(r2)
            return
    }
}
