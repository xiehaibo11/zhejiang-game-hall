package org.bouncycastle.jce;

public class X509V2CRLGenerator {
    private static java.util.Hashtable algorithms;
    private java.text.SimpleDateFormat dateF;
    private java.util.Vector extOrdering;
    private java.util.Hashtable extensions;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier sigAlgId;
    private org.bouncycastle.asn1.DERObjectIdentifier sigOID;
    private java.lang.String signatureAlgorithm;
    private org.bouncycastle.asn1.x509.V2TBSCertListGenerator tbsGen;
    private java.util.SimpleTimeZone tz;

    static {
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.jce.X509V2CRLGenerator.algorithms = r0
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r2 = "1.2.840.113549.1.1.2"
            r1.<init>(r2)
            java.lang.String r3 = "MD2WITHRSAENCRYPTION"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V2CRLGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            java.lang.String r2 = "MD2WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V2CRLGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r2 = "1.2.840.113549.1.1.4"
            r1.<init>(r2)
            java.lang.String r3 = "MD5WITHRSAENCRYPTION"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V2CRLGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            java.lang.String r2 = "MD5WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V2CRLGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r2 = "1.2.840.113549.1.1.5"
            r1.<init>(r2)
            java.lang.String r3 = "SHA1WITHRSAENCRYPTION"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V2CRLGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            java.lang.String r2 = "SHA1WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V2CRLGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r2 = "1.3.36.3.3.1.2"
            r1.<init>(r2)
            java.lang.String r3 = "RIPEMD160WITHRSAENCRYPTION"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V2CRLGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            java.lang.String r2 = "RIPEMD160WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V2CRLGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r2 = "1.2.840.10040.4.3"
            r1.<init>(r2)
            java.lang.String r3 = "SHA1WITHDSA"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V2CRLGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            java.lang.String r2 = "DSAWITHSHA1"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V2CRLGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r2 = "1.2.840.10045.4.1"
            r1.<init>(r2)
            java.lang.String r3 = "SHA1WITHECDSA"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V2CRLGenerator.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            java.lang.String r2 = "ECDSAWITHSHA1"
            r0.put(r2, r1)
            return
    }

    public X509V2CRLGenerator() {
            r3 = this;
            r3.<init>()
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyMMddHHmmss"
            r0.<init>(r1)
            r3.dateF = r0
            java.util.SimpleTimeZone r0 = new java.util.SimpleTimeZone
            r1 = 0
            java.lang.String r2 = "Z"
            r0.<init>(r1, r2)
            r3.tz = r0
            r1 = 0
            r3.extensions = r1
            r3.extOrdering = r1
            java.text.SimpleDateFormat r1 = r3.dateF
            r1.setTimeZone(r0)
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = new org.bouncycastle.asn1.x509.V2TBSCertListGenerator
            r0.<init>()
            r3.tbsGen = r0
            return
    }

    public void addCRLEntry(java.math.BigInteger r5, java.util.Date r6, int r7) {
            r4 = this;
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r4.tbsGen
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r5)
            org.bouncycastle.asn1.DERUTCTime r5 = new org.bouncycastle.asn1.DERUTCTime
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.text.SimpleDateFormat r3 = r4.dateF
            java.lang.String r6 = r3.format(r6)
            r2.append(r6)
            java.lang.String r6 = "Z"
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            r5.<init>(r6)
            r0.addCRLEntry(r1, r5, r7)
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

    public void addExtension(org.bouncycastle.asn1.DERObjectIdentifier r3, boolean r4, org.bouncycastle.asn1.DEREncodable r5) {
            r2 = this;
            java.util.Hashtable r0 = r2.extensions
            if (r0 != 0) goto L12
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r2.extensions = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r2.extOrdering = r0
        L12:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
            r1.<init>(r0)
            r1.writeObject(r5)     // Catch: java.io.IOException -> L27
            byte[] r5 = r0.toByteArray()
            r2.addExtension(r3, r4, r5)
            return
        L27:
            r3 = move-exception
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "error encoding value: "
            r5.append(r0)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
    }

    public void addExtension(org.bouncycastle.asn1.DERObjectIdentifier r4, boolean r5, byte[] r6) {
            r3 = this;
            java.util.Hashtable r0 = r3.extensions
            if (r0 != 0) goto L12
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r3.extensions = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r3.extOrdering = r0
        L12:
            java.util.Hashtable r0 = r3.extensions
            org.bouncycastle.asn1.x509.X509Extension r1 = new org.bouncycastle.asn1.x509.X509Extension
            org.bouncycastle.asn1.DEROctetString r2 = new org.bouncycastle.asn1.DEROctetString
            r2.<init>(r6)
            r1.<init>(r5, r2)
            r0.put(r4, r1)
            java.util.Vector r5 = r3.extOrdering
            r5.addElement(r4)
            return
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

    public java.security.cert.X509CRL generateX509CRL(java.security.PrivateKey r3, java.lang.String r4, java.security.SecureRandom r5) throws java.security.NoSuchProviderException, java.lang.SecurityException, java.security.SignatureException, java.security.InvalidKeyException {
            r2 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r2.sigOID     // Catch: java.security.NoSuchAlgorithmException -> Lb
            java.lang.String r0 = r0.getId()     // Catch: java.security.NoSuchAlgorithmException -> Lb
            java.security.Signature r4 = java.security.Signature.getInstance(r0, r4)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            goto L11
        Lb:
            java.lang.String r0 = r2.signatureAlgorithm     // Catch: java.security.NoSuchAlgorithmException -> La3
            java.security.Signature r4 = java.security.Signature.getInstance(r0, r4)     // Catch: java.security.NoSuchAlgorithmException -> La3
        L11:
            if (r5 == 0) goto L17
            r4.initSign(r3, r5)
            goto L1a
        L17:
            r4.initSign(r3)
        L1a:
            java.util.Hashtable r3 = r2.extensions
            if (r3 == 0) goto L2c
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r3 = r2.tbsGen
            org.bouncycastle.asn1.x509.X509Extensions r5 = new org.bouncycastle.asn1.x509.X509Extensions
            java.util.Vector r0 = r2.extOrdering
            java.util.Hashtable r1 = r2.extensions
            r5.<init>(r0, r1)
            r3.setExtensions(r5)
        L2c:
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r3 = r2.tbsGen
            org.bouncycastle.asn1.x509.TBSCertList r3 = r3.generateTBSCertList()
            java.io.ByteArrayOutputStream r5 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L8b
            r5.<init>()     // Catch: java.lang.Exception -> L8b
            org.bouncycastle.asn1.DEROutputStream r0 = new org.bouncycastle.asn1.DEROutputStream     // Catch: java.lang.Exception -> L8b
            r0.<init>(r5)     // Catch: java.lang.Exception -> L8b
            r0.writeObject(r3)     // Catch: java.lang.Exception -> L8b
            byte[] r5 = r5.toByteArray()     // Catch: java.lang.Exception -> L8b
            r4.update(r5)     // Catch: java.lang.Exception -> L8b
            org.bouncycastle.asn1.ASN1EncodableVector r5 = new org.bouncycastle.asn1.ASN1EncodableVector
            r5.<init>()
            r5.add(r3)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = r2.sigAlgId
            r5.add(r3)
            org.bouncycastle.asn1.DERBitString r3 = new org.bouncycastle.asn1.DERBitString
            byte[] r4 = r4.sign()
            r3.<init>(r4)
            r5.add(r3)
            org.bouncycastle.jce.provider.X509CRLObject r3 = new org.bouncycastle.jce.provider.X509CRLObject     // Catch: java.security.cert.CRLException -> L6f
            org.bouncycastle.asn1.x509.CertificateList r4 = new org.bouncycastle.asn1.x509.CertificateList     // Catch: java.security.cert.CRLException -> L6f
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence     // Catch: java.security.cert.CRLException -> L6f
            r0.<init>(r5)     // Catch: java.security.cert.CRLException -> L6f
            r4.<init>(r0)     // Catch: java.security.cert.CRLException -> L6f
            r3.<init>(r4)     // Catch: java.security.cert.CRLException -> L6f
            return r3
        L6f:
            r3 = move-exception
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "attempt to create malformed CRL: "
            r5.append(r0)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
        L8b:
            r3 = move-exception
            java.lang.SecurityException r4 = new java.lang.SecurityException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "exception encoding TBS cert - "
            r5.append(r0)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
        La3:
            r3 = move-exception
            java.lang.SecurityException r4 = new java.lang.SecurityException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "exception creating signature: "
            r5.append(r0)
            java.lang.String r3 = r3.toString()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
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

    public void reset() {
            r1 = this;
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = new org.bouncycastle.asn1.x509.V2TBSCertListGenerator
            r0.<init>()
            r1.tbsGen = r0
            return
    }

    public void setIssuerDN(org.bouncycastle.asn1.x509.X509Name r2) {
            r1 = this;
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r1.tbsGen
            r0.setIssuer(r2)
            return
    }

    public void setNextUpdate(java.util.Date r5) {
            r4 = this;
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r4.tbsGen
            org.bouncycastle.asn1.DERUTCTime r1 = new org.bouncycastle.asn1.DERUTCTime
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.text.SimpleDateFormat r3 = r4.dateF
            java.lang.String r5 = r3.format(r5)
            r2.append(r5)
            java.lang.String r5 = "Z"
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r1.<init>(r5)
            r0.setNextUpdate(r1)
            return
    }

    public void setSignatureAlgorithm(java.lang.String r3) {
            r2 = this;
            r2.signatureAlgorithm = r3
            java.util.Hashtable r0 = org.bouncycastle.jce.X509V2CRLGenerator.algorithms
            java.lang.String r3 = org.bouncycastle.util.Strings.toUpperCase(r3)
            java.lang.Object r3 = r0.get(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            r2.sigOID = r3
            if (r3 == 0) goto L22
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r2.sigOID
            r1 = 0
            r3.<init>(r0, r1)
            r2.sigAlgId = r3
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r2.tbsGen
            r0.setSignature(r3)
            return
        L22:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Unknown signature type requested"
            r3.<init>(r0)
            throw r3
    }

    public void setThisUpdate(java.util.Date r5) {
            r4 = this;
            org.bouncycastle.asn1.x509.V2TBSCertListGenerator r0 = r4.tbsGen
            org.bouncycastle.asn1.DERUTCTime r1 = new org.bouncycastle.asn1.DERUTCTime
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.text.SimpleDateFormat r3 = r4.dateF
            java.lang.String r5 = r3.format(r5)
            r2.append(r5)
            java.lang.String r5 = "Z"
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r1.<init>(r5)
            r0.setThisUpdate(r1)
            return
    }
}
