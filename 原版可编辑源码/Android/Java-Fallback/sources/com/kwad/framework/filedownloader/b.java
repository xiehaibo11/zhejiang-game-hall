package com.kwad.framework.filedownloader;

public final class b implements com.kwad.framework.filedownloader.s.a, com.kwad.framework.filedownloader.s.b {
    private long aag;
    private long aah;
    private long aai;
    private int aaj;
    private int aak;
    private long mStartTime;

    public b() {
            r1 = this;
            r1.<init>()
            r0 = 1000(0x3e8, float:1.401E-42)
            r1.aak = r0
            return
    }

    @Override
    public final void G(long r10) {
            r9 = this;
            int r0 = r9.aak
            if (r0 > 0) goto L5
            return
        L5:
            long r0 = r9.aag
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 1
            r4 = 0
            if (r0 != 0) goto L10
            goto L37
        L10:
            long r5 = android.os.SystemClock.uptimeMillis()
            long r7 = r9.aag
            long r5 = r5 - r7
            int r0 = r9.aak
            long r7 = (long) r0
            int r0 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r0 >= 0) goto L29
            int r0 = r9.aaj
            if (r0 != 0) goto L27
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 <= 0) goto L27
            goto L29
        L27:
            r1 = r4
            goto L37
        L29:
            long r2 = r9.aah
            long r2 = r10 - r2
            long r2 = r2 / r5
            int r0 = (int) r2
            r9.aaj = r0
            int r0 = java.lang.Math.max(r4, r0)
            r9.aaj = r0
        L37:
            if (r1 == 0) goto L41
            r9.aah = r10
            long r10 = android.os.SystemClock.uptimeMillis()
            r9.aag = r10
        L41:
            return
    }

    @Override
    public final void end(long r7) {
            r6 = this;
            long r0 = r6.mStartTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L9
            return
        L9:
            long r0 = r6.aai
            long r7 = r7 - r0
            r6.aag = r2
            long r0 = android.os.SystemClock.uptimeMillis()
            long r4 = r6.mStartTime
            long r0 = r0 - r4
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 > 0) goto L1d
        L19:
            int r7 = (int) r7
            r6.aaj = r7
            return
        L1d:
            long r7 = r7 / r0
            goto L19
    }

    @Override
    public final int getSpeed() {
            r1 = this;
            int r0 = r1.aaj
            return r0
    }

    @Override
    public final void reset() {
            r2 = this;
            r0 = 0
            r2.aaj = r0
            r0 = 0
            r2.aag = r0
            return
    }

    @Override
    public final void start(long r3) {
            r2 = this;
            long r0 = android.os.SystemClock.uptimeMillis()
            r2.mStartTime = r0
            r2.aai = r3
            return
    }
}
