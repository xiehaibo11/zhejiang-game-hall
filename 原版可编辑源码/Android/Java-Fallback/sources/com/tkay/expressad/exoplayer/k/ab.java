package com.tkay.expressad.exoplayer.k;

final class ab implements com.tkay.expressad.exoplayer.k.k {
    private final android.os.Handler a;

    public ab(android.os.Handler r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public final android.os.Looper a() {
            r1 = this;
            android.os.Handler r0 = r1.a
            android.os.Looper r0 = r0.getLooper()
            return r0
    }

    @Override
    public final android.os.Message a(int r2) {
            r1 = this;
            android.os.Handler r0 = r1.a
            android.os.Message r2 = r0.obtainMessage(r2)
            return r2
    }

    @Override
    public final android.os.Message a(int r3, int r4) {
            r2 = this;
            android.os.Handler r0 = r2.a
            r1 = 0
            android.os.Message r3 = r0.obtainMessage(r3, r4, r1)
            return r3
    }

    @Override
    public final android.os.Message a(int r3, int r4, java.lang.Object r5) {
            r2 = this;
            android.os.Handler r0 = r2.a
            r1 = 0
            android.os.Message r3 = r0.obtainMessage(r1, r3, r4, r5)
            return r3
    }

    @Override
    public final android.os.Message a(int r2, java.lang.Object r3) {
            r1 = this;
            android.os.Handler r0 = r1.a
            android.os.Message r2 = r0.obtainMessage(r2, r3)
            return r2
    }

    @Override
    public final void a(java.lang.Object r2) {
            r1 = this;
            android.os.Handler r0 = r1.a
            r0.removeCallbacksAndMessages(r2)
            return
    }

    @Override
    public final boolean a(long r3) {
            r2 = this;
            android.os.Handler r0 = r2.a
            r1 = 2
            boolean r3 = r0.sendEmptyMessageAtTime(r1, r3)
            return r3
    }

    @Override
    public final boolean a(java.lang.Runnable r2) {
            r1 = this;
            android.os.Handler r0 = r1.a
            boolean r2 = r0.post(r2)
            return r2
    }

    @Override
    public final boolean a(java.lang.Runnable r2, long r3) {
            r1 = this;
            android.os.Handler r0 = r1.a
            boolean r2 = r0.postDelayed(r2, r3)
            return r2
    }

    @Override
    public final void b() {
            r2 = this;
            android.os.Handler r0 = r2.a
            r1 = 2
            r0.removeMessages(r1)
            return
    }

    @Override
    public final boolean b(int r2) {
            r1 = this;
            android.os.Handler r0 = r1.a
            boolean r2 = r0.sendEmptyMessage(r2)
            return r2
    }
}
