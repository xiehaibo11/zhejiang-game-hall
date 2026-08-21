package org.bouncycastle.asn1.cmp;

public class InfoTypeAndValue extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERObjectIdentifier infoType;
    private org.bouncycastle.asn1.ASN1Encodable infoValue;

    private InfoTypeAndValue(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r0)
            r2.infoType = r0
            int r0 = r3.size()
            r1 = 1
            if (r0 <= r1) goto L1d
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1Encodable r3 = (org.bouncycastle.asn1.ASN1Encodable) r3
            r2.infoValue = r3
        L1d:
            return
    }

    public static org.bouncycastle.asn1.cmp.InfoTypeAndValue getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.InfoTypeAndValue
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.InfoTypeAndValue r3 = (org.bouncycastle.asn1.cmp.InfoTypeAndValue) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.InfoTypeAndValue r0 = new org.bouncycastle.asn1.cmp.InfoTypeAndValue
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid object: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getInfoType() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.infoType
            return r0
    }

    public org.bouncycastle.asn1.ASN1Encodable getInfoValue() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Encodable r0 = r1.infoValue
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.infoType
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Encodable r1 = r2.infoValue
            if (r1 == 0) goto L11
            r0.add(r1)
        L11:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
