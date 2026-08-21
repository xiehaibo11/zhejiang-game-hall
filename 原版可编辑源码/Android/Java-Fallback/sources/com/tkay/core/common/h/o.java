package com.tkay.core.common.h;

public class o extends com.tkay.core.common.h.a {
    public static final int a = 1;
    public static final int b = 2;
    public static final int c = 3;
    public static final int d = 4;
    public static final int e = 5;
    public static final int f = 6;
    public static final int g = 7;
    public static final int h = 8;
    public static final int i = 9;
    public static final int j = 10;
    public static final int k = 11;
    public static final int l = 12;
    public static final int p = 13;
    public static final int q = 15;
    public static final int r = 16;
    public static final int s = 18;
    public static final int t = 19;
    public static final int u = 20;
    public static final int v = 21;
    private static final java.lang.String x = null;
    private java.lang.String A;
    private java.util.List<com.tkay.core.common.f.e> B;
    private com.tkay.core.common.f.e C;
    private int D;
    boolean w;
    private android.content.Context y;
    private java.lang.String z;

    static {
            java.lang.Class<com.tkay.core.common.h.o> r0 = com.tkay.core.common.h.o.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.common.h.o.x = r0
            return
    }

    public o(android.content.Context r2, int r3, java.util.List<com.tkay.core.common.f.e> r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.w = r0
            r1.y = r2
            r1.D = r3
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.String r2 = r2.o()
            r1.z = r2
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.String r2 = r2.p()
            r1.A = r2
            r1.B = r4
            return
    }

    private void a(org.json.JSONObject r3) {
            r2 = this;
            boolean r0 = r2.w
            if (r0 == 0) goto L11
            if (r3 == 0) goto L11
            java.lang.String r0 = "ofl"
            r1 = 1
            r3.put(r0, r1)     // Catch: org.json.JSONException -> Ld
            return
        Ld:
            r3 = move-exception
            r3.printStackTrace()
        L11:
            return
    }

    @Override
    protected final int a() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    protected final java.lang.Object a(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r1.trim()
            return r1
    }

    @Override
    protected final void a(com.tkay.core.api.AdError r11) {
            r10 = this;
            org.json.JSONObject r11 = new org.json.JSONObject
            r11.<init>()
            java.util.Map r0 = r10.c()
            if (r0 == 0) goto L27
            java.util.Set r1 = r0.keySet()     // Catch: java.lang.Exception -> L27
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L27
        L13:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L27
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L27
            java.lang.Object r3 = r0.get(r2)     // Catch: java.lang.Exception -> L27
            r11.put(r2, r3)     // Catch: java.lang.Exception -> L27
            goto L13
        L27:
            java.lang.String r7 = r11.toString()
            r11 = 1
            r10.w = r11
            java.lang.String r8 = r10.g()
            r11 = 0
            r10.w = r11
            java.lang.String r6 = r10.b()
            r11 = 1000(0x3e8, float:1.401E-42)
            java.lang.String r9 = com.tkay.core.common.f.n.a(r11)
            com.tkay.core.common.u r4 = com.tkay.core.common.u.a()
            r5 = 1
            r4.a(r5, r6, r7, r8, r9)
            return
    }

    @Override
    protected final boolean a(int r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    protected final java.lang.String b() {
            r1 = this;
            com.tkay.core.common.f.e r0 = r1.C
            if (r0 == 0) goto L9
            com.tkay.core.common.f.ai r0 = r0.b
            java.lang.String r0 = r0.ao
            return r0
        L9:
            com.tkay.core.common.i.a()
            java.lang.String r0 = com.tkay.core.common.i.j()
            return r0
    }

    @Override
    protected final void b(com.tkay.core.api.AdError r9) {
            r8 = this;
            java.util.List<com.tkay.core.common.f.e> r0 = r8.B
            if (r0 == 0) goto L9
            int r0 = r0.size()
            goto La
        L9:
            r0 = 1
        La:
            java.lang.String r2 = r9.getPlatformCode()
            java.lang.String r3 = r9.getPlatformMSG()
            java.lang.String r4 = r8.b()
            r5 = 0
            java.lang.String r6 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "tk"
            java.lang.String r7 = "0"
            com.tkay.core.common.k.c.a(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.String> c() {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "Content-Encoding"
            java.lang.String r2 = "gzip"
            r0.put(r1, r2)
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "application/json;charset=utf-8"
            r0.put(r1, r2)
            return r0
    }

    @Override
    protected final byte[] d() {
            r1 = this;
            java.lang.String r0 = r1.g()
            byte[] r0 = c(r0)
            return r0
    }

    @Override
    protected final org.json.JSONObject e() {
            r6 = this;
            org.json.JSONObject r0 = super.e()
            org.json.JSONObject r1 = super.f()
            java.lang.String r2 = "app_id"
            java.lang.String r3 = r6.z     // Catch: java.lang.Throwable -> L6c
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r2 = "tcp_tk_da_type"
            int r3 = r6.D     // Catch: java.lang.Throwable -> L6c
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L6c
            java.util.Iterator r2 = r1.keys()     // Catch: java.lang.Throwable -> L6c
        L1a:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L6c
            if (r3 == 0) goto L2e
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L6c
            java.lang.Object r4 = r1.opt(r3)     // Catch: java.lang.Throwable -> L6c
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L6c
            goto L1a
        L2e:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L6c
            java.util.Map r1 = r1.l()     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L6c
            int r2 = r1.size()
            if (r2 <= 0) goto L6c
            if (r1 == 0) goto L6c
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.util.Set r3 = r1.keySet()
            java.util.Iterator r3 = r3.iterator()
        L4d:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L67
            java.lang.Object r4 = r3.next()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.Object r5 = r1.get(r4)
            if (r5 == 0) goto L4d
            java.lang.String r5 = r5.toString()
            r2.put(r4, r5)
            goto L4d
        L67:
            java.lang.String r1 = "custom"
            r0.put(r1, r2)
        L6c:
            return r0
    }

    @Override
    protected final java.lang.String g() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = r5.e()
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tkay.core.common.l.c.a(r1)
            org.json.JSONArray r2 = new org.json.JSONArray
            r2.<init>()
            java.util.List<com.tkay.core.common.f.e> r3 = r5.B
            if (r3 == 0) goto L35
            java.util.Iterator r3 = r3.iterator()
        L1e:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L43
            java.lang.Object r4 = r3.next()
            com.tkay.core.common.f.e r4 = (com.tkay.core.common.f.e) r4
            org.json.JSONObject r4 = r4.a()
            r5.a(r4)
            r2.put(r4)
            goto L1e
        L35:
            com.tkay.core.common.f.e r3 = r5.C
            if (r3 == 0) goto L43
            org.json.JSONObject r3 = r3.a()
            r5.a(r3)
            r2.put(r3)
        L43:
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = com.tkay.core.common.l.c.a(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r5.A
            r3.append(r4)
            java.lang.String r4 = "api_ver=1.0&common="
            r3.append(r4)
            r3.append(r1)
            java.lang.String r4 = "&data="
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            java.lang.String r3 = com.tkay.core.common.l.f.c(r3)
            java.lang.String r4 = "common"
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L84
            java.lang.String r1 = "data"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L84
            java.lang.String r1 = "api_ver"
            java.lang.String r2 = "1.0"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L84
            java.lang.String r1 = "sign"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L84
            goto L88
        L84:
            r1 = move-exception
            r1.printStackTrace()
        L88:
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    protected final java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.z
            return r0
    }

    @Override
    protected final android.content.Context i() {
            r1 = this;
            android.content.Context r0 = r1.y
            return r0
    }

    @Override
    protected final java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.A
            return r0
    }

    @Override
    protected final java.lang.String k() {
            r1 = this;
            java.lang.String r0 = "1.0"
            return r0
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.Object> l() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final int m() {
            r1 = this;
            r0 = 6
            return r0
    }

    @Override
    protected final boolean o() {
            r1 = this;
            r0 = 1
            return r0
    }
}
