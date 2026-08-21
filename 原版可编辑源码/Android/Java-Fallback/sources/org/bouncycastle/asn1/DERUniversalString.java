package org.bouncycastle.asn1;

public class DERUniversalString extends org.bouncycastle.asn1.ASN1Object implements org.bouncycastle.asn1.DERString {
    private static final char[] table = null;
    private byte[] string;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            org.bouncycastle.asn1.DERUniversalString.table = r0
            return
    }

    public DERUniversalString(byte[] r1) {
            r0 = this;
            r0.<init>()
            r0.string = r1
            return
    }

    public static org.bouncycastle.asn1.DERUniversalString getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L36
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERUniversalString
            if (r0 == 0) goto L7
            goto L36
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L17
            org.bouncycastle.asn1.DERUniversalString r0 = new org.bouncycastle.asn1.DERUniversalString
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            byte[] r3 = r3.getOctets()
            r0.<init>(r3)
            return r0
        L17:
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
        L36:
            org.bouncycastle.asn1.DERUniversalString r3 = (org.bouncycastle.asn1.DERUniversalString) r3
            return r3
    }

    public static org.bouncycastle.asn1.DERUniversalString getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.DERUniversalString r0 = getInstance(r0)
            return r0
    }

    @Override
    boolean asn1Equals(org.bouncycastle.asn1.DERObject r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DERUniversalString
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.lang.String r0 = r1.getString()
            org.bouncycastle.asn1.DERUniversalString r2 = (org.bouncycastle.asn1.DERUniversalString) r2
            java.lang.String r2 = r2.getString()
            boolean r2 = r0.equals(r2)
            return r2
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r3) throws java.io.IOException {
            r2 = this;
            byte[] r0 = r2.getOctets()
            r1 = 28
            r3.writeEncoded(r1, r0)
            return
    }

    public byte[] getOctets() {
            r1 = this;
            byte[] r0 = r1.string
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
            char[] r3 = org.bouncycastle.asn1.DERUniversalString.table
            r4 = r1[r2]
            int r4 = r4 >>> 4
            r4 = r4 & 15
            char r3 = r3[r4]
            r0.append(r3)
            char[] r3 = org.bouncycastle.asn1.DERUniversalString.table
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
            r1 = this;
            java.lang.String r0 = r1.getString()
            int r0 = r0.hashCode()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.getString()
            return r0
    }
}
