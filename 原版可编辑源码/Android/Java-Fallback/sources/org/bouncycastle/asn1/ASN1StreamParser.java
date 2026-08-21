package org.bouncycastle.asn1;

public class ASN1StreamParser {
    private final java.io.InputStream _in;
    private final int _limit;

    public ASN1StreamParser(java.io.InputStream r2) {
            r1 = this;
            r0 = 2147483647(0x7fffffff, float:NaN)
            r1.<init>(r2, r0)
            return
    }

    public ASN1StreamParser(java.io.InputStream r1, int r2) {
            r0 = this;
            r0.<init>()
            r0._in = r1
            r0._limit = r2
            return
    }

    public ASN1StreamParser(byte[] r2) {
            r1 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r2)
            int r2 = r2.length
            r1.<init>(r0, r2)
            return
    }

    private void set00Check(boolean r3) {
            r2 = this;
            java.io.InputStream r0 = r2._in
            boolean r1 = r0 instanceof org.bouncycastle.asn1.IndefiniteLengthInputStream
            if (r1 == 0) goto Lb
            org.bouncycastle.asn1.IndefiniteLengthInputStream r0 = (org.bouncycastle.asn1.IndefiniteLengthInputStream) r0
            r0.setEofOn00(r3)
        Lb:
            return
    }

    public org.bouncycastle.asn1.DEREncodable readObject() throws java.io.IOException {
            r11 = this;
            java.io.InputStream r0 = r11._in
            int r0 = r0.read()
            r1 = -1
            if (r0 != r1) goto Lb
            r0 = 0
            return r0
        Lb:
            r1 = 0
            r11.set00Check(r1)
            r2 = r0 & 128(0x80, float:1.8E-43)
            if (r2 != 0) goto L1a
            r3 = r0 & 64
            if (r3 == 0) goto L18
            goto L1a
        L18:
            r3 = 0
            goto L20
        L1a:
            java.io.InputStream r3 = r11._in
            int r3 = org.bouncycastle.asn1.ASN1InputStream.readTagNumber(r3, r0)
        L20:
            r4 = r0 & 32
            if (r4 == 0) goto L25
            r1 = 1
        L25:
            r4 = r0 & (-33)
            java.io.InputStream r5 = r11._in
            int r6 = r11._limit
            int r5 = org.bouncycastle.asn1.ASN1InputStream.readLength(r5, r6)
            r6 = 17
            r7 = 16
            r8 = 4
            if (r5 >= 0) goto L74
            if (r1 == 0) goto L6c
            org.bouncycastle.asn1.IndefiniteLengthInputStream r1 = new org.bouncycastle.asn1.IndefiniteLengthInputStream
            java.io.InputStream r5 = r11._in
            r1.<init>(r5)
            if (r2 == 0) goto L47
            org.bouncycastle.asn1.BERTaggedObjectParser r2 = new org.bouncycastle.asn1.BERTaggedObjectParser
            r2.<init>(r0, r3, r1)
            return r2
        L47:
            org.bouncycastle.asn1.ASN1StreamParser r0 = new org.bouncycastle.asn1.ASN1StreamParser
            r0.<init>(r1)
            if (r4 == r8) goto L66
            if (r4 == r7) goto L60
            if (r4 != r6) goto L58
            org.bouncycastle.asn1.BERSetParser r1 = new org.bouncycastle.asn1.BERSetParser
            r1.<init>(r0)
            return r1
        L58:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "unknown BER object encountered"
            r0.<init>(r1)
            throw r0
        L60:
            org.bouncycastle.asn1.BERSequenceParser r1 = new org.bouncycastle.asn1.BERSequenceParser
            r1.<init>(r0)
            return r1
        L66:
            org.bouncycastle.asn1.BEROctetStringParser r1 = new org.bouncycastle.asn1.BEROctetStringParser
            r1.<init>(r0)
            return r1
        L6c:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "indefinite length primitive encoding encountered"
            r0.<init>(r1)
            throw r0
        L74:
            org.bouncycastle.asn1.DefiniteLengthInputStream r9 = new org.bouncycastle.asn1.DefiniteLengthInputStream
            java.io.InputStream r10 = r11._in
            r9.<init>(r10, r5)
            r5 = r0 & 64
            if (r5 == 0) goto L89
            org.bouncycastle.asn1.DERApplicationSpecific r0 = new org.bouncycastle.asn1.DERApplicationSpecific
            byte[] r2 = r9.toByteArray()
            r0.<init>(r1, r3, r2)
            return r0
        L89:
            if (r2 == 0) goto L91
            org.bouncycastle.asn1.BERTaggedObjectParser r1 = new org.bouncycastle.asn1.BERTaggedObjectParser
            r1.<init>(r0, r3, r9)
            return r1
        L91:
            if (r1 == 0) goto Lc4
            if (r4 == r8) goto Lb9
            if (r4 == r7) goto Lae
            if (r4 == r6) goto La3
            org.bouncycastle.asn1.DERUnknownTag r1 = new org.bouncycastle.asn1.DERUnknownTag
            byte[] r2 = r9.toByteArray()
            r1.<init>(r0, r2)
            return r1
        La3:
            org.bouncycastle.asn1.DERSetParser r0 = new org.bouncycastle.asn1.DERSetParser
            org.bouncycastle.asn1.ASN1StreamParser r1 = new org.bouncycastle.asn1.ASN1StreamParser
            r1.<init>(r9)
            r0.<init>(r1)
            return r0
        Lae:
            org.bouncycastle.asn1.DERSequenceParser r0 = new org.bouncycastle.asn1.DERSequenceParser
            org.bouncycastle.asn1.ASN1StreamParser r1 = new org.bouncycastle.asn1.ASN1StreamParser
            r1.<init>(r9)
            r0.<init>(r1)
            return r0
        Lb9:
            org.bouncycastle.asn1.BEROctetStringParser r0 = new org.bouncycastle.asn1.BEROctetStringParser
            org.bouncycastle.asn1.ASN1StreamParser r1 = new org.bouncycastle.asn1.ASN1StreamParser
            r1.<init>(r9)
            r0.<init>(r1)
            return r0
        Lc4:
            if (r4 == r8) goto Lcf
            byte[] r1 = r9.toByteArray()
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.asn1.ASN1InputStream.createPrimitiveDERObject(r0, r1)
            return r0
        Lcf:
            org.bouncycastle.asn1.DEROctetStringParser r0 = new org.bouncycastle.asn1.DEROctetStringParser
            r0.<init>(r9)
            return r0
    }

    org.bouncycastle.asn1.ASN1EncodableVector readVector() throws java.io.IOException {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
        L5:
            org.bouncycastle.asn1.DEREncodable r1 = r2.readObject()
            if (r1 == 0) goto L13
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            r0.add(r1)
            goto L5
        L13:
            return r0
    }
}
