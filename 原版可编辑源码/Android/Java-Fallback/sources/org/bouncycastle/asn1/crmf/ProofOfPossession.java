package org.bouncycastle.asn1.crmf;

public class ProofOfPossession extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    private org.bouncycastle.asn1.ASN1Encodable obj;
    private int tagNo;

    private ProofOfPossession(org.bouncycastle.asn1.ASN1TaggedObject r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.getTagNo()
            r3.tagNo = r0
            if (r0 == 0) goto L39
            r1 = 1
            r2 = 0
            if (r0 == r1) goto L34
            r1 = 2
            if (r0 == r1) goto L2f
            r1 = 3
            if (r0 != r1) goto L16
            goto L2f
        L16:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "unknown tag: "
            r0.append(r1)
            int r1 = r3.tagNo
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            throw r4
        L2f:
            org.bouncycastle.asn1.ASN1Encodable r4 = org.bouncycastle.asn1.crmf.POPOPrivKey.getInstance(r4, r2)
            goto L3b
        L34:
            org.bouncycastle.asn1.crmf.POPOSigningKey r4 = org.bouncycastle.asn1.crmf.POPOSigningKey.getInstance(r4, r2)
            goto L3b
        L39:
            org.bouncycastle.asn1.DERNull r4 = org.bouncycastle.asn1.DERNull.INSTANCE
        L3b:
            r3.obj = r4
            return
    }

    public static org.bouncycastle.asn1.crmf.ProofOfPossession getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.crmf.ProofOfPossession
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.crmf.ProofOfPossession r3 = (org.bouncycastle.asn1.crmf.ProofOfPossession) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.crmf.ProofOfPossession r0 = new org.bouncycastle.asn1.crmf.ProofOfPossession
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
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

    public org.bouncycastle.asn1.ASN1Encodable getObject() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Encodable r0 = r1.obj
            return r0
    }

    public int getType() {
            r1 = this;
            int r0 = r1.tagNo
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            int r1 = r4.tagNo
            org.bouncycastle.asn1.ASN1Encodable r2 = r4.obj
            r3 = 0
            r0.<init>(r3, r1, r2)
            return r0
    }
}
