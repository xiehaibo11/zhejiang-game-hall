package com.tkay.core.common.h;

public final class e extends com.tkay.core.common.h.a {
    public e() {
            r0 = this;
            r0.<init>()
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
            java.lang.String r0 = com.tkay.core.common.i.e()
            return r0
    }

    @Override
    protected final void b(com.tkay.core.api.AdError r1) {
            r0 = this;
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
            r2 = this;
            java.lang.String r0 = r2.g()     // Catch: java.lang.Exception -> Lb
            java.lang.String r1 = "utf-8"
            byte[] r0 = r0.getBytes(r1)     // Catch: java.lang.Exception -> Lb
            return r0
        Lb:
            java.lang.String r0 = r2.g()
            byte[] r0 = r0.getBytes()
            return r0
    }

    @Override
    protected final org.json.JSONObject e() {
            r4 = this;
            org.json.JSONObject r0 = super.e()
            java.lang.String r1 = "app_id"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = r2.o()     // Catch: java.lang.Exception -> L1a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = "curr_ts"
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L1a
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1a
        L1a:
            return r0
    }

    @Override
    protected final java.lang.String g() {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            org.json.JSONObject r1 = r5.e()
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tkay.core.common.l.c.a(r1)
            java.lang.String r2 = "api_ver"
            java.lang.String r3 = "1.0"
            r0.put(r2, r3)
            java.lang.String r2 = "p"
            r0.put(r2, r1)
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.size()
            r1.<init>(r2)
            java.util.Set r2 = r0.keySet()
            r1.addAll(r2)
            java.util.Collections.sort(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.util.Iterator r1 = r1.iterator()
        L39:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L60
            java.lang.Object r3 = r1.next()
            java.lang.String r3 = (java.lang.String) r3
            int r4 = r2.length()
            if (r4 <= 0) goto L50
            java.lang.String r4 = "&"
            r2.append(r4)
        L50:
            r2.append(r3)
            java.lang.String r4 = "="
            r2.append(r4)
            java.lang.Object r3 = r0.get(r3)
            r2.append(r3)
            goto L39
        L60:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            java.lang.String r3 = r3.p()
            r1.append(r3)
            java.lang.String r2 = r2.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tkay.core.common.l.f.c(r1)
            java.lang.String r2 = "sign"
            java.lang.String r3 = "utf-8"
            java.lang.String r1 = java.net.URLEncoder.encode(r1, r3)     // Catch: java.io.UnsupportedEncodingException -> L8b
            r0.put(r2, r1)     // Catch: java.io.UnsupportedEncodingException -> L8b
            goto L8f
        L8b:
            r1 = move-exception
            r1.printStackTrace()
        L8f:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }

    @Override
    protected final java.lang.String h() {
            r1 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.o()
            return r0
    }

    @Override
    protected final android.content.Context i() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final java.lang.String j() {
            r1 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.p()
            return r0
    }

    @Override
    protected final java.lang.String k() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.Object> l() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final boolean n() {
            r1 = this;
            r0 = 1
            return r0
    }
}
