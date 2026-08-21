package org.bouncycastle.ocsp;

public class RespID {
    org.bouncycastle.asn1.ocsp.ResponderID id;

    public RespID(java.security.PublicKey r4) throws org.bouncycastle.ocsp.OCSPException {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "SHA1"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L36
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L36
            byte[] r4 = r4.getEncoded()     // Catch: java.lang.Exception -> L36
            r1.<init>(r4)     // Catch: java.lang.Exception -> L36
            org.bouncycastle.asn1.DERObject r4 = r1.readObject()     // Catch: java.lang.Exception -> L36
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r4 = org.bouncycastle.asn1.x509.SubjectPublicKeyInfo.getInstance(r4)     // Catch: java.lang.Exception -> L36
            org.bouncycastle.asn1.DERBitString r4 = r4.getPublicKeyData()     // Catch: java.lang.Exception -> L36
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L36
            r0.update(r4)     // Catch: java.lang.Exception -> L36
            org.bouncycastle.asn1.DEROctetString r4 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.lang.Exception -> L36
            byte[] r0 = r0.digest()     // Catch: java.lang.Exception -> L36
            r4.<init>(r0)     // Catch: java.lang.Exception -> L36
            org.bouncycastle.asn1.ocsp.ResponderID r0 = new org.bouncycastle.asn1.ocsp.ResponderID     // Catch: java.lang.Exception -> L36
            r0.<init>(r4)     // Catch: java.lang.Exception -> L36
            r3.id = r0     // Catch: java.lang.Exception -> L36
            return
        L36:
            r4 = move-exception
            org.bouncycastle.ocsp.OCSPException r0 = new org.bouncycastle.ocsp.OCSPException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "problem creating ID: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1, r4)
            throw r0
    }

    public RespID(javax.security.auth.x500.X500Principal r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.ocsp.ResponderID r0 = new org.bouncycastle.asn1.ocsp.ResponderID     // Catch: java.io.IOException -> L14
            org.bouncycastle.jce.X509Principal r1 = new org.bouncycastle.jce.X509Principal     // Catch: java.io.IOException -> L14
            byte[] r3 = r3.getEncoded()     // Catch: java.io.IOException -> L14
            r1.<init>(r3)     // Catch: java.io.IOException -> L14
            r0.<init>(r1)     // Catch: java.io.IOException -> L14
            r2.id = r0     // Catch: java.io.IOException -> L14
            return
        L14:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "can't decode name."
            r3.<init>(r0)
            throw r3
    }

    public RespID(org.bouncycastle.asn1.ocsp.ResponderID r1) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            return
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.ocsp.RespID
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            org.bouncycastle.ocsp.RespID r2 = (org.bouncycastle.ocsp.RespID) r2
            org.bouncycastle.asn1.ocsp.ResponderID r0 = r1.id
            org.bouncycastle.asn1.ocsp.ResponderID r2 = r2.id
            boolean r2 = r0.equals(r2)
            return r2
    }

    public int hashCode() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.ResponderID r0 = r1.id
            int r0 = r0.hashCode()
            return r0
    }

    public org.bouncycastle.asn1.ocsp.ResponderID toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.ResponderID r0 = r1.id
            return r0
    }
}
