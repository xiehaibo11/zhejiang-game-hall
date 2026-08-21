package org.bouncycastle.asn1;

public abstract class DERGenerator extends org.bouncycastle.asn1.ASN1Generator {
    private boolean _isExplicit;
    private int _tagNo;
    private boolean _tagged;

    protected DERGenerator(java.io.OutputStream r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0._tagged = r1
            return
    }

    public DERGenerator(java.io.OutputStream r1, int r2, boolean r3) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0._tagged = r1
            r1 = 1
            r0._tagged = r1
            r0._isExplicit = r3
            r0._tagNo = r2
            return
    }

    private void writeLength(java.io.OutputStream r4, int r5) throws java.io.IOException {
            r3 = this;
            r0 = 127(0x7f, float:1.78E-43)
            if (r5 <= r0) goto L22
            r0 = 1
            r1 = r5
            r2 = 1
        L7:
            int r1 = r1 >>> 8
            if (r1 == 0) goto Le
            int r2 = r2 + 1
            goto L7
        Le:
            r1 = r2 | 128(0x80, float:1.8E-43)
            byte r1 = (byte) r1
            r4.write(r1)
            int r2 = r2 - r0
            int r2 = r2 * 8
        L17:
            if (r2 < 0) goto L26
            int r0 = r5 >> r2
            byte r0 = (byte) r0
            r4.write(r0)
            int r2 = r2 + (-8)
            goto L17
        L22:
            byte r5 = (byte) r5
            r4.write(r5)
        L26:
            return
    }

    void writeDEREncoded(int r4, byte[] r5) throws java.io.IOException {
            r3 = this;
            boolean r0 = r3._tagged
            if (r0 == 0) goto L34
            int r0 = r3._tagNo
            r1 = r0 | 128(0x80, float:1.8E-43)
            boolean r2 = r3._isExplicit
            if (r2 == 0) goto L22
            r0 = r0 | 32
            r0 = r0 | 128(0x80, float:1.8E-43)
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            r3.writeDEREncoded(r1, r4, r5)
            java.io.OutputStream r4 = r3._out
            byte[] r5 = r1.toByteArray()
            r3.writeDEREncoded(r4, r0, r5)
            goto L39
        L22:
            r4 = r4 & 32
            if (r4 == 0) goto L2e
            java.io.OutputStream r4 = r3._out
            r0 = r1 | 32
            r3.writeDEREncoded(r4, r0, r5)
            goto L39
        L2e:
            java.io.OutputStream r4 = r3._out
            r3.writeDEREncoded(r4, r1, r5)
            goto L39
        L34:
            java.io.OutputStream r0 = r3._out
            r3.writeDEREncoded(r0, r4, r5)
        L39:
            return
    }

    void writeDEREncoded(java.io.OutputStream r1, int r2, java.io.InputStream r3) throws java.io.IOException {
            r0 = this;
            byte[] r3 = org.bouncycastle.util.io.Streams.readAll(r3)
            r0.writeDEREncoded(r1, r2, r3)
            return
    }

    void writeDEREncoded(java.io.OutputStream r1, int r2, byte[] r3) throws java.io.IOException {
            r0 = this;
            r1.write(r2)
            int r2 = r3.length
            r0.writeLength(r1, r2)
            r1.write(r3)
            return
    }
}
