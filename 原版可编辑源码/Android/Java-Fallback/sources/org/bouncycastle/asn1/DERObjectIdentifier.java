package org.bouncycastle.asn1;

public class DERObjectIdentifier extends org.bouncycastle.asn1.ASN1Object {
    java.lang.String identifier;

    public DERObjectIdentifier(java.lang.String r4) {
            r3 = this;
            r3.<init>()
            boolean r0 = isValidIdentifier(r4)
            if (r0 == 0) goto Lc
            r3.identifier = r4
            return
        Lc:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "string "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " not an OID"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    DERObjectIdentifier(byte[] r18) {
            r17 = this;
            r0 = r18
            r17.<init>()
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            r2 = 0
            r3 = 0
            r4 = 1
            r5 = 0
            r10 = r3
            r8 = r5
            r7 = 0
            r11 = 1
        L13:
            int r12 = r0.length
            if (r7 == r12) goto L7a
            r12 = r0[r7]
            r12 = r12 & 255(0xff, float:3.57E-43)
            r13 = 36028797018963968(0x80000000000000, double:2.848094538889218E-306)
            r15 = 46
            int r16 = (r8 > r13 ? 1 : (r8 == r13 ? 0 : -1))
            if (r16 >= 0) goto L55
            r13 = 128(0x80, double:6.3E-322)
            long r8 = r8 * r13
            r13 = r12 & 127(0x7f, float:1.78E-43)
            long r13 = (long) r13
            long r8 = r8 + r13
            r12 = r12 & 128(0x80, float:1.8E-43)
            if (r12 != 0) goto L77
            if (r11 == 0) goto L4e
            int r11 = (int) r8
            int r11 = r11 / 40
            if (r11 == 0) goto L48
            if (r11 == r4) goto L3f
            r11 = 50
            r1.append(r11)
            r11 = 80
            goto L46
        L3f:
            r11 = 49
            r1.append(r11)
            r11 = 40
        L46:
            long r8 = r8 - r11
            goto L4d
        L48:
            r11 = 48
            r1.append(r11)
        L4d:
            r11 = 0
        L4e:
            r1.append(r15)
            r1.append(r8)
            goto L76
        L55:
            if (r10 != 0) goto L5b
            java.math.BigInteger r10 = java.math.BigInteger.valueOf(r8)
        L5b:
            r13 = 7
            java.math.BigInteger r10 = r10.shiftLeft(r13)
            r13 = r12 & 127(0x7f, float:1.78E-43)
            long r13 = (long) r13
            java.math.BigInteger r13 = java.math.BigInteger.valueOf(r13)
            java.math.BigInteger r10 = r10.or(r13)
            r12 = r12 & 128(0x80, float:1.8E-43)
            if (r12 != 0) goto L77
            r1.append(r15)
            r1.append(r10)
            r10 = r3
        L76:
            r8 = r5
        L77:
            int r7 = r7 + 1
            goto L13
        L7a:
            java.lang.String r0 = r1.toString()
            r1 = r17
            r1.identifier = r0
            return
    }

    public static org.bouncycastle.asn1.DERObjectIdentifier getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L45
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            if (r0 == 0) goto L7
            goto L45
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L17
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            byte[] r3 = r3.getOctets()
            r0.<init>(r3)
            return r0
        L17:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L26
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            org.bouncycastle.asn1.DERObject r3 = r3.getObject()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = getInstance(r3)
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
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            return r3
    }

    public static org.bouncycastle.asn1.DERObjectIdentifier getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = getInstance(r0)
            return r0
    }

    private static boolean isValidIdentifier(java.lang.String r8) {
            int r0 = r8.length()
            r1 = 0
            r2 = 3
            if (r0 < r2) goto L3f
            r0 = 1
            char r2 = r8.charAt(r0)
            r3 = 46
            if (r2 == r3) goto L12
            goto L3f
        L12:
            char r2 = r8.charAt(r1)
            r4 = 48
            if (r2 < r4) goto L3f
            r5 = 50
            if (r2 <= r5) goto L1f
            goto L3f
        L1f:
            int r2 = r8.length()
            int r2 = r2 - r0
            r5 = 0
        L25:
            r6 = 2
            if (r2 < r6) goto L3e
            char r6 = r8.charAt(r2)
            if (r4 > r6) goto L34
            r7 = 57
            if (r6 > r7) goto L34
            r5 = 1
            goto L3a
        L34:
            if (r6 != r3) goto L3d
            if (r5 != 0) goto L39
            return r1
        L39:
            r5 = 0
        L3a:
            int r2 = r2 + (-1)
            goto L25
        L3d:
            return r1
        L3e:
            return r5
        L3f:
            return r1
    }

    private void writeField(java.io.OutputStream r4, long r5) throws java.io.IOException {
            r3 = this;
            r0 = 128(0x80, double:6.3E-322)
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 < 0) goto L87
            r0 = 16384(0x4000, double:8.095E-320)
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 < 0) goto L7e
            r0 = 2097152(0x200000, double:1.036131E-317)
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 < 0) goto L74
            r0 = 268435456(0x10000000, double:1.32624737E-315)
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 < 0) goto L6a
            r0 = 34359738368(0x800000000, double:1.69759663277E-313)
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 < 0) goto L60
            r0 = 4398046511104(0x40000000000, double:2.1729236899484E-311)
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 < 0) goto L56
            r0 = 562949953421312(0x2000000000000, double:2.781342323134E-309)
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 < 0) goto L4c
            r0 = 72057594037927936(0x100000000000000, double:7.291122019556398E-304)
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 < 0) goto L42
            r0 = 56
            long r0 = r5 >> r0
            int r1 = (int) r0
            r0 = r1 | 128(0x80, float:1.8E-43)
            r4.write(r0)
        L42:
            r0 = 49
            long r0 = r5 >> r0
            int r1 = (int) r0
            r0 = r1 | 128(0x80, float:1.8E-43)
            r4.write(r0)
        L4c:
            r0 = 42
            long r0 = r5 >> r0
            int r1 = (int) r0
            r0 = r1 | 128(0x80, float:1.8E-43)
            r4.write(r0)
        L56:
            r0 = 35
            long r0 = r5 >> r0
            int r1 = (int) r0
            r0 = r1 | 128(0x80, float:1.8E-43)
            r4.write(r0)
        L60:
            r0 = 28
            long r0 = r5 >> r0
            int r1 = (int) r0
            r0 = r1 | 128(0x80, float:1.8E-43)
            r4.write(r0)
        L6a:
            r0 = 21
            long r0 = r5 >> r0
            int r1 = (int) r0
            r0 = r1 | 128(0x80, float:1.8E-43)
            r4.write(r0)
        L74:
            r0 = 14
            long r0 = r5 >> r0
            int r1 = (int) r0
            r0 = r1 | 128(0x80, float:1.8E-43)
            r4.write(r0)
        L7e:
            r0 = 7
            long r0 = r5 >> r0
            int r1 = (int) r0
            r0 = r1 | 128(0x80, float:1.8E-43)
            r4.write(r0)
        L87:
            int r6 = (int) r5
            r5 = r6 & 127(0x7f, float:1.78E-43)
            r4.write(r5)
            return
    }

    private void writeField(java.io.OutputStream r6, java.math.BigInteger r7) throws java.io.IOException {
            r5 = this;
            int r0 = r7.bitLength()
            int r0 = r0 + 6
            r1 = 7
            int r0 = r0 / r1
            if (r0 != 0) goto Lf
            r7 = 0
            r6.write(r7)
            goto L32
        Lf:
            byte[] r2 = new byte[r0]
            int r0 = r0 + (-1)
            r3 = r0
        L14:
            if (r3 < 0) goto L28
            int r4 = r7.intValue()
            r4 = r4 & 127(0x7f, float:1.78E-43)
            r4 = r4 | 128(0x80, float:1.8E-43)
            byte r4 = (byte) r4
            r2[r3] = r4
            java.math.BigInteger r7 = r7.shiftRight(r1)
            int r3 = r3 + (-1)
            goto L14
        L28:
            r7 = r2[r0]
            r7 = r7 & 127(0x7f, float:1.78E-43)
            byte r7 = (byte) r7
            r2[r0] = r7
            r6.write(r2)
        L32:
            return
    }

    @Override
    boolean asn1Equals(org.bouncycastle.asn1.DERObject r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.lang.String r0 = r1.identifier
            org.bouncycastle.asn1.DERObjectIdentifier r2 = (org.bouncycastle.asn1.DERObjectIdentifier) r2
            java.lang.String r2 = r2.identifier
            boolean r2 = r0.equals(r2)
            return r2
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r7) throws java.io.IOException {
            r6 = this;
            org.bouncycastle.asn1.OIDTokenizer r0 = new org.bouncycastle.asn1.OIDTokenizer
            java.lang.String r1 = r6.identifier
            r0.<init>(r1)
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            org.bouncycastle.asn1.DEROutputStream r2 = new org.bouncycastle.asn1.DEROutputStream
            r2.<init>(r1)
            java.lang.String r3 = r0.nextToken()
            int r3 = java.lang.Integer.parseInt(r3)
            int r3 = r3 * 40
            java.lang.String r4 = r0.nextToken()
            int r4 = java.lang.Integer.parseInt(r4)
            int r3 = r3 + r4
            long r3 = (long) r3
        L25:
            r6.writeField(r1, r3)
        L28:
            boolean r3 = r0.hasMoreTokens()
            if (r3 == 0) goto L48
            java.lang.String r3 = r0.nextToken()
            int r4 = r3.length()
            r5 = 18
            if (r4 >= r5) goto L3f
            long r3 = java.lang.Long.parseLong(r3)
            goto L25
        L3f:
            java.math.BigInteger r4 = new java.math.BigInteger
            r4.<init>(r3)
            r6.writeField(r1, r4)
            goto L28
        L48:
            r2.close()
            byte[] r0 = r1.toByteArray()
            r1 = 6
            r7.writeEncoded(r1, r0)
            return
    }

    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.identifier
            return r0
    }

    @Override
    public int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.identifier
            int r0 = r0.hashCode()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.getId()
            return r0
    }
}
