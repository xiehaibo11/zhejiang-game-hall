package com.mbridge.msdk.playercommon.exoplayer2.audio;

final class FloatResamplingAudioProcessor implements com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor {
    private static final int FLOAT_NAN_AS_INT = 0;
    private static final double PCM_32_BIT_INT_TO_PCM_32_BIT_FLOAT_FACTOR = 4.656612875245797E-10d;
    private java.nio.ByteBuffer buffer;
    private int channelCount;
    private boolean inputEnded;
    private java.nio.ByteBuffer outputBuffer;
    private int sampleRateHz;
    private int sourceEncoding;

    static {
            r0 = 2143289344(0x7fc00000, float:NaN)
            int r0 = java.lang.Float.floatToIntBits(r0)
            com.mbridge.msdk.playercommon.exoplayer2.audio.FloatResamplingAudioProcessor.FLOAT_NAN_AS_INT = r0
            return
    }

    public FloatResamplingAudioProcessor() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.sampleRateHz = r0
            r1.channelCount = r0
            r0 = 0
            r1.sourceEncoding = r0
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.FloatResamplingAudioProcessor.EMPTY_BUFFER
            r1.buffer = r0
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.FloatResamplingAudioProcessor.EMPTY_BUFFER
            r1.outputBuffer = r0
            return
    }

    private static void writePcm32BitFloat(int r4, java.nio.ByteBuffer r5) {
            double r0 = (double) r4
            r2 = 4467570830353629184(0x3e00000000200000, double:4.656612875245797E-10)
            double r0 = r0 * r2
            float r4 = (float) r0
            int r4 = java.lang.Float.floatToIntBits(r4)
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.FloatResamplingAudioProcessor.FLOAT_NAN_AS_INT
            if (r4 != r0) goto L15
            r4 = 0
            int r4 = java.lang.Float.floatToIntBits(r4)
        L15:
            r5.putInt(r4)
            return
    }

    @Override
    public final boolean configure(int r2, int r3, int r4) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor.UnhandledFormatException {
            r1 = this;
            boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.isEncodingHighResolutionIntegerPcm(r4)
            if (r0 == 0) goto L1c
            int r0 = r1.sampleRateHz
            if (r0 != r2) goto L14
            int r0 = r1.channelCount
            if (r0 != r3) goto L14
            int r0 = r1.sourceEncoding
            if (r0 != r4) goto L14
            r2 = 0
            return r2
        L14:
            r1.sampleRateHz = r2
            r1.channelCount = r3
            r1.sourceEncoding = r4
            r2 = 1
            return r2
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException
            r0.<init>(r2, r3, r4)
            throw r0
    }

    @Override
    public final void flush() {
            r1 = this;
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.FloatResamplingAudioProcessor.EMPTY_BUFFER
            r1.outputBuffer = r0
            r0 = 0
            r1.inputEnded = r0
            return
    }

    @Override
    public final java.nio.ByteBuffer getOutput() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.outputBuffer
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.FloatResamplingAudioProcessor.EMPTY_BUFFER
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
            r0 = 4
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
            int r0 = r1.sourceEncoding
            boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.isEncodingHighResolutionIntegerPcm(r0)
            return r0
    }

    @Override
    public final boolean isEnded() {
            r2 = this;
            boolean r0 = r2.inputEnded
            if (r0 == 0) goto Lc
            java.nio.ByteBuffer r0 = r2.outputBuffer
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.FloatResamplingAudioProcessor.EMPTY_BUFFER
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
    public final void queueInput(java.nio.ByteBuffer r6) {
            r5 = this;
            int r0 = r5.sourceEncoding
            r1 = 1073741824(0x40000000, float:2.0)
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            int r1 = r6.position()
            int r2 = r6.limit()
            int r3 = r2 - r1
            if (r0 == 0) goto L16
            goto L1a
        L16:
            int r3 = r3 / 3
            int r3 = r3 * 4
        L1a:
            java.nio.ByteBuffer r4 = r5.buffer
            int r4 = r4.capacity()
            if (r4 >= r3) goto L31
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocateDirect(r3)
            java.nio.ByteOrder r4 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r3 = r3.order(r4)
            r5.buffer = r3
            goto L36
        L31:
            java.nio.ByteBuffer r3 = r5.buffer
            r3.clear()
        L36:
            if (r0 == 0) goto L69
        L38:
            if (r1 >= r2) goto L91
            byte r0 = r6.get(r1)
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r3 = r1 + 1
            byte r3 = r6.get(r3)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 8
            r0 = r0 | r3
            int r3 = r1 + 2
            byte r3 = r6.get(r3)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 16
            r0 = r0 | r3
            int r3 = r1 + 3
            byte r3 = r6.get(r3)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 24
            r0 = r0 | r3
            java.nio.ByteBuffer r3 = r5.buffer
            writePcm32BitFloat(r0, r3)
            int r1 = r1 + 4
            goto L38
        L69:
            if (r1 >= r2) goto L91
            byte r0 = r6.get(r1)
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            int r3 = r1 + 1
            byte r3 = r6.get(r3)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 16
            r0 = r0 | r3
            int r3 = r1 + 2
            byte r3 = r6.get(r3)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 24
            r0 = r0 | r3
            java.nio.ByteBuffer r3 = r5.buffer
            writePcm32BitFloat(r0, r3)
            int r1 = r1 + 3
            goto L69
        L91:
            int r0 = r6.limit()
            r6.position(r0)
            java.nio.ByteBuffer r6 = r5.buffer
            r6.flip()
            java.nio.ByteBuffer r6 = r5.buffer
            r5.outputBuffer = r6
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
            r1.sourceEncoding = r0
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.FloatResamplingAudioProcessor.EMPTY_BUFFER
            r1.buffer = r0
            return
    }
}
