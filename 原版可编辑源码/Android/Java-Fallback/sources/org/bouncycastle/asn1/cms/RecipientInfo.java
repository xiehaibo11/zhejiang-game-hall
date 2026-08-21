package org.bouncycastle.asn1.cms;

public class RecipientInfo extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DEREncodable info;

    public RecipientInfo(org.bouncycastle.asn1.DERObject r1) {
            r0 = this;
            r0.<init>()
            r0.info = r1
            return
    }

    public RecipientInfo(org.bouncycastle.asn1.cms.KEKRecipientInfo r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 0
            r2 = 2
            r0.<init>(r1, r2, r4)
            r3.info = r0
            return
    }

    public RecipientInfo(org.bouncycastle.asn1.cms.KeyAgreeRecipientInfo r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 0
            r2 = 1
            r0.<init>(r1, r2, r4)
            r3.info = r0
            return
    }

    public RecipientInfo(org.bouncycastle.asn1.cms.KeyTransRecipientInfo r1) {
            r0 = this;
            r0.<init>()
            r0.info = r1
            return
    }

    public RecipientInfo(org.bouncycastle.asn1.cms.OtherRecipientInfo r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 0
            r2 = 4
            r0.<init>(r1, r2, r4)
            r3.info = r0
            return
    }

    public RecipientInfo(org.bouncycastle.asn1.cms.PasswordRecipientInfo r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 0
            r2 = 3
            r0.<init>(r1, r2, r4)
            r3.info = r0
            return
    }

    public static org.bouncycastle.asn1.cms.RecipientInfo getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L3e
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.RecipientInfo
            if (r0 == 0) goto L7
            goto L3e
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.RecipientInfo r0 = new org.bouncycastle.asn1.cms.RecipientInfo
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L1f
            org.bouncycastle.asn1.cms.RecipientInfo r0 = new org.bouncycastle.asn1.cms.RecipientInfo
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            r0.<init>(r3)
            return r0
        L1f:
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
        L3e:
            org.bouncycastle.asn1.cms.RecipientInfo r3 = (org.bouncycastle.asn1.cms.RecipientInfo) r3
            return r3
    }

    private org.bouncycastle.asn1.cms.KEKRecipientInfo getKEKInfo(org.bouncycastle.asn1.ASN1TaggedObject r2) {
            r1 = this;
            boolean r0 = r2.isExplicit()
            if (r0 == 0) goto Lc
            r0 = 1
        L7:
            org.bouncycastle.asn1.cms.KEKRecipientInfo r2 = org.bouncycastle.asn1.cms.KEKRecipientInfo.getInstance(r2, r0)
            return r2
        Lc:
            r0 = 0
            goto L7
    }

    public org.bouncycastle.asn1.DEREncodable getInfo() {
            r4 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r4.info
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r1 == 0) goto L35
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r1 = r0.getTagNo()
            r2 = 1
            r3 = 0
            if (r1 == r2) goto L30
            r2 = 2
            if (r1 == r2) goto L2b
            r2 = 3
            if (r1 == r2) goto L26
            r2 = 4
            if (r1 != r2) goto L1e
            org.bouncycastle.asn1.cms.OtherRecipientInfo r0 = org.bouncycastle.asn1.cms.OtherRecipientInfo.getInstance(r0, r3)
            return r0
        L1e:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "unknown tag"
            r0.<init>(r1)
            throw r0
        L26:
            org.bouncycastle.asn1.cms.PasswordRecipientInfo r0 = org.bouncycastle.asn1.cms.PasswordRecipientInfo.getInstance(r0, r3)
            return r0
        L2b:
            org.bouncycastle.asn1.cms.KEKRecipientInfo r0 = r4.getKEKInfo(r0)
            return r0
        L30:
            org.bouncycastle.asn1.cms.KeyAgreeRecipientInfo r0 = org.bouncycastle.asn1.cms.KeyAgreeRecipientInfo.getInstance(r0, r3)
            return r0
        L35:
            org.bouncycastle.asn1.cms.KeyTransRecipientInfo r0 = org.bouncycastle.asn1.cms.KeyTransRecipientInfo.getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getVersion() {
            r4 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r4.info
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r1 == 0) goto L42
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r1 = r0.getTagNo()
            r2 = 1
            r3 = 0
            if (r1 == r2) goto L39
            r2 = 2
            if (r1 == r2) goto L30
            r2 = 3
            if (r1 == r2) goto L27
            r0 = 4
            if (r1 != r0) goto L1f
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r3)
            return r0
        L1f:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "unknown tag"
            r0.<init>(r1)
            throw r0
        L27:
            org.bouncycastle.asn1.cms.PasswordRecipientInfo r0 = org.bouncycastle.asn1.cms.PasswordRecipientInfo.getInstance(r0, r3)
            org.bouncycastle.asn1.DERInteger r0 = r0.getVersion()
            return r0
        L30:
            org.bouncycastle.asn1.cms.KEKRecipientInfo r0 = r4.getKEKInfo(r0)
            org.bouncycastle.asn1.DERInteger r0 = r0.getVersion()
            return r0
        L39:
            org.bouncycastle.asn1.cms.KeyAgreeRecipientInfo r0 = org.bouncycastle.asn1.cms.KeyAgreeRecipientInfo.getInstance(r0, r3)
            org.bouncycastle.asn1.DERInteger r0 = r0.getVersion()
            return r0
        L42:
            org.bouncycastle.asn1.cms.KeyTransRecipientInfo r0 = org.bouncycastle.asn1.cms.KeyTransRecipientInfo.getInstance(r0)
            org.bouncycastle.asn1.DERInteger r0 = r0.getVersion()
            return r0
    }

    public boolean isTagged() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.info
            boolean r0 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.info
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            return r0
    }
}
