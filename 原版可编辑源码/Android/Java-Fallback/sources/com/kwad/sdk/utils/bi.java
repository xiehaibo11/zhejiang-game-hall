package com.kwad.sdk.utils;

public final class bi {
    private long aKm;
    private long aKn;
    private boolean aKo;

    public bi() {
            r0 = this;
            r0.<init>()
            r0.reset()
            return
    }

    private void reset() {
            r2 = this;
            r0 = 0
            r2.aKm = r0
            r0 = -1
            r2.aKn = r0
            return
    }

    public final void Kb() {
            r4 = this;
            boolean r0 = r4.aKo
            if (r0 != 0) goto L5
            return
        L5:
            long r0 = r4.aKn
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L13
            long r0 = android.os.SystemClock.elapsedRealtime()
            r4.aKn = r0
        L13:
            return
    }

    public final void Kc() {
            r6 = this;
            boolean r0 = r6.aKo
            if (r0 != 0) goto L5
            return
        L5:
            long r0 = r6.aKn
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1d
            long r0 = r6.aKm
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r4 = r6.aKn
            long r2 = r2 - r4
            long r0 = r0 + r2
            r6.aKm = r0
            r0 = -1
            r6.aKn = r0
        L1d:
            return
    }

    public final long Kd() {
            r6 = this;
            boolean r0 = r6.aKo
            r1 = 0
            if (r0 != 0) goto L7
            return r1
        L7:
            r0 = 0
            r6.aKo = r0
            long r3 = r6.aKn
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 <= 0) goto L20
            long r0 = r6.aKm
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r4 = r6.aKn
            long r2 = r2 - r4
            long r0 = r0 + r2
            r6.aKm = r0
            r0 = -1
            r6.aKn = r0
        L20:
            long r0 = r6.aKm
            return r0
    }

    public final long getTime() {
            r4 = this;
            long r0 = r4.aKn
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L13
            long r0 = r4.aKm
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r0 = r0 + r2
            long r2 = r4.aKn
            long r0 = r0 - r2
            return r0
        L13:
            long r0 = r4.aKm
            return r0
    }

    public final void startTiming() {
            r2 = this;
            r2.reset()
            r0 = 1
            r2.aKo = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.aKn = r0
            return
    }
}
