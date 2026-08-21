package org.bouncycastle.jce;

public class X509V1CertificateGenerator {
    private static java.util.Hashtable algorithms;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier sigAlgId;
    private org.bouncycastle.asn1.DERObjectIdentifier sigOID;
    private java.lang.String signatureAlgorithm;
    private org.bouncycastle.asn1.x509.V1TBSCertificateGenerator tbsGen;

    static {
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.jce.X509V1CertificateGenerator.algorithms = r0
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r2 = "1.2.840.113549.1.1.2"
            r1.<init>(r2)
            java.lang.String r3 = "MD2WITHRSAENCRYPTION"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V1CertificateGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            java.lang.String r2 = "MD2WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V1CertificateGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r2 = "1.2.840.113549.1.1.4"
            r1.<init>(r2)
            java.lang.String r3 = "MD5WITHRSAENCRYPTION"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V1CertificateGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            java.lang.String r2 = "MD5WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V1CertificateGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r2 = "1.2.840.113549.1.1.5"
            r1.<init>(r2)
            java.lang.String r3 = "SHA1WITHRSAENCRYPTION"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V1CertificateGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            java.lang.String r2 = "SHA1WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V1CertificateGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r2 = "1.3.36.3.3.1.2"
            r1.<init>(r2)
            java.lang.String r3 = "RIPEMD160WITHRSAENCRYPTION"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V1CertificateGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            java.lang.String r2 = "RIPEMD160WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V1CertificateGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r2 = "1.2.840.10040.4.3"
            r1.<init>(r2)
            java.lang.String r3 = "SHA1WITHDSA"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V1CertificateGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            java.lang.String r2 = "DSAWITHSHA1"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V1CertificateGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r2 = "1.2.840.10045.4.1"
            r1.<init>(r2)
            java.lang.String r3 = "SHA1WITHECDSA"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V1CertificateGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            java.lang.String r2 = "ECDSAWITHSHA1"
            r0.put(r2, r1)
            return
    }

    public X509V1CertificateGenerator() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = new org.bouncycastle.asn1.x509.V1TBSCertificateGenerator
            r0.<init>()
            r1.tbsGen = r0
            return
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
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.sigOID     // Catch: java.security.NoSuchAlgorithmException -> Lb
            java.lang.String r0 = r0.getId()     // Catch: java.security.NoSuchAlgorithmException -> Lb
            java.security.Signature r3 = java.security.Signature.getInstance(r0, r3)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            goto L11
        Lb:
            java.lang.String r0 = r1.signatureAlgorithm     // Catch: java.security.NoSuchAlgorithmException -> L75
            java.security.Signature r3 = java.security.Signature.getInstance(r0, r3)     // Catch: java.security.NoSuchAlgorithmException -> L75
        L11:
            if (r4 == 0) goto L17
            r3.initSign(r2, r4)
            goto L1a
        L17:
            r3.initSign(r2)
        L1a:
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r2 = r1.tbsGen
            org.bouncycastle.asn1.x509.TBSCertificateStructure r2 = r2.generateTBSCertificate()
            java.io.ByteArrayOutputStream r4 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L5d
            r4.<init>()     // Catch: java.lang.Exception -> L5d
            org.bouncycastle.asn1.DEROutputStream r0 = new org.bouncycastle.asn1.DEROutputStream     // Catch: java.lang.Exception -> L5d
            r0.<init>(r4)     // Catch: java.lang.Exception -> L5d
            r0.writeObject(r2)     // Catch: java.lang.Exception -> L5d
            byte[] r4 = r4.toByteArray()     // Catch: java.lang.Exception -> L5d
            r3.update(r4)     // Catch: java.lang.Exception -> L5d
            org.bouncycastle.asn1.ASN1EncodableVector r4 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.lang.Exception -> L5d
            r4.<init>()     // Catch: java.lang.Exception -> L5d
            r4.add(r2)     // Catch: java.lang.Exception -> L5d
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = r1.sigAlgId     // Catch: java.lang.Exception -> L5d
            r4.add(r2)     // Catch: java.lang.Exception -> L5d
            org.bouncycastle.asn1.DERBitString r2 = new org.bouncycastle.asn1.DERBitString     // Catch: java.lang.Exception -> L5d
            byte[] r3 = r3.sign()     // Catch: java.lang.Exception -> L5d
            r2.<init>(r3)     // Catch: java.lang.Exception -> L5d
            r4.add(r2)     // Catch: java.lang.Exception -> L5d
            org.bouncycastle.jce.provider.X509CertificateObject r2 = new org.bouncycastle.jce.provider.X509CertificateObject     // Catch: java.lang.Exception -> L5d
            org.bouncycastle.asn1.x509.X509CertificateStructure r3 = new org.bouncycastle.asn1.x509.X509CertificateStructure     // Catch: java.lang.Exception -> L5d
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence     // Catch: java.lang.Exception -> L5d
            r0.<init>(r4)     // Catch: java.lang.Exception -> L5d
            r3.<init>(r0)     // Catch: java.lang.Exception -> L5d
            r2.<init>(r3)     // Catch: java.lang.Exception -> L5d
            return r2
        L5d:
            r2 = move-exception
            java.lang.SecurityException r3 = new java.lang.SecurityException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "exception encoding TBS cert - "
            r4.append(r0)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.<init>(r2)
            throw r3
        L75:
            r2 = move-exception
            java.lang.SecurityException r3 = new java.lang.SecurityException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "exception creating signature: "
            r4.append(r0)
            java.lang.String r2 = r2.toString()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.<init>(r2)
            throw r3
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

    public void reset() {
            r1 = this;
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = new org.bouncycastle.asn1.x509.V1TBSCertificateGenerator
            r0.<init>()
            r1.tbsGen = r0
            return
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
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r2.tbsGen
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r3)
            r0.setSerialNumber(r1)
            return
    }

    public void setSignatureAlgorithm(java.lang.String r3) {
            r2 = this;
            r2.signatureAlgorithm = r3
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V1CertificateGenerator.algorithms
            java.lang.String r3 = org.bouncycastle.util.Strings.toUpperCase(r3)
            java.lang.Object r3 = r0.get(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            r2.sigOID = r3
            if (r3 == 0) goto L26
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r2.sigOID
            org.bouncycastle.asn1.DERNull r1 = new org.bouncycastle.asn1.DERNull
            r1.<init>()
            r3.<init>(r0, r1)
            r2.sigAlgId = r3
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r2.tbsGen
            r0.setSignature(r3)
            return
        L26:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Unknown signature type requested"
            r3.<init>(r0)
            throw r3
    }

    public void setSubjectDN(org.bouncycastle.asn1.x509.X509Name r2) {
            r1 = this;
            org.bouncycastle.asn1.x509.V1TBSCertificateGenerator r0 = r1.tbsGen
            r0.setSubject(r2)
            return
    }
}
