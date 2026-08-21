package org.bouncycastle.x509;

public class X509CertificatePair {
    private java.security.cert.X509Certificate forward;
    private java.security.cert.X509Certificate reverse;

    public X509CertificatePair(java.security.cert.X509Certificate r1, java.security.cert.X509Certificate r2) {
            r0 = this;
            r0.<init>()
            r0.forward = r1
            r0.reverse = r2
            return
    }

    public X509CertificatePair(org.bouncycastle.asn1.x509.CertificatePair r3) throws java.security.cert.CertificateParsingException {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r3.getForward()
            if (r0 == 0) goto L14
            org.bouncycastle.jce.provider.X509CertificateObject r0 = new org.bouncycastle.jce.provider.X509CertificateObject
            org.bouncycastle.asn1.x509.X509CertificateStructure r1 = r3.getForward()
            r0.<init>(r1)
            r2.forward = r0
        L14:
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r3.getReverse()
            if (r0 == 0) goto L25
            org.bouncycastle.jce.provider.X509CertificateObject r0 = new org.bouncycastle.jce.provider.X509CertificateObject
            org.bouncycastle.asn1.x509.X509CertificateStructure r3 = r3.getReverse()
            r0.<init>(r3)
            r2.reverse = r0
        L25:
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof org.bouncycastle.x509.X509CertificatePair
            if (r1 != 0) goto L9
            return r0
        L9:
            org.bouncycastle.x509.X509CertificatePair r5 = (org.bouncycastle.x509.X509CertificatePair) r5
            java.security.cert.X509Certificate r1 = r4.forward
            r2 = 1
            if (r1 == 0) goto L17
            java.security.cert.X509Certificate r3 = r5.forward
            boolean r1 = r1.equals(r3)
            goto L1e
        L17:
            java.security.cert.X509Certificate r1 = r5.forward
            if (r1 == 0) goto L1d
            r1 = 0
            goto L1e
        L1d:
            r1 = 1
        L1e:
            java.security.cert.X509Certificate r3 = r4.reverse
            java.security.cert.X509Certificate r5 = r5.reverse
            if (r3 == 0) goto L29
            boolean r5 = r3.equals(r5)
            goto L2e
        L29:
            if (r5 == 0) goto L2d
            r5 = 0
            goto L2e
        L2d:
            r5 = 1
        L2e:
            if (r1 == 0) goto L33
            if (r5 == 0) goto L33
            r0 = 1
        L33:
            return r0
    }

    public byte[] getEncoded() throws java.security.cert.CertificateEncodingException {
            r3 = this;
            java.security.cert.X509Certificate r0 = r3.forward     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            r1 = 0
            if (r0 == 0) goto L19
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            java.security.cert.X509Certificate r2 = r3.forward     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            byte[] r2 = r2.getEncoded()     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            r0.<init>(r2)     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            org.bouncycastle.asn1.DERObject r0 = r0.readObject()     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r0)     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            goto L1a
        L19:
            r0 = r1
        L1a:
            java.security.cert.X509Certificate r2 = r3.reverse     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            if (r2 == 0) goto L31
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            java.security.cert.X509Certificate r2 = r3.reverse     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            byte[] r2 = r2.getEncoded()     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            r1.<init>(r2)     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            org.bouncycastle.asn1.x509.X509CertificateStructure r1 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r1)     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
        L31:
            org.bouncycastle.asn1.x509.CertificatePair r2 = new org.bouncycastle.asn1.x509.CertificatePair     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            r2.<init>(r0, r1)     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            byte[] r0 = r2.getDEREncoded()     // Catch: java.io.IOException -> L3b java.lang.IllegalArgumentException -> L46
            return r0
        L3b:
            r0 = move-exception
            org.bouncycastle.x509.ExtCertificateEncodingException r1 = new org.bouncycastle.x509.ExtCertificateEncodingException
            java.lang.String r2 = r0.toString()
            r1.<init>(r2, r0)
            throw r1
        L46:
            r0 = move-exception
            org.bouncycastle.x509.ExtCertificateEncodingException r1 = new org.bouncycastle.x509.ExtCertificateEncodingException
            java.lang.String r2 = r0.toString()
            r1.<init>(r2, r0)
            throw r1
    }

    public java.security.cert.X509Certificate getForward() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.forward
            return r0
    }

    public java.security.cert.X509Certificate getReverse() {
            r1 = this;
            java.security.cert.X509Certificate r0 = r1.reverse
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.security.cert.X509Certificate r0 = r2.forward
            r1 = 0
            if (r0 == 0) goto La
            int r0 = r0.hashCode()
            int r1 = r1 + r0
        La:
            java.security.cert.X509Certificate r0 = r2.reverse
            if (r0 == 0) goto L13
            int r0 = r0.hashCode()
            int r1 = r1 + r0
        L13:
            return r1
    }
}
