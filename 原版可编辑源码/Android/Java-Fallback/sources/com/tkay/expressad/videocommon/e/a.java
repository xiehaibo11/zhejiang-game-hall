package com.tkay.expressad.videocommon.e;

public final class a {
    public static final int a = 1000;
    public static final int b = 1000;
    private java.util.Map<java.lang.String, java.lang.Integer> c;
    private java.util.Map<java.lang.String, com.tkay.expressad.videocommon.c.c> d;
    private long e;
    private long f;
    private long g;
    private long h;
    private long i;
    private long j;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tkay.expressad.videocommon.e.a a(java.lang.String r8) {
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            r1 = 0
            if (r0 != 0) goto La9
            com.tkay.expressad.videocommon.e.a r0 = new com.tkay.expressad.videocommon.e.a     // Catch: java.lang.Exception -> La5
            r0.<init>()     // Catch: java.lang.Exception -> La5
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> La2
            r1.<init>(r8)     // Catch: java.lang.Exception -> La2
            java.lang.String r8 = "caplist"
            org.json.JSONObject r8 = r1.optJSONObject(r8)     // Catch: java.lang.Exception -> La2
            if (r8 == 0) goto L5c
            int r2 = r8.length()     // Catch: java.lang.Exception -> La2
            if (r2 <= 0) goto L5c
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Exception -> La2
            r2.<init>()     // Catch: java.lang.Exception -> La2
            java.util.Iterator r3 = r8.keys()     // Catch: java.lang.Exception -> La2
        L28:
            if (r3 == 0) goto L5a
            boolean r4 = r3.hasNext()     // Catch: java.lang.Exception -> La2
            if (r4 == 0) goto L5a
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Exception -> La2
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> La2
            r5 = 1000(0x3e8, float:1.401E-42)
            int r6 = r8.optInt(r4, r5)     // Catch: java.lang.Exception -> La2
            boolean r7 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> La2
            if (r7 != 0) goto L28
            boolean r7 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> La2
            if (r7 != 0) goto L52
            if (r6 != 0) goto L52
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> La2
            r2.put(r4, r5)     // Catch: java.lang.Exception -> La2
            goto L28
        L52:
            java.lang.Integer r5 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Exception -> La2
            r2.put(r4, r5)     // Catch: java.lang.Exception -> La2
            goto L28
        L5a:
            r0.c = r2     // Catch: java.lang.Exception -> La2
        L5c:
            java.lang.String r8 = "reward"
            org.json.JSONArray r8 = r1.optJSONArray(r8)     // Catch: java.lang.Exception -> La2
            java.util.Map r8 = com.tkay.expressad.videocommon.c.c.a(r8)     // Catch: java.lang.Exception -> La2
            r0.d = r8     // Catch: java.lang.Exception -> La2
            java.lang.String r8 = "getpf"
            r2 = 43200(0xa8c0, double:2.13436E-319)
            long r2 = r1.optLong(r8, r2)     // Catch: java.lang.Exception -> La2
            r0.e = r2     // Catch: java.lang.Exception -> La2
            java.lang.String r8 = "ruct"
            r2 = 5400(0x1518, double:2.668E-320)
            long r2 = r1.optLong(r8, r2)     // Catch: java.lang.Exception -> La2
            r0.f = r2     // Catch: java.lang.Exception -> La2
            java.lang.String r8 = "plct"
            r2 = 3600(0xe10, double:1.7786E-320)
            long r4 = r1.optLong(r8, r2)     // Catch: java.lang.Exception -> La2
            r0.g = r4     // Catch: java.lang.Exception -> La2
            java.lang.String r8 = "dlct"
            long r2 = r1.optLong(r8, r2)     // Catch: java.lang.Exception -> La2
            r0.h = r2     // Catch: java.lang.Exception -> La2
            java.lang.String r8 = "vcct"
            r2 = 5
            long r2 = r1.optLong(r8, r2)     // Catch: java.lang.Exception -> La2
            r0.i = r2     // Catch: java.lang.Exception -> La2
            java.lang.String r8 = "current_time"
            long r1 = r1.optLong(r8)     // Catch: java.lang.Exception -> La2
            r0.j = r1     // Catch: java.lang.Exception -> La2
            return r0
        La2:
            r8 = move-exception
            r1 = r0
            goto La6
        La5:
            r8 = move-exception
        La6:
            r8.printStackTrace()
        La9:
            return r1
    }

    private void a(long r1) {
            r0 = this;
            r0.j = r1
            return
    }

    private long l() {
            r4 = this;
            long r0 = r4.e
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    private long m() {
            r4 = this;
            long r0 = r4.f
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    private long n() {
            r2 = this;
            long r0 = r2.j
            return r0
    }

    private static com.tkay.expressad.videocommon.e.a o() {
            com.tkay.expressad.videocommon.e.a r0 = new com.tkay.expressad.videocommon.e.a
            r0.<init>()
            java.util.HashMap r1 = new java.util.HashMap
            r2 = 5
            r1.<init>(r2)
            r2 = 1000(0x3e8, float:1.401E-42)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "1"
            r1.put(r3, r2)
            java.lang.String r4 = "9"
            r1.put(r4, r2)
            java.lang.String r4 = "8"
            r1.put(r4, r2)
            java.util.HashMap r2 = new java.util.HashMap
            r4 = 3
            r2.<init>(r4)
            com.tkay.expressad.videocommon.c.c r4 = new com.tkay.expressad.videocommon.c.c
            java.lang.String r5 = "Virtual Item"
            r6 = 1
            r4.<init>(r5, r6)
            r2.put(r3, r4)
            r0.c = r1
            r0.d = r2
            r1 = 43200(0xa8c0, double:2.13436E-319)
            r0.e = r1
            r1 = 5400(0x1518, double:2.668E-320)
            r0.f = r1
            r1 = 3600(0xe10, double:1.7786E-320)
            r0.g = r1
            r0.h = r1
            r1 = 5
            r0.i = r1
            return r0
    }

    public final void a() {
            r2 = this;
            r0 = 43200(0xa8c0, double:2.13436E-319)
            r2.e = r0
            return
    }

    public final void a(java.util.Map<java.lang.String, java.lang.Integer> r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void b() {
            r2 = this;
            r0 = 5400(0x1518, double:2.668E-320)
            r2.f = r0
            return
    }

    public final void b(java.util.Map<java.lang.String, com.tkay.expressad.videocommon.c.c> r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final long c() {
            r4 = this;
            long r0 = r4.g
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    public final void d() {
            r2 = this;
            r0 = 3600(0xe10, double:1.7786E-320)
            r2.g = r0
            return
    }

    public final long e() {
            r2 = this;
            long r0 = r2.h
            return r0
    }

    public final void f() {
            r2 = this;
            r0 = 3600(0xe10, double:1.7786E-320)
            r2.h = r0
            return
    }

    public final long g() {
            r2 = this;
            long r0 = r2.i
            return r0
    }

    public final void h() {
            r2 = this;
            r0 = 5
            r2.i = r0
            return
    }

    public final java.util.Map<java.lang.String, java.lang.Integer> i() {
            r4 = this;
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r4.c
            if (r0 != 0) goto L2c
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.c = r0
            r1 = 1000(0x3e8, float:1.401E-42)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "1"
            r0.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r4.c
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "9"
            r0.put(r3, r2)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r4.c
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "8"
            r0.put(r2, r1)
        L2c:
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r4.c
            return r0
    }

    public final java.util.Map<java.lang.String, com.tkay.expressad.videocommon.c.c> j() {
            r1 = this;
            java.util.Map<java.lang.String, com.tkay.expressad.videocommon.c.c> r0 = r1.d
            return r0
    }

    public final org.json.JSONObject k() {
            r8 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.Integer> r1 = r8.c     // Catch: java.lang.Exception -> Ld4
            if (r1 == 0) goto L4a
            java.util.Map<java.lang.String, java.lang.Integer> r1 = r8.c     // Catch: java.lang.Exception -> Ld4
            int r1 = r1.size()     // Catch: java.lang.Exception -> Ld4
            if (r1 <= 0) goto L4a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L46
            r1.<init>()     // Catch: java.lang.Exception -> L46
            java.util.Map<java.lang.String, java.lang.Integer> r2 = r8.c     // Catch: java.lang.Exception -> L46
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
            r1.printStackTrace()     // Catch: java.lang.Exception -> Ld4
        L4a:
            java.util.Map<java.lang.String, com.tkay.expressad.videocommon.c.c> r1 = r8.d     // Catch: java.lang.Exception -> Ld4
            if (r1 == 0) goto La9
            java.util.Map<java.lang.String, com.tkay.expressad.videocommon.c.c> r1 = r8.d     // Catch: java.lang.Exception -> Ld4
            int r1 = r1.size()     // Catch: java.lang.Exception -> Ld4
            if (r1 <= 0) goto La9
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> La5
            r1.<init>()     // Catch: java.lang.Exception -> La5
            java.util.Map<java.lang.String, com.tkay.expressad.videocommon.c.c> r2 = r8.d     // Catch: java.lang.Exception -> La5
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
            com.tkay.expressad.videocommon.c.c r3 = (com.tkay.expressad.videocommon.c.c) r3     // Catch: java.lang.Exception -> La5
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
            r1.printStackTrace()     // Catch: java.lang.Exception -> Ld4
        La9:
            java.lang.String r1 = "getpf"
            long r2 = r8.e     // Catch: java.lang.Exception -> Ld4
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Ld4
            java.lang.String r1 = "ruct"
            long r2 = r8.f     // Catch: java.lang.Exception -> Ld4
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Ld4
            java.lang.String r1 = "plct"
            long r2 = r8.g     // Catch: java.lang.Exception -> Ld4
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Ld4
            java.lang.String r1 = "dlct"
            long r2 = r8.h     // Catch: java.lang.Exception -> Ld4
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Ld4
            java.lang.String r1 = "vcct"
            long r2 = r8.i     // Catch: java.lang.Exception -> Ld4
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Ld4
            java.lang.String r1 = "current_time"
            long r2 = r8.j     // Catch: java.lang.Exception -> Ld4
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Ld4
            return r0
        Ld4:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }
}
