package org.bouncycastle.asn1.x509;

public class PolicyQualifierInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERObjectIdentifier policyQualifierId;
    private org.bouncycastle.asn1.DEREncodable qualifier;

    public PolicyQualifierInfo(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x509.PolicyQualifierId r0 = org.bouncycastle.asn1.x509.PolicyQualifierId.id_qt_cps
            r1.policyQualifierId = r0
            org.bouncycastle.asn1.DERIA5String r0 = new org.bouncycastle.asn1.DERIA5String
            r0.<init>(r2)
            r1.qualifier = r0
            return
    }

    public PolicyQualifierInfo(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 2
            if (r0 != r1) goto L1d
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r0)
            r3.policyQualifierId = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r0)
            r3.qualifier = r4
            return
        L1d:
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

    public PolicyQualifierInfo(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.DEREncodable r2) {
            r0 = this;
            r0.<init>()
            r0.policyQualifierId = r1
            r0.qualifier = r2
            return
    }

    public static org.bouncycastle.asn1.x509.PolicyQualifierInfo getInstance(java.lang.Object r1) {
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x509.PolicyQualifierInfo
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.PolicyQualifierInfo r1 = (org.bouncycastle.asn1.x509.PolicyQualifierInfo) r1
            return r1
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.PolicyQualifierInfo r0 = new org.bouncycastle.asn1.x509.PolicyQualifierInfo
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            return r0
        L13:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in getInstance."
            r1.<init>(r0)
            throw r1
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getPolicyQualifierId() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.policyQualifierId
            return r0
    }

    public org.bouncycastle.asn1.DEREncodable getQualifier() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.qualifier
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.policyQualifierId
            r0.add(r1)
            org.bouncycastle.asn1.DEREncodable r1 = r2.qualifier
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
