package com.tkay.interstitial.a;

public class b {
    private static volatile com.tkay.interstitial.a.b c;
    java.lang.String a;
    com.tkay.interstitial.api.TYInterstitialAutoLoadListener b;
    private com.tkay.interstitial.api.TYInterstitialAutoLoadListener d;


    public b() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "InterstitialAuto"
            r1.a = r0
            com.tkay.interstitial.a.b$1 r0 = new com.tkay.interstitial.a.b$1
            r0.<init>(r1)
            r1.b = r0
            return
    }

    public static com.tkay.interstitial.a.b a() {
            com.tkay.interstitial.a.b r0 = com.tkay.interstitial.a.b.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.interstitial.a.b> r0 = com.tkay.interstitial.a.b.class
            monitor-enter(r0)
            com.tkay.interstitial.a.b r1 = com.tkay.interstitial.a.b.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.interstitial.a.b r1 = new com.tkay.interstitial.a.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.interstitial.a.b.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.interstitial.a.b r0 = com.tkay.interstitial.a.b.c
            return r0
    }

    static com.tkay.interstitial.api.TYInterstitialAutoLoadListener a(com.tkay.interstitial.a.b r0) {
            com.tkay.interstitial.api.TYInterstitialAutoLoadListener r0 = r0.d
            return r0
    }

    private void a(android.app.Activity r2, java.lang.String r3, com.tkay.interstitial.api.TYInterstitialAutoEventListener r4) {
            r1 = this;
            java.lang.String r0 = ""
            r1.a(r2, r3, r0, r4)
            return
    }

    public static void a(java.lang.String r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "3"
            r0.a(r2, r3, r1, r4)
            return
    }

    public static void a(java.lang.String r1, java.util.Map<java.lang.String, java.lang.Object> r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return
        L7:
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            r0.a(r1, r2)
            return
    }

    public static void a(java.lang.String... r10) {
            if (r10 != 0) goto L3
            return
        L3:
            int r0 = r10.length
            r1 = 0
        L5:
            if (r1 >= r0) goto L3f
            r2 = r10[r1]
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L3c
            com.tkay.core.common.v r3 = com.tkay.core.common.v.a()
            boolean r3 = r3.e(r2)
            if (r3 != 0) goto L3c
            com.tkay.core.common.v r3 = com.tkay.core.common.v.a()
            r4 = 1
            r3.a(r2, r4)
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            android.content.Context r3 = r3.D()
            com.tkay.interstitial.a.a r4 = com.tkay.interstitial.a.a.a(r3, r2)
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r5 = r2.D()
            r6 = 3
            r7 = 0
            r8 = 0
            r9 = 0
            r4.a(r5, r6, r7, r8, r9)
        L3c:
            int r1 = r1 + 1
            goto L5
        L3f:
            return
    }

    private com.tkay.interstitial.api.TYInterstitialAutoLoadListener b() {
            r1 = this;
            com.tkay.interstitial.api.TYInterstitialAutoLoadListener r0 = r1.b
            return r0
    }

    public static void b(java.lang.String... r5) {
            if (r5 != 0) goto L3
            return
        L3:
            int r0 = r5.length
            r1 = 0
            r2 = r1
        L6:
            if (r2 >= r0) goto L29
            r3 = r5[r2]
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L26
            com.tkay.core.common.v r4 = com.tkay.core.common.v.a()
            r4.a(r3, r1)
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            android.content.Context r4 = r4.f()
            com.tkay.interstitial.a.a r3 = com.tkay.interstitial.a.a.a(r4, r3)
            r3.k()
        L26:
            int r2 = r2 + 1
            goto L6
        L29:
            return
    }

    public static java.util.List<com.tkay.core.api.TYAdInfo> c(java.lang.String r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.D()
            com.tkay.interstitial.a.a r1 = com.tkay.interstitial.a.a.a(r0, r1)
            if (r1 == 0) goto L1b
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.D()
            java.util.List r1 = r1.a(r0)
            return r1
        L1b:
            r1 = 0
            return r1
    }

    private com.tkay.core.api.TYAdStatusInfo d(java.lang.String r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r1 = 0
            if (r0 == 0) goto L44
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.o()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L44
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.p()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L28
            goto L44
        L28:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.D()
            com.tkay.interstitial.a.a r3 = com.tkay.interstitial.a.a.a(r0, r3)
            if (r3 == 0) goto L43
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.D()
            com.tkay.core.api.TYAdStatusInfo r3 = r3.a(r0, r1)
            return r3
        L43:
            return r1
        L44:
            java.lang.String r3 = r2.a
            java.lang.String r0 = "SDK init error!"
            android.util.Log.e(r3, r0)
            return r1
    }

    public final void a(android.app.Activity r9, java.lang.String r10, java.lang.String r11, com.tkay.interstitial.api.TYInterstitialAutoEventListener r12) {
            r8 = this;
            java.lang.String r0 = com.tkay.core.common.b.f.i.t
            java.lang.String r1 = com.tkay.core.common.b.f.i.y
            java.lang.String r2 = com.tkay.core.common.b.f.i.n
            java.lang.String r3 = ""
            com.tkay.core.common.l.n.b(r10, r0, r1, r2, r3)
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 == 0) goto L19
            java.lang.String r9 = r8.a
            java.lang.String r10 = "PlacementId is Empty!"
            android.util.Log.e(r9, r10)
            return
        L19:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            if (r0 == 0) goto L5a
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.o()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L5a
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.p()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L40
            goto L5a
        L40:
            if (r9 != 0) goto L49
            java.lang.String r0 = r8.a
            java.lang.String r1 = "Interstitial Show Activity is null."
            android.util.Log.e(r0, r1)
        L49:
            com.tkay.interstitial.a.a r2 = com.tkay.interstitial.a.a.a(r9, r10)
            com.tkay.interstitial.a.c r5 = new com.tkay.interstitial.a.c
            r5.<init>(r12)
            r6 = 0
            r7 = 0
            r3 = r9
            r4 = r11
            r2.a(r3, r4, r5, r6, r7)
            return
        L5a:
            java.lang.String r9 = r8.a
            java.lang.String r10 = "Show error: SDK init error!"
            android.util.Log.e(r9, r10)
            return
    }

    public final void a(android.content.Context r12, java.lang.String[] r13, com.tkay.interstitial.api.TYInterstitialAutoLoadListener r14) {
            r11 = this;
            boolean r0 = r12 instanceof android.app.Activity
            if (r0 == 0) goto Le
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r1 = r12
            android.app.Activity r1 = (android.app.Activity) r1
            r0.a(r1)
        Le:
            if (r13 == 0) goto L37
            int r0 = r13.length
            r1 = 0
        L12:
            if (r1 >= r0) goto L37
            r2 = r13[r1]
            com.tkay.core.common.v r3 = com.tkay.core.common.v.a()
            boolean r3 = r3.e(r2)
            if (r3 != 0) goto L34
            com.tkay.core.common.v r3 = com.tkay.core.common.v.a()
            r4 = 1
            r3.a(r2, r4)
            com.tkay.interstitial.a.a r5 = com.tkay.interstitial.a.a.a(r12, r2)
            r7 = 3
            r8 = 0
            r9 = 0
            r10 = 0
            r6 = r12
            r5.a(r6, r7, r8, r9, r10)
        L34:
            int r1 = r1 + 1
            goto L12
        L37:
            r11.d = r14
            return
    }

    public final boolean a(java.lang.String r6) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 != 0) goto L12
            com.tkay.core.api.TYAdStatusInfo r0 = r5.d(r6)
            if (r0 != 0) goto Le
            return r1
        Le:
            boolean r1 = r0.isReady()
        L12:
            java.lang.String r0 = com.tkay.core.common.b.f.i.t
            java.lang.String r2 = com.tkay.core.common.b.f.i.z
            java.lang.String r3 = java.lang.String.valueOf(r1)
            java.lang.String r4 = ""
            com.tkay.core.common.l.n.b(r6, r0, r2, r3, r4)
            return r1
    }

    public final com.tkay.core.api.TYAdStatusInfo b(java.lang.String r6) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            r2 = 0
            if (r0 != 0) goto L14
            com.tkay.core.api.TYAdStatusInfo r0 = r5.d(r6)
            if (r0 != 0) goto L19
            com.tkay.core.api.TYAdStatusInfo r0 = new com.tkay.core.api.TYAdStatusInfo
            r0.<init>(r2, r2, r1)
            goto L19
        L14:
            com.tkay.core.api.TYAdStatusInfo r0 = new com.tkay.core.api.TYAdStatusInfo
            r0.<init>(r2, r2, r1)
        L19:
            java.lang.String r1 = com.tkay.core.common.b.f.i.t
            java.lang.String r2 = com.tkay.core.common.b.f.i.A
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = ""
            com.tkay.core.common.l.n.b(r6, r1, r2, r3, r4)
            return r0
    }
}
