package com.mbridge.msdk.playercommon.exoplayer2.decoder;

public class SimpleOutputBuffer extends com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer {
    public java.nio.ByteBuffer data;
    private final com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<?, com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ?> owner;

    public SimpleOutputBuffer(com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<?, com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ?> r1) {
            r0 = this;
            r0.<init>()
            r0.owner = r1
            return
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

    public java.nio.ByteBuffer init(long r1, int r3) {
            r0 = this;
            r0.timeUs = r1
            java.nio.ByteBuffer r1 = r0.data
            if (r1 == 0) goto Lc
            int r1 = r1.capacity()
            if (r1 >= r3) goto L1a
        Lc:
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.allocateDirect(r3)
            java.nio.ByteOrder r2 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r1 = r1.order(r2)
            r0.data = r1
        L1a:
            java.nio.ByteBuffer r1 = r0.data
            r2 = 0
            r1.position(r2)
            java.nio.ByteBuffer r1 = r0.data
            r1.limit(r3)
            java.nio.ByteBuffer r1 = r0.data
            return r1
    }

    @Override
    public void release() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<?, com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ?> r0 = r1.owner
            r0.releaseOutputBuffer(r1)
            return
    }
}
