package com.huawei.hms.hatool;

public class u {
    public java.lang.String a;
    public java.lang.String b;
    public java.lang.String c;
    public java.util.List<com.huawei.hms.hatool.q> d;
    public java.lang.String e;

    public u(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.util.List<com.huawei.hms.hatool.q> r4, java.lang.String r5) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            r0.e = r5
            return
    }

    public final java.lang.String a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.huawei.hms.hatool.c.f(r4, r5)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = ""
            if (r1 == 0) goto L1d
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r4
            r4 = 1
            r0[r4] = r5
            java.lang.String r4 = "hmsSdk"
            java.lang.String r5 = "No report address,TAG : %s,TYPE: %s "
            com.huawei.hms.hatool.y.a(r4, r5, r0)
            return r2
        L1d:
            java.lang.String r4 = "oper"
            boolean r4 = r4.equals(r5)
            java.lang.String r1 = "{url}"
            if (r4 == 0) goto L2e
            java.lang.String r4 = "{url}/common/hmshioperqrt"
        L29:
            java.lang.String r2 = r4.replace(r1, r0)
            goto L44
        L2e:
            java.lang.String r4 = "maint"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L39
            java.lang.String r4 = "{url}/common/hmshimaintqrt"
            goto L29
        L39:
            java.lang.String r4 = "diffprivacy"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L44
            java.lang.String r4 = "{url}/common/common2"
            goto L29
        L44:
            return r2
    }

    public void a() {
            r9 = this;
            java.lang.String r0 = r9.a
            java.lang.String r1 = r9.b
            java.lang.String r4 = r9.a(r0, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r1 = "hmsSdk"
            if (r0 == 0) goto L20
            java.lang.String r0 = r9.b
            java.lang.String r2 = "preins"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L20
            java.lang.String r0 = "collectUrl is empty"
        L1c:
            com.huawei.hms.hatool.y.e(r1, r0)
            return
        L20:
            java.lang.String r0 = r9.a
            java.lang.String r2 = "_hms_config_tag"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L37
            java.lang.String r0 = r9.a
            java.lang.String r2 = "_openness_config_tag"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L37
            r9.b()
        L37:
            com.huawei.hms.hatool.r r0 = r9.d()
            if (r0 == 0) goto L5a
            byte[] r3 = r9.a(r0)
            int r0 = r3.length
            if (r0 != 0) goto L47
            java.lang.String r0 = "request body is empty"
            goto L1c
        L47:
            com.huawei.hms.hatool.i0 r0 = new com.huawei.hms.hatool.i0
            java.lang.String r5 = r9.a
            java.lang.String r6 = r9.b
            java.lang.String r7 = r9.e
            java.util.List<com.huawei.hms.hatool.q> r8 = r9.d
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7, r8)
            com.huawei.hms.hatool.n0 r1 = com.huawei.hms.hatool.n0.a()
            goto L6b
        L5a:
            com.huawei.hms.hatool.l0 r0 = new com.huawei.hms.hatool.l0
            java.util.List<com.huawei.hms.hatool.q> r1 = r9.d
            java.lang.String r2 = r9.a
            java.lang.String r3 = r9.e
            java.lang.String r4 = r9.b
            r0.<init>(r1, r2, r3, r4)
            com.huawei.hms.hatool.n0 r1 = com.huawei.hms.hatool.n0.b()
        L6b:
            r1.a(r0)
            return
    }

    public final byte[] a(com.huawei.hms.hatool.r r4) {
            r3 = this;
            java.lang.String r0 = "hmsSdk"
            r1 = 0
            org.json.JSONObject r4 = r4.a()     // Catch: java.io.UnsupportedEncodingException -> L20 org.json.JSONException -> L23
            if (r4 != 0) goto L11
            java.lang.String r4 = "uploadEvents is null"
            com.huawei.hms.hatool.y.e(r0, r4)     // Catch: java.io.UnsupportedEncodingException -> L20 org.json.JSONException -> L23
            byte[] r4 = new byte[r1]     // Catch: java.io.UnsupportedEncodingException -> L20 org.json.JSONException -> L23
            return r4
        L11:
            java.lang.String r4 = r4.toString()     // Catch: java.io.UnsupportedEncodingException -> L20 org.json.JSONException -> L23
            java.lang.String r2 = "UTF-8"
            byte[] r4 = r4.getBytes(r2)     // Catch: java.io.UnsupportedEncodingException -> L20 org.json.JSONException -> L23
            byte[] r4 = com.huawei.hms.hatool.r0.a(r4)     // Catch: java.io.UnsupportedEncodingException -> L20 org.json.JSONException -> L23
            return r4
        L20:
            java.lang.String r4 = "sendData(): getBytes - Unsupported coding format!!"
            goto L25
        L23:
            java.lang.String r4 = "uploadEvents to json error"
        L25:
            com.huawei.hms.hatool.y.e(r0, r4)
            byte[] r4 = new byte[r1]
            return r4
    }

    public final void b() {
            r6 = this;
            android.content.Context r0 = com.huawei.hms.hatool.b.f()
            java.lang.String r1 = "backup_event"
            r2 = 5242880(0x500000, float:7.34684E-39)
            boolean r0 = com.huawei.hms.hatool.p0.a(r0, r1, r2)
            java.lang.String r2 = "hmsSdk"
            if (r0 == 0) goto L16
            java.lang.String r0 = "backup file reach max limited size, discard new event "
            com.huawei.hms.hatool.y.d(r2, r0)
            return
        L16:
            org.json.JSONArray r0 = r6.c()
            java.lang.String r3 = r6.a
            java.lang.String r4 = r6.b
            java.lang.String r5 = r6.e
            java.lang.String r3 = com.huawei.hms.hatool.s0.a(r3, r4, r5)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Update data cached into backup,spKey: "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            com.huawei.hms.hatool.y.c(r2, r4)
            android.content.Context r2 = com.huawei.hms.hatool.b.f()
            java.lang.String r0 = r0.toString()
            com.huawei.hms.hatool.g0.b(r2, r1, r3, r0)
            return
    }

    public final org.json.JSONArray c() {
            r4 = this;
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            java.util.List<com.huawei.hms.hatool.q> r1 = r4.d
            java.util.Iterator r1 = r1.iterator()
        Lb:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()
            com.huawei.hms.hatool.q r2 = (com.huawei.hms.hatool.q) r2
            org.json.JSONObject r2 = r2.d()     // Catch: org.json.JSONException -> L1f
            r0.put(r2)
            goto Lb
        L1f:
            java.lang.String r2 = "hmsSdk"
            java.lang.String r3 = "handleEvents: json error,Abandon this data"
            com.huawei.hms.hatool.y.c(r2, r3)
            goto Lb
        L27:
            return r0
    }

    public final com.huawei.hms.hatool.r d() {
            r5 = this;
            java.util.List<com.huawei.hms.hatool.q> r0 = r5.d
            java.lang.String r1 = r5.a
            java.lang.String r2 = r5.b
            java.lang.String r3 = r5.e
            java.lang.String r4 = r5.c
            com.huawei.hms.hatool.r r0 = com.huawei.hms.hatool.b1.a(r0, r1, r2, r3, r4)
            return r0
    }
}
