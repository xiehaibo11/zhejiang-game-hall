package org.bouncycastle.asn1.cms;

public class RecipientIdentifier extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DEREncodable id;

    public RecipientIdentifier(org.bouncycastle.asn1.ASN1OctetString r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 0
            r0.<init>(r1, r1, r3)
            r2.id = r0
            return
    }

    public RecipientIdentifier(org.bouncycastle.asn1.DERObject r1) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            return
    }

    public RecipientIdentifier(org.bouncycastle.asn1.cms.IssuerAndSerialNumber r1) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            return
    }

    public static org.bouncycastle.asn1.cms.RecipientIdentifier getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L4a
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.RecipientIdentifier
            if (r0 == 0) goto L7
            goto L4a
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.IssuerAndSerialNumber
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.RecipientIdentifier r0 = new org.bouncycastle.asn1.cms.RecipientIdentifier
            org.bouncycastle.asn1.cms.IssuerAndSerialNumber r3 = (org.bouncycastle.asn1.cms.IssuerAndSerialNumber) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L1f
            org.bouncycastle.asn1.cms.RecipientIdentifier r0 = new org.bouncycastle.asn1.cms.RecipientIdentifier
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            r0.<init>(r3)
            return r0
        L1f:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERObject
            if (r0 == 0) goto L2b
            org.bouncycastle.asn1.cms.RecipientIdentifier r0 = new org.bouncycastle.asn1.cms.RecipientIdentifier
            org.bouncycastle.asn1.DERObject r3 = (org.bouncycastle.asn1.DERObject) r3
            r0.<init>(r3)
            return r0
        L2b:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Illegal object in RecipientIdentifier: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L4a:
            org.bouncycastle.asn1.cms.RecipientIdentifier r3 = (org.bouncycastle.asn1.cms.RecipientIdentifier) r3
            return r3
    }

    public org.bouncycastle.asn1.DEREncodable getId() {
            r2 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r2.id
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r1 == 0) goto Le
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            r1 = 0
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0, r1)
            return r0
        Le:
            org.bouncycastle.asn1.cms.IssuerAndSerialNumber r0 = org.bouncycastle.asn1.cms.IssuerAndSerialNumber.getInstance(r0)
            return r0
    }

    public boolean isTagged() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.id
            boolean r0 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
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
