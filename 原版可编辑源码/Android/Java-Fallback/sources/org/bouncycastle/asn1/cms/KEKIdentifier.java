package org.bouncycastle.asn1.cms;

public class KEKIdentifier extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERGeneralizedTime date;
    private org.bouncycastle.asn1.ASN1OctetString keyIdentifier;
    private org.bouncycastle.asn1.cms.OtherKeyAttribute other;

    public KEKIdentifier(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            r4.keyIdentifier = r0
            int r0 = r5.size()
            r1 = 1
            if (r0 == r1) goto L44
            r2 = 2
            if (r0 == r2) goto L34
            r3 = 3
            if (r0 != r3) goto L2c
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r1)
            org.bouncycastle.asn1.DERGeneralizedTime r0 = (org.bouncycastle.asn1.DERGeneralizedTime) r0
            r4.date = r0
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r2)
        L25:
            org.bouncycastle.asn1.cms.OtherKeyAttribute r5 = org.bouncycastle.asn1.cms.OtherKeyAttribute.getInstance(r5)
            r4.other = r5
            goto L44
        L2c:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid KEKIdentifier"
            r5.<init>(r0)
            throw r5
        L34:
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r1)
            boolean r0 = r0 instanceof org.bouncycastle.asn1.DERGeneralizedTime
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r1)
            if (r0 == 0) goto L25
            org.bouncycastle.asn1.DERGeneralizedTime r5 = (org.bouncycastle.asn1.DERGeneralizedTime) r5
            r4.date = r5
        L44:
            return
    }

    public KEKIdentifier(byte[] r2, org.bouncycastle.asn1.DERGeneralizedTime r3, org.bouncycastle.asn1.cms.OtherKeyAttribute r4) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            r0.<init>(r2)
            r1.keyIdentifier = r0
            r1.date = r3
            r1.other = r4
            return
    }

    public static org.bouncycastle.asn1.cms.KEKIdentifier getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.KEKIdentifier
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.KEKIdentifier r0 = new org.bouncycastle.asn1.cms.KEKIdentifier
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid KEKIdentifier: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cms.KEKIdentifier r3 = (org.bouncycastle.asn1.cms.KEKIdentifier) r3
            return r3
    }

    public static org.bouncycastle.asn1.cms.KEKIdentifier getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cms.KEKIdentifier r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getDate() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1.date
            return r0
    }

    public org.bouncycastle.asn1.ASN1OctetString getKeyIdentifier() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.keyIdentifier
            return r0
    }

    public org.bouncycastle.asn1.cms.OtherKeyAttribute getOther() {
            r1 = this;
            org.bouncycastle.asn1.cms.OtherKeyAttribute r0 = r1.other
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.keyIdentifier
            r0.add(r1)
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r2.date
            if (r1 == 0) goto L11
            r0.add(r1)
        L11:
            org.bouncycastle.asn1.cms.OtherKeyAttribute r1 = r2.other
            if (r1 == 0) goto L18
            r0.add(r1)
        L18:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
