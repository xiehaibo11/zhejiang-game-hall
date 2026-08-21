package com.mbridge.msdk.playercommon.exoplayer2.util;

public interface Clock {
    public static final com.mbridge.msdk.playercommon.exoplayer2.util.Clock DEFAULT = null;

    static {
            com.mbridge.msdk.playercommon.exoplayer2.util.SystemClock r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.SystemClock
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock.DEFAULT = r0
            return
    }

    com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper createHandler(android.os.Looper r1, android.os.Handler.Callback r2);

    long elapsedRealtime();

    void sleep(long r1);

    long uptimeMillis();
}
