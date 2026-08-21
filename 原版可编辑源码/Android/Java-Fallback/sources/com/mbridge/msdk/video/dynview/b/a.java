package com.mbridge.msdk.video.dynview.b;

public class a {
    private static volatile com.mbridge.msdk.video.dynview.b.a b;
    public com.mbridge.msdk.video.dynview.d.a a;

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.video.dynview.b.a a() {
            com.mbridge.msdk.video.dynview.b.a r0 = com.mbridge.msdk.video.dynview.b.a.b
            if (r0 != 0) goto L19
            java.lang.Class<com.mbridge.msdk.video.dynview.b.a> r0 = com.mbridge.msdk.video.dynview.b.a.class
            monitor-enter(r0)
            com.mbridge.msdk.video.dynview.b.a r1 = com.mbridge.msdk.video.dynview.b.a.b     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            com.mbridge.msdk.video.dynview.b.a r1 = new com.mbridge.msdk.video.dynview.b.a     // Catch: java.lang.Throwable -> L16
            r1.<init>()     // Catch: java.lang.Throwable -> L16
            com.mbridge.msdk.video.dynview.b.a.b = r1     // Catch: java.lang.Throwable -> L16
        L12:
            com.mbridge.msdk.video.dynview.b.a r1 = com.mbridge.msdk.video.dynview.b.a.b     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r1
        L16:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r1
        L19:
            com.mbridge.msdk.video.dynview.b.a r0 = com.mbridge.msdk.video.dynview.b.a.b
            return r0
    }

    public final void a(android.view.View r3, com.mbridge.msdk.video.dynview.c r4, java.util.Map r5, com.mbridge.msdk.video.dynview.e.e r6) {
            r2 = this;
            int r0 = r4.h()
            r1 = 1
            if (r0 == r1) goto L45
            r1 = 102(0x66, float:1.43E-43)
            if (r0 == r1) goto L3c
            r1 = 202(0xca, float:2.83E-43)
            if (r0 == r1) goto L3c
            r1 = 302(0x12e, float:4.23E-43)
            if (r0 == r1) goto L3c
            r1 = 802(0x322, float:1.124E-42)
            if (r0 == r1) goto L3c
            r1 = 904(0x388, float:1.267E-42)
            if (r0 == r1) goto L3c
            r1 = 4
            if (r0 == r1) goto L33
            r1 = 5
            if (r0 == r1) goto L2a
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r6.a(r3, r4)
            goto L51
        L2a:
            com.mbridge.msdk.video.dynview.j.a r0 = new com.mbridge.msdk.video.dynview.j.a
            r0.<init>()
            r0.c(r4, r3, r5, r6)
            goto L51
        L33:
            com.mbridge.msdk.video.dynview.j.a r5 = new com.mbridge.msdk.video.dynview.j.a
            r5.<init>()
            r5.a(r4, r3, r6)
            goto L51
        L3c:
            com.mbridge.msdk.video.dynview.j.a r0 = new com.mbridge.msdk.video.dynview.j.a
            r0.<init>()
            r0.b(r4, r3, r5, r6)
            goto L51
        L45:
            com.mbridge.msdk.video.dynview.j.a r0 = new com.mbridge.msdk.video.dynview.j.a
            r0.<init>()
            r0.a(r4, r3, r5, r6)
            com.mbridge.msdk.video.dynview.d.a r3 = r0.a
            r2.a = r3
        L51:
            return
    }

    public final void b() {
            r1 = this;
            com.mbridge.msdk.video.dynview.d.a r0 = r1.a
            if (r0 == 0) goto L7
            r0.c()
        L7:
            return
    }
}
