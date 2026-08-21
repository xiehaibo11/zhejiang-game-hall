package org.bouncycastle.asn1.x509;

public class AttributeCertificate extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.x509.AttributeCertificateInfo acinfo;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier signatureAlgorithm;
    org.bouncycastle.asn1.DERBitString signatureValue;

    public AttributeCertificate(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 3
            if (r0 != r1) goto L2c
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r0 = org.bouncycastle.asn1.x509.AttributeCertificateInfo.getInstance(r0)
            r3.acinfo = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r3.signatureAlgorithm = r0
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERBitString r4 = org.bouncycastle.asn1.DERBitString.getInstance(r4)
            r3.signatureValue = r4
            return
        L2c:
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

    public AttributeCertificate(org.bouncycastle.asn1.x509.AttributeCertificateInfo r1, org.bouncycastle.asn1.x509.AlgorithmIdentifier r2, org.bouncycastle.asn1.DERBitString r3) {
            r0 = this;
            r0.<init>()
            r0.acinfo = r1
            r0.signatureAlgorithm = r2
            r0.signatureValue = r3
            return
    }

    public static org.bouncycastle.asn1.x509.AttributeCertificate getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.AttributeCertificate
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.AttributeCertificate r3 = (org.bouncycastle.asn1.x509.AttributeCertificate) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.AttributeCertificate r0 = new org.bouncycastle.asn1.x509.AttributeCertificate
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

    public org.bouncycastle.asn1.x509.AttributeCertificateInfo getAcinfo() {
            r1 = this;
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r0 = r1.acinfo
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getSignatureAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.signatureAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.DERBitString getSignatureValue() {
            r1 = this;
            org.bouncycastle.asn1.DERBitString r0 = r1.signatureValue
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r1 = r2.acinfo
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.signatureAlgorithm
            r0.add(r1)
            org.bouncycastle.asn1.DERBitString r1 = r2.signatureValue
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
