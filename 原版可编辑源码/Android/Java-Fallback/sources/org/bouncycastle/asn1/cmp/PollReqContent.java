package org.bouncycastle.asn1.cmp;

public class PollReqContent extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1Sequence content;

    private PollReqContent(org.bouncycastle.asn1.ASN1Sequence r1) {
            r0 = this;
            r0.<init>()
            r0.content = r1
            return
    }

    public static org.bouncycastle.asn1.cmp.PollReqContent getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.PollReqContent
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.PollReqContent r3 = (org.bouncycastle.asn1.cmp.PollReqContent) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.PollReqContent r0 = new org.bouncycastle.asn1.cmp.PollReqContent
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

    private org.bouncycastle.asn1.DERInteger[] seqenceToDERIntegerArray(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            int r0 = r5.size()
            org.bouncycastle.asn1.DERInteger[] r1 = new org.bouncycastle.asn1.DERInteger[r0]
            r2 = 0
        L7:
            if (r2 == r0) goto L16
            org.bouncycastle.asn1.DEREncodable r3 = r5.getObjectAt(r2)
            org.bouncycastle.asn1.DERInteger r3 = org.bouncycastle.asn1.DERInteger.getInstance(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L7
        L16:
            return r1
    }

    public org.bouncycastle.asn1.DERInteger[][] getCertReqIds() {
            r4 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r4.content
            int r0 = r0.size()
            org.bouncycastle.asn1.DERInteger[][] r1 = new org.bouncycastle.asn1.DERInteger[r0][]
            r2 = 0
        L9:
            if (r2 == r0) goto L1c
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.content
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            org.bouncycastle.asn1.DERInteger[] r3 = r4.seqenceToDERIntegerArray(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L9
        L1c:
            return r1
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.content
            return r0
    }
}
