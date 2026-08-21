package org.apache.commons.codec1.binary;

public class Hex implements org.apache.commons.codec1.BinaryEncoder, org.apache.commons.codec1.BinaryDecoder {
    public static final java.nio.charset.Charset DEFAULT_CHARSET = null;
    public static final java.lang.String DEFAULT_CHARSET_NAME = "UTF-8";
    private static final char[] DIGITS_LOWER = null;
    private static final char[] DIGITS_UPPER = null;
    private final java.nio.charset.Charset charset;

    static {
            java.nio.charset.Charset r0 = org.apache.commons.codec1.Charsets.UTF_8
            org.apache.commons.codec1.binary.Hex.DEFAULT_CHARSET = r0
            r0 = 16
            char[] r1 = new char[r0]
            r1 = {x0016: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            org.apache.commons.codec1.binary.Hex.DIGITS_LOWER = r1
            char[] r0 = new char[r0]
            r0 = {x002a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            org.apache.commons.codec1.binary.Hex.DIGITS_UPPER = r0
            return
    }

    public Hex() {
            r1 = this;
            r1.<init>()
            java.nio.charset.Charset r0 = org.apache.commons.codec1.binary.Hex.DEFAULT_CHARSET
            r1.charset = r0
            return
    }

    public Hex(java.lang.String r1) {
            r0 = this;
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r1)
            r0.<init>(r1)
            return
    }

    public Hex(java.nio.charset.Charset r1) {
            r0 = this;
            r0.<init>()
            r0.charset = r1
            return
    }

    public static byte[] decodeHex(char[] r6) throws org.apache.commons.codec1.DecoderException {
            int r0 = r6.length
            r1 = r0 & 1
            if (r1 != 0) goto L29
            int r1 = r0 >> 1
            byte[] r1 = new byte[r1]
            r2 = 0
            r3 = r2
        Lb:
            if (r2 < r0) goto Le
            return r1
        Le:
            char r4 = r6[r2]
            int r4 = toDigit(r4, r2)
            int r4 = r4 << 4
            int r2 = r2 + 1
            char r5 = r6[r2]
            int r5 = toDigit(r5, r2)
            r4 = r4 | r5
            int r2 = r2 + 1
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r1[r3] = r4
            int r3 = r3 + 1
            goto Lb
        L29:
            org.apache.commons.codec1.DecoderException r6 = new org.apache.commons.codec1.DecoderException
            java.lang.String r0 = "Odd number of characters."
            r6.<init>(r0)
            throw r6
    }

    public static char[] encodeHex(byte[] r1) {
            r0 = 1
            char[] r1 = encodeHex(r1, r0)
            return r1
    }

    public static char[] encodeHex(byte[] r0, boolean r1) {
            if (r1 == 0) goto L5
            char[] r1 = org.apache.commons.codec1.binary.Hex.DIGITS_LOWER
            goto L7
        L5:
            char[] r1 = org.apache.commons.codec1.binary.Hex.DIGITS_UPPER
        L7:
            char[] r0 = encodeHex(r0, r1)
            return r0
    }

    protected static char[] encodeHex(byte[] r6, char[] r7) {
            int r0 = r6.length
            int r1 = r0 << 1
            char[] r1 = new char[r1]
            r2 = 0
            r3 = r2
        L7:
            if (r2 < r0) goto La
            return r1
        La:
            int r4 = r3 + 1
            r5 = r6[r2]
            r5 = r5 & 240(0xf0, float:3.36E-43)
            int r5 = r5 >>> 4
            char r5 = r7[r5]
            r1[r3] = r5
            int r3 = r4 + 1
            r5 = r6[r2]
            r5 = r5 & 15
            char r5 = r7[r5]
            r1[r4] = r5
            int r2 = r2 + 1
            goto L7
    }

    public static java.lang.String encodeHexString(byte[] r1) {
            java.lang.String r0 = new java.lang.String
            char[] r1 = encodeHex(r1)
            r0.<init>(r1)
            return r0
    }

    protected static int toDigit(char r3, int r4) throws org.apache.commons.codec1.DecoderException {
            r0 = 16
            int r0 = java.lang.Character.digit(r3, r0)
            r1 = -1
            if (r0 == r1) goto La
            return r0
        La:
            org.apache.commons.codec1.DecoderException r0 = new org.apache.commons.codec1.DecoderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Illegal hexadecimal character "
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = " at index "
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    @Override
    public java.lang.Object decode(java.lang.Object r3) throws org.apache.commons.codec1.DecoderException {
            r2 = this;
            boolean r0 = r3 instanceof java.lang.String     // Catch: java.lang.ClassCastException -> L12
            if (r0 == 0) goto Lb
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.ClassCastException -> L12
            char[] r3 = r3.toCharArray()     // Catch: java.lang.ClassCastException -> L12
            goto Ld
        Lb:
            char[] r3 = (char[]) r3     // Catch: java.lang.ClassCastException -> L12
        Ld:
            byte[] r3 = decodeHex(r3)     // Catch: java.lang.ClassCastException -> L12
            return r3
        L12:
            r3 = move-exception
            org.apache.commons.codec1.DecoderException r0 = new org.apache.commons.codec1.DecoderException
            java.lang.String r1 = r3.getMessage()
            r0.<init>(r1, r3)
            throw r0
    }

    @Override
    public byte[] decode(byte[] r3) throws org.apache.commons.codec1.DecoderException {
            r2 = this;
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = r2.getCharset()
            r0.<init>(r3, r1)
            char[] r3 = r0.toCharArray()
            byte[] r3 = decodeHex(r3)
            return r3
    }

    @Override
    public java.lang.Object encode(java.lang.Object r3) throws org.apache.commons.codec1.EncoderException {
            r2 = this;
            boolean r0 = r3 instanceof java.lang.String     // Catch: java.lang.ClassCastException -> L16
            if (r0 == 0) goto Lf
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.ClassCastException -> L16
            java.nio.charset.Charset r0 = r2.getCharset()     // Catch: java.lang.ClassCastException -> L16
            byte[] r3 = r3.getBytes(r0)     // Catch: java.lang.ClassCastException -> L16
            goto L11
        Lf:
            byte[] r3 = (byte[]) r3     // Catch: java.lang.ClassCastException -> L16
        L11:
            char[] r3 = encodeHex(r3)     // Catch: java.lang.ClassCastException -> L16
            return r3
        L16:
            r3 = move-exception
            org.apache.commons.codec1.EncoderException r0 = new org.apache.commons.codec1.EncoderException
            java.lang.String r1 = r3.getMessage()
            r0.<init>(r1, r3)
            throw r0
    }

    @Override
    public byte[] encode(byte[] r2) {
            r1 = this;
            java.lang.String r2 = encodeHexString(r2)
            java.nio.charset.Charset r0 = r1.getCharset()
            byte[] r2 = r2.getBytes(r0)
            return r2
    }

    public java.nio.charset.Charset getCharset() {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            return r0
    }

    public java.lang.String getCharsetName() {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            java.lang.String r0 = r0.name()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = super.toString()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.<init>(r1)
            java.lang.String r1 = "[charsetName="
            r0.append(r1)
            java.nio.charset.Charset r1 = r2.charset
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
