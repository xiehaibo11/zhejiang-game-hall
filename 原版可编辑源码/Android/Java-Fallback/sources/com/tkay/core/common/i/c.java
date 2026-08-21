package com.tkay.core.common.i;

public final class c extends com.tkay.core.common.h.a {
    boolean a;
    private android.content.Context b;
    private int c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private com.tkay.core.common.f.d g;
    private com.tkay.core.c.d h;


    public c(android.content.Context r2, int r3, java.lang.String r4, com.tkay.core.common.f.d r5, com.tkay.core.c.d r6) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r2
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.String r2 = r2.o()
            r1.d = r2
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.String r2 = r2.p()
            r1.e = r2
            r1.c = r3
            r1.g = r5
            r1.h = r6
            r1.f = r4
            return
    }

    static com.tkay.core.common.h.k a(com.tkay.core.common.i.c r0) {
            com.tkay.core.common.h.k r0 = r0.m
            return r0
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
    protected final void a(com.tkay.core.api.AdError r1) {
            r0 = this;
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
            com.tkay.core.common.i.a()
            java.lang.String r0 = com.tkay.core.common.i.i()
            return r0
    }

    @Override
    protected final void b(com.tkay.core.api.AdError r4) {
            r3 = this;
            java.lang.String r0 = "9990"
            java.lang.String r1 = r4.getCode()     // Catch: java.lang.Throwable -> L41
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L41
            if (r0 != 0) goto L32
            boolean r0 = r3.a     // Catch: java.lang.Throwable -> L41
            if (r0 == 0) goto L20
            com.tkay.core.common.f.d r0 = r3.g     // Catch: java.lang.Throwable -> L41
            com.tkay.core.c.d r1 = r3.h     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = r4.getPlatformCode()     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = r4.getPlatformMSG()     // Catch: java.lang.Throwable -> L41
            com.tkay.core.common.k.c.a(r0, r1, r2, r4)     // Catch: java.lang.Throwable -> L41
            return
        L20:
            r4 = 1
            r3.a = r4     // Catch: java.lang.Throwable -> L41
            com.tkay.core.common.l.b.a r4 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> L41
            com.tkay.core.common.i.c$1 r0 = new com.tkay.core.common.i.c$1     // Catch: java.lang.Throwable -> L41
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L41
            r1 = 5000(0x1388, double:2.4703E-320)
            r4.a(r0, r1)     // Catch: java.lang.Throwable -> L41
            return
        L32:
            com.tkay.core.common.f.d r0 = r3.g     // Catch: java.lang.Throwable -> L41
            com.tkay.core.c.d r1 = r3.h     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = r4.getPlatformCode()     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = r4.getPlatformMSG()     // Catch: java.lang.Throwable -> L41
            com.tkay.core.common.k.c.a(r0, r1, r2, r4)     // Catch: java.lang.Throwable -> L41
        L41:
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
            java.lang.String r3 = r6.d     // Catch: java.lang.Throwable -> L65
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L65
            java.util.Iterator r2 = r1.keys()     // Catch: java.lang.Throwable -> L65
        L13:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L65
            if (r3 == 0) goto L27
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L65
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L65
            java.lang.Object r4 = r1.opt(r3)     // Catch: java.lang.Throwable -> L65
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L65
            goto L13
        L27:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L65
            java.util.Map r1 = r1.l()     // Catch: java.lang.Throwable -> L65
            if (r1 == 0) goto L65
            int r2 = r1.size()
            if (r2 <= 0) goto L65
            if (r1 == 0) goto L65
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.util.Set r3 = r1.keySet()
            java.util.Iterator r3 = r3.iterator()
        L46:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L60
            java.lang.Object r4 = r3.next()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.Object r5 = r1.get(r4)
            if (r5 == 0) goto L46
            java.lang.String r5 = r5.toString()
            r2.put(r4, r5)
            goto L46
        L60:
            java.lang.String r1 = "custom"
            r0.put(r1, r2)
        L65:
            return r0
    }

    @Override
    protected final java.lang.String g() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = r4.e()
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tkay.core.common.l.c.a(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r4.e
            r2.append(r3)
            java.lang.String r3 = "api_ver=1.0&common="
            r2.append(r3)
            r2.append(r1)
            java.lang.String r3 = "&data="
            r2.append(r3)
            java.lang.String r3 = r4.f
            r2.append(r3)
            java.lang.String r3 = "&ss_a="
            r2.append(r3)
            int r3 = r4.c
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = com.tkay.core.common.l.f.c(r2)
            java.lang.String r3 = "common"
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L5f
            java.lang.String r1 = "ss_a"
            int r3 = r4.c     // Catch: java.lang.Exception -> L5f
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L5f
            java.lang.String r1 = "data"
            java.lang.String r3 = r4.f     // Catch: java.lang.Exception -> L5f
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L5f
            java.lang.String r1 = "api_ver"
            java.lang.String r3 = "1.0"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L5f
            java.lang.String r1 = "sign"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L5f
            goto L63
        L5f:
            r1 = move-exception
            r1.printStackTrace()
        L63:
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    protected final java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    @Override
    protected final android.content.Context i() {
            r1 = this;
            android.content.Context r0 = r1.b
            return r0
    }

    @Override
    protected final java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.e
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
}
