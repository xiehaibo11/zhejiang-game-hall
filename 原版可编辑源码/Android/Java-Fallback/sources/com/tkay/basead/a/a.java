package com.tkay.basead.a;

public final class a {
    com.tkay.basead.d a;
    com.tkay.core.common.l.a.c b;
    private final java.lang.String c;
    private android.view.View d;
    private com.tkay.core.common.f.i e;
    private com.tkay.basead.a.a.a f;
    private android.app.Activity g;
    private boolean h;
    private android.app.Application.ActivityLifecycleCallbacks i;





    public interface a {
        void a(int r1);
    }

    public a(android.view.View r3, com.tkay.core.common.f.i r4, com.tkay.basead.a.a.a r5) {
            r2 = this;
            r2.<init>()
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r2.c = r0
            r0 = 0
            r2.g = r0
            r0 = 0
            r2.h = r0
            r2.d = r3
            r2.e = r4
            r2.f = r5
            android.content.Context r3 = r3.getContext()
            android.content.Context r3 = r3.getApplicationContext()
            boolean r4 = r3 instanceof android.app.Application
            if (r4 != 0) goto L2d
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.f()
        L2d:
            com.tkay.basead.a.a$1 r4 = new com.tkay.basead.a.a$1
            r4.<init>(r2, r3)
            r2.i = r4
            android.app.Application r3 = (android.app.Application) r3     // Catch: java.lang.Exception -> L3a
            r3.registerActivityLifecycleCallbacks(r4)     // Catch: java.lang.Exception -> L3a
            goto L49
        L3a:
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            java.lang.String r3 = r3.q()
            java.lang.String r4 = "Error"
            java.lang.String r5 = "Error, cannot registerActivityLifecycleCallbacks here!"
            com.tkay.core.common.k.c.a(r4, r5, r3)
        L49:
            com.tkay.core.common.f.i r3 = r2.e
            com.tkay.core.common.f.j r3 = r3.m
            com.tkay.basead.d r4 = new com.tkay.basead.d
            int r3 = r3.G()
            long r0 = (long) r3
            com.tkay.basead.a.a$2 r3 = new com.tkay.basead.a.a$2
            r3.<init>(r2)
            r4.<init>(r0, r3)
            r2.a = r4
            return
    }

    static android.app.Activity a(com.tkay.basead.a.a r0) {
            android.app.Activity r0 = r0.g
            return r0
    }

    static android.app.Activity a(com.tkay.basead.a.a r0, android.app.Activity r1) {
            r0.g = r1
            return r1
    }

    static android.app.Application.ActivityLifecycleCallbacks a(com.tkay.basead.a.a r0, android.app.Application.ActivityLifecycleCallbacks r1) {
            r0.i = r1
            return r1
    }

    private void a(int r5) {
            r4 = this;
            r0 = 0
            r1 = 2
            r2 = 1
            if (r5 != r1) goto L3a
            com.tkay.core.common.f.i r3 = r4.e
            int r3 = r3.j
            if (r3 == 0) goto L20
            if (r3 == r1) goto L20
            android.view.View r3 = r4.d
            if (r3 == 0) goto L3b
            android.view.ViewParent r3 = r3.getParent()
            if (r3 == 0) goto L3b
            android.view.View r3 = r4.d
            boolean r3 = r3.isShown()
            if (r3 == 0) goto L3b
            goto L3a
        L20:
            android.view.View r3 = r4.d
            if (r3 == 0) goto L3b
            android.view.ViewParent r3 = r3.getParent()
            if (r3 == 0) goto L3b
            android.view.View r3 = r4.d
            boolean r3 = r3.isShown()
            if (r3 == 0) goto L3b
            android.view.View r3 = r4.d
            boolean r3 = com.tkay.core.common.l.u.b(r3)
            if (r3 == 0) goto L3b
        L3a:
            r0 = r2
        L3b:
            if (r0 == 0) goto L41
            r4.b(r5)
            return
        L41:
            com.tkay.core.common.f.i r0 = r4.e
            int r0 = r0.j
            if (r0 == r1) goto L4d
            com.tkay.core.common.f.i r0 = r4.e
            int r0 = r0.j
            if (r0 != 0) goto L69
        L4d:
            com.tkay.basead.a.a$3 r0 = new com.tkay.basead.a.a$3
            r0.<init>(r4, r5)
            com.tkay.core.common.l.a.c r5 = r4.b
            if (r5 != 0) goto L62
            com.tkay.core.common.l.a.c r5 = new com.tkay.core.common.l.a.c
            android.view.View r1 = r4.d
            r1.getContext()
            r5.<init>()
            r4.b = r5
        L62:
            com.tkay.core.common.l.a.c r5 = r4.b
            android.view.View r1 = r4.d
            r5.a(r1, r0)
        L69:
            return
    }

    static void a(com.tkay.basead.a.a r0, int r1) {
            r0.b(r1)
            return
    }

    private void b(int r3) {
            r2 = this;
            com.tkay.basead.a.a$a r0 = r2.f
            if (r0 == 0) goto L10
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.basead.a.a$4 r1 = new com.tkay.basead.a.a$4
            r1.<init>(r2, r3)
            r0.a(r1)
        L10:
            return
    }

    static boolean b(com.tkay.basead.a.a r1) {
            com.tkay.core.common.f.i r1 = r1.e
            int r1 = r1.j
            r0 = 4
            if (r1 != r0) goto L9
            r1 = 1
            return r1
        L9:
            r1 = 0
            return r1
    }

    static void c(com.tkay.basead.a.a r1) {
            boolean r0 = r1.h
            if (r0 == 0) goto L7
            r1.a()
        L7:
            return
    }

    static android.app.Application.ActivityLifecycleCallbacks d(com.tkay.basead.a.a r0) {
            android.app.Application$ActivityLifecycleCallbacks r0 = r0.i
            return r0
    }

    private boolean d() {
            r2 = this;
            com.tkay.core.common.f.i r0 = r2.e
            int r0 = r0.j
            r1 = 4
            if (r0 != r1) goto L9
            r0 = 1
            return r0
        L9:
            r0 = 0
            return r0
    }

    private void e() {
            r1 = this;
            boolean r0 = r1.h
            if (r0 == 0) goto L7
            r1.a()
        L7:
            return
    }

    static void e(com.tkay.basead.a.a r1) {
            r0 = 2
            r1.a(r0)
            return
    }

    static com.tkay.basead.a.a.a f(com.tkay.basead.a.a r0) {
            com.tkay.basead.a.a$a r0 = r0.f
            return r0
    }

    private void f() {
            r1 = this;
            com.tkay.basead.d r0 = r1.a
            r0.b()
            return
    }

    private static void g(com.tkay.basead.a.a r0) {
            com.tkay.basead.d r0 = r0.a
            r0.b()
            return
    }

    public final void a() {
            r3 = this;
            r0 = 1
            r3.h = r0
            com.tkay.core.common.f.i r0 = r3.e
            com.tkay.core.common.f.j r0 = r0.m
            int r1 = r0.F()
            r2 = 2
            if (r1 != r2) goto L19
            int r0 = r0.G()
            if (r0 < 0) goto L19
            com.tkay.basead.d r0 = r3.a
            r0.a()
        L19:
            return
    }

    public final void b() {
            r2 = this;
            android.app.Application$ActivityLifecycleCallbacks r0 = r2.i
            if (r0 == 0) goto L16
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            android.app.Application r0 = (android.app.Application) r0
            android.app.Application$ActivityLifecycleCallbacks r1 = r2.i
            r0.unregisterActivityLifecycleCallbacks(r1)
            r0 = 0
            r2.i = r0
        L16:
            com.tkay.basead.d r0 = r2.a
            r0.c()
            com.tkay.core.common.l.a.c r0 = r2.b
            if (r0 == 0) goto L22
            r0.b()
        L22:
            return
    }

    public final void c() {
            r2 = this;
            com.tkay.core.common.f.i r0 = r2.e
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.F()
            r1 = 3
            if (r0 != r1) goto Le
            r2.a(r1)
        Le:
            return
    }
}
