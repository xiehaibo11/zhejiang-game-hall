package com.mbridge.msdk.e;

public class b {

    static class 1 {
    }

    static class a {
        static com.mbridge.msdk.e.b a;

        static {
                com.mbridge.msdk.e.b r0 = new com.mbridge.msdk.e.b
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.e.b.a.a = r0
                return
        }
    }

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    b(com.mbridge.msdk.e.b.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.e.b getInstance() {
            com.mbridge.msdk.e.b r0 = com.mbridge.msdk.e.b.a.a
            return r0
    }

    public void addInterstitialList(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.e.a r0 = com.mbridge.msdk.e.a.a.a
            r0.b(r2, r3)
            return
    }

    public void addRewardList(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.e.a r0 = com.mbridge.msdk.e.a.a.a
            r0.a(r2, r3)
            return
    }

    public void start() {
            r4 = this;
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.a r0 = r0.b(r1)
            if (r0 != 0) goto L1a
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r0.b()
        L1a:
            int r0 = r0.q()
            if (r0 <= 0) goto L28
            com.mbridge.msdk.e.a r1 = com.mbridge.msdk.e.a.a.a
            int r0 = r0 * 1000
            long r2 = (long) r0
            r1.a(r2)
        L28:
            return
    }
}
