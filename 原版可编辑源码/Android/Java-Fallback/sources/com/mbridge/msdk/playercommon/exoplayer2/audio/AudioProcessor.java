package com.mbridge.msdk.playercommon.exoplayer2.audio;

public interface AudioProcessor {
    public static final java.nio.ByteBuffer EMPTY_BUFFER = null;

    public static final class UnhandledFormatException extends java.lang.Exception {
        public UnhandledFormatException(int r3, int r4, int r5) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Unhandled format: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = " Hz, "
                r0.append(r3)
                r0.append(r4)
                java.lang.String r3 = " channels in encoding "
                r0.append(r3)
                r0.append(r5)
                java.lang.String r3 = r0.toString()
                r2.<init>(r3)
                return
        }
    }

    static {
            r0 = 0
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocateDirect(r0)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r0 = r0.order(r1)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor.EMPTY_BUFFER = r0
            return
    }

    boolean configure(int r1, int r2, int r3) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor.UnhandledFormatException;

    void flush();

    java.nio.ByteBuffer getOutput();

    int getOutputChannelCount();

    int getOutputEncoding();

    int getOutputSampleRateHz();

    boolean isActive();

    boolean isEnded();

    void queueEndOfStream();

    void queueInput(java.nio.ByteBuffer r1);

    void reset();
}
