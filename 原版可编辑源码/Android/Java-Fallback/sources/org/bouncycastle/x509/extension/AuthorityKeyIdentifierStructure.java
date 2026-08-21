package org.bouncycastle.x509.extension;

public class AuthorityKeyIdentifierStructure extends org.bouncycastle.asn1.x509.AuthorityKeyIdentifier {
    public AuthorityKeyIdentifierStructure(java.security.PublicKey r1) throws java.security.InvalidKeyException {
            r0 = this;
            org.bouncycastle.asn1.ASN1Sequence r1 = fromKey(r1)
            r0.<init>(r1)
            return
    }

    public AuthorityKeyIdentifierStructure(java.security.cert.X509Certificate r1) throws java.security.cert.CertificateParsingException {
            r0 = this;
            org.bouncycastle.asn1.ASN1Sequence r1 = fromCertificate(r1)
            r0.<init>(r1)
            return
    }

    public AuthorityKeyIdentifierStructure(byte[] r1) throws java.io.IOException {
            r0 = this;
            org.bouncycastle.asn1.ASN1Object r1 = org.bouncycastle.x509.extension.X509ExtensionUtil.fromExtensionValue(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            return
    }

    private static org.bouncycastle.asn1.ASN1Sequence fromCertificate(java.security.cert.X509Certificate r4) throws java.security.cert.CertificateParsingException {
            int r0 = r4.getVersion()     // Catch: java.lang.Exception -> L9e
            r1 = 3
            if (r0 == r1) goto L3d
            org.bouncycastle.asn1.x509.GeneralName r0 = new org.bouncycastle.asn1.x509.GeneralName     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.jce.X509Principal r1 = org.bouncycastle.jce.PrincipalUtil.getIssuerX509Principal(r4)     // Catch: java.lang.Exception -> L9e
            r0.<init>(r1)     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r1 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.ASN1InputStream r2 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L9e
            java.security.PublicKey r3 = r4.getPublicKey()     // Catch: java.lang.Exception -> L9e
            byte[] r3 = r3.getEncoded()     // Catch: java.lang.Exception -> L9e
            r2.<init>(r3)     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.DERObject r2 = r2.readObject()     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2     // Catch: java.lang.Exception -> L9e
            r1.<init>(r2)     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.x509.AuthorityKeyIdentifier r2 = new org.bouncycastle.asn1.x509.AuthorityKeyIdentifier     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.x509.GeneralNames r3 = new org.bouncycastle.asn1.x509.GeneralNames     // Catch: java.lang.Exception -> L9e
            r3.<init>(r0)     // Catch: java.lang.Exception -> L9e
            java.math.BigInteger r4 = r4.getSerialNumber()     // Catch: java.lang.Exception -> L9e
            r2.<init>(r1, r3, r4)     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.DERObject r4 = r2.toASN1Object()     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4     // Catch: java.lang.Exception -> L9e
            return r4
        L3d:
            org.bouncycastle.asn1.x509.GeneralName r0 = new org.bouncycastle.asn1.x509.GeneralName     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.jce.X509Principal r1 = org.bouncycastle.jce.PrincipalUtil.getIssuerX509Principal(r4)     // Catch: java.lang.Exception -> L9e
            r0.<init>(r1)     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Extensions.SubjectKeyIdentifier     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = r1.getId()     // Catch: java.lang.Exception -> L9e
            byte[] r1 = r4.getExtensionValue(r1)     // Catch: java.lang.Exception -> L9e
            if (r1 == 0) goto L71
            org.bouncycastle.asn1.ASN1Object r1 = org.bouncycastle.x509.extension.X509ExtensionUtil.fromExtensionValue(r1)     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.ASN1OctetString r1 = (org.bouncycastle.asn1.ASN1OctetString) r1     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.x509.AuthorityKeyIdentifier r2 = new org.bouncycastle.asn1.x509.AuthorityKeyIdentifier     // Catch: java.lang.Exception -> L9e
            byte[] r1 = r1.getOctets()     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.x509.GeneralNames r3 = new org.bouncycastle.asn1.x509.GeneralNames     // Catch: java.lang.Exception -> L9e
            r3.<init>(r0)     // Catch: java.lang.Exception -> L9e
            java.math.BigInteger r4 = r4.getSerialNumber()     // Catch: java.lang.Exception -> L9e
            r2.<init>(r1, r3, r4)     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.DERObject r4 = r2.toASN1Object()     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4     // Catch: java.lang.Exception -> L9e
            return r4
        L71:
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r1 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.ASN1InputStream r2 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L9e
            java.security.PublicKey r3 = r4.getPublicKey()     // Catch: java.lang.Exception -> L9e
            byte[] r3 = r3.getEncoded()     // Catch: java.lang.Exception -> L9e
            r2.<init>(r3)     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.DERObject r2 = r2.readObject()     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2     // Catch: java.lang.Exception -> L9e
            r1.<init>(r2)     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.x509.AuthorityKeyIdentifier r2 = new org.bouncycastle.asn1.x509.AuthorityKeyIdentifier     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.x509.GeneralNames r3 = new org.bouncycastle.asn1.x509.GeneralNames     // Catch: java.lang.Exception -> L9e
            r3.<init>(r0)     // Catch: java.lang.Exception -> L9e
            java.math.BigInteger r4 = r4.getSerialNumber()     // Catch: java.lang.Exception -> L9e
            r2.<init>(r1, r3, r4)     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.DERObject r4 = r2.toASN1Object()     // Catch: java.lang.Exception -> L9e
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4     // Catch: java.lang.Exception -> L9e
            return r4
        L9e:
            r4 = move-exception
            java.security.cert.CertificateParsingException r0 = new java.security.cert.CertificateParsingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Exception extracting certificate details: "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private static org.bouncycastle.asn1.ASN1Sequence fromKey(java.security.PublicKey r3) throws java.security.InvalidKeyException {
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo     // Catch: java.lang.Exception -> L20
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L20
            byte[] r3 = r3.getEncoded()     // Catch: java.lang.Exception -> L20
            r1.<init>(r3)     // Catch: java.lang.Exception -> L20
            org.bouncycastle.asn1.DERObject r3 = r1.readObject()     // Catch: java.lang.Exception -> L20
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3     // Catch: java.lang.Exception -> L20
            r0.<init>(r3)     // Catch: java.lang.Exception -> L20
            org.bouncycastle.asn1.x509.AuthorityKeyIdentifier r3 = new org.bouncycastle.asn1.x509.AuthorityKeyIdentifier     // Catch: java.lang.Exception -> L20
            r3.<init>(r0)     // Catch: java.lang.Exception -> L20
            org.bouncycastle.asn1.DERObject r3 = r3.toASN1Object()     // Catch: java.lang.Exception -> L20
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3     // Catch: java.lang.Exception -> L20
            return r3
        L20:
            r3 = move-exception
            java.security.InvalidKeyException r0 = new java.security.InvalidKeyException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "can't process key: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }
}
