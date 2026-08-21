package org.bouncycastle.ocsp;

public class OCSPReqGenerator {
    private java.util.List list;
    private org.bouncycastle.asn1.x509.X509Extensions requestExtensions;
    private org.bouncycastle.asn1.x509.GeneralName requestorName;

    private class RequestObject {
        org.bouncycastle.ocsp.CertificateID certId;
        org.bouncycastle.asn1.x509.X509Extensions extensions;
        final org.bouncycastle.ocsp.OCSPReqGenerator this$0;

        public RequestObject(org.bouncycastle.ocsp.OCSPReqGenerator r1, org.bouncycastle.ocsp.CertificateID r2, org.bouncycastle.asn1.x509.X509Extensions r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.certId = r2
                r0.extensions = r3
                return
        }

        public org.bouncycastle.asn1.ocsp.Request toRequest() throws java.lang.Exception {
                r3 = this;
                org.bouncycastle.asn1.ocsp.Request r0 = new org.bouncycastle.asn1.ocsp.Request
                org.bouncycastle.ocsp.CertificateID r1 = r3.certId
                org.bouncycastle.asn1.ocsp.CertID r1 = r1.toASN1Object()
                org.bouncycastle.asn1.x509.X509Extensions r2 = r3.extensions
                r0.<init>(r1, r2)
                return r0
        }
    }

    public OCSPReqGenerator() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.list = r0
            r0 = 0
            r1.requestorName = r0
            r1.requestExtensions = r0
            return
    }

    private org.bouncycastle.ocsp.OCSPReq generateRequest(org.bouncycastle.asn1.DERObjectIdentifier r6, java.security.PrivateKey r7, java.security.cert.X509Certificate[] r8, java.lang.String r9, java.security.SecureRandom r10) throws org.bouncycastle.ocsp.OCSPException, java.security.NoSuchProviderException {
            r5 = this;
            java.lang.String r0 = "exception creating signature: "
            java.util.List r1 = r5.list
            java.util.Iterator r1 = r1.iterator()
            org.bouncycastle.asn1.ASN1EncodableVector r2 = new org.bouncycastle.asn1.ASN1EncodableVector
            r2.<init>()
        Ld:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L2a
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Exception -> L21
            org.bouncycastle.ocsp.OCSPReqGenerator$RequestObject r3 = (org.bouncycastle.ocsp.OCSPReqGenerator.RequestObject) r3     // Catch: java.lang.Exception -> L21
            org.bouncycastle.asn1.ocsp.Request r3 = r3.toRequest()     // Catch: java.lang.Exception -> L21
            r2.add(r3)     // Catch: java.lang.Exception -> L21
            goto Ld
        L21:
            r6 = move-exception
            org.bouncycastle.ocsp.OCSPException r7 = new org.bouncycastle.ocsp.OCSPException
            java.lang.String r8 = "exception creating Request"
            r7.<init>(r8, r6)
            throw r7
        L2a:
            org.bouncycastle.asn1.ocsp.TBSRequest r1 = new org.bouncycastle.asn1.ocsp.TBSRequest
            org.bouncycastle.asn1.x509.GeneralName r3 = r5.requestorName
            org.bouncycastle.asn1.DERSequence r4 = new org.bouncycastle.asn1.DERSequence
            r4.<init>(r2)
            org.bouncycastle.asn1.x509.X509Extensions r2 = r5.requestExtensions
            r1.<init>(r3, r4, r2)
            r2 = 0
            if (r6 == 0) goto L10b
            org.bouncycastle.asn1.x509.GeneralName r2 = r5.requestorName
            if (r2 == 0) goto L103
            java.lang.String r2 = r6.getId()     // Catch: java.security.InvalidKeyException -> Ld7 java.security.NoSuchAlgorithmException -> Led
            java.security.Signature r9 = java.security.Signature.getInstance(r2, r9)     // Catch: java.security.InvalidKeyException -> Ld7 java.security.NoSuchAlgorithmException -> Led
            if (r10 == 0) goto L4d
            r9.initSign(r7, r10)     // Catch: java.security.InvalidKeyException -> Ld7 java.security.NoSuchAlgorithmException -> Led
            goto L50
        L4d:
            r9.initSign(r7)     // Catch: java.security.InvalidKeyException -> Ld7 java.security.NoSuchAlgorithmException -> Led
        L50:
            java.io.ByteArrayOutputStream r7 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> Lbf
            r7.<init>()     // Catch: java.lang.Exception -> Lbf
            org.bouncycastle.asn1.ASN1OutputStream r10 = new org.bouncycastle.asn1.ASN1OutputStream     // Catch: java.lang.Exception -> Lbf
            r10.<init>(r7)     // Catch: java.lang.Exception -> Lbf
            r10.writeObject(r1)     // Catch: java.lang.Exception -> Lbf
            byte[] r7 = r7.toByteArray()     // Catch: java.lang.Exception -> Lbf
            r9.update(r7)     // Catch: java.lang.Exception -> Lbf
            org.bouncycastle.asn1.DERBitString r7 = new org.bouncycastle.asn1.DERBitString     // Catch: java.lang.Exception -> Lbf
            byte[] r9 = r9.sign()     // Catch: java.lang.Exception -> Lbf
            r7.<init>(r9)     // Catch: java.lang.Exception -> Lbf
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r9 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERNull r10 = new org.bouncycastle.asn1.DERNull
            r10.<init>()
            r9.<init>(r6, r10)
            if (r8 == 0) goto Lb9
            int r6 = r8.length
            if (r6 <= 0) goto Lb9
            org.bouncycastle.asn1.ASN1EncodableVector r6 = new org.bouncycastle.asn1.ASN1EncodableVector
            r6.<init>()
            r10 = 0
        L82:
            int r0 = r8.length     // Catch: java.security.cert.CertificateEncodingException -> La7 java.io.IOException -> Lb0
            if (r10 == r0) goto L9c
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = new org.bouncycastle.asn1.x509.X509CertificateStructure     // Catch: java.security.cert.CertificateEncodingException -> La7 java.io.IOException -> Lb0
            r2 = r8[r10]     // Catch: java.security.cert.CertificateEncodingException -> La7 java.io.IOException -> Lb0
            byte[] r2 = r2.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> La7 java.io.IOException -> Lb0
            org.bouncycastle.asn1.DERObject r2 = r5.makeObj(r2)     // Catch: java.security.cert.CertificateEncodingException -> La7 java.io.IOException -> Lb0
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2     // Catch: java.security.cert.CertificateEncodingException -> La7 java.io.IOException -> Lb0
            r0.<init>(r2)     // Catch: java.security.cert.CertificateEncodingException -> La7 java.io.IOException -> Lb0
            r6.add(r0)     // Catch: java.security.cert.CertificateEncodingException -> La7 java.io.IOException -> Lb0
            int r10 = r10 + 1
            goto L82
        L9c:
            org.bouncycastle.asn1.ocsp.Signature r2 = new org.bouncycastle.asn1.ocsp.Signature
            org.bouncycastle.asn1.DERSequence r8 = new org.bouncycastle.asn1.DERSequence
            r8.<init>(r6)
            r2.<init>(r9, r7, r8)
            goto L10b
        La7:
            r6 = move-exception
            org.bouncycastle.ocsp.OCSPException r7 = new org.bouncycastle.ocsp.OCSPException
            java.lang.String r8 = "error encoding certs"
            r7.<init>(r8, r6)
            throw r7
        Lb0:
            r6 = move-exception
            org.bouncycastle.ocsp.OCSPException r7 = new org.bouncycastle.ocsp.OCSPException
            java.lang.String r8 = "error processing certs"
            r7.<init>(r8, r6)
            throw r7
        Lb9:
            org.bouncycastle.asn1.ocsp.Signature r2 = new org.bouncycastle.asn1.ocsp.Signature
            r2.<init>(r9, r7)
            goto L10b
        Lbf:
            r6 = move-exception
            org.bouncycastle.ocsp.OCSPException r7 = new org.bouncycastle.ocsp.OCSPException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "exception processing TBSRequest: "
            r8.append(r9)
            r8.append(r6)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8, r6)
            throw r7
        Ld7:
            r6 = move-exception
            org.bouncycastle.ocsp.OCSPException r7 = new org.bouncycastle.ocsp.OCSPException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r0)
            r8.append(r6)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8, r6)
            throw r7
        Led:
            r6 = move-exception
            org.bouncycastle.ocsp.OCSPException r7 = new org.bouncycastle.ocsp.OCSPException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r0)
            r8.append(r6)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8, r6)
            throw r7
        L103:
            org.bouncycastle.ocsp.OCSPException r6 = new org.bouncycastle.ocsp.OCSPException
            java.lang.String r7 = "requestorName must be specified if request is signed."
            r6.<init>(r7)
            throw r6
        L10b:
            org.bouncycastle.ocsp.OCSPReq r6 = new org.bouncycastle.ocsp.OCSPReq
            org.bouncycastle.asn1.ocsp.OCSPRequest r7 = new org.bouncycastle.asn1.ocsp.OCSPRequest
            r7.<init>(r1, r2)
            r6.<init>(r7)
            return r6
    }

    private org.bouncycastle.asn1.DERObject makeObj(byte[] r2) throws java.io.IOException {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r0.<init>(r2)
            org.bouncycastle.asn1.DERObject r2 = r0.readObject()
            return r2
    }

    public void addRequest(org.bouncycastle.ocsp.CertificateID r4) {
            r3 = this;
            java.util.List r0 = r3.list
            org.bouncycastle.ocsp.OCSPReqGenerator$RequestObject r1 = new org.bouncycastle.ocsp.OCSPReqGenerator$RequestObject
            r2 = 0
            r1.<init>(r3, r4, r2)
            r0.add(r1)
            return
    }

    public void addRequest(org.bouncycastle.ocsp.CertificateID r3, org.bouncycastle.asn1.x509.X509Extensions r4) {
            r2 = this;
            java.util.List r0 = r2.list
            org.bouncycastle.ocsp.OCSPReqGenerator$RequestObject r1 = new org.bouncycastle.ocsp.OCSPReqGenerator$RequestObject
            r1.<init>(r2, r3, r4)
            r0.add(r1)
            return
    }

    public org.bouncycastle.ocsp.OCSPReq generate() throws org.bouncycastle.ocsp.OCSPException {
            r6 = this;
            r1 = 0
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            r0 = r6
            org.bouncycastle.ocsp.OCSPReq r0 = r0.generateRequest(r1, r2, r3, r4, r5)     // Catch: java.security.NoSuchProviderException -> Lb
            return r0
        Lb:
            r0 = move-exception
            org.bouncycastle.ocsp.OCSPException r1 = new org.bouncycastle.ocsp.OCSPException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "no provider! - "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            throw r1
    }

    public org.bouncycastle.ocsp.OCSPReq generate(java.lang.String r7, java.security.PrivateKey r8, java.security.cert.X509Certificate[] r9, java.lang.String r10) throws org.bouncycastle.ocsp.OCSPException, java.security.NoSuchProviderException, java.lang.IllegalArgumentException {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            org.bouncycastle.ocsp.OCSPReq r7 = r0.generate(r1, r2, r3, r4, r5)
            return r7
    }

    public org.bouncycastle.ocsp.OCSPReq generate(java.lang.String r7, java.security.PrivateKey r8, java.security.cert.X509Certificate[] r9, java.lang.String r10, java.security.SecureRandom r11) throws org.bouncycastle.ocsp.OCSPException, java.security.NoSuchProviderException, java.lang.IllegalArgumentException {
            r6 = this;
            if (r7 == 0) goto L27
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.ocsp.OCSPUtil.getAlgorithmOID(r7)     // Catch: java.lang.IllegalArgumentException -> L10
            r0 = r6
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            org.bouncycastle.ocsp.OCSPReq r7 = r0.generateRequest(r1, r2, r3, r4, r5)     // Catch: java.lang.IllegalArgumentException -> L10
            return r7
        L10:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "unknown signing algorithm specified: "
            r9.append(r10)
            r9.append(r7)
            java.lang.String r7 = r9.toString()
            r8.<init>(r7)
            throw r8
        L27:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "no signing algorithm specified"
            r7.<init>(r8)
            throw r7
    }

    public java.util.Iterator getSignatureAlgNames() {
            r1 = this;
            java.util.Iterator r0 = org.bouncycastle.ocsp.OCSPUtil.getAlgNames()
            return r0
    }

    public void setRequestExtensions(org.bouncycastle.asn1.x509.X509Extensions r1) {
            r0 = this;
            r0.requestExtensions = r1
            return
    }

    public void setRequestorName(javax.security.auth.x500.X500Principal r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = new org.bouncycastle.asn1.x509.GeneralName     // Catch: java.io.IOException -> L12
            r1 = 4
            org.bouncycastle.jce.X509Principal r2 = new org.bouncycastle.jce.X509Principal     // Catch: java.io.IOException -> L12
            byte[] r4 = r4.getEncoded()     // Catch: java.io.IOException -> L12
            r2.<init>(r4)     // Catch: java.io.IOException -> L12
            r0.<init>(r1, r2)     // Catch: java.io.IOException -> L12
            r3.requestorName = r0     // Catch: java.io.IOException -> L12
            return
        L12:
            r4 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "cannot encode principal: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public void setRequestorName(org.bouncycastle.asn1.x509.GeneralName r1) {
            r0 = this;
            r0.requestorName = r1
            return
    }
}
