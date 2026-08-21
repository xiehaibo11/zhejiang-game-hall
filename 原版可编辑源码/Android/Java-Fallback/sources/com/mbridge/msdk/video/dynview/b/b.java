package com.mbridge.msdk.video.dynview.b;

public class b {
    private static volatile com.mbridge.msdk.video.dynview.b.b a;

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.video.dynview.b.b a() {
            com.mbridge.msdk.video.dynview.b.b r0 = com.mbridge.msdk.video.dynview.b.b.a
            if (r0 != 0) goto L19
            java.lang.Class<com.mbridge.msdk.video.dynview.b.b> r0 = com.mbridge.msdk.video.dynview.b.b.class
            monitor-enter(r0)
            com.mbridge.msdk.video.dynview.b.b r1 = com.mbridge.msdk.video.dynview.b.b.a     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            com.mbridge.msdk.video.dynview.b.b r1 = new com.mbridge.msdk.video.dynview.b.b     // Catch: java.lang.Throwable -> L16
            r1.<init>()     // Catch: java.lang.Throwable -> L16
            com.mbridge.msdk.video.dynview.b.b.a = r1     // Catch: java.lang.Throwable -> L16
        L12:
            com.mbridge.msdk.video.dynview.b.b r1 = com.mbridge.msdk.video.dynview.b.b.a     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r1
        L16:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r1
        L19:
            com.mbridge.msdk.video.dynview.b.b r0 = com.mbridge.msdk.video.dynview.b.b.a
            return r0
    }

    public final void a(android.view.View r3, com.mbridge.msdk.video.dynview.c r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            if (r4 != 0) goto L3
            return
        L3:
            int r0 = r4.h()
            r1 = 1
            if (r0 == r1) goto L49
            r1 = 102(0x66, float:1.43E-43)
            if (r0 == r1) goto L40
            r1 = 202(0xca, float:2.83E-43)
            if (r0 == r1) goto L40
            r1 = 302(0x12e, float:4.23E-43)
            if (r0 == r1) goto L40
            r1 = 802(0x322, float:1.124E-42)
            if (r0 == r1) goto L40
            r1 = 904(0x388, float:1.267E-42)
            if (r0 == r1) goto L40
            r1 = 3
            if (r0 == r1) goto L37
            r1 = 4
            if (r0 == r1) goto L2e
            r3 = 5
            if (r0 == r3) goto L28
            goto L51
        L28:
            com.mbridge.msdk.video.dynview.j.b r3 = new com.mbridge.msdk.video.dynview.j.b
            r3.<init>()
            goto L51
        L2e:
            com.mbridge.msdk.video.dynview.j.b r0 = new com.mbridge.msdk.video.dynview.j.b
            r0.<init>()
            r0.b(r3, r4, r5)
            goto L51
        L37:
            com.mbridge.msdk.video.dynview.j.b r5 = new com.mbridge.msdk.video.dynview.j.b
            r5.<init>()
            r5.a(r3, r4)
            goto L51
        L40:
            com.mbridge.msdk.video.dynview.j.b r0 = new com.mbridge.msdk.video.dynview.j.b
            r0.<init>()
            r0.a(r3, r4, r5)
            goto L51
        L49:
            com.mbridge.msdk.video.dynview.j.b r4 = new com.mbridge.msdk.video.dynview.j.b
            r4.<init>()
            r4.a(r3, r5)
        L51:
            return
    }
}
