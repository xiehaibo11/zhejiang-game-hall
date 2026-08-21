package org.bouncycastle.asn1.x509;

public class V3TBSCertificateGenerator {
    private boolean altNamePresentAndCritical;
    org.bouncycastle.asn1.x509.Time endDate;
    org.bouncycastle.asn1.x509.X509Extensions extensions;
    org.bouncycastle.asn1.x509.X509Name issuer;
    org.bouncycastle.asn1.DERInteger serialNumber;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier signature;
    org.bouncycastle.asn1.x509.Time startDate;
    org.bouncycastle.asn1.x509.X509Name subject;
    org.bouncycastle.asn1.x509.SubjectPublicKeyInfo subjectPublicKeyInfo;
    org.bouncycastle.asn1.DERTaggedObject version;

    public V3TBSCertificateGenerator() {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r2 = 2
            r1.<init>(r2)
            r2 = 0
            r0.<init>(r2, r1)
            r3.version = r0
            return
    }

    public org.bouncycastle.asn1.x509.TBSCertificateStructure generateTBSCertificate() {
            r4 = this;
            org.bouncycastle.asn1.DERInteger r0 = r4.serialNumber
            if (r0 == 0) goto L7c
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r4.signature
            if (r0 == 0) goto L7c
            org.bouncycastle.asn1.x509.X509Name r0 = r4.issuer
            if (r0 == 0) goto L7c
            org.bouncycastle.asn1.x509.Time r0 = r4.startDate
            if (r0 == 0) goto L7c
            org.bouncycastle.asn1.x509.Time r0 = r4.endDate
            if (r0 == 0) goto L7c
            org.bouncycastle.asn1.x509.X509Name r0 = r4.subject
            if (r0 != 0) goto L1c
            boolean r0 = r4.altNamePresentAndCritical
            if (r0 == 0) goto L7c
        L1c:
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = r4.subjectPublicKeyInfo
            if (r0 == 0) goto L7c
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERTaggedObject r1 = r4.version
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r4.serialNumber
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r4.signature
            r0.add(r1)
            org.bouncycastle.asn1.x509.X509Name r1 = r4.issuer
            r0.add(r1)
            org.bouncycastle.asn1.ASN1EncodableVector r1 = new org.bouncycastle.asn1.ASN1EncodableVector
            r1.<init>()
            org.bouncycastle.asn1.x509.Time r2 = r4.startDate
            r1.add(r2)
            org.bouncycastle.asn1.x509.Time r2 = r4.endDate
            r1.add(r2)
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r1)
            r0.add(r2)
            org.bouncycastle.asn1.x509.X509Name r1 = r4.subject
            if (r1 == 0) goto L55
            goto L5a
        L55:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>()
        L5a:
            r0.add(r1)
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r1 = r4.subjectPublicKeyInfo
            r0.add(r1)
            org.bouncycastle.asn1.x509.X509Extensions r1 = r4.extensions
            if (r1 == 0) goto L71
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 3
            org.bouncycastle.asn1.x509.X509Extensions r3 = r4.extensions
            r1.<init>(r2, r3)
            r0.add(r1)
        L71:
            org.bouncycastle.asn1.x509.TBSCertificateStructure r1 = new org.bouncycastle.asn1.x509.TBSCertificateStructure
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r0)
            r1.<init>(r2)
            return r1
        L7c:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "not all mandatory fields set in V3 TBScertificate generator"
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

    public void setExtensions(org.bouncycastle.asn1.x509.X509Extensions r2) {
            r1 = this;
            r1.extensions = r2
            if (r2 == 0) goto L15
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.SubjectAlternativeName
            org.bouncycastle.asn1.x509.X509Extension r2 = r2.getExtension(r0)
            if (r2 == 0) goto L15
            boolean r2 = r2.isCritical()
            if (r2 == 0) goto L15
            r2 = 1
            r1.altNamePresentAndCritical = r2
        L15:
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
