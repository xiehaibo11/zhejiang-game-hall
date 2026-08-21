package org.bouncycastle.asn1.ocsp;

public class CrlID extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERInteger crlNum;
    org.bouncycastle.asn1.DERGeneralizedTime crlTime;
    org.bouncycastle.asn1.DERIA5String crlUrl;

    public CrlID(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            java.util.Enumeration r5 = r5.getObjects()
        L7:
            boolean r0 = r5.hasMoreElements()
            if (r0 == 0) goto L4f
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r1 = r0.getTagNo()
            r2 = 1
            if (r1 == 0) goto L48
            if (r1 == r2) goto L41
            r3 = 2
            if (r1 != r3) goto L26
            org.bouncycastle.asn1.DERGeneralizedTime r0 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r0, r2)
            r4.crlTime = r0
            goto L7
        L26:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown tag number: "
            r1.append(r2)
            int r0 = r0.getTagNo()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r5.<init>(r0)
            throw r5
        L41:
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0, r2)
            r4.crlNum = r0
            goto L7
        L48:
            org.bouncycastle.asn1.DERIA5String r0 = org.bouncycastle.asn1.DERIA5String.getInstance(r0, r2)
            r4.crlUrl = r0
            goto L7
        L4f:
            return
    }

    public org.bouncycastle.asn1.DERInteger getCrlNum() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.crlNum
            return r0
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getCrlTime() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1.crlTime
            return r0
    }

    public org.bouncycastle.asn1.DERIA5String getCrlUrl() {
            r1 = this;
            org.bouncycastle.asn1.DERIA5String r0 = r1.crlUrl
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERIA5String r1 = r5.crlUrl
            r2 = 1
            if (r1 == 0) goto L15
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 0
            org.bouncycastle.asn1.DERIA5String r4 = r5.crlUrl
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L15:
            org.bouncycastle.asn1.DERInteger r1 = r5.crlNum
            if (r1 == 0) goto L23
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERInteger r3 = r5.crlNum
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L23:
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r5.crlTime
            if (r1 == 0) goto L32
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 2
            org.bouncycastle.asn1.DERGeneralizedTime r4 = r5.crlTime
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L32:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
