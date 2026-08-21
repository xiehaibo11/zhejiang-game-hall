package org.bouncycastle.asn1;

public class DERInteger extends org.bouncycastle.asn1.ASN1Object {
    byte[] bytes;

    public DERInteger(int r3) {
            r2 = this;
            r2.<init>()
            long r0 = (long) r3
            java.math.BigInteger r3 = java.math.BigInteger.valueOf(r0)
            byte[] r3 = r3.toByteArray()
            r2.bytes = r3
            return
    }

    public DERInteger(java.math.BigInteger r1) {
            r0 = this;
            r0.<init>()
            byte[] r1 = r1.toByteArray()
            r0.bytes = r1
            return
    }

    public DERInteger(byte[] r1) {
            r0 = this;
            r0.<init>()
            r0.bytes = r1
            return
    }

    public static org.bouncycastle.asn1.DERInteger getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L45
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERInteger
            if (r0 == 0) goto L7
            goto L45
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L17
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            byte[] r3 = r3.getOctets()
            r0.<init>(r3)
            return r0
        L17:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L26
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            org.bouncycastle.asn1.DERObject r3 = r3.getObject()
            org.bouncycastle.asn1.DERInteger r3 = getInstance(r3)
            return r3
        L26:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "illegal object in getInstance: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L45:
            org.bouncycastle.asn1.DERInteger r3 = (org.bouncycastle.asn1.DERInteger) r3
            return r3
    }

    public static org.bouncycastle.asn1.DERInteger getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.DERInteger r0 = getInstance(r0)
            return r0
    }

    @Override
    boolean asn1Equals(org.bouncycastle.asn1.DERObject r5) {
            r4 = this;
            boolean r0 = r5 instanceof org.bouncycastle.asn1.DERInteger
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.asn1.DERInteger r5 = (org.bouncycastle.asn1.DERInteger) r5
            byte[] r0 = r4.bytes
            int r0 = r0.length
            byte[] r2 = r5.bytes
            int r2 = r2.length
            if (r0 == r2) goto L11
            return r1
        L11:
            r0 = 0
        L12:
            byte[] r2 = r4.bytes
            int r3 = r2.length
            if (r0 == r3) goto L23
            r2 = r2[r0]
            byte[] r3 = r5.bytes
            r3 = r3[r0]
            if (r2 == r3) goto L20
            return r1
        L20:
            int r0 = r0 + 1
            goto L12
        L23:
            r5 = 1
            return r5
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r3) throws java.io.IOException {
            r2 = this;
            byte[] r0 = r2.bytes
            r1 = 2
            r3.writeEncoded(r1, r0)
            return
    }

    public java.math.BigInteger getPositiveValue() {
            r3 = this;
            java.math.BigInteger r0 = new java.math.BigInteger
            byte[] r1 = r3.bytes
            r2 = 1
            r0.<init>(r2, r1)
            return r0
    }

    public java.math.BigInteger getValue() {
            r2 = this;
            java.math.BigInteger r0 = new java.math.BigInteger
            byte[] r1 = r2.bytes
            r0.<init>(r1)
            return r0
    }

    @Override
    public int hashCode() {
            r4 = this;
            r0 = 0
            r1 = 0
        L2:
            byte[] r2 = r4.bytes
            int r3 = r2.length
            if (r0 == r3) goto L12
            r2 = r2[r0]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r3 = r0 % 4
            int r2 = r2 << r3
            r1 = r1 ^ r2
            int r0 = r0 + 1
            goto L2
        L12:
            return r1
    }

    public java.lang.String toString() {
            r1 = this;
            java.math.BigInteger r0 = r1.getValue()
            java.lang.String r0 = r0.toString()
            return r0
    }
}
