package com.mbridge.msdk.playercommon.exoplayer2.audio;

public final class SilenceSkippingAudioProcessor implements com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor {
    private static final long MINIMUM_SILENCE_DURATION_US = 150000;
    private static final long PADDING_SILENCE_US = 20000;
    private static final short SILENCE_THRESHOLD_LEVEL = 1024;
    private static final byte SILENCE_THRESHOLD_LEVEL_MSB = 4;
    private static final int STATE_MAYBE_SILENT = 1;
    private static final int STATE_NOISY = 0;
    private static final int STATE_SILENT = 2;
    private java.nio.ByteBuffer buffer;
    private int bytesPerFrame;
    private int channelCount;
    private boolean enabled;
    private boolean hasOutputNoise;
    private boolean inputEnded;
    private byte[] maybeSilenceBuffer;
    private int maybeSilenceBufferSize;
    private java.nio.ByteBuffer outputBuffer;
    private byte[] paddingBuffer;
    private int paddingSize;
    private int sampleRateHz;
    private long skippedFrames;
    private int state;

    private @interface State {
    }

    public SilenceSkippingAudioProcessor() {
            r2 = this;
            r2.<init>()
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.SilenceSkippingAudioProcessor.EMPTY_BUFFER
            r2.buffer = r0
            java.nio.ByteBuffer r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.SilenceSkippingAudioProcessor.EMPTY_BUFFER
            r2.outputBuffer = r0
            r0 = -1
            r2.channelCount = r0
            r2.sampleRateHz = r0
            r0 = 0
            byte[] r1 = new byte[r0]
            r2.maybeSilenceBuffer = r1
            byte[] r0 = new byte[r0]
            r2.paddingBuffer = r0
            return
    }

    private int durationUsToFrames(long r3) {
            r2 = this;
            int r0 = r2.sampleRateHz
            long r0 = (long) r0
            long r3 = r3 * r0
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r3 = r3 / r0
            int r3 = (int) r3
            return r3
    }

    private int findNoiseLimit(java.nio.ByteBuffer r4) {
            r3 = this;
            int r0 = r4.limit()
            int r0 = r0 + (-1)
        L6:
            int r1 = r4.position()
            if (r0 < r1) goto L20
            byte r1 = r4.get(r0)
            int r1 = java.lang.Math.abs(r1)
            r2 = 4
            if (r1 <= r2) goto L1d
            int r4 = r3.bytesPerFrame
            int r0 = r0 / r4
            int r0 = r0 * r4
            int r0 = r0 + r4
            return r0
        L1d:
            int r0 = r0 + (-2)
            goto L6
        L20:
            int r4 = r4.position()
            return r4
    }

    private int findNoisePosition(java.nio.ByteBuffer r4) {
            r3 = this;
            int r0 = r4.position()
            int r0 = r0 + 1
        L6:
            int r1 = r4.limit()
            if (r0 >= r1) goto L1f
            byte r1 = r4.get(r0)
            int r1 = java.lang.Math.abs(r1)
            r2 = 4
            if (r1 <= r2) goto L1c
            int r4 = r3.bytesPerFrame
            int r0 = r0 / r4
            int r4 = r4 * r0
            return r4
        L1c:
            int r0 = r0 + 2
            goto L6
        L1f:
            int r4 = r4.limit()
            return r4
    }

    private void output(java.nio.ByteBuffer r2) {
            r1 = this;
            int r0 = r2.remaining()
            r1.prepareForOutput(r0)
            java.nio.ByteBuffer r0 = r1.buffer
            r0.put(r2)
            java.nio.ByteBuffer r2 = r1.buffer
            r2.flip()
            java.nio.ByteBuffer r2 = r1.buffer
            r1.outputBuffer = r2
            return
    }

    private void output(byte[] r3, int r4) {
            r2 = this;
            r2.prepareForOutput(r4)
            java.nio.ByteBuffer r0 = r2.buffer
            r1 = 0
            r0.put(r3, r1, r4)
            java.nio.ByteBuffer r3 = r2.buffer
            r3.flip()
            java.nio.ByteBuffer r3 = r2.buffer
            r2.outputBuffer = r3
            return
    }

    private void prepareForOutput(int r3) {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.buffer
            int r0 = r0.capacity()
            if (r0 >= r3) goto L17
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocateDirect(r3)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r0 = r0.order(r1)
            r2.buffer = r0
            goto L1c
        L17:
            java.nio.ByteBuffer r0 = r2.buffer
            r0.clear()
        L1c:
            if (r3 <= 0) goto L21
            r3 = 1
            r2.hasOutputNoise = r3
        L21:
            return
    }

    private void processMaybeSilence(java.nio.ByteBuffer r10) {
            r9 = this;
            int r0 = r10.limit()
            int r1 = r9.findNoisePosition(r10)
            int r2 = r10.position()
            int r2 = r1 - r2
            byte[] r3 = r9.maybeSilenceBuffer
            int r4 = r3.length
            int r5 = r9.maybeSilenceBufferSize
            int r4 = r4 - r5
            r6 = 0
            if (r1 >= r0) goto L21
            if (r2 >= r4) goto L21
            r9.output(r3, r5)
            r9.maybeSilenceBufferSize = r6
            r9.state = r6
            goto L72
        L21:
            int r1 = java.lang.Math.min(r2, r4)
            int r2 = r10.position()
            int r2 = r2 + r1
            r10.limit(r2)
            byte[] r2 = r9.maybeSilenceBuffer
            int r3 = r9.maybeSilenceBufferSize
            r10.get(r2, r3, r1)
            int r2 = r9.maybeSilenceBufferSize
            int r2 = r2 + r1
            r9.maybeSilenceBufferSize = r2
            byte[] r1 = r9.maybeSilenceBuffer
            int r3 = r1.length
            if (r2 != r3) goto L6f
            boolean r3 = r9.hasOutputNoise
            r4 = 2
            if (r3 == 0) goto L58
            int r2 = r9.paddingSize
            r9.output(r1, r2)
            long r1 = r9.skippedFrames
            int r3 = r9.maybeSilenceBufferSize
            int r5 = r9.paddingSize
            int r5 = r5 * r4
            int r3 = r3 - r5
            int r5 = r9.bytesPerFrame
            int r3 = r3 / r5
            long r7 = (long) r3
            long r1 = r1 + r7
            r9.skippedFrames = r1
            goto L64
        L58:
            long r7 = r9.skippedFrames
            int r1 = r9.paddingSize
            int r2 = r2 - r1
            int r1 = r9.bytesPerFrame
            int r2 = r2 / r1
            long r1 = (long) r2
            long r7 = r7 + r1
            r9.skippedFrames = r7
        L64:
            byte[] r1 = r9.maybeSilenceBuffer
            int r2 = r9.maybeSilenceBufferSize
            r9.updatePaddingBuffer(r10, r1, r2)
            r9.maybeSilenceBufferSize = r6
            r9.state = r4
        L6f:
            r10.limit(r0)
        L72:
            return
    }

    private void processNoisy(java.nio.ByteBuffer r4) {
            r3 = this;
            int r0 = r4.limit()
            int r1 = r4.position()
            byte[] r2 = r3.maybeSilenceBuffer
            int r2 = r2.length
            int r1 = r1 + r2
            int r1 = java.lang.Math.min(r0, r1)
            r4.limit(r1)
            int r1 = r3.findNoiseLimit(r4)
            int r2 = r4.position()
            if (r1 != r2) goto L21
            r1 = 1
            r3.state = r1
            goto L27
        L21:
            r4.limit(r1)
            r3.output(r4)
        L27:
            r4.limit(r0)
            return
    }

    private void processSilence(java.nio.ByteBuffer r7) {
            r6 = this;
            int r0 = r7.limit()
            int r1 = r6.findNoisePosition(r7)
            r7.limit(r1)
            long r2 = r6.skippedFrames
            int r4 = r7.remaining()
            int r5 = r6.bytesPerFrame
            int r4 = r4 / r5
            long r4 = (long) r4
            long r2 = r2 + r4
            r6.skippedFrames = r2
            byte[] r2 = r6.paddingBuffer
            int r3 = r6.paddingSize
            r6.updatePaddingBuffer(r7, r2, r3)
            if (r1 >= r0) goto L2e
            byte[] r1 = r6.paddingBuffer
            int r2 = r6.paddingSize
            r6.output(r1, r2)
            r1 = 0
            r6.state = r1
            r7.limit(r0)
        L2e:
            return
    }

    private void updatePaddingBuffer(java.nio.ByteBuffer r5, byte[] r6, int r7) {
            r4 = this;
            int r0 = r5.remaining()
            int r1 = r4.paddingSize
            int r0 = java.lang.Math.min(r0, r1)
            int r1 = r4.paddingSize
            int r1 = r1 - r0
            int r7 = r7 - r1
            byte[] r2 = r4.paddingBuffer
            r3 = 0
            java.lang.System.arraycopy(r6, r7, r2, r3, r1)
            int r6 = r5.limit()
            int r6 = r6 - r0
            r5.position(r6)
            byte[] r6 = r4.paddingBuffer
            r5.get(r6, r1, r0)
            return
    }

    @Override
    public final boolean configure(int r2, int r3, int r4) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor.UnhandledFormatException {
            r1 = this;
            r0 = 2
            if (r4 != r0) goto L16
            int r4 = r1.sampleRateHz
            if (r4 != r2) goto Ld
            int r4 = r1.channelCount
            if (r4 != r3) goto Ld
            r2 = 0
            return r2
        Ld:
            r1.sampleRateHz = r2
            r1.channelCount = r3
            int r3 = r3 * r0
            r1.bytesPerFrame = r3
            r2 = 1
            return r2
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor$UnhandledFormatException
            r0.<init>(r2, r3, r4)
            throw r0
    }

    @Override
    public final void flush() {
            r3 = this;
            boolean r0 = r3.isActive()
            if (r0 == 0) goto L2d
            r0 = 150000(0x249f0, double:7.411E-319)
            int r0 = r3.durationUsToFrames(r0)
            int r1 = r3.bytesPerFrame
            int r0 = r0 * r1
            byte[] r1 = r3.maybeSilenceBuffer
            int r1 = r1.length
            if (r1 == r0) goto L19
            byte[] r0 = new byte[r0]
            r3.maybeSilenceBuffer = r0
        L19:
            r0 = 20000(0x4e20, double:9.8813E-320)
            int r0 = r3.durationUsToFrames(r0)
            int r1 = r3.bytesPerFrame
            int r0 = r0 * r1
            r3.paddingSize = r0
            byte[] r1 = r3.paddingBuffer
            int r1 = r1.length
            if (r1 == r0) goto L2d
            byte[] r0 = new byte[r0]
            r3.paddingBuffer = r0
        L2d:
            r0 = 0
            r3.state = r0
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.SilenceSkippingAudioProcessor.EMPTY_BUFFER
            r3.outputBuffer = r1
            r3.inputEnded = r0
            r1 = 0
            r3.skippedFrames = r1
            r3.maybeSilenceBufferSize = r0
            r3.hasOutputNoise = r0
            return
    }

    @Override
    public final java.nio.ByteBuffer getOutput() {
            r2 = this;
            java.nio.ByteBuffer r0 = r2.outputBuffer
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.SilenceSkippingAudioProcessor.EMPTY_BUFFER
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

    public final long getSkippedFrames() {
            r2 = this;
            long r0 = r2.skippedFrames
            return r0
    }

    @Override
    public final boolean isActive() {
            r2 = this;
            int r0 = r2.sampleRateHz
            r1 = -1
            if (r0 == r1) goto Lb
            boolean r0 = r2.enabled
            if (r0 == 0) goto Lb
            r0 = 1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    @Override
    public final boolean isEnded() {
            r2 = this;
            boolean r0 = r2.inputEnded
            if (r0 == 0) goto Lc
            java.nio.ByteBuffer r0 = r2.outputBuffer
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.SilenceSkippingAudioProcessor.EMPTY_BUFFER
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
            r4 = this;
            r0 = 1
            r4.inputEnded = r0
            int r0 = r4.maybeSilenceBufferSize
            if (r0 <= 0) goto Lc
            byte[] r1 = r4.maybeSilenceBuffer
            r4.output(r1, r0)
        Lc:
            boolean r0 = r4.hasOutputNoise
            if (r0 != 0) goto L1b
            long r0 = r4.skippedFrames
            int r2 = r4.paddingSize
            int r3 = r4.bytesPerFrame
            int r2 = r2 / r3
            long r2 = (long) r2
            long r0 = r0 + r2
            r4.skippedFrames = r0
        L1b:
            return
    }

    @Override
    public final void queueInput(java.nio.ByteBuffer r3) {
            r2 = this;
        L0:
            boolean r0 = r3.hasRemaining()
            if (r0 == 0) goto L2a
            java.nio.ByteBuffer r0 = r2.outputBuffer
            boolean r0 = r0.hasRemaining()
            if (r0 != 0) goto L2a
            int r0 = r2.state
            if (r0 == 0) goto L26
            r1 = 1
            if (r0 == r1) goto L22
            r1 = 2
            if (r0 != r1) goto L1c
            r2.processSilence(r3)
            goto L0
        L1c:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            r3.<init>()
            throw r3
        L22:
            r2.processMaybeSilence(r3)
            goto L0
        L26:
            r2.processNoisy(r3)
            goto L0
        L2a:
            return
    }

    @Override
    public final void reset() {
            r2 = this;
            r0 = 0
            r2.enabled = r0
            r2.flush()
            java.nio.ByteBuffer r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.SilenceSkippingAudioProcessor.EMPTY_BUFFER
            r2.buffer = r1
            r1 = -1
            r2.channelCount = r1
            r2.sampleRateHz = r1
            r2.paddingSize = r0
            byte[] r1 = new byte[r0]
            r2.maybeSilenceBuffer = r1
            byte[] r0 = new byte[r0]
            r2.paddingBuffer = r0
            return
    }

    public final void setEnabled(boolean r1) {
            r0 = this;
            r0.enabled = r1
            r0.flush()
            return
    }
}
