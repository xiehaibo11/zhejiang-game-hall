package org.bouncycastle.crypto.tls;

public class Certificate {
    protected org.bouncycastle.asn1.x509.X509CertificateStructure[] certs;

    private Certificate(org.bouncycastle.asn1.x509.X509CertificateStructure[] r1) {
            r0 = this;
            r0.<init>()
            r0.certs = r1
            return
    }

    protected static org.bouncycastle.crypto.tls.Certificate parse(java.io.InputStream r4) throws java.io.IOException {
            int r0 = org.bouncycastle.crypto.tls.TlsUtils.readUint24(r4)
            java.util.Vector r1 = new java.util.Vector
            r1.<init>()
        L9:
            if (r0 <= 0) goto L3b
            int r2 = org.bouncycastle.crypto.tls.TlsUtils.readUint24(r4)
            int r3 = r2 + 3
            int r0 = r0 - r3
            byte[] r2 = new byte[r2]
            org.bouncycastle.crypto.tls.TlsUtils.readFully(r2, r4)
            java.io.ByteArrayInputStream r3 = new java.io.ByteArrayInputStream
            r3.<init>(r2)
            org.bouncycastle.asn1.ASN1InputStream r2 = new org.bouncycastle.asn1.ASN1InputStream
            r2.<init>(r3)
            org.bouncycastle.asn1.DERObject r2 = r2.readObject()
            org.bouncycastle.asn1.x509.X509CertificateStructure r2 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r2)
            r1.addElement(r2)
            int r2 = r3.available()
            if (r2 > 0) goto L33
            goto L9
        L33:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Sorry, there is garbage data left after the certificate"
            r4.<init>(r0)
            throw r4
        L3b:
            int r4 = r1.size()
            org.bouncycastle.asn1.x509.X509CertificateStructure[] r4 = new org.bouncycastle.asn1.x509.X509CertificateStructure[r4]
            r0 = 0
        L42:
            int r2 = r1.size()
            if (r0 >= r2) goto L53
            java.lang.Object r2 = r1.elementAt(r0)
            org.bouncycastle.asn1.x509.X509CertificateStructure r2 = (org.bouncycastle.asn1.x509.X509CertificateStructure) r2
            r4[r0] = r2
            int r0 = r0 + 1
            goto L42
        L53:
            org.bouncycastle.crypto.tls.Certificate r0 = new org.bouncycastle.crypto.tls.Certificate
            r0.<init>(r4)
            return r0
    }

    public org.bouncycastle.asn1.x509.X509CertificateStructure[] getCerts() {
            r4 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure[] r0 = r4.certs
            int r1 = r0.length
            org.bouncycastle.asn1.x509.X509CertificateStructure[] r1 = new org.bouncycastle.asn1.x509.X509CertificateStructure[r1]
            int r2 = r0.length
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            return r1
    }
}
