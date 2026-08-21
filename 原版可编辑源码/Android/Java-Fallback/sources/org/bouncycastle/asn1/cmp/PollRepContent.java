package org.bouncycastle.asn1.cmp;

public class PollRepContent extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERInteger certReqId;
    private org.bouncycastle.asn1.DERInteger checkAfter;
    private org.bouncycastle.asn1.cmp.PKIFreeText reason;

    private PollRepContent(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r2.certReqId = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r2.checkAfter = r0
            int r0 = r3.size()
            r1 = 2
            if (r0 <= r1) goto L2a
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r1)
            org.bouncycastle.asn1.cmp.PKIFreeText r3 = org.bouncycastle.asn1.cmp.PKIFreeText.getInstance(r3)
            r2.reason = r3
        L2a:
            return
    }

    public static org.bouncycastle.asn1.cmp.PollRepContent getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.PollRepContent
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.PollRepContent r3 = (org.bouncycastle.asn1.cmp.PollRepContent) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.PollRepContent r0 = new org.bouncycastle.asn1.cmp.PollRepContent
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

    public org.bouncycastle.asn1.DERInteger getCertReqId() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.certReqId
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getCheckAfter() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.checkAfter
            return r0
    }

    public org.bouncycastle.asn1.cmp.PKIFreeText getReason() {
            r1 = this;
            org.bouncycastle.asn1.cmp.PKIFreeText r0 = r1.reason
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r2.certReqId
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.checkAfter
            r0.add(r1)
            org.bouncycastle.asn1.cmp.PKIFreeText r1 = r2.reason
            if (r1 == 0) goto L16
            r0.add(r1)
        L16:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
