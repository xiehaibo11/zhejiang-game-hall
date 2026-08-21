package org.bouncycastle.asn1.x509;

public class TBSCertificateStructure extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.x509.X509ObjectIdentifiers, org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers {
    org.bouncycastle.asn1.x509.Time endDate;
    org.bouncycastle.asn1.x509.X509Extensions extensions;
    org.bouncycastle.asn1.x509.X509Name issuer;
    org.bouncycastle.asn1.DERBitString issuerUniqueId;
    org.bouncycastle.asn1.ASN1Sequence seq;
    org.bouncycastle.asn1.DERInteger serialNumber;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier signature;
    org.bouncycastle.asn1.x509.Time startDate;
    org.bouncycastle.asn1.x509.X509Name subject;
    org.bouncycastle.asn1.x509.SubjectPublicKeyInfo subjectPublicKeyInfo;
    org.bouncycastle.asn1.DERBitString subjectUniqueId;
    org.bouncycastle.asn1.DERInteger version;

    public TBSCertificateStructure(org.bouncycastle.asn1.ASN1Sequence r8) {
            r7 = this;
            r7.<init>()
            r7.seq = r8
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r8.getObjectAt(r0)
            boolean r1 = r1 instanceof org.bouncycastle.asn1.DERTaggedObject
            if (r1 == 0) goto L1a
            org.bouncycastle.asn1.DEREncodable r1 = r8.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r1 = org.bouncycastle.asn1.DERInteger.getInstance(r1)
            r7.version = r1
            r1 = 0
            goto L22
        L1a:
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r0)
            r7.version = r1
            r1 = -1
        L22:
            int r2 = r1 + 1
            org.bouncycastle.asn1.DEREncodable r2 = r8.getObjectAt(r2)
            org.bouncycastle.asn1.DERInteger r2 = org.bouncycastle.asn1.DERInteger.getInstance(r2)
            r7.serialNumber = r2
            int r2 = r1 + 2
            org.bouncycastle.asn1.DEREncodable r2 = r8.getObjectAt(r2)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r2)
            r7.signature = r2
            int r2 = r1 + 3
            org.bouncycastle.asn1.DEREncodable r2 = r8.getObjectAt(r2)
            org.bouncycastle.asn1.x509.X509Name r2 = org.bouncycastle.asn1.x509.X509Name.getInstance(r2)
            r7.issuer = r2
            int r2 = r1 + 4
            org.bouncycastle.asn1.DEREncodable r2 = r8.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2
            org.bouncycastle.asn1.DEREncodable r3 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.x509.Time r3 = org.bouncycastle.asn1.x509.Time.getInstance(r3)
            r7.startDate = r3
            r3 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r3)
            org.bouncycastle.asn1.x509.Time r2 = org.bouncycastle.asn1.x509.Time.getInstance(r2)
            r7.endDate = r2
            int r2 = r1 + 5
            org.bouncycastle.asn1.DEREncodable r2 = r8.getObjectAt(r2)
            org.bouncycastle.asn1.x509.X509Name r2 = org.bouncycastle.asn1.x509.X509Name.getInstance(r2)
            r7.subject = r2
            int r1 = r1 + 6
            org.bouncycastle.asn1.DEREncodable r2 = r8.getObjectAt(r1)
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r2 = org.bouncycastle.asn1.x509.SubjectPublicKeyInfo.getInstance(r2)
            r7.subjectPublicKeyInfo = r2
            int r2 = r8.size()
            int r2 = r2 - r1
            int r2 = r2 - r3
        L81:
            if (r2 <= 0) goto Laf
            int r4 = r1 + r2
            org.bouncycastle.asn1.DEREncodable r4 = r8.getObjectAt(r4)
            org.bouncycastle.asn1.DERTaggedObject r4 = (org.bouncycastle.asn1.DERTaggedObject) r4
            int r5 = r4.getTagNo()
            if (r5 == r3) goto La6
            r6 = 2
            if (r5 == r6) goto L9f
            r6 = 3
            if (r5 == r6) goto L98
            goto Lac
        L98:
            org.bouncycastle.asn1.x509.X509Extensions r4 = org.bouncycastle.asn1.x509.X509Extensions.getInstance(r4)
            r7.extensions = r4
            goto Lac
        L9f:
            org.bouncycastle.asn1.DERBitString r4 = org.bouncycastle.asn1.DERBitString.getInstance(r4, r0)
            r7.subjectUniqueId = r4
            goto Lac
        La6:
            org.bouncycastle.asn1.DERBitString r4 = org.bouncycastle.asn1.DERBitString.getInstance(r4, r0)
            r7.issuerUniqueId = r4
        Lac:
            int r2 = r2 + (-1)
            goto L81
        Laf:
            return
    }

    public static org.bouncycastle.asn1.x509.TBSCertificateStructure getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.TBSCertificateStructure
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.TBSCertificateStructure r3 = (org.bouncycastle.asn1.x509.TBSCertificateStructure) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = new org.bouncycastle.asn1.x509.TBSCertificateStructure
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static org.bouncycastle.asn1.x509.TBSCertificateStructure getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.Time getEndDate() {
            r1 = this;
            org.bouncycastle.asn1.x509.Time r0 = r1.endDate
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getExtensions() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = r1.extensions
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Name getIssuer() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Name r0 = r1.issuer
            return r0
    }

    public org.bouncycastle.asn1.DERBitString getIssuerUniqueId() {
            r1 = this;
            org.bouncycastle.asn1.DERBitString r0 = r1.issuerUniqueId
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getSerialNumber() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.serialNumber
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getSignature() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.signature
            return r0
    }

    public org.bouncycastle.asn1.x509.Time getStartDate() {
            r1 = this;
            org.bouncycastle.asn1.x509.Time r0 = r1.startDate
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Name getSubject() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Name r0 = r1.subject
            return r0
    }

    public org.bouncycastle.asn1.x509.SubjectPublicKeyInfo getSubjectPublicKeyInfo() {
            r1 = this;
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = r1.subjectPublicKeyInfo
            return r0
    }

    public org.bouncycastle.asn1.DERBitString getSubjectUniqueId() {
            r1 = this;
            org.bouncycastle.asn1.DERBitString r0 = r1.subjectUniqueId
            return r0
    }

    public int getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            int r0 = r0 + 1
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getVersionNumber() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.seq
            return r0
    }
}
