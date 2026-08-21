package org.bouncycastle.asn1.esf;

public class SigPolicyQualifiers extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1Sequence qualifiers;

    public SigPolicyQualifiers(org.bouncycastle.asn1.ASN1Sequence r1) {
            r0 = this;
            r0.<init>()
            r0.qualifiers = r1
            return
    }

    public SigPolicyQualifiers(org.bouncycastle.asn1.esf.SigPolicyQualifierInfo[] r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r1 = 0
        L9:
            int r2 = r4.length
            if (r1 >= r2) goto L14
            r2 = r4[r1]
            r0.add(r2)
            int r1 = r1 + 1
            goto L9
        L14:
            org.bouncycastle.asn1.DERSequence r4 = new org.bouncycastle.asn1.DERSequence
            r4.<init>(r0)
            r3.qualifiers = r4
            return
    }

    public static org.bouncycastle.asn1.esf.SigPolicyQualifiers getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.esf.SigPolicyQualifiers
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.esf.SigPolicyQualifiers r3 = (org.bouncycastle.asn1.esf.SigPolicyQualifiers) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.esf.SigPolicyQualifiers r0 = new org.bouncycastle.asn1.esf.SigPolicyQualifiers
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in 'SigPolicyQualifiers' factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.esf.SigPolicyQualifierInfo getStringAt(int r2) {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.qualifiers
            org.bouncycastle.asn1.DEREncodable r2 = r0.getObjectAt(r2)
            org.bouncycastle.asn1.esf.SigPolicyQualifierInfo r2 = org.bouncycastle.asn1.esf.SigPolicyQualifierInfo.getInstance(r2)
            return r2
    }

    public int size() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.qualifiers
            int r0 = r0.size()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.qualifiers
            return r0
    }
}
