package org.bouncycastle.asn1.cmp;

public class PKIConfirmContent extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1Null val;

    private PKIConfirmContent(org.bouncycastle.asn1.ASN1Null r1) {
            r0 = this;
            r0.<init>()
            r0.val = r1
            return
    }

    public static org.bouncycastle.asn1.cmp.PKIConfirmContent getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.PKIConfirmContent
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.PKIConfirmContent r3 = (org.bouncycastle.asn1.cmp.PKIConfirmContent) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Null
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.PKIConfirmContent r0 = new org.bouncycastle.asn1.cmp.PKIConfirmContent
            org.bouncycastle.asn1.ASN1Null r3 = (org.bouncycastle.asn1.ASN1Null) r3
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
            org.bouncycastle.asn1.ASN1Null r0 = r1.val
            return r0
    }
}
