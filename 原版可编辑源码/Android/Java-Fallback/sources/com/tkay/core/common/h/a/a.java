package com.tkay.core.common.h.a;

public final class a extends com.tkay.core.common.h.a.c {
    java.util.List<java.lang.String> a;
    int b;
    boolean c;
    private final java.lang.String k;

    public a(java.util.List<java.lang.String> r2) {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.k = r0
            r1.a = r2
            int r2 = r2.size()
            r1.b = r2
            return
    }

    private java.lang.String i() {
            r6 = this;
            org.json.JSONObject r0 = super.h()
            org.json.JSONObject r1 = com.tkay.core.common.h.c.a()
            if (r0 == 0) goto L57
            java.lang.String r2 = "app_id"
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L57
            java.lang.String r3 = r3.o()     // Catch: java.lang.Exception -> L57
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L57
            java.lang.String r2 = "nw_ver"
            org.json.JSONObject r3 = com.tkay.core.common.l.d.h()     // Catch: java.lang.Exception -> L57
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L57
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Exception -> L57
            r2.<init>()     // Catch: java.lang.Exception -> L57
            java.util.List<java.lang.String> r3 = r6.a     // Catch: java.lang.Exception -> L57
            if (r3 == 0) goto L52
            java.util.List<java.lang.String> r3 = r6.a     // Catch: java.lang.Exception -> L57
            int r3 = r3.size()     // Catch: java.lang.Exception -> L57
            if (r3 <= 0) goto L52
            java.util.List<java.lang.String> r3 = r6.a     // Catch: java.lang.Exception -> L57
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L57
        L37:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Exception -> L57
            if (r4 == 0) goto L52
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Exception -> L57
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L57
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L57
            if (r5 != 0) goto L37
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L57
            r5.<init>(r4)     // Catch: java.lang.Exception -> L57
            r2.put(r5)     // Catch: java.lang.Exception -> L57
            goto L37
        L52:
            java.lang.String r3 = "data"
            r0.put(r3, r2)     // Catch: java.lang.Exception -> L57
        L57:
            java.lang.String r2 = "tcp_tk_da_type"
            int r3 = r6.i     // Catch: java.lang.Exception -> L65
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = "tcp_rate"
            java.lang.String r3 = r6.j     // Catch: java.lang.Exception -> L65
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L65
        L65:
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = com.tkay.core.common.l.c.a(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tkay.core.common.l.c.a(r1)
            java.lang.String r3 = "api_ver"
            java.lang.String r4 = "1.0"
            r2.put(r3, r4)
            java.lang.String r3 = "p"
            r2.put(r3, r0)
            java.lang.String r0 = "p2"
            r2.put(r0, r1)
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r2.size()
            r0.<init>(r1)
            java.util.Set r1 = r2.keySet()
            r0.addAll(r1)
            java.util.Collections.sort(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.Iterator r0 = r0.iterator()
        La7:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto Lce
            java.lang.Object r3 = r0.next()
            java.lang.String r3 = (java.lang.String) r3
            int r4 = r1.length()
            if (r4 <= 0) goto Lbe
            java.lang.String r4 = "&"
            r1.append(r4)
        Lbe:
            r1.append(r3)
            java.lang.String r4 = "="
            r1.append(r4)
            java.lang.Object r3 = r2.get(r3)
            r1.append(r3)
            goto La7
        Lce:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            java.lang.String r3 = r3.p()
            r0.append(r3)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = com.tkay.core.common.l.f.c(r0)
            java.lang.String r1 = "sign"
            r2.put(r1, r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r2)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final void a() {
            r1 = this;
            r0 = 1
            r1.c = r0
            return
    }

    @Override
    public final void a(java.lang.String r7, java.lang.String r8, java.lang.String r9, int r10) {
            r6 = this;
            boolean r7 = r6.c
            if (r7 == 0) goto L1a
            java.lang.String r4 = r6.i()
            r7 = 1001(0x3e9, float:1.403E-42)
            java.lang.String r5 = com.tkay.core.common.f.n.a(r7)
            com.tkay.core.common.u r0 = com.tkay.core.common.u.a()
            r1 = 3
            java.lang.String r3 = ""
            java.lang.String r2 = ""
            r0.a(r1, r2, r3, r4, r5)
        L1a:
            return
    }

    public final int b() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    @Override
    public final int c() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    public final int d() {
            r1 = this;
            r0 = 3
            return r0
    }

    @Override
    public final byte[] e() {
            r1 = this;
            java.lang.String r0 = r1.i()
            byte[] r0 = a(r0)
            return r0
    }

    @Override
    public final boolean f() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final int g() {
            r1 = this;
            r0 = 4
            return r0
    }
}
