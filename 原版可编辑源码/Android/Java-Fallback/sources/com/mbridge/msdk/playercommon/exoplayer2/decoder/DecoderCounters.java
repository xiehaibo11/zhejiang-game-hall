package com.mbridge.msdk.playercommon.exoplayer2.decoder;

public final class DecoderCounters {
    public int decoderInitCount;
    public int decoderReleaseCount;
    public int droppedBufferCount;
    public int droppedToKeyframeCount;
    public int inputBufferCount;
    public int maxConsecutiveDroppedBufferCount;
    public int renderedOutputBufferCount;
    public int skippedInputBufferCount;
    public int skippedOutputBufferCount;

    public DecoderCounters() {
            r0 = this;
            r0.<init>()
            return
    }

    public final synchronized void ensureUpdated() {
            r0 = this;
            monitor-enter(r0)
            monitor-exit(r0)
            return
    }

    public final void merge(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3) {
            r2 = this;
            int r0 = r2.decoderInitCount
            int r1 = r3.decoderInitCount
            int r0 = r0 + r1
            r2.decoderInitCount = r0
            int r0 = r2.decoderReleaseCount
            int r1 = r3.decoderReleaseCount
            int r0 = r0 + r1
            r2.decoderReleaseCount = r0
            int r0 = r2.inputBufferCount
            int r1 = r3.inputBufferCount
            int r0 = r0 + r1
            r2.inputBufferCount = r0
            int r0 = r2.skippedInputBufferCount
            int r1 = r3.skippedInputBufferCount
            int r0 = r0 + r1
            r2.skippedInputBufferCount = r0
            int r0 = r2.renderedOutputBufferCount
            int r1 = r3.renderedOutputBufferCount
            int r0 = r0 + r1
            r2.renderedOutputBufferCount = r0
            int r0 = r2.skippedOutputBufferCount
            int r1 = r3.skippedOutputBufferCount
            int r0 = r0 + r1
            r2.skippedOutputBufferCount = r0
            int r0 = r2.droppedBufferCount
            int r1 = r3.droppedBufferCount
            int r0 = r0 + r1
            r2.droppedBufferCount = r0
            int r0 = r2.maxConsecutiveDroppedBufferCount
            int r1 = r3.maxConsecutiveDroppedBufferCount
            int r0 = java.lang.Math.max(r0, r1)
            r2.maxConsecutiveDroppedBufferCount = r0
            int r0 = r2.droppedToKeyframeCount
            int r3 = r3.droppedToKeyframeCount
            int r0 = r0 + r3
            r2.droppedToKeyframeCount = r0
            return
    }
}
