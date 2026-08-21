package com.mbridge.msdk.playercommon.exoplayer2.audio;

final class ChannelMappingAudioProcessor implements com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor {
    private boolean active;
    private java.nio.ByteBuffer buffer;
    private int channelCount;
    private boolean inputEnded;
    private java.nio.ByteBuffer outputBuffer;
    private int[] outputChannels;
    private int[] pendingOutputChannels;
    private int sampleRateHz;

    public ChannelMappingAudioProcessor() {
            r1 = this;
            r1.<init>()
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.ChannelMappingAudioProcessor.EMPTY_BUFFER
            r1.buffer = r0
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.ChannelMappingAudioProcessor.EMPTY_BUFFER
            r1.outputBuffer = r0
            r0 = -1
            r1.channelCount = r0
            r1.sampleRateHz = r0
            return
    }

    @Override
    public final boolean configure(int r6, int r7, int r8) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor.UnhandledFormatException {
            r5 = this;
            int[] r0 = r5.pendingOutputChannels
            int[] r1 = r5.outputChannels
            boolean r0 = java.util.Arrays.equals(r0, r1)
            r1 = 1
            r0 = r0 ^ r1
            int[] r2 = r5.pendingOutputChannels
            r5.outputChannels = r2
            r3 = 0
            if (r2 != 0) goto L14
            r5.active = r3
            return r0
        L14:
            r2 = 2
            if (r8 != r2) goto L4e
            if (r0 != 0) goto L22
            int r0 = r5.sampleRateHz
            if (r0 != r6) goto L22
            int r0 = r5.channelCount
            if (r0 != r7) goto L22
            return r3
        L22:
            r5.sampleRateHz = r6
            r5.channelCount = r7
            int[] r0 = r5.outputChannels
            int r0 = r0.length
            if (r7 == r0) goto L2d
            r0 = r1
            goto L2e
        L2d:
            r0 = r3
        L2e:
            r5.active = r0
            r0 = r3
        L31:
            int[] r2 = r5.outputChannels
            int r4 = r2.length
            if (r0 >= r4) goto L4d
            r2 = r2[r0]
            if (r2 >= r7) goto L47
            boolean r4 = r5.active
            if (r2 == r0) goto L40
            r2 = r1
            goto L41
        L40:
            r2 = r3
        L41:
            r2 = r2 | r4
            r5.active = r2
            int r0 = r0 + 1
            goto L31
        L47:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException
            r0.<init>(r6, r7, r8)
            throw r0
        L4d:
            return r1
        L4e:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException
            r0.<init>(r6, r7, r8)
            throw r0
    }

    @Override
    public final void flush() {
            r1 = this;
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.ChannelMappingAudioProcessor.EMPTY_BUFFER
            r1.outputBuffer = r0
            r0 = 0
            r1.inputEnded = r0
            return
    }

    @Override
    public final java.nio.ByteBuffer getOutput() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.outputBuffer
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.ChannelMappingAudioProcessor.EMPTY_BUFFER
            r2.outputBuffer = r1
            return r0
    }

    @Override
    public final int getOutputChannelCount() {
            r1 = this;
            int[] r0 = r1.outputChannels
            if (r0 != 0) goto L7
            int r0 = r1.channelCount
            goto L8
        L7:
            int r0 = r0.length
        L8:
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
            boolean r0 = r1.active
            return r0
    }

    @Override
    public final boolean isEnded() {
            r2 = this;
            boolean r0 = r2.inputEnded
            if (r0 == 0) goto Lc
            java.nio.ByteBuffer r0 = r2.outputBuffer
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.ChannelMappingAudioProcessor.EMPTY_BUFFER
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
    public final void queueInput(java.nio.ByteBuffer r9) {
            r8 = this;
            int[] r0 = r8.outputChannels
            r1 = 0
            if (r0 == 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = r1
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            int r0 = r9.position()
            int r2 = r9.limit()
            int r3 = r2 - r0
            int r4 = r8.channelCount
            int r4 = r4 * 2
            int r3 = r3 / r4
            int[] r4 = r8.outputChannels
            int r4 = r4.length
            int r3 = r3 * r4
            int r3 = r3 * 2
            java.nio.ByteBuffer r4 = r8.buffer
            int r4 = r4.capacity()
            if (r4 >= r3) goto L37
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocateDirect(r3)
            java.nio.ByteOrder r4 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r3 = r3.order(r4)
            r8.buffer = r3
            goto L3c
        L37:
            java.nio.ByteBuffer r3 = r8.buffer
            r3.clear()
        L3c:
            if (r0 >= r2) goto L5b
            int[] r3 = r8.outputChannels
            int r4 = r3.length
            r5 = r1
        L42:
            if (r5 >= r4) goto L55
            r6 = r3[r5]
            java.nio.ByteBuffer r7 = r8.buffer
            int r6 = r6 * 2
            int r6 = r6 + r0
            short r6 = r9.getShort(r6)
            r7.putShort(r6)
            int r5 = r5 + 1
            goto L42
        L55:
            int r3 = r8.channelCount
            int r3 = r3 * 2
            int r0 = r0 + r3
            goto L3c
        L5b:
            r9.position(r2)
            java.nio.ByteBuffer r9 = r8.buffer
            r9.flip()
            java.nio.ByteBuffer r9 = r8.buffer
            r8.outputBuffer = r9
            return
    }

    @Override
    public final void reset() {
            r1 = this;
            r1.flush()
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.ChannelMappingAudioProcessor.EMPTY_BUFFER
            r1.buffer = r0
            r0 = -1
            r1.channelCount = r0
            r1.sampleRateHz = r0
            r0 = 0
            r1.outputChannels = r0
            r1.pendingOutputChannels = r0
            r0 = 0
            r1.active = r0
            return
    }

    public final void setChannelMap(int[] r1) {
            r0 = this;
            r0.pendingOutputChannels = r1
            return
    }
}
