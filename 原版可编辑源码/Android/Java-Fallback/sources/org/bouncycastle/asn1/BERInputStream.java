package org.bouncycastle.asn1;

public class BERInputStream extends org.bouncycastle.asn1.DERInputStream {
    private static final org.bouncycastle.asn1.DERObject END_OF_STREAM = null;


    static {
            org.bouncycastle.asn1.BERInputStream$1 r0 = new org.bouncycastle.asn1.BERInputStream$1
            r0.<init>()
            org.bouncycastle.asn1.BERInputStream.END_OF_STREAM = r0
            return
    }

    public BERInputStream(java.io.InputStream r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private org.bouncycastle.asn1.BERConstructedOctetString buildConstructedOctetString() throws java.io.IOException {
            r3 = this;
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
        L5:
            org.bouncycastle.asn1.DERObject r1 = r3.readObject()
            org.bouncycastle.asn1.DERObject r2 = org.bouncycastle.asn1.BERInputStream.END_OF_STREAM
            if (r1 != r2) goto L13
            org.bouncycastle.asn1.BERConstructedOctetString r1 = new org.bouncycastle.asn1.BERConstructedOctetString
            r1.<init>(r0)
            return r1
        L13:
            r0.addElement(r1)
            goto L5
    }

    private byte[] readIndefiniteLengthFully() throws java.io.IOException {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            int r1 = r3.read()
        L9:
            int r2 = r3.read()
            if (r2 < 0) goto L19
            if (r1 != 0) goto L14
            if (r2 != 0) goto L14
            goto L19
        L14:
            r0.write(r1)
            r1 = r2
            goto L9
        L19:
            byte[] r0 = r0.toByteArray()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject readObject() throws java.io.IOException {
            r5 = this;
            int r0 = r5.read()
            r1 = -1
            if (r0 == r1) goto Lc0
            int r1 = r5.readLength()
            if (r1 >= 0) goto Laf
            r1 = 5
            if (r0 == r1) goto Lad
            r1 = 36
            if (r0 == r1) goto La8
            r1 = 48
            if (r0 == r1) goto L96
            r1 = 49
            if (r0 == r1) goto L7f
            r1 = r0 & 128(0x80, float:1.8E-43)
            if (r1 == 0) goto L77
            r1 = r0 & 31
            r2 = 31
            if (r1 == r2) goto L6f
            r0 = r0 & 32
            r2 = 0
            if (r0 != 0) goto L3a
            byte[] r0 = r5.readIndefiniteLengthFully()
            org.bouncycastle.asn1.BERTaggedObject r3 = new org.bouncycastle.asn1.BERTaggedObject
            org.bouncycastle.asn1.DEROctetString r4 = new org.bouncycastle.asn1.DEROctetString
            r4.<init>(r0)
            r3.<init>(r2, r1, r4)
            return r3
        L3a:
            org.bouncycastle.asn1.DERObject r0 = r5.readObject()
            org.bouncycastle.asn1.DERObject r3 = org.bouncycastle.asn1.BERInputStream.END_OF_STREAM
            if (r0 != r3) goto L48
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r0.<init>(r1)
            return r0
        L48:
            org.bouncycastle.asn1.DERObject r3 = r5.readObject()
            org.bouncycastle.asn1.DERObject r4 = org.bouncycastle.asn1.BERInputStream.END_OF_STREAM
            if (r3 != r4) goto L56
            org.bouncycastle.asn1.BERTaggedObject r2 = new org.bouncycastle.asn1.BERTaggedObject
            r2.<init>(r1, r0)
            return r2
        L56:
            org.bouncycastle.asn1.BERConstructedSequence r4 = new org.bouncycastle.asn1.BERConstructedSequence
            r4.<init>()
            r4.addObject(r0)
        L5e:
            r4.addObject(r3)
            org.bouncycastle.asn1.DERObject r3 = r5.readObject()
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.asn1.BERInputStream.END_OF_STREAM
            if (r3 != r0) goto L5e
            org.bouncycastle.asn1.BERTaggedObject r0 = new org.bouncycastle.asn1.BERTaggedObject
            r0.<init>(r2, r1, r4)
            return r0
        L6f:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "unsupported high tag encountered"
            r0.<init>(r1)
            throw r0
        L77:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "unknown BER object encountered"
            r0.<init>(r1)
            throw r0
        L7f:
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
        L84:
            org.bouncycastle.asn1.DERObject r1 = r5.readObject()
            org.bouncycastle.asn1.DERObject r2 = org.bouncycastle.asn1.BERInputStream.END_OF_STREAM
            if (r1 != r2) goto L92
            org.bouncycastle.asn1.BERSet r1 = new org.bouncycastle.asn1.BERSet
            r1.<init>(r0)
            return r1
        L92:
            r0.add(r1)
            goto L84
        L96:
            org.bouncycastle.asn1.BERConstructedSequence r0 = new org.bouncycastle.asn1.BERConstructedSequence
            r0.<init>()
        L9b:
            org.bouncycastle.asn1.DERObject r1 = r5.readObject()     // Catch: java.lang.Throwable -> Lc6
            org.bouncycastle.asn1.DERObject r2 = org.bouncycastle.asn1.BERInputStream.END_OF_STREAM
            if (r1 != r2) goto La4
            return r0
        La4:
            r0.addObject(r1)
            goto L9b
        La8:
            org.bouncycastle.asn1.BERConstructedOctetString r0 = r5.buildConstructedOctetString()
            return r0
        Lad:
            r0 = 0
            return r0
        Laf:
            if (r0 != 0) goto Lb6
            if (r1 != 0) goto Lb6
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.asn1.BERInputStream.END_OF_STREAM
            return r0
        Lb6:
            byte[] r1 = new byte[r1]
            r5.readFully(r1)
            org.bouncycastle.asn1.DERObject r0 = r5.buildObject(r0, r1)
            return r0
        Lc0:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
        Lc6:
            r0 = move-exception
            throw r0
    }
}
