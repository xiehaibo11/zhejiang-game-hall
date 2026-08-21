package org.bouncycastle.ocsp;

public class CertificateID {
    public static final java.lang.String HASH_SHA1 = "1.3.14.3.2.26";
    private org.bouncycastle.asn1.ocsp.CertID id;

    public CertificateID(java.lang.String r2, java.security.cert.X509Certificate r3, java.math.BigInteger r4) throws org.bouncycastle.ocsp.OCSPException {
            r1 = this;
            java.lang.String r0 = "BC"
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public CertificateID(java.lang.String r3, java.security.cert.X509Certificate r4, java.math.BigInteger r5, java.lang.String r6) throws org.bouncycastle.ocsp.OCSPException {
            r2 = this;
            r2.<init>()
            java.security.MessageDigest r6 = java.security.MessageDigest.getInstance(r3, r6)     // Catch: java.lang.Exception -> L60
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier     // Catch: java.lang.Exception -> L60
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier     // Catch: java.lang.Exception -> L60
            r1.<init>(r3)     // Catch: java.lang.Exception -> L60
            org.bouncycastle.asn1.DERNull r3 = new org.bouncycastle.asn1.DERNull     // Catch: java.lang.Exception -> L60
            r3.<init>()     // Catch: java.lang.Exception -> L60
            r0.<init>(r1, r3)     // Catch: java.lang.Exception -> L60
            org.bouncycastle.jce.X509Principal r3 = org.bouncycastle.jce.PrincipalUtil.getSubjectX509Principal(r4)     // Catch: java.lang.Exception -> L60
            byte[] r3 = r3.getEncoded()     // Catch: java.lang.Exception -> L60
            r6.update(r3)     // Catch: java.lang.Exception -> L60
            org.bouncycastle.asn1.DEROctetString r3 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.lang.Exception -> L60
            byte[] r1 = r6.digest()     // Catch: java.lang.Exception -> L60
            r3.<init>(r1)     // Catch: java.lang.Exception -> L60
            java.security.PublicKey r4 = r4.getPublicKey()     // Catch: java.lang.Exception -> L60
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L60
            byte[] r4 = r4.getEncoded()     // Catch: java.lang.Exception -> L60
            r1.<init>(r4)     // Catch: java.lang.Exception -> L60
            org.bouncycastle.asn1.DERObject r4 = r1.readObject()     // Catch: java.lang.Exception -> L60
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r4 = org.bouncycastle.asn1.x509.SubjectPublicKeyInfo.getInstance(r4)     // Catch: java.lang.Exception -> L60
            org.bouncycastle.asn1.DERBitString r4 = r4.getPublicKeyData()     // Catch: java.lang.Exception -> L60
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L60
            r6.update(r4)     // Catch: java.lang.Exception -> L60
            org.bouncycastle.asn1.DEROctetString r4 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.lang.Exception -> L60
            byte[] r6 = r6.digest()     // Catch: java.lang.Exception -> L60
            r4.<init>(r6)     // Catch: java.lang.Exception -> L60
            org.bouncycastle.asn1.DERInteger r6 = new org.bouncycastle.asn1.DERInteger     // Catch: java.lang.Exception -> L60
            r6.<init>(r5)     // Catch: java.lang.Exception -> L60
            org.bouncycastle.asn1.ocsp.CertID r5 = new org.bouncycastle.asn1.ocsp.CertID     // Catch: java.lang.Exception -> L60
            r5.<init>(r0, r3, r4, r6)     // Catch: java.lang.Exception -> L60
            r2.id = r5     // Catch: java.lang.Exception -> L60
            return
        L60:
            r3 = move-exception
            org.bouncycastle.ocsp.OCSPException r4 = new org.bouncycastle.ocsp.OCSPException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "problem creating ID: "
            r5.append(r6)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5, r3)
            throw r4
    }

    public CertificateID(org.bouncycastle.asn1.ocsp.CertID r1) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            return
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.ocsp.CertificateID
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            org.bouncycastle.ocsp.CertificateID r2 = (org.bouncycastle.ocsp.CertificateID) r2
            org.bouncycastle.asn1.ocsp.CertID r0 = r1.id
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            org.bouncycastle.asn1.ocsp.CertID r2 = r2.id
            org.bouncycastle.asn1.DERObject r2 = r2.getDERObject()
            boolean r2 = r0.equals(r2)
            return r2
    }

    public java.lang.String getHashAlgOID() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.CertID r0 = r1.id
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getHashAlgorithm()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            java.lang.String r0 = r0.getId()
            return r0
    }

    public byte[] getIssuerKeyHash() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.CertID r0 = r1.id
            org.bouncycastle.asn1.ASN1OctetString r0 = r0.getIssuerKeyHash()
            byte[] r0 = r0.getOctets()
            return r0
    }

    public byte[] getIssuerNameHash() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.CertID r0 = r1.id
            org.bouncycastle.asn1.ASN1OctetString r0 = r0.getIssuerNameHash()
            byte[] r0 = r0.getOctets()
            return r0
    }

    public java.math.BigInteger getSerialNumber() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.CertID r0 = r1.id
            org.bouncycastle.asn1.DERInteger r0 = r0.getSerialNumber()
            java.math.BigInteger r0 = r0.getValue()
            return r0
    }

    public int hashCode() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.CertID r0 = r1.id
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            int r0 = r0.hashCode()
            return r0
    }

    public org.bouncycastle.asn1.ocsp.CertID toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.CertID r0 = r1.id
            return r0
    }
}
