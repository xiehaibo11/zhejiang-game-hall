package com.alipay.sdk.m.p;

public abstract class e {
    public static final java.lang.String c = "msp-gzip";
    public static final java.lang.String d = "Msp-Param";
    public static final java.lang.String e = "Operation-Type";
    public static final java.lang.String f = "content-type";
    public static final java.lang.String g = "Version";
    public static final java.lang.String h = "AppId";
    public static final java.lang.String i = "des-mode";
    public static final java.lang.String j = "namespace";
    public static final java.lang.String k = "api_name";
    public static final java.lang.String l = "api_version";
    public static final java.lang.String m = "data";
    public static final java.lang.String n = "params";
    public static final java.lang.String o = "public_key";
    public static final java.lang.String p = "device";
    public static final java.lang.String q = "action";
    public static final java.lang.String r = "type";
    public static final java.lang.String s = "method";
    public boolean a;
    public boolean b;

    public e() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.a = r0
            r1.b = r0
            return
    }

    public static java.lang.String a(com.alipay.sdk.m.o.a.b r1, java.lang.String r2) {
            r0 = 0
            if (r1 == 0) goto L1b
            if (r2 != 0) goto L6
            goto L1b
        L6:
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r1 = r1.a
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.Object r1 = r1.get(r2)
            java.util.List r1 = (java.util.List) r1
            if (r1 != 0) goto L14
            return r0
        L14:
            java.lang.String r2 = ","
            java.lang.String r1 = android.text.TextUtils.join(r2, r1)
            return r1
        L1b:
            return r0
    }

    public static org.json.JSONObject a(java.lang.String r3, java.lang.String r4) throws org.json.JSONException {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "type"
            r1.put(r2, r3)
            java.lang.String r3 = "method"
            r1.put(r3, r4)
            java.lang.String r3 = "action"
            r0.put(r3, r1)
            return r0
    }

    public static boolean a(com.alipay.sdk.m.o.a.b r1) {
            java.lang.String r0 = "msp-gzip"
            java.lang.String r1 = a(r1, r0)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            boolean r1 = r1.booleanValue()
            return r1
    }

    public static boolean a(java.lang.String r3) {
            java.lang.String r0 = "params"
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            r2 = 0
            if (r1 == 0) goto La
            return r2
        La:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L32
            r1.<init>(r3)     // Catch: org.json.JSONException -> L32
            java.lang.String r3 = "data"
            org.json.JSONObject r3 = r1.getJSONObject(r3)     // Catch: org.json.JSONException -> L32
            boolean r1 = r3.has(r0)     // Catch: org.json.JSONException -> L32
            if (r1 != 0) goto L1c
            return r2
        L1c:
            org.json.JSONObject r3 = r3.getJSONObject(r0)     // Catch: org.json.JSONException -> L32
            java.lang.String r0 = "public_key"
            r1 = 0
            java.lang.String r3 = r3.optString(r0, r1)     // Catch: org.json.JSONException -> L32
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> L32
            if (r0 != 0) goto L36
            com.alipay.sdk.m.m.b.a(r3)     // Catch: org.json.JSONException -> L32
            r2 = 1
            goto L36
        L32:
            r3 = move-exception
            com.alipay.sdk.m.u.e.a(r3)
        L36:
            return r2
    }

    public com.alipay.sdk.m.p.b a(com.alipay.sdk.m.s.a r2, android.content.Context r3) throws java.lang.Throwable {
            r1 = this;
            java.lang.String r0 = ""
            com.alipay.sdk.m.p.b r2 = r1.a(r2, r3, r0)
            return r2
    }

    public com.alipay.sdk.m.p.b a(com.alipay.sdk.m.s.a r2, android.content.Context r3, java.lang.String r4) throws java.lang.Throwable {
            r1 = this;
            java.lang.String r0 = com.alipay.sdk.m.u.m.b(r3)
            com.alipay.sdk.m.p.b r2 = r1.a(r2, r3, r4, r0)
            return r2
    }

    public com.alipay.sdk.m.p.b a(com.alipay.sdk.m.s.a r7, android.content.Context r8, java.lang.String r9, java.lang.String r10) throws java.lang.Throwable {
            r6 = this;
            r5 = 1
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            com.alipay.sdk.m.p.b r7 = r0.a(r1, r2, r3, r4, r5)
            return r7
    }

    public com.alipay.sdk.m.p.b a(com.alipay.sdk.m.s.a r9, android.content.Context r10, java.lang.String r11, java.lang.String r12, boolean r13) throws java.lang.Throwable {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Packet: "
            r0.append(r1)
            r0.append(r12)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "mspl"
            com.alipay.sdk.m.u.e.b(r1, r0)
            com.alipay.sdk.m.p.c r0 = new com.alipay.sdk.m.p.c
            boolean r1 = r8.b
            r0.<init>(r1)
            com.alipay.sdk.m.p.b r1 = new com.alipay.sdk.m.p.b
            java.lang.String r2 = r8.a(r9)
            org.json.JSONObject r3 = r8.a()
            java.lang.String r3 = r8.a(r9, r11, r3)
            r1.<init>(r2, r3)
            r2 = 0
            java.util.Map r2 = r8.a(r2, r11)
            boolean r3 = r8.a
            java.lang.String r4 = "iSr"
            java.lang.Object r5 = r2.get(r4)
            java.lang.String r5 = (java.lang.String) r5
            com.alipay.sdk.m.p.d r1 = r0.a(r1, r3, r5)
            boolean r3 = r1.b()
            java.util.Map r3 = r8.a(r3, r11)
            com.alipay.sdk.m.o.a$a r5 = new com.alipay.sdk.m.o.a$a
            byte[] r1 = r1.a()
            r5.<init>(r12, r3, r1)
            com.alipay.sdk.m.o.a$b r1 = com.alipay.sdk.m.o.a.a(r10, r5)
            if (r1 == 0) goto L86
            boolean r3 = a(r1)
            byte[] r1 = r1.c
            com.alipay.sdk.m.p.d r5 = new com.alipay.sdk.m.p.d
            r5.<init>(r3, r1)
            java.lang.Object r1 = r2.get(r4)
            java.lang.String r1 = (java.lang.String) r1
            com.alipay.sdk.m.p.b r0 = r0.a(r5, r1)
            if (r0 == 0) goto L85
            java.lang.String r1 = r0.b()
            boolean r1 = a(r1)
            if (r1 == 0) goto L85
            if (r13 == 0) goto L85
            r7 = 0
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            com.alipay.sdk.m.p.b r0 = r2.a(r3, r4, r5, r6, r7)
        L85:
            return r0
        L86:
            java.lang.RuntimeException r9 = new java.lang.RuntimeException
            java.lang.String r10 = "Response is null."
            r9.<init>(r10)
            throw r9
    }

    public java.lang.String a(com.alipay.sdk.m.s.a r4) throws org.json.JSONException {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = android.os.Build.MODEL
            java.lang.String r2 = "device"
            r0.put(r2, r1)
            java.lang.String r1 = "namespace"
            java.lang.String r2 = "com.alipay.mobilecashier"
            r0.put(r1, r2)
            java.lang.String r1 = "api_name"
            java.lang.String r2 = "com.alipay.mcpay"
            r0.put(r1, r2)
            java.lang.String r1 = r3.b()
            java.lang.String r2 = "api_version"
            r0.put(r2, r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.String r4 = r3.a(r4, r0, r1)
            return r4
    }

    public java.lang.String a(com.alipay.sdk.m.s.a r6, java.lang.String r7, org.json.JSONObject r8) {
            r5 = this;
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.d()
            android.content.Context r1 = r0.b()
            com.alipay.sdk.m.t.a r1 = com.alipay.sdk.m.t.a.a(r1)
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            org.json.JSONObject r8 = com.alipay.sdk.m.u.d.a(r2, r8)
            java.lang.String r2 = "external_info"
            r8.put(r2, r7)     // Catch: java.lang.Throwable -> L78
            java.lang.String r7 = "tid"
            java.lang.String r2 = r1.d()     // Catch: java.lang.Throwable -> L78
            r8.put(r7, r2)     // Catch: java.lang.Throwable -> L78
            java.lang.String r7 = "user_agent"
            com.alipay.sdk.m.m.b r2 = r0.a()     // Catch: java.lang.Throwable -> L78
            boolean r3 = r5.c()     // Catch: java.lang.Throwable -> L78
            java.lang.String r2 = r2.a(r6, r1, r3)     // Catch: java.lang.Throwable -> L78
            r8.put(r7, r2)     // Catch: java.lang.Throwable -> L78
            java.lang.String r7 = "has_alipay"
            android.content.Context r2 = r0.b()     // Catch: java.lang.Throwable -> L78
            java.util.List<com.alipay.sdk.m.m.a$b> r3 = com.alipay.sdk.m.j.a.d     // Catch: java.lang.Throwable -> L78
            r4 = 0
            boolean r2 = com.alipay.sdk.m.u.n.a(r6, r2, r3, r4)     // Catch: java.lang.Throwable -> L78
            r8.put(r7, r2)     // Catch: java.lang.Throwable -> L78
            java.lang.String r7 = "has_msp_app"
            android.content.Context r2 = r0.b()     // Catch: java.lang.Throwable -> L78
            boolean r2 = com.alipay.sdk.m.u.n.h(r2)     // Catch: java.lang.Throwable -> L78
            r8.put(r7, r2)     // Catch: java.lang.Throwable -> L78
            java.lang.String r7 = "app_key"
            java.lang.String r2 = "2014052600006128"
            r8.put(r7, r2)     // Catch: java.lang.Throwable -> L78
            java.lang.String r7 = "utdid"
            java.lang.String r2 = r0.c()     // Catch: java.lang.Throwable -> L78
            r8.put(r7, r2)     // Catch: java.lang.Throwable -> L78
            java.lang.String r7 = "new_client_key"
            java.lang.String r1 = r1.c()     // Catch: java.lang.Throwable -> L78
            r8.put(r7, r1)     // Catch: java.lang.Throwable -> L78
            java.lang.String r7 = "pa"
            android.content.Context r0 = r0.b()     // Catch: java.lang.Throwable -> L78
            java.lang.String r0 = com.alipay.sdk.m.m.b.b(r0)     // Catch: java.lang.Throwable -> L78
            r8.put(r7, r0)     // Catch: java.lang.Throwable -> L78
            goto L83
        L78:
            r7 = move-exception
            java.lang.String r0 = "biz"
            java.lang.String r1 = "BodyErr"
            com.alipay.sdk.m.k.a.a(r6, r0, r1, r7)
            com.alipay.sdk.m.u.e.a(r7)
        L83:
            java.lang.String r6 = r8.toString()
            return r6
    }

    public java.lang.String a(com.alipay.sdk.m.s.a r4, java.util.HashMap<java.lang.String, java.lang.String> r5, java.util.HashMap<java.lang.String, java.lang.String> r6) throws org.json.JSONException {
            r3 = this;
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            if (r5 == 0) goto L2e
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L14:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L2e
            java.lang.Object r1 = r5.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            r0.put(r2, r1)
            goto L14
        L2e:
            if (r6 == 0) goto L5c
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.util.Set r6 = r6.entrySet()
            java.util.Iterator r6 = r6.iterator()
        L3d:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L57
            java.lang.Object r1 = r6.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            r5.put(r2, r1)
            goto L3d
        L57:
            java.lang.String r6 = "params"
            r0.put(r6, r5)
        L5c:
            java.lang.String r5 = "data"
            r4.put(r5, r0)
            java.lang.String r4 = r4.toString()
            return r4
    }

    public java.util.Map<java.lang.String, java.lang.String> a(boolean r3, java.lang.String r4) {
            r2 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "msp-gzip"
            r0.put(r1, r3)
            java.lang.String r3 = "Operation-Type"
            java.lang.String r1 = "alipay.msp.cashier.dispatch.bytes"
            r0.put(r3, r1)
            java.lang.String r3 = "content-type"
            java.lang.String r1 = "application/octet-stream"
            r0.put(r3, r1)
            java.lang.String r3 = "Version"
            java.lang.String r1 = "2.0"
            r0.put(r3, r1)
            java.lang.String r3 = "AppId"
            java.lang.String r1 = "TAOBAO"
            r0.put(r3, r1)
            java.lang.String r3 = com.alipay.sdk.m.p.a.a(r4)
            java.lang.String r4 = "Msp-Param"
            r0.put(r4, r3)
            java.lang.String r3 = "des-mode"
            java.lang.String r4 = "CBC"
            r0.put(r3, r4)
            return r0
    }

    public abstract org.json.JSONObject a() throws org.json.JSONException;

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = "4.9.0"
            return r0
    }

    public abstract boolean c();
}
