package org.bouncycastle.ocsp;

public class OCSPReq implements java.security.cert.X509Extension {
    private org.bouncycastle.asn1.ocsp.OCSPRequest req;

    public OCSPReq(java.io.InputStream r2) throws java.io.IOException {
            r1 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    private OCSPReq(org.bouncycastle.asn1.ASN1InputStream r4) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "malformed request: "
            r3.<init>()
            org.bouncycastle.asn1.DERObject r4 = r4.readObject()     // Catch: java.lang.ClassCastException -> L10 java.lang.IllegalArgumentException -> L2a
            org.bouncycastle.asn1.ocsp.OCSPRequest r4 = org.bouncycastle.asn1.ocsp.OCSPRequest.getInstance(r4)     // Catch: java.lang.ClassCastException -> L10 java.lang.IllegalArgumentException -> L2a
            r3.req = r4     // Catch: java.lang.ClassCastException -> L10 java.lang.IllegalArgumentException -> L2a
            return
        L10:
            r4 = move-exception
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4)
            throw r1
        L2a:
            r4 = move-exception
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4)
            throw r1
    }

    public OCSPReq(org.bouncycastle.asn1.ocsp.OCSPRequest r1) {
            r0 = this;
            r0.<init>()
            r0.req = r1
            return
    }

    public OCSPReq(byte[] r2) throws java.io.IOException {
            r1 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    private java.util.List getCertList(java.lang.String r8) throws org.bouncycastle.ocsp.OCSPException, java.security.NoSuchProviderException {
            r7 = this;
            java.lang.String r0 = "can't re-encode certificate!"
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream
            r2.<init>()
            org.bouncycastle.asn1.ASN1OutputStream r3 = new org.bouncycastle.asn1.ASN1OutputStream
            r3.<init>(r2)
            java.lang.String r4 = "X.509"
            java.security.cert.CertificateFactory r8 = java.security.cert.CertificateFactory.getInstance(r4, r8)     // Catch: java.security.cert.CertificateException -> L57
            org.bouncycastle.asn1.ocsp.OCSPRequest r4 = r7.req
            org.bouncycastle.asn1.ocsp.Signature r4 = r4.getOptionalSignature()
            org.bouncycastle.asn1.ASN1Sequence r4 = r4.getCerts()
            if (r4 == 0) goto L56
            java.util.Enumeration r4 = r4.getObjects()
        L27:
            boolean r5 = r4.hasMoreElements()
            if (r5 == 0) goto L56
            java.lang.Object r5 = r4.nextElement()     // Catch: java.security.cert.CertificateException -> L48 java.io.IOException -> L4f
            r3.writeObject(r5)     // Catch: java.security.cert.CertificateException -> L48 java.io.IOException -> L4f
            java.io.ByteArrayInputStream r5 = new java.io.ByteArrayInputStream     // Catch: java.security.cert.CertificateException -> L48 java.io.IOException -> L4f
            byte[] r6 = r2.toByteArray()     // Catch: java.security.cert.CertificateException -> L48 java.io.IOException -> L4f
            r5.<init>(r6)     // Catch: java.security.cert.CertificateException -> L48 java.io.IOException -> L4f
            java.security.cert.Certificate r5 = r8.generateCertificate(r5)     // Catch: java.security.cert.CertificateException -> L48 java.io.IOException -> L4f
            r1.add(r5)     // Catch: java.security.cert.CertificateException -> L48 java.io.IOException -> L4f
            r2.reset()
            goto L27
        L48:
            r8 = move-exception
            org.bouncycastle.ocsp.OCSPException r1 = new org.bouncycastle.ocsp.OCSPException
            r1.<init>(r0, r8)
            throw r1
        L4f:
            r8 = move-exception
            org.bouncycastle.ocsp.OCSPException r1 = new org.bouncycastle.ocsp.OCSPException
            r1.<init>(r0, r8)
            throw r1
        L56:
            return r1
        L57:
            r8 = move-exception
            org.bouncycastle.ocsp.OCSPException r0 = new org.bouncycastle.ocsp.OCSPException
            java.lang.String r1 = "can't get certificate factory."
            r0.<init>(r1, r8)
            throw r0
    }

    private java.util.Set getExtensionOIDs(boolean r6) {
            r5 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.asn1.x509.X509Extensions r1 = r5.getRequestExtensions()
            if (r1 == 0) goto L2d
            java.util.Enumeration r2 = r1.oids()
        Lf:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto L2d
            java.lang.Object r3 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            org.bouncycastle.asn1.x509.X509Extension r4 = r1.getExtension(r3)
            boolean r4 = r4.isCritical()
            if (r6 != r4) goto Lf
            java.lang.String r3 = r3.getId()
            r0.add(r3)
            goto Lf
        L2d:
            return r0
    }

    public java.security.cert.CertStore getCertificates(java.lang.String r3, java.lang.String r4) throws java.security.NoSuchAlgorithmException, java.security.NoSuchProviderException, org.bouncycastle.ocsp.OCSPException {
            r2 = this;
            boolean r0 = r2.isSigned()
            if (r0 != 0) goto L8
            r3 = 0
            return r3
        L8:
            java.security.cert.CollectionCertStoreParameters r0 = new java.security.cert.CollectionCertStoreParameters     // Catch: java.security.InvalidAlgorithmParameterException -> L16
            java.util.List r1 = r2.getCertList(r4)     // Catch: java.security.InvalidAlgorithmParameterException -> L16
            r0.<init>(r1)     // Catch: java.security.InvalidAlgorithmParameterException -> L16
            java.security.cert.CertStore r3 = java.security.cert.CertStore.getInstance(r3, r0, r4)     // Catch: java.security.InvalidAlgorithmParameterException -> L16
            return r3
        L16:
            r3 = move-exception
            org.bouncycastle.ocsp.OCSPException r4 = new org.bouncycastle.ocsp.OCSPException
            java.lang.String r0 = "can't setup the CertStore"
            r4.<init>(r0, r3)
            throw r4
    }

    public java.security.cert.X509Certificate[] getCerts(java.lang.String r2) throws org.bouncycastle.ocsp.OCSPException, java.security.NoSuchProviderException {
            r1 = this;
            boolean r0 = r1.isSigned()
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            java.util.List r2 = r1.getCertList(r2)
            int r0 = r2.size()
            java.security.cert.X509Certificate[] r0 = new java.security.cert.X509Certificate[r0]
            java.lang.Object[] r2 = r2.toArray(r0)
            java.security.cert.X509Certificate[] r2 = (java.security.cert.X509Certificate[]) r2
            java.security.cert.X509Certificate[] r2 = (java.security.cert.X509Certificate[]) r2
            return r2
    }

    @Override
    public java.util.Set getCriticalExtensionOIDs() {
            r1 = this;
            r0 = 1
            java.util.Set r0 = r1.getExtensionOIDs(r0)
            return r0
    }

    public byte[] getEncoded() throws java.io.IOException {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.ASN1OutputStream r1 = new org.bouncycastle.asn1.ASN1OutputStream
            r1.<init>(r0)
            org.bouncycastle.asn1.ocsp.OCSPRequest r2 = r3.req
            r1.writeObject(r2)
            byte[] r0 = r0.toByteArray()
            return r0
    }

    @Override
    public byte[] getExtensionValue(java.lang.String r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = r3.getRequestExtensions()
            if (r0 == 0) goto L43
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r4)
            org.bouncycastle.asn1.x509.X509Extension r4 = r0.getExtension(r1)
            if (r4 == 0) goto L43
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
            r1.<init>(r0)
            org.bouncycastle.asn1.ASN1OctetString r4 = r4.getValue()     // Catch: java.lang.Exception -> L27
            r1.writeObject(r4)     // Catch: java.lang.Exception -> L27
            byte[] r4 = r0.toByteArray()     // Catch: java.lang.Exception -> L27
            return r4
        L27:
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
        L43:
            r4 = 0
            return r4
    }

    @Override
    public java.util.Set getNonCriticalExtensionOIDs() {
            r1 = this;
            r0 = 0
            java.util.Set r0 = r1.getExtensionOIDs(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getRequestExtensions() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.OCSPRequest r0 = r1.req
            org.bouncycastle.asn1.ocsp.TBSRequest r0 = r0.getTbsRequest()
            org.bouncycastle.asn1.x509.X509Extensions r0 = r0.getRequestExtensions()
            org.bouncycastle.asn1.x509.X509Extensions r0 = org.bouncycastle.asn1.x509.X509Extensions.getInstance(r0)
            return r0
    }

    public org.bouncycastle.ocsp.Req[] getRequestList() {
            r6 = this;
            org.bouncycastle.asn1.ocsp.OCSPRequest r0 = r6.req
            org.bouncycastle.asn1.ocsp.TBSRequest r0 = r0.getTbsRequest()
            org.bouncycastle.asn1.ASN1Sequence r0 = r0.getRequestList()
            int r1 = r0.size()
            org.bouncycastle.ocsp.Req[] r2 = new org.bouncycastle.ocsp.Req[r1]
            r3 = 0
        L11:
            if (r3 == r1) goto L25
            org.bouncycastle.ocsp.Req r4 = new org.bouncycastle.ocsp.Req
            org.bouncycastle.asn1.DEREncodable r5 = r0.getObjectAt(r3)
            org.bouncycastle.asn1.ocsp.Request r5 = org.bouncycastle.asn1.ocsp.Request.getInstance(r5)
            r4.<init>(r5)
            r2[r3] = r4
            int r3 = r3 + 1
            goto L11
        L25:
            return r2
    }

    public org.bouncycastle.asn1.x509.GeneralName getRequestorName() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.OCSPRequest r0 = r1.req
            org.bouncycastle.asn1.ocsp.TBSRequest r0 = r0.getTbsRequest()
            org.bouncycastle.asn1.x509.GeneralName r0 = r0.getRequestorName()
            org.bouncycastle.asn1.x509.GeneralName r0 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r0)
            return r0
    }

    public byte[] getSignature() {
            r1 = this;
            boolean r0 = r1.isSigned()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            org.bouncycastle.asn1.ocsp.OCSPRequest r0 = r1.req
            org.bouncycastle.asn1.ocsp.Signature r0 = r0.getOptionalSignature()
            org.bouncycastle.asn1.DERBitString r0 = r0.getSignature()
            byte[] r0 = r0.getBytes()
            return r0
    }

    public java.lang.String getSignatureAlgOID() {
            r1 = this;
            boolean r0 = r1.isSigned()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            org.bouncycastle.asn1.ocsp.OCSPRequest r0 = r1.req
            org.bouncycastle.asn1.ocsp.Signature r0 = r0.getOptionalSignature()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getSignatureAlgorithm()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            java.lang.String r0 = r0.getId()
            return r0
    }

    public byte[] getTBSRequest() throws org.bouncycastle.ocsp.OCSPException {
            r3 = this;
            org.bouncycastle.asn1.ocsp.OCSPRequest r0 = r3.req     // Catch: java.io.IOException -> Lb
            org.bouncycastle.asn1.ocsp.TBSRequest r0 = r0.getTbsRequest()     // Catch: java.io.IOException -> Lb
            byte[] r0 = r0.getEncoded()     // Catch: java.io.IOException -> Lb
            return r0
        Lb:
            r0 = move-exception
            org.bouncycastle.ocsp.OCSPException r1 = new org.bouncycastle.ocsp.OCSPException
            java.lang.String r2 = "problem encoding tbsRequest"
            r1.<init>(r2, r0)
            throw r1
    }

    public int getVersion() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.OCSPRequest r0 = r1.req
            org.bouncycastle.asn1.ocsp.TBSRequest r0 = r0.getTbsRequest()
            org.bouncycastle.asn1.DERInteger r0 = r0.getVersion()
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            int r0 = r0 + 1
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
            return r0
        Le:
            r0 = 0
            return r0
    }

    public boolean isSigned() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.OCSPRequest r0 = r1.req
            org.bouncycastle.asn1.ocsp.Signature r0 = r0.getOptionalSignature()
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public boolean verify(java.security.PublicKey r3, java.lang.String r4) throws org.bouncycastle.ocsp.OCSPException, java.security.NoSuchProviderException {
            r2 = this;
            boolean r0 = r2.isSigned()
            if (r0 == 0) goto L4e
            java.lang.String r0 = r2.getSignatureAlgOID()     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            java.security.Signature r4 = java.security.Signature.getInstance(r0, r4)     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            r4.initVerify(r3)     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            r3.<init>()     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            org.bouncycastle.asn1.ASN1OutputStream r0 = new org.bouncycastle.asn1.ASN1OutputStream     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            r0.<init>(r3)     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            org.bouncycastle.asn1.ocsp.OCSPRequest r1 = r2.req     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            org.bouncycastle.asn1.ocsp.TBSRequest r1 = r1.getTbsRequest()     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            r0.writeObject(r1)     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            byte[] r3 = r3.toByteArray()     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            r4.update(r3)     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            byte[] r3 = r2.getSignature()     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            boolean r3 = r4.verify(r3)     // Catch: java.lang.Exception -> L34 java.security.NoSuchProviderException -> L4c
            return r3
        L34:
            r3 = move-exception
            org.bouncycastle.ocsp.OCSPException r4 = new org.bouncycastle.ocsp.OCSPException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "exception processing sig: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r4.<init>(r0, r3)
            throw r4
        L4c:
            r3 = move-exception
            throw r3
        L4e:
            org.bouncycastle.ocsp.OCSPException r3 = new org.bouncycastle.ocsp.OCSPException
            java.lang.String r4 = "attempt to verify signature on unsigned object"
            r3.<init>(r4)
            throw r3
    }
}
