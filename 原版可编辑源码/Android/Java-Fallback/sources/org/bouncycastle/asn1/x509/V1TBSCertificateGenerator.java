package org.bouncycastle.asn1.x509;

public class V1TBSCertificateGenerator {
    org.bouncycastle.asn1.x509.Time endDate;
    org.bouncycastle.asn1.x509.X509Name issuer;
    org.bouncycastle.asn1.DERInteger serialNumber;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier signature;
    org.bouncycastle.asn1.x509.Time startDate;
    org.bouncycastle.asn1.x509.X509Name subject;
    org.bouncycastle.asn1.x509.SubjectPublicKeyInfo subjectPublicKeyInfo;
    org.bouncycastle.asn1.DERTaggedObject version;

    public V1TBSCertificateGenerator() {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r2 = 0
            r1.<init>(r2)
            r0.<init>(r2, r1)
            r3.version = r0
            return
    }

    public org.bouncycastle.asn1.x509.TBSCertificateStructure generateTBSCertificate() {
            r3 = this;
            org.bouncycastle.asn1.DERInteger r0 = r3.serialNumber
            if (r0 == 0) goto L5c
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r3.signature
            if (r0 == 0) goto L5c
            org.bouncycastle.asn1.x509.X509Name r0 = r3.issuer
            if (r0 == 0) goto L5c
            org.bouncycastle.asn1.x509.Time r0 = r3.startDate
            if (r0 == 0) goto L5c
            org.bouncycastle.asn1.x509.Time r0 = r3.endDate
            if (r0 == 0) goto L5c
            org.bouncycastle.asn1.x509.X509Name r0 = r3.subject
            if (r0 == 0) goto L5c
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = r3.subjectPublicKeyInfo
            if (r0 == 0) goto L5c
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r3.serialNumber
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r3.signature
            r0.add(r1)
            org.bouncycastle.asn1.x509.X509Name r1 = r3.issuer
            r0.add(r1)
            org.bouncycastle.asn1.ASN1EncodableVector r1 = new org.bouncycastle.asn1.ASN1EncodableVector
            r1.<init>()
            org.bouncycastle.asn1.x509.Time r2 = r3.startDate
            r1.add(r2)
            org.bouncycastle.asn1.x509.Time r2 = r3.endDate
            r1.add(r2)
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r1)
            r0.add(r2)
            org.bouncycastle.asn1.x509.X509Name r1 = r3.subject
            r0.add(r1)
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r1 = r3.subjectPublicKeyInfo
            r0.add(r1)
            org.bouncycastle.asn1.x509.TBSCertificateStructure r1 = new org.bouncycastle.asn1.x509.TBSCertificateStructure
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r0)
            r1.<init>(r2)
            return r1
        L5c:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "not all mandatory fields set in V1 TBScertificate generator"
            r0.<init>(r1)
            throw r0
    }

    public void setEndDate(org.bouncycastle.asn1.DERUTCTime r2) {
            r1 = this;
            org.bouncycastle.asn1.x509.Time r0 = new org.bouncycastle.asn1.x509.Time
            r0.<init>(r2)
            r1.endDate = r0
            return
    }

    public void setEndDate(org.bouncycastle.asn1.x509.Time r1) {
            r0 = this;
            r0.endDate = r1
            return
    }

    public void setIssuer(org.bouncycastle.asn1.x509.X509Name r1) {
            r0 = this;
            r0.issuer = r1
            return
    }

    public void setSerialNumber(org.bouncycastle.asn1.DERInteger r1) {
            r0 = this;
            r0.serialNumber = r1
            return
    }

    public void setSignature(org.bouncycastle.asn1.x509.AlgorithmIdentifier r1) {
            r0 = this;
            r0.signature = r1
            return
    }

    public void setStartDate(org.bouncycastle.asn1.DERUTCTime r2) {
            r1 = this;
            org.bouncycastle.asn1.x509.Time r0 = new org.bouncycastle.asn1.x509.Time
            r0.<init>(r2)
            r1.startDate = r0
            return
    }

    public void setStartDate(org.bouncycastle.asn1.x509.Time r1) {
            r0 = this;
            r0.startDate = r1
            return
    }

    public void setSubject(org.bouncycastle.asn1.x509.X509Name r1) {
            r0 = this;
            r0.subject = r1
            return
    }

    public void setSubjectPublicKeyInfo(org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r1) {
            r0 = this;
            r0.subjectPublicKeyInfo = r1
            return
    }
}
