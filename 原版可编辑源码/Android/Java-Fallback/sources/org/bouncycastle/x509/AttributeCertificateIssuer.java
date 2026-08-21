package org.bouncycastle.x509;

public class AttributeCertificateIssuer implements java.security.cert.CertSelector, org.bouncycastle.util.Selector {
    final org.bouncycastle.asn1.ASN1Encodable form;

    public AttributeCertificateIssuer(javax.security.auth.x500.X500Principal r2) throws java.io.IOException {
            r1 = this;
            org.bouncycastle.jce.X509Principal r0 = new org.bouncycastle.jce.X509Principal
            byte[] r2 = r2.getEncoded()
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    AttributeCertificateIssuer(org.bouncycastle.asn1.x509.AttCertIssuer r1) {
            r0 = this;
            r0.<init>()
            org.bouncycastle.asn1.ASN1Encodable r1 = r1.getIssuer()
            r0.form = r1
            return
    }

    public AttributeCertificateIssuer(org.bouncycastle.jce.X509Principal r5) {
            r4 = this;
            r4.<init>()
            org.bouncycastle.asn1.x509.V2Form r0 = new org.bouncycastle.asn1.x509.V2Form
            org.bouncycastle.asn1.x509.GeneralNames r1 = new org.bouncycastle.asn1.x509.GeneralNames
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            org.bouncycastle.asn1.x509.GeneralName r3 = new org.bouncycastle.asn1.x509.GeneralName
            r3.<init>(r5)
            r2.<init>(r3)
            r1.<init>(r2)
            r0.<init>(r1)
            r4.form = r0
            return
    }

    private java.lang.Object[] getNames() {
            r5 = this;
            org.bouncycastle.asn1.ASN1Encodable r0 = r5.form
            boolean r1 = r0 instanceof org.bouncycastle.asn1.x509.V2Form
            if (r1 == 0) goto Ld
            org.bouncycastle.asn1.x509.V2Form r0 = (org.bouncycastle.asn1.x509.V2Form) r0
            org.bouncycastle.asn1.x509.GeneralNames r0 = r0.getIssuerName()
            goto Lf
        Ld:
            org.bouncycastle.asn1.x509.GeneralNames r0 = (org.bouncycastle.asn1.x509.GeneralNames) r0
        Lf:
            org.bouncycastle.asn1.x509.GeneralName[] r0 = r0.getNames()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.length
            r1.<init>(r2)
            r2 = 0
        L1a:
            int r3 = r0.length
            if (r2 == r3) goto L46
            r3 = r0[r2]
            int r3 = r3.getTagNo()
            r4 = 4
            if (r3 != r4) goto L43
            javax.security.auth.x500.X500Principal r3 = new javax.security.auth.x500.X500Principal     // Catch: java.io.IOException -> L3b
            r4 = r0[r2]     // Catch: java.io.IOException -> L3b
            org.bouncycastle.asn1.DEREncodable r4 = r4.getName()     // Catch: java.io.IOException -> L3b
            org.bouncycastle.asn1.ASN1Encodable r4 = (org.bouncycastle.asn1.ASN1Encodable) r4     // Catch: java.io.IOException -> L3b
            byte[] r4 = r4.getEncoded()     // Catch: java.io.IOException -> L3b
            r3.<init>(r4)     // Catch: java.io.IOException -> L3b
            r1.add(r3)     // Catch: java.io.IOException -> L3b
            goto L43
        L3b:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "badly formed Name object"
            r0.<init>(r1)
            throw r0
        L43:
            int r2 = r2 + 1
            goto L1a
        L46:
            int r0 = r1.size()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Object[] r0 = r1.toArray(r0)
            return r0
    }

    private boolean matchesDN(javax.security.auth.x500.X500Principal r6, org.bouncycastle.asn1.x509.GeneralNames r7) {
            r5 = this;
            org.bouncycastle.asn1.x509.GeneralName[] r7 = r7.getNames()
            r0 = 0
            r1 = 0
        L6:
            int r2 = r7.length
            if (r1 == r2) goto L2c
            r2 = r7[r1]
            int r3 = r2.getTagNo()
            r4 = 4
            if (r3 != r4) goto L29
            javax.security.auth.x500.X500Principal r3 = new javax.security.auth.x500.X500Principal     // Catch: java.io.IOException -> L29
            org.bouncycastle.asn1.DEREncodable r2 = r2.getName()     // Catch: java.io.IOException -> L29
            org.bouncycastle.asn1.ASN1Encodable r2 = (org.bouncycastle.asn1.ASN1Encodable) r2     // Catch: java.io.IOException -> L29
            byte[] r2 = r2.getEncoded()     // Catch: java.io.IOException -> L29
            r3.<init>(r2)     // Catch: java.io.IOException -> L29
            boolean r2 = r3.equals(r6)     // Catch: java.io.IOException -> L29
            if (r2 == 0) goto L29
            r6 = 1
            return r6
        L29:
            int r1 = r1 + 1
            goto L6
        L2c:
            return r0
    }

    @Override
    public java.lang.Object clone() {
            r2 = this;
            org.bouncycastle.x509.AttributeCertificateIssuer r0 = new org.bouncycastle.x509.AttributeCertificateIssuer
            org.bouncycastle.asn1.ASN1Encodable r1 = r2.form
            org.bouncycastle.asn1.x509.AttCertIssuer r1 = org.bouncycastle.asn1.x509.AttCertIssuer.getInstance(r1)
            r0.<init>(r1)
            return r0
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            if (r2 != r1) goto L4
            r2 = 1
            return r2
        L4:
            boolean r0 = r2 instanceof org.bouncycastle.x509.AttributeCertificateIssuer
            if (r0 != 0) goto La
            r2 = 0
            return r2
        La:
            org.bouncycastle.x509.AttributeCertificateIssuer r2 = (org.bouncycastle.x509.AttributeCertificateIssuer) r2
            org.bouncycastle.asn1.ASN1Encodable r0 = r1.form
            org.bouncycastle.asn1.ASN1Encodable r2 = r2.form
            boolean r2 = r0.equals(r2)
            return r2
    }

    public java.security.Principal[] getPrincipals() {
            r4 = this;
            java.lang.Object[] r0 = r4.getNames()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
        La:
            int r3 = r0.length
            if (r2 == r3) goto L1b
            r3 = r0[r2]
            boolean r3 = r3 instanceof java.security.Principal
            if (r3 == 0) goto L18
            r3 = r0[r2]
            r1.add(r3)
        L18:
            int r2 = r2 + 1
            goto La
        L1b:
            int r0 = r1.size()
            java.security.Principal[] r0 = new java.security.Principal[r0]
            java.lang.Object[] r0 = r1.toArray(r0)
            java.security.Principal[] r0 = (java.security.Principal[]) r0
            java.security.Principal[] r0 = (java.security.Principal[]) r0
            return r0
    }

    public int hashCode() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Encodable r0 = r1.form
            int r0 = r0.hashCode()
            return r0
    }

    @Override
    public boolean match(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof java.security.cert.X509Certificate
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.security.cert.Certificate r2 = (java.security.cert.Certificate) r2
            boolean r2 = r1.match(r2)
            return r2
    }

    @Override
    public boolean match(java.security.cert.Certificate r6) {
            r5 = this;
            boolean r0 = r6 instanceof java.security.cert.X509Certificate
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.security.cert.X509Certificate r6 = (java.security.cert.X509Certificate) r6
            org.bouncycastle.asn1.ASN1Encodable r0 = r5.form
            boolean r2 = r0 instanceof org.bouncycastle.asn1.x509.V2Form
            r3 = 1
            if (r2 == 0) goto L50
            org.bouncycastle.asn1.x509.V2Form r0 = (org.bouncycastle.asn1.x509.V2Form) r0
            org.bouncycastle.asn1.x509.IssuerSerial r2 = r0.getBaseCertificateID()
            if (r2 == 0) goto L41
            org.bouncycastle.asn1.x509.IssuerSerial r2 = r0.getBaseCertificateID()
            org.bouncycastle.asn1.DERInteger r2 = r2.getSerial()
            java.math.BigInteger r2 = r2.getValue()
            java.math.BigInteger r4 = r6.getSerialNumber()
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L40
            javax.security.auth.x500.X500Principal r6 = r6.getIssuerX500Principal()
            org.bouncycastle.asn1.x509.IssuerSerial r0 = r0.getBaseCertificateID()
            org.bouncycastle.asn1.x509.GeneralNames r0 = r0.getIssuer()
            boolean r6 = r5.matchesDN(r6, r0)
            if (r6 == 0) goto L40
            r1 = 1
        L40:
            return r1
        L41:
            org.bouncycastle.asn1.x509.GeneralNames r0 = r0.getIssuerName()
            javax.security.auth.x500.X500Principal r6 = r6.getSubjectX500Principal()
            boolean r6 = r5.matchesDN(r6, r0)
            if (r6 == 0) goto L5d
            return r3
        L50:
            org.bouncycastle.asn1.x509.GeneralNames r0 = (org.bouncycastle.asn1.x509.GeneralNames) r0
            javax.security.auth.x500.X500Principal r6 = r6.getSubjectX500Principal()
            boolean r6 = r5.matchesDN(r6, r0)
            if (r6 == 0) goto L5d
            return r3
        L5d:
            return r1
    }
}
