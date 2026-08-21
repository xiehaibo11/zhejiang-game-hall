package org.bouncycastle.asn1;

public class ASN1InputStream extends java.io.FilterInputStream implements org.bouncycastle.asn1.DERTags {
    private final boolean lazyEvaluate;
    private final int limit;

    public ASN1InputStream(java.io.InputStream r2) {
            r1 = this;
            r0 = 2147483647(0x7fffffff, float:NaN)
            r1.<init>(r2, r0)
            return
    }

    public ASN1InputStream(java.io.InputStream r2, int r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ASN1InputStream(java.io.InputStream r1, int r2, boolean r3) {
            r0 = this;
            r0.<init>(r1)
            r0.limit = r2
            r0.lazyEvaluate = r3
            return
    }

    public ASN1InputStream(byte[] r2) {
            r1 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r2)
            int r2 = r2.length
            r1.<init>(r0, r2)
            return
    }

    public ASN1InputStream(byte[] r2, boolean r3) {
            r1 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r2)
            int r2 = r2.length
            r1.<init>(r0, r2, r3)
            return
    }

    static org.bouncycastle.asn1.DERObject createPrimitiveDERObject(int r4, byte[] r5) {
            switch(r4) {
                case 1: goto L79;
                case 2: goto L73;
                case 3: goto L60;
                case 4: goto L5a;
                case 5: goto L57;
                case 6: goto L51;
                case 7: goto L3;
                case 8: goto L3;
                case 9: goto L3;
                case 10: goto L4b;
                case 11: goto L3;
                case 12: goto L45;
                case 13: goto L3;
                case 14: goto L3;
                case 15: goto L3;
                case 16: goto L3;
                case 17: goto L3;
                case 18: goto L3f;
                case 19: goto L39;
                case 20: goto L33;
                case 21: goto L3;
                case 22: goto L2d;
                case 23: goto L27;
                case 24: goto L21;
                case 25: goto L3;
                case 26: goto L1b;
                case 27: goto L15;
                case 28: goto Lf;
                case 29: goto L3;
                case 30: goto L9;
                default: goto L3;
            }
        L3:
            org.bouncycastle.asn1.DERUnknownTag r0 = new org.bouncycastle.asn1.DERUnknownTag
            r0.<init>(r4, r5)
            return r0
        L9:
            org.bouncycastle.asn1.DERBMPString r4 = new org.bouncycastle.asn1.DERBMPString
            r4.<init>(r5)
            return r4
        Lf:
            org.bouncycastle.asn1.DERUniversalString r4 = new org.bouncycastle.asn1.DERUniversalString
            r4.<init>(r5)
            return r4
        L15:
            org.bouncycastle.asn1.DERGeneralString r4 = new org.bouncycastle.asn1.DERGeneralString
            r4.<init>(r5)
            return r4
        L1b:
            org.bouncycastle.asn1.DERVisibleString r4 = new org.bouncycastle.asn1.DERVisibleString
            r4.<init>(r5)
            return r4
        L21:
            org.bouncycastle.asn1.DERGeneralizedTime r4 = new org.bouncycastle.asn1.DERGeneralizedTime
            r4.<init>(r5)
            return r4
        L27:
            org.bouncycastle.asn1.DERUTCTime r4 = new org.bouncycastle.asn1.DERUTCTime
            r4.<init>(r5)
            return r4
        L2d:
            org.bouncycastle.asn1.DERIA5String r4 = new org.bouncycastle.asn1.DERIA5String
            r4.<init>(r5)
            return r4
        L33:
            org.bouncycastle.asn1.DERT61String r4 = new org.bouncycastle.asn1.DERT61String
            r4.<init>(r5)
            return r4
        L39:
            org.bouncycastle.asn1.DERPrintableString r4 = new org.bouncycastle.asn1.DERPrintableString
            r4.<init>(r5)
            return r4
        L3f:
            org.bouncycastle.asn1.DERNumericString r4 = new org.bouncycastle.asn1.DERNumericString
            r4.<init>(r5)
            return r4
        L45:
            org.bouncycastle.asn1.DERUTF8String r4 = new org.bouncycastle.asn1.DERUTF8String
            r4.<init>(r5)
            return r4
        L4b:
            org.bouncycastle.asn1.DEREnumerated r4 = new org.bouncycastle.asn1.DEREnumerated
            r4.<init>(r5)
            return r4
        L51:
            org.bouncycastle.asn1.DERObjectIdentifier r4 = new org.bouncycastle.asn1.DERObjectIdentifier
            r4.<init>(r5)
            return r4
        L57:
            org.bouncycastle.asn1.DERNull r4 = org.bouncycastle.asn1.DERNull.INSTANCE
            return r4
        L5a:
            org.bouncycastle.asn1.DEROctetString r4 = new org.bouncycastle.asn1.DEROctetString
            r4.<init>(r5)
            return r4
        L60:
            r4 = 0
            r0 = r5[r4]
            int r1 = r5.length
            r2 = 1
            int r1 = r1 - r2
            byte[] r1 = new byte[r1]
            int r3 = r5.length
            int r3 = r3 - r2
            java.lang.System.arraycopy(r5, r2, r1, r4, r3)
            org.bouncycastle.asn1.DERBitString r4 = new org.bouncycastle.asn1.DERBitString
            r4.<init>(r1, r0)
            return r4
        L73:
            org.bouncycastle.asn1.DERInteger r4 = new org.bouncycastle.asn1.DERInteger
            r4.<init>(r5)
            return r4
        L79:
            org.bouncycastle.asn1.DERBoolean r4 = new org.bouncycastle.asn1.DERBoolean
            r4.<init>(r5)
            return r4
    }

    static int readLength(java.io.InputStream r4, int r5) throws java.io.IOException {
            int r0 = r4.read()
            if (r0 < 0) goto L4c
            r1 = 128(0x80, float:1.8E-43)
            if (r0 != r1) goto Lc
            r4 = -1
            return r4
        Lc:
            r1 = 127(0x7f, float:1.78E-43)
            if (r0 <= r1) goto L4b
            r0 = r0 & 127(0x7f, float:1.78E-43)
            r1 = 4
            if (r0 > r1) goto L43
            r1 = 0
            r2 = 0
        L17:
            if (r2 >= r0) goto L2d
            int r3 = r4.read()
            if (r3 < 0) goto L25
            int r1 = r1 << 8
            int r1 = r1 + r3
            int r2 = r2 + 1
            goto L17
        L25:
            java.io.EOFException r4 = new java.io.EOFException
            java.lang.String r5 = "EOF found reading length"
            r4.<init>(r5)
            throw r4
        L2d:
            if (r1 < 0) goto L3b
            if (r1 >= r5) goto L33
            r0 = r1
            goto L4b
        L33:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "corrupted stream - out of bounds length found"
            r4.<init>(r5)
            throw r4
        L3b:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "corrupted stream - negative length found"
            r4.<init>(r5)
            throw r4
        L43:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "DER length more than 4 bytes"
            r4.<init>(r5)
            throw r4
        L4b:
            return r0
        L4c:
            java.io.EOFException r4 = new java.io.EOFException
            java.lang.String r5 = "EOF found when length expected"
            r4.<init>(r5)
            throw r4
    }

    static int readTagNumber(java.io.InputStream r2, int r3) throws java.io.IOException {
            r0 = 31
            r3 = r3 & r0
            if (r3 != r0) goto L34
            r3 = 0
            int r0 = r2.read()
            r1 = r0 & 127(0x7f, float:1.78E-43)
            if (r1 == 0) goto L2c
        Le:
            if (r0 < 0) goto L1e
            r1 = r0 & 128(0x80, float:1.8E-43)
            if (r1 == 0) goto L1e
            r0 = r0 & 127(0x7f, float:1.78E-43)
            r3 = r3 | r0
            int r3 = r3 << 7
            int r0 = r2.read()
            goto Le
        L1e:
            if (r0 < 0) goto L24
            r2 = r0 & 127(0x7f, float:1.78E-43)
            r3 = r3 | r2
            goto L34
        L24:
            java.io.EOFException r2 = new java.io.EOFException
            java.lang.String r3 = "EOF found inside tag value."
            r2.<init>(r3)
            throw r2
        L2c:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r3 = "corrupted stream - invalid high tag number found"
            r2.<init>(r3)
            throw r2
        L34:
            return r3
    }

    org.bouncycastle.asn1.ASN1EncodableVector buildDEREncodableVector(org.bouncycastle.asn1.DefiniteLengthInputStream r2) throws java.io.IOException {
            r1 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r0.<init>(r2)
            org.bouncycastle.asn1.ASN1EncodableVector r2 = r0.buildEncodableVector()
            return r2
    }

    org.bouncycastle.asn1.ASN1EncodableVector buildEncodableVector() throws java.io.IOException {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
        L5:
            org.bouncycastle.asn1.DERObject r1 = r2.readObject()
            if (r1 == 0) goto Lf
            r0.add(r1)
            goto L5
        Lf:
            return r0
    }

    protected org.bouncycastle.asn1.DERObject buildObject(int r5, int r6, int r7) throws java.io.IOException {
            r4 = this;
            r0 = r5 & 32
            r1 = 0
            if (r0 == 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            r2 = r5 & (-33)
            org.bouncycastle.asn1.DefiniteLengthInputStream r3 = new org.bouncycastle.asn1.DefiniteLengthInputStream
            r3.<init>(r4, r7)
            r7 = r5 & 64
            if (r7 == 0) goto L1d
            org.bouncycastle.asn1.DERApplicationSpecific r5 = new org.bouncycastle.asn1.DERApplicationSpecific
            byte[] r7 = r3.toByteArray()
            r5.<init>(r0, r6, r7)
            return r5
        L1d:
            r7 = r5 & 128(0x80, float:1.8E-43)
            if (r7 == 0) goto L2b
            org.bouncycastle.asn1.BERTaggedObjectParser r7 = new org.bouncycastle.asn1.BERTaggedObjectParser
            r7.<init>(r5, r6, r3)
            org.bouncycastle.asn1.DERObject r5 = r7.getDERObject()
            return r5
        L2b:
            if (r0 == 0) goto L6e
            r6 = 4
            if (r2 == r6) goto L62
            r6 = 16
            if (r2 == r6) goto L4b
            r6 = 17
            if (r2 == r6) goto L42
            org.bouncycastle.asn1.DERUnknownTag r6 = new org.bouncycastle.asn1.DERUnknownTag
            byte[] r7 = r3.toByteArray()
            r6.<init>(r5, r7)
            return r6
        L42:
            org.bouncycastle.asn1.ASN1EncodableVector r5 = r4.buildDEREncodableVector(r3)
            org.bouncycastle.asn1.DERSet r5 = org.bouncycastle.asn1.DERFactory.createSet(r5, r1)
            return r5
        L4b:
            boolean r5 = r4.lazyEvaluate
            if (r5 == 0) goto L59
            org.bouncycastle.asn1.LazyDERSequence r5 = new org.bouncycastle.asn1.LazyDERSequence
            byte[] r6 = r3.toByteArray()
            r5.<init>(r6)
            return r5
        L59:
            org.bouncycastle.asn1.ASN1EncodableVector r5 = r4.buildDEREncodableVector(r3)
            org.bouncycastle.asn1.DERSequence r5 = org.bouncycastle.asn1.DERFactory.createSequence(r5)
            return r5
        L62:
            org.bouncycastle.asn1.BERConstructedOctetString r5 = new org.bouncycastle.asn1.BERConstructedOctetString
            org.bouncycastle.asn1.ASN1EncodableVector r6 = r4.buildDEREncodableVector(r3)
            java.util.Vector r6 = r6.v
            r5.<init>(r6)
            return r5
        L6e:
            byte[] r6 = r3.toByteArray()
            org.bouncycastle.asn1.DERObject r5 = createPrimitiveDERObject(r5, r6)
            return r5
    }

    protected void readFully(byte[] r2) throws java.io.IOException {
            r1 = this;
            int r0 = org.bouncycastle.util.io.Streams.readFully(r1, r2)
            int r2 = r2.length
            if (r0 != r2) goto L8
            return
        L8:
            java.io.EOFException r2 = new java.io.EOFException
            java.lang.String r0 = "EOF encountered in middle of object"
            r2.<init>(r0)
            throw r2
    }

    protected int readLength() throws java.io.IOException {
            r1 = this;
            int r0 = r1.limit
            int r0 = readLength(r1, r0)
            return r0
    }

    public org.bouncycastle.asn1.DERObject readObject() throws java.io.IOException {
            r6 = this;
            int r0 = r6.read()
            if (r0 > 0) goto L12
            if (r0 == 0) goto La
            r0 = 0
            return r0
        La:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "unexpected end-of-contents marker"
            r0.<init>(r1)
            throw r0
        L12:
            r1 = r0 & 128(0x80, float:1.8E-43)
            r2 = 0
            if (r1 != 0) goto L1e
            r3 = r0 & 64
            if (r3 == 0) goto L1c
            goto L1e
        L1c:
            r3 = 0
            goto L22
        L1e:
            int r3 = readTagNumber(r6, r0)
        L22:
            r4 = r0 & 32
            if (r4 == 0) goto L27
            r2 = 1
        L27:
            r4 = r0 & (-33)
            int r5 = r6.readLength()
            if (r5 >= 0) goto L80
            if (r2 == 0) goto L78
            org.bouncycastle.asn1.IndefiniteLengthInputStream r2 = new org.bouncycastle.asn1.IndefiniteLengthInputStream
            r2.<init>(r6)
            if (r1 == 0) goto L42
            org.bouncycastle.asn1.BERTaggedObjectParser r1 = new org.bouncycastle.asn1.BERTaggedObjectParser
            r1.<init>(r0, r3, r2)
            org.bouncycastle.asn1.DERObject r0 = r1.getDERObject()
            return r0
        L42:
            org.bouncycastle.asn1.ASN1StreamParser r0 = new org.bouncycastle.asn1.ASN1StreamParser
            r0.<init>(r2)
            r1 = 4
            if (r4 == r1) goto L6e
            r1 = 16
            if (r4 == r1) goto L64
            r1 = 17
            if (r4 != r1) goto L5c
            org.bouncycastle.asn1.BERSetParser r1 = new org.bouncycastle.asn1.BERSetParser
            r1.<init>(r0)
            org.bouncycastle.asn1.DERObject r0 = r1.getDERObject()
            return r0
        L5c:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "unknown BER object encountered"
            r0.<init>(r1)
            throw r0
        L64:
            org.bouncycastle.asn1.BERSequenceParser r1 = new org.bouncycastle.asn1.BERSequenceParser
            r1.<init>(r0)
            org.bouncycastle.asn1.DERObject r0 = r1.getDERObject()
            return r0
        L6e:
            org.bouncycastle.asn1.BEROctetStringParser r1 = new org.bouncycastle.asn1.BEROctetStringParser
            r1.<init>(r0)
            org.bouncycastle.asn1.DERObject r0 = r1.getDERObject()
            return r0
        L78:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "indefinite length primitive encoding encountered"
            r0.<init>(r1)
            throw r0
        L80:
            org.bouncycastle.asn1.DERObject r0 = r6.buildObject(r0, r3, r5)
            return r0
    }
}
