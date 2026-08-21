package org.bouncycastle.asn1.pkcs;

public class SafeBag extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1Set bagAttributes;
    org.bouncycastle.asn1.DERObjectIdentifier bagId;
    org.bouncycastle.asn1.DERObject bagValue;

    public SafeBag(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r2.bagId = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERTaggedObject r0 = (org.bouncycastle.asn1.DERTaggedObject) r0
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            r2.bagValue = r0
            int r0 = r3.size()
            r1 = 3
            if (r0 != r1) goto L29
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1Set r3 = (org.bouncycastle.asn1.ASN1Set) r3
            r2.bagAttributes = r3
        L29:
            return
    }

    public SafeBag(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.DERObject r2) {
            r0 = this;
            r0.<init>()
            r0.bagId = r1
            r0.bagValue = r2
            r1 = 0
            r0.bagAttributes = r1
            return
    }

    public SafeBag(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.DERObject r2, org.bouncycastle.asn1.ASN1Set r3) {
            r0 = this;
            r0.<init>()
            r0.bagId = r1
            r0.bagValue = r2
            r0.bagAttributes = r3
            return
    }

    public org.bouncycastle.asn1.ASN1Set getBagAttributes() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.bagAttributes
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getBagId() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.bagId
            return r0
    }

    public org.bouncycastle.asn1.DERObject getBagValue() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.bagValue
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r4.bagId
            r0.add(r1)
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERObject r2 = r4.bagValue
            r3 = 0
            r1.<init>(r3, r2)
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Set r1 = r4.bagAttributes
            if (r1 == 0) goto L1c
            r0.add(r1)
        L1c:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
