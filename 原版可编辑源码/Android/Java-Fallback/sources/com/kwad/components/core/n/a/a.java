package com.kwad.components.core.n.a;

public final class a {
    private java.lang.String Pp;
    private long Pq;
    private long Pr;
    private long Ps;
    private boolean Pt;


    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    static long a(com.kwad.components.core.n.a.a r0, long r1) {
            r0.Ps = r1
            return r1
    }

    public final void at(java.lang.String r1) {
            r0 = this;
            r0.Pp = r1
            return
    }

    public final void pz() {
            r1 = this;
            boolean r0 = r1.Pt
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1.Pt = r0
            com.kwad.components.core.n.a.a$1 r0 = new com.kwad.components.core.n.a.a$1
            r0.<init>(r1)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    public final void report() {
            r7 = this;
            com.kwad.components.core.n.a.b r0 = new com.kwad.components.core.n.a.b
            r0.<init>()
            java.lang.String r1 = r7.Pp
            r0.Pp = r1
            long r1 = r7.Pq
            r3 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L15
            long r5 = r7.Pr
            long r5 = r5 - r1
            goto L16
        L15:
            r5 = r3
        L16:
            r0.Pw = r5
            long r1 = r7.Pr
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L22
            long r5 = r7.Ps
            long r5 = r5 - r1
            goto L23
        L22:
            r5 = r3
        L23:
            r0.Px = r5
            long r1 = r7.Pq
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L2e
            long r3 = r7.Ps
            long r3 = r3 - r1
        L2e:
            r0.Pv = r3
            com.kwad.components.core.o.a r1 = com.kwad.components.core.o.a.pA()
            r1.a(r0)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PageMonitor"
            com.kwad.sdk.core.e.c.d(r1, r0)
            return
    }

    public final void y(long r1) {
            r0 = this;
            r0.Pq = r1
            long r1 = android.os.SystemClock.uptimeMillis()
            r0.Pr = r1
            return
    }
}
