package org.bouncycastle.asn1.x9;

public class OtherInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x9.KeySpecificInfo keyInfo;
    private org.bouncycastle.asn1.ASN1OctetString partyAInfo;
    private org.bouncycastle.asn1.ASN1OctetString suppPubInfo;

    public OtherInfo(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            java.util.Enumeration r4 = r4.getObjects()
            org.bouncycastle.asn1.x9.KeySpecificInfo r0 = new org.bouncycastle.asn1.x9.KeySpecificInfo
            java.lang.Object r1 = r4.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            r3.keyInfo = r0
        L14:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L3f
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERTaggedObject r0 = (org.bouncycastle.asn1.DERTaggedObject) r0
            int r1 = r0.getTagNo()
            if (r1 != 0) goto L2f
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            r3.partyAInfo = r0
            goto L14
        L2f:
            int r1 = r0.getTagNo()
            r2 = 2
            if (r1 != r2) goto L14
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            r3.suppPubInfo = r0
            goto L14
        L3f:
            return
    }

    public OtherInfo(org.bouncycastle.asn1.x9.KeySpecificInfo r1, org.bouncycastle.asn1.ASN1OctetString r2, org.bouncycastle.asn1.ASN1OctetString r3) {
            r0 = this;
            r0.<init>()
            r0.keyInfo = r1
            r0.partyAInfo = r2
            r0.suppPubInfo = r3
            return
    }

    public org.bouncycastle.asn1.x9.KeySpecificInfo getKeyInfo() {
            r1 = this;
            org.bouncycastle.asn1.x9.KeySpecificInfo r0 = r1.keyInfo
            return r0
    }

    public org.bouncycastle.asn1.ASN1OctetString getPartyAInfo() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.partyAInfo
            return r0
    }

    public org.bouncycastle.asn1.ASN1OctetString getSuppPubInfo() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.suppPubInfo
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x9.KeySpecificInfo r1 = r4.keyInfo
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r4.partyAInfo
            if (r1 == 0) goto L19
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 0
            org.bouncycastle.asn1.ASN1OctetString r3 = r4.partyAInfo
            r1.<init>(r2, r3)
            r0.add(r1)
        L19:
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 2
            org.bouncycastle.asn1.ASN1OctetString r3 = r4.suppPubInfo
            r1.<init>(r2, r3)
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
