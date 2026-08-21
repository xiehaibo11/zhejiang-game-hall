package com.tkay.expressad.exoplayer.k;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;

/* JADX INFO: loaded from: classes3.dex */
final class ab implements k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Handler f6751a;

    public ab(Handler handler) {
        this.f6751a = handler;
    }

    @Override // com.tkay.expressad.exoplayer.k.k
    public final Looper a() {
        return this.f6751a.getLooper();
    }

    @Override // com.tkay.expressad.exoplayer.k.k
    public final Message a(int i) {
        return this.f6751a.obtainMessage(i);
    }

    @Override // com.tkay.expressad.exoplayer.k.k
    public final Message a(int i, Object obj) {
        return this.f6751a.obtainMessage(i, obj);
    }

    @Override // com.tkay.expressad.exoplayer.k.k
    public final Message a(int i, int i2) {
        return this.f6751a.obtainMessage(i, i2, 0);
    }

    @Override // com.tkay.expressad.exoplayer.k.k
    public final Message a(int i, int i2, Object obj) {
        return this.f6751a.obtainMessage(0, i, i2, obj);
    }

    @Override // com.tkay.expressad.exoplayer.k.k
    public final boolean b(int i) {
        return this.f6751a.sendEmptyMessage(i);
    }

    @Override // com.tkay.expressad.exoplayer.k.k
    public final boolean a(long j) {
        return this.f6751a.sendEmptyMessageAtTime(2, j);
    }

    @Override // com.tkay.expressad.exoplayer.k.k
    public final void b() {
        this.f6751a.removeMessages(2);
    }

    @Override // com.tkay.expressad.exoplayer.k.k
    public final void a(Object obj) {
        this.f6751a.removeCallbacksAndMessages(obj);
    }

    @Override // com.tkay.expressad.exoplayer.k.k
    public final boolean a(Runnable runnable) {
        return this.f6751a.post(runnable);
    }

    @Override // com.tkay.expressad.exoplayer.k.k
    public final boolean a(Runnable runnable, long j) {
        return this.f6751a.postDelayed(runnable, j);
    }
}
