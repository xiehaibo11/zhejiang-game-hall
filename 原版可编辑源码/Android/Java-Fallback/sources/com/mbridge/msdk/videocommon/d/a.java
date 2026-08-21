package com.mbridge.msdk.videocommon.d;

public class a {
    private java.util.Map<java.lang.String, java.lang.Integer> a;
    private java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.b.d> b;
    private long c;
    private long d;
    private long e;
    private long f;
    private long g;
    private long h;
    private int i;
    private java.lang.String j;
    private java.lang.String k;

    public a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.i = r0
            java.lang.String r0 = ""
            r1.k = r0
            return
    }

    public static com.mbridge.msdk.videocommon.d.a a(java.lang.String r9) {
            java.lang.String r0 = ""
            boolean r1 = android.text.TextUtils.isEmpty(r9)
            r2 = 0
            if (r1 != 0) goto Lc3
            com.mbridge.msdk.videocommon.d.a r1 = new com.mbridge.msdk.videocommon.d.a     // Catch: java.lang.Exception -> Lbf
            r1.<init>()     // Catch: java.lang.Exception -> Lbf
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lbc
            r2.<init>(r9)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r9 = "caplist"
            org.json.JSONObject r9 = r2.optJSONObject(r9)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r3 = "ab_id"
            java.lang.String r3 = r2.optString(r3, r0)     // Catch: java.lang.Exception -> Lbc
            r1.j = r3     // Catch: java.lang.Exception -> Lbc
            if (r9 == 0) goto L6e
            int r3 = r9.length()     // Catch: java.lang.Exception -> Lbc
            if (r3 <= 0) goto L6e
            java.util.HashMap r3 = new java.util.HashMap     // Catch: java.lang.Exception -> Lbc
            r3.<init>()     // Catch: java.lang.Exception -> Lbc
            java.util.Iterator r4 = r9.keys()     // Catch: java.lang.Exception -> Lbc
        L32:
            if (r4 == 0) goto L6c
            boolean r5 = r4.hasNext()     // Catch: java.lang.Exception -> Lbc
            if (r5 == 0) goto L6c
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Exception -> Lbc
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> Lbc
            r6 = 1000(0x3e8, float:1.401E-42)
            int r7 = r9.optInt(r5, r6)     // Catch: java.lang.Exception -> Lbc
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> Lbc
            int r7 = r7.intValue()     // Catch: java.lang.Exception -> Lbc
            boolean r8 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> Lbc
            if (r8 != 0) goto L32
            boolean r8 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> Lbc
            if (r8 != 0) goto L64
            if (r7 != 0) goto L64
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Exception -> Lbc
            r3.put(r5, r6)     // Catch: java.lang.Exception -> Lbc
            goto L32
        L64:
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> Lbc
            r3.put(r5, r6)     // Catch: java.lang.Exception -> Lbc
            goto L32
        L6c:
            r1.a = r3     // Catch: java.lang.Exception -> Lbc
        L6e:
            java.lang.String r9 = "reward"
            org.json.JSONArray r9 = r2.optJSONArray(r9)     // Catch: java.lang.Exception -> Lbc
            java.util.Map r9 = com.mbridge.msdk.videocommon.b.d.a(r9)     // Catch: java.lang.Exception -> Lbc
            r1.b = r9     // Catch: java.lang.Exception -> Lbc
            java.lang.String r9 = "getpf"
            r3 = 43200(0xa8c0, double:2.13436E-319)
            long r3 = r2.optLong(r9, r3)     // Catch: java.lang.Exception -> Lbc
            r1.c = r3     // Catch: java.lang.Exception -> Lbc
            java.lang.String r9 = "ruct"
            r3 = 5400(0x1518, double:2.668E-320)
            long r3 = r2.optLong(r9, r3)     // Catch: java.lang.Exception -> Lbc
            r1.d = r3     // Catch: java.lang.Exception -> Lbc
            java.lang.String r9 = "plct"
            r3 = 3600(0xe10, double:1.7786E-320)
            long r5 = r2.optLong(r9, r3)     // Catch: java.lang.Exception -> Lbc
            r1.e = r5     // Catch: java.lang.Exception -> Lbc
            java.lang.String r9 = "dlct"
            long r3 = r2.optLong(r9, r3)     // Catch: java.lang.Exception -> Lbc
            r1.f = r3     // Catch: java.lang.Exception -> Lbc
            java.lang.String r9 = "vcct"
            r3 = 5
            long r3 = r2.optLong(r9, r3)     // Catch: java.lang.Exception -> Lbc
            r1.g = r3     // Catch: java.lang.Exception -> Lbc
            java.lang.String r9 = "current_time"
            long r3 = r2.optLong(r9)     // Catch: java.lang.Exception -> Lbc
            r1.h = r3     // Catch: java.lang.Exception -> Lbc
            java.lang.String r9 = "vtag"
            java.lang.String r9 = r2.optString(r9, r0)     // Catch: java.lang.Exception -> Lbc
            r1.k = r9     // Catch: java.lang.Exception -> Lbc
            return r1
        Lbc:
            r9 = move-exception
            r2 = r1
            goto Lc0
        Lbf:
            r9 = move-exception
        Lc0:
            r9.printStackTrace()
        Lc3:
            return r2
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public final void a(long r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void a(java.util.Map<java.lang.String, java.lang.Integer> r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    public final void b(long r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void b(java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.b.d> r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final long c() {
            r4 = this;
            long r0 = r4.c
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    public final void c(long r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final long d() {
            r4 = this;
            long r0 = r4.d
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    public final void d(long r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final long e() {
            r4 = this;
            long r0 = r4.e
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    public final void e(long r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final long f() {
            r2 = this;
            long r0 = r2.f
            return r0
    }

    public final long g() {
            r2 = this;
            long r0 = r2.g
            return r0
    }

    public final long h() {
            r2 = this;
            long r0 = r2.h
            return r0
    }

    public final java.util.Map<java.lang.String, java.lang.Integer> i() {
            r4 = this;
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r4.a
            if (r0 != 0) goto L2c
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.a = r0
            r1 = 1000(0x3e8, float:1.401E-42)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "1"
            r0.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r4.a
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "9"
            r0.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r4.a
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "8"
            r0.put(r2, r1)
        L2c:
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r4.a
            return r0
    }

    public final java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.b.d> j() {
            r1 = this;
            java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.b.d> r0 = r1.b
            return r0
    }

    public final org.json.JSONObject k() {
            r8 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.Integer> r1 = r8.a     // Catch: java.lang.Exception -> Le2
            if (r1 == 0) goto L4a
            java.util.Map<java.lang.String, java.lang.Integer> r1 = r8.a     // Catch: java.lang.Exception -> Le2
            int r1 = r1.size()     // Catch: java.lang.Exception -> Le2
            if (r1 <= 0) goto L4a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L46
            r1.<init>()     // Catch: java.lang.Exception -> L46
            java.util.Map<java.lang.String, java.lang.Integer> r2 = r8.a     // Catch: java.lang.Exception -> L46
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Exception -> L46
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L46
        L20:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L46
            if (r3 == 0) goto L40
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L46
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Exception -> L46
            java.lang.Object r4 = r3.getKey()     // Catch: java.lang.Exception -> L46
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L46
            java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Exception -> L46
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Exception -> L46
            int r3 = r3.intValue()     // Catch: java.lang.Exception -> L46
            r1.put(r4, r3)     // Catch: java.lang.Exception -> L46
            goto L20
        L40:
            java.lang.String r2 = "caplist"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L46
            goto L4a
        L46:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Exception -> Le2
        L4a:
            java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.b.d> r1 = r8.b     // Catch: java.lang.Exception -> Le2
            if (r1 == 0) goto La9
            java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.b.d> r1 = r8.b     // Catch: java.lang.Exception -> Le2
            int r1 = r1.size()     // Catch: java.lang.Exception -> Le2
            if (r1 <= 0) goto La9
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> La5
            r1.<init>()     // Catch: java.lang.Exception -> La5
            java.util.Map<java.lang.String, com.mbridge.msdk.videocommon.b.d> r2 = r8.b     // Catch: java.lang.Exception -> La5
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Exception -> La5
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> La5
        L65:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> La5
            if (r3 == 0) goto L9f
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> La5
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Exception -> La5
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> La5
            r4.<init>()     // Catch: java.lang.Exception -> La5
            java.lang.Object r5 = r3.getKey()     // Catch: java.lang.Exception -> La5
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> La5
            java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Exception -> La5
            com.mbridge.msdk.videocommon.b.d r3 = (com.mbridge.msdk.videocommon.b.d) r3     // Catch: java.lang.Exception -> La5
            if (r3 == 0) goto L9b
            java.lang.String r6 = "name"
            java.lang.String r7 = r3.a()     // Catch: java.lang.Exception -> La5
            r4.put(r6, r7)     // Catch: java.lang.Exception -> La5
            java.lang.String r6 = "amount"
            int r3 = r3.b()     // Catch: java.lang.Exception -> La5
            r4.put(r6, r3)     // Catch: java.lang.Exception -> La5
            java.lang.String r3 = "id"
            r4.put(r3, r5)     // Catch: java.lang.Exception -> La5
        L9b:
            r1.put(r4)     // Catch: java.lang.Exception -> La5
            goto L65
        L9f:
            java.lang.String r2 = "reward"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> La5
            goto La9
        La5:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Exception -> Le2
        La9:
            java.lang.String r1 = "getpf"
            long r2 = r8.c     // Catch: java.lang.Exception -> Le2
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Le2
            java.lang.String r1 = "ruct"
            long r2 = r8.d     // Catch: java.lang.Exception -> Le2
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Le2
            java.lang.String r1 = "plct"
            long r2 = r8.e     // Catch: java.lang.Exception -> Le2
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Le2
            java.lang.String r1 = "dlct"
            long r2 = r8.f     // Catch: java.lang.Exception -> Le2
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Le2
            java.lang.String r1 = "vcct"
            long r2 = r8.g     // Catch: java.lang.Exception -> Le2
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Le2
            java.lang.String r1 = "current_time"
            long r2 = r8.h     // Catch: java.lang.Exception -> Le2
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Le2
            java.lang.String r1 = "vtag"
            java.lang.String r2 = r8.k     // Catch: java.lang.Exception -> Le2
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Le2
            java.lang.String r1 = "isDefault"
            int r2 = r8.i     // Catch: java.lang.Exception -> Le2
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Le2
            return r0
        Le2:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }
}
