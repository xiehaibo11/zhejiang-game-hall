package org.bouncycastle.ocsp;

public class OCSPResp {
    private org.bouncycastle.asn1.ocsp.OCSPResponse resp;

    public OCSPResp(java.io.InputStream r2) throws java.io.IOException {
            r1 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    private OCSPResp(org.bouncycastle.asn1.ASN1InputStream r4) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "malformed response: "
            r3.<init>()
            org.bouncycastle.asn1.DERObject r4 = r4.readObject()     // Catch: java.lang.ClassCastException -> L10 java.lang.IllegalArgumentException -> L2a
            org.bouncycastle.asn1.ocsp.OCSPResponse r4 = org.bouncycastle.asn1.ocsp.OCSPResponse.getInstance(r4)     // Catch: java.lang.ClassCastException -> L10 java.lang.IllegalArgumentException -> L2a
            r3.resp = r4     // Catch: java.lang.ClassCastException -> L10 java.lang.IllegalArgumentException -> L2a
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

    public OCSPResp(org.bouncycastle.asn1.ocsp.OCSPResponse r1) {
            r0 = this;
            r0.<init>()
            r0.resp = r1
            return
    }

    public OCSPResp(byte[] r2) throws java.io.IOException {
            r1 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            if (r2 != r1) goto L4
            r2 = 1
            return r2
        L4:
            boolean r0 = r2 instanceof org.bouncycastle.ocsp.OCSPResp
            if (r0 != 0) goto La
            r2 = 0
            return r2
        La:
            org.bouncycastle.ocsp.OCSPResp r2 = (org.bouncycastle.ocsp.OCSPResp) r2
            org.bouncycastle.asn1.ocsp.OCSPResponse r0 = r1.resp
            org.bouncycastle.asn1.ocsp.OCSPResponse r2 = r2.resp
            boolean r2 = r0.equals(r2)
            return r2
    }

    public byte[] getEncoded() throws java.io.IOException {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.ASN1OutputStream r1 = new org.bouncycastle.asn1.ASN1OutputStream
            r1.<init>(r0)
            org.bouncycastle.asn1.ocsp.OCSPResponse r2 = r3.resp
            r1.writeObject(r2)
            byte[] r0 = r0.toByteArray()
            return r0
    }

    public java.lang.Object getResponseObject() throws org.bouncycastle.ocsp.OCSPException {
            r4 = this;
            org.bouncycastle.asn1.ocsp.OCSPResponse r0 = r4.resp
            org.bouncycastle.asn1.ocsp.ResponseBytes r0 = r0.getResponseBytes()
            if (r0 != 0) goto La
            r0 = 0
            return r0
        La:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r0.getResponseType()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.ocsp.OCSPObjectIdentifiers.id_pkix_ocsp_basic
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L49
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L31
            org.bouncycastle.asn1.ASN1OctetString r0 = r0.getResponse()     // Catch: java.lang.Exception -> L31
            byte[] r0 = r0.getOctets()     // Catch: java.lang.Exception -> L31
            r1.<init>(r0)     // Catch: java.lang.Exception -> L31
            org.bouncycastle.ocsp.BasicOCSPResp r0 = new org.bouncycastle.ocsp.BasicOCSPResp     // Catch: java.lang.Exception -> L31
            org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: java.lang.Exception -> L31
            org.bouncycastle.asn1.ocsp.BasicOCSPResponse r1 = org.bouncycastle.asn1.ocsp.BasicOCSPResponse.getInstance(r1)     // Catch: java.lang.Exception -> L31
            r0.<init>(r1)     // Catch: java.lang.Exception -> L31
            return r0
        L31:
            r0 = move-exception
            org.bouncycastle.ocsp.OCSPException r1 = new org.bouncycastle.ocsp.OCSPException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "problem decoding object: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            throw r1
        L49:
            org.bouncycastle.asn1.ASN1OctetString r0 = r0.getResponse()
            return r0
    }

    public int getStatus() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.OCSPResponse r0 = r1.resp
            org.bouncycastle.asn1.ocsp.OCSPResponseStatus r0 = r0.getResponseStatus()
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            return r0
    }

    public int hashCode() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.OCSPResponse r0 = r1.resp
            int r0 = r0.hashCode()
            return r0
    }
}
