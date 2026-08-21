package com.mbridge.msdk.playercommon.exoplayer2.audio;

final class ResamplingAudioProcessor implements com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor {
    private java.nio.ByteBuffer buffer;
    private int channelCount;
    private int encoding;
    private boolean inputEnded;
    private java.nio.ByteBuffer outputBuffer;
    private int sampleRateHz;

    public ResamplingAudioProcessor() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.sampleRateHz = r0
            r1.channelCount = r0
            r0 = 0
            r1.encoding = r0
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.ResamplingAudioProcessor.EMPTY_BUFFER
            r1.buffer = r0
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.ResamplingAudioProcessor.EMPTY_BUFFER
            r1.outputBuffer = r0
            return
    }

    @Override
    public final boolean configure(int r2, int r3, int r4) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor.UnhandledFormatException {
            r1 = this;
            r0 = 3
            if (r4 == r0) goto L15
            r0 = 2
            if (r4 == r0) goto L15
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r4 == r0) goto L15
            r0 = 1073741824(0x40000000, float:2.0)
            if (r4 != r0) goto Lf
            goto L15
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException
            r0.<init>(r2, r3, r4)
            throw r0
        L15:
            int r0 = r1.sampleRateHz
            if (r0 != r2) goto L23
            int r0 = r1.channelCount
            if (r0 != r3) goto L23
            int r0 = r1.encoding
            if (r0 != r4) goto L23
            r2 = 0
            return r2
        L23:
            r1.sampleRateHz = r2
            r1.channelCount = r3
            r1.encoding = r4
            r2 = 1
            return r2
    }

    @Override
    public final void flush() {
            r1 = this;
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.ResamplingAudioProcessor.EMPTY_BUFFER
            r1.outputBuffer = r0
            r0 = 0
            r1.inputEnded = r0
            return
    }

    @Override
    public final java.nio.ByteBuffer getOutput() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.outputBuffer
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.ResamplingAudioProcessor.EMPTY_BUFFER
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
            r2 = this;
            int r0 = r2.encoding
            if (r0 == 0) goto L9
            r1 = 2
            if (r0 == r1) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public final boolean isEnded() {
            r2 = this;
            boolean r0 = r2.inputEnded
            if (r0 == 0) goto Lc
            java.nio.ByteBuffer r0 = r2.outputBuffer
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.ResamplingAudioProcessor.EMPTY_BUFFER
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
            int r3 = r7.encoding
            r4 = 1073741824(0x40000000, float:2.0)
            r5 = -2147483648(0xffffffff80000000, float:-0.0)
            r6 = 3
            if (r3 == r5) goto L20
            if (r3 == r6) goto L21
            if (r3 != r4) goto L1a
            int r2 = r2 / 2
            goto L23
        L1a:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            r8.<init>()
            throw r8
        L20:
            int r2 = r2 / r6
        L21:
            int r2 = r2 * 2
        L23:
            java.nio.ByteBuffer r3 = r7.buffer
            int r3 = r3.capacity()
            if (r3 >= r2) goto L3a
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.allocateDirect(r2)
            java.nio.ByteOrder r3 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r2 = r2.order(r3)
            r7.buffer = r2
            goto L3f
        L3a:
            java.nio.ByteBuffer r2 = r7.buffer
            r2.clear()
        L3f:
            int r2 = r7.encoding
            if (r2 == r5) goto L81
            if (r2 == r6) goto L68
            if (r2 != r4) goto L62
        L47:
            if (r0 >= r1) goto L9c
            java.nio.ByteBuffer r2 = r7.buffer
            int r3 = r0 + 2
            byte r3 = r8.get(r3)
            r2.put(r3)
            java.nio.ByteBuffer r2 = r7.buffer
            int r3 = r0 + 3
            byte r3 = r8.get(r3)
            r2.put(r3)
            int r0 = r0 + 4
            goto L47
        L62:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            r8.<init>()
            throw r8
        L68:
            if (r0 >= r1) goto L9c
            java.nio.ByteBuffer r2 = r7.buffer
            r3 = 0
            r2.put(r3)
            java.nio.ByteBuffer r2 = r7.buffer
            byte r3 = r8.get(r0)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 + (-128)
            byte r3 = (byte) r3
            r2.put(r3)
            int r0 = r0 + 1
            goto L68
        L81:
            if (r0 >= r1) goto L9c
            java.nio.ByteBuffer r2 = r7.buffer
            int r3 = r0 + 1
            byte r3 = r8.get(r3)
            r2.put(r3)
            java.nio.ByteBuffer r2 = r7.buffer
            int r3 = r0 + 2
            byte r3 = r8.get(r3)
            r2.put(r3)
            int r0 = r0 + 3
            goto L81
        L9c:
            int r0 = r8.limit()
            r8.position(r0)
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
            r0 = -1
            r1.sampleRateHz = r0
            r1.channelCount = r0
            r0 = 0
            r1.encoding = r0
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.ResamplingAudioProcessor.EMPTY_BUFFER
            r1.buffer = r0
            return
    }
}
