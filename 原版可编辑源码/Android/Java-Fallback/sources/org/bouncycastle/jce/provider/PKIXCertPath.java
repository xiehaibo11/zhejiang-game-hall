package org.bouncycastle.jce.provider;

public class PKIXCertPath extends java.security.cert.CertPath {
    static final java.util.List certPathEncodings = null;
    private java.util.List certificates;

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "PkiPath"
            r0.add(r1)
            java.lang.String r1 = "PEM"
            r0.add(r1)
            java.lang.String r1 = "PKCS7"
            r0.add(r1)
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            org.bouncycastle.jce.provider.PKIXCertPath.certPathEncodings = r0
            return
    }

    PKIXCertPath(java.io.InputStream r4, java.lang.String r5) throws java.security.cert.CertificateException {
            r3 = this;
            java.lang.String r0 = "X.509"
            r3.<init>(r0)
            java.lang.String r1 = "PkiPath"
            boolean r1 = r5.equalsIgnoreCase(r1)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            java.lang.String r2 = "BC"
            if (r1 == 0) goto L63
            org.bouncycastle.asn1.ASN1InputStream r5 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r5.<init>(r4)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            org.bouncycastle.asn1.DERObject r4 = r5.readObject()     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            boolean r5 = r4 instanceof org.bouncycastle.asn1.ASN1Sequence     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            if (r5 == 0) goto L5b
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            java.util.Enumeration r4 = r4.getObjects()     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r5.<init>()     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r3.certificates = r5     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            java.security.cert.CertificateFactory r5 = java.security.cert.CertificateFactory.getInstance(r0, r2)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
        L2d:
            boolean r0 = r4.hasMoreElements()     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            if (r0 == 0) goto La7
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r0.<init>()     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r1.<init>(r0)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            java.lang.Object r2 = r4.nextElement()     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r1.writeObject(r2)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r1.close()     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            byte[] r0 = r0.toByteArray()     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r1.<init>(r0)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            java.util.List r0 = r3.certificates     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r2 = 0
            java.security.cert.Certificate r1 = r5.generateCertificate(r1)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r0.add(r2, r1)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            goto L2d
        L5b:
            java.security.cert.CertificateException r4 = new java.security.cert.CertificateException     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            java.lang.String r5 = "input stream does not contain a ASN1 SEQUENCE while reading PkiPath encoded data to load CertPath"
            r4.<init>(r5)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            throw r4     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
        L63:
            java.lang.String r1 = "PKCS7"
            boolean r1 = r5.equalsIgnoreCase(r1)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            if (r1 != 0) goto L8b
            java.lang.String r1 = "PEM"
            boolean r1 = r5.equalsIgnoreCase(r1)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            if (r1 == 0) goto L74
            goto L8b
        L74:
            java.security.cert.CertificateException r4 = new java.security.cert.CertificateException     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r0.<init>()     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            java.lang.String r1 = "unsupported encoding: "
            r0.append(r1)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r0.append(r5)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            java.lang.String r5 = r0.toString()     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r4.<init>(r5)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            throw r4     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
        L8b:
            java.io.BufferedInputStream r5 = new java.io.BufferedInputStream     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r5.<init>(r4)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r4.<init>()     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r3.certificates = r4     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            java.security.cert.CertificateFactory r4 = java.security.cert.CertificateFactory.getInstance(r0, r2)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
        L9b:
            java.security.cert.Certificate r0 = r4.generateCertificate(r5)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            if (r0 == 0) goto La7
            java.util.List r1 = r3.certificates     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            r1.add(r0)     // Catch: java.security.NoSuchProviderException -> Lb0 java.io.IOException -> Lcc
            goto L9b
        La7:
            java.util.List r4 = r3.certificates
            java.util.List r4 = r3.sortCerts(r4)
            r3.certificates = r4
            return
        Lb0:
            r4 = move-exception
            java.security.cert.CertificateException r5 = new java.security.cert.CertificateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "BouncyCastle provider not found while trying to get a CertificateFactory:\n"
            r0.append(r1)
            java.lang.String r4 = r4.toString()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
        Lcc:
            r4 = move-exception
            java.security.cert.CertificateException r5 = new java.security.cert.CertificateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "IOException throw while decoding CertPath:\n"
            r0.append(r1)
            java.lang.String r4 = r4.toString()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
    }

    PKIXCertPath(java.util.List r2) {
            r1 = this;
            java.lang.String r0 = "X.509"
            r1.<init>(r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r2)
            java.util.List r2 = r1.sortCerts(r0)
            r1.certificates = r2
            return
    }

    private java.util.List sortCerts(java.util.List r10) {
            r9 = this;
            int r0 = r10.size()
            r1 = 2
            if (r0 >= r1) goto L8
            return r10
        L8:
            r0 = 0
            java.lang.Object r1 = r10.get(r0)
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1
            javax.security.auth.x500.X500Principal r1 = r1.getIssuerX500Principal()
            r2 = 1
            r3 = 1
        L15:
            int r4 = r10.size()
            if (r3 == r4) goto L3a
            java.lang.Object r4 = r10.get(r3)
            java.security.cert.X509Certificate r4 = (java.security.cert.X509Certificate) r4
            javax.security.auth.x500.X500Principal r4 = r4.getSubjectX500Principal()
            boolean r1 = r1.equals(r4)
            if (r1 == 0) goto L38
            java.lang.Object r1 = r10.get(r3)
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1
            javax.security.auth.x500.X500Principal r1 = r1.getIssuerX500Principal()
            int r3 = r3 + 1
            goto L15
        L38:
            r1 = 0
            goto L3b
        L3a:
            r1 = 1
        L3b:
            if (r1 == 0) goto L3e
            return r10
        L3e:
            java.util.ArrayList r1 = new java.util.ArrayList
            int r3 = r10.size()
            r1.<init>(r3)
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>(r10)
            r4 = 0
        L4d:
            int r5 = r10.size()
            if (r4 >= r5) goto L85
            java.lang.Object r5 = r10.get(r4)
            java.security.cert.X509Certificate r5 = (java.security.cert.X509Certificate) r5
            javax.security.auth.x500.X500Principal r6 = r5.getSubjectX500Principal()
            r7 = 0
        L5e:
            int r8 = r10.size()
            if (r7 == r8) goto L79
            java.lang.Object r8 = r10.get(r7)
            java.security.cert.X509Certificate r8 = (java.security.cert.X509Certificate) r8
            javax.security.auth.x500.X500Principal r8 = r8.getIssuerX500Principal()
            boolean r8 = r8.equals(r6)
            if (r8 == 0) goto L76
            r6 = 1
            goto L7a
        L76:
            int r7 = r7 + 1
            goto L5e
        L79:
            r6 = 0
        L7a:
            if (r6 != 0) goto L82
            r1.add(r5)
            r10.remove(r4)
        L82:
            int r4 = r4 + 1
            goto L4d
        L85:
            int r4 = r1.size()
            if (r4 <= r2) goto L8c
            return r3
        L8c:
            r2 = 0
        L8d:
            int r4 = r1.size()
            if (r2 == r4) goto Lc1
            java.lang.Object r4 = r1.get(r2)
            java.security.cert.X509Certificate r4 = (java.security.cert.X509Certificate) r4
            javax.security.auth.x500.X500Principal r4 = r4.getIssuerX500Principal()
            r5 = 0
        L9e:
            int r6 = r10.size()
            if (r5 >= r6) goto Lbe
            java.lang.Object r6 = r10.get(r5)
            java.security.cert.X509Certificate r6 = (java.security.cert.X509Certificate) r6
            javax.security.auth.x500.X500Principal r7 = r6.getSubjectX500Principal()
            boolean r7 = r4.equals(r7)
            if (r7 == 0) goto Lbb
            r1.add(r6)
            r10.remove(r5)
            goto Lbe
        Lbb:
            int r5 = r5 + 1
            goto L9e
        Lbe:
            int r2 = r2 + 1
            goto L8d
        Lc1:
            int r10 = r10.size()
            if (r10 <= 0) goto Lc8
            return r3
        Lc8:
            return r1
    }

    private org.bouncycastle.asn1.DERObject toASN1Object(java.security.cert.X509Certificate r4) throws java.security.cert.CertificateEncodingException {
            r3 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> Le
            byte[] r4 = r4.getEncoded()     // Catch: java.lang.Exception -> Le
            r0.<init>(r4)     // Catch: java.lang.Exception -> Le
            org.bouncycastle.asn1.DERObject r4 = r0.readObject()     // Catch: java.lang.Exception -> Le
            return r4
        Le:
            r4 = move-exception
            java.security.cert.CertificateEncodingException r0 = new java.security.cert.CertificateEncodingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Exception while encoding certificate: "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private byte[] toDEREncoded(org.bouncycastle.asn1.ASN1Encodable r4) throws java.security.cert.CertificateEncodingException {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> L15
            r0.<init>()     // Catch: java.io.IOException -> L15
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream     // Catch: java.io.IOException -> L15
            r1.<init>(r0)     // Catch: java.io.IOException -> L15
            r1.writeObject(r4)     // Catch: java.io.IOException -> L15
            r1.close()     // Catch: java.io.IOException -> L15
            byte[] r4 = r0.toByteArray()     // Catch: java.io.IOException -> L15
            return r4
        L15:
            r4 = move-exception
            java.security.cert.CertificateEncodingException r0 = new java.security.cert.CertificateEncodingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Exeption thrown: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public java.util.List getCertificates() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List r1 = r2.certificates
            r0.<init>(r1)
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            return r0
    }

    @Override
    public byte[] getEncoded() throws java.security.cert.CertificateEncodingException {
            r2 = this;
            java.util.Iterator r0 = r2.getEncodings()
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L19
            java.lang.Object r0 = r0.next()
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto L19
            java.lang.String r0 = (java.lang.String) r0
            byte[] r0 = r2.getEncoded(r0)
            return r0
        L19:
            r0 = 0
            return r0
    }

    @Override
    public byte[] getEncoded(java.lang.String r10) throws java.security.cert.CertificateEncodingException {
            r9 = this;
            java.lang.String r0 = "PkiPath"
            boolean r0 = r10.equalsIgnoreCase(r0)
            if (r0 == 0) goto L35
            org.bouncycastle.asn1.ASN1EncodableVector r10 = new org.bouncycastle.asn1.ASN1EncodableVector
            r10.<init>()
            java.util.List r0 = r9.certificates
            int r1 = r0.size()
            java.util.ListIterator r0 = r0.listIterator(r1)
        L17:
            boolean r1 = r0.hasPrevious()
            if (r1 == 0) goto L2b
            java.lang.Object r1 = r0.previous()
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1
            org.bouncycastle.asn1.DERObject r1 = r9.toASN1Object(r1)
            r10.add(r1)
            goto L17
        L2b:
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence
            r0.<init>(r10)
            byte[] r10 = r9.toDEREncoded(r0)
            return r10
        L35:
            java.lang.String r0 = "PKCS7"
            boolean r0 = r10.equalsIgnoreCase(r0)
            r1 = 0
            if (r0 == 0) goto L8d
            org.bouncycastle.asn1.pkcs.ContentInfo r5 = new org.bouncycastle.asn1.pkcs.ContentInfo
            org.bouncycastle.asn1.DERObjectIdentifier r10 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.data
            r0 = 0
            r5.<init>(r10, r0)
            org.bouncycastle.asn1.ASN1EncodableVector r10 = new org.bouncycastle.asn1.ASN1EncodableVector
            r10.<init>()
        L4b:
            java.util.List r0 = r9.certificates
            int r0 = r0.size()
            if (r1 == r0) goto L65
            java.util.List r0 = r9.certificates
            java.lang.Object r0 = r0.get(r1)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            org.bouncycastle.asn1.DERObject r0 = r9.toASN1Object(r0)
            r10.add(r0)
            int r1 = r1 + 1
            goto L4b
        L65:
            org.bouncycastle.asn1.pkcs.SignedData r0 = new org.bouncycastle.asn1.pkcs.SignedData
            org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger
            r1 = 1
            r3.<init>(r1)
            org.bouncycastle.asn1.DERSet r4 = new org.bouncycastle.asn1.DERSet
            r4.<init>()
            org.bouncycastle.asn1.DERSet r6 = new org.bouncycastle.asn1.DERSet
            r6.<init>(r10)
            r7 = 0
            org.bouncycastle.asn1.DERSet r8 = new org.bouncycastle.asn1.DERSet
            r8.<init>()
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7, r8)
            org.bouncycastle.asn1.pkcs.ContentInfo r10 = new org.bouncycastle.asn1.pkcs.ContentInfo
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.signedData
            r10.<init>(r1, r0)
            byte[] r10 = r9.toDEREncoded(r10)
            return r10
        L8d:
            java.lang.String r0 = "PEM"
            boolean r0 = r10.equalsIgnoreCase(r0)
            if (r0 == 0) goto Lc8
            java.io.ByteArrayOutputStream r10 = new java.io.ByteArrayOutputStream
            r10.<init>()
            org.bouncycastle.openssl.PEMWriter r0 = new org.bouncycastle.openssl.PEMWriter
            java.io.OutputStreamWriter r2 = new java.io.OutputStreamWriter
            r2.<init>(r10)
            r0.<init>(r2)
        La4:
            java.util.List r2 = r9.certificates     // Catch: java.lang.Exception -> Lc0
            int r2 = r2.size()     // Catch: java.lang.Exception -> Lc0
            if (r1 == r2) goto Lb8
            java.util.List r2 = r9.certificates     // Catch: java.lang.Exception -> Lc0
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Exception -> Lc0
            r0.writeObject(r2)     // Catch: java.lang.Exception -> Lc0
            int r1 = r1 + 1
            goto La4
        Lb8:
            r0.close()     // Catch: java.lang.Exception -> Lc0
            byte[] r10 = r10.toByteArray()
            return r10
        Lc0:
            java.security.cert.CertificateEncodingException r10 = new java.security.cert.CertificateEncodingException
            java.lang.String r0 = "can't encode certificate for PEM encoded path"
            r10.<init>(r0)
            throw r10
        Lc8:
            java.security.cert.CertificateEncodingException r0 = new java.security.cert.CertificateEncodingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unsupported encoding: "
            r1.append(r2)
            r1.append(r10)
            java.lang.String r10 = r1.toString()
            r0.<init>(r10)
            throw r0
    }

    @Override
    public java.util.Iterator getEncodings() {
            r1 = this;
            java.util.List r0 = org.bouncycastle.jce.provider.PKIXCertPath.certPathEncodings
            java.util.Iterator r0 = r0.iterator()
            return r0
    }
}
