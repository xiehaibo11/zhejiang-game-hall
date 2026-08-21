package com.mbridge.msdk.playercommon.exoplayer2.util;

final class SystemClock implements com.mbridge.msdk.playercommon.exoplayer2.util.Clock {
    SystemClock() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.util.HandlerWrapper createHandler(android.os.Looper r3, android.os.Handler.Callback r4) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.SystemHandlerWrapper r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.SystemHandlerWrapper
            android.os.Handler r1 = new android.os.Handler
            r1.<init>(r3, r4)
            r0.<init>(r1)
            return r0
    }

    @Override
    public final long elapsedRealtime() {
            r2 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            return r0
    }

    @Override
    public final void sleep(long r1) {
            r0 = this;
            android.os.SystemClock.sleep(r1)
            return
    }

    @Override
    public final long uptimeMillis() {
            r2 = this;
            long r0 = android.os.SystemClock.uptimeMillis()
            return r0
    }
}
