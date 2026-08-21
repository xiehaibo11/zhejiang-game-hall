package org.bouncycastle.asn1.cmp;

public class CertConfirmContent extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1Sequence content;

    private CertConfirmContent(org.bouncycastle.asn1.ASN1Sequence r1) {
            r0 = this;
            r0.<init>()
            r0.content = r1
            return
    }

    public static org.bouncycastle.asn1.cmp.CertConfirmContent getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.CertConfirmContent
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.CertConfirmContent r3 = (org.bouncycastle.asn1.cmp.CertConfirmContent) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.CertConfirmContent r0 = new org.bouncycastle.asn1.cmp.CertConfirmContent
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

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.content
            return r0
    }

    public org.bouncycastle.asn1.cmp.CertStatus[] toCertStatusArray() {
            r4 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r4.content
            int r0 = r0.size()
            org.bouncycastle.asn1.cmp.CertStatus[] r1 = new org.bouncycastle.asn1.cmp.CertStatus[r0]
            r2 = 0
        L9:
            if (r2 == r0) goto L1a
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.content
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r2)
            org.bouncycastle.asn1.cmp.CertStatus r3 = org.bouncycastle.asn1.cmp.CertStatus.getInstance(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L9
        L1a:
            return r1
    }
}
