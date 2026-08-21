package com.mbridge.msdk.playercommon.exoplayer2.audio;

public interface AudioSink {
    public static final long CURRENT_POSITION_NOT_SET = Long.MIN_VALUE;

    public static final class ConfigurationException extends java.lang.Exception {
        public ConfigurationException(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public ConfigurationException(java.lang.Throwable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public static final class InitializationException extends java.lang.Exception {
        public final int audioTrackState;

        public InitializationException(int r3, int r4, int r5, int r6) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "AudioTrack init failed: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r1 = ", Config("
                r0.append(r1)
                r0.append(r4)
                java.lang.String r4 = ", "
                r0.append(r4)
                r0.append(r5)
                r0.append(r4)
                r0.append(r6)
                java.lang.String r4 = ")"
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r2.<init>(r4)
                r2.audioTrackState = r3
                return
        }
    }

    public interface Listener {
        void onAudioSessionId(int r1);

        void onPositionDiscontinuity();

        void onUnderrun(int r1, long r2, long r4);
    }

    public static final class WriteException extends java.lang.Exception {
        public final int errorCode;

        public WriteException(int r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "AudioTrack write failed: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                r2.<init>(r0)
                r2.errorCode = r3
                return
        }
    }

    void configure(int r1, int r2, int r3, int r4, int[] r5, int r6, int r7) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.ConfigurationException;

    void disableTunneling();

    void enableTunnelingV21(int r1);

    long getCurrentPositionUs(boolean r1);

    com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters getPlaybackParameters();

    boolean handleBuffer(java.nio.ByteBuffer r1, long r2) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException;

    void handleDiscontinuity();

    boolean hasPendingData();

    boolean isEncodingSupported(int r1);

    boolean isEnded();

    void pause();

    void play();

    void playToEndOfStream() throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException;

    void release();

    void reset();

    void setAudioAttributes(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r1);

    void setAudioSessionId(int r1);

    void setListener(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.Listener r1);

    com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters setPlaybackParameters(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r1);

    void setVolume(float r1);
}
