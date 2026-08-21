package org.bouncycastle.ocsp;

public class BasicOCSPRespGenerator {
    private java.util.List list;
    private org.bouncycastle.ocsp.RespID responderID;
    private org.bouncycastle.asn1.x509.X509Extensions responseExtensions;

    private class ResponseObject {
        org.bouncycastle.ocsp.CertificateID certId;
        org.bouncycastle.asn1.ocsp.CertStatus certStatus;
        org.bouncycastle.asn1.x509.X509Extensions extensions;
        org.bouncycastle.asn1.DERGeneralizedTime nextUpdate;
        final org.bouncycastle.ocsp.BasicOCSPRespGenerator this$0;
        org.bouncycastle.asn1.DERGeneralizedTime thisUpdate;

        public ResponseObject(org.bouncycastle.ocsp.BasicOCSPRespGenerator r4, org.bouncycastle.ocsp.CertificateID r5, org.bouncycastle.ocsp.CertificateStatus r6, java.util.Date r7, java.util.Date r8, org.bouncycastle.asn1.x509.X509Extensions r9) {
                r3 = this;
                r3.this$0 = r4
                r3.<init>()
                r3.certId = r5
                r4 = 0
                if (r6 != 0) goto L12
                org.bouncycastle.asn1.ocsp.CertStatus r5 = new org.bouncycastle.asn1.ocsp.CertStatus
                r5.<init>()
            Lf:
                r3.certStatus = r5
                goto L5b
            L12:
                boolean r5 = r6 instanceof org.bouncycastle.ocsp.UnknownStatus
                if (r5 == 0) goto L22
                org.bouncycastle.asn1.ocsp.CertStatus r5 = new org.bouncycastle.asn1.ocsp.CertStatus
                r6 = 2
                org.bouncycastle.asn1.DERNull r0 = new org.bouncycastle.asn1.DERNull
                r0.<init>()
                r5.<init>(r6, r0)
                goto Lf
            L22:
                org.bouncycastle.ocsp.RevokedStatus r6 = (org.bouncycastle.ocsp.RevokedStatus) r6
                boolean r5 = r6.hasRevocationReason()
                if (r5 == 0) goto L47
                org.bouncycastle.asn1.ocsp.CertStatus r5 = new org.bouncycastle.asn1.ocsp.CertStatus
                org.bouncycastle.asn1.ocsp.RevokedInfo r0 = new org.bouncycastle.asn1.ocsp.RevokedInfo
                org.bouncycastle.asn1.DERGeneralizedTime r1 = new org.bouncycastle.asn1.DERGeneralizedTime
                java.util.Date r2 = r6.getRevocationTime()
                r1.<init>(r2)
                org.bouncycastle.asn1.x509.CRLReason r2 = new org.bouncycastle.asn1.x509.CRLReason
                int r6 = r6.getRevocationReason()
                r2.<init>(r6)
                r0.<init>(r1, r2)
                r5.<init>(r0)
                goto Lf
            L47:
                org.bouncycastle.asn1.ocsp.CertStatus r5 = new org.bouncycastle.asn1.ocsp.CertStatus
                org.bouncycastle.asn1.ocsp.RevokedInfo r0 = new org.bouncycastle.asn1.ocsp.RevokedInfo
                org.bouncycastle.asn1.DERGeneralizedTime r1 = new org.bouncycastle.asn1.DERGeneralizedTime
                java.util.Date r6 = r6.getRevocationTime()
                r1.<init>(r6)
                r0.<init>(r1, r4)
                r5.<init>(r0)
                goto Lf
            L5b:
                org.bouncycastle.asn1.DERGeneralizedTime r5 = new org.bouncycastle.asn1.DERGeneralizedTime
                r5.<init>(r7)
                r3.thisUpdate = r5
                if (r8 == 0) goto L69
                org.bouncycastle.asn1.DERGeneralizedTime r4 = new org.bouncycastle.asn1.DERGeneralizedTime
                r4.<init>(r8)
            L69:
                r3.nextUpdate = r4
                r3.extensions = r9
                return
        }

        public org.bouncycastle.asn1.ocsp.SingleResponse toResponse() throws java.lang.Exception {
                r7 = this;
                org.bouncycastle.asn1.ocsp.SingleResponse r6 = new org.bouncycastle.asn1.ocsp.SingleResponse
                org.bouncycastle.ocsp.CertificateID r0 = r7.certId
                org.bouncycastle.asn1.ocsp.CertID r1 = r0.toASN1Object()
                org.bouncycastle.asn1.ocsp.CertStatus r2 = r7.certStatus
                org.bouncycastle.asn1.DERGeneralizedTime r3 = r7.thisUpdate
                org.bouncycastle.asn1.DERGeneralizedTime r4 = r7.nextUpdate
                org.bouncycastle.asn1.x509.X509Extensions r5 = r7.extensions
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return r6
        }
    }

    public BasicOCSPRespGenerator(java.security.PublicKey r2) throws org.bouncycastle.ocsp.OCSPException {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.list = r0
            r0 = 0
            r1.responseExtensions = r0
            org.bouncycastle.ocsp.RespID r0 = new org.bouncycastle.ocsp.RespID
            r0.<init>(r2)
            r1.responderID = r0
            return
    }

    public BasicOCSPRespGenerator(org.bouncycastle.ocsp.RespID r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.list = r0
            r0 = 0
            r1.responseExtensions = r0
            r1.responderID = r2
            return
    }

    private org.bouncycastle.ocsp.BasicOCSPResp generateResponse(java.lang.String r7, java.security.PrivateKey r8, java.security.cert.X509Certificate[] r9, java.util.Date r10, java.lang.String r11, java.security.SecureRandom r12) throws org.bouncycastle.ocsp.OCSPException, java.security.NoSuchProviderException {
            r6 = this;
            java.lang.String r0 = "exception creating signature: "
            java.util.List r1 = r6.list
            java.util.Iterator r1 = r1.iterator()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.ocsp.OCSPUtil.getAlgorithmOID(r7)     // Catch: java.lang.Exception -> L10a
            org.bouncycastle.asn1.ASN1EncodableVector r3 = new org.bouncycastle.asn1.ASN1EncodableVector
            r3.<init>()
        L11:
            boolean r4 = r1.hasNext()
            if (r4 == 0) goto L2e
            java.lang.Object r4 = r1.next()     // Catch: java.lang.Exception -> L25
            org.bouncycastle.ocsp.BasicOCSPRespGenerator$ResponseObject r4 = (org.bouncycastle.ocsp.BasicOCSPRespGenerator.ResponseObject) r4     // Catch: java.lang.Exception -> L25
            org.bouncycastle.asn1.ocsp.SingleResponse r4 = r4.toResponse()     // Catch: java.lang.Exception -> L25
            r3.add(r4)     // Catch: java.lang.Exception -> L25
            goto L11
        L25:
            r7 = move-exception
            org.bouncycastle.ocsp.OCSPException r8 = new org.bouncycastle.ocsp.OCSPException
            java.lang.String r9 = "exception creating Request"
            r8.<init>(r9, r7)
            throw r8
        L2e:
            org.bouncycastle.asn1.ocsp.ResponseData r1 = new org.bouncycastle.asn1.ocsp.ResponseData
            org.bouncycastle.ocsp.RespID r4 = r6.responderID
            org.bouncycastle.asn1.ocsp.ResponderID r4 = r4.toASN1Object()
            org.bouncycastle.asn1.DERGeneralizedTime r5 = new org.bouncycastle.asn1.DERGeneralizedTime
            r5.<init>(r10)
            org.bouncycastle.asn1.DERSequence r10 = new org.bouncycastle.asn1.DERSequence
            r10.<init>(r3)
            org.bouncycastle.asn1.x509.X509Extensions r3 = r6.responseExtensions
            r1.<init>(r4, r5, r10, r3)
            java.security.Signature r7 = java.security.Signature.getInstance(r7, r11)     // Catch: java.security.InvalidKeyException -> Lde java.security.NoSuchAlgorithmException -> Lf4
            if (r12 == 0) goto L4f
            r7.initSign(r8, r12)     // Catch: java.security.InvalidKeyException -> Lde java.security.NoSuchAlgorithmException -> Lf4
            goto L52
        L4f:
            r7.initSign(r8)     // Catch: java.security.InvalidKeyException -> Lde java.security.NoSuchAlgorithmException -> Lf4
        L52:
            java.io.ByteArrayOutputStream r8 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> Lc6
            r8.<init>()     // Catch: java.lang.Exception -> Lc6
            org.bouncycastle.asn1.DEROutputStream r10 = new org.bouncycastle.asn1.DEROutputStream     // Catch: java.lang.Exception -> Lc6
            r10.<init>(r8)     // Catch: java.lang.Exception -> Lc6
            r10.writeObject(r1)     // Catch: java.lang.Exception -> Lc6
            byte[] r8 = r8.toByteArray()     // Catch: java.lang.Exception -> Lc6
            r7.update(r8)     // Catch: java.lang.Exception -> Lc6
            org.bouncycastle.asn1.DERBitString r8 = new org.bouncycastle.asn1.DERBitString     // Catch: java.lang.Exception -> Lc6
            byte[] r7 = r7.sign()     // Catch: java.lang.Exception -> Lc6
            r8.<init>(r7)     // Catch: java.lang.Exception -> Lc6
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r7 = org.bouncycastle.ocsp.OCSPUtil.getSigAlgID(r2)
            if (r9 == 0) goto Lba
            int r10 = r9.length
            if (r10 <= 0) goto Lba
            org.bouncycastle.asn1.ASN1EncodableVector r10 = new org.bouncycastle.asn1.ASN1EncodableVector
            r10.<init>()
            r11 = 0
        L7e:
            int r12 = r9.length     // Catch: java.security.cert.CertificateEncodingException -> La8 java.io.IOException -> Lb1
            if (r11 == r12) goto L98
            org.bouncycastle.asn1.x509.X509CertificateStructure r12 = new org.bouncycastle.asn1.x509.X509CertificateStructure     // Catch: java.security.cert.CertificateEncodingException -> La8 java.io.IOException -> Lb1
            r0 = r9[r11]     // Catch: java.security.cert.CertificateEncodingException -> La8 java.io.IOException -> Lb1
            byte[] r0 = r0.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> La8 java.io.IOException -> Lb1
            org.bouncycastle.asn1.DERObject r0 = r6.makeObj(r0)     // Catch: java.security.cert.CertificateEncodingException -> La8 java.io.IOException -> Lb1
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0     // Catch: java.security.cert.CertificateEncodingException -> La8 java.io.IOException -> Lb1
            r12.<init>(r0)     // Catch: java.security.cert.CertificateEncodingException -> La8 java.io.IOException -> Lb1
            r10.add(r12)     // Catch: java.security.cert.CertificateEncodingException -> La8 java.io.IOException -> Lb1
            int r11 = r11 + 1
            goto L7e
        L98:
            org.bouncycastle.ocsp.BasicOCSPResp r9 = new org.bouncycastle.ocsp.BasicOCSPResp
            org.bouncycastle.asn1.ocsp.BasicOCSPResponse r11 = new org.bouncycastle.asn1.ocsp.BasicOCSPResponse
            org.bouncycastle.asn1.DERSequence r12 = new org.bouncycastle.asn1.DERSequence
            r12.<init>(r10)
            r11.<init>(r1, r7, r8, r12)
            r9.<init>(r11)
            return r9
        La8:
            r7 = move-exception
            org.bouncycastle.ocsp.OCSPException r8 = new org.bouncycastle.ocsp.OCSPException
            java.lang.String r9 = "error encoding certs"
            r8.<init>(r9, r7)
            throw r8
        Lb1:
            r7 = move-exception
            org.bouncycastle.ocsp.OCSPException r8 = new org.bouncycastle.ocsp.OCSPException
            java.lang.String r9 = "error processing certs"
            r8.<init>(r9, r7)
            throw r8
        Lba:
            org.bouncycastle.ocsp.BasicOCSPResp r9 = new org.bouncycastle.ocsp.BasicOCSPResp
            org.bouncycastle.asn1.ocsp.BasicOCSPResponse r10 = new org.bouncycastle.asn1.ocsp.BasicOCSPResponse
            r11 = 0
            r10.<init>(r1, r7, r8, r11)
            r9.<init>(r10)
            return r9
        Lc6:
            r7 = move-exception
            org.bouncycastle.ocsp.OCSPException r8 = new org.bouncycastle.ocsp.OCSPException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "exception processing TBSRequest: "
            r9.append(r10)
            r9.append(r7)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9, r7)
            throw r8
        Lde:
            r7 = move-exception
            org.bouncycastle.ocsp.OCSPException r8 = new org.bouncycastle.ocsp.OCSPException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r0)
            r9.append(r7)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9, r7)
            throw r8
        Lf4:
            r7 = move-exception
            org.bouncycastle.ocsp.OCSPException r8 = new org.bouncycastle.ocsp.OCSPException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r0)
            r9.append(r7)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9, r7)
            throw r8
        L10a:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "unknown signing algorithm specified"
            r7.<init>(r8)
            throw r7
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

    public void addResponse(org.bouncycastle.ocsp.CertificateID r10, org.bouncycastle.ocsp.CertificateStatus r11) {
            r9 = this;
            java.util.List r0 = r9.list
            org.bouncycastle.ocsp.BasicOCSPRespGenerator$ResponseObject r8 = new org.bouncycastle.ocsp.BasicOCSPRespGenerator$ResponseObject
            java.util.Date r5 = new java.util.Date
            r5.<init>()
            r6 = 0
            r7 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r0.add(r8)
            return
    }

    public void addResponse(org.bouncycastle.ocsp.CertificateID r10, org.bouncycastle.ocsp.CertificateStatus r11, java.util.Date r12, java.util.Date r13, org.bouncycastle.asn1.x509.X509Extensions r14) {
            r9 = this;
            java.util.List r0 = r9.list
            org.bouncycastle.ocsp.BasicOCSPRespGenerator$ResponseObject r8 = new org.bouncycastle.ocsp.BasicOCSPRespGenerator$ResponseObject
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r0.add(r8)
            return
    }

    public void addResponse(org.bouncycastle.ocsp.CertificateID r10, org.bouncycastle.ocsp.CertificateStatus r11, java.util.Date r12, org.bouncycastle.asn1.x509.X509Extensions r13) {
            r9 = this;
            java.util.List r0 = r9.list
            org.bouncycastle.ocsp.BasicOCSPRespGenerator$ResponseObject r8 = new org.bouncycastle.ocsp.BasicOCSPRespGenerator$ResponseObject
            java.util.Date r5 = new java.util.Date
            r5.<init>()
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r6 = r12
            r7 = r13
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r0.add(r8)
            return
    }

    public void addResponse(org.bouncycastle.ocsp.CertificateID r10, org.bouncycastle.ocsp.CertificateStatus r11, org.bouncycastle.asn1.x509.X509Extensions r12) {
            r9 = this;
            java.util.List r0 = r9.list
            org.bouncycastle.ocsp.BasicOCSPRespGenerator$ResponseObject r8 = new org.bouncycastle.ocsp.BasicOCSPRespGenerator$ResponseObject
            java.util.Date r5 = new java.util.Date
            r5.<init>()
            r6 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r7 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r0.add(r8)
            return
    }

    public org.bouncycastle.ocsp.BasicOCSPResp generate(java.lang.String r8, java.security.PrivateKey r9, java.security.cert.X509Certificate[] r10, java.util.Date r11, java.lang.String r12) throws org.bouncycastle.ocsp.OCSPException, java.security.NoSuchProviderException, java.lang.IllegalArgumentException {
            r7 = this;
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            org.bouncycastle.ocsp.BasicOCSPResp r8 = r0.generate(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public org.bouncycastle.ocsp.BasicOCSPResp generate(java.lang.String r1, java.security.PrivateKey r2, java.security.cert.X509Certificate[] r3, java.util.Date r4, java.lang.String r5, java.security.SecureRandom r6) throws org.bouncycastle.ocsp.OCSPException, java.security.NoSuchProviderException, java.lang.IllegalArgumentException {
            r0 = this;
            if (r1 == 0) goto L7
            org.bouncycastle.ocsp.BasicOCSPResp r1 = r0.generateResponse(r1, r2, r3, r4, r5, r6)
            return r1
        L7:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "no signing algorithm specified"
            r1.<init>(r2)
            throw r1
    }

    public java.util.Iterator getSignatureAlgNames() {
            r1 = this;
            java.util.Iterator r0 = org.bouncycastle.ocsp.OCSPUtil.getAlgNames()
            return r0
    }

    public void setResponseExtensions(org.bouncycastle.asn1.x509.X509Extensions r1) {
            r0 = this;
            r0.responseExtensions = r1
            return
    }
}
