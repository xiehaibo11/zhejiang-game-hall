package org.apache.commons.codec.net;

public class QCodec extends org.apache.commons.codec.net.RFC1522Codec implements org.apache.commons.codec.StringEncoder, org.apache.commons.codec.StringDecoder {
    private static final byte BLANK = 32;
    private static final java.util.BitSet PRINTABLE_CHARS = null;
    private static final byte UNDERSCORE = 95;
    private final java.lang.String charset;
    private boolean encodeBlanks;

    static {
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 256(0x100, float:3.59E-43)
            r0.<init>(r1)
            org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS = r0
            r1 = 32
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 33
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 34
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 35
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 36
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 37
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 38
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 39
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 40
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 41
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 42
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 43
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 44
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 45
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 46
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 47
            r0.set(r1)
            r0 = 48
        L79:
            r1 = 57
            if (r0 > r1) goto L85
            java.util.BitSet r1 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1.set(r0)
            int r0 = r0 + 1
            goto L79
        L85:
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 58
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 59
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 60
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 62
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 64
            r0.set(r1)
            r0 = 65
        Laa:
            r1 = 90
            if (r0 > r1) goto Lb6
            java.util.BitSet r1 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1.set(r0)
            int r0 = r0 + 1
            goto Laa
        Lb6:
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 91
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 92
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 93
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 94
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 96
            r0.set(r1)
            r0 = 97
        Ldb:
            r1 = 122(0x7a, float:1.71E-43)
            if (r0 > r1) goto Le7
            java.util.BitSet r1 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1.set(r0)
            int r0 = r0 + 1
            goto Ldb
        Le7:
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 123(0x7b, float:1.72E-43)
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 124(0x7c, float:1.74E-43)
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 125(0x7d, float:1.75E-43)
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            r1 = 126(0x7e, float:1.77E-43)
            r0.set(r1)
            return
    }

    public QCodec() {
            r1 = this;
            java.lang.String r0 = "UTF-8"
            r1.<init>(r0)
            return
    }

    public QCodec(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.encodeBlanks = r0
            r1.charset = r2
            return
    }

    @Override
    public java.lang.Object decode(java.lang.Object r4) throws org.apache.commons.codec.DecoderException {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto Lf
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r4 = r3.decode(r4)
            return r4
        Lf:
            org.apache.commons.codec.DecoderException r0 = new org.apache.commons.codec.DecoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Objects of type "
            r1.append(r2)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = " cannot be decoded using Q codec"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public java.lang.String decode(java.lang.String r3) throws org.apache.commons.codec.DecoderException {
            r2 = this;
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.lang.String r3 = r2.decodeText(r3)     // Catch: java.io.UnsupportedEncodingException -> L9
            return r3
        L9:
            r3 = move-exception
            org.apache.commons.codec.DecoderException r0 = new org.apache.commons.codec.DecoderException
            java.lang.String r1 = r3.getMessage()
            r0.<init>(r1, r3)
            throw r0
    }

    @Override
    protected byte[] doDecoding(byte[] r6) throws org.apache.commons.codec.DecoderException {
            r5 = this;
            if (r6 != 0) goto L4
            r6 = 0
            return r6
        L4:
            int r0 = r6.length
            r1 = 0
            r2 = r1
        L7:
            r3 = 95
            if (r2 >= r0) goto L14
            r4 = r6[r2]
            if (r4 != r3) goto L11
            r0 = 1
            goto L15
        L11:
            int r2 = r2 + 1
            goto L7
        L14:
            r0 = r1
        L15:
            if (r0 == 0) goto L30
            int r0 = r6.length
            byte[] r0 = new byte[r0]
        L1a:
            int r2 = r6.length
            if (r1 >= r2) goto L2b
            r2 = r6[r1]
            if (r2 == r3) goto L24
            r0[r1] = r2
            goto L28
        L24:
            r2 = 32
            r0[r1] = r2
        L28:
            int r1 = r1 + 1
            goto L1a
        L2b:
            byte[] r6 = org.apache.commons.codec.net.QuotedPrintableCodec.decodeQuotedPrintable(r0)
            return r6
        L30:
            byte[] r6 = org.apache.commons.codec.net.QuotedPrintableCodec.decodeQuotedPrintable(r6)
            return r6
    }

    @Override
    protected byte[] doEncoding(byte[] r4) {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            java.util.BitSet r0 = org.apache.commons.codec.net.QCodec.PRINTABLE_CHARS
            byte[] r4 = org.apache.commons.codec.net.QuotedPrintableCodec.encodeQuotedPrintable(r0, r4)
            boolean r0 = r3.encodeBlanks
            if (r0 == 0) goto L1f
            r0 = 0
        Lf:
            int r1 = r4.length
            if (r0 >= r1) goto L1f
            r1 = r4[r0]
            r2 = 32
            if (r1 != r2) goto L1c
            r1 = 95
            r4[r0] = r1
        L1c:
            int r0 = r0 + 1
            goto Lf
        L1f:
            return r4
    }

    @Override
    public java.lang.Object encode(java.lang.Object r4) throws org.apache.commons.codec.EncoderException {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto Lf
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r4 = r3.encode(r4)
            return r4
        Lf:
            org.apache.commons.codec.EncoderException r0 = new org.apache.commons.codec.EncoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Objects of type "
            r1.append(r2)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = " cannot be encoded using Q codec"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public java.lang.String encode(java.lang.String r2) throws org.apache.commons.codec.EncoderException {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.String r0 = r1.getDefaultCharset()
            java.lang.String r2 = r1.encode(r2, r0)
            return r2
    }

    public java.lang.String encode(java.lang.String r2, java.lang.String r3) throws org.apache.commons.codec.EncoderException {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.String r2 = r1.encodeText(r2, r3)     // Catch: java.io.UnsupportedEncodingException -> L9
            return r2
        L9:
            r2 = move-exception
            org.apache.commons.codec.EncoderException r3 = new org.apache.commons.codec.EncoderException
            java.lang.String r0 = r2.getMessage()
            r3.<init>(r0, r2)
            throw r3
    }

    public java.lang.String getDefaultCharset() {
            r1 = this;
            java.lang.String r0 = r1.charset
            return r0
    }

    @Override
    protected java.lang.String getEncoding() {
            r1 = this;
            java.lang.String r0 = "Q"
            return r0
    }

    public boolean isEncodeBlanks() {
            r1 = this;
            boolean r0 = r1.encodeBlanks
            return r0
    }

    public void setEncodeBlanks(boolean r1) {
            r0 = this;
            r0.encodeBlanks = r1
            return
    }
}
