package org.bouncycastle.asn1.cms;

public class OriginatorInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1Set certs;
    private org.bouncycastle.asn1.ASN1Set crls;

    public OriginatorInfo(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            int r0 = r5.size()
            if (r0 == 0) goto L61
            r1 = 1
            r2 = 0
            if (r0 == r1) goto L31
            r3 = 2
            if (r0 != r3) goto L29
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            org.bouncycastle.asn1.ASN1Set r0 = org.bouncycastle.asn1.ASN1Set.getInstance(r0, r2)
            r4.certs = r0
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r5 = (org.bouncycastle.asn1.ASN1TaggedObject) r5
        L22:
            org.bouncycastle.asn1.ASN1Set r5 = org.bouncycastle.asn1.ASN1Set.getInstance(r5, r2)
            r4.crls = r5
            goto L61
        L29:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "OriginatorInfo too big"
            r5.<init>(r0)
            throw r5
        L31:
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1TaggedObject r5 = (org.bouncycastle.asn1.ASN1TaggedObject) r5
            int r0 = r5.getTagNo()
            if (r0 == 0) goto L5b
            if (r0 != r1) goto L40
            goto L22
        L40:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad tag in OriginatorInfo: "
            r1.append(r2)
            int r5 = r5.getTagNo()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        L5b:
            org.bouncycastle.asn1.ASN1Set r5 = org.bouncycastle.asn1.ASN1Set.getInstance(r5, r2)
            r4.certs = r5
        L61:
            return
    }

    public OriginatorInfo(org.bouncycastle.asn1.ASN1Set r1, org.bouncycastle.asn1.ASN1Set r2) {
            r0 = this;
            r0.<init>()
            r0.certs = r1
            r0.crls = r2
            return
    }

    public static org.bouncycastle.asn1.cms.OriginatorInfo getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.OriginatorInfo
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.OriginatorInfo r0 = new org.bouncycastle.asn1.cms.OriginatorInfo
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid OriginatorInfo: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cms.OriginatorInfo r3 = (org.bouncycastle.asn1.cms.OriginatorInfo) r3
            return r3
    }

    public static org.bouncycastle.asn1.cms.OriginatorInfo getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cms.OriginatorInfo r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.ASN1Set getCRLs() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.crls
            return r0
    }

    public org.bouncycastle.asn1.ASN1Set getCertificates() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.certs
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1Set r1 = r5.certs
            r2 = 0
            if (r1 == 0) goto L14
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.ASN1Set r3 = r5.certs
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L14:
            org.bouncycastle.asn1.ASN1Set r1 = r5.crls
            if (r1 == 0) goto L23
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 1
            org.bouncycastle.asn1.ASN1Set r4 = r5.crls
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L23:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
