package com.tkay.basead.g;

public final class f extends com.tkay.core.common.h.a {
    java.lang.String a;
    org.json.JSONObject b;
    int c;
    java.lang.String d;
    com.tkay.core.common.f.z e;
    java.util.Map<java.lang.String, java.lang.Object> f;

    public f(int r1, com.tkay.core.common.f.z r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.e = r2
            r0.f = r4
            r0.d = r3
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
            r1 = 0
            return r1
    }

    @Override
    protected final void a(com.tkay.core.api.AdError r20) {
            r19 = this;
            r0 = r19
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.util.Map r2 = r19.c()
            if (r2 == 0) goto L29
            java.util.Set r3 = r2.keySet()     // Catch: java.lang.Exception -> L29
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L29
        L15:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Exception -> L29
            if (r4 == 0) goto L29
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Exception -> L29
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L29
            java.lang.Object r5 = r2.get(r4)     // Catch: java.lang.Exception -> L29
            r1.put(r4, r5)     // Catch: java.lang.Exception -> L29
            goto L15
        L29:
            java.lang.String r9 = r1.toString()
            org.json.JSONObject r1 = r0.b
            if (r1 == 0) goto L36
            java.lang.String r1 = r1.toString()
            goto L38
        L36:
            java.lang.String r1 = ""
        L38:
            r10 = r1
            java.lang.String r8 = r19.b()
            r1 = 1000(0x3e8, float:1.401E-42)
            java.lang.String r11 = com.tkay.core.common.f.n.a(r1)
            com.tkay.core.common.u r6 = com.tkay.core.common.u.a()
            r7 = 1
            r6.a(r7, r8, r9, r10, r11)
            java.lang.String r13 = r20.getPlatformCode()
            java.lang.String r14 = r20.getPlatformMSG()
            java.lang.String r15 = r0.a
            java.lang.String r12 = "tk"
            java.lang.String r16 = ""
            java.lang.String r17 = "1"
            java.lang.String r18 = ""
            com.tkay.core.common.k.c.a(r12, r13, r14, r15, r16, r17, r18)
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
            r4 = this;
            java.lang.String r0 = r4.d     // Catch: java.lang.Exception -> L37
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L37
            if (r0 != 0) goto L3b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L37
            java.lang.String r1 = r4.d     // Catch: java.lang.Exception -> L37
            r0.<init>(r1)     // Catch: java.lang.Exception -> L37
            r4.b = r0     // Catch: java.lang.Exception -> L37
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.f     // Catch: java.lang.Exception -> L37
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Exception -> L37
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L37
        L1b:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L37
            if (r1 == 0) goto L3b
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L37
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Exception -> L37
            java.lang.Object r2 = r1.getKey()     // Catch: java.lang.Exception -> L37
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L37
            org.json.JSONObject r3 = r4.b     // Catch: java.lang.Exception -> L37
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Exception -> L37
            r3.put(r2, r1)     // Catch: java.lang.Exception -> L37
            goto L1b
        L37:
            r0 = move-exception
            r0.printStackTrace()
        L3b:
            com.tkay.core.common.i.a()
            java.lang.String r0 = com.tkay.core.common.i.g()
            r4.a = r0
            return r0
    }

    @Override
    protected final void b(com.tkay.core.api.AdError r1) {
            r0 = this;
            return
    }

    public final void b(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto L7
            return
        L7:
            org.json.JSONObject r0 = r2.b     // Catch: java.lang.Exception -> Lf
            java.lang.String r1 = "scenario"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> Lf
            return
        Lf:
            r3 = move-exception
            r3.printStackTrace()
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
            com.tkay.core.common.f.z r1 = r3.e
            if (r1 == 0) goto L34
            com.tkay.core.common.f.j r1 = r1.k()
            if (r1 == 0) goto L34
            int r2 = r3.c
            boolean r1 = com.tkay.basead.a.b.a(r2, r1)
            if (r1 == 0) goto L34
            java.lang.String r1 = com.tkay.core.common.l.d.i()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L34
            java.lang.String r2 = "User-Agent"
            r0.put(r2, r1)
        L34:
            return r0
    }

    @Override
    protected final byte[] d() {
            r1 = this;
            org.json.JSONObject r0 = r1.b
            java.lang.String r0 = r0.toString()
            byte[] r0 = c(r0)
            return r0
    }

    @Override
    protected final java.lang.String h() {
            r1 = this;
            r0 = 0
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
            r0 = 0
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
}
