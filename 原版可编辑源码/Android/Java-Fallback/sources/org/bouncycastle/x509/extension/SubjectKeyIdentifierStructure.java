package org.bouncycastle.x509.extension;

public class SubjectKeyIdentifierStructure extends org.bouncycastle.asn1.x509.SubjectKeyIdentifier {
    private org.bouncycastle.asn1.x509.AuthorityKeyIdentifier authKeyID;

    public SubjectKeyIdentifierStructure(java.security.PublicKey r1) throws java.security.cert.CertificateParsingException {
            r0 = this;
            org.bouncycastle.asn1.ASN1OctetString r1 = fromPublicKey(r1)
            r0.<init>(r1)
            return
    }

    public SubjectKeyIdentifierStructure(byte[] r1) throws java.io.IOException {
            r0 = this;
            org.bouncycastle.asn1.ASN1Object r1 = org.bouncycastle.x509.extension.X509ExtensionUtil.fromExtensionValue(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = (org.bouncycastle.asn1.ASN1OctetString) r1
            r0.<init>(r1)
            return
    }

    private static org.bouncycastle.asn1.ASN1OctetString fromPublicKey(java.security.PublicKey r3) throws java.security.cert.CertificateParsingException {
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo     // Catch: java.lang.Exception -> L22
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L22
            byte[] r3 = r3.getEncoded()     // Catch: java.lang.Exception -> L22
            r1.<init>(r3)     // Catch: java.lang.Exception -> L22
            org.bouncycastle.asn1.DERObject r3 = r1.readObject()     // Catch: java.lang.Exception -> L22
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3     // Catch: java.lang.Exception -> L22
            r0.<init>(r3)     // Catch: java.lang.Exception -> L22
            org.bouncycastle.asn1.x509.SubjectKeyIdentifier r3 = new org.bouncycastle.asn1.x509.SubjectKeyIdentifier     // Catch: java.lang.Exception -> L22
            r3.<init>(r0)     // Catch: java.lang.Exception -> L22
            org.bouncycastle.asn1.DERObject r3 = r3.toASN1Object()     // Catch: java.lang.Exception -> L22
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3     // Catch: java.lang.Exception -> L22
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3     // Catch: java.lang.Exception -> L22
            return r3
        L22:
            r3 = move-exception
            java.security.cert.CertificateParsingException r0 = new java.security.cert.CertificateParsingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Exception extracting certificate details: "
            r1.append(r2)
            java.lang.String r3 = r3.toString()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }
}
