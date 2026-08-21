package org.bouncycastle.asn1;

public class DERBitString extends org.bouncycastle.asn1.ASN1Object implements org.bouncycastle.asn1.DERString {
    private static final char[] table = null;
    protected byte[] data;
    protected int padBits;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            org.bouncycastle.asn1.DERBitString.table = r0
            return
    }

    protected DERBitString(byte r3, int r4) {
            r2 = this;
            r2.<init>()
            r0 = 1
            byte[] r0 = new byte[r0]
            r2.data = r0
            r1 = 0
            r0[r1] = r3
            r2.padBits = r4
            return
    }

    public DERBitString(org.bouncycastle.asn1.DEREncodable r4) {
            r3 = this;
            r3.<init>()
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> L1d
            r0.<init>()     // Catch: java.io.IOException -> L1d
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream     // Catch: java.io.IOException -> L1d
            r1.<init>(r0)     // Catch: java.io.IOException -> L1d
            r1.writeObject(r4)     // Catch: java.io.IOException -> L1d
            r1.close()     // Catch: java.io.IOException -> L1d
            byte[] r4 = r0.toByteArray()     // Catch: java.io.IOException -> L1d
            r3.data = r4     // Catch: java.io.IOException -> L1d
            r4 = 0
            r3.padBits = r4     // Catch: java.io.IOException -> L1d
            return
        L1d:
            r4 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Error processing object : "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public DERBitString(byte[] r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public DERBitString(byte[] r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.data = r1
            r0.padBits = r2
            return
    }

    protected static byte[] getBytes(int r5) {
            r0 = 4
            r1 = 3
        L2:
            r2 = 255(0xff, float:3.57E-43)
            r3 = 1
            if (r1 < r3) goto L14
            int r3 = r1 * 8
            int r3 = r2 << r3
            r3 = r3 & r5
            if (r3 == 0) goto Lf
            goto L14
        Lf:
            int r0 = r0 + (-1)
            int r1 = r1 + (-1)
            goto L2
        L14:
            byte[] r1 = new byte[r0]
            r3 = 0
        L17:
            if (r3 >= r0) goto L24
            int r4 = r3 * 8
            int r4 = r5 >> r4
            r4 = r4 & r2
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r3 + 1
            goto L17
        L24:
            return r1
    }

    public static org.bouncycastle.asn1.DERBitString getInstance(java.lang.Object r5) {
            if (r5 == 0) goto L52
            boolean r0 = r5 instanceof org.bouncycastle.asn1.DERBitString
            if (r0 == 0) goto L7
            goto L52
        L7:
            boolean r0 = r5 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L24
            org.bouncycastle.asn1.ASN1OctetString r5 = (org.bouncycastle.asn1.ASN1OctetString) r5
            byte[] r5 = r5.getOctets()
            r0 = 0
            r1 = r5[r0]
            int r2 = r5.length
            r3 = 1
            int r2 = r2 - r3
            byte[] r2 = new byte[r2]
            int r4 = r5.length
            int r4 = r4 - r3
            java.lang.System.arraycopy(r5, r3, r2, r0, r4)
            org.bouncycastle.asn1.DERBitString r5 = new org.bouncycastle.asn1.DERBitString
            r5.<init>(r2, r1)
            return r5
        L24:
            boolean r0 = r5 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L33
            org.bouncycastle.asn1.ASN1TaggedObject r5 = (org.bouncycastle.asn1.ASN1TaggedObject) r5
            org.bouncycastle.asn1.DERObject r5 = r5.getObject()
            org.bouncycastle.asn1.DERBitString r5 = getInstance(r5)
            return r5
        L33:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "illegal object in getInstance: "
            r1.append(r2)
            java.lang.Class r5 = r5.getClass()
            java.lang.String r5 = r5.getName()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        L52:
            org.bouncycastle.asn1.DERBitString r5 = (org.bouncycastle.asn1.DERBitString) r5
            return r5
    }

    public static org.bouncycastle.asn1.DERBitString getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.DERBitString r0 = getInstance(r0)
            return r0
    }

    protected static int getPadBits(int r3) {
            r0 = 3
        L1:
            if (r0 < 0) goto L16
            if (r0 == 0) goto Le
            int r1 = r0 * 8
            int r1 = r3 >> r1
            if (r1 == 0) goto L13
            r3 = r1 & 255(0xff, float:3.57E-43)
            goto L17
        Le:
            if (r3 == 0) goto L13
            r3 = r3 & 255(0xff, float:3.57E-43)
            goto L17
        L13:
            int r0 = r0 + (-1)
            goto L1
        L16:
            r3 = 0
        L17:
            if (r3 != 0) goto L1b
            r3 = 7
            return r3
        L1b:
            r0 = 1
            r1 = 1
        L1d:
            int r3 = r3 << r0
            r2 = r3 & 255(0xff, float:3.57E-43)
            if (r2 == 0) goto L25
            int r1 = r1 + 1
            goto L1d
        L25:
            int r3 = 8 - r1
            return r3
    }

    @Override
    protected boolean asn1Equals(org.bouncycastle.asn1.DERObject r5) {
            r4 = this;
            boolean r0 = r5 instanceof org.bouncycastle.asn1.DERBitString
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.asn1.DERBitString r5 = (org.bouncycastle.asn1.DERBitString) r5
            byte[] r0 = r4.data
            int r0 = r0.length
            byte[] r2 = r5.data
            int r2 = r2.length
            if (r0 == r2) goto L11
            return r1
        L11:
            r0 = 0
        L12:
            byte[] r2 = r4.data
            int r3 = r2.length
            if (r0 == r3) goto L23
            r2 = r2[r0]
            byte[] r3 = r5.data
            r3 = r3[r0]
            if (r2 == r3) goto L20
            return r1
        L20:
            int r0 = r0 + 1
            goto L12
        L23:
            int r0 = r4.padBits
            int r5 = r5.padBits
            if (r0 != r5) goto L2a
            r1 = 1
        L2a:
            return r1
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r6) throws java.io.IOException {
            r5 = this;
            byte[] r0 = r5.getBytes()
            int r0 = r0.length
            r1 = 1
            int r0 = r0 + r1
            byte[] r2 = new byte[r0]
            int r3 = r5.getPadBits()
            byte r3 = (byte) r3
            r4 = 0
            r2[r4] = r3
            byte[] r3 = r5.getBytes()
            int r0 = r0 - r1
            java.lang.System.arraycopy(r3, r4, r2, r1, r0)
            r0 = 3
            r6.writeEncoded(r0, r2)
            return
    }

    public byte[] getBytes() {
            r1 = this;
            byte[] r0 = r1.data
            return r0
    }

    public int getPadBits() {
            r1 = this;
            int r0 = r1.padBits
            return r0
    }

    @Override
    public java.lang.String getString() {
            r5 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            java.lang.String r1 = "#"
            r0.<init>(r1)
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            org.bouncycastle.asn1.ASN1OutputStream r2 = new org.bouncycastle.asn1.ASN1OutputStream
            r2.<init>(r1)
            r2.writeObject(r5)     // Catch: java.io.IOException -> L3c
            byte[] r1 = r1.toByteArray()
            r2 = 0
        L19:
            int r3 = r1.length
            if (r2 == r3) goto L37
            char[] r3 = org.bouncycastle.asn1.DERBitString.table
            r4 = r1[r2]
            int r4 = r4 >>> 4
            r4 = r4 & 15
            char r3 = r3[r4]
            r0.append(r3)
            char[] r3 = org.bouncycastle.asn1.DERBitString.table
            r4 = r1[r2]
            r4 = r4 & 15
            char r3 = r3[r4]
            r0.append(r3)
            int r2 = r2 + 1
            goto L19
        L37:
            java.lang.String r0 = r0.toString()
            return r0
        L3c:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "internal error encoding BitString"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public int hashCode() {
            r4 = this;
            r0 = 0
            r1 = 0
        L2:
            byte[] r2 = r4.data
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

    public int intValue() {
            r4 = this;
            r0 = 0
            r1 = 0
        L2:
            byte[] r2 = r4.data
            int r3 = r2.length
            if (r0 == r3) goto L15
            r3 = 4
            if (r0 == r3) goto L15
            r2 = r2[r0]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r3 = r0 * 8
            int r2 = r2 << r3
            r1 = r1 | r2
            int r0 = r0 + 1
            goto L2
        L15:
            return r1
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.getString()
            return r0
    }
}
