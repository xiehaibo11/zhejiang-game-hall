package org.bouncycastle.asn1.x509;

public class AttributeCertificateInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.AttCertValidityPeriod attrCertValidityPeriod;
    private org.bouncycastle.asn1.ASN1Sequence attributes;
    private org.bouncycastle.asn1.x509.X509Extensions extensions;
    private org.bouncycastle.asn1.x509.Holder holder;
    private org.bouncycastle.asn1.x509.AttCertIssuer issuer;
    private org.bouncycastle.asn1.DERBitString issuerUniqueID;
    private org.bouncycastle.asn1.DERInteger serialNumber;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier signature;
    private org.bouncycastle.asn1.DERInteger version;

    public AttributeCertificateInfo(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 7
            if (r0 < r1) goto L90
            int r0 = r4.size()
            r2 = 9
            if (r0 > r2) goto L90
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r3.version = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.Holder r0 = org.bouncycastle.asn1.x509.Holder.getInstance(r0)
            r3.holder = r0
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AttCertIssuer r0 = org.bouncycastle.asn1.x509.AttCertIssuer.getInstance(r0)
            r3.issuer = r0
            r0 = 3
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r3.signature = r0
            r0 = 4
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r3.serialNumber = r0
            r0 = 5
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AttCertValidityPeriod r0 = org.bouncycastle.asn1.x509.AttCertValidityPeriod.getInstance(r0)
            r3.attrCertValidityPeriod = r0
            r0 = 6
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0)
            r3.attributes = r0
        L5f:
            int r0 = r4.size()
            if (r1 >= r0) goto L8f
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1Encodable r0 = (org.bouncycastle.asn1.ASN1Encodable) r0
            boolean r2 = r0 instanceof org.bouncycastle.asn1.DERBitString
            if (r2 == 0) goto L7a
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.DERBitString r0 = org.bouncycastle.asn1.DERBitString.getInstance(r0)
            r3.issuerUniqueID = r0
            goto L8c
        L7a:
            boolean r2 = r0 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r2 != 0) goto L82
            boolean r0 = r0 instanceof org.bouncycastle.asn1.x509.X509Extensions
            if (r0 == 0) goto L8c
        L82:
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.x509.X509Extensions r0 = org.bouncycastle.asn1.x509.X509Extensions.getInstance(r0)
            r3.extensions = r0
        L8c:
            int r1 = r1 + 1
            goto L5f
        L8f:
            return
        L90:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r4 = r4.size()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public static org.bouncycastle.asn1.x509.AttributeCertificateInfo getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.AttributeCertificateInfo
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r3 = (org.bouncycastle.asn1.x509.AttributeCertificateInfo) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r0 = new org.bouncycastle.asn1.x509.AttributeCertificateInfo
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

    public static org.bouncycastle.asn1.x509.AttributeCertificateInfo getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.AttCertValidityPeriod getAttrCertValidityPeriod() {
            r1 = this;
            org.bouncycastle.asn1.x509.AttCertValidityPeriod r0 = r1.attrCertValidityPeriod
            return r0
    }

    public org.bouncycastle.asn1.ASN1Sequence getAttributes() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.attributes
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getExtensions() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = r1.extensions
            return r0
    }

    public org.bouncycastle.asn1.x509.Holder getHolder() {
            r1 = this;
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            return r0
    }

    public org.bouncycastle.asn1.x509.AttCertIssuer getIssuer() {
            r1 = this;
            org.bouncycastle.asn1.x509.AttCertIssuer r0 = r1.issuer
            return r0
    }

    public org.bouncycastle.asn1.DERBitString getIssuerUniqueID() {
            r1 = this;
            org.bouncycastle.asn1.DERBitString r0 = r1.issuerUniqueID
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

    public org.bouncycastle.asn1.DERInteger getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r2.version
            r0.add(r1)
            org.bouncycastle.asn1.x509.Holder r1 = r2.holder
            r0.add(r1)
            org.bouncycastle.asn1.x509.AttCertIssuer r1 = r2.issuer
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.signature
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.serialNumber
            r0.add(r1)
            org.bouncycastle.asn1.x509.AttCertValidityPeriod r1 = r2.attrCertValidityPeriod
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r2.attributes
            r0.add(r1)
            org.bouncycastle.asn1.DERBitString r1 = r2.issuerUniqueID
            if (r1 == 0) goto L2f
            r0.add(r1)
        L2f:
            org.bouncycastle.asn1.x509.X509Extensions r1 = r2.extensions
            if (r1 == 0) goto L36
            r0.add(r1)
        L36:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
