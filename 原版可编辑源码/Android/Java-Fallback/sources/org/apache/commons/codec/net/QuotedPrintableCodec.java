package org.apache.commons.codec.net;

public class QuotedPrintableCodec implements org.apache.commons.codec.BinaryEncoder, org.apache.commons.codec.BinaryDecoder, org.apache.commons.codec.StringEncoder, org.apache.commons.codec.StringDecoder {
    private static final byte ESCAPE_CHAR = 61;
    private static final java.util.BitSet PRINTABLE_CHARS = null;
    private static final byte SPACE = 32;
    private static final byte TAB = 9;
    private final java.lang.String charset;

    static {
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 256(0x100, float:3.59E-43)
            r0.<init>(r1)
            org.apache.commons.codec.net.QuotedPrintableCodec.PRINTABLE_CHARS = r0
            r0 = 33
        Lb:
            r1 = 60
            if (r0 > r1) goto L17
            java.util.BitSet r1 = org.apache.commons.codec.net.QuotedPrintableCodec.PRINTABLE_CHARS
            r1.set(r0)
            int r0 = r0 + 1
            goto Lb
        L17:
            r0 = 62
        L19:
            r1 = 126(0x7e, float:1.77E-43)
            if (r0 > r1) goto L25
            java.util.BitSet r1 = org.apache.commons.codec.net.QuotedPrintableCodec.PRINTABLE_CHARS
            r1.set(r0)
            int r0 = r0 + 1
            goto L19
        L25:
            java.util.BitSet r0 = org.apache.commons.codec.net.QuotedPrintableCodec.PRINTABLE_CHARS
            r1 = 9
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec.net.QuotedPrintableCodec.PRINTABLE_CHARS
            r1 = 32
            r0.set(r1)
            return
    }

    public QuotedPrintableCodec() {
            r1 = this;
            java.lang.String r0 = "UTF-8"
            r1.<init>(r0)
            return
    }

    public QuotedPrintableCodec(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.charset = r1
            return
    }

    public static final byte[] decodeQuotedPrintable(byte[] r4) throws org.apache.commons.codec.DecoderException {
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1 = 0
        La:
            int r2 = r4.length
            if (r1 >= r2) goto L3a
            r2 = r4[r1]
            r3 = 61
            if (r2 != r3) goto L34
            int r1 = r1 + 1
            r2 = r4[r1]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L2b
            int r2 = org.apache.commons.codec.net.Utils.digit16(r2)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L2b
            int r1 = r1 + 1
            r3 = r4[r1]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L2b
            int r3 = org.apache.commons.codec.net.Utils.digit16(r3)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L2b
            int r2 = r2 << 4
            int r2 = r2 + r3
            char r2 = (char) r2     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L2b
            r0.write(r2)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L2b
            goto L37
        L2b:
            r4 = move-exception
            org.apache.commons.codec.DecoderException r0 = new org.apache.commons.codec.DecoderException
            java.lang.String r1 = "Invalid quoted-printable encoding"
            r0.<init>(r1, r4)
            throw r0
        L34:
            r0.write(r2)
        L37:
            int r1 = r1 + 1
            goto La
        L3a:
            byte[] r4 = r0.toByteArray()
            return r4
    }

    private static final void encodeQuotedPrintable(int r2, java.io.ByteArrayOutputStream r3) {
            r0 = 61
            r3.write(r0)
            int r0 = r2 >> 4
            r0 = r0 & 15
            r1 = 16
            char r0 = java.lang.Character.forDigit(r0, r1)
            char r0 = java.lang.Character.toUpperCase(r0)
            r2 = r2 & 15
            char r2 = java.lang.Character.forDigit(r2, r1)
            char r2 = java.lang.Character.toUpperCase(r2)
            r3.write(r0)
            r3.write(r2)
            return
    }

    public static final byte[] encodeQuotedPrintable(java.util.BitSet r5, byte[] r6) {
            if (r6 != 0) goto L4
            r5 = 0
            return r5
        L4:
            if (r5 != 0) goto L8
            java.util.BitSet r5 = org.apache.commons.codec.net.QuotedPrintableCodec.PRINTABLE_CHARS
        L8:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            int r1 = r6.length
            r2 = 0
        Lf:
            if (r2 >= r1) goto L27
            r3 = r6[r2]
            if (r3 >= 0) goto L17
            int r3 = r3 + 256
        L17:
            boolean r4 = r5.get(r3)
            if (r4 == 0) goto L21
            r0.write(r3)
            goto L24
        L21:
            encodeQuotedPrintable(r3, r0)
        L24:
            int r2 = r2 + 1
            goto Lf
        L27:
            byte[] r5 = r0.toByteArray()
            return r5
    }

    @Override
    public java.lang.Object decode(java.lang.Object r4) throws org.apache.commons.codec.DecoderException {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            boolean r0 = r4 instanceof byte[]
            if (r0 == 0) goto L11
            byte[] r4 = (byte[]) r4
            byte[] r4 = (byte[]) r4
            byte[] r4 = r3.decode(r4)
            return r4
        L11:
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto L1c
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r4 = r3.decode(r4)
            return r4
        L1c:
            org.apache.commons.codec.DecoderException r0 = new org.apache.commons.codec.DecoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Objects of type "
            r1.append(r2)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = " cannot be quoted-printable decoded"
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
            java.lang.String r0 = r2.getDefaultCharset()     // Catch: java.io.UnsupportedEncodingException -> Ld
            java.lang.String r3 = r2.decode(r3, r0)     // Catch: java.io.UnsupportedEncodingException -> Ld
            return r3
        Ld:
            r3 = move-exception
            org.apache.commons.codec.DecoderException r0 = new org.apache.commons.codec.DecoderException
            java.lang.String r1 = r3.getMessage()
            r0.<init>(r1, r3)
            throw r0
    }

    public java.lang.String decode(java.lang.String r2, java.lang.String r3) throws org.apache.commons.codec.DecoderException, java.io.UnsupportedEncodingException {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.String r0 = new java.lang.String
            byte[] r2 = org.apache.commons.codec.binary.StringUtils.getBytesUsAscii(r2)
            byte[] r2 = r1.decode(r2)
            r0.<init>(r2, r3)
            return r0
    }

    @Override
    public byte[] decode(byte[] r1) throws org.apache.commons.codec.DecoderException {
            r0 = this;
            byte[] r1 = decodeQuotedPrintable(r1)
            return r1
    }

    @Override
    public java.lang.Object encode(java.lang.Object r4) throws org.apache.commons.codec.EncoderException {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            boolean r0 = r4 instanceof byte[]
            if (r0 == 0) goto L11
            byte[] r4 = (byte[]) r4
            byte[] r4 = (byte[]) r4
            byte[] r4 = r3.encode(r4)
            return r4
        L11:
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto L1c
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r4 = r3.encode(r4)
            return r4
        L1c:
            org.apache.commons.codec.EncoderException r0 = new org.apache.commons.codec.EncoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Objects of type "
            r1.append(r2)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = " cannot be quoted-printable encoded"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public java.lang.String encode(java.lang.String r3) throws org.apache.commons.codec.EncoderException {
            r2 = this;
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.lang.String r0 = r2.getDefaultCharset()     // Catch: java.io.UnsupportedEncodingException -> Ld
            java.lang.String r3 = r2.encode(r3, r0)     // Catch: java.io.UnsupportedEncodingException -> Ld
            return r3
        Ld:
            r3 = move-exception
            org.apache.commons.codec.EncoderException r0 = new org.apache.commons.codec.EncoderException
            java.lang.String r1 = r3.getMessage()
            r0.<init>(r1, r3)
            throw r0
    }

    public java.lang.String encode(java.lang.String r1, java.lang.String r2) throws java.io.UnsupportedEncodingException {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            byte[] r1 = r1.getBytes(r2)
            byte[] r1 = r0.encode(r1)
            java.lang.String r1 = org.apache.commons.codec.binary.StringUtils.newStringUsAscii(r1)
            return r1
    }

    @Override
    public byte[] encode(byte[] r2) {
            r1 = this;
            java.util.BitSet r0 = org.apache.commons.codec.net.QuotedPrintableCodec.PRINTABLE_CHARS
            byte[] r2 = encodeQuotedPrintable(r0, r2)
            return r2
    }

    public java.lang.String getDefaultCharset() {
            r1 = this;
            java.lang.String r0 = r1.charset
            return r0
    }
}
