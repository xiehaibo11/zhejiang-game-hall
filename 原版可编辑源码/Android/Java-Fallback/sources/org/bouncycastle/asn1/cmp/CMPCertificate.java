package org.bouncycastle.asn1.cmp;

public class CMPCertificate extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    private org.bouncycastle.asn1.x509.X509CertificateStructure x509v3PKCert;

    public CMPCertificate(org.bouncycastle.asn1.x509.X509CertificateStructure r3) {
            r2 = this;
            r2.<init>()
            int r0 = r3.getVersion()
            r1 = 2
            if (r0 != r1) goto Ld
            r2.x509v3PKCert = r3
            return
        Ld:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "only version 3 certificates allowed"
            r3.<init>(r0)
            throw r3
    }

    public static org.bouncycastle.asn1.cmp.CMPCertificate getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.CMPCertificate
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.CMPCertificate r3 = (org.bouncycastle.asn1.cmp.CMPCertificate) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.X509CertificateStructure
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.CMPCertificate r0 = new org.bouncycastle.asn1.cmp.CMPCertificate
            org.bouncycastle.asn1.x509.X509CertificateStructure r3 = (org.bouncycastle.asn1.x509.X509CertificateStructure) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L21
            org.bouncycastle.asn1.cmp.CMPCertificate r0 = new org.bouncycastle.asn1.cmp.CMPCertificate
            org.bouncycastle.asn1.x509.X509CertificateStructure r3 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r3)
            r0.<init>(r3)
            return r0
        L21:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid object: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.x509.X509CertificateStructure getX509v3PKCert() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.x509v3PKCert
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.x509v3PKCert
            org.bouncycastle.asn1.DERObject r0 = r0.toASN1Object()
            return r0
    }
}
