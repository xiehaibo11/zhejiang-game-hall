package com.mbridge.msdk.playercommon.exoplayer2.util;

import android.os.Handler;
import android.os.Looper;

final class SystemClock implements Clock {
    SystemClock() {
    }

    @Override
    public final long elapsedRealtime() {
        return android.os.SystemClock.elapsedRealtime();
    }

    @Override
    public final long uptimeMillis() {
        return android.os.SystemClock.uptimeMillis();
    }

    @Override
    public final void sleep(long j) {
        android.os.SystemClock.sleep(j);
    }

    @Override
    public final HandlerWrapper createHandler(Looper looper, Handler.Callback callback) {
        return new SystemHandlerWrapper(new Handler(looper, callback));
    }
}
