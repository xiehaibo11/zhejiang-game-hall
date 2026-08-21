package com.alipay.sdk.packet;

public abstract class e {
    public static final java.lang.String a = "msp-gzip";
    public static final java.lang.String b = "Msp-Param";
    public static final java.lang.String c = "Operation-Type";
    public static final java.lang.String d = "content-type";
    public static final java.lang.String e = "Version";
    public static final java.lang.String f = "AppId";
    public static final java.lang.String g = "des-mode";
    public static final java.lang.String h = "namespace";
    public static final java.lang.String i = "api_name";
    public static final java.lang.String j = "api_version";
    public static final java.lang.String k = "data";
    public static final java.lang.String l = "params";
    public static final java.lang.String m = "public_key";
    public static final java.lang.String n = "device";
    public static final java.lang.String o = "action";
    public static final java.lang.String p = "type";
    public static final java.lang.String q = "method";
    protected boolean r;
    protected boolean s;

    public e() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.r = r0
            r1.s = r0
            return
    }

    private static java.lang.String a(com.alipay.sdk.net.a.b r2, java.lang.String r3) {
            r0 = 0
            if (r2 == 0) goto L1d
            if (r3 != 0) goto L6
            goto L1d
        L6:
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r1 = r2.a
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r2 = r2.a
            java.lang.Object r2 = r2.get(r3)
            java.util.List r2 = (java.util.List) r2
            if (r2 != 0) goto L16
            return r0
        L16:
            java.lang.String r3 = ","
            java.lang.String r2 = android.text.TextUtils.join(r3, r2)
            return r2
        L1d:
            return r0
    }

    protected static org.json.JSONObject a(java.lang.String r3, java.lang.String r4) throws org.json.JSONException {
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

    private static boolean a(com.alipay.sdk.net.a.b r1) {
            java.lang.String r0 = "msp-gzip"
            java.lang.String r1 = a(r1, r0)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            boolean r1 = r1.booleanValue()
            return r1
    }

    private boolean a(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "params"
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            r2 = 0
            if (r1 == 0) goto La
            return r2
        La:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L3b
            r1.<init>(r4)     // Catch: org.json.JSONException -> L3b
            java.lang.String r4 = "data"
            org.json.JSONObject r4 = r1.getJSONObject(r4)     // Catch: org.json.JSONException -> L3b
            boolean r1 = r4.has(r0)     // Catch: org.json.JSONException -> L3b
            if (r1 != 0) goto L1c
            return r2
        L1c:
            org.json.JSONObject r4 = r4.getJSONObject(r0)     // Catch: org.json.JSONException -> L3b
            java.lang.String r0 = "public_key"
            r1 = 0
            java.lang.String r4 = r4.optString(r0, r1)     // Catch: org.json.JSONException -> L3b
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: org.json.JSONException -> L3b
            if (r0 != 0) goto L3f
            com.alipay.sdk.sys.b r0 = com.alipay.sdk.sys.b.a()     // Catch: org.json.JSONException -> L3b
            com.alipay.sdk.data.c r0 = r0.c()     // Catch: org.json.JSONException -> L3b
            r0.a(r4)     // Catch: org.json.JSONException -> L3b
            r4 = 1
            r2 = 1
            goto L3f
        L3b:
            r4 = move-exception
            com.alipay.sdk.util.c.a(r4)
        L3f:
            return r2
    }

    public com.alipay.sdk.packet.b a(android.content.Context r2) throws java.lang.Throwable {
            r1 = this;
            java.lang.String r0 = ""
            com.alipay.sdk.packet.b r2 = r1.a(r2, r0)
            return r2
    }

    public com.alipay.sdk.packet.b a(android.content.Context r2, java.lang.String r3) throws java.lang.Throwable {
            r1 = this;
            java.lang.String r0 = com.alipay.sdk.util.m.a(r2)
            com.alipay.sdk.packet.b r2 = r1.a(r2, r3, r0)
            return r2
    }

    public com.alipay.sdk.packet.b a(android.content.Context r2, java.lang.String r3, java.lang.String r4) throws java.lang.Throwable {
            r1 = this;
            r0 = 1
            com.alipay.sdk.packet.b r2 = r1.a(r2, r3, r4, r0)
            return r2
    }

    protected com.alipay.sdk.packet.b a(android.content.Context r5, java.lang.String r6, java.lang.String r7, boolean r8) throws java.lang.Throwable {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PacketTask::request url >"
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = ""
            com.alipay.sdk.util.c.b(r1, r0)
            com.alipay.sdk.packet.c r0 = new com.alipay.sdk.packet.c
            boolean r1 = r4.s
            r0.<init>(r1)
            com.alipay.sdk.packet.b r1 = new com.alipay.sdk.packet.b
            java.lang.String r2 = r4.c()
            org.json.JSONObject r3 = r4.a()
            java.lang.String r3 = r4.a(r6, r3)
            r1.<init>(r2, r3)
            boolean r2 = r4.r
            com.alipay.sdk.packet.d r1 = r0.a(r1, r2)
            boolean r2 = r1.a()
            java.util.Map r2 = r4.a(r2, r6)
            com.alipay.sdk.net.a$a r3 = new com.alipay.sdk.net.a$a
            byte[] r1 = r1.b()
            r3.<init>(r7, r2, r1)
            com.alipay.sdk.net.a$b r1 = com.alipay.sdk.net.a.a(r5, r3)
            if (r1 == 0) goto L6e
            boolean r2 = a(r1)
            byte[] r1 = r1.c
            com.alipay.sdk.packet.d r3 = new com.alipay.sdk.packet.d
            r3.<init>(r2, r1)
            com.alipay.sdk.packet.b r0 = r0.a(r3)
            if (r0 == 0) goto L6d
            java.lang.String r1 = r0.a()
            boolean r1 = r4.a(r1)
            if (r1 == 0) goto L6d
            if (r8 == 0) goto L6d
            r8 = 0
            com.alipay.sdk.packet.b r0 = r4.a(r5, r6, r7, r8)
        L6d:
            return r0
        L6e:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.String r6 = "Response is null."
            r5.<init>(r6)
            throw r5
    }

    protected java.lang.String a(java.lang.String r6, org.json.JSONObject r7) {
            r5 = this;
            com.alipay.sdk.sys.b r0 = com.alipay.sdk.sys.b.a()
            android.content.Context r1 = r0.b()
            com.alipay.sdk.tid.b r1 = com.alipay.sdk.tid.b.a(r1)
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            org.json.JSONObject r7 = com.alipay.sdk.util.b.a(r2, r7)
            java.lang.String r2 = "tid"
            java.lang.String r3 = r1.a()     // Catch: java.lang.Throwable -> L77
            r7.put(r2, r3)     // Catch: java.lang.Throwable -> L77
            java.lang.String r2 = "user_agent"
            com.alipay.sdk.data.c r3 = r0.c()     // Catch: java.lang.Throwable -> L77
            java.lang.String r3 = r3.a(r1)     // Catch: java.lang.Throwable -> L77
            r7.put(r2, r3)     // Catch: java.lang.Throwable -> L77
            java.lang.String r2 = "has_alipay"
            android.content.Context r3 = r0.b()     // Catch: java.lang.Throwable -> L77
            java.util.List<com.alipay.sdk.data.a$a> r4 = com.alipay.sdk.app.i.a     // Catch: java.lang.Throwable -> L77
            boolean r3 = com.alipay.sdk.util.n.b(r3, r4)     // Catch: java.lang.Throwable -> L77
            r7.put(r2, r3)     // Catch: java.lang.Throwable -> L77
            java.lang.String r2 = "has_msp_app"
            android.content.Context r3 = r0.b()     // Catch: java.lang.Throwable -> L77
            boolean r3 = com.alipay.sdk.util.n.a(r3)     // Catch: java.lang.Throwable -> L77
            r7.put(r2, r3)     // Catch: java.lang.Throwable -> L77
            java.lang.String r2 = "external_info"
            r7.put(r2, r6)     // Catch: java.lang.Throwable -> L77
            java.lang.String r6 = "app_key"
            java.lang.String r2 = "2014052600006128"
            r7.put(r6, r2)     // Catch: java.lang.Throwable -> L77
            java.lang.String r6 = "utdid"
            java.lang.String r2 = r0.e()     // Catch: java.lang.Throwable -> L77
            r7.put(r6, r2)     // Catch: java.lang.Throwable -> L77
            java.lang.String r6 = "new_client_key"
            java.lang.String r1 = r1.b()     // Catch: java.lang.Throwable -> L77
            r7.put(r6, r1)     // Catch: java.lang.Throwable -> L77
            java.lang.String r6 = "pa"
            com.alipay.sdk.data.c r1 = r0.c()     // Catch: java.lang.Throwable -> L77
            android.content.Context r0 = r0.b()     // Catch: java.lang.Throwable -> L77
            java.lang.String r0 = r1.a(r0)     // Catch: java.lang.Throwable -> L77
            r7.put(r6, r0)     // Catch: java.lang.Throwable -> L77
            goto L7b
        L77:
            r6 = move-exception
            com.alipay.sdk.util.c.a(r6)
        L7b:
            java.lang.String r6 = r7.toString()
            return r6
    }

    protected java.lang.String a(java.util.HashMap<java.lang.String, java.lang.String> r5, java.util.HashMap<java.lang.String, java.lang.String> r6) throws org.json.JSONException {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            if (r5 == 0) goto L2e
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L14:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L2e
            java.lang.Object r2 = r5.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            r1.put(r3, r2)
            goto L14
        L2e:
            if (r6 == 0) goto L5c
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.util.Set r6 = r6.entrySet()
            java.util.Iterator r6 = r6.iterator()
        L3d:
            boolean r2 = r6.hasNext()
            if (r2 == 0) goto L57
            java.lang.Object r2 = r6.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            r5.put(r3, r2)
            goto L3d
        L57:
            java.lang.String r6 = "params"
            r1.put(r6, r5)
        L5c:
            java.lang.String r5 = "data"
            r0.put(r5, r1)
            java.lang.String r5 = r0.toString()
            return r5
    }

    protected java.util.Map<java.lang.String, java.lang.String> a(boolean r3, java.lang.String r4) {
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
            java.lang.String r3 = com.alipay.sdk.packet.a.a(r4)
            java.lang.String r4 = "Msp-Param"
            r0.put(r4, r3)
            java.lang.String r3 = "des-mode"
            java.lang.String r4 = "CBC"
            r0.put(r3, r4)
            return r0
    }

    protected abstract org.json.JSONObject a() throws org.json.JSONException;

    protected java.lang.String b() {
            r1 = this;
            java.lang.String r0 = "4.9.0"
            return r0
    }

    protected java.lang.String c() throws org.json.JSONException {
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
            java.lang.String r0 = r3.a(r0, r1)
            return r0
    }
}
