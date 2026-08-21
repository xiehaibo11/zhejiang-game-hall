package org.apache.commons.codec.binary;

public abstract class BaseNCodec implements org.apache.commons.codec.BinaryEncoder, org.apache.commons.codec.BinaryDecoder {
    private static final int DEFAULT_BUFFER_RESIZE_FACTOR = 2;
    private static final int DEFAULT_BUFFER_SIZE = 8192;
    protected static final int MASK_8BITS = 255;
    public static final int MIME_CHUNK_SIZE = 76;
    protected static final byte PAD_DEFAULT = 61;
    public static final int PEM_CHUNK_SIZE = 64;
    protected final byte PAD;
    protected byte[] buffer;
    private final int chunkSeparatorLength;
    protected int currentLinePos;
    private final int encodedBlockSize;
    protected boolean eof;
    protected final int lineLength;
    protected int modulus;
    protected int pos;
    private int readPos;
    private final int unencodedBlockSize;

    protected BaseNCodec(int r2, int r3, int r4, int r5) {
            r1 = this;
            r1.<init>()
            r0 = 61
            r1.PAD = r0
            r1.unencodedBlockSize = r2
            r1.encodedBlockSize = r3
            if (r4 <= 0) goto L12
            if (r5 <= 0) goto L12
            int r4 = r4 / r3
            int r4 = r4 * r3
            goto L13
        L12:
            r4 = 0
        L13:
            r1.lineLength = r4
            r1.chunkSeparatorLength = r5
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

    private void reset() {
            r1 = this;
            r0 = 0
            r1.buffer = r0
            r0 = 0
            r1.pos = r0
            r1.readPos = r0
            r1.currentLinePos = r0
            r1.modulus = r0
            r1.eof = r0
            return
    }

    private void resizeBuffer() {
            r4 = this;
            byte[] r0 = r4.buffer
            r1 = 0
            if (r0 != 0) goto L12
            int r0 = r4.getDefaultBufferSize()
            byte[] r0 = new byte[r0]
            r4.buffer = r0
            r4.pos = r1
            r4.readPos = r1
            goto L1d
        L12:
            int r2 = r0.length
            int r2 = r2 * 2
            byte[] r2 = new byte[r2]
            int r3 = r0.length
            java.lang.System.arraycopy(r0, r1, r2, r1, r3)
            r4.buffer = r2
        L1d:
            return
    }

    int available() {
            r2 = this;
            byte[] r0 = r2.buffer
            if (r0 == 0) goto La
            int r0 = r2.pos
            int r1 = r2.readPos
            int r0 = r0 - r1
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
            if (r2 >= r1) goto L1a
            r3 = r6[r2]
            r4 = 61
            if (r4 == r3) goto L18
            boolean r3 = r5.isInAlphabet(r3)
            if (r3 == 0) goto L15
            goto L18
        L15:
            int r2 = r2 + 1
            goto L6
        L18:
            r6 = 1
            return r6
        L1a:
            return r0
    }

    @Override
    public java.lang.Object decode(java.lang.Object r2) throws org.apache.commons.codec.DecoderException {
            r1 = this;
            boolean r0 = r2 instanceof byte[]
            if (r0 == 0) goto Ld
            byte[] r2 = (byte[]) r2
            byte[] r2 = (byte[]) r2
            byte[] r2 = r1.decode(r2)
            return r2
        Ld:
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto L18
            java.lang.String r2 = (java.lang.String) r2
            byte[] r2 = r1.decode(r2)
            return r2
        L18:
            org.apache.commons.codec.DecoderException r2 = new org.apache.commons.codec.DecoderException
            java.lang.String r0 = "Parameter supplied to Base-N decode is not a byte[] or a String"
            r2.<init>(r0)
            throw r2
    }

    abstract void decode(byte[] r1, int r2, int r3);

    public byte[] decode(java.lang.String r1) {
            r0 = this;
            byte[] r1 = org.apache.commons.codec.binary.StringUtils.getBytesUtf8(r1)
            byte[] r1 = r0.decode(r1)
            return r1
    }

    @Override
    public byte[] decode(byte[] r3) {
            r2 = this;
            r2.reset()
            if (r3 == 0) goto L1a
            int r0 = r3.length
            if (r0 != 0) goto L9
            goto L1a
        L9:
            int r0 = r3.length
            r1 = 0
            r2.decode(r3, r1, r0)
            r0 = -1
            r2.decode(r3, r1, r0)
            int r3 = r2.pos
            byte[] r0 = new byte[r3]
            r2.readResults(r0, r1, r3)
            return r0
        L1a:
            return r3
    }

    @Override
    public java.lang.Object encode(java.lang.Object r2) throws org.apache.commons.codec.EncoderException {
            r1 = this;
            boolean r0 = r2 instanceof byte[]
            if (r0 == 0) goto Ld
            byte[] r2 = (byte[]) r2
            byte[] r2 = (byte[]) r2
            byte[] r2 = r1.encode(r2)
            return r2
        Ld:
            org.apache.commons.codec.EncoderException r2 = new org.apache.commons.codec.EncoderException
            java.lang.String r0 = "Parameter supplied to Base-N encode is not a byte[]"
            r2.<init>(r0)
            throw r2
    }

    abstract void encode(byte[] r1, int r2, int r3);

    @Override
    public byte[] encode(byte[] r3) {
            r2 = this;
            r2.reset()
            if (r3 == 0) goto L1d
            int r0 = r3.length
            if (r0 != 0) goto L9
            goto L1d
        L9:
            int r0 = r3.length
            r1 = 0
            r2.encode(r3, r1, r0)
            r0 = -1
            r2.encode(r3, r1, r0)
            int r3 = r2.pos
            int r0 = r2.readPos
            int r3 = r3 - r0
            byte[] r0 = new byte[r3]
            r2.readResults(r0, r1, r3)
            return r0
        L1d:
            return r3
    }

    public java.lang.String encodeAsString(byte[] r1) {
            r0 = this;
            byte[] r1 = r0.encode(r1)
            java.lang.String r1 = org.apache.commons.codec.binary.StringUtils.newStringUtf8(r1)
            return r1
    }

    public java.lang.String encodeToString(byte[] r1) {
            r0 = this;
            byte[] r1 = r0.encode(r1)
            java.lang.String r1 = org.apache.commons.codec.binary.StringUtils.newStringUtf8(r1)
            return r1
    }

    protected void ensureBufferSize(int r3) {
            r2 = this;
            byte[] r0 = r2.buffer
            if (r0 == 0) goto La
            int r0 = r0.length
            int r1 = r2.pos
            int r1 = r1 + r3
            if (r0 >= r1) goto Ld
        La:
            r2.resizeBuffer()
        Ld:
            return
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

    boolean hasData() {
            r1 = this;
            byte[] r0 = r1.buffer
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    protected abstract boolean isInAlphabet(byte r1);

    public boolean isInAlphabet(java.lang.String r2) {
            r1 = this;
            byte[] r2 = org.apache.commons.codec.binary.StringUtils.getBytesUtf8(r2)
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
            if (r1 >= r2) goto L21
            r2 = r5[r1]
            boolean r2 = r4.isInAlphabet(r2)
            if (r2 != 0) goto L1e
            if (r6 == 0) goto L1d
            r2 = r5[r1]
            r3 = 61
            if (r2 == r3) goto L1e
            r2 = r5[r1]
            boolean r2 = isWhiteSpace(r2)
            if (r2 != 0) goto L1e
        L1d:
            return r0
        L1e:
            int r1 = r1 + 1
            goto L2
        L21:
            r5 = 1
            return r5
    }

    int readResults(byte[] r3, int r4, int r5) {
            r2 = this;
            byte[] r0 = r2.buffer
            if (r0 == 0) goto L20
            int r0 = r2.available()
            int r5 = java.lang.Math.min(r0, r5)
            byte[] r0 = r2.buffer
            int r1 = r2.readPos
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            int r3 = r2.readPos
            int r3 = r3 + r5
            r2.readPos = r3
            int r4 = r2.pos
            if (r3 < r4) goto L1f
            r3 = 0
            r2.buffer = r3
        L1f:
            return r5
        L20:
            boolean r3 = r2.eof
            if (r3 == 0) goto L26
            r3 = -1
            goto L27
        L26:
            r3 = 0
        L27:
            return r3
    }
}
