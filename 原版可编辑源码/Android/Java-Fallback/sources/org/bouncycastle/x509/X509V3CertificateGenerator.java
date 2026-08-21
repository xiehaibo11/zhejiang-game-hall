package org.bouncycastle.x509;

public class X509V3CertificateGenerator {
    private org.bouncycastle.asn1.x509.X509ExtensionsGenerator extGenerator;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier sigAlgId;
    private org.bouncycastle.asn1.DERObjectIdentifier sigOID;
    private java.lang.String signatureAlgorithm;
    private org.bouncycastle.asn1.x509.V3TBSCertificateGenerator tbsGen;

    public X509V3CertificateGenerator() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x509.V3TBSCertificateGenerator r0 = new org.bouncycastle.asn1.x509.V3TBSCertificateGenerator
            r0.<init>()
            r1.tbsGen = r0
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r0 = new org.bouncycastle.asn1.x509.X509ExtensionsGenerator
            r0.<init>()
            r1.extGenerator = r0
            return
    }

    private java.security.cert.X509Certificate generateJcaObject(org.bouncycastle.asn1.x509.TBSCertificateStructure r3, byte[] r4) throws java.security.cert.CertificateParsingException {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r0.add(r3)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = r2.sigAlgId
            r0.add(r3)
            org.bouncycastle.asn1.DERBitString r3 = new org.bouncycastle.asn1.DERBitString
            r3.<init>(r4)
            r0.add(r3)
            org.bouncycastle.jce.provider.X509CertificateObject r3 = new org.bouncycastle.jce.provider.X509CertificateObject
            org.bouncycastle.asn1.x509.X509CertificateStructure r4 = new org.bouncycastle.asn1.x509.X509CertificateStructure
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            r4.<init>(r1)
            r3.<init>(r4)
            return r3
    }

    private org.bouncycastle.asn1.x509.TBSCertificateStructure generateTbsCert() {
            r2 = this;
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r0 = r2.extGenerator
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L13
            org.bouncycastle.asn1.x509.V3TBSCertificateGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r1 = r2.extGenerator
            org.bouncycastle.asn1.x509.X509Extensions r1 = r1.generate()
            r0.setExtensions(r1)
        L13:
            org.bouncycastle.asn1.x509.V3TBSCertificateGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r0.generateTBSCertificate()
            return r0
    }

    public void addExtension(java.lang.String r2, boolean r3, org.bouncycastle.asn1.DEREncodable r4) {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            r0.<init>(r2)
            r1.addExtension(r0, r3, r4)
            return
    }

    public void addExtension(java.lang.String r2, boolean r3, byte[] r4) {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            r0.<init>(r2)
            r1.addExtension(r0, r3, r4)
            return
    }

    public void addExtension(org.bouncycastle.asn1.DERObjectIdentifier r2, boolean r3, org.bouncycastle.asn1.DEREncodable r4) {
            r1 = this;
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r0 = r1.extGenerator
            r0.addExtension(r2, r3, r4)
            return
    }

    public void addExtension(org.bouncycastle.asn1.DERObjectIdentifier r2, boolean r3, byte[] r4) {
            r1 = this;
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r0 = r1.extGenerator
            r0.addExtension(r2, r3, r4)
            return
    }

    public void copyAndAddExtension(java.lang.String r2, boolean r3, java.security.cert.X509Certificate r4) throws java.security.cert.CertificateParsingException {
            r1 = this;
            byte[] r4 = r4.getExtensionValue(r2)
            if (r4 == 0) goto L19
            org.bouncycastle.asn1.ASN1Object r4 = org.bouncycastle.x509.extension.X509ExtensionUtil.fromExtensionValue(r4)     // Catch: java.io.IOException -> Le
            r1.addExtension(r2, r3, r4)     // Catch: java.io.IOException -> Le
            return
        Le:
            r2 = move-exception
            java.security.cert.CertificateParsingException r3 = new java.security.cert.CertificateParsingException
            java.lang.String r2 = r2.toString()
            r3.<init>(r2)
            throw r3
        L19:
            java.security.cert.CertificateParsingException r3 = new java.security.cert.CertificateParsingException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "extension "
            r4.append(r0)
            r4.append(r2)
            java.lang.String r2 = " not present"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.<init>(r2)
            throw r3
    }

    public void copyAndAddExtension(org.bouncycastle.asn1.DERObjectIdentifier r1, boolean r2, java.security.cert.X509Certificate r3) throws java.security.cert.CertificateParsingException {
            r0 = this;
            java.lang.String r1 = r1.getId()
            r0.copyAndAddExtension(r1, r2, r3)
            return
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
            org.bouncycastle.asn1.x509.TBSCertificateStructure r6 = r7.generateTbsCert()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r7.sigOID     // Catch: java.io.IOException -> L1e
            java.lang.String r1 = r7.signatureAlgorithm     // Catch: java.io.IOException -> L1e
            r2 = r9
            r3 = r8
            r4 = r10
            r5 = r6
            byte[] r8 = org.bouncycastle.x509.X509Util.calculateSignature(r0, r1, r2, r3, r4, r5)     // Catch: java.io.IOException -> L1e
            java.security.cert.X509Certificate r8 = r7.generateJcaObject(r6, r8)     // Catch: java.security.cert.CertificateParsingException -> L15
            return r8
        L15:
            r8 = move-exception
            org.bouncycastle.x509.ExtCertificateEncodingException r9 = new org.bouncycastle.x509.ExtCertificateEncodingException
            java.lang.String r10 = "exception producing certificate object"
            r9.<init>(r10, r8)
            throw r9
        L1e:
            r8 = move-exception
            org.bouncycastle.x509.ExtCertificateEncodingException r9 = new org.bouncycastle.x509.ExtCertificateEncodingException
            java.lang.String r10 = "exception encoding TBS cert"
            r9.<init>(r10, r8)
            throw r9
    }

    public java.security.cert.X509Certificate generate(java.security.PrivateKey r4, java.security.SecureRandom r5) throws java.security.cert.CertificateEncodingException, java.lang.IllegalStateException, java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.InvalidKeyException {
            r3 = this;
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r3.generateTbsCert()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r3.sigOID     // Catch: java.io.IOException -> L1a
            java.lang.String r2 = r3.signatureAlgorithm     // Catch: java.io.IOException -> L1a
            byte[] r4 = org.bouncycastle.x509.X509Util.calculateSignature(r1, r2, r4, r5, r0)     // Catch: java.io.IOException -> L1a
            java.security.cert.X509Certificate r4 = r3.generateJcaObject(r0, r4)     // Catch: java.security.cert.CertificateParsingException -> L11
            return r4
        L11:
            r4 = move-exception
            org.bouncycastle.x509.ExtCertificateEncodingException r5 = new org.bouncycastle.x509.ExtCertificateEncodingException
            java.lang.String r0 = "exception producing certificate object"
            r5.<init>(r0, r4)
            throw r5
        L1a:
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
            org.bouncycastle.asn1.x509.V3TBSCertificateGenerator r0 = new org.bouncycastle.asn1.x509.V3TBSCertificateGenerator
            r0.<init>()
            r1.tbsGen = r0
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r0 = r1.extGenerator
            r0.reset()
            return
    }

    public void setIssuerDN(javax.security.auth.x500.X500Principal r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.V3TBSCertificateGenerator r0 = r3.tbsGen     // Catch: java.io.IOException -> Lf
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
            org.bouncycastle.asn1.x509.V3TBSCertificateGenerator r0 = r1.tbsGen
            r0.setIssuer(r2)
            return
    }

    public void setNotAfter(java.util.Date r3) {
            r2 = this;
            org.bouncycastle.asn1.x509.V3TBSCertificateGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.x509.Time r1 = new org.bouncycastle.asn1.x509.Time
            r1.<init>(r3)
            r0.setEndDate(r1)
            return
    }

    public void setNotBefore(java.util.Date r3) {
            r2 = this;
            org.bouncycastle.asn1.x509.V3TBSCertificateGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.x509.Time r1 = new org.bouncycastle.asn1.x509.Time
            r1.<init>(r3)
            r0.setStartDate(r1)
            return
    }

    public void setPublicKey(java.security.PublicKey r4) throws java.lang.IllegalArgumentException {
            r3 = this;
            org.bouncycastle.asn1.x509.V3TBSCertificateGenerator r0 = r3.tbsGen     // Catch: java.lang.Exception -> L17
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L17
            byte[] r4 = r4.getEncoded()     // Catch: java.lang.Exception -> L17
            r1.<init>(r4)     // Catch: java.lang.Exception -> L17
            org.bouncycastle.asn1.DERObject r4 = r1.readObject()     // Catch: java.lang.Exception -> L17
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r4 = org.bouncycastle.asn1.x509.SubjectPublicKeyInfo.getInstance(r4)     // Catch: java.lang.Exception -> L17
            r0.setSubjectPublicKeyInfo(r4)     // Catch: java.lang.Exception -> L17
            return
        L17:
            r4 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unable to process key - "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public void setSerialNumber(java.math.BigInteger r3) {
            r2 = this;
            java.math.BigInteger r0 = java.math.BigInteger.ZERO
            int r0 = r3.compareTo(r0)
            if (r0 <= 0) goto L13
            org.bouncycastle.asn1.x509.V3TBSCertificateGenerator r0 = r2.tbsGen
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

    public void setSignatureAlgorithm(java.lang.String r4) {
            r3 = this;
            r3.signatureAlgorithm = r4
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.x509.X509Util.getAlgorithmOID(r4)     // Catch: java.lang.Exception -> L14
            r3.sigOID = r0     // Catch: java.lang.Exception -> L14
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r4 = org.bouncycastle.x509.X509Util.getSigAlgID(r0, r4)
            r3.sigAlgId = r4
            org.bouncycastle.asn1.x509.V3TBSCertificateGenerator r0 = r3.tbsGen
            r0.setSignature(r4)
            return
        L14:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown signature type requested: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public void setSubjectDN(javax.security.auth.x500.X500Principal r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.V3TBSCertificateGenerator r0 = r3.tbsGen     // Catch: java.io.IOException -> Lf
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
            org.bouncycastle.asn1.x509.V3TBSCertificateGenerator r0 = r1.tbsGen
            r0.setSubject(r2)
            return
    }
}
