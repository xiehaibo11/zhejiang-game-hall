package org.bouncycastle.asn1.cms;

public class OtherRecipientInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERObjectIdentifier oriType;
    private org.bouncycastle.asn1.DEREncodable oriValue;

    public OtherRecipientInfo(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r0)
            r1.oriType = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            r1.oriValue = r2
            return
    }

    public OtherRecipientInfo(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.DEREncodable r2) {
            r0 = this;
            r0.<init>()
            r0.oriType = r1
            r0.oriValue = r2
            return
    }

    public static org.bouncycastle.asn1.cms.OtherRecipientInfo getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.OtherRecipientInfo
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.OtherRecipientInfo r0 = new org.bouncycastle.asn1.cms.OtherRecipientInfo
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid OtherRecipientInfo: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cms.OtherRecipientInfo r3 = (org.bouncycastle.asn1.cms.OtherRecipientInfo) r3
            return r3
    }

    public static org.bouncycastle.asn1.cms.OtherRecipientInfo getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cms.OtherRecipientInfo r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getType() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.oriType
            return r0
    }

    public org.bouncycastle.asn1.DEREncodable getValue() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.oriValue
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.oriType
            r0.add(r1)
            org.bouncycastle.asn1.DEREncodable r1 = r2.oriValue
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
