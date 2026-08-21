package org.apache.commons.codec.binary;

public class BinaryCodec implements org.apache.commons.codec.BinaryDecoder, org.apache.commons.codec.BinaryEncoder {
    private static final int[] BITS = null;
    private static final int BIT_0 = 1;
    private static final int BIT_1 = 2;
    private static final int BIT_2 = 4;
    private static final int BIT_3 = 8;
    private static final int BIT_4 = 16;
    private static final int BIT_5 = 32;
    private static final int BIT_6 = 64;
    private static final int BIT_7 = 128;
    private static final byte[] EMPTY_BYTE_ARRAY = null;
    private static final char[] EMPTY_CHAR_ARRAY = null;

    static {
            r0 = 0
            char[] r1 = new char[r0]
            org.apache.commons.codec.binary.BinaryCodec.EMPTY_CHAR_ARRAY = r1
            byte[] r0 = new byte[r0]
            org.apache.commons.codec.binary.BinaryCodec.EMPTY_BYTE_ARRAY = r0
            r0 = 8
            int[] r0 = new int[r0]
            r0 = {x0014: FILL_ARRAY_DATA , data: [1, 2, 4, 8, 16, 32, 64, 128} // fill-array
            org.apache.commons.codec.binary.BinaryCodec.BITS = r0
            return
    }

    public BinaryCodec() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] fromAscii(byte[] r9) {
            boolean r0 = isEmpty(r9)
            if (r0 == 0) goto L9
            byte[] r9 = org.apache.commons.codec.binary.BinaryCodec.EMPTY_BYTE_ARRAY
            return r9
        L9:
            int r0 = r9.length
            int r0 = r0 >> 3
            byte[] r1 = new byte[r0]
            int r2 = r9.length
            int r2 = r2 + (-1)
            r3 = 0
            r4 = r3
        L13:
            if (r4 >= r0) goto L33
            r5 = r3
        L16:
            int[] r6 = org.apache.commons.codec.binary.BinaryCodec.BITS
            int r7 = r6.length
            if (r5 >= r7) goto L2e
            int r7 = r2 - r5
            r7 = r9[r7]
            r8 = 49
            if (r7 != r8) goto L2b
            r7 = r1[r4]
            r6 = r6[r5]
            r6 = r6 | r7
            byte r6 = (byte) r6
            r1[r4] = r6
        L2b:
            int r5 = r5 + 1
            goto L16
        L2e:
            int r4 = r4 + 1
            int r2 = r2 + (-8)
            goto L13
        L33:
            return r1
    }

    public static byte[] fromAscii(char[] r9) {
            if (r9 == 0) goto L31
            int r0 = r9.length
            if (r0 != 0) goto L6
            goto L31
        L6:
            int r0 = r9.length
            int r0 = r0 >> 3
            byte[] r1 = new byte[r0]
            int r2 = r9.length
            int r2 = r2 + (-1)
            r3 = 0
            r4 = r3
        L10:
            if (r4 >= r0) goto L30
            r5 = r3
        L13:
            int[] r6 = org.apache.commons.codec.binary.BinaryCodec.BITS
            int r7 = r6.length
            if (r5 >= r7) goto L2b
            int r7 = r2 - r5
            char r7 = r9[r7]
            r8 = 49
            if (r7 != r8) goto L28
            r7 = r1[r4]
            r6 = r6[r5]
            r6 = r6 | r7
            byte r6 = (byte) r6
            r1[r4] = r6
        L28:
            int r5 = r5 + 1
            goto L13
        L2b:
            int r4 = r4 + 1
            int r2 = r2 + (-8)
            goto L10
        L30:
            return r1
        L31:
            byte[] r9 = org.apache.commons.codec.binary.BinaryCodec.EMPTY_BYTE_ARRAY
            return r9
    }

    private static boolean isEmpty(byte[] r0) {
            if (r0 == 0) goto L8
            int r0 = r0.length
            if (r0 != 0) goto L6
            goto L8
        L6:
            r0 = 0
            goto L9
        L8:
            r0 = 1
        L9:
            return r0
    }

    public static byte[] toAsciiBytes(byte[] r7) {
            boolean r0 = isEmpty(r7)
            if (r0 == 0) goto L9
            byte[] r7 = org.apache.commons.codec.binary.BinaryCodec.EMPTY_BYTE_ARRAY
            return r7
        L9:
            int r0 = r7.length
            int r0 = r0 << 3
            byte[] r1 = new byte[r0]
            int r0 = r0 + (-1)
            r2 = 0
            r3 = r2
        L12:
            int r4 = r7.length
            if (r3 >= r4) goto L37
            r4 = r2
        L16:
            int[] r5 = org.apache.commons.codec.binary.BinaryCodec.BITS
            int r6 = r5.length
            if (r4 >= r6) goto L32
            r6 = r7[r3]
            r5 = r5[r4]
            r5 = r5 & r6
            if (r5 != 0) goto L29
            int r5 = r0 - r4
            r6 = 48
            r1[r5] = r6
            goto L2f
        L29:
            int r5 = r0 - r4
            r6 = 49
            r1[r5] = r6
        L2f:
            int r4 = r4 + 1
            goto L16
        L32:
            int r3 = r3 + 1
            int r0 = r0 + (-8)
            goto L12
        L37:
            return r1
    }

    public static char[] toAsciiChars(byte[] r7) {
            boolean r0 = isEmpty(r7)
            if (r0 == 0) goto L9
            char[] r7 = org.apache.commons.codec.binary.BinaryCodec.EMPTY_CHAR_ARRAY
            return r7
        L9:
            int r0 = r7.length
            int r0 = r0 << 3
            char[] r1 = new char[r0]
            int r0 = r0 + (-1)
            r2 = 0
            r3 = r2
        L12:
            int r4 = r7.length
            if (r3 >= r4) goto L37
            r4 = r2
        L16:
            int[] r5 = org.apache.commons.codec.binary.BinaryCodec.BITS
            int r6 = r5.length
            if (r4 >= r6) goto L32
            r6 = r7[r3]
            r5 = r5[r4]
            r5 = r5 & r6
            if (r5 != 0) goto L29
            int r5 = r0 - r4
            r6 = 48
            r1[r5] = r6
            goto L2f
        L29:
            int r5 = r0 - r4
            r6 = 49
            r1[r5] = r6
        L2f:
            int r4 = r4 + 1
            goto L16
        L32:
            int r3 = r3 + 1
            int r0 = r0 + (-8)
            goto L12
        L37:
            return r1
    }

    public static java.lang.String toAsciiString(byte[] r1) {
            java.lang.String r0 = new java.lang.String
            char[] r1 = toAsciiChars(r1)
            r0.<init>(r1)
            return r0
    }

    @Override
    public java.lang.Object decode(java.lang.Object r2) throws org.apache.commons.codec.DecoderException {
            r1 = this;
            if (r2 != 0) goto L5
            byte[] r2 = org.apache.commons.codec.binary.BinaryCodec.EMPTY_BYTE_ARRAY
            return r2
        L5:
            boolean r0 = r2 instanceof byte[]
            if (r0 == 0) goto L12
            byte[] r2 = (byte[]) r2
            byte[] r2 = (byte[]) r2
            byte[] r2 = fromAscii(r2)
            return r2
        L12:
            boolean r0 = r2 instanceof char[]
            if (r0 == 0) goto L1f
            char[] r2 = (char[]) r2
            char[] r2 = (char[]) r2
            byte[] r2 = fromAscii(r2)
            return r2
        L1f:
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto L2e
            java.lang.String r2 = (java.lang.String) r2
            char[] r2 = r2.toCharArray()
            byte[] r2 = fromAscii(r2)
            return r2
        L2e:
            org.apache.commons.codec.DecoderException r2 = new org.apache.commons.codec.DecoderException
            java.lang.String r0 = "argument not a byte array"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public byte[] decode(byte[] r1) {
            r0 = this;
            byte[] r1 = fromAscii(r1)
            return r1
    }

    @Override
    public java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof byte[]
            if (r0 == 0) goto Ld
            byte[] r2 = (byte[]) r2
            byte[] r2 = (byte[]) r2
            char[] r2 = toAsciiChars(r2)
            return r2
        Ld:
            org.apache.commons.codec.EncoderException r2 = new org.apache.commons.codec.EncoderException
            java.lang.String r0 = "argument not a byte array"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public byte[] encode(byte[] r1) {
            r0 = this;
            byte[] r1 = toAsciiBytes(r1)
            return r1
    }

    public byte[] toByteArray(java.lang.String r1) {
            r0 = this;
            if (r1 != 0) goto L5
            byte[] r1 = org.apache.commons.codec.binary.BinaryCodec.EMPTY_BYTE_ARRAY
            return r1
        L5:
            char[] r1 = r1.toCharArray()
            byte[] r1 = fromAscii(r1)
            return r1
    }
}
