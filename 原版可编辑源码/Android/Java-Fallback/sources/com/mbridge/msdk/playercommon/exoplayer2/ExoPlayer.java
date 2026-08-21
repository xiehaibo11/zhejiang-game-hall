package com.mbridge.msdk.playercommon.exoplayer2;

public interface ExoPlayer extends com.mbridge.msdk.playercommon.exoplayer2.Player {
    public static final int REPEAT_MODE_ALL = 2;
    public static final int REPEAT_MODE_OFF = 0;
    public static final int REPEAT_MODE_ONE = 1;
    public static final int STATE_BUFFERING = 2;
    public static final int STATE_ENDED = 4;
    public static final int STATE_IDLE = 1;
    public static final int STATE_READY = 3;

    public interface EventListener extends com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener {
    }

    public interface ExoPlayerComponent extends com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Target {
    }

    public static final class ExoPlayerMessage {
        public final java.lang.Object message;
        public final int messageType;
        public final com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Target target;

        public ExoPlayerMessage(com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Target r1, int r2, java.lang.Object r3) {
                r0 = this;
                r0.<init>()
                r0.target = r1
                r0.messageType = r2
                r0.message = r3
                return
        }
    }

    void blockingSendMessages(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer.ExoPlayerMessage... r1);

    com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage createMessage(com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Target r1);

    android.os.Looper getPlaybackLooper();

    void prepare(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1);

    void prepare(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1, boolean r2, boolean r3);

    void sendMessages(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer.ExoPlayerMessage... r1);

    void setSeekParameters(com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r1);
}
