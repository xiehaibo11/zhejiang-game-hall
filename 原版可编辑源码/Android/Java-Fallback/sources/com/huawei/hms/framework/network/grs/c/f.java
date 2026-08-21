package com.huawei.hms.framework.network.grs.c;

public class f {
    private static final java.lang.String a = "f";
    private java.util.Map<java.lang.String, java.util.List<java.lang.String>> b;
    private byte[] c;
    private int d;
    private long e;
    private long f;
    private long g;
    private java.lang.String h;
    private int i;
    private int j;
    private java.lang.String k;
    private java.lang.String l;
    private java.lang.String m;
    private long n;
    private java.lang.Exception o;
    private java.lang.String p;
    private int q;

    public f(int r3, java.util.Map<java.lang.String, java.util.List<java.lang.String>> r4, byte[] r5, long r6) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.d = r0
            r0 = 2
            r2.i = r0
            r0 = 9001(0x2329, float:1.2613E-41)
            r2.j = r0
            java.lang.String r0 = ""
            r2.k = r0
            r2.l = r0
            r2.m = r0
            r0 = 0
            r2.n = r0
            r2.d = r3
            r2.b = r4
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.wrap(r5)
            byte[] r3 = r3.array()
            r2.c = r3
            r2.e = r6
            r2.q()
            return
    }

    public f(java.lang.Exception r3, long r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.d = r0
            r0 = 2
            r2.i = r0
            r0 = 9001(0x2329, float:1.2613E-41)
            r2.j = r0
            java.lang.String r0 = ""
            r2.k = r0
            r2.l = r0
            r2.m = r0
            r0 = 0
            r2.n = r0
            r2.o = r3
            r2.e = r4
            return
    }

    private void a(java.util.Map<java.lang.String, java.lang.String> r12) {
            r11 = this;
            if (r12 == 0) goto Le5
            int r0 = r12.size()
            if (r0 > 0) goto La
            goto Le5
        La:
            java.lang.String r0 = "Cache-Control"
            boolean r1 = r12.containsKey(r0)
            r2 = 1000(0x3e8, double:4.94E-321)
            r4 = 0
            r6 = 0
            r7 = 1
            if (r1 == 0) goto L57
            java.lang.Object r12 = r12.get(r0)
            java.lang.String r12 = (java.lang.String) r12
            boolean r0 = android.text.TextUtils.isEmpty(r12)
            if (r0 != 0) goto Lb9
            java.lang.String r0 = "max-age="
            boolean r1 = r12.contains(r0)
            if (r1 == 0) goto Lb9
            int r0 = r12.indexOf(r0)     // Catch: java.lang.NumberFormatException -> L4d
            int r0 = r0 + 8
            java.lang.String r12 = r12.substring(r0)     // Catch: java.lang.NumberFormatException -> L4d
            long r0 = java.lang.Long.parseLong(r12)     // Catch: java.lang.NumberFormatException -> L4d
            java.lang.String r12 = com.huawei.hms.framework.network.grs.c.f.a     // Catch: java.lang.NumberFormatException -> L4b
            java.lang.String r8 = "Cache-Control value{%s}"
            java.lang.Object[] r9 = new java.lang.Object[r7]     // Catch: java.lang.NumberFormatException -> L4b
            java.lang.Long r10 = java.lang.Long.valueOf(r0)     // Catch: java.lang.NumberFormatException -> L4b
            r9[r6] = r10     // Catch: java.lang.NumberFormatException -> L4b
            com.huawei.hms.framework.common.Logger.v(r12, r8, r9)     // Catch: java.lang.NumberFormatException -> L4b
            goto Lba
        L4b:
            r12 = move-exception
            goto L4f
        L4d:
            r12 = move-exception
            r0 = r4
        L4f:
            java.lang.String r8 = com.huawei.hms.framework.network.grs.c.f.a
            java.lang.String r9 = "getExpireTime addHeadersToResult NumberFormatException"
            com.huawei.hms.framework.common.Logger.w(r8, r9, r12)
            goto Lba
        L57:
            java.lang.String r0 = "Expires"
            boolean r1 = r12.containsKey(r0)
            if (r1 == 0) goto Lb2
            java.lang.Object r0 = r12.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = com.huawei.hms.framework.network.grs.c.f.a
            java.lang.Object[] r8 = new java.lang.Object[r7]
            r8[r6] = r0
            java.lang.String r9 = "expires is{%s}"
            com.huawei.hms.framework.common.Logger.v(r1, r9, r8)
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.util.Locale r8 = java.util.Locale.ROOT
            java.lang.String r9 = "EEE, d MMM yyyy HH:mm:ss 'GMT'"
            r1.<init>(r9, r8)
            r8 = 0
            java.lang.String r9 = "Date"
            boolean r10 = r12.containsKey(r9)
            if (r10 == 0) goto L89
            java.lang.Object r12 = r12.get(r9)
            r8 = r12
            java.lang.String r8 = (java.lang.String) r8
        L89:
            java.util.Date r12 = r1.parse(r0)     // Catch: java.text.ParseException -> La9
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: java.text.ParseException -> La9
            if (r0 == 0) goto L99
            java.util.Date r0 = new java.util.Date     // Catch: java.text.ParseException -> La9
            r0.<init>()     // Catch: java.text.ParseException -> La9
            goto L9d
        L99:
            java.util.Date r0 = r1.parse(r8)     // Catch: java.text.ParseException -> La9
        L9d:
            long r8 = r12.getTime()     // Catch: java.text.ParseException -> La9
            long r0 = r0.getTime()     // Catch: java.text.ParseException -> La9
            long r8 = r8 - r0
            long r0 = r8 / r2
            goto Lba
        La9:
            r12 = move-exception
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.f.a
            java.lang.String r1 = "getExpireTime ParseException."
            com.huawei.hms.framework.common.Logger.w(r0, r1, r12)
            goto Lb9
        Lb2:
            java.lang.String r12 = com.huawei.hms.framework.network.grs.c.f.a
            java.lang.String r0 = "response headers neither contains Cache-Control nor Expires."
            com.huawei.hms.framework.common.Logger.i(r12, r0)
        Lb9:
            r0 = r4
        Lba:
            int r12 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r12 <= 0) goto Lc5
            r4 = 2592000(0x278d00, double:1.280618E-317)
            int r12 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r12 <= 0) goto Lc8
        Lc5:
            r0 = 86400(0x15180, double:4.26873E-319)
        Lc8:
            long r0 = r0 * r2
            java.lang.String r12 = com.huawei.hms.framework.network.grs.c.f.a
            java.lang.Object[] r2 = new java.lang.Object[r7]
            java.lang.Long r3 = java.lang.Long.valueOf(r0)
            r2[r6] = r3
            java.lang.String r3 = "convert expireTime{%s}"
            com.huawei.hms.framework.common.Logger.v(r12, r3, r2)
            long r2 = java.lang.System.currentTimeMillis()
            long r0 = r0 + r2
            java.lang.String r12 = java.lang.String.valueOf(r0)
            r11.b(r12)
            return
        Le5:
            java.lang.String r12 = com.huawei.hms.framework.network.grs.c.f.a
            java.lang.String r0 = "getExpireTime {headers == null} or {headers.size() <= 0}"
            com.huawei.hms.framework.common.Logger.w(r12, r0)
            return
    }

    private void b(int r1) {
            r0 = this;
            r0.j = r1
            return
    }

    private void b(java.lang.String r1) {
            r0 = this;
            r0.m = r1
            return
    }

    private void b(java.util.Map<java.lang.String, java.lang.String> r6) {
            r5 = this;
            if (r6 == 0) goto L44
            int r0 = r6.size()
            if (r0 > 0) goto L9
            goto L44
        L9:
            r0 = 0
            java.lang.String r2 = "Retry-After"
            boolean r3 = r6.containsKey(r2)
            if (r3 == 0) goto L2c
            java.lang.Object r6 = r6.get(r2)
            java.lang.String r6 = (java.lang.String) r6
            boolean r2 = android.text.TextUtils.isEmpty(r6)
            if (r2 != 0) goto L2c
            long r0 = java.lang.Long.parseLong(r6)     // Catch: java.lang.NumberFormatException -> L24
            goto L2c
        L24:
            r6 = move-exception
            java.lang.String r2 = com.huawei.hms.framework.network.grs.c.f.a
            java.lang.String r3 = "getRetryAfter addHeadersToResult NumberFormatException"
            com.huawei.hms.framework.common.Logger.w(r2, r3, r6)
        L2c:
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            java.lang.String r6 = com.huawei.hms.framework.network.grs.c.f.a
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.Long r3 = java.lang.Long.valueOf(r0)
            r4 = 0
            r2[r4] = r3
            java.lang.String r3 = "convert retry-afterTime{%s}"
            com.huawei.hms.framework.common.Logger.v(r6, r3, r2)
            r5.c(r0)
            return
        L44:
            java.lang.String r6 = com.huawei.hms.framework.network.grs.c.f.a
            java.lang.String r0 = "getExpireTime {headers == null} or {headers.size() <= 0}"
            com.huawei.hms.framework.common.Logger.w(r6, r0)
            return
    }

    private void c(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    private void c(long r1) {
            r0 = this;
            r0.n = r1
            return
    }

    private void c(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    private void d(java.lang.String r1) {
            r0 = this;
            r0.l = r1
            return
    }

    private void e(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    private void n() {
            r10 = this;
            java.lang.String r0 = "errorDesc"
            java.lang.String r1 = "errorList"
            java.lang.String r2 = "errorCode"
            java.lang.String r3 = "isSuccess"
            boolean r4 = r10.m()
            r5 = 2
            if (r4 != 0) goto L1a
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.f.a
            java.lang.String r1 = "GRSSDK parse server body all failed."
            com.huawei.hms.framework.common.Logger.i(r0, r1)
            r10.c(r5)
            return
        L1a:
            byte[] r4 = r10.c     // Catch: org.json.JSONException -> L96
            java.lang.String r4 = com.huawei.hms.framework.common.StringUtils.byte2Str(r4)     // Catch: org.json.JSONException -> L96
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: org.json.JSONException -> L96
            r6.<init>(r4)     // Catch: org.json.JSONException -> L96
            r7 = -1
            boolean r8 = r6.has(r3)     // Catch: org.json.JSONException -> L96
            java.lang.String r9 = "resultCode"
            if (r8 == 0) goto L2f
            goto L36
        L2f:
            boolean r3 = r6.has(r9)     // Catch: org.json.JSONException -> L96
            if (r3 == 0) goto L3b
            r3 = r9
        L36:
            int r7 = r6.getInt(r3)     // Catch: org.json.JSONException -> L96
            goto L42
        L3b:
            java.lang.String r3 = com.huawei.hms.framework.network.grs.c.f.a     // Catch: org.json.JSONException -> L96
            java.lang.String r8 = "sth. wrong because server errorcode's key."
            com.huawei.hms.framework.common.Logger.e(r3, r8)     // Catch: org.json.JSONException -> L96
        L42:
            r10.c(r7)     // Catch: org.json.JSONException -> L96
            r3 = 1
            java.lang.String r8 = "services"
            if (r7 != 0) goto L52
            boolean r4 = r4.contains(r8)     // Catch: org.json.JSONException -> L96
            if (r4 == 0) goto L52
            r4 = r3
            goto L53
        L52:
            r4 = 0
        L53:
            java.lang.String r9 = ""
            if (r7 == r3) goto L7b
            if (r4 == 0) goto L5a
            goto L7b
        L5a:
            r10.c(r5)     // Catch: org.json.JSONException -> L96
            boolean r1 = r6.has(r2)     // Catch: org.json.JSONException -> L96
            if (r1 == 0) goto L68
            int r1 = r6.getInt(r2)     // Catch: org.json.JSONException -> L96
            goto L6a
        L68:
            r1 = 9001(0x2329, float:1.2613E-41)
        L6a:
            r10.b(r1)     // Catch: org.json.JSONException -> L96
            boolean r1 = r6.has(r0)     // Catch: org.json.JSONException -> L96
            if (r1 == 0) goto L77
            java.lang.String r9 = r6.getString(r0)     // Catch: org.json.JSONException -> L96
        L77:
            r10.c(r9)     // Catch: org.json.JSONException -> L96
            goto La1
        L7b:
            org.json.JSONObject r0 = r6.getJSONObject(r8)     // Catch: org.json.JSONException -> L96
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L96
            r10.e(r0)     // Catch: org.json.JSONException -> L96
            if (r4 == 0) goto La1
            boolean r0 = r6.has(r1)     // Catch: org.json.JSONException -> L96
            if (r0 == 0) goto L92
            java.lang.String r9 = r6.getString(r1)     // Catch: org.json.JSONException -> L96
        L92:
            r10.d(r9)     // Catch: org.json.JSONException -> L96
            goto La1
        L96:
            r0 = move-exception
            java.lang.String r1 = com.huawei.hms.framework.network.grs.c.f.a
            java.lang.String r2 = "GrsResponse GrsResponse(String result) JSONException"
            com.huawei.hms.framework.common.Logger.w(r1, r2, r0)
            r10.c(r5)
        La1:
            return
    }

    private void o() {
            r3 = this;
            boolean r0 = r3.m()
            if (r0 != 0) goto Ld
            boolean r0 = r3.l()
            if (r0 != 0) goto Ld
            return
        Ld:
            java.util.Map r0 = r3.p()
            boolean r1 = r3.m()     // Catch: org.json.JSONException -> L24
            if (r1 == 0) goto L1a
            r3.a(r0)     // Catch: org.json.JSONException -> L24
        L1a:
            boolean r1 = r3.l()     // Catch: org.json.JSONException -> L24
            if (r1 == 0) goto L2c
            r3.b(r0)     // Catch: org.json.JSONException -> L24
            goto L2c
        L24:
            r0 = move-exception
            java.lang.String r1 = com.huawei.hms.framework.network.grs.c.f.a
            java.lang.String r2 = "parseHeader catch JSONException"
            com.huawei.hms.framework.common.Logger.w(r1, r2, r0)
        L2c:
            return
    }

    private java.util.Map<java.lang.String, java.lang.String> p() {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 16
            r0.<init>(r1)
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r1 = r5.b
            if (r1 == 0) goto L3e
            int r1 = r1.size()
            if (r1 > 0) goto L12
            goto L3e
        L12:
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r1 = r5.b
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L1c:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L3d
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            java.util.List r2 = (java.util.List) r2
            r4 = 0
            java.lang.Object r2 = r2.get(r4)
            r0.put(r3, r2)
            goto L1c
        L3d:
            return r0
        L3e:
            java.lang.String r1 = com.huawei.hms.framework.network.grs.c.f.a
            java.lang.String r2 = "parseRespHeaders {respHeaders == null} or {respHeaders.size() <= 0}"
            com.huawei.hms.framework.common.Logger.v(r1, r2)
            return r0
    }

    private void q() {
            r0 = this;
            r0.o()
            r0.n()
            return
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.m
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.q = r1
            return
    }

    public void a(long r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public int b() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public void b(long r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public int c() {
            r1 = this;
            int r0 = r1.j
            return r0
    }

    public java.lang.Exception d() {
            r1 = this;
            java.lang.Exception r0 = r1.o
            return r0
    }

    public int e() {
            r1 = this;
            int r0 = r1.i
            return r0
    }

    public long f() {
            r2 = this;
            long r0 = r2.g
            return r0
    }

    public long g() {
            r2 = this;
            long r0 = r2.f
            return r0
    }

    public long h() {
            r2 = this;
            long r0 = r2.e
            return r0
    }

    public java.lang.String i() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public long j() {
            r2 = this;
            long r0 = r2.n
            return r0
    }

    public java.lang.String k() {
            r1 = this;
            java.lang.String r0 = r1.p
            return r0
    }

    public boolean l() {
            r2 = this;
            int r0 = r2.d
            r1 = 503(0x1f7, float:7.05E-43)
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public boolean m() {
            r2 = this;
            int r0 = r2.d
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }
}
