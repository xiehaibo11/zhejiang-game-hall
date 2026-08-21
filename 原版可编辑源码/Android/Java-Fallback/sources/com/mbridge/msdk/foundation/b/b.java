package com.mbridge.msdk.foundation.b;

public final class b {
    public static int a = -2;
    public static int b = -2;
    public static volatile boolean c;
    private final java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.b.a.a> d;
    private final android.widget.RelativeLayout.LayoutParams e;
    private com.mbridge.msdk.c.a f;

    static class 1 {
    }

    static class a {
        private static final com.mbridge.msdk.foundation.b.b a = null;

        static {
                com.mbridge.msdk.foundation.b.b r0 = new com.mbridge.msdk.foundation.b.b
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.b.b.a.a = r0
                return
        }

        static com.mbridge.msdk.foundation.b.b a() {
                com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a.a
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
            int r1 = com.mbridge.msdk.foundation.b.b.a
            int r2 = com.mbridge.msdk.foundation.b.b.b
            r0.<init>(r1, r2)
            r3.e = r0
            return
    }

    b(com.mbridge.msdk.foundation.b.b.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.b.b a() {
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a.a()
            return r0
    }

    private boolean a(android.content.Context r4, com.mbridge.msdk.widget.dialog.MBFeedBackDialog r5) {
            r3 = this;
            android.app.Activity r4 = r3.a(r4)
            r0 = 0
            if (r4 == 0) goto L2c
            if (r5 == 0) goto L2c
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 17
            if (r1 < r2) goto L16
            boolean r1 = r4.isDestroyed()
            if (r1 == 0) goto L16
            return r0
        L16:
            boolean r1 = r5.isShowing()     // Catch: java.lang.Exception -> L28
            if (r1 != 0) goto L2c
            boolean r4 = r4.isFinishing()     // Catch: java.lang.Exception -> L28
            if (r4 != 0) goto L2c
            r5.show()     // Catch: java.lang.Exception -> L28
            r4 = 1
            r0 = r4
            goto L2c
        L28:
            r4 = move-exception
            r4.printStackTrace()
        L2c:
            return r0
    }

    public final android.app.Activity a(android.content.Context r5) {
            r4 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.c()
            r1 = 0
            boolean r2 = r0 instanceof android.app.Activity     // Catch: java.lang.Exception -> L62
            if (r2 == 0) goto L10
            android.app.Activity r0 = (android.app.Activity) r0     // Catch: java.lang.Exception -> L62
            goto L11
        L10:
            r0 = r1
        L11:
            boolean r2 = r5 instanceof android.app.Activity     // Catch: java.lang.Exception -> L5f
            r3 = 17
            if (r2 == 0) goto L27
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L5f
            if (r2 < r3) goto L24
            r2 = r5
            android.app.Activity r2 = (android.app.Activity) r2     // Catch: java.lang.Exception -> L5f
            boolean r2 = r2.isDestroyed()     // Catch: java.lang.Exception -> L5f
            if (r2 != 0) goto L27
        L24:
            android.app.Activity r5 = (android.app.Activity) r5     // Catch: java.lang.Exception -> L5f
            r0 = r5
        L27:
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L5f
            java.lang.ref.WeakReference r5 = r5.a()     // Catch: java.lang.Exception -> L5f
            if (r5 == 0) goto L4a
            java.lang.Object r5 = r5.get()     // Catch: java.lang.Exception -> L5f
            android.app.Activity r5 = (android.app.Activity) r5     // Catch: java.lang.Exception -> L5f
            if (r5 == 0) goto L4a
            boolean r2 = r5.isFinishing()     // Catch: java.lang.Exception -> L5f
            if (r2 != 0) goto L4a
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L5f
            if (r2 < r3) goto L49
            boolean r2 = r5.isDestroyed()     // Catch: java.lang.Exception -> L5f
            if (r2 != 0) goto L4a
        L49:
            r0 = r5
        L4a:
            if (r0 == 0) goto L66
            boolean r5 = r0.isFinishing()     // Catch: java.lang.Exception -> L5f
            if (r5 != 0) goto L66
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L5f
            if (r5 < r3) goto L5d
            boolean r5 = r0.isDestroyed()     // Catch: java.lang.Exception -> L5f
            if (r5 == 0) goto L5d
            goto L66
        L5d:
            r1 = r0
            goto L66
        L5f:
            r5 = move-exception
            r1 = r0
            goto L63
        L62:
            r5 = move-exception
        L63:
            r5.printStackTrace()
        L66:
            return r1
    }

    public final com.mbridge.msdk.foundation.b.a.a a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Le
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r3.k()
        Le:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.b.a.a> r0 = r2.d
            boolean r0 = r0.containsKey(r3)
            if (r0 != 0) goto L21
            com.mbridge.msdk.foundation.b.a.a r0 = new com.mbridge.msdk.foundation.b.a.a
            r0.<init>(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.b.a.a> r1 = r2.d
            r1.put(r3, r0)
            goto L29
        L21:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.b.a.a> r0 = r2.d
            java.lang.Object r0 = r0.get(r3)
            com.mbridge.msdk.foundation.b.a.a r0 = (com.mbridge.msdk.foundation.b.a.a) r0
        L29:
            if (r0 != 0) goto L35
            com.mbridge.msdk.foundation.b.a.a r0 = new com.mbridge.msdk.foundation.b.a.a
            r0.<init>(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.b.a.a> r1 = r2.d
            r1.put(r3, r0)
        L35:
            return r0
    }

    public final void a(java.lang.String r2, int r3) {
            r1 = this;
            com.mbridge.msdk.foundation.b.a.a r2 = r1.a(r2)
            r0 = 1
            if (r3 != r0) goto Lb
            r2.b()
            goto Le
        Lb:
            r2.a()
        Le:
            return
    }

    public final void a(java.lang.String r12, int r13, int r14, int r15, float r16, float r17, float r18, java.lang.String r19, java.lang.String r20, float r21, org.json.JSONArray r22) {
            r11 = this;
            com.mbridge.msdk.foundation.b.a.a r0 = r11.a(r12)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r2 = r16
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r3 = r17
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r1, r3)
            r4 = r13
            float r4 = (float) r4
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r1, r4)
            r5 = r14
            float r5 = (float) r5
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r1, r5)
            r6 = r15
            float r6 = (float) r6
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r1, r6)
            r1 = r2
            r2 = r3
            r3 = r4
            r4 = r5
            r5 = r6
            r6 = r18
            r7 = r19
            r8 = r20
            r9 = r21
            r10 = r22
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return
    }

    public final void a(java.lang.String r9, int r10, int r11, java.lang.String r12) {
            r8 = this;
            com.mbridge.msdk.foundation.b.a.a r9 = r8.a(r9)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.e()
            java.lang.String r1 = ""
            if (r0 == 0) goto L11
            java.lang.String r2 = r0.getCampaignUnitId()
            goto L12
        L11:
            r2 = r1
        L12:
            int r3 = r9.f()
            int r9 = r9.g()
            boolean r4 = android.text.TextUtils.isEmpty(r12)
            if (r4 != 0) goto L22
            r4 = r12
            goto L23
        L22:
            r4 = r1
        L23:
            if (r0 == 0) goto L2a
            int r12 = r0.getAdType()
            goto L2b
        L2a:
            r12 = 0
        L2b:
            r6 = r12
            r1 = r2
            r2 = r3
            r3 = r9
            r5 = r10
            r7 = r11
            com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public final void a(java.lang.String r7, int r8, android.view.ViewGroup r9) {
            r6 = this;
            com.mbridge.msdk.foundation.b.a.a r0 = r6.a(r7)
            com.mbridge.msdk.widget.FeedBackButton r1 = r0.c()
            if (r1 == 0) goto L1f
            r0.a(r8)
            if (r8 != 0) goto L1f
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r8.j()
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r3 = r9
            r0.a(r1, r2, r3, r4, r5)
        L1f:
            return
    }

    public final void a(java.lang.String r3, android.content.Context r4, android.view.ViewGroup r5, android.view.ViewGroup.LayoutParams r6, com.mbridge.msdk.foundation.b.a r7) {
            r2 = this;
            boolean r0 = r2.b()
            if (r0 != 0) goto L7
            return
        L7:
            com.mbridge.msdk.foundation.b.a.a r0 = r2.a(r3)
            if (r7 == 0) goto L15
            com.mbridge.msdk.foundation.b.a.a$a r1 = new com.mbridge.msdk.foundation.b.a.a$a
            r1.<init>(r3, r7)
            r0.a(r1)
        L15:
            com.mbridge.msdk.widget.FeedBackButton r3 = r0.c()
            if (r3 == 0) goto L57
            if (r6 != 0) goto L32
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r6 = r6.j()
            r7 = 1092616192(0x41200000, float:10.0)
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r6, r7)
            android.widget.RelativeLayout$LayoutParams r7 = r2.e
            r7.setMargins(r6, r6, r6, r6)
            android.widget.RelativeLayout$LayoutParams r6 = r2.e
        L32:
            android.view.ViewParent r7 = r3.getParent()
            android.view.ViewGroup r7 = (android.view.ViewGroup) r7
            if (r7 == 0) goto L3d
            r7.removeView(r3)
        L3d:
            android.app.Activity r4 = r2.a(r4)
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

    public final void a(java.lang.String r3, com.mbridge.msdk.foundation.b.a r4) {
            r2 = this;
            com.mbridge.msdk.foundation.b.a.a r0 = r2.a(r3)
            if (r4 == 0) goto Le
            com.mbridge.msdk.foundation.b.a.a$a r1 = new com.mbridge.msdk.foundation.b.a.a$a
            r1.<init>(r3, r4)
            r0.a(r1)
        Le:
            return
    }

    public final void a(java.lang.String r1, com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            r0 = this;
            com.mbridge.msdk.foundation.b.a.a r1 = r0.a(r1)
            r1.a(r2)
            return
    }

    public final void a(java.lang.String r1, com.mbridge.msdk.widget.FeedBackButton r2) {
            r0 = this;
            com.mbridge.msdk.foundation.b.a.a r1 = r0.a(r1)
            r1.a(r2)
            return
    }

    public final boolean a(java.lang.String r1, android.content.Context r2, com.mbridge.msdk.widget.dialog.MBFeedBackDialog r3) {
            r0 = this;
            if (r3 != 0) goto Lb
            java.lang.String r1 = ""
            java.lang.String r2 = "mbAlertDialog  is null"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)
            r1 = 0
            return r1
        Lb:
            boolean r1 = r0.a(r2, r3)
            return r1
    }

    public final com.mbridge.msdk.widget.FeedBackButton b(java.lang.String r1) {
            r0 = this;
            com.mbridge.msdk.foundation.b.a.a r1 = r0.a(r1)
            com.mbridge.msdk.widget.FeedBackButton r1 = r1.c()
            return r1
    }

    public final void b(java.lang.String r1, int r2) {
            r0 = this;
            com.mbridge.msdk.foundation.b.a.a r1 = r0.a(r1)
            r1.b(r2)
            return
    }

    public final boolean b() {
            r2 = this;
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.a r0 = r0.b(r1)
            r2.f = r0
            if (r0 != 0) goto L1e
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r0.b()
            r2.f = r0
        L1e:
            com.mbridge.msdk.c.a r0 = r2.f
            int r0 = r0.aI()
            if (r0 == 0) goto L28
            r0 = 1
            goto L29
        L28:
            r0 = 0
        L29:
            return r0
    }

    public final void c(java.lang.String r4) {
            r3 = this;
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L2f
            if (r1 == 0) goto L10
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L2f
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L2f
            goto L11
        L10:
            r1 = r4
        L11:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.b.a.a> r2 = r3.d     // Catch: java.lang.Exception -> L2f
            boolean r2 = r2.containsKey(r1)     // Catch: java.lang.Exception -> L2f
            if (r2 == 0) goto L21
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.b.a.a> r0 = r3.d     // Catch: java.lang.Exception -> L2f
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L2f
            com.mbridge.msdk.foundation.b.a.a r0 = (com.mbridge.msdk.foundation.b.a.a) r0     // Catch: java.lang.Exception -> L2f
        L21:
            if (r0 == 0) goto L26
            r0.d()     // Catch: java.lang.Exception -> L2f
        L26:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.b.a.a> r0 = r3.d     // Catch: java.lang.Exception -> L2f
            r0.remove(r4)     // Catch: java.lang.Exception -> L2f
            r4 = 0
            com.mbridge.msdk.foundation.b.b.c = r4     // Catch: java.lang.Exception -> L2f
            goto L33
        L2f:
            r4 = move-exception
            r4.printStackTrace()
        L33:
            return
    }

    public final void c(java.lang.String r1, int r2) {
            r0 = this;
            com.mbridge.msdk.foundation.b.a.a r1 = r0.a(r1)
            r1.c(r2)
            return
    }
}
