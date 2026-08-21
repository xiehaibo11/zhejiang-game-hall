package com.tkay.basead.g;

public final class b extends com.tkay.core.common.h.a {
    java.lang.String a;
    org.json.JSONObject b;

    public b(int r4, com.tkay.core.common.f.r r5, java.lang.String r6) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = ""
            switch(r4) {
                case 1: goto L31;
                case 2: goto L2c;
                case 3: goto L27;
                case 4: goto L22;
                case 5: goto L1d;
                case 6: goto L18;
                case 7: goto L13;
                case 8: goto Le;
                case 9: goto L9;
                default: goto L8;
            }     // Catch: java.lang.Exception -> L93
        L8:
            goto L35
        L9:
            java.lang.String r0 = r5.Y()     // Catch: java.lang.Exception -> L93
            goto L35
        Le:
            java.lang.String r0 = r5.X()     // Catch: java.lang.Exception -> L93
            goto L35
        L13:
            java.lang.String r0 = r5.W()     // Catch: java.lang.Exception -> L93
            goto L35
        L18:
            java.lang.String r0 = r5.V()     // Catch: java.lang.Exception -> L93
            goto L35
        L1d:
            java.lang.String r0 = r5.U()     // Catch: java.lang.Exception -> L93
            goto L35
        L22:
            java.lang.String r0 = r5.T()     // Catch: java.lang.Exception -> L93
            goto L35
        L27:
            java.lang.String r0 = r5.S()     // Catch: java.lang.Exception -> L93
            goto L35
        L2c:
            java.lang.String r0 = r5.R()     // Catch: java.lang.Exception -> L93
            goto L35
        L31:
            java.lang.String r0 = r5.Q()     // Catch: java.lang.Exception -> L93
        L35:
            java.lang.String r4 = r5.R(r0)     // Catch: java.lang.Exception -> L93
            android.net.Uri r4 = android.net.Uri.parse(r4)     // Catch: java.lang.Exception -> L93
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L93
            r5.<init>()     // Catch: java.lang.Exception -> L93
            java.lang.String r0 = r4.getScheme()     // Catch: java.lang.Exception -> L93
            r5.append(r0)     // Catch: java.lang.Exception -> L93
            java.lang.String r0 = "://"
            r5.append(r0)     // Catch: java.lang.Exception -> L93
            java.lang.String r0 = r4.getAuthority()     // Catch: java.lang.Exception -> L93
            r5.append(r0)     // Catch: java.lang.Exception -> L93
            java.lang.String r0 = r4.getPath()     // Catch: java.lang.Exception -> L93
            r5.append(r0)     // Catch: java.lang.Exception -> L93
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L93
            r3.a = r5     // Catch: java.lang.Exception -> L93
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L93
            r5.<init>()     // Catch: java.lang.Exception -> L93
            r3.b = r5     // Catch: java.lang.Exception -> L93
            java.util.Set r5 = r4.getQueryParameterNames()     // Catch: java.lang.Exception -> L93
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Exception -> L93
        L71:
            boolean r0 = r5.hasNext()     // Catch: java.lang.Exception -> L93
            if (r0 == 0) goto L8b
            java.lang.Object r0 = r5.next()     // Catch: java.lang.Exception -> L93
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L93
            org.json.JSONObject r1 = r3.b     // Catch: java.lang.Exception -> L93
            java.lang.String r2 = r4.getQueryParameter(r0)     // Catch: java.lang.Exception -> L93
            java.lang.String r2 = java.net.URLEncoder.encode(r2)     // Catch: java.lang.Exception -> L93
            r1.put(r0, r2)     // Catch: java.lang.Exception -> L93
            goto L71
        L8b:
            org.json.JSONObject r4 = r3.b     // Catch: java.lang.Exception -> L93
            java.lang.String r5 = "req_id"
            r4.put(r5, r6)     // Catch: java.lang.Exception -> L93
            return
        L93:
            r4 = move-exception
            r4.printStackTrace()
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
            r1 = this;
            java.lang.String r0 = r1.a
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
            return r0
    }

    @Override
    protected final byte[] d() {
            r4 = this;
            org.json.JSONObject r0 = r4.b
            if (r0 == 0) goto L1c
            java.lang.String r1 = "t"
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L11
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L11
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L11
        L11:
            org.json.JSONObject r0 = r4.b
            java.lang.String r0 = r0.toString()
            byte[] r0 = c(r0)
            return r0
        L1c:
            r0 = 0
            byte[] r0 = new byte[r0]
            return r0
    }

    @Override
    protected final java.lang.String g() {
            r1 = this;
            java.lang.String r0 = ""
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
