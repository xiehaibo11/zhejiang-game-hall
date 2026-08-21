package com.tkay.core.b;

public abstract class b extends com.tkay.core.b.a {
    public static final double d = 10000.0d;
    final java.lang.String e;
    protected final java.util.List<org.json.JSONObject> f;
    java.util.List<com.tkay.core.common.f.aj> g;
    java.util.List<com.tkay.core.common.f.aj> h;
    java.lang.String i;
    java.lang.String j;
    java.lang.String k;
    com.tkay.core.b.b.a l;
    long m;
    protected com.tkay.core.common.f.l n;
    protected java.lang.String o;
    protected java.util.concurrent.atomic.AtomicBoolean p;
    protected java.util.concurrent.atomic.AtomicBoolean q;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> s;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> t;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> u;
    java.lang.Runnable v;





    public b(com.tkay.core.common.f.ag r5) {
            r4 = this;
            r4.<init>(r5)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r4.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.e = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.f = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.g = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.h = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r4.p = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>(r1)
            r4.q = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r4.r = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r4.s = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r4.t = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r4.u = r0
            com.tkay.core.b.b$1 r0 = new com.tkay.core.b.b$1
            r0.<init>(r4)
            r4.v = r0
            java.util.List<com.tkay.core.common.f.aj> r0 = r5.j
            if (r0 == 0) goto L98
            java.util.List<com.tkay.core.common.f.aj> r0 = r5.j
            int r0 = r0.size()
            if (r0 <= 0) goto L98
            java.util.List<com.tkay.core.common.f.aj> r0 = r5.j
            java.util.Iterator r0 = r0.iterator()
        L77:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L98
            java.lang.Object r1 = r0.next()
            com.tkay.core.common.f.aj r1 = (com.tkay.core.common.f.aj) r1
            if (r1 == 0) goto L77
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r2 = r4.r
            java.lang.String r3 = r1.t()
            r2.put(r3, r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r2 = r4.t
            java.lang.String r3 = r1.t()
            r2.put(r3, r1)
            goto L77
        L98:
            java.util.List<com.tkay.core.common.f.aj> r0 = r5.l
            if (r0 == 0) goto Lc0
            java.util.List<com.tkay.core.common.f.aj> r0 = r5.l
            int r0 = r0.size()
            if (r0 <= 0) goto Lc0
            java.util.List<com.tkay.core.common.f.aj> r0 = r5.l
            java.util.Iterator r0 = r0.iterator()
        Laa:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto Lc0
            java.lang.Object r1 = r0.next()
            com.tkay.core.common.f.aj r1 = (com.tkay.core.common.f.aj) r1
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r2 = r4.s
            java.lang.String r3 = r1.t()
            r2.put(r3, r1)
            goto Laa
        Lc0:
            org.json.JSONObject r0 = r5.s
            if (r0 == 0) goto Lcb
            java.util.List<org.json.JSONObject> r0 = r4.f
            org.json.JSONObject r1 = r5.s
            r0.add(r1)
        Lcb:
            com.tkay.core.common.f.aj r0 = r5.u
            if (r0 == 0) goto L10c
            com.tkay.core.common.f.aj r0 = r5.u
            com.tkay.core.common.f.l r0 = r0.M()
            r4.n = r0
            com.tkay.core.common.f.aj r0 = r5.u
            java.lang.String r0 = r0.t()
            r4.o = r0
            com.tkay.core.common.f.l r0 = r4.n
            if (r0 != 0) goto L10c
            com.tkay.core.common.a r0 = com.tkay.core.common.a.a()
            java.lang.String r1 = r5.e
            com.tkay.core.common.f.aj r2 = r5.u
            com.tkay.core.common.f.a r0 = r0.a(r1, r2)
            if (r0 == 0) goto L100
            com.tkay.core.api.TYBaseAdAdapter r0 = r0.e()
            com.tkay.core.common.f.aj r0 = r0.getUnitGroupInfo()
            com.tkay.core.common.f.l r0 = r0.M()
            r4.n = r0
            goto L10c
        L100:
            com.tkay.core.b.c r0 = com.tkay.core.b.c.a()
            com.tkay.core.common.f.aj r1 = r5.u
            com.tkay.core.common.f.l r0 = r0.a(r1)
            r4.n = r0
        L10c:
            java.lang.String r0 = r5.d
            r4.i = r0
            java.lang.String r5 = r5.e
            r4.j = r5
            java.lang.String r5 = r4.e()
            r4.k = r5
            return
    }

    private static java.util.List a(com.tkay.core.b.b r4, java.lang.Object r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = r5 instanceof org.json.JSONObject
            if (r1 == 0) goto L2d
            org.json.JSONObject r5 = (org.json.JSONObject) r5
            java.lang.String r1 = "data"
            org.json.JSONArray r5 = r5.optJSONArray(r1)
            r1 = 0
        L12:
            int r2 = r5.length()
            if (r1 >= r2) goto L2d
            java.lang.String r2 = r5.optString(r1)
            com.tkay.core.common.f.l r2 = com.tkay.core.common.f.l.a(r2)
            if (r2 == 0) goto L27
            java.lang.String r3 = r4.i
            r2.b(r3)
        L27:
            r0.add(r2)
            int r1 = r1 + 1
            goto L12
        L2d:
            return r0
    }

    private java.util.List<com.tkay.core.common.f.l> a(java.lang.Object r5) {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = r5 instanceof org.json.JSONObject
            if (r1 == 0) goto L2d
            org.json.JSONObject r5 = (org.json.JSONObject) r5
            java.lang.String r1 = "data"
            org.json.JSONArray r5 = r5.optJSONArray(r1)
            r1 = 0
        L12:
            int r2 = r5.length()
            if (r1 >= r2) goto L2d
            java.lang.String r2 = r5.optString(r1)
            com.tkay.core.common.f.l r2 = com.tkay.core.common.f.l.a(r2)
            if (r2 == 0) goto L27
            java.lang.String r3 = r4.i
            r2.b(r3)
        L27:
            r0.add(r2)
            int r1 = r1 + 1
            goto L12
        L2d:
            return r0
    }

    private void a(long r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.v
            r0.a(r1, r3)
            return
    }

    private void a(long r9, int r11, java.lang.String r12, java.util.Map<java.lang.String, com.tkay.core.common.f.aj> r13) {
            r8 = this;
            java.util.Collection r0 = r13.values()
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L29
            java.lang.Object r1 = r0.next()
            r3 = r1
            com.tkay.core.common.f.aj r3 = (com.tkay.core.common.f.aj) r3
            boolean r1 = r8.a(r3, r12, r11)
            if (r1 == 0) goto L21
            java.util.List<com.tkay.core.common.f.aj> r1 = r8.h
            r1.add(r3)
            goto L8
        L21:
            r2 = r8
            r4 = r12
            r5 = r9
            r7 = r11
            r2.b(r3, r4, r5, r7)
            goto L8
        L29:
            r13.clear()
            return
    }

    static void a(com.tkay.core.b.b r0) {
            r0.g()
            return
    }

    static void a(com.tkay.core.b.b r0, long r1) {
            r0.b(r1)
            return
    }

    static void a(com.tkay.core.b.b r8, com.tkay.core.common.f.aj r9) {
            int r0 = r9.c()
            com.tkay.core.b.c r1 = com.tkay.core.b.c.a()
            boolean r7 = r1.b(r0)
            com.tkay.core.common.f.ag r3 = r8.a
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r4 = r8.m
            long r4 = r1 - r4
            r6 = 1
            r2 = r9
            com.tkay.core.common.k.c.a(r2, r3, r4, r6, r7)
            com.tkay.core.b.c r8 = com.tkay.core.b.c.a()
            r8.a(r0)
            return
    }

    static void a(com.tkay.core.b.b r6, com.tkay.core.common.f.aj r7, java.lang.String r8, int r9) {
            r3 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r5 = r9
            r0.b(r1, r2, r3, r5)
            return
    }

    static void a(com.tkay.core.b.b r20, java.lang.Object r21, java.util.List r22) {
            r0 = r20
            r1 = r21
            boolean r2 = r1 instanceof org.json.JSONObject
            if (r2 == 0) goto L180
            org.json.JSONObject r1 = (org.json.JSONObject) r1
            java.lang.String r2 = "wf"
            boolean r3 = r1.has(r2)
            if (r3 == 0) goto L180
            org.json.JSONArray r1 = r1.optJSONArray(r2)
            if (r1 == 0) goto L180
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3 = 0
            r4 = r3
        L1f:
            int r5 = r1.length()
            if (r4 >= r5) goto L33
            java.lang.String r5 = r1.optString(r4)
            com.tkay.core.b.j r5 = com.tkay.core.b.j.a(r5)
            r2.add(r5)
            int r4 = r4 + 1
            goto L1f
        L33:
            java.util.Collections.sort(r2)
            int r1 = r2.size()
            r4 = 4666723172467343360(0x40c3880000000000, double:10000.0)
            r6 = 0
            r8 = 1
            if (r1 != r8) goto La2
            java.lang.Object r1 = r2.get(r3)
            com.tkay.core.b.j r1 = (com.tkay.core.b.j) r1
            double r2 = r1.c
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 != 0) goto L180
            java.lang.String r2 = r0.o
            java.lang.String r3 = r1.b
            boolean r2 = android.text.TextUtils.equals(r2, r3)
            if (r2 == 0) goto L180
            r1.c = r4
            java.util.Iterator r2 = r22.iterator()
        L60:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L96
            java.lang.Object r3 = r2.next()
            com.tkay.core.common.f.l r3 = (com.tkay.core.common.f.l) r3
            java.lang.String r4 = r1.b
            java.lang.String r5 = r3.k
            boolean r4 = android.text.TextUtils.equals(r4, r5)
            if (r4 == 0) goto L60
            boolean r4 = r3.isSuccessWithUseType()
            if (r4 == 0) goto L60
            com.tkay.core.common.f.l r2 = r0.n
            if (r2 == 0) goto L8a
            java.lang.String r2 = r2.g
            java.lang.String r4 = r1.d
            boolean r2 = android.text.TextUtils.equals(r2, r4)
            if (r2 != 0) goto L8c
        L8a:
            r0.n = r3
        L8c:
            double r4 = r1.c
            double r2 = r3.o
            double r2 = java.lang.Math.max(r4, r2)
            r1.c = r2
        L96:
            com.tkay.core.b.c r0 = com.tkay.core.b.c.a()
            java.lang.String r2 = r1.d
            java.lang.String r3 = r1.b
            r0.a(r2, r3, r1)
            return
        La2:
            int r8 = r1 + (-1)
        La4:
            if (r3 >= r1) goto L180
            java.lang.Object r9 = r2.get(r3)
            com.tkay.core.b.j r9 = (com.tkay.core.b.j) r9
            double r10 = r9.c
            int r10 = (r10 > r6 ? 1 : (r10 == r6 ? 0 : -1))
            if (r10 != 0) goto L177
            java.lang.String r10 = r0.o
            java.lang.String r11 = r9.b
            boolean r10 = android.text.TextUtils.equals(r10, r11)
            if (r10 == 0) goto L177
            r10 = 4591870180066957722(0x3fb999999999999a, double:0.1)
            if (r3 != 0) goto Le0
            int r12 = r3 + 1
            java.lang.Object r13 = r2.get(r12)
            com.tkay.core.b.j r13 = (com.tkay.core.b.j) r13
            double r13 = r13.c
            int r13 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r13 != 0) goto Ld4
            r9.c = r4
            goto L132
        Ld4:
            java.lang.Object r12 = r2.get(r12)
            com.tkay.core.b.j r12 = (com.tkay.core.b.j) r12
            double r12 = r12.c
            double r12 = r12 + r10
            r9.c = r12
            goto L132
        Le0:
            r12 = 4611686018427387904(0x4000000000000000, double:2.0)
            if (r3 != r8) goto L10b
            int r14 = r3 + (-1)
            java.lang.Object r15 = r2.get(r14)
            com.tkay.core.b.j r15 = (com.tkay.core.b.j) r15
            double r4 = r15.c
            double r4 = r4 - r10
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 > 0) goto Lff
            java.lang.Object r4 = r2.get(r14)
            com.tkay.core.b.j r4 = (com.tkay.core.b.j) r4
            double r4 = r4.c
            double r4 = r4 / r12
            r9.c = r4
            goto L132
        Lff:
            java.lang.Object r4 = r2.get(r14)
            com.tkay.core.b.j r4 = (com.tkay.core.b.j) r4
            double r4 = r4.c
            double r4 = r4 - r10
            r9.c = r4
            goto L132
        L10b:
            int r4 = r3 + (-1)
            java.lang.Object r4 = r2.get(r4)
            com.tkay.core.b.j r4 = (com.tkay.core.b.j) r4
            double r4 = r4.c
            int r14 = r3 + 1
            java.lang.Object r14 = r2.get(r14)
            com.tkay.core.b.j r14 = (com.tkay.core.b.j) r14
            double r14 = r14.c
            double r16 = r4 - r10
            double r14 = r4 - r14
            double r18 = java.lang.Math.abs(r14)
            int r10 = (r18 > r10 ? 1 : (r18 == r10 ? 0 : -1))
            if (r10 > 0) goto L12e
            double r14 = r14 / r12
            double r16 = r4 - r14
        L12e:
            r4 = r16
            r9.c = r4
        L132:
            java.util.Iterator r4 = r22.iterator()
        L136:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L16c
            java.lang.Object r5 = r4.next()
            com.tkay.core.common.f.l r5 = (com.tkay.core.common.f.l) r5
            java.lang.String r10 = r9.b
            java.lang.String r11 = r5.k
            boolean r10 = android.text.TextUtils.equals(r10, r11)
            if (r10 == 0) goto L136
            boolean r10 = r5.isSuccessWithUseType()
            if (r10 == 0) goto L136
            com.tkay.core.common.f.l r4 = r0.n
            if (r4 == 0) goto L160
            java.lang.String r4 = r4.g
            java.lang.String r10 = r9.d
            boolean r4 = android.text.TextUtils.equals(r4, r10)
            if (r4 != 0) goto L162
        L160:
            r0.n = r5
        L162:
            double r10 = r9.c
            double r4 = r5.o
            double r4 = java.lang.Math.max(r10, r4)
            r9.c = r4
        L16c:
            com.tkay.core.b.c r4 = com.tkay.core.b.c.a()
            java.lang.String r5 = r9.d
            java.lang.String r10 = r9.b
            r4.a(r5, r10, r9)
        L177:
            int r3 = r3 + 1
            r4 = 4666723172467343360(0x40c3880000000000, double:10000.0)
            goto La4
        L180:
            return
    }

    static void a(com.tkay.core.b.b r7, java.lang.String r8, com.tkay.core.common.f.aj r9) {
            java.lang.String r0 = "There is no Network Adapter."
            boolean r0 = android.text.TextUtils.equals(r8, r0)
            if (r0 != 0) goto L33
            java.lang.String r0 = "This network don't support header bidding in current TY's version."
            boolean r8 = android.text.TextUtils.equals(r8, r0)
            if (r8 == 0) goto L11
            goto L33
        L11:
            int r8 = r9.c()
            com.tkay.core.b.c r0 = com.tkay.core.b.c.a()
            boolean r6 = r0.b(r8)
            com.tkay.core.common.f.ag r2 = r7.a
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r3 = r7.m
            long r3 = r0 - r3
            r5 = 0
            r1 = r9
            com.tkay.core.common.k.c.a(r1, r2, r3, r5, r6)
            com.tkay.core.b.c r7 = com.tkay.core.b.c.a()
            r7.a(r8)
        L33:
            return
    }

    static void a(com.tkay.core.b.b r0, java.util.List r1, long r2, java.lang.String r4, java.util.Map r5) {
            r0.a(r1, r2, r4, r5)
            return
    }

    static void a(com.tkay.core.b.b r6, org.json.JSONObject r7, com.tkay.core.common.f.aj r8) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r6.e
            r0.append(r1)
            java.lang.String r1 = "handleBidTokenResult"
            r0.append(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r0 = r6.t
            int r0 = r0.size()
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L26
            r6.f()
            java.util.concurrent.atomic.AtomicBoolean r0 = r6.q
            boolean r0 = r0.get()
            if (r0 != 0) goto L26
            r0 = r1
            goto L27
        L26:
            r0 = r2
        L27:
            monitor-enter(r6)
            if (r7 == 0) goto L3a
            if (r8 == 0) goto L3a
            java.util.List<org.json.JSONObject> r3 = r6.f     // Catch: java.lang.Throwable -> L7e
            r3.add(r7)     // Catch: java.lang.Throwable -> L7e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r7 = r6.u     // Catch: java.lang.Throwable -> L7e
            java.lang.String r3 = r8.t()     // Catch: java.lang.Throwable -> L7e
            r7.put(r3, r8)     // Catch: java.lang.Throwable -> L7e
        L3a:
            java.util.List<org.json.JSONObject> r7 = r6.f     // Catch: java.lang.Throwable -> L7e
            int r7 = r7.size()     // Catch: java.lang.Throwable -> L7e
            if (r7 <= 0) goto L5a
            if (r0 != 0) goto L5b
            java.util.concurrent.atomic.AtomicBoolean r7 = r6.p     // Catch: java.lang.Throwable -> L7e
            boolean r7 = r7.get()     // Catch: java.lang.Throwable -> L7e
            if (r7 == 0) goto L56
            java.util.concurrent.atomic.AtomicBoolean r7 = r6.q     // Catch: java.lang.Throwable -> L7e
            boolean r7 = r7.get()     // Catch: java.lang.Throwable -> L7e
            if (r7 != 0) goto L56
            r7 = r1
            goto L57
        L56:
            r7 = r2
        L57:
            if (r7 == 0) goto L5a
            goto L5b
        L5a:
            r1 = r2
        L5b:
            if (r1 == 0) goto L64
            long r7 = r6.m     // Catch: java.lang.Throwable -> L7e
            r6.b(r7)     // Catch: java.lang.Throwable -> L7e
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L7e
            return
        L64:
            monitor-exit(r6)
            java.util.List<com.tkay.core.common.f.aj> r7 = r6.g
            int r7 = r7.size()
            if (r7 <= 0) goto L7d
            boolean r7 = r6.m()
            if (r7 == 0) goto L7d
            r1 = 0
            r2 = 0
            r5 = 0
            java.lang.String r4 = ""
            r0 = r6
            r0.a(r1, r2, r4, r5)
        L7d:
            return
        L7e:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    private void a(com.tkay.core.common.f.l r12) {
            r11 = this;
            java.lang.String r0 = r12.i
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L59
            java.lang.String r0 = r12.token     // Catch: java.lang.Throwable -> L59
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L59
            java.lang.String r2 = r12.i     // Catch: java.lang.Throwable -> L59
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L59
            int r2 = r12.d     // Catch: java.lang.Throwable -> L59
            com.tkay.core.common.f.f r0 = com.tkay.core.common.a.c.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L59
            if (r0 != 0) goto L1a
            return
        L1a:
            int r1 = r12.d     // Catch: java.lang.Throwable -> L59
            r2 = 67
            if (r1 != r2) goto L46
            com.tkay.core.common.f.ag r1 = r11.a     // Catch: java.lang.Throwable -> L59
            android.content.Context r1 = r1.b     // Catch: java.lang.Throwable -> L59
            com.tkay.core.common.d.c r1 = com.tkay.core.common.d.c.a(r1)     // Catch: java.lang.Throwable -> L59
            java.lang.String r2 = r0.p()     // Catch: java.lang.Throwable -> L59
            long r3 = r0.P()     // Catch: java.lang.Throwable -> L59
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L59
            com.tkay.core.common.f.ag r1 = r11.a     // Catch: java.lang.Throwable -> L59
            android.content.Context r1 = r1.b     // Catch: java.lang.Throwable -> L59
            com.tkay.core.common.d.a r1 = com.tkay.core.common.d.b.a(r1)     // Catch: java.lang.Throwable -> L59
            java.lang.String r2 = r0.q()     // Catch: java.lang.Throwable -> L59
            long r3 = r0.P()     // Catch: java.lang.Throwable -> L59
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L59
        L46:
            com.tkay.core.common.a.a r5 = com.tkay.core.common.a.a.a()     // Catch: java.lang.Throwable -> L59
            com.tkay.core.common.f.ag r0 = r11.a     // Catch: java.lang.Throwable -> L59
            android.content.Context r6 = r0.b     // Catch: java.lang.Throwable -> L59
            int r7 = r12.d     // Catch: java.lang.Throwable -> L59
            java.lang.String r8 = r12.k     // Catch: java.lang.Throwable -> L59
            java.lang.String r9 = r12.token     // Catch: java.lang.Throwable -> L59
            java.lang.String r10 = r12.i     // Catch: java.lang.Throwable -> L59
            r5.a(r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L59
        L59:
            return
    }

    private void a(java.lang.Object r21, java.util.List<com.tkay.core.common.f.l> r22) {
            r20 = this;
            r0 = r20
            r1 = r21
            boolean r2 = r1 instanceof org.json.JSONObject
            if (r2 == 0) goto L182
            org.json.JSONObject r1 = (org.json.JSONObject) r1
            java.lang.String r2 = "wf"
            boolean r3 = r1.has(r2)
            if (r3 != 0) goto L13
            return
        L13:
            org.json.JSONArray r1 = r1.optJSONArray(r2)
            if (r1 != 0) goto L1a
            return
        L1a:
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3 = 0
            r4 = r3
        L21:
            int r5 = r1.length()
            if (r4 >= r5) goto L35
            java.lang.String r5 = r1.optString(r4)
            com.tkay.core.b.j r5 = com.tkay.core.b.j.a(r5)
            r2.add(r5)
            int r4 = r4 + 1
            goto L21
        L35:
            java.util.Collections.sort(r2)
            int r1 = r2.size()
            r4 = 4666723172467343360(0x40c3880000000000, double:10000.0)
            r6 = 0
            r8 = 1
            if (r1 != r8) goto La4
            java.lang.Object r1 = r2.get(r3)
            com.tkay.core.b.j r1 = (com.tkay.core.b.j) r1
            double r2 = r1.c
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 != 0) goto L182
            java.lang.String r2 = r0.o
            java.lang.String r3 = r1.b
            boolean r2 = android.text.TextUtils.equals(r2, r3)
            if (r2 == 0) goto L182
            r1.c = r4
            java.util.Iterator r2 = r22.iterator()
        L62:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L98
            java.lang.Object r3 = r2.next()
            com.tkay.core.common.f.l r3 = (com.tkay.core.common.f.l) r3
            java.lang.String r4 = r1.b
            java.lang.String r5 = r3.k
            boolean r4 = android.text.TextUtils.equals(r4, r5)
            if (r4 == 0) goto L62
            boolean r4 = r3.isSuccessWithUseType()
            if (r4 == 0) goto L62
            com.tkay.core.common.f.l r2 = r0.n
            if (r2 == 0) goto L8c
            java.lang.String r2 = r2.g
            java.lang.String r4 = r1.d
            boolean r2 = android.text.TextUtils.equals(r2, r4)
            if (r2 != 0) goto L8e
        L8c:
            r0.n = r3
        L8e:
            double r4 = r1.c
            double r2 = r3.o
            double r2 = java.lang.Math.max(r4, r2)
            r1.c = r2
        L98:
            com.tkay.core.b.c r2 = com.tkay.core.b.c.a()
            java.lang.String r3 = r1.d
            java.lang.String r4 = r1.b
            r2.a(r3, r4, r1)
            return
        La4:
            int r8 = r1 + (-1)
        La6:
            if (r3 >= r1) goto L182
            java.lang.Object r9 = r2.get(r3)
            com.tkay.core.b.j r9 = (com.tkay.core.b.j) r9
            double r10 = r9.c
            int r10 = (r10 > r6 ? 1 : (r10 == r6 ? 0 : -1))
            if (r10 != 0) goto L179
            java.lang.String r10 = r0.o
            java.lang.String r11 = r9.b
            boolean r10 = android.text.TextUtils.equals(r10, r11)
            if (r10 == 0) goto L179
            r10 = 4591870180066957722(0x3fb999999999999a, double:0.1)
            if (r3 != 0) goto Le2
            int r12 = r3 + 1
            java.lang.Object r13 = r2.get(r12)
            com.tkay.core.b.j r13 = (com.tkay.core.b.j) r13
            double r13 = r13.c
            int r13 = (r13 > r6 ? 1 : (r13 == r6 ? 0 : -1))
            if (r13 != 0) goto Ld6
            r9.c = r4
            goto L134
        Ld6:
            java.lang.Object r12 = r2.get(r12)
            com.tkay.core.b.j r12 = (com.tkay.core.b.j) r12
            double r12 = r12.c
            double r12 = r12 + r10
            r9.c = r12
            goto L134
        Le2:
            r12 = 4611686018427387904(0x4000000000000000, double:2.0)
            if (r3 != r8) goto L10d
            int r14 = r3 + (-1)
            java.lang.Object r15 = r2.get(r14)
            com.tkay.core.b.j r15 = (com.tkay.core.b.j) r15
            double r4 = r15.c
            double r4 = r4 - r10
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 > 0) goto L101
            java.lang.Object r4 = r2.get(r14)
            com.tkay.core.b.j r4 = (com.tkay.core.b.j) r4
            double r4 = r4.c
            double r4 = r4 / r12
            r9.c = r4
            goto L134
        L101:
            java.lang.Object r4 = r2.get(r14)
            com.tkay.core.b.j r4 = (com.tkay.core.b.j) r4
            double r4 = r4.c
            double r4 = r4 - r10
            r9.c = r4
            goto L134
        L10d:
            int r4 = r3 + (-1)
            java.lang.Object r4 = r2.get(r4)
            com.tkay.core.b.j r4 = (com.tkay.core.b.j) r4
            double r4 = r4.c
            int r14 = r3 + 1
            java.lang.Object r14 = r2.get(r14)
            com.tkay.core.b.j r14 = (com.tkay.core.b.j) r14
            double r14 = r14.c
            double r16 = r4 - r10
            double r14 = r4 - r14
            double r18 = java.lang.Math.abs(r14)
            int r10 = (r18 > r10 ? 1 : (r18 == r10 ? 0 : -1))
            if (r10 > 0) goto L130
            double r14 = r14 / r12
            double r16 = r4 - r14
        L130:
            r4 = r16
            r9.c = r4
        L134:
            java.util.Iterator r4 = r22.iterator()
        L138:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L16e
            java.lang.Object r5 = r4.next()
            com.tkay.core.common.f.l r5 = (com.tkay.core.common.f.l) r5
            java.lang.String r10 = r9.b
            java.lang.String r11 = r5.k
            boolean r10 = android.text.TextUtils.equals(r10, r11)
            if (r10 == 0) goto L138
            boolean r10 = r5.isSuccessWithUseType()
            if (r10 == 0) goto L138
            com.tkay.core.common.f.l r4 = r0.n
            if (r4 == 0) goto L162
            java.lang.String r4 = r4.g
            java.lang.String r10 = r9.d
            boolean r4 = android.text.TextUtils.equals(r4, r10)
            if (r4 != 0) goto L164
        L162:
            r0.n = r5
        L164:
            double r10 = r9.c
            double r4 = r5.o
            double r4 = java.lang.Math.max(r10, r4)
            r9.c = r4
        L16e:
            com.tkay.core.b.c r4 = com.tkay.core.b.c.a()
            java.lang.String r5 = r9.d
            java.lang.String r10 = r9.b
            r4.a(r5, r10, r9)
        L179:
            int r3 = r3 + 1
            r4 = 4666723172467343360(0x40c3880000000000, double:10000.0)
            goto La6
        L182:
            return
    }

    private void a(java.lang.String r8, com.tkay.core.common.f.aj r9) {
            r7 = this;
            java.lang.String r0 = "There is no Network Adapter."
            boolean r0 = android.text.TextUtils.equals(r8, r0)
            if (r0 != 0) goto L33
            java.lang.String r0 = "This network don't support header bidding in current TY's version."
            boolean r8 = android.text.TextUtils.equals(r8, r0)
            if (r8 == 0) goto L11
            goto L33
        L11:
            int r8 = r9.c()
            com.tkay.core.b.c r0 = com.tkay.core.b.c.a()
            boolean r6 = r0.b(r8)
            com.tkay.core.common.f.ag r2 = r7.a
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r3 = r7.m
            long r3 = r0 - r3
            r5 = 0
            r1 = r9
            com.tkay.core.common.k.c.a(r1, r2, r3, r5, r6)
            com.tkay.core.b.c r9 = com.tkay.core.b.c.a()
            r9.a(r8)
        L33:
            return
    }

    private synchronized void a(java.util.List<com.tkay.core.common.f.l> r10, long r11, java.lang.String r13, java.util.Map<java.lang.String, com.tkay.core.common.f.aj> r14) {
            r9 = this;
            monitor-enter(r9)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf4
            r0.<init>()     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r1 = r9.e     // Catch: java.lang.Throwable -> Lf4
            r0.append(r1)     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r1 = "handleResult: "
            r0.append(r1)     // Catch: java.lang.Throwable -> Lf4
            if (r10 == 0) goto L8f
            int r0 = r10.size()     // Catch: java.lang.Throwable -> Lf4
            if (r0 <= 0) goto L8f
            java.util.Collections.sort(r10)     // Catch: java.lang.Throwable -> Lf4
            r0 = 0
        L1c:
            int r1 = r10.size()     // Catch: java.lang.Throwable -> Lf4
            if (r0 >= r1) goto L8f
            java.lang.Object r1 = r10.get(r0)     // Catch: java.lang.Throwable -> Lf4
            com.tkay.core.common.f.l r1 = (com.tkay.core.common.f.l) r1     // Catch: java.lang.Throwable -> Lf4
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r2 = r9.r     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r3 = r1.k     // Catch: java.lang.Throwable -> Lf4
            r2.remove(r3)     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r2 = r1.k     // Catch: java.lang.Throwable -> Lf4
            java.lang.Object r2 = r14.remove(r2)     // Catch: java.lang.Throwable -> Lf4
            com.tkay.core.common.f.aj r2 = (com.tkay.core.common.f.aj) r2     // Catch: java.lang.Throwable -> Lf4
            if (r2 != 0) goto L52
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r3 = r9.s     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r4 = r1.k     // Catch: java.lang.Throwable -> Lf4
            boolean r3 = r3.containsKey(r4)     // Catch: java.lang.Throwable -> Lf4
            if (r3 == 0) goto L52
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r2 = r9.s     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r3 = r1.k     // Catch: java.lang.Throwable -> Lf4
            java.lang.Object r2 = r2.remove(r3)     // Catch: java.lang.Throwable -> Lf4
            com.tkay.core.common.f.aj r2 = (com.tkay.core.common.f.aj) r2     // Catch: java.lang.Throwable -> Lf4
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r3 = r9.s     // Catch: java.lang.Throwable -> Lf4
            r3.clear()     // Catch: java.lang.Throwable -> Lf4
        L52:
            if (r2 == 0) goto L8c
            boolean r3 = r1.isSuccessWithUseType()     // Catch: java.lang.Throwable -> Lf4
            if (r3 == 0) goto L89
            int r3 = r0 + 1
            int r4 = r10.size()     // Catch: java.lang.Throwable -> Lf4
            r5 = 0
            if (r3 >= r4) goto L82
            java.lang.Object r3 = r10.get(r3)     // Catch: java.lang.Throwable -> Lf4
            com.tkay.core.common.f.l r3 = (com.tkay.core.common.f.l) r3     // Catch: java.lang.Throwable -> Lf4
            double r7 = r3.getSortPrice()     // Catch: java.lang.Throwable -> Lf4
            int r4 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r4 != 0) goto L81
            com.tkay.core.b.c r4 = com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r3 = r3.g     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r5 = r2.t()     // Catch: java.lang.Throwable -> Lf4
            double r5 = r4.a(r3, r5)     // Catch: java.lang.Throwable -> Lf4
            goto L82
        L81:
            r5 = r7
        L82:
            int r3 = r2.c()     // Catch: java.lang.Throwable -> Lf4
            r9.a(r3, r1, r5)     // Catch: java.lang.Throwable -> Lf4
        L89:
            r9.a(r2, r1, r11)     // Catch: java.lang.Throwable -> Lf4
        L8c:
            int r0 = r0 + 1
            goto L1c
        L8f:
            if (r14 == 0) goto Lba
            java.util.Set r10 = r14.keySet()     // Catch: java.lang.Throwable -> Lf4
            java.util.Iterator r10 = r10.iterator()     // Catch: java.lang.Throwable -> Lf4
        L99:
            boolean r0 = r10.hasNext()     // Catch: java.lang.Throwable -> Lf4
            if (r0 == 0) goto Lba
            java.lang.Object r0 = r10.next()     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> Lf4
            if (r0 == 0) goto Lac
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r1 = r9.r     // Catch: java.lang.Throwable -> Lf4
            r1.remove(r0)     // Catch: java.lang.Throwable -> Lf4
        Lac:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r1 = r9.s     // Catch: java.lang.Throwable -> Lf4
            boolean r0 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> Lf4
            if (r0 == 0) goto L99
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r0 = r9.s     // Catch: java.lang.Throwable -> Lf4
            r0.clear()     // Catch: java.lang.Throwable -> Lf4
            goto L99
        Lba:
            if (r14 == 0) goto Ldb
            java.lang.String r10 = "No Response error."
            boolean r0 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> Lf4
            if (r0 != 0) goto Ld3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf4
            r0.<init>()     // Catch: java.lang.Throwable -> Lf4
            r0.append(r10)     // Catch: java.lang.Throwable -> Lf4
            r0.append(r13)     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r10 = r0.toString()     // Catch: java.lang.Throwable -> Lf4
        Ld3:
            r4 = r10
            r3 = -4
            r0 = r9
            r1 = r11
            r5 = r14
            r0.a(r1, r3, r4, r5)     // Catch: java.lang.Throwable -> Lf4
        Ldb:
            java.util.List<com.tkay.core.common.f.aj> r10 = r9.h     // Catch: java.lang.Throwable -> Lf4
            int r10 = r10.size()     // Catch: java.lang.Throwable -> Lf4
            r11 = 2
            if (r10 < r11) goto Le9
            java.util.List<com.tkay.core.common.f.aj> r10 = r9.h     // Catch: java.lang.Throwable -> Lf4
            java.util.Collections.sort(r10)     // Catch: java.lang.Throwable -> Lf4
        Le9:
            r9.l()     // Catch: java.lang.Throwable -> Lf4
            r9.k()     // Catch: java.lang.Throwable -> Lf4
            r9.j()     // Catch: java.lang.Throwable -> Lf4
            monitor-exit(r9)
            return
        Lf4:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    private void a(org.json.JSONObject r7, com.tkay.core.common.f.aj r8) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r6.e
            r0.append(r1)
            java.lang.String r1 = "handleBidTokenResult"
            r0.append(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r0 = r6.t
            int r0 = r0.size()
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L26
            r6.f()
            java.util.concurrent.atomic.AtomicBoolean r0 = r6.q
            boolean r0 = r0.get()
            if (r0 != 0) goto L26
            r0 = r1
            goto L27
        L26:
            r0 = r2
        L27:
            monitor-enter(r6)
            if (r7 == 0) goto L3a
            if (r8 == 0) goto L3a
            java.util.List<org.json.JSONObject> r3 = r6.f     // Catch: java.lang.Throwable -> L7e
            r3.add(r7)     // Catch: java.lang.Throwable -> L7e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r7 = r6.u     // Catch: java.lang.Throwable -> L7e
            java.lang.String r3 = r8.t()     // Catch: java.lang.Throwable -> L7e
            r7.put(r3, r8)     // Catch: java.lang.Throwable -> L7e
        L3a:
            java.util.List<org.json.JSONObject> r7 = r6.f     // Catch: java.lang.Throwable -> L7e
            int r7 = r7.size()     // Catch: java.lang.Throwable -> L7e
            if (r7 <= 0) goto L5a
            if (r0 != 0) goto L5b
            java.util.concurrent.atomic.AtomicBoolean r7 = r6.p     // Catch: java.lang.Throwable -> L7e
            boolean r7 = r7.get()     // Catch: java.lang.Throwable -> L7e
            if (r7 == 0) goto L56
            java.util.concurrent.atomic.AtomicBoolean r7 = r6.q     // Catch: java.lang.Throwable -> L7e
            boolean r7 = r7.get()     // Catch: java.lang.Throwable -> L7e
            if (r7 != 0) goto L56
            r7 = r1
            goto L57
        L56:
            r7 = r2
        L57:
            if (r7 == 0) goto L5a
            goto L5b
        L5a:
            r1 = r2
        L5b:
            if (r1 == 0) goto L64
            long r7 = r6.m     // Catch: java.lang.Throwable -> L7e
            r6.b(r7)     // Catch: java.lang.Throwable -> L7e
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L7e
            return
        L64:
            monitor-exit(r6)
            java.util.List<com.tkay.core.common.f.aj> r7 = r6.g
            int r7 = r7.size()
            if (r7 <= 0) goto L7d
            boolean r7 = r6.m()
            if (r7 == 0) goto L7d
            r1 = 0
            r2 = 0
            r5 = 0
            java.lang.String r4 = ""
            r0 = r6
            r0.a(r1, r2, r4, r5)
        L7d:
            return
        L7e:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    private synchronized void b(long r5) {
            r4 = this;
            monitor-enter(r4)
            java.util.concurrent.atomic.AtomicBoolean r0 = r4.q     // Catch: java.lang.Throwable -> L46
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L46
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46
            r5.<init>()     // Catch: java.lang.Throwable -> L46
            java.lang.String r6 = r4.e     // Catch: java.lang.Throwable -> L46
            r5.append(r6)     // Catch: java.lang.Throwable -> L46
            java.lang.String r6 = "beginRequestBidInfo, in bid requesting, do nothing."
            r5.append(r6)     // Catch: java.lang.Throwable -> L46
            monitor-exit(r4)
            return
        L1a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46
            r0.<init>()     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = r4.e     // Catch: java.lang.Throwable -> L46
            r0.append(r1)     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = "beginRequestBidInfo"
            r0.append(r1)     // Catch: java.lang.Throwable -> L46
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L46
            r0.<init>()     // Catch: java.lang.Throwable -> L46
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L46
            r1.<init>()     // Catch: java.lang.Throwable -> L46
            r4.a(r0, r1)     // Catch: java.lang.Throwable -> L46
            java.util.concurrent.atomic.AtomicBoolean r2 = r4.q     // Catch: java.lang.Throwable -> L46
            r3 = 1
            r2.set(r3)     // Catch: java.lang.Throwable -> L46
            com.tkay.core.b.b$3 r2 = new com.tkay.core.b.b$3     // Catch: java.lang.Throwable -> L46
            r2.<init>(r4, r5, r1)     // Catch: java.lang.Throwable -> L46
            r4.a(r0, r2)     // Catch: java.lang.Throwable -> L46
            monitor-exit(r4)
            return
        L46:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    private void b(com.tkay.core.common.f.aj r9) {
            r8 = this;
            int r0 = r9.c()
            com.tkay.core.b.c r1 = com.tkay.core.b.c.a()
            boolean r7 = r1.b(r0)
            com.tkay.core.common.f.ag r3 = r8.a
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r4 = r8.m
            long r4 = r1 - r4
            r6 = 1
            r2 = r9
            com.tkay.core.common.k.c.a(r2, r3, r4, r6, r7)
            com.tkay.core.b.c r9 = com.tkay.core.b.c.a()
            r9.a(r0)
            return
    }

    private void b(com.tkay.core.common.f.aj r1, java.lang.String r2, long r3, int r5) {
            r0 = this;
            a(r1, r2, r3, r5)
            java.util.List<com.tkay.core.common.f.aj> r2 = r0.g
            r2.add(r1)
            return
    }

    private void f() {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.v
            r0.c(r1)
            return
    }

    private synchronized void g() {
            r2 = this;
            monitor-enter(r2)
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.c     // Catch: java.lang.Throwable -> L31
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto Lb
            monitor-exit(r2)
            return
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L31
            r0.<init>()     // Catch: java.lang.Throwable -> L31
            java.lang.String r1 = r2.e     // Catch: java.lang.Throwable -> L31
            r0.append(r1)     // Catch: java.lang.Throwable -> L31
            java.lang.String r1 = "get token short timeout."
            r0.append(r1)     // Catch: java.lang.Throwable -> L31
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.p     // Catch: java.lang.Throwable -> L31
            r1 = 1
            r0.set(r1)     // Catch: java.lang.Throwable -> L31
            java.util.List<org.json.JSONObject> r0 = r2.f     // Catch: java.lang.Throwable -> L31
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L31
            if (r0 <= 0) goto L2f
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L31
            r2.b(r0)     // Catch: java.lang.Throwable -> L31
        L2f:
            monitor-exit(r2)
            return
        L31:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    private boolean h() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.p
            boolean r0 = r0.get()
            if (r0 == 0) goto L12
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.q
            boolean r0 = r0.get()
            if (r0 != 0) goto L12
            r0 = 1
            return r0
        L12:
            r0 = 0
            return r0
    }

    private synchronized void i() {
            r8 = this;
            monitor-enter(r8)
            java.util.concurrent.atomic.AtomicBoolean r0 = r8.c     // Catch: java.lang.Throwable -> L47
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L47
            if (r0 != 0) goto L45
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L47
            r0.<init>()     // Catch: java.lang.Throwable -> L47
            java.lang.String r1 = r8.e     // Catch: java.lang.Throwable -> L47
            r0.append(r1)     // Catch: java.lang.Throwable -> L47
            java.lang.String r1 = "finishCallback: "
            r0.append(r1)     // Catch: java.lang.Throwable -> L47
            java.util.concurrent.atomic.AtomicBoolean r0 = r8.c     // Catch: java.lang.Throwable -> L47
            r1 = 1
            r0.set(r1)     // Catch: java.lang.Throwable -> L47
            r8.f()     // Catch: java.lang.Throwable -> L47
            java.lang.String r0 = "Request Timeout."
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r1 = r8.t     // Catch: java.lang.Throwable -> L47
            r1.clear()     // Catch: java.lang.Throwable -> L47
            r3 = 0
            r5 = -3
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r7 = r8.r     // Catch: java.lang.Throwable -> L47
            r2 = r8
            r6 = r0
            r2.a(r3, r5, r6, r7)     // Catch: java.lang.Throwable -> L47
            r3 = 0
            r5 = -3
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r7 = r8.s     // Catch: java.lang.Throwable -> L47
            r2 = r8
            r6 = r0
            r2.a(r3, r5, r6, r7)     // Catch: java.lang.Throwable -> L47
            r8.l()     // Catch: java.lang.Throwable -> L47
            r8.k()     // Catch: java.lang.Throwable -> L47
            r8.j()     // Catch: java.lang.Throwable -> L47
        L45:
            monitor-exit(r8)
            return
        L47:
            r0 = move-exception
            monitor-exit(r8)
            throw r0
    }

    private void j() {
            r3 = this;
            java.util.List<com.tkay.core.common.f.aj> r0 = r3.h
            int r0 = r0.size()
            if (r0 > 0) goto L10
            java.util.List<com.tkay.core.common.f.aj> r0 = r3.g
            int r0 = r0.size()
            if (r0 <= 0) goto L1b
        L10:
            com.tkay.core.b.b.a r0 = r3.l
            if (r0 == 0) goto L1b
            java.util.List<com.tkay.core.common.f.aj> r1 = r3.h
            java.util.List<com.tkay.core.common.f.aj> r2 = r3.g
            r0.a(r1, r2)
        L1b:
            java.util.List<com.tkay.core.common.f.aj> r0 = r3.h
            r0.clear()
            java.util.List<com.tkay.core.common.f.aj> r0 = r3.g
            r0.clear()
            return
    }

    private synchronized void k() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.m()     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Ld
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.c     // Catch: java.lang.Throwable -> Lf
            r1 = 1
            r0.set(r1)     // Catch: java.lang.Throwable -> Lf
        Ld:
            monitor-exit(r2)
            return
        Lf:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    private void l() {
            r3 = this;
            boolean r0 = r3.b
            if (r0 == 0) goto L39
            java.util.List<com.tkay.core.common.f.aj> r0 = r3.h
            int r0 = r0.size()
            if (r0 > 0) goto L14
            java.util.List<com.tkay.core.common.f.aj> r0 = r3.g
            int r0 = r0.size()
            if (r0 <= 0) goto L39
        L14:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "S2S HeadBidding Success List"
            java.util.List<com.tkay.core.common.f.aj> r2 = r3.h     // Catch: java.lang.Exception -> L2f
            org.json.JSONArray r2 = a(r2)     // Catch: java.lang.Exception -> L2f
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2f
            java.lang.String r1 = "S2S HeadBidding Fail List"
            java.util.List<com.tkay.core.common.f.aj> r2 = r3.g     // Catch: java.lang.Exception -> L2f
            org.json.JSONArray r2 = a(r2)     // Catch: java.lang.Exception -> L2f
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2f
        L2f:
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.String r2 = "tkay_bidding"
            com.tkay.core.common.l.n.a(r2, r0, r1)
        L39:
            return
    }

    private boolean m() {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r0 = r1.r
            int r0 = r0.size()
            if (r0 != 0) goto L1a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r0 = r1.s
            int r0 = r0.size()
            if (r0 != 0) goto L1a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r0 = r1.t
            int r0 = r0.size()
            if (r0 != 0) goto L1a
            r0 = 1
            return r0
        L1a:
            r0 = 0
            return r0
    }

    @Override
    protected final void a(com.tkay.core.b.b.a r6) {
            r5 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            r5.m = r0
            r5.l = r6
            boolean r6 = r5.b
            if (r6 == 0) goto L33
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
            java.lang.String r0 = "S2S Start HeadBidding List"
            com.tkay.core.common.f.ag r1 = r5.a     // Catch: java.lang.Exception -> L29
            java.util.List<com.tkay.core.common.f.aj> r1 = r1.j     // Catch: java.lang.Exception -> L29
            org.json.JSONArray r1 = a(r1)     // Catch: java.lang.Exception -> L29
            r6.put(r0, r1)     // Catch: java.lang.Exception -> L29
            java.lang.String r0 = "S2S Start HeadBidding List(Directly)"
            java.util.List<org.json.JSONObject> r1 = r5.f     // Catch: java.lang.Exception -> L29
            org.json.JSONArray r1 = b(r1)     // Catch: java.lang.Exception -> L29
            r6.put(r0, r1)     // Catch: java.lang.Exception -> L29
        L29:
            java.lang.String r6 = r6.toString()
            r0 = 0
            java.lang.String r1 = "tkay_bidding"
            com.tkay.core.common.l.n.a(r1, r6, r0)
        L33:
            com.tkay.core.common.f.ag r6 = r5.a
            java.util.List<com.tkay.core.common.f.aj> r6 = r6.j
            int r6 = r6.size()
            if (r6 != 0) goto L53
            com.tkay.core.common.f.ag r6 = r5.a
            java.util.List<com.tkay.core.common.f.aj> r6 = r6.l
            if (r6 == 0) goto L53
            com.tkay.core.common.f.ag r6 = r5.a
            java.util.List<com.tkay.core.common.f.aj> r6 = r6.l
            int r6 = r6.size()
            if (r6 <= 0) goto L53
            long r0 = r5.m
            r5.b(r0)
            return
        L53:
            com.tkay.core.common.f.ag r6 = r5.a
            com.tkay.core.c.d r6 = r6.o
            long r0 = r6.u()
            r2 = 0
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 > 0) goto L63
            r0 = 500(0x1f4, double:2.47E-321)
        L63:
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r2 = r5.v
            r6.a(r2, r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r6 = r5.r
            java.util.Set r6 = r6.entrySet()
            java.util.Iterator r6 = r6.iterator()
        L76:
            boolean r0 = r6.hasNext()
            if (r0 == 0) goto Laf
            java.lang.Object r0 = r6.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r0 = r0.getValue()
            com.tkay.core.common.f.aj r0 = (com.tkay.core.common.f.aj) r0
            com.tkay.core.b.f r1 = new com.tkay.core.b.f
            com.tkay.core.common.f.ag r2 = r5.a
            r1.<init>(r2)
            com.tkay.core.b.b$2 r2 = new com.tkay.core.b.b$2
            r2.<init>(r5)
            r1.d = r2
            com.tkay.core.api.TYBaseAdAdapter r3 = com.tkay.core.common.l.i.a(r0)
            if (r3 != 0) goto La2
            java.lang.String r1 = "There is no Network Adapter."
            r2.a(r1, r0)
            goto L76
        La2:
            com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.b.f$1 r4 = new com.tkay.core.b.f$1
            r4.<init>(r1, r3, r0)
            r2.a(r4)
            goto L76
        Laf:
            return
    }

    @Override
    protected void a(com.tkay.core.common.f.aj r12, com.tkay.core.common.f.k r13, long r14) {
            r11 = this;
            boolean r0 = r13 instanceof com.tkay.core.common.f.l
            if (r0 == 0) goto Ld9
            com.tkay.core.common.f.l r13 = (com.tkay.core.common.f.l) r13
            boolean r0 = r13.isSuccessWithUseType()
            if (r0 == 0) goto L95
            java.lang.String r0 = r13.i
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L65
            java.lang.String r0 = r13.token     // Catch: java.lang.Throwable -> L65
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L65
            java.lang.String r2 = r13.i     // Catch: java.lang.Throwable -> L65
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L65
            int r2 = r13.d     // Catch: java.lang.Throwable -> L65
            com.tkay.core.common.f.f r0 = com.tkay.core.common.a.c.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L65
            if (r0 != 0) goto L26
            goto L65
        L26:
            int r1 = r13.d     // Catch: java.lang.Throwable -> L65
            r2 = 67
            if (r1 != r2) goto L52
            com.tkay.core.common.f.ag r1 = r11.a     // Catch: java.lang.Throwable -> L65
            android.content.Context r1 = r1.b     // Catch: java.lang.Throwable -> L65
            com.tkay.core.common.d.c r1 = com.tkay.core.common.d.c.a(r1)     // Catch: java.lang.Throwable -> L65
            java.lang.String r2 = r0.p()     // Catch: java.lang.Throwable -> L65
            long r3 = r0.P()     // Catch: java.lang.Throwable -> L65
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L65
            com.tkay.core.common.f.ag r1 = r11.a     // Catch: java.lang.Throwable -> L65
            android.content.Context r1 = r1.b     // Catch: java.lang.Throwable -> L65
            com.tkay.core.common.d.a r1 = com.tkay.core.common.d.b.a(r1)     // Catch: java.lang.Throwable -> L65
            java.lang.String r2 = r0.q()     // Catch: java.lang.Throwable -> L65
            long r3 = r0.P()     // Catch: java.lang.Throwable -> L65
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L65
        L52:
            com.tkay.core.common.a.a r5 = com.tkay.core.common.a.a.a()     // Catch: java.lang.Throwable -> L65
            com.tkay.core.common.f.ag r0 = r11.a     // Catch: java.lang.Throwable -> L65
            android.content.Context r6 = r0.b     // Catch: java.lang.Throwable -> L65
            int r7 = r13.d     // Catch: java.lang.Throwable -> L65
            java.lang.String r8 = r13.k     // Catch: java.lang.Throwable -> L65
            java.lang.String r9 = r13.token     // Catch: java.lang.Throwable -> L65
            java.lang.String r10 = r13.i     // Catch: java.lang.Throwable -> L65
            r5.a(r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L65
        L65:
            r12.a(r14)
            java.util.List<com.tkay.core.common.f.aj> r14 = r11.h
            r14.add(r12)
            int r14 = r12.l()
            r15 = 3
            if (r14 == r15) goto L88
            int r14 = r12.l()
            r15 = 7
            if (r14 != r15) goto L7c
            goto L88
        L7c:
            long r14 = r12.n()
            long r0 = java.lang.System.currentTimeMillis()
            long r14 = r14 + r0
            r13.f = r14
            goto L91
        L88:
            long r14 = r13.e
            long r0 = java.lang.System.currentTimeMillis()
            long r14 = r14 + r0
            r13.f = r14
        L91:
            r11.a(r12, r13)
            return
        L95:
            int r0 = r13.useType
            r1 = 2
            r2 = 0
            if (r0 != r1) goto La5
            r13 = 1
            r12.P()
            java.lang.String r0 = "filter by s2s bid max count"
            r5 = r0
            r8 = r2
            r2 = r13
            goto Lc7
        La5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "errorCode:["
            r0.<init>(r1)
            int r1 = r13.a
            r0.append(r1)
            java.lang.String r1 = "],errorMsg:["
            r0.append(r1)
            java.lang.String r13 = r13.errorMsg
            r0.append(r13)
            java.lang.String r13 = "]"
            r0.append(r13)
            java.lang.String r0 = r0.toString()
            r13 = -1
            r8 = r13
            r5 = r0
        Lc7:
            boolean r13 = r11.a(r12, r5, r8, r2)
            if (r13 == 0) goto Ld3
            java.util.List<com.tkay.core.common.f.aj> r13 = r11.h
            r13.add(r12)
            return
        Ld3:
            r3 = r11
            r4 = r12
            r6 = r14
            r3.b(r4, r5, r6, r8)
        Ld9:
            return
    }

    protected abstract void a(java.util.List<org.json.JSONObject> r1, com.tkay.core.common.h.k r2);

    protected synchronized void a(java.util.List<org.json.JSONObject> r2, java.util.Map<java.lang.String, com.tkay.core.common.f.aj> r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<org.json.JSONObject> r0 = r1.f     // Catch: java.lang.Throwable -> L17
            r2.addAll(r0)     // Catch: java.lang.Throwable -> L17
            java.util.List<org.json.JSONObject> r2 = r1.f     // Catch: java.lang.Throwable -> L17
            r2.clear()     // Catch: java.lang.Throwable -> L17
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r2 = r1.u     // Catch: java.lang.Throwable -> L17
            r3.putAll(r2)     // Catch: java.lang.Throwable -> L17
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r2 = r1.u     // Catch: java.lang.Throwable -> L17
            r2.clear()     // Catch: java.lang.Throwable -> L17
            monitor-exit(r1)
            return
        L17:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final void a(boolean r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    protected final void b() {
            r0 = this;
            r0.i()
            return
    }

    protected final synchronized void c() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.d()     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L13
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> L15
            com.tkay.core.b.b$4 r1 = new com.tkay.core.b.b$4     // Catch: java.lang.Throwable -> L15
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L15
            r0.a(r1)     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r2)
            return
        L15:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    protected final boolean d() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.q
            boolean r0 = r0.get()
            if (r0 != 0) goto L12
            java.util.List<org.json.JSONObject> r0 = r1.f
            int r0 = r0.size()
            if (r0 <= 0) goto L12
            r0 = 1
            return r0
        L12:
            r0 = 0
            return r0
    }

    protected abstract java.lang.String e();
}
