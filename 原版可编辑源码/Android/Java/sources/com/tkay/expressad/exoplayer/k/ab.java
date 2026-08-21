package com.tkay.expressad.exoplayer.k;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;

final class ab implements k {
    private final Handler a;

    public ab(Handler handler) {
        this.a = handler;
    }

    @Override
    public final Looper a() {
        return this.a.getLooper();
    }

    @Override
    public final Message a(int i) {
        return this.a.obtainMessage(i);
    }

    @Override
    public final Message a(int i, Object obj) {
        return this.a.obtainMessage(i, obj);
    }

    @Override
    public final Message a(int i, int i2) {
        return this.a.obtainMessage(i, i2, 0);
    }

    @Override
    public final Message a(int i, int i2, Object obj) {
        return this.a.obtainMessage(0, i, i2, obj);
    }

    @Override
    public final boolean b(int i) {
        return this.a.sendEmptyMessage(i);
    }

    @Override
    public final boolean a(long j) {
        return this.a.sendEmptyMessageAtTime(2, j);
    }

    @Override
    public final void b() {
        this.a.removeMessages(2);
    }

    @Override
    public final void a(Object obj) {
        this.a.removeCallbacksAndMessages(obj);
    }

    @Override
    public final boolean a(Runnable runnable) {
        return this.a.post(runnable);
    }

    @Override
    public final boolean a(Runnable runnable, long j) {
        return this.a.postDelayed(runnable, j);
    }
}
