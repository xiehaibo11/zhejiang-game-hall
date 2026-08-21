package com.kwad.framework.filedownloader;

import android.os.SystemClock;
import com.kwad.framework.filedownloader.s;

/* JADX INFO: loaded from: classes2.dex */
public final class b implements s.a, s.b {
    private long aag;
    private long aah;
    private long aai;
    private int aaj;
    private int aak = 1000;
    private long mStartTime;

    @Override // com.kwad.framework.filedownloader.s.b
    public final void G(long j) {
        if (this.aak <= 0) {
            return;
        }
        boolean z = true;
        if (this.aag != 0) {
            long jUptimeMillis = SystemClock.uptimeMillis() - this.aag;
            if (jUptimeMillis >= this.aak || (this.aaj == 0 && jUptimeMillis > 0)) {
                int i = (int) ((j - this.aah) / jUptimeMillis);
                this.aaj = i;
                this.aaj = Math.max(0, i);
            } else {
                z = false;
            }
        }
        if (z) {
            this.aah = j;
            this.aag = SystemClock.uptimeMillis();
        }
    }

    @Override // com.kwad.framework.filedownloader.s.b
    public final void end(long j) {
        if (this.mStartTime <= 0) {
            return;
        }
        long j2 = j - this.aai;
        this.aag = 0L;
        long jUptimeMillis = SystemClock.uptimeMillis() - this.mStartTime;
        if (jUptimeMillis > 0) {
            j2 /= jUptimeMillis;
        }
        this.aaj = (int) j2;
    }

    @Override // com.kwad.framework.filedownloader.s.a
    public final int getSpeed() {
        return this.aaj;
    }

    @Override // com.kwad.framework.filedownloader.s.b
    public final void reset() {
        this.aaj = 0;
        this.aag = 0L;
    }

    @Override // com.kwad.framework.filedownloader.s.b
    public final void start(long j) {
        this.mStartTime = SystemClock.uptimeMillis();
        this.aai = j;
    }
}
