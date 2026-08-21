package org.bouncycastle.asn1;

public class DERIA5String extends org.bouncycastle.asn1.ASN1Object implements org.bouncycastle.asn1.DERString {
    java.lang.String string;

    public DERIA5String(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public DERIA5String(java.lang.String r1, boolean r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L19
            if (r2 == 0) goto L16
            boolean r2 = isIA5String(r1)
            if (r2 == 0) goto Le
            goto L16
        Le:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "string contains illegal characters"
            r1.<init>(r2)
            throw r1
        L16:
            r0.string = r1
            return
        L19:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "string cannot be null"
            r1.<init>(r2)
            throw r1
    }

    public DERIA5String(byte[] r5) {
            r4 = this;
            r4.<init>()
            int r0 = r5.length
            char[] r1 = new char[r0]
            r2 = 0
        L7:
            if (r2 == r0) goto L13
            r3 = r5[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            char r3 = (char) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L7
        L13:
            java.lang.String r5 = new java.lang.String
            r5.<init>(r1)
            r4.string = r5
            return
    }

    public static org.bouncycastle.asn1.DERIA5String getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L45
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERIA5String
            if (r0 == 0) goto L7
            goto L45
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L17
            org.bouncycastle.asn1.DERIA5String r0 = new org.bouncycastle.asn1.DERIA5String
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            byte[] r3 = r3.getOctets()
            r0.<init>(r3)
            return r0
        L17:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L26
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            org.bouncycastle.asn1.DERObject r3 = r3.getObject()
            org.bouncycastle.asn1.DERIA5String r3 = getInstance(r3)
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
            org.bouncycastle.asn1.DERIA5String r3 = (org.bouncycastle.asn1.DERIA5String) r3
            return r3
    }

    public static org.bouncycastle.asn1.DERIA5String getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.DERIA5String r0 = getInstance(r0)
            return r0
    }

    public static boolean isIA5String(java.lang.String r4) {
            int r0 = r4.length()
            r1 = 1
            int r0 = r0 - r1
        L6:
            if (r0 < 0) goto L15
            char r2 = r4.charAt(r0)
            r3 = 127(0x7f, float:1.78E-43)
            if (r2 <= r3) goto L12
            r4 = 0
            return r4
        L12:
            int r0 = r0 + (-1)
            goto L6
        L15:
            return r1
    }

    @Override
    boolean asn1Equals(org.bouncycastle.asn1.DERObject r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DERIA5String
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            org.bouncycastle.asn1.DERIA5String r2 = (org.bouncycastle.asn1.DERIA5String) r2
            java.lang.String r0 = r1.getString()
            java.lang.String r2 = r2.getString()
            boolean r2 = r0.equals(r2)
            return r2
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r3) throws java.io.IOException {
            r2 = this;
            byte[] r0 = r2.getOctets()
            r1 = 22
            r3.writeEncoded(r1, r0)
            return
    }

    public byte[] getOctets() {
            r4 = this;
            java.lang.String r0 = r4.string
            char[] r0 = r0.toCharArray()
            int r1 = r0.length
            byte[] r1 = new byte[r1]
            r2 = 0
        La:
            int r3 = r0.length
            if (r2 == r3) goto L15
            char r3 = r0[r2]
            byte r3 = (byte) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto La
        L15:
            return r1
    }

    @Override
    public java.lang.String getString() {
            r1 = this;
            java.lang.String r0 = r1.string
            return r0
    }

    @Override
    public int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.getString()
            int r0 = r0.hashCode()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.string
            return r0
    }
}
