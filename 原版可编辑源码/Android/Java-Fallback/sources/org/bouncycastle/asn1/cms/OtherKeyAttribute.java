package org.bouncycastle.asn1.cms;

public class OtherKeyAttribute extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DEREncodable keyAttr;
    private org.bouncycastle.asn1.DERObjectIdentifier keyAttrId;

    public OtherKeyAttribute(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r1.keyAttrId = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            r1.keyAttr = r2
            return
    }

    public OtherKeyAttribute(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.DEREncodable r2) {
            r0 = this;
            r0.<init>()
            r0.keyAttrId = r1
            r0.keyAttr = r2
            return
    }

    public static org.bouncycastle.asn1.cms.OtherKeyAttribute getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.OtherKeyAttribute
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.OtherKeyAttribute r0 = new org.bouncycastle.asn1.cms.OtherKeyAttribute
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
        L32:
            org.bouncycastle.asn1.cms.OtherKeyAttribute r3 = (org.bouncycastle.asn1.cms.OtherKeyAttribute) r3
            return r3
    }

    public org.bouncycastle.asn1.DEREncodable getKeyAttr() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.keyAttr
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getKeyAttrId() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.keyAttrId
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.keyAttrId
            r0.add(r1)
            org.bouncycastle.asn1.DEREncodable r1 = r2.keyAttr
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
