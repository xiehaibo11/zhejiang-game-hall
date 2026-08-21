package org.bouncycastle.jce;

public class PKCS7SignedData implements org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers {
    private final java.lang.String ID_DSA;
    private final java.lang.String ID_MD2;
    private final java.lang.String ID_MD5;
    private final java.lang.String ID_PKCS7_DATA;
    private final java.lang.String ID_PKCS7_SIGNED_DATA;
    private final java.lang.String ID_RSA;
    private final java.lang.String ID_SHA1;
    private java.util.Collection certs;
    private java.util.Collection crls;
    private byte[] digest;
    private java.lang.String digestAlgorithm;
    private java.lang.String digestEncryptionAlgorithm;
    private java.util.Set digestalgos;
    private transient java.security.PrivateKey privKey;
    private java.security.Signature sig;
    private java.security.cert.X509Certificate signCert;
    private int signerversion;
    private int version;

    public PKCS7SignedData(java.security.PrivateKey r2, java.security.cert.Certificate[] r3, java.lang.String r4) throws java.lang.SecurityException, java.security.InvalidKeyException, java.security.NoSuchProviderException, java.security.NoSuchAlgorithmException {
            r1 = this;
            java.lang.String r0 = "BC"
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public PKCS7SignedData(java.security.PrivateKey r7, java.security.cert.Certificate[] r8, java.lang.String r9, java.lang.String r10) throws java.lang.SecurityException, java.security.InvalidKeyException, java.security.NoSuchProviderException, java.security.NoSuchAlgorithmException {
            r6 = this;
            r3 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public PKCS7SignedData(java.security.PrivateKey r7, java.security.cert.Certificate[] r8, java.security.cert.CRL[] r9, java.lang.String r10, java.lang.String r11) throws java.lang.SecurityException, java.security.InvalidKeyException, java.security.NoSuchProviderException, java.security.NoSuchAlgorithmException {
            r6 = this;
            r6.<init>()
            java.lang.String r0 = "1.2.840.113549.1.7.1"
            r6.ID_PKCS7_DATA = r0
            java.lang.String r0 = "1.2.840.113549.1.7.2"
            r6.ID_PKCS7_SIGNED_DATA = r0
            java.lang.String r0 = "1.2.840.113549.2.5"
            r6.ID_MD5 = r0
            java.lang.String r1 = "1.2.840.113549.2.2"
            r6.ID_MD2 = r1
            java.lang.String r2 = "1.3.14.3.2.26"
            r6.ID_SHA1 = r2
            java.lang.String r3 = "1.2.840.113549.1.1.1"
            r6.ID_RSA = r3
            java.lang.String r4 = "1.2.840.10040.4.1"
            r6.ID_DSA = r4
            r6.privKey = r7
            java.lang.String r5 = "MD5"
            boolean r5 = r10.equals(r5)
            if (r5 == 0) goto L2c
            r6.digestAlgorithm = r0
            goto L4b
        L2c:
            java.lang.String r0 = "MD2"
            boolean r0 = r10.equals(r0)
            if (r0 == 0) goto L37
            r6.digestAlgorithm = r1
            goto L4b
        L37:
            java.lang.String r0 = "SHA"
            boolean r0 = r10.equals(r0)
            if (r0 == 0) goto L42
        L3f:
            r6.digestAlgorithm = r2
            goto L4b
        L42:
            java.lang.String r0 = "SHA1"
            boolean r0 = r10.equals(r0)
            if (r0 == 0) goto Ld2
            goto L3f
        L4b:
            r10 = 1
            r6.signerversion = r10
            r6.version = r10
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            r6.certs = r10
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            r6.crls = r10
            java.util.HashSet r10 = new java.util.HashSet
            r10.<init>()
            r6.digestalgos = r10
            java.lang.String r0 = r6.digestAlgorithm
            r10.add(r0)
            r10 = 0
            r0 = r8[r10]
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            r6.signCert = r0
            r0 = 0
        L72:
            int r1 = r8.length
            if (r0 >= r1) goto L7f
            java.util.Collection r1 = r6.certs
            r2 = r8[r0]
            r1.add(r2)
            int r0 = r0 + 1
            goto L72
        L7f:
            if (r9 == 0) goto L8e
        L81:
            int r8 = r9.length
            if (r10 >= r8) goto L8e
            java.util.Collection r8 = r6.crls
            r0 = r9[r10]
            r8.add(r0)
            int r10 = r10 + 1
            goto L81
        L8e:
            java.lang.String r8 = r7.getAlgorithm()
            r6.digestEncryptionAlgorithm = r8
            java.lang.String r9 = "RSA"
            boolean r8 = r8.equals(r9)
            if (r8 == 0) goto L9f
            r6.digestEncryptionAlgorithm = r3
            goto Lab
        L9f:
            java.lang.String r8 = r6.digestEncryptionAlgorithm
            java.lang.String r9 = "DSA"
            boolean r8 = r8.equals(r9)
            if (r8 == 0) goto Lb9
            r6.digestEncryptionAlgorithm = r4
        Lab:
            java.lang.String r8 = r6.getDigestAlgorithm()
            java.security.Signature r8 = java.security.Signature.getInstance(r8, r11)
            r6.sig = r8
            r8.initSign(r7)
            return
        Lb9:
            java.security.NoSuchAlgorithmException r7 = new java.security.NoSuchAlgorithmException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "Unknown Key Algorithm "
            r8.append(r9)
            java.lang.String r9 = r6.digestEncryptionAlgorithm
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        Ld2:
            java.security.NoSuchAlgorithmException r7 = new java.security.NoSuchAlgorithmException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "Unknown Hash Algorithm "
            r8.append(r9)
            r8.append(r10)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
    }

    public PKCS7SignedData(byte[] r2) throws java.lang.SecurityException, java.security.cert.CRLException, java.security.InvalidKeyException, java.security.NoSuchProviderException, java.security.NoSuchAlgorithmException {
            r1 = this;
            java.lang.String r0 = "BC"
            r1.<init>(r2, r0)
            return
    }

    public PKCS7SignedData(byte[] r6, java.lang.String r7) throws java.lang.SecurityException, java.security.cert.CRLException, java.security.InvalidKeyException, java.security.NoSuchProviderException, java.security.NoSuchAlgorithmException {
            r5 = this;
            r5.<init>()
            java.lang.String r0 = "1.2.840.113549.1.7.1"
            r5.ID_PKCS7_DATA = r0
            java.lang.String r0 = "1.2.840.113549.1.7.2"
            r5.ID_PKCS7_SIGNED_DATA = r0
            java.lang.String r0 = "1.2.840.113549.2.5"
            r5.ID_MD5 = r0
            java.lang.String r0 = "1.2.840.113549.2.2"
            r5.ID_MD2 = r0
            java.lang.String r0 = "1.3.14.3.2.26"
            r5.ID_SHA1 = r0
            java.lang.String r0 = "1.2.840.113549.1.1.1"
            r5.ID_RSA = r0
            java.lang.String r0 = "1.2.840.10040.4.1"
            r5.ID_DSA = r0
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream
            r1.<init>(r6)
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r6 = r0.readObject()     // Catch: java.io.IOException -> L1da
            boolean r0 = r6 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L1d2
            org.bouncycastle.asn1.pkcs.ContentInfo r6 = org.bouncycastle.asn1.pkcs.ContentInfo.getInstance(r6)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r6.getContentType()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.jce.PKCS7SignedData.signedData
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L1b3
            org.bouncycastle.asn1.DEREncodable r6 = r6.getContent()
            org.bouncycastle.asn1.pkcs.SignedData r6 = org.bouncycastle.asn1.pkcs.SignedData.getInstance(r6)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.certs = r0
            org.bouncycastle.asn1.ASN1Set r0 = r6.getCertificates()
            if (r0 == 0) goto L86
            org.bouncycastle.asn1.ASN1Set r0 = r6.getCertificates()
            org.bouncycastle.asn1.ASN1Set r0 = org.bouncycastle.asn1.ASN1Set.getInstance(r0)
            java.util.Enumeration r0 = r0.getObjects()
        L62:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto L86
            java.util.Collection r1 = r5.certs     // Catch: java.security.cert.CertificateParsingException -> L7b
            org.bouncycastle.jce.provider.X509CertificateObject r2 = new org.bouncycastle.jce.provider.X509CertificateObject     // Catch: java.security.cert.CertificateParsingException -> L7b
            java.lang.Object r3 = r0.nextElement()     // Catch: java.security.cert.CertificateParsingException -> L7b
            org.bouncycastle.asn1.x509.X509CertificateStructure r3 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r3)     // Catch: java.security.cert.CertificateParsingException -> L7b
            r2.<init>(r3)     // Catch: java.security.cert.CertificateParsingException -> L7b
            r1.add(r2)     // Catch: java.security.cert.CertificateParsingException -> L7b
            goto L62
        L7b:
            r6 = move-exception
            java.lang.SecurityException r7 = new java.lang.SecurityException
            java.lang.String r6 = r6.toString()
            r7.<init>(r6)
            throw r7
        L86:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.crls = r0
            org.bouncycastle.asn1.ASN1Set r0 = r6.getCRLs()
            if (r0 == 0) goto Lb8
            org.bouncycastle.asn1.ASN1Set r0 = r6.getCRLs()
            org.bouncycastle.asn1.ASN1Set r0 = org.bouncycastle.asn1.ASN1Set.getInstance(r0)
            java.util.Enumeration r0 = r0.getObjects()
        L9f:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto Lb8
            java.util.Collection r1 = r5.crls
            org.bouncycastle.jce.provider.X509CRLObject r2 = new org.bouncycastle.jce.provider.X509CRLObject
            java.lang.Object r3 = r0.nextElement()
            org.bouncycastle.asn1.x509.CertificateList r3 = org.bouncycastle.asn1.x509.CertificateList.getInstance(r3)
            r2.<init>(r3)
            r1.add(r2)
            goto L9f
        Lb8:
            org.bouncycastle.asn1.DERInteger r0 = r6.getVersion()
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            r5.version = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r5.digestalgos = r0
            org.bouncycastle.asn1.ASN1Set r0 = r6.getDigestAlgorithms()
            java.util.Enumeration r0 = r0.getObjects()
        Ld5:
            boolean r1 = r0.hasMoreElements()
            r2 = 0
            if (r1 == 0) goto Lf2
            java.lang.Object r1 = r0.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            org.bouncycastle.asn1.DEREncodable r1 = r1.getObjectAt(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = (org.bouncycastle.asn1.DERObjectIdentifier) r1
            java.util.Set r2 = r5.digestalgos
            java.lang.String r1 = r1.getId()
            r2.add(r1)
            goto Ld5
        Lf2:
            org.bouncycastle.asn1.ASN1Set r6 = r6.getSignerInfos()
            int r0 = r6.size()
            r1 = 1
            if (r0 != r1) goto L1ab
            org.bouncycastle.asn1.DEREncodable r6 = r6.getObjectAt(r2)
            org.bouncycastle.asn1.pkcs.SignerInfo r6 = org.bouncycastle.asn1.pkcs.SignerInfo.getInstance(r6)
            org.bouncycastle.asn1.DERInteger r0 = r6.getVersion()
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            r5.signerversion = r0
            org.bouncycastle.asn1.pkcs.IssuerAndSerialNumber r0 = r6.getIssuerAndSerialNumber()
            org.bouncycastle.asn1.DERInteger r1 = r0.getCertificateSerialNumber()
            java.math.BigInteger r1 = r1.getValue()
            org.bouncycastle.jce.X509Principal r2 = new org.bouncycastle.jce.X509Principal
            org.bouncycastle.asn1.x509.X509Name r0 = r0.getName()
            r2.<init>(r0)
            java.util.Collection r0 = r5.certs
            java.util.Iterator r0 = r0.iterator()
        L12e:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L150
            java.lang.Object r3 = r0.next()
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3
            java.math.BigInteger r4 = r3.getSerialNumber()
            boolean r4 = r1.equals(r4)
            if (r4 == 0) goto L12e
            java.security.Principal r4 = r3.getIssuerDN()
            boolean r4 = r2.equals(r4)
            if (r4 == 0) goto L12e
            r5.signCert = r3
        L150:
            java.security.cert.X509Certificate r0 = r5.signCert
            if (r0 == 0) goto L18e
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r6.getDigestAlgorithm()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            java.lang.String r0 = r0.getId()
            r5.digestAlgorithm = r0
            org.bouncycastle.asn1.ASN1OctetString r0 = r6.getEncryptedDigest()
            byte[] r0 = r0.getOctets()
            r5.digest = r0
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r6 = r6.getDigestEncryptionAlgorithm()
            org.bouncycastle.asn1.DERObjectIdentifier r6 = r6.getObjectId()
            java.lang.String r6 = r6.getId()
            r5.digestEncryptionAlgorithm = r6
            java.lang.String r6 = r5.getDigestAlgorithm()
            java.security.Signature r6 = java.security.Signature.getInstance(r6, r7)
            r5.sig = r6
            java.security.cert.X509Certificate r7 = r5.signCert
            java.security.PublicKey r7 = r7.getPublicKey()
            r6.initVerify(r7)
            return
        L18e:
            java.lang.SecurityException r6 = new java.lang.SecurityException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Can't find signing certificate with serial "
            r7.append(r0)
            r0 = 16
            java.lang.String r0 = r1.toString(r0)
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
        L1ab:
            java.lang.SecurityException r6 = new java.lang.SecurityException
            java.lang.String r7 = "This PKCS#7 object has multiple SignerInfos - only one is supported at this time"
            r6.<init>(r7)
            throw r6
        L1b3:
            java.lang.SecurityException r7 = new java.lang.SecurityException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Not a valid PKCS#7 signed-data object - wrong header "
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = r6.getContentType()
            java.lang.String r6 = r6.getId()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r7.<init>(r6)
            throw r7
        L1d2:
            java.lang.SecurityException r6 = new java.lang.SecurityException
            java.lang.String r7 = "Not a valid PKCS#7 object - not a sequence"
            r6.<init>(r7)
            throw r6
        L1da:
            java.lang.SecurityException r6 = new java.lang.SecurityException
            java.lang.String r7 = "can't decode PKCS7SignedData object"
            r6.<init>(r7)
            throw r6
    }

    private org.bouncycastle.asn1.DERObject getIssuer(byte[] r4) {
            r3 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.io.IOException -> L23
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.io.IOException -> L23
            r1.<init>(r4)     // Catch: java.io.IOException -> L23
            r0.<init>(r1)     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.DERObject r4 = r0.readObject()     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4     // Catch: java.io.IOException -> L23
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)     // Catch: java.io.IOException -> L23
            boolean r0 = r0 instanceof org.bouncycastle.asn1.DERTaggedObject     // Catch: java.io.IOException -> L23
            if (r0 == 0) goto L1b
            r0 = 3
            goto L1c
        L1b:
            r0 = 2
        L1c:
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r0)     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.DERObject r4 = (org.bouncycastle.asn1.DERObject) r4     // Catch: java.io.IOException -> L23
            return r4
        L23:
            r4 = move-exception
            java.lang.Error r0 = new java.lang.Error
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "IOException reading from ByteArray: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public java.util.Collection getCRLs() {
            r1 = this;
            java.util.Collection r0 = r1.crls
            return r0
    }

    public java.security.cert.Certificate[] getCertificates() {
            r2 = this;
            java.util.Collection r0 = r2.certs
            int r1 = r0.size()
            java.security.cert.X509Certificate[] r1 = new java.security.cert.X509Certificate[r1]
            java.lang.Object[] r0 = r0.toArray(r1)
            java.security.cert.X509Certificate[] r0 = (java.security.cert.X509Certificate[]) r0
            java.security.cert.X509Certificate[] r0 = (java.security.cert.X509Certificate[]) r0
            return r0
    }

    public java.lang.String getDigestAlgorithm() {
            r4 = this;
            java.lang.String r0 = r4.digestAlgorithm
            java.lang.String r1 = r4.digestEncryptionAlgorithm
            java.lang.String r2 = "1.2.840.113549.2.5"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto Lf
            java.lang.String r0 = "MD5"
            goto L28
        Lf:
            java.lang.String r2 = r4.digestAlgorithm
            java.lang.String r3 = "1.2.840.113549.2.2"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L1c
            java.lang.String r0 = "MD2"
            goto L28
        L1c:
            java.lang.String r2 = r4.digestAlgorithm
            java.lang.String r3 = "1.3.14.3.2.26"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L28
            java.lang.String r0 = "SHA1"
        L28:
            java.lang.String r2 = r4.digestEncryptionAlgorithm
            java.lang.String r3 = "1.2.840.113549.1.1.1"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L35
            java.lang.String r1 = "RSA"
            goto L41
        L35:
            java.lang.String r2 = r4.digestEncryptionAlgorithm
            java.lang.String r3 = "1.2.840.10040.4.1"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L41
            java.lang.String r1 = "DSA"
        L41:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "with"
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
            return r0
    }

    public byte[] getEncoded() {
            r8 = this;
            java.security.Signature r0 = r8.sig     // Catch: java.lang.Exception -> L17a
            byte[] r0 = r0.sign()     // Catch: java.lang.Exception -> L17a
            r8.digest = r0     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.lang.Exception -> L17a
            r0.<init>()     // Catch: java.lang.Exception -> L17a
            java.util.Set r1 = r8.digestalgos     // Catch: java.lang.Exception -> L17a
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L17a
        L13:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L17a
            if (r2 == 0) goto L2e
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERObjectIdentifier r3 = new org.bouncycastle.asn1.DERObjectIdentifier     // Catch: java.lang.Exception -> L17a
            java.lang.Object r4 = r1.next()     // Catch: java.lang.Exception -> L17a
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L17a
            r3.<init>(r4)     // Catch: java.lang.Exception -> L17a
            r4 = 0
            r2.<init>(r3, r4)     // Catch: java.lang.Exception -> L17a
            r0.add(r2)     // Catch: java.lang.Exception -> L17a
            goto L13
        L2e:
            org.bouncycastle.asn1.DERSet r1 = new org.bouncycastle.asn1.DERSet     // Catch: java.lang.Exception -> L17a
            r1.<init>(r0)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERObjectIdentifier r2 = new org.bouncycastle.asn1.DERObjectIdentifier     // Catch: java.lang.Exception -> L17a
            java.lang.String r3 = "1.2.840.113549.1.7.1"
            r2.<init>(r3)     // Catch: java.lang.Exception -> L17a
            r0.<init>(r2)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.ASN1EncodableVector r2 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.lang.Exception -> L17a
            r2.<init>()     // Catch: java.lang.Exception -> L17a
            java.util.Collection r3 = r8.certs     // Catch: java.lang.Exception -> L17a
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L17a
        L4a:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Exception -> L17a
            if (r4 == 0) goto L6c
            org.bouncycastle.asn1.ASN1InputStream r4 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L17a
            java.io.ByteArrayInputStream r5 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L17a
            java.lang.Object r6 = r3.next()     // Catch: java.lang.Exception -> L17a
            java.security.cert.X509Certificate r6 = (java.security.cert.X509Certificate) r6     // Catch: java.lang.Exception -> L17a
            byte[] r6 = r6.getEncoded()     // Catch: java.lang.Exception -> L17a
            r5.<init>(r6)     // Catch: java.lang.Exception -> L17a
            r4.<init>(r5)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERObject r4 = r4.readObject()     // Catch: java.lang.Exception -> L17a
            r2.add(r4)     // Catch: java.lang.Exception -> L17a
            goto L4a
        L6c:
            org.bouncycastle.asn1.DERSet r3 = new org.bouncycastle.asn1.DERSet     // Catch: java.lang.Exception -> L17a
            r3.<init>(r2)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.ASN1EncodableVector r2 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.lang.Exception -> L17a
            r2.<init>()     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERInteger r4 = new org.bouncycastle.asn1.DERInteger     // Catch: java.lang.Exception -> L17a
            int r5 = r8.signerversion     // Catch: java.lang.Exception -> L17a
            r4.<init>(r5)     // Catch: java.lang.Exception -> L17a
            r2.add(r4)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.pkcs.IssuerAndSerialNumber r4 = new org.bouncycastle.asn1.pkcs.IssuerAndSerialNumber     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.x509.X509Name r5 = new org.bouncycastle.asn1.x509.X509Name     // Catch: java.lang.Exception -> L17a
            java.security.cert.X509Certificate r6 = r8.signCert     // Catch: java.lang.Exception -> L17a
            byte[] r6 = r6.getTBSCertificate()     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERObject r6 = r8.getIssuer(r6)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.ASN1Sequence r6 = (org.bouncycastle.asn1.ASN1Sequence) r6     // Catch: java.lang.Exception -> L17a
            r5.<init>(r6)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERInteger r6 = new org.bouncycastle.asn1.DERInteger     // Catch: java.lang.Exception -> L17a
            java.security.cert.X509Certificate r7 = r8.signCert     // Catch: java.lang.Exception -> L17a
            java.math.BigInteger r7 = r7.getSerialNumber()     // Catch: java.lang.Exception -> L17a
            r6.<init>(r7)     // Catch: java.lang.Exception -> L17a
            r4.<init>(r5, r6)     // Catch: java.lang.Exception -> L17a
            r2.add(r4)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r4 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERObjectIdentifier r5 = new org.bouncycastle.asn1.DERObjectIdentifier     // Catch: java.lang.Exception -> L17a
            java.lang.String r6 = r8.digestAlgorithm     // Catch: java.lang.Exception -> L17a
            r5.<init>(r6)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERNull r6 = new org.bouncycastle.asn1.DERNull     // Catch: java.lang.Exception -> L17a
            r6.<init>()     // Catch: java.lang.Exception -> L17a
            r4.<init>(r5, r6)     // Catch: java.lang.Exception -> L17a
            r2.add(r4)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r4 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERObjectIdentifier r5 = new org.bouncycastle.asn1.DERObjectIdentifier     // Catch: java.lang.Exception -> L17a
            java.lang.String r6 = r8.digestEncryptionAlgorithm     // Catch: java.lang.Exception -> L17a
            r5.<init>(r6)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERNull r6 = new org.bouncycastle.asn1.DERNull     // Catch: java.lang.Exception -> L17a
            r6.<init>()     // Catch: java.lang.Exception -> L17a
            r4.<init>(r5, r6)     // Catch: java.lang.Exception -> L17a
            r2.add(r4)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DEROctetString r4 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.lang.Exception -> L17a
            byte[] r5 = r8.digest     // Catch: java.lang.Exception -> L17a
            r4.<init>(r5)     // Catch: java.lang.Exception -> L17a
            r2.add(r4)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.ASN1EncodableVector r4 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.lang.Exception -> L17a
            r4.<init>()     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERInteger r5 = new org.bouncycastle.asn1.DERInteger     // Catch: java.lang.Exception -> L17a
            int r6 = r8.version     // Catch: java.lang.Exception -> L17a
            r5.<init>(r6)     // Catch: java.lang.Exception -> L17a
            r4.add(r5)     // Catch: java.lang.Exception -> L17a
            r4.add(r1)     // Catch: java.lang.Exception -> L17a
            r4.add(r0)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject     // Catch: java.lang.Exception -> L17a
            r1 = 0
            r0.<init>(r1, r1, r3)     // Catch: java.lang.Exception -> L17a
            r4.add(r0)     // Catch: java.lang.Exception -> L17a
            java.util.Collection r0 = r8.crls     // Catch: java.lang.Exception -> L17a
            int r0 = r0.size()     // Catch: java.lang.Exception -> L17a
            if (r0 <= 0) goto L137
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.lang.Exception -> L17a
            r0.<init>()     // Catch: java.lang.Exception -> L17a
            java.util.Collection r3 = r8.crls     // Catch: java.lang.Exception -> L17a
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L17a
        L107:
            boolean r5 = r3.hasNext()     // Catch: java.lang.Exception -> L17a
            if (r5 == 0) goto L129
            org.bouncycastle.asn1.ASN1InputStream r5 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L17a
            java.io.ByteArrayInputStream r6 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L17a
            java.lang.Object r7 = r3.next()     // Catch: java.lang.Exception -> L17a
            java.security.cert.X509CRL r7 = (java.security.cert.X509CRL) r7     // Catch: java.lang.Exception -> L17a
            byte[] r7 = r7.getEncoded()     // Catch: java.lang.Exception -> L17a
            r6.<init>(r7)     // Catch: java.lang.Exception -> L17a
            r5.<init>(r6)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERObject r5 = r5.readObject()     // Catch: java.lang.Exception -> L17a
            r0.add(r5)     // Catch: java.lang.Exception -> L17a
            goto L107
        L129:
            org.bouncycastle.asn1.DERSet r3 = new org.bouncycastle.asn1.DERSet     // Catch: java.lang.Exception -> L17a
            r3.<init>(r0)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject     // Catch: java.lang.Exception -> L17a
            r5 = 1
            r0.<init>(r1, r5, r3)     // Catch: java.lang.Exception -> L17a
            r4.add(r0)     // Catch: java.lang.Exception -> L17a
        L137:
            org.bouncycastle.asn1.DERSet r0 = new org.bouncycastle.asn1.DERSet     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERSequence r3 = new org.bouncycastle.asn1.DERSequence     // Catch: java.lang.Exception -> L17a
            r3.<init>(r2)     // Catch: java.lang.Exception -> L17a
            r0.<init>(r3)     // Catch: java.lang.Exception -> L17a
            r4.add(r0)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.lang.Exception -> L17a
            r0.<init>()     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERObjectIdentifier r2 = new org.bouncycastle.asn1.DERObjectIdentifier     // Catch: java.lang.Exception -> L17a
            java.lang.String r3 = "1.2.840.113549.1.7.2"
            r2.<init>(r3)     // Catch: java.lang.Exception -> L17a
            r0.add(r2)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERTaggedObject r2 = new org.bouncycastle.asn1.DERTaggedObject     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERSequence r3 = new org.bouncycastle.asn1.DERSequence     // Catch: java.lang.Exception -> L17a
            r3.<init>(r4)     // Catch: java.lang.Exception -> L17a
            r2.<init>(r1, r3)     // Catch: java.lang.Exception -> L17a
            r0.add(r2)     // Catch: java.lang.Exception -> L17a
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L17a
            r1.<init>()     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DEROutputStream r2 = new org.bouncycastle.asn1.DEROutputStream     // Catch: java.lang.Exception -> L17a
            r2.<init>(r1)     // Catch: java.lang.Exception -> L17a
            org.bouncycastle.asn1.DERSequence r3 = new org.bouncycastle.asn1.DERSequence     // Catch: java.lang.Exception -> L17a
            r3.<init>(r0)     // Catch: java.lang.Exception -> L17a
            r2.writeObject(r3)     // Catch: java.lang.Exception -> L17a
            r2.close()     // Catch: java.lang.Exception -> L17a
            byte[] r0 = r1.toByteArray()     // Catch: java.lang.Exception -> L17a
            return r0
        L17a:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
    }

    public java.security.cert.X509Certificate getSigningCertificate() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.signCert
            return r0
    }

    public int getSigningInfoVersion() {
            r1 = this;
            int r0 = r1.signerversion
            return r0
    }

    public int getVersion() {
            r1 = this;
            int r0 = r1.version
            return r0
    }

    public void reset() {
            r2 = this;
            java.security.PrivateKey r0 = r2.privKey     // Catch: java.lang.Exception -> L18
            if (r0 != 0) goto L10
            java.security.Signature r0 = r2.sig     // Catch: java.lang.Exception -> L18
            java.security.cert.X509Certificate r1 = r2.signCert     // Catch: java.lang.Exception -> L18
            java.security.PublicKey r1 = r1.getPublicKey()     // Catch: java.lang.Exception -> L18
            r0.initVerify(r1)     // Catch: java.lang.Exception -> L18
            goto L17
        L10:
            java.security.Signature r0 = r2.sig     // Catch: java.lang.Exception -> L18
            java.security.PrivateKey r1 = r2.privKey     // Catch: java.lang.Exception -> L18
            r0.initSign(r1)     // Catch: java.lang.Exception -> L18
        L17:
            return
        L18:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
    }

    public void update(byte r2) throws java.security.SignatureException {
            r1 = this;
            java.security.Signature r0 = r1.sig
            r0.update(r2)
            return
    }

    public void update(byte[] r2, int r3, int r4) throws java.security.SignatureException {
            r1 = this;
            java.security.Signature r0 = r1.sig
            r0.update(r2, r3, r4)
            return
    }

    public boolean verify() throws java.security.SignatureException {
            r2 = this;
            java.security.Signature r0 = r2.sig
            byte[] r1 = r2.digest
            boolean r0 = r0.verify(r1)
            return r0
    }
}
