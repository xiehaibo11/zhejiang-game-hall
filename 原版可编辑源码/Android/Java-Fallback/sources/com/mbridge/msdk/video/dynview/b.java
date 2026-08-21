package com.mbridge.msdk.video.dynview;

public class b {
    private static volatile com.mbridge.msdk.video.dynview.b b;
    public java.util.Map<java.lang.String, java.lang.ref.SoftReference<android.view.View>> a;

    private b() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            return
    }

    public static com.mbridge.msdk.video.dynview.b a() {
            com.mbridge.msdk.video.dynview.b r0 = com.mbridge.msdk.video.dynview.b.b
            if (r0 != 0) goto L19
            java.lang.Class<com.mbridge.msdk.video.dynview.b> r0 = com.mbridge.msdk.video.dynview.b.class
            monitor-enter(r0)
            com.mbridge.msdk.video.dynview.b r1 = com.mbridge.msdk.video.dynview.b.b     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            com.mbridge.msdk.video.dynview.b r1 = new com.mbridge.msdk.video.dynview.b     // Catch: java.lang.Throwable -> L16
            r1.<init>()     // Catch: java.lang.Throwable -> L16
            com.mbridge.msdk.video.dynview.b.b = r1     // Catch: java.lang.Throwable -> L16
        L12:
            com.mbridge.msdk.video.dynview.b r1 = com.mbridge.msdk.video.dynview.b.b     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r1
        L16:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r1
        L19:
            com.mbridge.msdk.video.dynview.b r0 = com.mbridge.msdk.video.dynview.b.b
            return r0
    }

    public final void a(com.mbridge.msdk.video.dynview.c r3, com.mbridge.msdk.video.dynview.e.g r4) {
            r2 = this;
            com.mbridge.msdk.video.dynview.h.a r0 = new com.mbridge.msdk.video.dynview.h.a
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.<init>(r3, r4, r1)
            return
    }
}
