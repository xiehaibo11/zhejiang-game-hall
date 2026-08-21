package org.apache.commons.codec1.binary;

public abstract class BaseNCodec implements org.apache.commons.codec1.BinaryEncoder, org.apache.commons.codec1.BinaryDecoder {
    private static final int DEFAULT_BUFFER_RESIZE_FACTOR = 2;
    private static final int DEFAULT_BUFFER_SIZE = 8192;
    static final int EOF = -1;
    protected static final int MASK_8BITS = 255;
    public static final int MIME_CHUNK_SIZE = 76;
    protected static final byte PAD_DEFAULT = 61;
    public static final int PEM_CHUNK_SIZE = 64;

    @java.lang.Deprecated
    protected final byte PAD;
    private final int chunkSeparatorLength;
    private final int encodedBlockSize;
    protected final int lineLength;
    protected final byte pad;
    private final int unencodedBlockSize;

    static class Context {
        byte[] buffer;
        int currentLinePos;
        boolean eof;
        int ibitWorkArea;
        long lbitWorkArea;
        int modulus;
        int pos;
        int readPos;

        Context() {
                r0 = this;
                r0.<init>()
                return
        }

        public java.lang.String toString() {
                r3 = this;
                r0 = 9
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.Class r1 = r3.getClass()
                java.lang.String r1 = r1.getSimpleName()
                r2 = 0
                r0[r2] = r1
                byte[] r1 = r3.buffer
                java.lang.String r1 = java.util.Arrays.toString(r1)
                r2 = 1
                r0[r2] = r1
                int r1 = r3.currentLinePos
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r2 = 2
                r0[r2] = r1
                boolean r1 = r3.eof
                java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
                r2 = 3
                r0[r2] = r1
                int r1 = r3.ibitWorkArea
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r2 = 4
                r0[r2] = r1
                long r1 = r3.lbitWorkArea
                java.lang.Long r1 = java.lang.Long.valueOf(r1)
                r2 = 5
                r0[r2] = r1
                int r1 = r3.modulus
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r2 = 6
                r0[r2] = r1
                int r1 = r3.pos
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r2 = 7
                r0[r2] = r1
                int r1 = r3.readPos
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r2 = 8
                r0[r2] = r1
                java.lang.String r1 = "%s[buffer=%s, currentLinePos=%s, eof=%s, ibitWorkArea=%s, lbitWorkArea=%s, modulus=%s, pos=%s, readPos=%s]"
                java.lang.String r0 = java.lang.String.format(r1, r0)
                return r0
        }
    }

    protected BaseNCodec(int r7, int r8, int r9, int r10) {
            r6 = this;
            r5 = 61
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    protected BaseNCodec(int r2, int r3, int r4, int r5, byte r6) {
            r1 = this;
            r1.<init>()
            r0 = 61
            r1.PAD = r0
            r1.unencodedBlockSize = r2
            r1.encodedBlockSize = r3
            r2 = 0
            if (r4 <= 0) goto L12
            if (r5 <= 0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = r2
        L13:
            if (r0 == 0) goto L18
            int r4 = r4 / r3
            int r2 = r4 * r3
        L18:
            r1.lineLength = r2
            r1.chunkSeparatorLength = r5
            r1.pad = r6
            return
    }

    protected static boolean isWhiteSpace(byte r1) {
            r0 = 9
            if (r1 == r0) goto L12
            r0 = 10
            if (r1 == r0) goto L12
            r0 = 13
            if (r1 == r0) goto L12
            r0 = 32
            if (r1 == r0) goto L12
            r1 = 0
            return r1
        L12:
            r1 = 1
            return r1
    }

    private byte[] resizeBuffer(org.apache.commons.codec1.binary.BaseNCodec.Context r5) {
            r4 = this;
            byte[] r0 = r5.buffer
            r1 = 0
            if (r0 != 0) goto L12
            int r0 = r4.getDefaultBufferSize()
            byte[] r0 = new byte[r0]
            r5.buffer = r0
            r5.pos = r1
            r5.readPos = r1
            goto L23
        L12:
            byte[] r0 = r5.buffer
            int r0 = r0.length
            int r0 = r0 * 2
            byte[] r0 = new byte[r0]
            byte[] r2 = r5.buffer
            byte[] r3 = r5.buffer
            int r3 = r3.length
            java.lang.System.arraycopy(r2, r1, r0, r1, r3)
            r5.buffer = r0
        L23:
            byte[] r5 = r5.buffer
            return r5
    }

    int available(org.apache.commons.codec1.binary.BaseNCodec.Context r2) {
            r1 = this;
            byte[] r0 = r2.buffer
            if (r0 == 0) goto La
            int r0 = r2.pos
            int r2 = r2.readPos
            int r0 = r0 - r2
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    protected boolean containsAlphabetOrPad(byte[] r6) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            int r1 = r6.length
            r2 = r0
        L6:
            if (r2 < r1) goto L9
            return r0
        L9:
            r3 = r6[r2]
            byte r4 = r5.pad
            if (r4 == r3) goto L19
            boolean r3 = r5.isInAlphabet(r3)
            if (r3 == 0) goto L16
            goto L19
        L16:
            int r2 = r2 + 1
            goto L6
        L19:
            r6 = 1
            return r6
    }

    @Override
    public java.lang.Object decode(java.lang.Object r2) throws org.apache.commons.codec1.DecoderException {
            r1 = this;
            boolean r0 = r2 instanceof byte[]
            if (r0 == 0) goto Lb
            byte[] r2 = (byte[]) r2
            byte[] r2 = r1.decode(r2)
            return r2
        Lb:
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto L16
            java.lang.String r2 = (java.lang.String) r2
            byte[] r2 = r1.decode(r2)
            return r2
        L16:
            org.apache.commons.codec1.DecoderException r2 = new org.apache.commons.codec1.DecoderException
            java.lang.String r0 = "Parameter supplied to Base-N decode is not a byte[] or a String"
            r2.<init>(r0)
            throw r2
    }

    abstract void decode(byte[] r1, int r2, int r3, org.apache.commons.codec1.binary.BaseNCodec.Context r4);

    public byte[] decode(java.lang.String r1) {
            r0 = this;
            byte[] r1 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r1)
            byte[] r1 = r0.decode(r1)
            return r1
    }

    @Override
    public byte[] decode(byte[] r4) {
            r3 = this;
            if (r4 == 0) goto L1c
            int r0 = r4.length
            if (r0 != 0) goto L6
            goto L1c
        L6:
            org.apache.commons.codec1.binary.BaseNCodec$Context r0 = new org.apache.commons.codec1.binary.BaseNCodec$Context
            r0.<init>()
            int r1 = r4.length
            r2 = 0
            r3.decode(r4, r2, r1, r0)
            r1 = -1
            r3.decode(r4, r2, r1, r0)
            int r4 = r0.pos
            byte[] r1 = new byte[r4]
            r3.readResults(r1, r2, r4, r0)
            return r1
        L1c:
            return r4
    }

    @Override
    public java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec1.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof byte[]
            if (r0 == 0) goto Lb
            byte[] r2 = (byte[]) r2
            byte[] r2 = r1.encode(r2)
            return r2
        Lb:
            org.apache.commons.codec1.EncoderException r2 = new org.apache.commons.codec1.EncoderException
            java.lang.String r0 = "Parameter supplied to Base-N encode is not a byte[]"
            r2.<init>(r0)
            throw r2
    }

    abstract void encode(byte[] r1, int r2, int r3, org.apache.commons.codec1.binary.BaseNCodec.Context r4);

    @Override
    public byte[] encode(byte[] r4) {
            r3 = this;
            if (r4 == 0) goto L1f
            int r0 = r4.length
            if (r0 != 0) goto L6
            goto L1f
        L6:
            org.apache.commons.codec1.binary.BaseNCodec$Context r0 = new org.apache.commons.codec1.binary.BaseNCodec$Context
            r0.<init>()
            int r1 = r4.length
            r2 = 0
            r3.encode(r4, r2, r1, r0)
            r1 = -1
            r3.encode(r4, r2, r1, r0)
            int r4 = r0.pos
            int r1 = r0.readPos
            int r4 = r4 - r1
            byte[] r1 = new byte[r4]
            r3.readResults(r1, r2, r4, r0)
            return r1
        L1f:
            return r4
    }

    public java.lang.String encodeAsString(byte[] r1) {
            r0 = this;
            byte[] r1 = r0.encode(r1)
            java.lang.String r1 = org.apache.commons.codec1.binary.StringUtils.newStringUtf8(r1)
            return r1
    }

    public java.lang.String encodeToString(byte[] r1) {
            r0 = this;
            byte[] r1 = r0.encode(r1)
            java.lang.String r1 = org.apache.commons.codec1.binary.StringUtils.newStringUtf8(r1)
            return r1
    }

    protected byte[] ensureBufferSize(int r3, org.apache.commons.codec1.binary.BaseNCodec.Context r4) {
            r2 = this;
            byte[] r0 = r4.buffer
            if (r0 == 0) goto L10
            byte[] r0 = r4.buffer
            int r0 = r0.length
            int r1 = r4.pos
            int r1 = r1 + r3
            if (r0 >= r1) goto Ld
            goto L10
        Ld:
            byte[] r3 = r4.buffer
            return r3
        L10:
            byte[] r3 = r2.resizeBuffer(r4)
            return r3
    }

    protected int getDefaultBufferSize() {
            r1 = this;
            r0 = 8192(0x2000, float:1.148E-41)
            return r0
    }

    public long getEncodedLength(byte[] r7) {
            r6 = this;
            int r7 = r7.length
            int r0 = r6.unencodedBlockSize
            int r7 = r7 + r0
            int r7 = r7 + (-1)
            int r7 = r7 / r0
            long r0 = (long) r7
            int r7 = r6.encodedBlockSize
            long r2 = (long) r7
            long r0 = r0 * r2
            int r7 = r6.lineLength
            if (r7 <= 0) goto L1c
            long r2 = (long) r7
            long r2 = r2 + r0
            r4 = 1
            long r2 = r2 - r4
            long r4 = (long) r7
            long r2 = r2 / r4
            int r7 = r6.chunkSeparatorLength
            long r4 = (long) r7
            long r2 = r2 * r4
            long r0 = r0 + r2
        L1c:
            return r0
    }

    boolean hasData(org.apache.commons.codec1.binary.BaseNCodec.Context r1) {
            r0 = this;
            byte[] r1 = r1.buffer
            if (r1 == 0) goto L6
            r1 = 1
            return r1
        L6:
            r1 = 0
            return r1
    }

    protected abstract boolean isInAlphabet(byte r1);

    public boolean isInAlphabet(java.lang.String r2) {
            r1 = this;
            byte[] r2 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r2)
            r0 = 1
            boolean r2 = r1.isInAlphabet(r2, r0)
            return r2
    }

    public boolean isInAlphabet(byte[] r5, boolean r6) {
            r4 = this;
            r0 = 0
            r1 = r0
        L2:
            int r2 = r5.length
            if (r1 < r2) goto L7
            r5 = 1
            return r5
        L7:
            r2 = r5[r1]
            boolean r2 = r4.isInAlphabet(r2)
            if (r2 != 0) goto L20
            if (r6 == 0) goto L1f
            r2 = r5[r1]
            byte r3 = r4.pad
            if (r2 == r3) goto L20
            r2 = r5[r1]
            boolean r2 = isWhiteSpace(r2)
            if (r2 != 0) goto L20
        L1f:
            return r0
        L20:
            int r1 = r1 + 1
            goto L2
    }

    int readResults(byte[] r3, int r4, int r5, org.apache.commons.codec1.binary.BaseNCodec.Context r6) {
            r2 = this;
            byte[] r0 = r6.buffer
            if (r0 == 0) goto L22
            int r0 = r2.available(r6)
            int r5 = java.lang.Math.min(r0, r5)
            byte[] r0 = r6.buffer
            int r1 = r6.readPos
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            int r3 = r6.readPos
            int r3 = r3 + r5
            r6.readPos = r3
            int r3 = r6.readPos
            int r4 = r6.pos
            if (r3 < r4) goto L21
            r3 = 0
            r6.buffer = r3
        L21:
            return r5
        L22:
            boolean r3 = r6.eof
            if (r3 == 0) goto L28
            r3 = -1
            goto L29
        L28:
            r3 = 0
        L29:
            return r3
    }
}
