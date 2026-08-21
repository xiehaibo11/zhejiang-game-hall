package org.apache.commons.codec1.net;

public class QuotedPrintableCodec implements org.apache.commons.codec1.BinaryEncoder, org.apache.commons.codec1.BinaryDecoder, org.apache.commons.codec1.StringEncoder, org.apache.commons.codec1.StringDecoder {
    private static final byte CR = 13;
    private static final byte ESCAPE_CHAR = 61;
    private static final byte LF = 10;
    private static final java.util.BitSet PRINTABLE_CHARS = null;
    private static final int SAFE_LENGTH = 73;
    private static final byte SPACE = 32;
    private static final byte TAB = 9;
    private final java.nio.charset.Charset charset;
    private final boolean strict;

    static {
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 256(0x100, float:3.59E-43)
            r0.<init>(r1)
            org.apache.commons.codec1.net.QuotedPrintableCodec.PRINTABLE_CHARS = r0
            r0 = 33
        Lb:
            r1 = 60
            if (r0 <= r1) goto L2c
            r0 = 62
        L11:
            r1 = 126(0x7e, float:1.77E-43)
            if (r0 <= r1) goto L24
            java.util.BitSet r0 = org.apache.commons.codec1.net.QuotedPrintableCodec.PRINTABLE_CHARS
            r1 = 9
            r0.set(r1)
            java.util.BitSet r0 = org.apache.commons.codec1.net.QuotedPrintableCodec.PRINTABLE_CHARS
            r1 = 32
            r0.set(r1)
            return
        L24:
            java.util.BitSet r1 = org.apache.commons.codec1.net.QuotedPrintableCodec.PRINTABLE_CHARS
            r1.set(r0)
            int r0 = r0 + 1
            goto L11
        L2c:
            java.util.BitSet r1 = org.apache.commons.codec1.net.QuotedPrintableCodec.PRINTABLE_CHARS
            r1.set(r0)
            int r0 = r0 + 1
            goto Lb
    }

    public QuotedPrintableCodec() {
            r2 = this;
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.UTF_8
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    public QuotedPrintableCodec(java.lang.String r2) throws java.nio.charset.IllegalCharsetNameException, java.lang.IllegalArgumentException, java.nio.charset.UnsupportedCharsetException {
            r1 = this;
            java.nio.charset.Charset r2 = java.nio.charset.Charset.forName(r2)
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public QuotedPrintableCodec(java.nio.charset.Charset r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public QuotedPrintableCodec(java.nio.charset.Charset r1, boolean r2) {
            r0 = this;
            r0.<init>()
            r0.charset = r1
            r0.strict = r2
            return
    }

    public QuotedPrintableCodec(boolean r2) {
            r1 = this;
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.UTF_8
            r1.<init>(r0, r2)
            return
    }

    public static final byte[] decodeQuotedPrintable(byte[] r5) throws org.apache.commons.codec1.DecoderException {
            if (r5 != 0) goto L4
            r5 = 0
            return r5
        L4:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1 = 0
        La:
            int r2 = r5.length
            if (r1 < r2) goto L12
            byte[] r5 = r0.toByteArray()
            return r5
        L12:
            r2 = r5[r1]
            r3 = 61
            r4 = 13
            if (r2 != r3) goto L40
            int r1 = r1 + 1
            r2 = r5[r1]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
            if (r2 != r4) goto L21
            goto L49
        L21:
            r2 = r5[r1]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
            int r2 = org.apache.commons.codec1.net.Utils.digit16(r2)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
            int r1 = r1 + 1
            r3 = r5[r1]     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
            int r3 = org.apache.commons.codec1.net.Utils.digit16(r3)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
            int r2 = r2 << 4
            int r2 = r2 + r3
            char r2 = (char) r2     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
            r0.write(r2)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L37
            goto L49
        L37:
            r5 = move-exception
            org.apache.commons.codec1.DecoderException r0 = new org.apache.commons.codec1.DecoderException
            java.lang.String r1 = "Invalid quoted-printable encoding"
            r0.<init>(r1, r5)
            throw r0
        L40:
            if (r2 == r4) goto L49
            r3 = 10
            if (r2 == r3) goto L49
            r0.write(r2)
        L49:
            int r1 = r1 + 1
            goto La
    }

    private static int encodeByte(int r0, boolean r1, java.io.ByteArrayOutputStream r2) {
            if (r1 == 0) goto L7
            int r0 = encodeQuotedPrintable(r0, r2)
            return r0
        L7:
            r2.write(r0)
            r0 = 1
            return r0
    }

    private static final int encodeQuotedPrintable(int r2, java.io.ByteArrayOutputStream r3) {
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
            r2 = 3
            return r2
    }

    public static final byte[] encodeQuotedPrintable(java.util.BitSet r1, byte[] r2) {
            r0 = 0
            byte[] r1 = encodeQuotedPrintable(r1, r2, r0)
            return r1
    }

    public static final byte[] encodeQuotedPrintable(java.util.BitSet r9, byte[] r10, boolean r11) {
            if (r10 != 0) goto L4
            r9 = 0
            return r9
        L4:
            if (r9 != 0) goto L8
            java.util.BitSet r9 = org.apache.commons.codec1.net.QuotedPrintableCodec.PRINTABLE_CHARS
        L8:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1 = 0
            if (r11 == 0) goto La2
            r11 = 1
            r3 = r11
            r2 = r1
        L13:
            int r4 = r10.length
            int r4 = r4 + (-3)
            r5 = 10
            r6 = 13
            r7 = 61
            if (r2 < r4) goto L6f
            int r2 = r10.length
            int r2 = r2 + (-3)
            int r2 = getUnsignedOctet(r2, r10)
            boolean r4 = r9.get(r2)
            if (r4 == 0) goto L37
            boolean r4 = isWhitespace(r2)
            if (r4 == 0) goto L35
            r4 = 68
            if (r3 > r4) goto L37
        L35:
            r4 = r1
            goto L38
        L37:
            r4 = r11
        L38:
            int r2 = encodeByte(r2, r4, r0)
            int r3 = r3 + r2
            r2 = 71
            if (r3 <= r2) goto L4a
            r0.write(r7)
            r0.write(r6)
            r0.write(r5)
        L4a:
            int r2 = r10.length
            int r2 = r2 + (-2)
        L4d:
            int r3 = r10.length
            if (r2 < r3) goto L51
            goto La5
        L51:
            int r3 = getUnsignedOctet(r2, r10)
            boolean r4 = r9.get(r3)
            if (r4 == 0) goto L68
            int r4 = r10.length
            int r4 = r4 + (-2)
            if (r2 <= r4) goto L66
            boolean r4 = isWhitespace(r3)
            if (r4 != 0) goto L68
        L66:
            r4 = r1
            goto L69
        L68:
            r4 = r11
        L69:
            encodeByte(r3, r4, r0)
            int r2 = r2 + 1
            goto L4d
        L6f:
            int r4 = getUnsignedOctet(r2, r10)
            r8 = 73
            if (r3 >= r8) goto L82
            boolean r5 = r9.get(r4)
            r5 = r5 ^ r11
            int r4 = encodeByte(r4, r5, r0)
            int r3 = r3 + r4
            goto L9e
        L82:
            boolean r3 = r9.get(r4)
            if (r3 == 0) goto L90
            boolean r3 = isWhitespace(r4)
            if (r3 != 0) goto L90
            r3 = r1
            goto L91
        L90:
            r3 = r11
        L91:
            encodeByte(r4, r3, r0)
            r0.write(r7)
            r0.write(r6)
            r0.write(r5)
            r3 = r11
        L9e:
            int r2 = r2 + 1
            goto L13
        La2:
            int r11 = r10.length
        La3:
            if (r1 < r11) goto Laa
        La5:
            byte[] r9 = r0.toByteArray()
            return r9
        Laa:
            r2 = r10[r1]
            if (r2 >= 0) goto Lb0
            int r2 = r2 + 256
        Lb0:
            boolean r3 = r9.get(r2)
            if (r3 == 0) goto Lba
            r0.write(r2)
            goto Lbd
        Lba:
            encodeQuotedPrintable(r2, r0)
        Lbd:
            int r1 = r1 + 1
            goto La3
    }

    private static int getUnsignedOctet(int r0, byte[] r1) {
            r0 = r1[r0]
            if (r0 >= 0) goto L6
            int r0 = r0 + 256
        L6:
            return r0
    }

    private static boolean isWhitespace(int r1) {
            r0 = 32
            if (r1 == r0) goto La
            r0 = 9
            if (r1 == r0) goto La
            r1 = 0
            return r1
        La:
            r1 = 1
            return r1
    }

    @Override
    public java.lang.Object decode(java.lang.Object r4) throws org.apache.commons.codec1.DecoderException {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            boolean r0 = r4 instanceof byte[]
            if (r0 == 0) goto Lf
            byte[] r4 = (byte[]) r4
            byte[] r4 = r3.decode(r4)
            return r4
        Lf:
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto L1a
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r4 = r3.decode(r4)
            return r4
        L1a:
            org.apache.commons.codec1.DecoderException r0 = new org.apache.commons.codec1.DecoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Objects of type "
            r1.<init>(r2)
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
    public java.lang.String decode(java.lang.String r2) throws org.apache.commons.codec1.DecoderException {
            r1 = this;
            java.nio.charset.Charset r0 = r1.getCharset()
            java.lang.String r2 = r1.decode(r2, r0)
            return r2
    }

    public java.lang.String decode(java.lang.String r2, java.lang.String r3) throws org.apache.commons.codec1.DecoderException, java.io.UnsupportedEncodingException {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.String r0 = new java.lang.String
            byte[] r2 = org.apache.commons.codec1.binary.StringUtils.getBytesUsAscii(r2)
            byte[] r2 = r1.decode(r2)
            r0.<init>(r2, r3)
            return r0
    }

    public java.lang.String decode(java.lang.String r2, java.nio.charset.Charset r3) throws org.apache.commons.codec1.DecoderException {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.String r0 = new java.lang.String
            byte[] r2 = org.apache.commons.codec1.binary.StringUtils.getBytesUsAscii(r2)
            byte[] r2 = r1.decode(r2)
            r0.<init>(r2, r3)
            return r0
    }

    @Override
    public byte[] decode(byte[] r1) throws org.apache.commons.codec1.DecoderException {
            r0 = this;
            byte[] r1 = decodeQuotedPrintable(r1)
            return r1
    }

    @Override
    public java.lang.Object encode(java.lang.Object r4) throws org.apache.commons.codec1.EncoderException {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            boolean r0 = r4 instanceof byte[]
            if (r0 == 0) goto Lf
            byte[] r4 = (byte[]) r4
            byte[] r4 = r3.encode(r4)
            return r4
        Lf:
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto L1a
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r4 = r3.encode(r4)
            return r4
        L1a:
            org.apache.commons.codec1.EncoderException r0 = new org.apache.commons.codec1.EncoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Objects of type "
            r1.<init>(r2)
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
    public java.lang.String encode(java.lang.String r2) throws org.apache.commons.codec1.EncoderException {
            r1 = this;
            java.nio.charset.Charset r0 = r1.getCharset()
            java.lang.String r2 = r1.encode(r2, r0)
            return r2
    }

    public java.lang.String encode(java.lang.String r1, java.lang.String r2) throws java.io.UnsupportedEncodingException {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            byte[] r1 = r1.getBytes(r2)
            byte[] r1 = r0.encode(r1)
            java.lang.String r1 = org.apache.commons.codec1.binary.StringUtils.newStringUsAscii(r1)
            return r1
    }

    public java.lang.String encode(java.lang.String r1, java.nio.charset.Charset r2) {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            byte[] r1 = r1.getBytes(r2)
            byte[] r1 = r0.encode(r1)
            java.lang.String r1 = org.apache.commons.codec1.binary.StringUtils.newStringUsAscii(r1)
            return r1
    }

    @Override
    public byte[] encode(byte[] r3) {
            r2 = this;
            java.util.BitSet r0 = org.apache.commons.codec1.net.QuotedPrintableCodec.PRINTABLE_CHARS
            boolean r1 = r2.strict
            byte[] r3 = encodeQuotedPrintable(r0, r3, r1)
            return r3
    }

    public java.nio.charset.Charset getCharset() {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            return r0
    }

    public java.lang.String getDefaultCharset() {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            java.lang.String r0 = r0.name()
            return r0
    }
}
