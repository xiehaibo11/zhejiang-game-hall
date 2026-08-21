package com.tkay.expressad.video.module.a.a;

public class k extends com.tkay.expressad.video.module.a.a.f {
    public static final int V = 2;
    public static final int a = 1;
    private static final java.lang.String ag = "camp_position";
    protected boolean W;
    protected com.tkay.expressad.foundation.d.c X;
    protected java.util.List<com.tkay.expressad.foundation.d.c> Y;
    protected boolean Z;
    protected com.tkay.expressad.videocommon.b.a aa;
    protected com.tkay.expressad.videocommon.c.c ab;
    protected java.lang.String ac;
    protected java.lang.String ad;
    protected com.tkay.expressad.video.module.a.a ae;
    protected int af;
    private boolean ah;
    private boolean ai;
    private boolean aj;

    public k(com.tkay.expressad.foundation.d.c r4, com.tkay.expressad.videocommon.b.a r5, com.tkay.expressad.videocommon.c.c r6, java.lang.String r7, java.lang.String r8, com.tkay.expressad.video.module.a.a r9, int r10, boolean r11) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.Z = r0
            com.tkay.expressad.video.module.a.a.f r1 = new com.tkay.expressad.video.module.a.a.f
            r1.<init>()
            r3.ae = r1
            r1 = 1
            r3.af = r1
            r3.ah = r0
            r3.ai = r0
            r3.aj = r0
            if (r11 != 0) goto L37
            if (r4 == 0) goto L37
            boolean r2 = com.tkay.expressad.foundation.h.w.b(r8)
            if (r2 == 0) goto L37
            if (r5 == 0) goto L37
            if (r9 == 0) goto L37
            r3.X = r4
            r3.ad = r7
            r3.ac = r8
            r3.aa = r5
            r3.ab = r6
            r3.ae = r9
            r3.W = r1
            r3.af = r10
            r3.Z = r0
            return
        L37:
            if (r11 == 0) goto L55
            if (r4 == 0) goto L55
            boolean r11 = com.tkay.expressad.foundation.h.w.b(r8)
            if (r11 == 0) goto L55
            if (r9 == 0) goto L55
            r3.X = r4
            r3.ad = r7
            r3.ac = r8
            r3.aa = r5
            r3.ab = r6
            r3.ae = r9
            r3.W = r1
            r3.af = r10
            r3.Z = r1
        L55:
            return
    }

    private static void g() {
            return
    }

    private static void h() {
            return
    }

    private static void i() {
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()
            r1 = 0
            r0.a(r1)
            return
    }

    private static void j() {
            return
    }

    private void k() {
            r3 = this;
            boolean r0 = r3.W
            if (r0 == 0) goto L1d
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r0 = com.tkay.expressad.foundation.g.a.f.k
            if (r0 == 0) goto L1d
            com.tkay.expressad.foundation.d.c r0 = r3.X
            java.lang.String r0 = r0.aZ()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1d
            java.lang.String r0 = r3.ac
            com.tkay.expressad.foundation.d.c r1 = r3.X
            java.lang.String r2 = "reward"
            com.tkay.expressad.foundation.g.a.f.a(r0, r1, r2)
        L1d:
            return
    }

    private static void l() {
            return
    }

    private static void m() {
            return
    }

    private static void n() {
            return
    }

    public final void a() {
            r8 = this;
            boolean r0 = r8.W
            if (r0 == 0) goto L3f
            com.tkay.expressad.foundation.d.c r0 = r8.X
            if (r0 == 0) goto L3f
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.f()
            int r7 = com.tkay.expressad.foundation.h.k.a()
            com.tkay.expressad.foundation.d.r r0 = new com.tkay.expressad.foundation.d.r
            com.tkay.expressad.foundation.d.c r1 = r8.X
            java.lang.String r3 = r1.aZ()
            com.tkay.expressad.foundation.d.c r1 = r8.X
            java.lang.String r4 = r1.Z()
            com.tkay.expressad.foundation.d.c r1 = r8.X
            java.lang.String r5 = r1.aa()
            java.lang.String r6 = r8.ac
            java.lang.String r2 = "2000061"
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            com.tkay.expressad.foundation.d.c r1 = r8.X
            boolean r1 = r1.H()
            if (r1 == 0) goto L3a
            int r1 = com.tkay.expressad.foundation.d.r.aQ
            goto L3c
        L3a:
            int r1 = com.tkay.expressad.foundation.d.r.aR
        L3c:
            r0.a(r1)
        L3f:
            return
    }

    public final void a(int r4) {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.X
            if (r0 == 0) goto L1a
            r0 = 1
            if (r4 == r0) goto Lb
            r0 = 2
            if (r4 == r0) goto Lb
            goto L1a
        Lb:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.d.c r1 = r3.X
            int r2 = r3.af
            com.tkay.expressad.video.module.b.a.a(r0, r1, r4, r2)
        L1a:
            return
    }

    @Override
    public void a(int r2, java.lang.Object r3) {
            r1 = this;
            super.a(r2, r3)
            com.tkay.expressad.video.module.a.a r0 = r1.ae
            r0.a(r2, r3)
            return
    }

    public final void a(int r11, java.lang.String r12) {
            r10 = this;
            com.tkay.expressad.foundation.d.c r0 = r10.X
            if (r0 == 0) goto L2c
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.f()
            int r7 = com.tkay.expressad.foundation.h.k.a()
            com.tkay.expressad.foundation.d.r r1 = new com.tkay.expressad.foundation.d.r
            com.tkay.expressad.foundation.d.c r0 = r10.X
            java.lang.String r3 = r0.aZ()
            com.tkay.expressad.foundation.d.c r0 = r10.X
            java.lang.String r4 = r0.Z()
            com.tkay.expressad.foundation.d.c r0 = r10.X
            java.lang.String r5 = r0.aa()
            java.lang.String r6 = r10.ac
            java.lang.String r2 = "2000062"
            r8 = r11
            r9 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
        L2c:
            return
    }

    public final void a(com.tkay.expressad.foundation.d.c r1) {
            r0 = this;
            r0.X = r1
            return
    }

    protected final void a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "camp_position"
            com.tkay.expressad.foundation.d.c r1 = r2.X
            if (r1 != 0) goto L7
            return
        L7:
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r2.Y
            if (r1 != 0) goto Lc
            return
        Lc:
            int r1 = r1.size()
            if (r1 != 0) goto L13
            return
        L13:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2d
            r1.<init>(r3)     // Catch: org.json.JSONException -> L2d
            boolean r3 = r1.has(r0)     // Catch: org.json.JSONException -> L2d
            if (r3 == 0) goto L2c
            int r3 = r1.getInt(r0)     // Catch: org.json.JSONException -> L2d
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r2.Y     // Catch: org.json.JSONException -> L2d
            java.lang.Object r3 = r0.get(r3)     // Catch: org.json.JSONException -> L2d
            com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3     // Catch: org.json.JSONException -> L2d
            r2.X = r3     // Catch: org.json.JSONException -> L2d
        L2c:
            return
        L2d:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    public final void a(java.util.List<com.tkay.expressad.foundation.d.c> r1) {
            r0 = this;
            r0.Y = r1
            return
    }

    protected final void b() {
            r2 = this;
            com.tkay.expressad.videocommon.b.a r0 = r2.aa
            if (r0 == 0) goto L8
            r1 = 1
            r0.b(r1)
        L8:
            return
    }

    public final void b(int r5) {
            r4 = this;
            com.tkay.expressad.foundation.d.c r0 = r4.X
            if (r0 == 0) goto L5f
            java.lang.String r0 = r0.ah()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L5f
            r1 = 1
            r2 = 2
            if (r5 == r1) goto L14
            if (r5 != r2) goto L5f
        L14:
            java.lang.String r1 = "endscreen_type"
            boolean r1 = r0.contains(r1)
            if (r1 == 0) goto L38
            java.lang.String r1 = "endscreen_type=1"
            java.lang.String r3 = "endscreen_type=2"
            if (r5 != r2) goto L2d
            boolean r5 = r0.contains(r1)
            if (r5 == 0) goto L5a
            java.lang.String r0 = r0.replace(r1, r3)
            goto L5a
        L2d:
            boolean r5 = r0.contains(r3)
            if (r5 == 0) goto L5a
            java.lang.String r0 = r0.replace(r3, r1)
            goto L5a
        L38:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            java.lang.String r2 = "?"
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto L4e
            java.lang.String r0 = "&endscreen_type="
            r1.append(r0)
            r1.append(r5)
            goto L56
        L4e:
            java.lang.String r0 = "?endscreen_type="
            r1.append(r0)
            r1.append(r5)
        L56:
            java.lang.String r0 = r1.toString()
        L5a:
            com.tkay.expressad.foundation.d.c r5 = r4.X
            r5.q(r0)
        L5f:
            return
    }

    protected final void c() {
            r9 = this;
            com.tkay.expressad.foundation.d.c r0 = r9.X     // Catch: java.lang.Exception -> Ldd
            r1 = 1
            if (r0 == 0) goto L1c
            com.tkay.expressad.foundation.d.c r0 = r9.X     // Catch: java.lang.Exception -> Ldd
            boolean r0 = r0.j()     // Catch: java.lang.Exception -> Ldd
            if (r0 == 0) goto L1c
            boolean r0 = r9.Z     // Catch: java.lang.Exception -> Ldd
            if (r0 == 0) goto L1c
            com.tkay.expressad.foundation.d.c r0 = r9.X     // Catch: java.lang.Exception -> Ldd
            boolean r0 = r0.l()     // Catch: java.lang.Exception -> Ldd
            if (r0 != 0) goto L1c
            r9.ai = r1     // Catch: java.lang.Exception -> Ldd
            return
        L1c:
            boolean r0 = r9.W     // Catch: java.lang.Exception -> Ldd
            if (r0 == 0) goto Ldc
            com.tkay.expressad.foundation.d.c r0 = r9.X     // Catch: java.lang.Exception -> Ldd
            java.lang.String r0 = r0.ai()     // Catch: java.lang.Exception -> Ldd
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Ldd
            if (r0 != 0) goto Ldc
            java.util.Map<java.lang.String, java.lang.Long> r0 = com.tkay.expressad.foundation.g.a.f.h     // Catch: java.lang.Exception -> Ldd
            if (r0 == 0) goto Ldc
            java.util.Map<java.lang.String, java.lang.Long> r0 = com.tkay.expressad.foundation.g.a.f.h     // Catch: java.lang.Exception -> Ldd
            com.tkay.expressad.foundation.d.c r2 = r9.X     // Catch: java.lang.Exception -> Ldd
            java.lang.String r2 = r2.ai()     // Catch: java.lang.Exception -> Ldd
            boolean r0 = r0.containsKey(r2)     // Catch: java.lang.Exception -> Ldd
            if (r0 != 0) goto Ldc
            boolean r0 = r9.ai     // Catch: java.lang.Exception -> Ldd
            if (r0 != 0) goto Ldc
            java.util.Map<java.lang.String, java.lang.Long> r0 = com.tkay.expressad.foundation.g.a.f.h     // Catch: java.lang.Exception -> Ldd
            com.tkay.expressad.foundation.d.c r2 = r9.X     // Catch: java.lang.Exception -> Ldd
            java.lang.String r2 = r2.ai()     // Catch: java.lang.Exception -> Ldd
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Ldd
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Exception -> Ldd
            r0.put(r2, r3)     // Catch: java.lang.Exception -> Ldd
            com.tkay.expressad.foundation.d.c r0 = r9.X     // Catch: java.lang.Exception -> Ldd
            java.lang.String r0 = r0.ai()     // Catch: java.lang.Exception -> Ldd
            com.tkay.expressad.foundation.d.c r2 = r9.X     // Catch: java.lang.Exception -> Ldd
            int r2 = r2.n()     // Catch: java.lang.Exception -> Ldd
            java.lang.String r3 = "&tmorl="
            if (r2 != r1) goto L88
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ldd
            r2.<init>()     // Catch: java.lang.Exception -> Ldd
            r2.append(r0)     // Catch: java.lang.Exception -> Ldd
            java.lang.String r0 = "&to=1&cbt="
            r2.append(r0)     // Catch: java.lang.Exception -> Ldd
            com.tkay.expressad.foundation.d.c r0 = r9.X     // Catch: java.lang.Exception -> Ldd
            int r0 = r0.az()     // Catch: java.lang.Exception -> Ldd
            r2.append(r0)     // Catch: java.lang.Exception -> Ldd
            r2.append(r3)     // Catch: java.lang.Exception -> Ldd
            int r0 = r9.af     // Catch: java.lang.Exception -> Ldd
            r2.append(r0)     // Catch: java.lang.Exception -> Ldd
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> Ldd
            goto Laa
        L88:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ldd
            r2.<init>()     // Catch: java.lang.Exception -> Ldd
            r2.append(r0)     // Catch: java.lang.Exception -> Ldd
            java.lang.String r0 = "&to=0&cbt="
            r2.append(r0)     // Catch: java.lang.Exception -> Ldd
            com.tkay.expressad.foundation.d.c r0 = r9.X     // Catch: java.lang.Exception -> Ldd
            int r0 = r0.az()     // Catch: java.lang.Exception -> Ldd
            r2.append(r0)     // Catch: java.lang.Exception -> Ldd
            r2.append(r3)     // Catch: java.lang.Exception -> Ldd
            int r0 = r9.af     // Catch: java.lang.Exception -> Ldd
            r2.append(r0)     // Catch: java.lang.Exception -> Ldd
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> Ldd
        Laa:
            r5 = r0
            boolean r0 = r9.Z     // Catch: java.lang.Exception -> Ldd
            if (r0 == 0) goto Lcb
            com.tkay.expressad.foundation.d.c r0 = r9.X     // Catch: java.lang.Exception -> Ldd
            boolean r0 = r0.l()     // Catch: java.lang.Exception -> Ldd
            if (r0 == 0) goto Lda
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Ldd
            android.content.Context r2 = r0.f()     // Catch: java.lang.Exception -> Ldd
            com.tkay.expressad.foundation.d.c r3 = r9.X     // Catch: java.lang.Exception -> Ldd
            java.lang.String r4 = r9.ac     // Catch: java.lang.Exception -> Ldd
            r6 = 0
            r7 = 1
            int r8 = com.tkay.expressad.a.a.a.j     // Catch: java.lang.Exception -> Ldd
            com.tkay.expressad.a.a.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> Ldd
            goto Lda
        Lcb:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Ldd
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> Ldd
            com.tkay.expressad.foundation.d.c r2 = r9.X     // Catch: java.lang.Exception -> Ldd
            java.lang.String r3 = r9.ac     // Catch: java.lang.Exception -> Ldd
            com.tkay.expressad.a.a.a(r0, r2, r3, r5, r1)     // Catch: java.lang.Exception -> Ldd
        Lda:
            r9.ai = r1     // Catch: java.lang.Exception -> Ldd
        Ldc:
            return
        Ldd:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    protected final void d() {
            r8 = this;
            boolean r0 = r8.W     // Catch: java.lang.Throwable -> Lb0
            if (r0 == 0) goto Laf
            boolean r0 = r8.ah     // Catch: java.lang.Throwable -> Lb0
            if (r0 != 0) goto Laf
            com.tkay.expressad.foundation.d.c r0 = r8.X     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r0 = r0.ag()     // Catch: java.lang.Throwable -> Lb0
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb0
            if (r0 != 0) goto Laf
            r0 = 1
            r8.ah = r0     // Catch: java.lang.Throwable -> Lb0
            com.tkay.expressad.foundation.d.c r1 = r8.X     // Catch: java.lang.Throwable -> Lb0
            r1.A()     // Catch: java.lang.Throwable -> Lb0
            com.tkay.expressad.foundation.d.c r1 = r8.X     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r1 = r1.ag()     // Catch: java.lang.Throwable -> Lb0
            com.tkay.expressad.foundation.d.c r2 = r8.X     // Catch: java.lang.Throwable -> Lb0
            int r2 = r2.n()     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r3 = "&tmorl="
            if (r2 != r0) goto L4f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb0
            r0.<init>()     // Catch: java.lang.Throwable -> Lb0
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r1 = "&to=1&cbt="
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb0
            com.tkay.expressad.foundation.d.c r1 = r8.X     // Catch: java.lang.Throwable -> Lb0
            int r1 = r1.az()     // Catch: java.lang.Throwable -> Lb0
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb0
            r0.append(r3)     // Catch: java.lang.Throwable -> Lb0
            int r1 = r8.af     // Catch: java.lang.Throwable -> Lb0
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lb0
            goto L71
        L4f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb0
            r0.<init>()     // Catch: java.lang.Throwable -> Lb0
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r1 = "&to=0&cbt="
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb0
            com.tkay.expressad.foundation.d.c r1 = r8.X     // Catch: java.lang.Throwable -> Lb0
            int r1 = r1.az()     // Catch: java.lang.Throwable -> Lb0
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb0
            r0.append(r3)     // Catch: java.lang.Throwable -> Lb0
            int r1 = r8.af     // Catch: java.lang.Throwable -> Lb0
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lb0
        L71:
            r4 = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lb0
            android.content.Context r1 = r0.f()     // Catch: java.lang.Throwable -> Lb0
            com.tkay.expressad.foundation.d.c r2 = r8.X     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r3 = r8.ac     // Catch: java.lang.Throwable -> Lb0
            r5 = 0
            r6 = 1
            int r7 = com.tkay.expressad.a.a.a.i     // Catch: java.lang.Throwable -> Lb0
            com.tkay.expressad.a.a.a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> Lb0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lb0
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> Lb0
            com.tkay.expressad.foundation.d.c r1 = r8.X     // Catch: java.lang.Throwable -> Lb0
            com.tkay.expressad.video.module.b.a.a(r0, r1)     // Catch: java.lang.Throwable -> Lb0
            boolean r0 = r8.W     // Catch: java.lang.Throwable -> Lb0
            if (r0 == 0) goto Laf
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.g.e.a>> r0 = com.tkay.expressad.foundation.g.a.f.k     // Catch: java.lang.Throwable -> Lb0
            if (r0 == 0) goto Laf
            com.tkay.expressad.foundation.d.c r0 = r8.X     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r0 = r0.aZ()     // Catch: java.lang.Throwable -> Lb0
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb0
            if (r0 != 0) goto Laf
            java.lang.String r0 = r8.ac     // Catch: java.lang.Throwable -> Lb0
            com.tkay.expressad.foundation.d.c r1 = r8.X     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r2 = "reward"
            com.tkay.expressad.foundation.g.a.f.a(r0, r1, r2)     // Catch: java.lang.Throwable -> Lb0
        Laf:
            return
        Lb0:
            r0 = move-exception
            r0.getMessage()
            return
    }

    protected final void e() {
            r6 = this;
            boolean r0 = r6.W     // Catch: java.lang.Throwable -> L57
            if (r0 == 0) goto L56
            boolean r0 = r6.aj     // Catch: java.lang.Throwable -> L57
            if (r0 != 0) goto L56
            com.tkay.expressad.foundation.d.c r0 = r6.X     // Catch: java.lang.Throwable -> L57
            if (r0 == 0) goto L56
            r0 = 1
            r6.aj = r0     // Catch: java.lang.Throwable -> L57
            com.tkay.expressad.foundation.d.c r1 = r6.X     // Catch: java.lang.Throwable -> L57
            boolean r1 = r1.j()     // Catch: java.lang.Throwable -> L57
            if (r1 == 0) goto L24
            boolean r1 = r6.Z     // Catch: java.lang.Throwable -> L57
            if (r1 == 0) goto L24
            com.tkay.expressad.foundation.d.c r1 = r6.X     // Catch: java.lang.Throwable -> L57
            boolean r1 = r1.l()     // Catch: java.lang.Throwable -> L57
            if (r1 != 0) goto L24
            return
        L24:
            boolean r1 = r6.Z     // Catch: java.lang.Throwable -> L57
            if (r1 != 0) goto L56
            com.tkay.expressad.foundation.d.c r1 = r6.X     // Catch: java.lang.Throwable -> L57
            java.util.List r1 = r1.e()     // Catch: java.lang.Throwable -> L57
            if (r1 == 0) goto L56
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L57
            if (r2 <= 0) goto L56
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L57
        L3a:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L57
            if (r2 == 0) goto L56
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L57
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L57
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L57
            android.content.Context r3 = r3.f()     // Catch: java.lang.Throwable -> L57
            com.tkay.expressad.foundation.d.c r4 = r6.X     // Catch: java.lang.Throwable -> L57
            java.lang.String r5 = r6.ac     // Catch: java.lang.Throwable -> L57
            com.tkay.expressad.a.a.a(r3, r4, r5, r2, r0)     // Catch: java.lang.Throwable -> L57
            goto L3a
        L56:
            return
        L57:
            r0 = move-exception
            r0.getMessage()
            return
    }

    protected final void f() {
            r5 = this;
            com.tkay.expressad.foundation.d.c r0 = r5.X
            if (r0 == 0) goto L3e
            java.lang.String r0 = r0.K()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3e
            com.tkay.expressad.foundation.d.c r0 = r5.X
            com.tkay.expressad.foundation.d.n r0 = r0.L()
            if (r0 == 0) goto L3e
            com.tkay.expressad.foundation.d.c r0 = r5.X
            com.tkay.expressad.foundation.d.n r0 = r0.L()
            java.lang.String[] r0 = r0.n()
            if (r0 == 0) goto L3e
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.d.c r1 = r5.X
            java.lang.String r2 = r1.K()
            com.tkay.expressad.foundation.d.c r3 = r5.X
            com.tkay.expressad.foundation.d.n r3 = r3.L()
            java.lang.String[] r3 = r3.n()
            r4 = 0
            com.tkay.expressad.a.a.a(r0, r1, r2, r3, r4)
        L3e:
            return
    }
}
