package com.tkay.expressad.exoplayer.k;

import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;

final class aa implements c {
    aa() {
    }

    @Override
    public final long a() {
        return SystemClock.elapsedRealtime();
    }

    @Override
    public final long b() {
        return SystemClock.uptimeMillis();
    }

    @Override
    public final void a(long j) {
        SystemClock.sleep(j);
    }

    @Override
    public final k a(Looper looper, Handler.Callback callback) {
        return new ab(new Handler(looper, callback));
    }
}
