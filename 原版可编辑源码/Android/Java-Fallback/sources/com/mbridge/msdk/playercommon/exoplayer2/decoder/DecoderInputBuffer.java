package com.mbridge.msdk.playercommon.exoplayer2.decoder;

public class DecoderInputBuffer extends com.mbridge.msdk.playercommon.exoplayer2.decoder.Buffer {
    public static final int BUFFER_REPLACEMENT_MODE_DIRECT = 2;
    public static final int BUFFER_REPLACEMENT_MODE_DISABLED = 0;
    public static final int BUFFER_REPLACEMENT_MODE_NORMAL = 1;
    private final int bufferReplacementMode;
    public final com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo cryptoInfo;
    public java.nio.ByteBuffer data;
    public long timeUs;

    public @interface BufferReplacementMode {
    }

    public DecoderInputBuffer(int r2) {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo r0 = new com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo
            r0.<init>()
            r1.cryptoInfo = r0
            r1.bufferReplacementMode = r2
            return
    }

    private java.nio.ByteBuffer createReplacementByteBuffer(int r5) {
            r4 = this;
            int r0 = r4.bufferReplacementMode
            r1 = 1
            if (r0 != r1) goto La
            java.nio.ByteBuffer r5 = java.nio.ByteBuffer.allocate(r5)
            return r5
        La:
            r1 = 2
            if (r0 != r1) goto L12
            java.nio.ByteBuffer r5 = java.nio.ByteBuffer.allocateDirect(r5)
            return r5
        L12:
            java.nio.ByteBuffer r0 = r4.data
            if (r0 != 0) goto L18
            r0 = 0
            goto L1c
        L18:
            int r0 = r0.capacity()
        L1c:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Buffer too small ("
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = " < "
            r2.append(r0)
            r2.append(r5)
            java.lang.String r5 = ")"
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r1.<init>(r5)
            throw r1
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer newFlagsOnlyInstance() {
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = new com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer
            r1 = 0
            r0.<init>(r1)
            return r0
    }

    @Override
    public void clear() {
            r1 = this;
            super.clear()
            java.nio.ByteBuffer r0 = r1.data
            if (r0 == 0) goto La
            r0.clear()
        La:
            return
    }

    public void ensureSpaceForWrite(int r4) throws java.lang.IllegalStateException {
            r3 = this;
            java.nio.ByteBuffer r0 = r3.data
            if (r0 != 0) goto Lb
            java.nio.ByteBuffer r4 = r3.createReplacementByteBuffer(r4)
            r3.data = r4
            return
        Lb:
            int r0 = r0.capacity()
            java.nio.ByteBuffer r1 = r3.data
            int r1 = r1.position()
            int r4 = r4 + r1
            if (r0 < r4) goto L19
            return
        L19:
            java.nio.ByteBuffer r4 = r3.createReplacementByteBuffer(r4)
            if (r1 <= 0) goto L2f
            java.nio.ByteBuffer r0 = r3.data
            r2 = 0
            r0.position(r2)
            java.nio.ByteBuffer r0 = r3.data
            r0.limit(r1)
            java.nio.ByteBuffer r0 = r3.data
            r4.put(r0)
        L2f:
            r3.data = r4
            return
    }

    public final void flip() {
            r1 = this;
            java.nio.ByteBuffer r0 = r1.data
            r0.flip()
            return
    }

    public final boolean isEncrypted() {
            r1 = this;
            r0 = 1073741824(0x40000000, float:2.0)
            boolean r0 = r1.getFlag(r0)
            return r0
    }

    public final boolean isFlagsOnly() {
            r1 = this;
            java.nio.ByteBuffer r0 = r1.data
            if (r0 != 0) goto La
            int r0 = r1.bufferReplacementMode
            if (r0 != 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }
}
