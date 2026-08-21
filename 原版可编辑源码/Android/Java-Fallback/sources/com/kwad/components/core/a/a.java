package com.kwad.components.core.a;

public final class a {
    private java.lang.String HR;
    private java.lang.String HS;
    private long HT;
    private long HU;
    private java.util.Timer HV;
    private boolean HW;
    private final long period;



    static final class a {
        private static final com.kwad.components.core.a.a HY = null;

        static {
                com.kwad.components.core.a.a r0 = new com.kwad.components.core.a.a
                r0.<init>()
                com.kwad.components.core.a.a.a.HY = r0
                return
        }

        static com.kwad.components.core.a.a mf() {
                com.kwad.components.core.a.a r0 = com.kwad.components.core.a.a.a.HY
                return r0
        }
    }

    public a() {
            r3 = this;
            r3.<init>()
            r0 = -1
            r3.HT = r0
            r0 = 0
            r3.HW = r0
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L11
            r3.HT = r0     // Catch: java.lang.Throwable -> L11
            goto L1b
        L11:
            r0 = move-exception
            long r1 = java.lang.System.currentTimeMillis()
            r3.HT = r1
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L1b:
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MINUTES
            int r1 = com.kwad.sdk.core.config.d.zd()
            long r1 = (long) r1
            long r0 = r0.toMillis(r1)
            r3.period = r0
            com.kwad.components.core.a.a$1 r0 = new com.kwad.components.core.a.a$1
            r0.<init>(r3)
            com.kwad.sdk.core.c.b.AU()
            com.kwad.sdk.core.c.b.a(r0)
            return
    }

    static void a(com.kwad.components.core.a.a r0) {
            r0.me()
            return
    }

    static void a(com.kwad.components.core.a.a r0, int r1) {
            r1 = 2
            r0.aj(r1)
            return
    }

    private void aj(int r9) {
            r8 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r8.HT
            long r2 = r0 - r2
            r8.HT = r0
            r0 = 0
            r4 = 1
            if (r9 != r4) goto L27
            r8.HU = r0
            java.util.UUID r4 = java.util.UUID.randomUUID()
            java.lang.String r4 = r4.toString()
            r8.HS = r4
            java.lang.String r4 = r8.HR
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L27
            java.lang.String r4 = r8.HS
            r8.HR = r4
        L27:
            long r4 = r8.HU
            r6 = 1
            long r4 = r4 + r6
            r8.HU = r4
            com.kwad.sdk.core.report.r r4 = new com.kwad.sdk.core.report.r
            r5 = 10220(0x27ec, double:5.0494E-320)
            r4.<init>(r5)
            long r5 = r8.HU
            r4.ant = r5
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L3f
            r4.asv = r2
        L3f:
            long r0 = (long) r9
            r4.asw = r0
            java.lang.String r9 = r8.HR
            r4.HR = r9
            java.lang.String r9 = r8.HS
            r4.HS = r9
            com.kwad.sdk.core.report.i.a(r4)
            return
    }

    public static com.kwad.components.core.a.a md() {
            com.kwad.components.core.a.a r0 = com.kwad.components.core.a.a.a.mf()
            return r0
    }

    private void me() {
            r4 = this;
            r0 = 0
            r4.HW = r0
            long r0 = r4.period
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto Lc
            return
        Lc:
            java.util.Timer r0 = r4.HV
            if (r0 == 0) goto L13
            r0.cancel()
        L13:
            r0 = 3
            r4.aj(r0)
            return
    }

    public final void eX() {
            r8 = this;
            boolean r0 = r8.HW
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r8.HW = r0
            long r1 = r8.period
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto L11
            return
        L11:
            java.util.Timer r1 = new java.util.Timer
            r1.<init>()
            r8.HV = r1
            r8.aj(r0)
            com.kwad.components.core.a.a$2 r3 = new com.kwad.components.core.a.a$2
            r3.<init>(r8)
            java.util.Timer r2 = r8.HV     // Catch: java.lang.Throwable -> L29
            long r4 = r8.period     // Catch: java.lang.Throwable -> L29
            long r6 = r8.period     // Catch: java.lang.Throwable -> L29
            r2.schedule(r3, r4, r6)     // Catch: java.lang.Throwable -> L29
        L29:
            return
    }
}
