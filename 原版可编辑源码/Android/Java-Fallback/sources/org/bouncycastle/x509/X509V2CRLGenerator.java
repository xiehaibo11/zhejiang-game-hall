package org.bouncycastle.x509;

public class X509V2CRLGenerator {
    private org.bouncycastle.asn1.x509.X509ExtensionsGenerator extGenerator;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier sigAlgId;
    private org.bouncycastle.asn1.DERObjectIdentifier sigOID;
    private java.lang.String signatureAlgorithm;
    private org.bouncycastle.asn1.x509.V2TBSCertListGenerator tbsGen;

    private static class ExtCRLException extends java.security.cert.CRLException {
        java.lang.Throwable cause;

        ExtCRLException(java.lang.String r1, java.lang.Throwable r2) {
                r0 = this;
                r0.<init>(r1)
                r0.cause = r2
                return
        }

        @Override
        public java.lang.Throwable getCause() {
                r1 = this;
                java.lang.Throwable r0 = r1.cause
                return r0
        }
    }

    public X509V2CRLGenerator() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = new org.bouncycastle.asn1.x509.V2TBSCertListGenerator
            r0.<init>()
            r1.tbsGen = r0
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r0 = new org.bouncycastle.asn1.x509.X509ExtensionsGenerator
            r0.<init>()
            r1.extGenerator = r0
            return
    }

    private org.bouncycastle.asn1.x509.TBSCertList generateCertList() {
            r2 = this;
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r0 = r2.extGenerator
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L13
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r1 = r2.extGenerator
            org.bouncycastle.asn1.x509.X509Extensions r1 = r1.generate()
            r0.setExtensions(r1)
        L13:
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.x509.TBSCertList r0 = r0.generateTBSCertList()
            return r0
    }

    private java.security.cert.X509CRL generateJcaObject(org.bouncycastle.asn1.x509.TBSCertList r3, byte[] r4) throws java.security.cert.CRLException {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r0.add(r3)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = r2.sigAlgId
            r0.add(r3)
            org.bouncycastle.asn1.DERBitString r3 = new org.bouncycastle.asn1.DERBitString
            r3.<init>(r4)
            r0.add(r3)
            org.bouncycastle.jce.provider.X509CRLObject r3 = new org.bouncycastle.jce.provider.X509CRLObject
            org.bouncycastle.asn1.x509.CertificateList r4 = new org.bouncycastle.asn1.x509.CertificateList
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            r4.<init>(r1)
            r3.<init>(r4)
            return r3
    }

    public void addCRL(java.security.cert.X509CRL r4) throws java.security.cert.CRLException {
            r3 = this;
            java.util.Set r4 = r4.getRevokedCertificates()
            if (r4 == 0) goto L49
            java.util.Iterator r4 = r4.iterator()
        La:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L49
            java.lang.Object r0 = r4.next()
            java.security.cert.X509CRLEntry r0 = (java.security.cert.X509CRLEntry) r0
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream
            byte[] r0 = r0.getEncoded()
            r1.<init>(r0)
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r3.tbsGen     // Catch: java.io.IOException -> L2d
            org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: java.io.IOException -> L2d
            org.bouncycastle.asn1.ASN1Sequence r1 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r1)     // Catch: java.io.IOException -> L2d
            r0.addCRLEntry(r1)     // Catch: java.io.IOException -> L2d
            goto La
        L2d:
            r4 = move-exception
            java.security.cert.CRLException r0 = new java.security.cert.CRLException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "exception processing encoding of CRL: "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L49:
            return
    }

    public void addCRLEntry(java.math.BigInteger r3, java.util.Date r4, int r5) {
            r2 = this;
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r3)
            org.bouncycastle.asn1.x509.Time r3 = new org.bouncycastle.asn1.x509.Time
            r3.<init>(r4)
            r0.addCRLEntry(r1, r3, r5)
            return
    }

    public void addCRLEntry(java.math.BigInteger r3, java.util.Date r4, int r5, java.util.Date r6) {
            r2 = this;
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r3)
            org.bouncycastle.asn1.x509.Time r3 = new org.bouncycastle.asn1.x509.Time
            r3.<init>(r4)
            org.bouncycastle.asn1.DERGeneralizedTime r4 = new org.bouncycastle.asn1.DERGeneralizedTime
            r4.<init>(r6)
            r0.addCRLEntry(r1, r3, r5, r4)
            return
    }

    public void addCRLEntry(java.math.BigInteger r3, java.util.Date r4, org.bouncycastle.asn1.x509.X509Extensions r5) {
            r2 = this;
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r3)
            org.bouncycastle.asn1.x509.Time r3 = new org.bouncycastle.asn1.x509.Time
            r3.<init>(r4)
            r0.addCRLEntry(r1, r3, r5)
            return
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

    public java.security.cert.X509CRL generate(java.security.PrivateKey r2) throws java.security.cert.CRLException, java.lang.IllegalStateException, java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.InvalidKeyException {
            r1 = this;
            r0 = 0
            java.security.SecureRandom r0 = (java.security.SecureRandom) r0
            java.security.cert.X509CRL r2 = r1.generate(r2, r0)
            return r2
    }

    public java.security.cert.X509CRL generate(java.security.PrivateKey r2, java.lang.String r3) throws java.security.cert.CRLException, java.lang.IllegalStateException, java.security.NoSuchProviderException, java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.InvalidKeyException {
            r1 = this;
            r0 = 0
            java.security.cert.X509CRL r2 = r1.generate(r2, r3, r0)
            return r2
    }

    public java.security.cert.X509CRL generate(java.security.PrivateKey r8, java.lang.String r9, java.security.SecureRandom r10) throws java.security.cert.CRLException, java.lang.IllegalStateException, java.security.NoSuchProviderException, java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.InvalidKeyException {
            r7 = this;
            org.bouncycastle.asn1.x509.TBSCertList r6 = r7.generateCertList()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r7.sigOID     // Catch: java.io.IOException -> L15
            java.lang.String r1 = r7.signatureAlgorithm     // Catch: java.io.IOException -> L15
            r2 = r9
            r3 = r8
            r4 = r10
            r5 = r6
            byte[] r8 = org.bouncycastle.x509.X509Util.calculateSignature(r0, r1, r2, r3, r4, r5)     // Catch: java.io.IOException -> L15
            java.security.cert.X509CRL r8 = r7.generateJcaObject(r6, r8)
            return r8
        L15:
            r8 = move-exception
            org.bouncycastle.x509.X509V2CRLGenerator$ExtCRLException r9 = new org.bouncycastle.x509.X509V2CRLGenerator$ExtCRLException
            java.lang.String r10 = "cannot generate CRL encoding"
            r9.<init>(r10, r8)
            throw r9
    }

    public java.security.cert.X509CRL generate(java.security.PrivateKey r4, java.security.SecureRandom r5) throws java.security.cert.CRLException, java.lang.IllegalStateException, java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.InvalidKeyException {
            r3 = this;
            org.bouncycastle.asn1.x509.TBSCertList r0 = r3.generateCertList()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r3.sigOID     // Catch: java.io.IOException -> L11
            java.lang.String r2 = r3.signatureAlgorithm     // Catch: java.io.IOException -> L11
            byte[] r4 = org.bouncycastle.x509.X509Util.calculateSignature(r1, r2, r4, r5, r0)     // Catch: java.io.IOException -> L11
            java.security.cert.X509CRL r4 = r3.generateJcaObject(r0, r4)
            return r4
        L11:
            r4 = move-exception
            org.bouncycastle.x509.X509V2CRLGenerator$ExtCRLException r5 = new org.bouncycastle.x509.X509V2CRLGenerator$ExtCRLException
            java.lang.String r0 = "cannot generate CRL encoding"
            r5.<init>(r0, r4)
            throw r5
    }

    public java.security.cert.X509CRL generateX509CRL(java.security.PrivateKey r3) throws java.lang.SecurityException, java.security.SignatureException, java.security.InvalidKeyException {
            r2 = this;
            java.lang.String r0 = "BC"
            r1 = 0
            java.security.cert.X509CRL r3 = r2.generateX509CRL(r3, r0, r1)     // Catch: java.security.NoSuchProviderException -> L8
            return r3
        L8:
            java.lang.SecurityException r3 = new java.lang.SecurityException
            java.lang.String r0 = "BC provider not installed!"
            r3.<init>(r0)
            throw r3
    }

    public java.security.cert.X509CRL generateX509CRL(java.security.PrivateKey r2, java.lang.String r3) throws java.security.NoSuchProviderException, java.lang.SecurityException, java.security.SignatureException, java.security.InvalidKeyException {
            r1 = this;
            r0 = 0
            java.security.cert.X509CRL r2 = r1.generateX509CRL(r2, r3, r0)
            return r2
    }

    public java.security.cert.X509CRL generateX509CRL(java.security.PrivateKey r2, java.lang.String r3, java.security.SecureRandom r4) throws java.security.NoSuchProviderException, java.lang.SecurityException, java.security.SignatureException, java.security.InvalidKeyException {
            r1 = this;
            java.security.cert.X509CRL r2 = r1.generate(r2, r3, r4)     // Catch: java.security.GeneralSecurityException -> L5 java.security.InvalidKeyException -> L1d java.security.SignatureException -> L1f java.security.NoSuchProviderException -> L21
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

    public java.security.cert.X509CRL generateX509CRL(java.security.PrivateKey r2, java.security.SecureRandom r3) throws java.lang.SecurityException, java.security.SignatureException, java.security.InvalidKeyException {
            r1 = this;
            java.lang.String r0 = "BC"
            java.security.cert.X509CRL r2 = r1.generateX509CRL(r2, r0, r3)     // Catch: java.security.NoSuchProviderException -> L7
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
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = new org.bouncycastle.asn1.x509.V2TBSCertListGenerator
            r0.<init>()
            r1.tbsGen = r0
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r0 = r1.extGenerator
            r0.reset()
            return
    }

    public void setIssuerDN(javax.security.auth.x500.X500Principal r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r3.tbsGen     // Catch: java.io.IOException -> Lf
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
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r1.tbsGen
            r0.setIssuer(r2)
            return
    }

    public void setNextUpdate(java.util.Date r3) {
            r2 = this;
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.x509.Time r1 = new org.bouncycastle.asn1.x509.Time
            r1.<init>(r3)
            r0.setNextUpdate(r1)
            return
    }

    public void setSignatureAlgorithm(java.lang.String r2) {
            r1 = this;
            r1.signatureAlgorithm = r2
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.x509.X509Util.getAlgorithmOID(r2)     // Catch: java.lang.Exception -> L14
            r1.sigOID = r0     // Catch: java.lang.Exception -> L14
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = org.bouncycastle.x509.X509Util.getSigAlgID(r0, r2)
            r1.sigAlgId = r2
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r1.tbsGen
            r0.setSignature(r2)
            return
        L14:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Unknown signature type requested"
            r2.<init>(r0)
            throw r2
    }

    public void setThisUpdate(java.util.Date r3) {
            r2 = this;
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.x509.Time r1 = new org.bouncycastle.asn1.x509.Time
            r1.<init>(r3)
            r0.setThisUpdate(r1)
            return
    }
}
