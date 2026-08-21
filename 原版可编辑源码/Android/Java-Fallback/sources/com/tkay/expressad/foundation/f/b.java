package com.tkay.expressad.foundation.f;

public final class b {
    public static int a = -2;
    public static int b = -2;
    public static volatile boolean c;
    private final java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.foundation.f.a.a> d;
    private final android.widget.RelativeLayout.LayoutParams e;
    private com.tkay.expressad.d.a f;

    static class 1 {
    }

    static class a {
        private static final com.tkay.expressad.foundation.f.b a = null;

        static {
                com.tkay.expressad.foundation.f.b r0 = new com.tkay.expressad.foundation.f.b
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.foundation.f.b.a.a = r0
                return
        }

        a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.tkay.expressad.foundation.f.b a() {
                com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a.a
                return r0
        }
    }

    static {
            return
    }

    private b() {
            r3 = this;
            r3.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r3.d = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            int r1 = com.tkay.expressad.foundation.f.b.a
            int r2 = com.tkay.expressad.foundation.f.b.b
            r0.<init>(r1, r2)
            r3.e = r0
            return
    }

    b(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.app.Activity a(android.content.Context r4) {
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r0 = r0.g()
            r1 = 0
            boolean r2 = r0 instanceof android.app.Activity     // Catch: java.lang.Exception -> L3f
            if (r2 == 0) goto L10
            android.app.Activity r0 = (android.app.Activity) r0     // Catch: java.lang.Exception -> L3f
            goto L11
        L10:
            r0 = r1
        L11:
            boolean r2 = r4 instanceof android.app.Activity     // Catch: java.lang.Exception -> L3c
            r3 = 17
            if (r2 == 0) goto L27
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L3c
            if (r2 < r3) goto L24
            r2 = r4
            android.app.Activity r2 = (android.app.Activity) r2     // Catch: java.lang.Exception -> L3c
            boolean r2 = r2.isDestroyed()     // Catch: java.lang.Exception -> L3c
            if (r2 != 0) goto L27
        L24:
            android.app.Activity r4 = (android.app.Activity) r4     // Catch: java.lang.Exception -> L3c
            r0 = r4
        L27:
            if (r0 == 0) goto L43
            boolean r4 = r0.isFinishing()     // Catch: java.lang.Exception -> L3c
            if (r4 != 0) goto L43
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L3c
            if (r4 < r3) goto L3a
            boolean r4 = r0.isDestroyed()     // Catch: java.lang.Exception -> L3c
            if (r4 == 0) goto L3a
            goto L43
        L3a:
            r1 = r0
            goto L43
        L3c:
            r4 = move-exception
            r1 = r0
            goto L40
        L3f:
            r4 = move-exception
        L40:
            r4.printStackTrace()
        L43:
            return r1
    }

    public static com.tkay.expressad.foundation.f.b a() {
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a.a()
            return r0
    }

    private void a(java.lang.String r10, int r11, int r12, int r13, float r14, float r15, float r16, java.lang.String r17, java.lang.String r18) {
            r9 = this;
            com.tkay.expressad.foundation.f.a.a r0 = r9.a(r10)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            r2 = r14
            int r2 = com.tkay.expressad.foundation.h.t.b(r1, r14)
            r3 = r15
            int r3 = com.tkay.expressad.foundation.h.t.b(r1, r15)
            r4 = r11
            float r4 = (float) r4
            int r4 = com.tkay.expressad.foundation.h.t.b(r1, r4)
            r5 = r12
            float r5 = (float) r5
            int r5 = com.tkay.expressad.foundation.h.t.b(r1, r5)
            r6 = r13
            float r6 = (float) r6
            int r6 = com.tkay.expressad.foundation.h.t.b(r1, r6)
            r1 = r2
            r2 = r3
            r3 = r4
            r4 = r5
            r5 = r6
            r6 = r16
            r7 = r17
            r8 = r18
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    private void a(java.lang.String r7, int r8, android.view.ViewGroup r9) {
            r6 = this;
            com.tkay.expressad.foundation.f.a.a r0 = r6.a(r7)
            com.tkay.expressad.widget.FeedBackButton r1 = r0.c()
            if (r1 == 0) goto L1f
            r0.a(r8)
            if (r8 != 0) goto L1f
            com.tkay.core.common.b.m r8 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r8.f()
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r3 = r9
            r0.a(r1, r2, r3, r4, r5)
        L1f:
            return
    }

    private void a(java.lang.String r7, android.content.Context r8, android.view.ViewGroup r9, android.view.ViewGroup.LayoutParams r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    public static boolean a(android.content.Context r0, com.tkay.expressad.widget.a.a r1) {
            if (r1 != 0) goto L4
            r0 = 0
            return r0
        L4:
            boolean r0 = b(r0, r1)
            return r0
    }

    private static boolean b(android.content.Context r3, com.tkay.expressad.widget.a.a r4) {
            android.app.Activity r3 = a(r3)
            r0 = 0
            if (r3 == 0) goto L2c
            if (r4 == 0) goto L2c
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 17
            if (r1 < r2) goto L16
            boolean r1 = r3.isDestroyed()
            if (r1 == 0) goto L16
            return r0
        L16:
            boolean r1 = r4.isShowing()     // Catch: java.lang.Exception -> L28
            if (r1 != 0) goto L2c
            boolean r3 = r3.isFinishing()     // Catch: java.lang.Exception -> L28
            if (r3 != 0) goto L2c
            r4.show()     // Catch: java.lang.Exception -> L28
            r3 = 1
            r0 = r3
            goto L2c
        L28:
            r3 = move-exception
            r3.printStackTrace()
        L2c:
            return r0
    }

    private void c(java.lang.String r2, int r3) {
            r1 = this;
            com.tkay.expressad.foundation.f.a.a r2 = r1.a(r2)
            r0 = 1
            if (r3 != r0) goto Lb
            r2.b()
            return
        Lb:
            r2.a()
            return
    }

    private com.tkay.expressad.foundation.f.a.a d(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Le
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.e()
        Le:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.foundation.f.a.a> r0 = r1.d
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L1f
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.foundation.f.a.a> r0 = r1.d
            java.lang.Object r2 = r0.get(r2)
            com.tkay.expressad.foundation.f.a.a r2 = (com.tkay.expressad.foundation.f.a.a) r2
            goto L20
        L1f:
            r2 = 0
        L20:
            return r2
    }

    private void e(java.lang.String r1) {
            r0 = this;
            com.tkay.expressad.foundation.f.a.a r1 = r0.a(r1)
            r1.e()
            return
    }

    public final com.tkay.expressad.foundation.f.a.a a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Le
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r3 = r3.e()
        Le:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.foundation.f.a.a> r0 = r2.d
            boolean r0 = r0.containsKey(r3)
            if (r0 != 0) goto L21
            com.tkay.expressad.foundation.f.a.a r0 = new com.tkay.expressad.foundation.f.a.a
            r0.<init>(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.foundation.f.a.a> r1 = r2.d
            r1.put(r3, r0)
            goto L29
        L21:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.foundation.f.a.a> r0 = r2.d
            java.lang.Object r0 = r0.get(r3)
            com.tkay.expressad.foundation.f.a.a r0 = (com.tkay.expressad.foundation.f.a.a) r0
        L29:
            if (r0 != 0) goto L35
            com.tkay.expressad.foundation.f.a.a r0 = new com.tkay.expressad.foundation.f.a.a
            r0.<init>(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.foundation.f.a.a> r1 = r2.d
            r1.put(r3, r0)
        L35:
            return r0
    }

    public final void a(java.lang.String r1, int r2) {
            r0 = this;
            com.tkay.expressad.foundation.f.a.a r1 = r0.a(r1)
            r1.b(r2)
            return
    }

    public final void a(java.lang.String r3, android.content.Context r4, android.view.ViewGroup r5, android.view.ViewGroup.LayoutParams r6, com.tkay.expressad.foundation.f.a r7) {
            r2 = this;
            boolean r0 = r2.b()
            if (r0 != 0) goto L7
            return
        L7:
            com.tkay.expressad.foundation.f.a.a r0 = r2.a(r3)
            if (r7 == 0) goto L15
            com.tkay.expressad.foundation.f.a.a$a r1 = new com.tkay.expressad.foundation.f.a.a$a
            r1.<init>(r3, r7)
            r0.a(r1)
        L15:
            com.tkay.expressad.widget.FeedBackButton r3 = r0.c()
            if (r3 == 0) goto L57
            if (r6 != 0) goto L32
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            android.content.Context r6 = r6.f()
            r7 = 1092616192(0x41200000, float:10.0)
            int r6 = com.tkay.expressad.foundation.h.t.b(r6, r7)
            android.widget.RelativeLayout$LayoutParams r7 = r2.e
            r7.setMargins(r6, r6, r6, r6)
            android.widget.RelativeLayout$LayoutParams r6 = r2.e
        L32:
            android.view.ViewParent r7 = r3.getParent()
            android.view.ViewGroup r7 = (android.view.ViewGroup) r7
            if (r7 == 0) goto L3d
            r7.removeView(r3)
        L3d:
            android.app.Activity r4 = a(r4)
            if (r4 == 0) goto L4f
            if (r5 != 0) goto L4f
            r5 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r4 = r4.findViewById(r5)
            r5 = r4
            android.view.ViewGroup r5 = (android.view.ViewGroup) r5
        L4f:
            if (r5 == 0) goto L57
            r5.removeView(r3)
            r5.addView(r3, r6)
        L57:
            return
    }

    public final void a(java.lang.String r1, com.tkay.expressad.foundation.d.c r2) {
            r0 = this;
            com.tkay.expressad.foundation.f.a.a r1 = r0.a(r1)
            r1.a(r2)
            return
    }

    public final void a(java.lang.String r3, com.tkay.expressad.foundation.f.a r4) {
            r2 = this;
            com.tkay.expressad.foundation.f.a.a r0 = r2.a(r3)
            com.tkay.expressad.foundation.f.a.a$a r1 = new com.tkay.expressad.foundation.f.a.a$a
            r1.<init>(r3, r4)
            r0.a(r1)
            return
    }

    public final void a(java.lang.String r1, com.tkay.expressad.widget.FeedBackButton r2) {
            r0 = this;
            com.tkay.expressad.foundation.f.a.a r1 = r0.a(r1)
            r1.a(r2)
            return
    }

    public final com.tkay.expressad.widget.FeedBackButton b(java.lang.String r1) {
            r0 = this;
            com.tkay.expressad.foundation.f.a.a r1 = r0.a(r1)
            com.tkay.expressad.widget.FeedBackButton r1 = r1.c()
            return r1
    }

    public final void b(java.lang.String r1, int r2) {
            r0 = this;
            com.tkay.expressad.foundation.f.a.a r1 = r0.a(r1)
            r1.c(r2)
            return
    }

    public final boolean b() {
            r1 = this;
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.c()
            r1.f = r0
            int r0 = r0.K()
            if (r0 == 0) goto L11
            r0 = 1
            return r0
        L11:
            r0 = 0
            return r0
    }

    public final void c(java.lang.String r4) {
            r3 = this;
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L2c
            if (r1 == 0) goto L10
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L2c
            java.lang.String r1 = r1.e()     // Catch: java.lang.Exception -> L2c
            goto L11
        L10:
            r1 = r4
        L11:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.foundation.f.a.a> r2 = r3.d     // Catch: java.lang.Exception -> L2c
            boolean r2 = r2.containsKey(r1)     // Catch: java.lang.Exception -> L2c
            if (r2 == 0) goto L21
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.foundation.f.a.a> r0 = r3.d     // Catch: java.lang.Exception -> L2c
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L2c
            com.tkay.expressad.foundation.f.a.a r0 = (com.tkay.expressad.foundation.f.a.a) r0     // Catch: java.lang.Exception -> L2c
        L21:
            if (r0 == 0) goto L26
            r0.d()     // Catch: java.lang.Exception -> L2c
        L26:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.foundation.f.a.a> r0 = r3.d     // Catch: java.lang.Exception -> L2c
            r0.remove(r4)     // Catch: java.lang.Exception -> L2c
            return
        L2c:
            r4 = move-exception
            r4.printStackTrace()
            return
    }
}
