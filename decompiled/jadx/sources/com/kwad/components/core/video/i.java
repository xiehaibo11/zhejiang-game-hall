package com.kwad.components.core.video;

import android.os.SystemClock;

/* JADX INFO: loaded from: classes2.dex */
public final class i {
    private volatile boolean SW;
    private long SX;
    private a SY = new a();

    public static class a {
        private long SZ = 0;
        private int Ta = 0;

        public final void accumulate(long j) {
            this.SZ += j;
            this.Ta++;
        }

        public final int rg() {
            return this.Ta;
        }

        public final long rh() {
            return this.SZ;
        }
    }

    public final void rb() {
        if (this.SW) {
            return;
        }
        this.SW = true;
        this.SX = SystemClock.elapsedRealtime();
        com.kwad.sdk.core.video.a.a.a.dI("videoStartBlock");
    }

    public final void rc() {
        if (this.SW) {
            long jElapsedRealtime = SystemClock.elapsedRealtime() - this.SX;
            this.SY.accumulate(jElapsedRealtime);
            this.SW = false;
            com.kwad.sdk.core.video.a.a.a.dI("videoEndBlock");
            com.kwad.sdk.core.video.a.a.a.dI("videoBlockTime_" + jElapsedRealtime);
        }
    }

    public final boolean rd() {
        return this.SW;
    }

    public final a re() {
        if (this.SW) {
            this.SY.accumulate(SystemClock.elapsedRealtime() - this.SX);
            this.SW = false;
        }
        return this.SY;
    }

    public final long rf() {
        return this.SX;
    }
}
