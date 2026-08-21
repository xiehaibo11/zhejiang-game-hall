package org.bouncycastle.asn1.x509;

public class V2AttributeCertificateInfoGenerator {
    private org.bouncycastle.asn1.ASN1EncodableVector attributes;
    private org.bouncycastle.asn1.DERGeneralizedTime endDate;
    private org.bouncycastle.asn1.x509.X509Extensions extensions;
    private org.bouncycastle.asn1.x509.Holder holder;
    private org.bouncycastle.asn1.x509.AttCertIssuer issuer;
    private org.bouncycastle.asn1.DERBitString issuerUniqueID;
    private org.bouncycastle.asn1.DERInteger serialNumber;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier signature;
    private org.bouncycastle.asn1.DERGeneralizedTime startDate;
    private org.bouncycastle.asn1.DERInteger version;

    public V2AttributeCertificateInfoGenerator() {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 1
            r0.<init>(r1)
            r2.version = r0
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r2.attributes = r0
            return
    }

    public void addAttribute(java.lang.String r4, org.bouncycastle.asn1.ASN1Encodable r5) {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = r3.attributes
            org.bouncycastle.asn1.x509.Attribute r1 = new org.bouncycastle.asn1.x509.Attribute
            org.bouncycastle.asn1.DERObjectIdentifier r2 = new org.bouncycastle.asn1.DERObjectIdentifier
            r2.<init>(r4)
            org.bouncycastle.asn1.DERSet r4 = new org.bouncycastle.asn1.DERSet
            r4.<init>(r5)
            r1.<init>(r2, r4)
            r0.add(r1)
            return
    }

    public void addAttribute(org.bouncycastle.asn1.x509.Attribute r2) {
            r1 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = r1.attributes
            r0.add(r2)
            return
    }

    public org.bouncycastle.asn1.x509.AttributeCertificateInfo generateAttributeCertificateInfo() {
            r4 = this;
            org.bouncycastle.asn1.DERInteger r0 = r4.serialNumber
            if (r0 == 0) goto L69
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r4.signature
            if (r0 == 0) goto L69
            org.bouncycastle.asn1.x509.AttCertIssuer r0 = r4.issuer
            if (r0 == 0) goto L69
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r4.startDate
            if (r0 == 0) goto L69
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r4.endDate
            if (r0 == 0) goto L69
            org.bouncycastle.asn1.x509.Holder r0 = r4.holder
            if (r0 == 0) goto L69
            org.bouncycastle.asn1.ASN1EncodableVector r0 = r4.attributes
            if (r0 == 0) goto L69
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r4.version
            r0.add(r1)
            org.bouncycastle.asn1.x509.Holder r1 = r4.holder
            r0.add(r1)
            org.bouncycastle.asn1.x509.AttCertIssuer r1 = r4.issuer
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r4.signature
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r4.serialNumber
            r0.add(r1)
            org.bouncycastle.asn1.x509.AttCertValidityPeriod r1 = new org.bouncycastle.asn1.x509.AttCertValidityPeriod
            org.bouncycastle.asn1.DERGeneralizedTime r2 = r4.startDate
            org.bouncycastle.asn1.DERGeneralizedTime r3 = r4.endDate
            r1.<init>(r2, r3)
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            org.bouncycastle.asn1.ASN1EncodableVector r2 = r4.attributes
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERBitString r1 = r4.issuerUniqueID
            if (r1 == 0) goto L57
            r0.add(r1)
        L57:
            org.bouncycastle.asn1.x509.X509Extensions r1 = r4.extensions
            if (r1 == 0) goto L5e
            r0.add(r1)
        L5e:
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r1 = new org.bouncycastle.asn1.x509.AttributeCertificateInfo
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r0)
            r1.<init>(r2)
            return r1
        L69:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "not all mandatory fields set in V2 AttributeCertificateInfo generator"
            r0.<init>(r1)
            throw r0
    }

    public void setEndDate(org.bouncycastle.asn1.DERGeneralizedTime r1) {
            r0 = this;
            r0.endDate = r1
            return
    }

    public void setExtensions(org.bouncycastle.asn1.x509.X509Extensions r1) {
            r0 = this;
            r0.extensions = r1
            return
    }

    public void setHolder(org.bouncycastle.asn1.x509.Holder r1) {
            r0 = this;
            r0.holder = r1
            return
    }

    public void setIssuer(org.bouncycastle.asn1.x509.AttCertIssuer r1) {
            r0 = this;
            r0.issuer = r1
            return
    }

    public void setIssuerUniqueID(org.bouncycastle.asn1.DERBitString r1) {
            r0 = this;
            r0.issuerUniqueID = r1
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

    public void setStartDate(org.bouncycastle.asn1.DERGeneralizedTime r1) {
            r0 = this;
            r0.startDate = r1
            return
    }
}
