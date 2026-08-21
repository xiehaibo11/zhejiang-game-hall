package org.bouncycastle.jce;

public class PrincipalUtil {
    public PrincipalUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.bouncycastle.jce.X509Principal getIssuerX509Principal(java.security.cert.X509CRL r1) throws java.security.cert.CRLException {
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream     // Catch: java.io.IOException -> L23
            byte[] r1 = r1.getTBSCertList()     // Catch: java.io.IOException -> L23
            r0.<init>(r1)     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.io.IOException -> L23
            r1.<init>(r0)     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.x509.TBSCertList r0 = new org.bouncycastle.asn1.x509.TBSCertList     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1     // Catch: java.io.IOException -> L23
            r0.<init>(r1)     // Catch: java.io.IOException -> L23
            org.bouncycastle.jce.X509Principal r1 = new org.bouncycastle.jce.X509Principal     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.x509.X509Name r0 = r0.getIssuer()     // Catch: java.io.IOException -> L23
            r1.<init>(r0)     // Catch: java.io.IOException -> L23
            return r1
        L23:
            r1 = move-exception
            java.security.cert.CRLException r0 = new java.security.cert.CRLException
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public static org.bouncycastle.jce.X509Principal getIssuerX509Principal(java.security.cert.X509Certificate r1) throws java.security.cert.CertificateEncodingException {
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream     // Catch: java.io.IOException -> L23
            byte[] r1 = r1.getTBSCertificate()     // Catch: java.io.IOException -> L23
            r0.<init>(r1)     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.io.IOException -> L23
            r1.<init>(r0)     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = new org.bouncycastle.asn1.x509.TBSCertificateStructure     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1     // Catch: java.io.IOException -> L23
            r0.<init>(r1)     // Catch: java.io.IOException -> L23
            org.bouncycastle.jce.X509Principal r1 = new org.bouncycastle.jce.X509Principal     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.x509.X509Name r0 = r0.getIssuer()     // Catch: java.io.IOException -> L23
            r1.<init>(r0)     // Catch: java.io.IOException -> L23
            return r1
        L23:
            r1 = move-exception
            java.security.cert.CertificateEncodingException r0 = new java.security.cert.CertificateEncodingException
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public static org.bouncycastle.jce.X509Principal getSubjectX509Principal(java.security.cert.X509Certificate r1) throws java.security.cert.CertificateEncodingException {
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream     // Catch: java.io.IOException -> L23
            byte[] r1 = r1.getTBSCertificate()     // Catch: java.io.IOException -> L23
            r0.<init>(r1)     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.io.IOException -> L23
            r1.<init>(r0)     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = new org.bouncycastle.asn1.x509.TBSCertificateStructure     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1     // Catch: java.io.IOException -> L23
            r0.<init>(r1)     // Catch: java.io.IOException -> L23
            org.bouncycastle.jce.X509Principal r1 = new org.bouncycastle.jce.X509Principal     // Catch: java.io.IOException -> L23
            org.bouncycastle.asn1.x509.X509Name r0 = r0.getSubject()     // Catch: java.io.IOException -> L23
            r1.<init>(r0)     // Catch: java.io.IOException -> L23
            return r1
        L23:
            r1 = move-exception
            java.security.cert.CertificateEncodingException r0 = new java.security.cert.CertificateEncodingException
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }
}
