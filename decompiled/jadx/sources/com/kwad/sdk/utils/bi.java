package com.kwad.sdk.utils;

import android.os.SystemClock;

/* JADX INFO: loaded from: classes2.dex */
public final class bi {
    private long aKm;
    private long aKn;
    private boolean aKo;

    public bi() {
        reset();
    }

    private void reset() {
        this.aKm = 0L;
        this.aKn = -1L;
    }

    public final void Kb() {
        if (this.aKo && this.aKn < 0) {
            this.aKn = SystemClock.elapsedRealtime();
        }
    }

    public final void Kc() {
        if (this.aKo && this.aKn > 0) {
            this.aKm += SystemClock.elapsedRealtime() - this.aKn;
            this.aKn = -1L;
        }
    }

    public final long Kd() {
        if (!this.aKo) {
            return 0L;
        }
        this.aKo = false;
        if (this.aKn > 0) {
            this.aKm += SystemClock.elapsedRealtime() - this.aKn;
            this.aKn = -1L;
        }
        return this.aKm;
    }

    public final long getTime() {
        return this.aKn > 0 ? (this.aKm + SystemClock.elapsedRealtime()) - this.aKn : this.aKm;
    }

    public final void startTiming() {
        reset();
        this.aKo = true;
        this.aKn = SystemClock.elapsedRealtime();
    }
}
