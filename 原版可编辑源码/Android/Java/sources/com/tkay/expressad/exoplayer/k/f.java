package com.tkay.expressad.exoplayer.k;

import android.os.SystemClock;

public final class f {
    private boolean a;

    public final synchronized boolean a() {
        if (this.a) {
            return false;
        }
        this.a = true;
        notifyAll();
        return true;
    }

    public final synchronized boolean b() {
        boolean z;
        z = this.a;
        this.a = false;
        return z;
    }

    public final synchronized void c() {
        while (!this.a) {
            wait();
        }
    }

    private synchronized boolean a(long j) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        long j2 = j + jElapsedRealtime;
        while (!this.a && jElapsedRealtime < j2) {
            wait(j2 - jElapsedRealtime);
            jElapsedRealtime = SystemClock.elapsedRealtime();
        }
        return this.a;
    }
}
