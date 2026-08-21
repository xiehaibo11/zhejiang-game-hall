package com.tkay.expressad.exoplayer.k;

import android.os.SystemClock;

/* JADX INFO: loaded from: classes3.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f6761a;

    public final synchronized boolean a() {
        if (this.f6761a) {
            return false;
        }
        this.f6761a = true;
        notifyAll();
        return true;
    }

    public final synchronized boolean b() {
        boolean z;
        z = this.f6761a;
        this.f6761a = false;
        return z;
    }

    public final synchronized void c() {
        while (!this.f6761a) {
            wait();
        }
    }

    private synchronized boolean a(long j) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        long j2 = j + jElapsedRealtime;
        while (!this.f6761a && jElapsedRealtime < j2) {
            wait(j2 - jElapsedRealtime);
            jElapsedRealtime = SystemClock.elapsedRealtime();
        }
        return this.f6761a;
    }
}
