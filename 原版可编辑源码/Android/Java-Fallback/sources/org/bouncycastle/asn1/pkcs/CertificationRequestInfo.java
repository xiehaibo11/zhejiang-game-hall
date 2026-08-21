package org.bouncycastle.asn1.pkcs;

public class CertificationRequestInfo extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1Set attributes;
    org.bouncycastle.asn1.x509.X509Name subject;
    org.bouncycastle.asn1.x509.SubjectPublicKeyInfo subjectPKInfo;
    org.bouncycastle.asn1.DERInteger version;

    public CertificationRequestInfo(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 0
            r0.<init>(r1)
            r3.version = r0
            r0 = 0
            r3.attributes = r0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r3.version = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.X509Name r0 = org.bouncycastle.asn1.x509.X509Name.getInstance(r0)
            r3.subject = r0
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = org.bouncycastle.asn1.x509.SubjectPublicKeyInfo.getInstance(r0)
            r3.subjectPKInfo = r0
            int r0 = r4.size()
            r2 = 3
            if (r0 <= r2) goto L3f
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r2)
            org.bouncycastle.asn1.DERTaggedObject r4 = (org.bouncycastle.asn1.DERTaggedObject) r4
            org.bouncycastle.asn1.ASN1Set r4 = org.bouncycastle.asn1.ASN1Set.getInstance(r4, r1)
            r3.attributes = r4
        L3f:
            org.bouncycastle.asn1.x509.X509Name r4 = r3.subject
            if (r4 == 0) goto L4c
            org.bouncycastle.asn1.DERInteger r4 = r3.version
            if (r4 == 0) goto L4c
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r4 = r3.subjectPKInfo
            if (r4 == 0) goto L4c
            return
        L4c:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Not all mandatory fields set in CertificationRequestInfo generator."
            r4.<init>(r0)
            throw r4
    }

    public CertificationRequestInfo(org.bouncycastle.asn1.x509.X509Name r3, org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r4, org.bouncycastle.asn1.ASN1Set r5) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 0
            r0.<init>(r1)
            r2.version = r0
            r1 = 0
            r2.attributes = r1
            r2.subject = r3
            r2.subjectPKInfo = r4
            r2.attributes = r5
            if (r3 == 0) goto L1b
            if (r0 == 0) goto L1b
            if (r4 == 0) goto L1b
            return
        L1b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Not all mandatory fields set in CertificationRequestInfo generator."
            r3.<init>(r4)
            throw r3
    }

    public static org.bouncycastle.asn1.pkcs.CertificationRequestInfo getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.pkcs.CertificationRequestInfo
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.pkcs.CertificationRequestInfo r3 = (org.bouncycastle.asn1.pkcs.CertificationRequestInfo) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.pkcs.CertificationRequestInfo r0 = new org.bouncycastle.asn1.pkcs.CertificationRequestInfo
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

    public org.bouncycastle.asn1.ASN1Set getAttributes() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.attributes
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Name getSubject() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Name r0 = r1.subject
            return r0
    }

    public org.bouncycastle.asn1.x509.SubjectPublicKeyInfo getSubjectPublicKeyInfo() {
            r1 = this;
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = r1.subjectPKInfo
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r4.version
            r0.add(r1)
            org.bouncycastle.asn1.x509.X509Name r1 = r4.subject
            r0.add(r1)
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r1 = r4.subjectPKInfo
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Set r1 = r4.attributes
            if (r1 == 0) goto L23
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.ASN1Set r2 = r4.attributes
            r3 = 0
            r1.<init>(r3, r3, r2)
            r0.add(r1)
        L23:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
