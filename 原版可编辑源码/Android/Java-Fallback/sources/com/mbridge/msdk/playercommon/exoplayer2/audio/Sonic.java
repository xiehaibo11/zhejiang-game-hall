package com.mbridge.msdk.playercommon.exoplayer2.audio;

final class Sonic {
    private static final int AMDF_FREQUENCY = 4000;
    private static final int MAXIMUM_PITCH = 400;
    private static final int MINIMUM_PITCH = 65;
    private final int channelCount;
    private final short[] downSampleBuffer;
    private short[] inputBuffer;
    private int inputFrameCount;
    private final int inputSampleRateHz;
    private int maxDiff;
    private final int maxPeriod;
    private final int maxRequiredFrameCount;
    private int minDiff;
    private final int minPeriod;
    private int newRatePosition;
    private int oldRatePosition;
    private short[] outputBuffer;
    private int outputFrameCount;
    private final float pitch;
    private short[] pitchBuffer;
    private int pitchFrameCount;
    private int prevMinDiff;
    private int prevPeriod;
    private final float rate;
    private int remainingInputToCopyFrameCount;
    private final float speed;

    public Sonic(int r1, int r2, float r3, float r4, int r5) {
            r0 = this;
            r0.<init>()
            r0.inputSampleRateHz = r1
            r0.channelCount = r2
            r0.speed = r3
            r0.pitch = r4
            float r3 = (float) r1
            float r4 = (float) r5
            float r3 = r3 / r4
            r0.rate = r3
            int r3 = r1 / 400
            r0.minPeriod = r3
            int r1 = r1 / 65
            r0.maxPeriod = r1
            int r1 = r1 * 2
            r0.maxRequiredFrameCount = r1
            short[] r3 = new short[r1]
            r0.downSampleBuffer = r3
            int r3 = r1 * r2
            short[] r3 = new short[r3]
            r0.inputBuffer = r3
            int r3 = r1 * r2
            short[] r3 = new short[r3]
            r0.outputBuffer = r3
            int r1 = r1 * r2
            short[] r1 = new short[r1]
            r0.pitchBuffer = r1
            return
    }

    private void adjustRate(float r9, int r10) {
            r8 = this;
            int r0 = r8.outputFrameCount
            if (r0 != r10) goto L5
            return
        L5:
            int r0 = r8.inputSampleRateHz
            float r1 = (float) r0
            float r1 = r1 / r9
            int r9 = (int) r1
        La:
            r1 = 16384(0x4000, float:2.2959E-41)
            if (r9 > r1) goto L6e
            if (r0 <= r1) goto L11
            goto L6e
        L11:
            r8.moveNewSamplesToPitchBuffer(r10)
            r10 = 0
            r1 = r10
        L16:
            int r2 = r8.pitchFrameCount
            int r3 = r2 + (-1)
            r4 = 1
            if (r1 >= r3) goto L69
        L1d:
            int r2 = r8.oldRatePosition
            int r3 = r2 + 1
            int r3 = r3 * r9
            int r5 = r8.newRatePosition
            int r6 = r5 * r0
            if (r3 <= r6) goto L55
            short[] r2 = r8.outputBuffer
            int r3 = r8.outputFrameCount
            short[] r2 = r8.ensureSpaceForAdditionalFrames(r2, r3, r4)
            r8.outputBuffer = r2
            r2 = r10
        L33:
            int r3 = r8.channelCount
            if (r2 >= r3) goto L4a
            short[] r5 = r8.outputBuffer
            int r6 = r8.outputFrameCount
            int r6 = r6 * r3
            int r6 = r6 + r2
            short[] r7 = r8.pitchBuffer
            int r3 = r3 * r1
            int r3 = r3 + r2
            short r3 = r8.interpolate(r7, r3, r0, r9)
            r5[r6] = r3
            int r2 = r2 + 1
            goto L33
        L4a:
            int r2 = r8.newRatePosition
            int r2 = r2 + r4
            r8.newRatePosition = r2
            int r2 = r8.outputFrameCount
            int r2 = r2 + r4
            r8.outputFrameCount = r2
            goto L1d
        L55:
            int r2 = r2 + 1
            r8.oldRatePosition = r2
            if (r2 != r0) goto L66
            r8.oldRatePosition = r10
            if (r5 != r9) goto L60
            goto L61
        L60:
            r4 = r10
        L61:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r4)
            r8.newRatePosition = r10
        L66:
            int r1 = r1 + 1
            goto L16
        L69:
            int r2 = r2 - r4
            r8.removePitchFrames(r2)
            return
        L6e:
            int r9 = r9 / 2
            int r0 = r0 / 2
            goto La
    }

    private void changeSpeed(float r8) {
            r7 = this;
            int r0 = r7.inputFrameCount
            int r1 = r7.maxRequiredFrameCount
            if (r0 >= r1) goto L7
            return
        L7:
            r1 = 0
        L8:
            int r2 = r7.remainingInputToCopyFrameCount
            if (r2 <= 0) goto L12
            int r2 = r7.copyInputToOutput(r1)
        L10:
            int r1 = r1 + r2
            goto L2e
        L12:
            short[] r2 = r7.inputBuffer
            int r2 = r7.findPitchPeriod(r2, r1)
            double r3 = (double) r8
            r5 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L27
            short[] r3 = r7.inputBuffer
            int r3 = r7.skipPitchPeriod(r3, r1, r8, r2)
            int r2 = r2 + r3
            goto L10
        L27:
            short[] r3 = r7.inputBuffer
            int r2 = r7.insertPitchPeriod(r3, r1, r8, r2)
            goto L10
        L2e:
            int r2 = r7.maxRequiredFrameCount
            int r2 = r2 + r1
            if (r2 <= r0) goto L8
            r7.removeProcessedInputFrames(r1)
            return
    }

    private int copyInputToOutput(int r3) {
            r2 = this;
            int r0 = r2.maxRequiredFrameCount
            int r1 = r2.remainingInputToCopyFrameCount
            int r0 = java.lang.Math.min(r0, r1)
            short[] r1 = r2.inputBuffer
            r2.copyToOutput(r1, r3, r0)
            int r3 = r2.remainingInputToCopyFrameCount
            int r3 = r3 - r0
            r2.remainingInputToCopyFrameCount = r3
            return r0
    }

    private void copyToOutput(short[] r4, int r5, int r6) {
            r3 = this;
            short[] r0 = r3.outputBuffer
            int r1 = r3.outputFrameCount
            short[] r0 = r3.ensureSpaceForAdditionalFrames(r0, r1, r6)
            r3.outputBuffer = r0
            int r1 = r3.channelCount
            int r5 = r5 * r1
            int r2 = r3.outputFrameCount
            int r2 = r2 * r1
            int r1 = r1 * r6
            java.lang.System.arraycopy(r4, r5, r0, r2, r1)
            int r4 = r3.outputFrameCount
            int r4 = r4 + r6
            r3.outputFrameCount = r4
            return
    }

    private void downSampleInput(short[] r7, int r8, int r9) {
            r6 = this;
            int r0 = r6.maxRequiredFrameCount
            int r0 = r0 / r9
            int r1 = r6.channelCount
            int r9 = r9 * r1
            int r8 = r8 * r1
            r1 = 0
            r2 = r1
        L9:
            if (r2 >= r0) goto L22
            r3 = r1
            r4 = r3
        Ld:
            if (r3 >= r9) goto L19
            int r5 = r2 * r9
            int r5 = r5 + r8
            int r5 = r5 + r3
            short r5 = r7[r5]
            int r4 = r4 + r5
            int r3 = r3 + 1
            goto Ld
        L19:
            int r4 = r4 / r9
            short[] r3 = r6.downSampleBuffer
            short r4 = (short) r4
            r3[r2] = r4
            int r2 = r2 + 1
            goto L9
        L22:
            return
    }

    private short[] ensureSpaceForAdditionalFrames(short[] r3, int r4, int r5) {
            r2 = this;
            int r0 = r3.length
            int r1 = r2.channelCount
            int r0 = r0 / r1
            int r4 = r4 + r5
            if (r4 > r0) goto L8
            return r3
        L8:
            int r0 = r0 * 3
            int r0 = r0 / 2
            int r0 = r0 + r5
            int r0 = r0 * r1
            short[] r3 = java.util.Arrays.copyOf(r3, r0)
            return r3
    }

    private int findPitchPeriod(short[] r7, int r8) {
            r6 = this;
            int r0 = r6.inputSampleRateHz
            r1 = 4000(0xfa0, float:5.605E-42)
            r2 = 1
            if (r0 <= r1) goto L9
            int r0 = r0 / r1
            goto La
        L9:
            r0 = r2
        La:
            int r1 = r6.channelCount
            if (r1 != r2) goto L19
            if (r0 != r2) goto L19
            int r0 = r6.minPeriod
            int r1 = r6.maxPeriod
            int r7 = r6.findPitchPeriodInRange(r7, r8, r0, r1)
            goto L4f
        L19:
            r6.downSampleInput(r7, r8, r0)
            short[] r1 = r6.downSampleBuffer
            int r3 = r6.minPeriod
            int r3 = r3 / r0
            int r4 = r6.maxPeriod
            int r4 = r4 / r0
            r5 = 0
            int r1 = r6.findPitchPeriodInRange(r1, r5, r3, r4)
            if (r0 == r2) goto L4e
            int r1 = r1 * r0
            int r0 = r0 * 4
            int r3 = r1 - r0
            int r1 = r1 + r0
            int r0 = r6.minPeriod
            if (r3 >= r0) goto L36
            r3 = r0
        L36:
            int r0 = r6.maxPeriod
            if (r1 <= r0) goto L3b
            r1 = r0
        L3b:
            int r0 = r6.channelCount
            if (r0 != r2) goto L44
            int r7 = r6.findPitchPeriodInRange(r7, r8, r3, r1)
            goto L4f
        L44:
            r6.downSampleInput(r7, r8, r2)
            short[] r7 = r6.downSampleBuffer
            int r7 = r6.findPitchPeriodInRange(r7, r5, r3, r1)
            goto L4f
        L4e:
            r7 = r1
        L4f:
            int r8 = r6.minDiff
            int r0 = r6.maxDiff
            boolean r8 = r6.previousPeriodBetter(r8, r0)
            if (r8 == 0) goto L5c
            int r8 = r6.prevPeriod
            goto L5d
        L5c:
            r8 = r7
        L5d:
            int r0 = r6.minDiff
            r6.prevMinDiff = r0
            r6.prevPeriod = r7
            return r8
    }

    private int findPitchPeriodInRange(short[] r10, int r11, int r12, int r13) {
            r9 = this;
            int r0 = r9.channelCount
            int r11 = r11 * r0
            r0 = 1
            r1 = 0
            r2 = 255(0xff, float:3.57E-43)
            r3 = r1
            r4 = r3
        L9:
            if (r12 > r13) goto L34
            r5 = r1
            r6 = r5
        Ld:
            if (r5 >= r12) goto L21
            int r7 = r11 + r5
            short r7 = r10[r7]
            int r8 = r11 + r12
            int r8 = r8 + r5
            short r8 = r10[r8]
            int r7 = r7 - r8
            int r7 = java.lang.Math.abs(r7)
            int r6 = r6 + r7
            int r5 = r5 + 1
            goto Ld
        L21:
            int r5 = r6 * r3
            int r7 = r0 * r12
            if (r5 >= r7) goto L29
            r3 = r12
            r0 = r6
        L29:
            int r5 = r6 * r2
            int r7 = r4 * r12
            if (r5 <= r7) goto L31
            r2 = r12
            r4 = r6
        L31:
            int r12 = r12 + 1
            goto L9
        L34:
            int r0 = r0 / r3
            r9.minDiff = r0
            int r4 = r4 / r2
            r9.maxDiff = r4
            return r3
    }

    private int insertPitchPeriod(short[] r10, int r11, float r12, int r13) {
            r9 = this;
            r0 = 1056964608(0x3f000000, float:0.5)
            int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            r1 = 1065353216(0x3f800000, float:1.0)
            if (r0 >= 0) goto Le
            float r0 = (float) r13
            float r0 = r0 * r12
            float r1 = r1 - r12
            float r0 = r0 / r1
            int r12 = (int) r0
            goto L1a
        Le:
            float r0 = (float) r13
            r2 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 * r12
            float r2 = r2 - r1
            float r0 = r0 * r2
            float r1 = r1 - r12
            float r0 = r0 / r1
            int r12 = (int) r0
            r9.remainingInputToCopyFrameCount = r12
            r12 = r13
        L1a:
            short[] r0 = r9.outputBuffer
            int r1 = r9.outputFrameCount
            int r8 = r13 + r12
            short[] r0 = r9.ensureSpaceForAdditionalFrames(r0, r1, r8)
            r9.outputBuffer = r0
            int r1 = r9.channelCount
            int r2 = r11 * r1
            int r3 = r9.outputFrameCount
            int r3 = r3 * r1
            int r1 = r1 * r13
            java.lang.System.arraycopy(r10, r2, r0, r3, r1)
            int r1 = r9.channelCount
            short[] r2 = r9.outputBuffer
            int r0 = r9.outputFrameCount
            int r3 = r0 + r13
            int r5 = r11 + r13
            r0 = r12
            r4 = r10
            r6 = r10
            r7 = r11
            overlapAdd(r0, r1, r2, r3, r4, r5, r6, r7)
            int r10 = r9.outputFrameCount
            int r10 = r10 + r8
            r9.outputFrameCount = r10
            return r12
    }

    private short interpolate(short[] r3, int r4, int r5, int r6) {
            r2 = this;
            short r0 = r3[r4]
            int r1 = r2.channelCount
            int r4 = r4 + r1
            short r3 = r3[r4]
            int r4 = r2.newRatePosition
            int r4 = r4 * r5
            int r5 = r2.oldRatePosition
            int r1 = r5 * r6
            int r5 = r5 + 1
            int r5 = r5 * r6
            int r4 = r5 - r4
            int r5 = r5 - r1
            int r0 = r0 * r4
            int r4 = r5 - r4
            int r4 = r4 * r3
            int r0 = r0 + r4
            int r0 = r0 / r5
            short r3 = (short) r0
            return r3
    }

    private void moveNewSamplesToPitchBuffer(int r7) {
            r6 = this;
            int r0 = r6.outputFrameCount
            int r0 = r0 - r7
            short[] r1 = r6.pitchBuffer
            int r2 = r6.pitchFrameCount
            short[] r1 = r6.ensureSpaceForAdditionalFrames(r1, r2, r0)
            r6.pitchBuffer = r1
            short[] r2 = r6.outputBuffer
            int r3 = r6.channelCount
            int r4 = r7 * r3
            int r5 = r6.pitchFrameCount
            int r5 = r5 * r3
            int r3 = r3 * r0
            java.lang.System.arraycopy(r2, r4, r1, r5, r3)
            r6.outputFrameCount = r7
            int r7 = r6.pitchFrameCount
            int r7 = r7 + r0
            r6.pitchFrameCount = r7
            return
    }

    private static void overlapAdd(int r8, int r9, short[] r10, int r11, short[] r12, int r13, short[] r14, int r15) {
            r0 = 0
            r1 = r0
        L2:
            if (r1 >= r9) goto L26
            int r2 = r11 * r9
            int r2 = r2 + r1
            int r3 = r15 * r9
            int r3 = r3 + r1
            int r4 = r13 * r9
            int r4 = r4 + r1
            r5 = r0
        Le:
            if (r5 >= r8) goto L23
            short r6 = r12[r4]
            int r7 = r8 - r5
            int r6 = r6 * r7
            short r7 = r14[r3]
            int r7 = r7 * r5
            int r6 = r6 + r7
            int r6 = r6 / r8
            short r6 = (short) r6
            r10[r2] = r6
            int r2 = r2 + r9
            int r4 = r4 + r9
            int r3 = r3 + r9
            int r5 = r5 + 1
            goto Le
        L23:
            int r1 = r1 + 1
            goto L2
        L26:
            return
    }

    private boolean previousPeriodBetter(int r3, int r4) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L18
            int r1 = r2.prevPeriod
            if (r1 != 0) goto L8
            goto L18
        L8:
            int r1 = r3 * 3
            if (r4 <= r1) goto Ld
            return r0
        Ld:
            int r3 = r3 * 2
            int r4 = r2.prevMinDiff
            int r4 = r4 * 3
            if (r3 > r4) goto L16
            return r0
        L16:
            r3 = 1
            return r3
        L18:
            return r0
    }

    private void processStreamInput() {
            r8 = this;
            int r0 = r8.outputFrameCount
            float r1 = r8.speed
            float r2 = r8.pitch
            float r1 = r1 / r2
            float r3 = r8.rate
            float r3 = r3 * r2
            double r4 = (double) r1
            r6 = 4607182463836013682(0x3ff0000a7c5ac472, double:1.00001)
            int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r2 > 0) goto L29
            r6 = 4607182328728024861(0x3fefffeb074a771d, double:0.99999)
            int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r2 >= 0) goto L1e
            goto L29
        L1e:
            short[] r1 = r8.inputBuffer
            int r2 = r8.inputFrameCount
            r4 = 0
            r8.copyToOutput(r1, r4, r2)
            r8.inputFrameCount = r4
            goto L2c
        L29:
            r8.changeSpeed(r1)
        L2c:
            r1 = 1065353216(0x3f800000, float:1.0)
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 == 0) goto L35
            r8.adjustRate(r3, r0)
        L35:
            return
    }

    private void removePitchFrames(int r6) {
            r5 = this;
            if (r6 != 0) goto L3
            return
        L3:
            short[] r0 = r5.pitchBuffer
            int r1 = r5.channelCount
            int r2 = r6 * r1
            r3 = 0
            int r4 = r5.pitchFrameCount
            int r4 = r4 - r6
            int r4 = r4 * r1
            java.lang.System.arraycopy(r0, r2, r0, r3, r4)
            int r0 = r5.pitchFrameCount
            int r0 = r0 - r6
            r5.pitchFrameCount = r0
            return
    }

    private void removeProcessedInputFrames(int r5) {
            r4 = this;
            int r0 = r4.inputFrameCount
            int r0 = r0 - r5
            short[] r1 = r4.inputBuffer
            int r2 = r4.channelCount
            int r5 = r5 * r2
            int r2 = r2 * r0
            r3 = 0
            java.lang.System.arraycopy(r1, r5, r1, r3, r2)
            r4.inputFrameCount = r0
            return
    }

    private int skipPitchPeriod(short[] r9, int r10, float r11, int r12) {
            r8 = this;
            r0 = 1073741824(0x40000000, float:2.0)
            int r1 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            r2 = 1065353216(0x3f800000, float:1.0)
            if (r1 < 0) goto Ld
            float r0 = (float) r12
            float r11 = r11 - r2
            float r0 = r0 / r11
            int r11 = (int) r0
            goto L16
        Ld:
            float r1 = (float) r12
            float r0 = r0 - r11
            float r1 = r1 * r0
            float r11 = r11 - r2
            float r1 = r1 / r11
            int r11 = (int) r1
            r8.remainingInputToCopyFrameCount = r11
            r11 = r12
        L16:
            short[] r0 = r8.outputBuffer
            int r1 = r8.outputFrameCount
            short[] r2 = r8.ensureSpaceForAdditionalFrames(r0, r1, r11)
            r8.outputBuffer = r2
            int r1 = r8.channelCount
            int r3 = r8.outputFrameCount
            int r7 = r10 + r12
            r0 = r11
            r4 = r9
            r5 = r10
            r6 = r9
            overlapAdd(r0, r1, r2, r3, r4, r5, r6, r7)
            int r9 = r8.outputFrameCount
            int r9 = r9 + r11
            r8.outputFrameCount = r9
            return r11
    }

    public final void flush() {
            r1 = this;
            r0 = 0
            r1.inputFrameCount = r0
            r1.outputFrameCount = r0
            r1.pitchFrameCount = r0
            r1.oldRatePosition = r0
            r1.newRatePosition = r0
            r1.remainingInputToCopyFrameCount = r0
            r1.prevPeriod = r0
            r1.prevMinDiff = r0
            r1.minDiff = r0
            r1.maxDiff = r0
            return
    }

    public final int getFramesAvailable() {
            r1 = this;
            int r0 = r1.outputFrameCount
            return r0
    }

    public final void getOutput(java.nio.ShortBuffer r5) {
            r4 = this;
            int r0 = r5.remaining()
            int r1 = r4.channelCount
            int r0 = r0 / r1
            int r1 = r4.outputFrameCount
            int r0 = java.lang.Math.min(r0, r1)
            short[] r1 = r4.outputBuffer
            int r2 = r4.channelCount
            int r2 = r2 * r0
            r3 = 0
            r5.put(r1, r3, r2)
            int r5 = r4.outputFrameCount
            int r5 = r5 - r0
            r4.outputFrameCount = r5
            short[] r1 = r4.outputBuffer
            int r2 = r4.channelCount
            int r0 = r0 * r2
            int r5 = r5 * r2
            java.lang.System.arraycopy(r1, r0, r1, r3, r5)
            return
    }

    public final void queueEndOfStream() {
            r7 = this;
            int r0 = r7.inputFrameCount
            float r1 = r7.speed
            float r2 = r7.pitch
            float r1 = r1 / r2
            float r3 = r7.rate
            float r3 = r3 * r2
            int r2 = r7.outputFrameCount
            float r4 = (float) r0
            float r4 = r4 / r1
            int r1 = r7.pitchFrameCount
            float r1 = (float) r1
            float r4 = r4 + r1
            float r4 = r4 / r3
            r1 = 1056964608(0x3f000000, float:0.5)
            float r4 = r4 + r1
            int r1 = (int) r4
            int r2 = r2 + r1
            short[] r1 = r7.inputBuffer
            int r3 = r7.maxRequiredFrameCount
            int r3 = r3 * 2
            int r3 = r3 + r0
            short[] r1 = r7.ensureSpaceForAdditionalFrames(r1, r0, r3)
            r7.inputBuffer = r1
            r1 = 0
            r3 = r1
        L27:
            int r4 = r7.maxRequiredFrameCount
            int r5 = r4 * 2
            int r6 = r7.channelCount
            int r5 = r5 * r6
            if (r3 >= r5) goto L39
            short[] r4 = r7.inputBuffer
            int r6 = r6 * r0
            int r6 = r6 + r3
            r4[r6] = r1
            int r3 = r3 + 1
            goto L27
        L39:
            int r0 = r7.inputFrameCount
            int r4 = r4 * 2
            int r0 = r0 + r4
            r7.inputFrameCount = r0
            r7.processStreamInput()
            int r0 = r7.outputFrameCount
            if (r0 <= r2) goto L49
            r7.outputFrameCount = r2
        L49:
            r7.inputFrameCount = r1
            r7.remainingInputToCopyFrameCount = r1
            r7.pitchFrameCount = r1
            return
    }

    public final void queueInput(java.nio.ShortBuffer r6) {
            r5 = this;
            int r0 = r6.remaining()
            int r1 = r5.channelCount
            int r0 = r0 / r1
            int r1 = r1 * r0
            int r1 = r1 * 2
            short[] r2 = r5.inputBuffer
            int r3 = r5.inputFrameCount
            short[] r2 = r5.ensureSpaceForAdditionalFrames(r2, r3, r0)
            r5.inputBuffer = r2
            int r3 = r5.inputFrameCount
            int r4 = r5.channelCount
            int r3 = r3 * r4
            int r1 = r1 / 2
            r6.get(r2, r3, r1)
            int r6 = r5.inputFrameCount
            int r6 = r6 + r0
            r5.inputFrameCount = r6
            r5.processStreamInput()
            return
    }
}
