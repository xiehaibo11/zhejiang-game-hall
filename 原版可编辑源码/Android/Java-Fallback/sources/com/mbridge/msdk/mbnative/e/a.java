package com.mbridge.msdk.mbnative.e;

public class a {
    private com.mbridge.msdk.mbnative.controller.NativeController a;
    private android.os.Handler b;
    private com.mbridge.msdk.mbnative.c.a c;
    private com.mbridge.msdk.out.NativeListener.NativeTrackingListener d;


    public a() {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.b = r0
            return
    }

    public a(com.mbridge.msdk.mbnative.c.a r3, com.mbridge.msdk.out.NativeListener.NativeTrackingListener r4) {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.b = r0
            r2.c = r3
            r2.d = r4
            return
    }

    private void a(int r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.mbnative.controller.NativeController r0 = r1.a
            if (r0 == 0) goto L2f
            com.mbridge.msdk.mbnative.c.a r0 = r1.c
            if (r0 == 0) goto L23
            boolean r0 = r0.a()
            if (r0 == 0) goto L23
            boolean r2 = com.mbridge.msdk.foundation.tools.ae.b()
            if (r2 == 0) goto L18
            r1.f()
            goto L2f
        L18:
            android.os.Handler r2 = r1.b
            com.mbridge.msdk.mbnative.e.a$1 r3 = new com.mbridge.msdk.mbnative.e.a$1
            r3.<init>(r1)
            r2.post(r3)
            goto L2f
        L23:
            com.mbridge.msdk.mbnative.c.a r0 = r1.c
            if (r0 == 0) goto L2a
            r0.b()
        L2a:
            com.mbridge.msdk.mbnative.controller.NativeController r0 = r1.a
            r0.a(r2, r3)
        L2f:
            return
    }

    static void a(com.mbridge.msdk.mbnative.e.a r0) {
            r0.f()
            return
    }

    private void f() {
            r2 = this;
            com.mbridge.msdk.mbnative.c.a r0 = r2.c
            java.lang.String r1 = "current request is loading"
            r0.onAdLoadError(r1)
            com.mbridge.msdk.mbnative.c.a r0 = r2.c
            r0.b()
            return
    }

    public static void preload(java.util.Map<java.lang.String, java.lang.Object> r2, int r3, com.mbridge.msdk.out.AdMobClickListener r4) {
            java.lang.String r0 = "NativeProvider"
            java.lang.String r1 = "native provider preload"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            com.mbridge.msdk.mbnative.controller.b r0 = new com.mbridge.msdk.mbnative.controller.b
            r0.<init>()
            r0.a(r2, r3, r4)
            return
    }

    public final void a() {
            r2 = this;
            r0 = 0
            java.lang.String r1 = ""
            r2.a(r0, r1)
            return
    }

    public final void a(android.content.Context r3, android.content.res.Resources r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            com.mbridge.msdk.mbnative.controller.NativeController r4 = new com.mbridge.msdk.mbnative.controller.NativeController
            com.mbridge.msdk.mbnative.c.a r0 = r2.c
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r2.d
            r4.<init>(r0, r1, r5, r3)
            r2.a = r4
            return
    }

    public final void a(android.view.View r3, com.mbridge.msdk.out.Campaign r4) {
            r2 = this;
            java.lang.String r0 = "NativeProvider"
            java.lang.String r1 = "native provider registerView"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            com.mbridge.msdk.mbnative.controller.NativeController r0 = r2.a
            if (r0 != 0) goto Lc
            return
        Lc:
            r0.a(r4, r3)
            return
    }

    public final void a(android.view.View r3, java.util.List<android.view.View> r4, com.mbridge.msdk.out.Campaign r5) {
            r2 = this;
            java.lang.String r0 = "NativeProvider"
            java.lang.String r1 = "native provider registerView"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            com.mbridge.msdk.mbnative.controller.NativeController r0 = r2.a
            if (r0 != 0) goto Lc
            return
        Lc:
            r0.a(r5, r3, r4)
            return
    }

    public final void a(com.mbridge.msdk.mbnative.c.a r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void a(com.mbridge.msdk.out.NativeListener.NativeTrackingListener r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void a(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.a(r0, r2)
            return
    }

    public final void b() {
            r2 = this;
            r0 = 1
            java.lang.String r1 = ""
            r2.a(r0, r1)
            return
    }

    public final void b(android.view.View r3, com.mbridge.msdk.out.Campaign r4) {
            r2 = this;
            java.lang.String r0 = "NativeProvider"
            java.lang.String r1 = "native provider unregisterView"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            com.mbridge.msdk.mbnative.controller.NativeController r0 = r2.a
            if (r0 != 0) goto Lc
            return
        Lc:
            r0.b(r4, r3)
            return
    }

    public final void b(android.view.View r3, java.util.List<android.view.View> r4, com.mbridge.msdk.out.Campaign r5) {
            r2 = this;
            java.lang.String r0 = "NativeProvider"
            java.lang.String r1 = "native provider unregisterView"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            com.mbridge.msdk.mbnative.controller.NativeController r0 = r2.a
            if (r0 != 0) goto Lc
            return
        Lc:
            r0.b(r5, r3, r4)
            return
    }

    public final void c() {
            r2 = this;
            com.mbridge.msdk.foundation.tools.x.a()     // Catch: java.lang.Exception -> L4
            goto Lb
        L4:
            java.lang.String r0 = "NativeProvider"
            java.lang.String r1 = "clear cache failed"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        Lb:
            return
    }

    public final void d() {
            r2 = this;
            com.mbridge.msdk.mbnative.controller.NativeController r0 = r2.a     // Catch: java.lang.Exception -> L6
            r0.a()     // Catch: java.lang.Exception -> L6
            goto Ld
        L6:
            java.lang.String r0 = "NativeProvider"
            java.lang.String r1 = "release failed"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        Ld:
            return
    }

    public final java.lang.String e() {
            r1 = this;
            com.mbridge.msdk.mbnative.controller.NativeController r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.b()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }
}
