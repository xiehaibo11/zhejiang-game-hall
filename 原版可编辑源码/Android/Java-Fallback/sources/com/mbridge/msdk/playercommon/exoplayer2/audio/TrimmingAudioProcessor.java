package com.mbridge.msdk.playercommon.exoplayer2.audio;

final class TrimmingAudioProcessor implements com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor {
    private java.nio.ByteBuffer buffer;
    private int channelCount;
    private byte[] endBuffer;
    private int endBufferSize;
    private boolean inputEnded;
    private boolean isActive;
    private java.nio.ByteBuffer outputBuffer;
    private int pendingTrimStartBytes;
    private int sampleRateHz;
    private int trimEndFrames;
    private int trimStartFrames;

    public TrimmingAudioProcessor() {
            r1 = this;
            r1.<init>()
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.TrimmingAudioProcessor.EMPTY_BUFFER
            r1.buffer = r0
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.TrimmingAudioProcessor.EMPTY_BUFFER
            r1.outputBuffer = r0
            r0 = -1
            r1.channelCount = r0
            r1.sampleRateHz = r0
            r0 = 0
            byte[] r0 = new byte[r0]
            r1.endBuffer = r0
            return
    }

    @Override
    public final boolean configure(int r3, int r4, int r5) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor.UnhandledFormatException {
            r2 = this;
            r0 = 2
            if (r5 != r0) goto L2a
            r2.channelCount = r4
            r2.sampleRateHz = r3
            int r3 = r2.trimEndFrames
            int r5 = r3 * r4
            int r5 = r5 * r0
            byte[] r5 = new byte[r5]
            r2.endBuffer = r5
            r5 = 0
            r2.endBufferSize = r5
            int r1 = r2.trimStartFrames
            int r4 = r4 * r1
            int r4 = r4 * r0
            r2.pendingTrimStartBytes = r4
            boolean r4 = r2.isActive
            r0 = 1
            if (r1 != 0) goto L23
            if (r3 == 0) goto L21
            goto L23
        L21:
            r3 = r5
            goto L24
        L23:
            r3 = r0
        L24:
            r2.isActive = r3
            if (r4 == r3) goto L29
            r5 = r0
        L29:
            return r5
        L2a:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException
            r0.<init>(r3, r4, r5)
            throw r0
    }

    @Override
    public final void flush() {
            r1 = this;
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.TrimmingAudioProcessor.EMPTY_BUFFER
            r1.outputBuffer = r0
            r0 = 0
            r1.inputEnded = r0
            r1.pendingTrimStartBytes = r0
            r1.endBufferSize = r0
            return
    }

    @Override
    public final java.nio.ByteBuffer getOutput() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.outputBuffer
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.TrimmingAudioProcessor.EMPTY_BUFFER
            r2.outputBuffer = r1
            return r0
    }

    @Override
    public final int getOutputChannelCount() {
            r1 = this;
            int r0 = r1.channelCount
            return r0
    }

    @Override
    public final int getOutputEncoding() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    public final int getOutputSampleRateHz() {
            r1 = this;
            int r0 = r1.sampleRateHz
            return r0
    }

    @Override
    public final boolean isActive() {
            r1 = this;
            boolean r0 = r1.isActive
            return r0
    }

    @Override
    public final boolean isEnded() {
            r2 = this;
            boolean r0 = r2.inputEnded
            if (r0 == 0) goto Lc
            java.nio.ByteBuffer r0 = r2.outputBuffer
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.TrimmingAudioProcessor.EMPTY_BUFFER
            if (r0 != r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public final void queueEndOfStream() {
            r1 = this;
            r0 = 1
            r1.inputEnded = r0
            return
    }

    @Override
    public final void queueInput(java.nio.ByteBuffer r8) {
            r7 = this;
            int r0 = r8.position()
            int r1 = r8.limit()
            int r2 = r1 - r0
            int r3 = r7.pendingTrimStartBytes
            int r3 = java.lang.Math.min(r2, r3)
            int r4 = r7.pendingTrimStartBytes
            int r4 = r4 - r3
            r7.pendingTrimStartBytes = r4
            int r0 = r0 + r3
            r8.position(r0)
            int r0 = r7.pendingTrimStartBytes
            if (r0 <= 0) goto L1e
            return
        L1e:
            int r2 = r2 - r3
            int r0 = r7.endBufferSize
            int r0 = r0 + r2
            byte[] r3 = r7.endBuffer
            int r3 = r3.length
            int r0 = r0 - r3
            java.nio.ByteBuffer r3 = r7.buffer
            int r3 = r3.capacity()
            if (r3 >= r0) goto L3d
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocateDirect(r0)
            java.nio.ByteOrder r4 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r3 = r3.order(r4)
            r7.buffer = r3
            goto L42
        L3d:
            java.nio.ByteBuffer r3 = r7.buffer
            r3.clear()
        L42:
            int r3 = r7.endBufferSize
            r4 = 0
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r0, r4, r3)
            java.nio.ByteBuffer r5 = r7.buffer
            byte[] r6 = r7.endBuffer
            r5.put(r6, r4, r3)
            int r0 = r0 - r3
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r0, r4, r2)
            int r5 = r8.position()
            int r5 = r5 + r0
            r8.limit(r5)
            java.nio.ByteBuffer r5 = r7.buffer
            r5.put(r8)
            r8.limit(r1)
            int r2 = r2 - r0
            int r0 = r7.endBufferSize
            int r0 = r0 - r3
            r7.endBufferSize = r0
            byte[] r1 = r7.endBuffer
            java.lang.System.arraycopy(r1, r3, r1, r4, r0)
            byte[] r0 = r7.endBuffer
            int r1 = r7.endBufferSize
            r8.get(r0, r1, r2)
            int r8 = r7.endBufferSize
            int r8 = r8 + r2
            r7.endBufferSize = r8
            java.nio.ByteBuffer r8 = r7.buffer
            r8.flip()
            java.nio.ByteBuffer r8 = r7.buffer
            r7.outputBuffer = r8
            return
    }

    @Override
    public final void reset() {
            r1 = this;
            r1.flush()
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.TrimmingAudioProcessor.EMPTY_BUFFER
            r1.buffer = r0
            r0 = -1
            r1.channelCount = r0
            r1.sampleRateHz = r0
            r0 = 0
            byte[] r0 = new byte[r0]
            r1.endBuffer = r0
            return
    }

    public final void setTrimFrameCount(int r1, int r2) {
            r0 = this;
            r0.trimStartFrames = r1
            r0.trimEndFrames = r2
            return
    }
}
