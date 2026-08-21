package com.mbridge.msdk.playercommon.exoplayer2.audio;

public final class SonicAudioProcessor implements com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor {
    private static final float CLOSE_THRESHOLD = 0.01f;
    public static final float MAXIMUM_PITCH = 8.0f;
    public static final float MAXIMUM_SPEED = 8.0f;
    public static final float MINIMUM_PITCH = 0.1f;
    public static final float MINIMUM_SPEED = 0.1f;
    private static final int MIN_BYTES_FOR_SPEEDUP_CALCULATION = 1024;
    public static final int SAMPLE_RATE_NO_CHANGE = -1;
    private java.nio.ByteBuffer buffer;
    private int channelCount;
    private long inputBytes;
    private boolean inputEnded;
    private java.nio.ByteBuffer outputBuffer;
    private long outputBytes;
    private int outputSampleRateHz;
    private int pendingOutputSampleRateHz;
    private float pitch;
    private int sampleRateHz;
    private java.nio.ShortBuffer shortBuffer;
    private com.mbridge.msdk.playercommon.exoplayer2.audio.Sonic sonic;
    private float speed;

    public SonicAudioProcessor() {
            r2 = this;
            r2.<init>()
            r0 = 1065353216(0x3f800000, float:1.0)
            r2.speed = r0
            r2.pitch = r0
            r0 = -1
            r2.channelCount = r0
            r2.sampleRateHz = r0
            r2.outputSampleRateHz = r0
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.SonicAudioProcessor.EMPTY_BUFFER
            r2.buffer = r1
            java.nio.ShortBuffer r1 = r1.asShortBuffer()
            r2.shortBuffer = r1
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.SonicAudioProcessor.EMPTY_BUFFER
            r2.outputBuffer = r1
            r2.pendingOutputSampleRateHz = r0
            return
    }

    @Override
    public final boolean configure(int r2, int r3, int r4) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor.UnhandledFormatException {
            r1 = this;
            r0 = 2
            if (r4 != r0) goto L22
            int r4 = r1.pendingOutputSampleRateHz
            r0 = -1
            if (r4 != r0) goto L9
            r4 = r2
        L9:
            int r0 = r1.sampleRateHz
            if (r0 != r2) goto L17
            int r0 = r1.channelCount
            if (r0 != r3) goto L17
            int r0 = r1.outputSampleRateHz
            if (r0 != r4) goto L17
            r2 = 0
            return r2
        L17:
            r1.sampleRateHz = r2
            r1.channelCount = r3
            r1.outputSampleRateHz = r4
            r2 = 0
            r1.sonic = r2
            r2 = 1
            return r2
        L22:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException
            r0.<init>(r2, r3, r4)
            throw r0
    }

    @Override
    public final void flush() {
            r7 = this;
            boolean r0 = r7.isActive()
            if (r0 == 0) goto L20
            com.mbridge.msdk.playercommon.exoplayer2.audio.Sonic r0 = r7.sonic
            if (r0 != 0) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.audio.Sonic r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.Sonic
            int r2 = r7.sampleRateHz
            int r3 = r7.channelCount
            float r4 = r7.speed
            float r5 = r7.pitch
            int r6 = r7.outputSampleRateHz
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            r7.sonic = r0
            goto L20
        L1d:
            r0.flush()
        L20:
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.SonicAudioProcessor.EMPTY_BUFFER
            r7.outputBuffer = r0
            r0 = 0
            r7.inputBytes = r0
            r7.outputBytes = r0
            r0 = 0
            r7.inputEnded = r0
            return
    }

    @Override
    public final java.nio.ByteBuffer getOutput() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.outputBuffer
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.SonicAudioProcessor.EMPTY_BUFFER
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
            int r0 = r1.outputSampleRateHz
            return r0
    }

    @Override
    public final boolean isActive() {
            r3 = this;
            int r0 = r3.sampleRateHz
            r1 = -1
            if (r0 == r1) goto L28
            float r0 = r3.speed
            r1 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 - r1
            float r0 = java.lang.Math.abs(r0)
            r2 = 1008981770(0x3c23d70a, float:0.01)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L26
            float r0 = r3.pitch
            float r0 = r0 - r1
            float r0 = java.lang.Math.abs(r0)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L26
            int r0 = r3.outputSampleRateHz
            int r1 = r3.sampleRateHz
            if (r0 == r1) goto L28
        L26:
            r0 = 1
            goto L29
        L28:
            r0 = 0
        L29:
            return r0
    }

    @Override
    public final boolean isEnded() {
            r1 = this;
            boolean r0 = r1.inputEnded
            if (r0 == 0) goto L10
            com.mbridge.msdk.playercommon.exoplayer2.audio.Sonic r0 = r1.sonic
            if (r0 == 0) goto Le
            int r0 = r0.getFramesAvailable()
            if (r0 != 0) goto L10
        Le:
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    @Override
    public final void queueEndOfStream() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.Sonic r0 = r2.sonic
            r1 = 1
            if (r0 == 0) goto L7
            r0 = r1
            goto L8
        L7:
            r0 = 0
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            com.mbridge.msdk.playercommon.exoplayer2.audio.Sonic r0 = r2.sonic
            r0.queueEndOfStream()
            r2.inputEnded = r1
            return
    }

    @Override
    public final void queueInput(java.nio.ByteBuffer r7) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.Sonic r0 = r6.sonic
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            boolean r0 = r7.hasRemaining()
            if (r0 == 0) goto L2b
            java.nio.ShortBuffer r0 = r7.asShortBuffer()
            int r1 = r7.remaining()
            long r2 = r6.inputBytes
            long r4 = (long) r1
            long r2 = r2 + r4
            r6.inputBytes = r2
            com.mbridge.msdk.playercommon.exoplayer2.audio.Sonic r2 = r6.sonic
            r2.queueInput(r0)
            int r0 = r7.position()
            int r0 = r0 + r1
            r7.position(r0)
        L2b:
            com.mbridge.msdk.playercommon.exoplayer2.audio.Sonic r7 = r6.sonic
            int r7 = r7.getFramesAvailable()
            int r0 = r6.channelCount
            int r7 = r7 * r0
            int r7 = r7 * 2
            if (r7 <= 0) goto L75
            java.nio.ByteBuffer r0 = r6.buffer
            int r0 = r0.capacity()
            if (r0 >= r7) goto L55
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocateDirect(r7)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r0 = r0.order(r1)
            r6.buffer = r0
            java.nio.ShortBuffer r0 = r0.asShortBuffer()
            r6.shortBuffer = r0
            goto L5f
        L55:
            java.nio.ByteBuffer r0 = r6.buffer
            r0.clear()
            java.nio.ShortBuffer r0 = r6.shortBuffer
            r0.clear()
        L5f:
            com.mbridge.msdk.playercommon.exoplayer2.audio.Sonic r0 = r6.sonic
            java.nio.ShortBuffer r1 = r6.shortBuffer
            r0.getOutput(r1)
            long r0 = r6.outputBytes
            long r2 = (long) r7
            long r0 = r0 + r2
            r6.outputBytes = r0
            java.nio.ByteBuffer r0 = r6.buffer
            r0.limit(r7)
            java.nio.ByteBuffer r7 = r6.buffer
            r6.outputBuffer = r7
        L75:
            return
    }

    @Override
    public final void reset() {
            r2 = this;
            r0 = 1065353216(0x3f800000, float:1.0)
            r2.speed = r0
            r2.pitch = r0
            r0 = -1
            r2.channelCount = r0
            r2.sampleRateHz = r0
            r2.outputSampleRateHz = r0
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.SonicAudioProcessor.EMPTY_BUFFER
            r2.buffer = r1
            java.nio.ShortBuffer r1 = r1.asShortBuffer()
            r2.shortBuffer = r1
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.SonicAudioProcessor.EMPTY_BUFFER
            r2.outputBuffer = r1
            r2.pendingOutputSampleRateHz = r0
            r0 = 0
            r2.sonic = r0
            r0 = 0
            r2.inputBytes = r0
            r2.outputBytes = r0
            r0 = 0
            r2.inputEnded = r0
            return
    }

    public final long scaleDurationForSpeedup(long r16) {
            r15 = this;
            r0 = r15
            long r5 = r0.outputBytes
            r1 = 1024(0x400, double:5.06E-321)
            int r1 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r1 < 0) goto L27
            int r1 = r0.outputSampleRateHz
            int r2 = r0.sampleRateHz
            if (r1 != r2) goto L18
            long r3 = r0.inputBytes
            r1 = r16
            long r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r1, r3, r5)
            goto L26
        L18:
            long r3 = r0.inputBytes
            long r7 = (long) r1
            long r11 = r3 * r7
            long r1 = (long) r2
            long r13 = r5 * r1
            r9 = r16
            long r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r9, r11, r13)
        L26:
            return r1
        L27:
            float r1 = r0.speed
            double r1 = (double) r1
            r3 = r16
            double r3 = (double) r3
            double r1 = r1 * r3
            long r1 = (long) r1
            return r1
    }

    public final void setOutputSampleRateHz(int r1) {
            r0 = this;
            r0.pendingOutputSampleRateHz = r1
            return
    }

    public final float setPitch(float r3) {
            r2 = this;
            r0 = 1036831949(0x3dcccccd, float:0.1)
            r1 = 1090519040(0x41000000, float:8.0)
            float r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r3, r0, r1)
            float r0 = r2.pitch
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 == 0) goto L14
            r2.pitch = r3
            r0 = 0
            r2.sonic = r0
        L14:
            r2.flush()
            return r3
    }

    public final float setSpeed(float r3) {
            r2 = this;
            r0 = 1036831949(0x3dcccccd, float:0.1)
            r1 = 1090519040(0x41000000, float:8.0)
            float r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r3, r0, r1)
            float r0 = r2.speed
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 == 0) goto L14
            r2.speed = r3
            r0 = 0
            r2.sonic = r0
        L14:
            r2.flush()
            return r3
    }
}
