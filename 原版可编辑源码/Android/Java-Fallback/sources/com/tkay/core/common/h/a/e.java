package com.tkay.core.common.h.a;

public final class e extends com.tkay.core.common.h.a.c {
    java.util.List<com.tkay.core.common.f.e> a;
    boolean b;
    private final java.lang.String c;

    public e(java.util.List<com.tkay.core.common.f.e> r2) {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.c = r0
            r1.a = r2
            return
    }

    private java.lang.String a(boolean r8) {
            r7 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = super.h()
            org.json.JSONObject r2 = com.tkay.core.common.h.c.a()
            java.lang.String r3 = "app_id"
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r4 = r4.o()     // Catch: java.lang.Throwable -> L7e
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r3 = "tcp_tk_da_type"
            int r4 = r7.i     // Catch: java.lang.Throwable -> L7e
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r3 = "tcp_rate"
            java.lang.String r4 = r7.j     // Catch: java.lang.Throwable -> L7e
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L7e
            java.util.Iterator r3 = r2.keys()     // Catch: java.lang.Throwable -> L7e
        L2c:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L7e
            if (r4 == 0) goto L40
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L7e
            java.lang.Object r5 = r2.opt(r4)     // Catch: java.lang.Throwable -> L7e
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L7e
            goto L2c
        L40:
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L7e
            java.util.Map r2 = r2.l()     // Catch: java.lang.Throwable -> L7e
            if (r2 == 0) goto L7e
            int r3 = r2.size()
            if (r3 <= 0) goto L7e
            if (r2 == 0) goto L7e
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            java.util.Set r4 = r2.keySet()
            java.util.Iterator r4 = r4.iterator()
        L5f:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L79
            java.lang.Object r5 = r4.next()
            java.lang.String r5 = (java.lang.String) r5
            java.lang.Object r6 = r2.get(r5)
            if (r6 == 0) goto L5f
            java.lang.String r6 = r6.toString()
            r3.put(r5, r6)
            goto L5f
        L79:
            java.lang.String r2 = "custom"
            r1.put(r2, r3)
        L7e:
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tkay.core.common.l.c.a(r1)
            org.json.JSONArray r2 = new org.json.JSONArray
            r2.<init>()
            java.util.List<com.tkay.core.common.f.e> r3 = r7.a
            if (r3 == 0) goto Lb6
            java.util.Iterator r3 = r3.iterator()
        L93:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto Lb6
            java.lang.Object r4 = r3.next()
            com.tkay.core.common.f.e r4 = (com.tkay.core.common.f.e) r4
            org.json.JSONObject r4 = r4.a()
            if (r8 == 0) goto Lb2
            if (r4 == 0) goto Lb2
            java.lang.String r5 = "ofl"
            r6 = 1
            r4.put(r5, r6)     // Catch: org.json.JSONException -> Lae
            goto Lb2
        Lae:
            r5 = move-exception
            r5.printStackTrace()
        Lb2:
            r2.put(r4)
            goto L93
        Lb6:
            java.lang.String r8 = r2.toString()
            java.lang.String r8 = com.tkay.core.common.l.c.a(r8)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            java.lang.String r3 = r3.p()
            r2.append(r3)
            java.lang.String r3 = "api_ver=1.0&common="
            r2.append(r3)
            r2.append(r1)
            java.lang.String r3 = "&data="
            r2.append(r3)
            r2.append(r8)
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = com.tkay.core.common.l.f.c(r2)
            java.lang.String r3 = "common"
            r0.put(r3, r1)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r1 = "data"
            r0.put(r1, r8)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r8 = "api_ver"
            java.lang.String r1 = "1.0"
            r0.put(r8, r1)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r8 = "sign"
            r0.put(r8, r2)     // Catch: java.lang.Exception -> Lfc
        Lfc:
            java.lang.String r8 = r0.toString()
            return r8
    }

    @Override
    public final void a(java.lang.String r9, java.lang.String r10, java.lang.String r11, int r12) {
            r8 = this;
            boolean r0 = r8.b
            if (r0 != 0) goto L47
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r11)
            java.lang.String r11 = ":"
            r0.append(r11)
            r0.append(r12)
            java.lang.String r4 = r0.toString()
            r5 = 0
            java.util.List<com.tkay.core.common.f.e> r11 = r8.a
            if (r11 == 0) goto L22
            int r11 = r11.size()
            goto L23
        L22:
            r11 = 0
        L23:
            java.lang.String r6 = java.lang.String.valueOf(r11)
            java.lang.String r1 = "tk"
            java.lang.String r7 = "1"
            r2 = r9
            r3 = r10
            com.tkay.core.common.k.c.a(r1, r2, r3, r4, r5, r6, r7)
            r9 = 1
            java.lang.String r4 = r8.a(r9)
            r9 = 1000(0x3e8, float:1.401E-42)
            java.lang.String r5 = com.tkay.core.common.f.n.a(r9)
            com.tkay.core.common.u r0 = com.tkay.core.common.u.a()
            r1 = 3
            java.lang.String r3 = ""
            java.lang.String r2 = ""
            r0.a(r1, r2, r3, r4, r5)
        L47:
            return
    }

    @Override
    public final int c() {
            r1 = this;
            r0 = 1
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
            r2 = this;
            java.util.List<com.tkay.core.common.f.e> r0 = r2.a
            r1 = 0
            if (r0 == 0) goto L14
            int r0 = r0.size()
            if (r0 <= 0) goto L14
            java.lang.String r0 = r2.a(r1)
            byte[] r0 = a(r0)
            return r0
        L14:
            byte[] r0 = new byte[r1]
            return r0
    }

    @Override
    public final boolean f() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    @Override
    protected final int g() {
            r1 = this;
            r0 = 6
            return r0
    }
}
