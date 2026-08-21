package com.tkay.expressad.exoplayer.k;

final class aa implements com.tkay.expressad.exoplayer.k.c {
    aa() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final long a() {
            r2 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.k.k a(android.os.Looper r3, android.os.Handler.Callback r4) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.ab r0 = new com.tkay.expressad.exoplayer.k.ab
            android.os.Handler r1 = new android.os.Handler
            r1.<init>(r3, r4)
            r0.<init>(r1)
            return r0
    }

    @Override
    public final void a(long r1) {
            r0 = this;
            android.os.SystemClock.sleep(r1)
            return
    }

    @Override
    public final long b() {
            r2 = this;
            long r0 = android.os.SystemClock.uptimeMillis()
            return r0
    }
}
