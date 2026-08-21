package com.kwad.components.core.video;

public final class i {
    private volatile boolean SW;
    private long SX;
    private com.kwad.components.core.video.i.a SY;

    public static class a {
        private long SZ;
        private int Ta;

        public a() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.SZ = r0
                r0 = 0
                r2.Ta = r0
                return
        }

        public final void accumulate(long r3) {
                r2 = this;
                long r0 = r2.SZ
                long r0 = r0 + r3
                r2.SZ = r0
                int r3 = r2.Ta
                int r3 = r3 + 1
                r2.Ta = r3
                return
        }

        public final int rg() {
                r1 = this;
                int r0 = r1.Ta
                return r0
        }

        public final long rh() {
                r2 = this;
                long r0 = r2.SZ
                return r0
        }
    }

    public i() {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.video.i$a r0 = new com.kwad.components.core.video.i$a
            r0.<init>()
            r1.SY = r0
            return
    }

    public final void rb() {
            r2 = this;
            boolean r0 = r2.SW
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r2.SW = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.SX = r0
            java.lang.String r0 = "videoStartBlock"
            com.kwad.sdk.core.video.a.a.a.dI(r0)
            return
    }

    public final void rc() {
            r4 = this;
            boolean r0 = r4.SW
            if (r0 == 0) goto L29
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r4.SX
            long r0 = r0 - r2
            com.kwad.components.core.video.i$a r2 = r4.SY
            r2.accumulate(r0)
            r2 = 0
            r4.SW = r2
            java.lang.String r2 = "videoEndBlock"
            com.kwad.sdk.core.video.a.a.a.dI(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "videoBlockTime_"
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.kwad.sdk.core.video.a.a.a.dI(r0)
        L29:
            return
    }

    public final boolean rd() {
            r1 = this;
            boolean r0 = r1.SW
            return r0
    }

    public final com.kwad.components.core.video.i.a re() {
            r5 = this;
            boolean r0 = r5.SW
            if (r0 == 0) goto L13
            com.kwad.components.core.video.i$a r0 = r5.SY
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r3 = r5.SX
            long r1 = r1 - r3
            r0.accumulate(r1)
            r0 = 0
            r5.SW = r0
        L13:
            com.kwad.components.core.video.i$a r0 = r5.SY
            return r0
    }

    public final long rf() {
            r2 = this;
            long r0 = r2.SX
            return r0
    }
}
