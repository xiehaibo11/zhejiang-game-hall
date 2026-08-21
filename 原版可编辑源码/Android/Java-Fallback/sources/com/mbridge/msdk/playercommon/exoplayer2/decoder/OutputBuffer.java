package com.mbridge.msdk.playercommon.exoplayer2.decoder;

public abstract class OutputBuffer extends com.mbridge.msdk.playercommon.exoplayer2.decoder.Buffer {
    public int skippedOutputBufferCount;
    public long timeUs;

    public OutputBuffer() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void release();
}
