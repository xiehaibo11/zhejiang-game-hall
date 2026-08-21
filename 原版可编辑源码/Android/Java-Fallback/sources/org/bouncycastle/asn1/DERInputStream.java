package org.bouncycastle.asn1;

public class DERInputStream extends java.io.FilterInputStream implements org.bouncycastle.asn1.DERTags {
    public DERInputStream(java.io.InputStream r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    protected org.bouncycastle.asn1.DERObject buildObject(int r5, byte[] r6) throws java.io.IOException {
            r4 = this;
            r0 = 10
            if (r5 == r0) goto L135
            r0 = 12
            if (r5 == r0) goto L12f
            r0 = 30
            if (r5 == r0) goto L129
            r0 = 19
            if (r5 == r0) goto L123
            r0 = 20
            if (r5 == r0) goto L11d
            r0 = 48
            if (r5 == r0) goto L105
            r0 = 49
            if (r5 == r0) goto Le8
            r0 = 0
            switch(r5) {
                case 1: goto Le2;
                case 2: goto Ldc;
                case 3: goto Lca;
                case 4: goto Lc4;
                case 5: goto Lc2;
                case 6: goto Lbc;
                default: goto L20;
            }
        L20:
            switch(r5) {
                case 22: goto Lb6;
                case 23: goto Lb0;
                case 24: goto Laa;
                default: goto L23;
            }
        L23:
            switch(r5) {
                case 26: goto La4;
                case 27: goto L9e;
                case 28: goto L98;
                default: goto L26;
            }
        L26:
            r1 = r5 & 128(0x80, float:1.8E-43)
            if (r1 == 0) goto L92
            r1 = r5 & 31
            r2 = 31
            if (r1 == r2) goto L8a
            int r2 = r6.length
            r5 = r5 & 32
            if (r2 != 0) goto L4d
            if (r5 != 0) goto L42
            org.bouncycastle.asn1.DERTaggedObject r5 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERNull r6 = new org.bouncycastle.asn1.DERNull
            r6.<init>()
            r5.<init>(r0, r1, r6)
            return r5
        L42:
            org.bouncycastle.asn1.DERTaggedObject r5 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERConstructedSequence r6 = new org.bouncycastle.asn1.DERConstructedSequence
            r6.<init>()
            r5.<init>(r0, r1, r6)
            return r5
        L4d:
            if (r5 != 0) goto L5a
            org.bouncycastle.asn1.DERTaggedObject r5 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DEROctetString r2 = new org.bouncycastle.asn1.DEROctetString
            r2.<init>(r6)
            r5.<init>(r0, r1, r2)
            return r5
        L5a:
            java.io.ByteArrayInputStream r5 = new java.io.ByteArrayInputStream
            r5.<init>(r6)
            org.bouncycastle.asn1.BERInputStream r6 = new org.bouncycastle.asn1.BERInputStream
            r6.<init>(r5)
            org.bouncycastle.asn1.DERObject r5 = r6.readObject()
            int r2 = r6.available()
            if (r2 != 0) goto L74
            org.bouncycastle.asn1.DERTaggedObject r6 = new org.bouncycastle.asn1.DERTaggedObject
            r6.<init>(r1, r5)
            return r6
        L74:
            org.bouncycastle.asn1.DERConstructedSequence r2 = new org.bouncycastle.asn1.DERConstructedSequence
            r2.<init>()
            r2.addObject(r5)
        L7c:
            org.bouncycastle.asn1.DERObject r5 = r6.readObject()     // Catch: java.io.EOFException -> L84
            r2.addObject(r5)     // Catch: java.io.EOFException -> L84
            goto L7c
        L84:
            org.bouncycastle.asn1.DERTaggedObject r5 = new org.bouncycastle.asn1.DERTaggedObject
            r5.<init>(r0, r1, r2)
            return r5
        L8a:
            java.io.IOException r5 = new java.io.IOException
            java.lang.String r6 = "unsupported high tag encountered"
            r5.<init>(r6)
            throw r5
        L92:
            org.bouncycastle.asn1.DERUnknownTag r0 = new org.bouncycastle.asn1.DERUnknownTag
            r0.<init>(r5, r6)
            return r0
        L98:
            org.bouncycastle.asn1.DERUniversalString r5 = new org.bouncycastle.asn1.DERUniversalString
            r5.<init>(r6)
            return r5
        L9e:
            org.bouncycastle.asn1.DERGeneralString r5 = new org.bouncycastle.asn1.DERGeneralString
            r5.<init>(r6)
            return r5
        La4:
            org.bouncycastle.asn1.DERVisibleString r5 = new org.bouncycastle.asn1.DERVisibleString
            r5.<init>(r6)
            return r5
        Laa:
            org.bouncycastle.asn1.DERGeneralizedTime r5 = new org.bouncycastle.asn1.DERGeneralizedTime
            r5.<init>(r6)
            return r5
        Lb0:
            org.bouncycastle.asn1.DERUTCTime r5 = new org.bouncycastle.asn1.DERUTCTime
            r5.<init>(r6)
            return r5
        Lb6:
            org.bouncycastle.asn1.DERIA5String r5 = new org.bouncycastle.asn1.DERIA5String
            r5.<init>(r6)
            return r5
        Lbc:
            org.bouncycastle.asn1.DERObjectIdentifier r5 = new org.bouncycastle.asn1.DERObjectIdentifier
            r5.<init>(r6)
            return r5
        Lc2:
            r5 = 0
            return r5
        Lc4:
            org.bouncycastle.asn1.DEROctetString r5 = new org.bouncycastle.asn1.DEROctetString
            r5.<init>(r6)
            return r5
        Lca:
            r5 = r6[r0]
            int r1 = r6.length
            r2 = 1
            int r1 = r1 - r2
            byte[] r1 = new byte[r1]
            int r3 = r6.length
            int r3 = r3 - r2
            java.lang.System.arraycopy(r6, r2, r1, r0, r3)
            org.bouncycastle.asn1.DERBitString r6 = new org.bouncycastle.asn1.DERBitString
            r6.<init>(r1, r5)
            return r6
        Ldc:
            org.bouncycastle.asn1.DERInteger r5 = new org.bouncycastle.asn1.DERInteger
            r5.<init>(r6)
            return r5
        Le2:
            org.bouncycastle.asn1.DERBoolean r5 = new org.bouncycastle.asn1.DERBoolean
            r5.<init>(r6)
            return r5
        Le8:
            java.io.ByteArrayInputStream r5 = new java.io.ByteArrayInputStream
            r5.<init>(r6)
            org.bouncycastle.asn1.BERInputStream r6 = new org.bouncycastle.asn1.BERInputStream
            r6.<init>(r5)
            org.bouncycastle.asn1.ASN1EncodableVector r5 = new org.bouncycastle.asn1.ASN1EncodableVector
            r5.<init>()
        Lf7:
            org.bouncycastle.asn1.DERObject r0 = r6.readObject()     // Catch: java.io.EOFException -> Lff
            r5.add(r0)     // Catch: java.io.EOFException -> Lff
            goto Lf7
        Lff:
            org.bouncycastle.asn1.DERConstructedSet r6 = new org.bouncycastle.asn1.DERConstructedSet
            r6.<init>(r5)
            return r6
        L105:
            java.io.ByteArrayInputStream r5 = new java.io.ByteArrayInputStream
            r5.<init>(r6)
            org.bouncycastle.asn1.BERInputStream r6 = new org.bouncycastle.asn1.BERInputStream
            r6.<init>(r5)
            org.bouncycastle.asn1.DERConstructedSequence r5 = new org.bouncycastle.asn1.DERConstructedSequence
            r5.<init>()
        L114:
            org.bouncycastle.asn1.DERObject r0 = r6.readObject()     // Catch: java.io.EOFException -> L11c
            r5.addObject(r0)     // Catch: java.io.EOFException -> L11c
            goto L114
        L11c:
            return r5
        L11d:
            org.bouncycastle.asn1.DERT61String r5 = new org.bouncycastle.asn1.DERT61String
            r5.<init>(r6)
            return r5
        L123:
            org.bouncycastle.asn1.DERPrintableString r5 = new org.bouncycastle.asn1.DERPrintableString
            r5.<init>(r6)
            return r5
        L129:
            org.bouncycastle.asn1.DERBMPString r5 = new org.bouncycastle.asn1.DERBMPString
            r5.<init>(r6)
            return r5
        L12f:
            org.bouncycastle.asn1.DERUTF8String r5 = new org.bouncycastle.asn1.DERUTF8String
            r5.<init>(r6)
            return r5
        L135:
            org.bouncycastle.asn1.DEREnumerated r5 = new org.bouncycastle.asn1.DEREnumerated
            r5.<init>(r6)
            return r5
    }

    protected void readFully(byte[] r3) throws java.io.IOException {
            r2 = this;
            int r0 = r3.length
            if (r0 != 0) goto L4
            return
        L4:
            if (r0 <= 0) goto L18
            int r1 = r3.length
            int r1 = r1 - r0
            int r1 = r2.read(r3, r1, r0)
            if (r1 < 0) goto L10
            int r0 = r0 - r1
            goto L4
        L10:
            java.io.EOFException r3 = new java.io.EOFException
            java.lang.String r0 = "unexpected end of stream"
            r3.<init>(r0)
            throw r3
        L18:
            return
    }

    protected int readLength() throws java.io.IOException {
            r4 = this;
            int r0 = r4.read()
            if (r0 < 0) goto L42
            r1 = 128(0x80, float:1.8E-43)
            if (r0 != r1) goto Lc
            r0 = -1
            return r0
        Lc:
            r1 = 127(0x7f, float:1.78E-43)
            if (r0 <= r1) goto L41
            r0 = r0 & 127(0x7f, float:1.78E-43)
            r1 = 4
            if (r0 > r1) goto L39
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
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "EOF found reading length"
            r0.<init>(r1)
            throw r0
        L2d:
            if (r1 < 0) goto L31
            r0 = r1
            goto L41
        L31:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "corrupted stream - negative length found"
            r0.<init>(r1)
            throw r0
        L39:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "DER length more than 4 bytes"
            r0.<init>(r1)
            throw r0
        L41:
            return r0
        L42:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "EOF found when length expected"
            r0.<init>(r1)
            throw r0
    }

    public org.bouncycastle.asn1.DERObject readObject() throws java.io.IOException {
            r2 = this;
            int r0 = r2.read()
            r1 = -1
            if (r0 == r1) goto L15
            int r1 = r2.readLength()
            byte[] r1 = new byte[r1]
            r2.readFully(r1)
            org.bouncycastle.asn1.DERObject r0 = r2.buildObject(r0, r1)
            return r0
        L15:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
    }
}
