package org.bouncycastle.asn1.x509;

public class GeneralSubtree extends org.bouncycastle.asn1.ASN1Encodable {
    private static final java.math.BigInteger ZERO = null;
    private org.bouncycastle.asn1.x509.GeneralName base;
    private org.bouncycastle.asn1.DERInteger maximum;
    private org.bouncycastle.asn1.DERInteger minimum;

    static {
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.asn1.x509.GeneralSubtree.ZERO = r0
            return
    }

    public GeneralSubtree(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.x509.GeneralName r1 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r1)
            r4.base = r1
            int r1 = r5.size()
            r2 = 1
            if (r1 == r2) goto L89
            r3 = 2
            if (r1 == r3) goto L53
            r0 = 3
            if (r1 != r0) goto L38
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1TaggedObject r0 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r0)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r4.minimum = r0
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r3)
            org.bouncycastle.asn1.ASN1TaggedObject r5 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r5)
            org.bouncycastle.asn1.DERInteger r5 = org.bouncycastle.asn1.DERInteger.getInstance(r5)
        L35:
            r4.maximum = r5
            goto L89
        L38:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r5 = r5.size()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        L53:
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1TaggedObject r5 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r5)
            int r1 = r5.getTagNo()
            if (r1 == 0) goto L83
            if (r1 != r2) goto L68
            org.bouncycastle.asn1.DERInteger r5 = org.bouncycastle.asn1.DERInteger.getInstance(r5, r0)
            goto L35
        L68:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad tag number: "
            r1.append(r2)
            int r5 = r5.getTagNo()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        L83:
            org.bouncycastle.asn1.DERInteger r5 = org.bouncycastle.asn1.DERInteger.getInstance(r5, r0)
            r4.minimum = r5
        L89:
            return
    }

    public GeneralSubtree(org.bouncycastle.asn1.x509.GeneralName r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r0)
            return
    }

    public GeneralSubtree(org.bouncycastle.asn1.x509.GeneralName r1, java.math.BigInteger r2, java.math.BigInteger r3) {
            r0 = this;
            r0.<init>()
            r0.base = r1
            if (r3 == 0) goto Le
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r3)
            r0.maximum = r1
        Le:
            if (r2 != 0) goto L12
            r1 = 0
            goto L17
        L12:
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r2)
        L17:
            r0.minimum = r1
            return
    }

    public static org.bouncycastle.asn1.x509.GeneralSubtree getInstance(java.lang.Object r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x509.GeneralSubtree
            if (r0 == 0) goto Lb
            org.bouncycastle.asn1.x509.GeneralSubtree r1 = (org.bouncycastle.asn1.x509.GeneralSubtree) r1
            return r1
        Lb:
            org.bouncycastle.asn1.x509.GeneralSubtree r0 = new org.bouncycastle.asn1.x509.GeneralSubtree
            org.bouncycastle.asn1.ASN1Sequence r1 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r1)
            r0.<init>(r1)
            return r0
    }

    public static org.bouncycastle.asn1.x509.GeneralSubtree getInstance(org.bouncycastle.asn1.ASN1TaggedObject r1, boolean r2) {
            org.bouncycastle.asn1.x509.GeneralSubtree r0 = new org.bouncycastle.asn1.x509.GeneralSubtree
            org.bouncycastle.asn1.ASN1Sequence r1 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r1, r2)
            r0.<init>(r1)
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralName getBase() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r1.base
            return r0
    }

    public java.math.BigInteger getMaximum() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.maximum
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.math.BigInteger r0 = r0.getValue()
            return r0
    }

    public java.math.BigInteger getMinimum() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.minimum
            if (r0 != 0) goto L7
            java.math.BigInteger r0 = org.bouncycastle.asn1.x509.GeneralSubtree.ZERO
            return r0
        L7:
            java.math.BigInteger r0 = r0.getValue()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.GeneralName r1 = r5.base
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r5.minimum
            r2 = 0
            if (r1 == 0) goto L25
            java.math.BigInteger r1 = r1.getValue()
            java.math.BigInteger r3 = org.bouncycastle.asn1.x509.GeneralSubtree.ZERO
            boolean r1 = r1.equals(r3)
            if (r1 != 0) goto L25
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERInteger r3 = r5.minimum
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L25:
            org.bouncycastle.asn1.DERInteger r1 = r5.maximum
            if (r1 == 0) goto L34
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 1
            org.bouncycastle.asn1.DERInteger r4 = r5.maximum
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L34:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
