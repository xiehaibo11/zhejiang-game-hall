package org.bouncycastle.asn1;

public class DEROutputStream extends java.io.FilterOutputStream implements org.bouncycastle.asn1.DERTags {
    public DEROutputStream(java.io.OutputStream r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private void writeLength(int r4) throws java.io.IOException {
            r3 = this;
            r0 = 127(0x7f, float:1.78E-43)
            if (r4 <= r0) goto L22
            r0 = 1
            r1 = r4
            r2 = 1
        L7:
            int r1 = r1 >>> 8
            if (r1 == 0) goto Le
            int r2 = r2 + 1
            goto L7
        Le:
            r1 = r2 | 128(0x80, float:1.8E-43)
            byte r1 = (byte) r1
            r3.write(r1)
            int r2 = r2 - r0
            int r2 = r2 * 8
        L17:
            if (r2 < 0) goto L26
            int r0 = r4 >> r2
            byte r0 = (byte) r0
            r3.write(r0)
            int r2 = r2 + (-8)
            goto L17
        L22:
            byte r4 = (byte) r4
            r3.write(r4)
        L26:
            return
    }

    @Override
    public void write(byte[] r4) throws java.io.IOException {
            r3 = this;
            java.io.OutputStream r0 = r3.out
            int r1 = r4.length
            r2 = 0
            r0.write(r4, r2, r1)
            return
    }

    @Override
    public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            java.io.OutputStream r0 = r1.out
            r0.write(r2, r3, r4)
            return
    }

    void writeEncoded(int r1, byte[] r2) throws java.io.IOException {
            r0 = this;
            r0.write(r1)
            int r1 = r2.length
            r0.writeLength(r1)
            r0.write(r2)
            return
    }

    void writeEncodedHigh(int r1, int r2, byte[] r3) throws java.io.IOException {
            r0 = this;
            r0.write(r1)
            r0.write(r2)
            int r1 = r3.length
            r0.writeLength(r1)
            r0.write(r3)
            return
    }

    protected void writeNull() throws java.io.IOException {
            r1 = this;
            r0 = 5
            r1.write(r0)
            r0 = 0
            r1.write(r0)
            return
    }

    public void writeObject(java.lang.Object r2) throws java.io.IOException {
            r1 = this;
            if (r2 != 0) goto L6
            r1.writeNull()
            goto L1b
        L6:
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DERObject
            if (r0 == 0) goto L10
            org.bouncycastle.asn1.DERObject r2 = (org.bouncycastle.asn1.DERObject) r2
        Lc:
            r2.encode(r1)
            goto L1b
        L10:
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DEREncodable
            if (r0 == 0) goto L1c
            org.bouncycastle.asn1.DEREncodable r2 = (org.bouncycastle.asn1.DEREncodable) r2
            org.bouncycastle.asn1.DERObject r2 = r2.getDERObject()
            goto Lc
        L1b:
            return
        L1c:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r0 = "object not DEREncodable"
            r2.<init>(r0)
            throw r2
    }
}
