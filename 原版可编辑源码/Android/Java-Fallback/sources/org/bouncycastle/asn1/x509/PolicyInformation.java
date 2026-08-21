package org.bouncycastle.asn1.x509;

public class PolicyInformation extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERObjectIdentifier policyIdentifier;
    private org.bouncycastle.asn1.ASN1Sequence policyQualifiers;

    public PolicyInformation(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 1
            if (r0 < r1) goto L2d
            int r0 = r4.size()
            r2 = 2
            if (r0 > r2) goto L2d
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r0)
            r3.policyIdentifier = r0
            int r0 = r4.size()
            if (r0 <= r1) goto L2c
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1Sequence r4 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r4)
            r3.policyQualifiers = r4
        L2c:
            return
        L2d:
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

    public PolicyInformation(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            r0 = this;
            r0.<init>()
            r0.policyIdentifier = r1
            return
    }

    public PolicyInformation(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.ASN1Sequence r2) {
            r0 = this;
            r0.<init>()
            r0.policyIdentifier = r1
            r0.policyQualifiers = r2
            return
    }

    public static org.bouncycastle.asn1.x509.PolicyInformation getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L11
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x509.PolicyInformation
            if (r0 == 0) goto L7
            goto L11
        L7:
            org.bouncycastle.asn1.x509.PolicyInformation r0 = new org.bouncycastle.asn1.x509.PolicyInformation
            org.bouncycastle.asn1.ASN1Sequence r1 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r1)
            r0.<init>(r1)
            return r0
        L11:
            org.bouncycastle.asn1.x509.PolicyInformation r1 = (org.bouncycastle.asn1.x509.PolicyInformation) r1
            return r1
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getPolicyIdentifier() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.policyIdentifier
            return r0
    }

    public org.bouncycastle.asn1.ASN1Sequence getPolicyQualifiers() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.policyQualifiers
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.policyIdentifier
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r2.policyQualifiers
            if (r1 == 0) goto L11
            r0.add(r1)
        L11:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
