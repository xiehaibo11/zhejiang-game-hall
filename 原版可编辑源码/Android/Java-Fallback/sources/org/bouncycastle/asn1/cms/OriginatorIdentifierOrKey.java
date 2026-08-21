package org.bouncycastle.asn1.cms;

public class OriginatorIdentifierOrKey extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DEREncodable id;

    public OriginatorIdentifierOrKey(org.bouncycastle.asn1.ASN1OctetString r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 0
            r0.<init>(r1, r1, r3)
            r2.id = r0
            return
    }

    public OriginatorIdentifierOrKey(org.bouncycastle.asn1.DERObject r1) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            return
    }

    public OriginatorIdentifierOrKey(org.bouncycastle.asn1.cms.IssuerAndSerialNumber r1) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            return
    }

    public OriginatorIdentifierOrKey(org.bouncycastle.asn1.cms.OriginatorPublicKey r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 0
            r2 = 1
            r0.<init>(r1, r2, r4)
            r3.id = r0
            return
    }

    public static org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERObject
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey r0 = new org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey
            org.bouncycastle.asn1.DERObject r3 = (org.bouncycastle.asn1.DERObject) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid OriginatorIdentifierOrKey: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey r3 = (org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey) r3
            return r3
    }

    public static org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            if (r1 == 0) goto Lb
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey r0 = getInstance(r0)
            return r0
        Lb:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Can't implicitly tag OriginatorIdentifierOrKey"
            r0.<init>(r1)
            throw r0
    }

    public org.bouncycastle.asn1.DEREncodable getId() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.id
            return r0
    }

    public org.bouncycastle.asn1.cms.OriginatorPublicKey getOriginatorKey() {
            r2 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r2.id
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r1 == 0) goto L19
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r0 = r0.getTagNo()
            r1 = 1
            if (r0 != r1) goto L19
            org.bouncycastle.asn1.DEREncodable r0 = r2.id
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            r1 = 0
            org.bouncycastle.asn1.cms.OriginatorPublicKey r0 = org.bouncycastle.asn1.cms.OriginatorPublicKey.getInstance(r0, r1)
            return r0
        L19:
            r0 = 0
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.id
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            return r0
    }
}
