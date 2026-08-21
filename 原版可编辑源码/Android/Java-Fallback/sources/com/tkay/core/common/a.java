package com.tkay.core.common;

public class a {
    private static volatile com.tkay.core.common.a a;
    private final java.lang.String b;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ak>> c;


    private a() {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.b = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.c = r0
            return
    }

    public static com.tkay.core.common.a a() {
            com.tkay.core.common.a r0 = com.tkay.core.common.a.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.a> r0 = com.tkay.core.common.a.class
            monitor-enter(r0)
            com.tkay.core.common.a r1 = com.tkay.core.common.a.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.a r1 = new com.tkay.core.common.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.a.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.a r0 = com.tkay.core.common.a.a
            return r0
    }

    private java.util.List<com.tkay.core.common.f.a> a(java.lang.String r11, boolean r12) {
            r10 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ak>> r0 = r10.c
            java.lang.Object r0 = r0.get(r11)
            java.util.concurrent.ConcurrentHashMap r0 = (java.util.concurrent.ConcurrentHashMap) r0
            r1 = 0
            if (r0 != 0) goto Lc
            return r1
        Lc:
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
            java.util.ArrayList r2 = new java.util.ArrayList
            r3 = 3
            r2.<init>(r3)
            r3 = r1
        L1b:
            boolean r4 = r0.hasNext()
            if (r4 == 0) goto L70
            java.lang.Object r4 = r0.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r4 = r4.getValue()
            com.tkay.core.common.f.ak r4 = (com.tkay.core.common.f.ak) r4
            if (r4 == 0) goto L34
            com.tkay.core.common.f.a r4 = r4.a()
            goto L35
        L34:
            r4 = r1
        L35:
            r5 = 0
            if (r4 == 0) goto L65
            boolean r6 = r4.j()
            if (r6 == 0) goto L65
            r5 = 1
            if (r12 == 0) goto L45
            r2.add(r4)
            goto L65
        L45:
            if (r3 != 0) goto L48
            goto L64
        L48:
            com.tkay.core.api.TYBaseAdAdapter r6 = r3.e()
            com.tkay.core.common.f.aj r6 = r6.getUnitGroupInfo()
            double r6 = com.tkay.core.common.l.g.a(r6)
            com.tkay.core.api.TYBaseAdAdapter r8 = r4.e()
            com.tkay.core.common.f.aj r8 = r8.getUnitGroupInfo()
            double r8 = com.tkay.core.common.l.g.a(r8)
            int r6 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r6 >= 0) goto L65
        L64:
            r3 = r4
        L65:
            if (r5 != 0) goto L1b
            if (r4 == 0) goto L1b
            a(r11, r4)
            r4.k()
            goto L1b
        L70:
            if (r12 == 0) goto L76
            java.util.Collections.sort(r2)
            goto L7b
        L76:
            if (r3 == 0) goto L7b
            r2.add(r3)
        L7b:
            return r2
    }

    private static void a(com.tkay.core.api.TYBaseAdAdapter r14, java.lang.String r15, java.lang.String r16, com.tkay.core.c.d r17, com.tkay.core.common.f.aj r18, int r19, java.util.Map<java.lang.String, java.lang.Object> r20) {
            r0 = r14
            r1 = r18
            com.tkay.core.common.v r2 = com.tkay.core.common.v.a()
            r4 = r16
            java.util.Map r2 = r2.b(r4)
            r12 = 1
            int[] r3 = new int[r12]
            r13 = 0
            r3[r13] = r13
            java.lang.String r5 = "ofm_tid_key"
            boolean r6 = r2.containsKey(r5)
            if (r6 == 0) goto L27
            java.lang.Object r2 = r2.get(r5)     // Catch: java.lang.Throwable -> L27
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L27
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L27
            r3[r13] = r2     // Catch: java.lang.Throwable -> L27
        L27:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            int r5 = r18.c()
            r2.append(r5)
            java.lang.String r7 = r2.toString()
            r8 = 1
            r9 = 0
            r10 = r3[r13]
            java.lang.String r5 = ""
            r3 = r15
            r4 = r16
            r6 = r17
            r11 = r20
            com.tkay.core.common.f.d r2 = com.tkay.core.common.l.s.a(r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r3 = r19
            com.tkay.core.common.l.s.a(r2, r1, r3, r12)
            com.tkay.core.common.l.s.a(r14, r2, r1)
            r1 = 3
            r2.q = r1
            java.lang.String r1 = r14.getNetworkPlacementId()
            r2.g(r1)
            r14.setRefresh(r13)
            return
    }

    private static void a(java.lang.String r6, com.tkay.core.common.f.a r7) {
            com.tkay.core.api.TYBaseAdAdapter r0 = r7.e()     // Catch: java.lang.Throwable -> L31
            com.tkay.core.common.f.aj r0 = r0.getUnitGroupInfo()     // Catch: java.lang.Throwable -> L31
            com.tkay.core.common.f.l r1 = r0.M()     // Catch: java.lang.Throwable -> L31
            if (r1 == 0) goto L31
            com.tkay.core.common.f.d r7 = r7.h()     // Catch: java.lang.Throwable -> L31
            com.tkay.core.b.c r2 = com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> L31
            com.tkay.core.common.f.aj r6 = r2.c(r6)     // Catch: java.lang.Throwable -> L31
            double r2 = com.tkay.core.common.l.g.a(r6)     // Catch: java.lang.Throwable -> L31
            com.tkay.core.common.f.q r4 = new com.tkay.core.common.f.q     // Catch: java.lang.Throwable -> L31
            r4.<init>()     // Catch: java.lang.Throwable -> L31
            r5 = 1
            r4.a = r5     // Catch: java.lang.Throwable -> L31
            r4.b = r2     // Catch: java.lang.Throwable -> L31
            r4.e = r7     // Catch: java.lang.Throwable -> L31
            r4.c = r6     // Catch: java.lang.Throwable -> L31
            r4.d = r0     // Catch: java.lang.Throwable -> L31
            r1.a(r4, r5)     // Catch: java.lang.Throwable -> L31
        L31:
            return
    }

    private static void a(org.json.JSONArray r2, int r3, java.lang.String r4, int r5, java.lang.String r6, boolean r7, int r8) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "priority"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = "unit_id"
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = "nw_firm_id"
            r0.put(r3, r5)     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = "nw_ver"
            r0.put(r3, r6)     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = "result"
            if (r7 == 0) goto L1f
            r4 = 1
            goto L20
        L1f:
            r4 = 0
        L20:
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L2c
            r3 = -1
            if (r8 == r3) goto L30
            java.lang.String r3 = "reason"
            r0.put(r3, r8)     // Catch: java.lang.Exception -> L2c
            goto L30
        L2c:
            r3 = move-exception
            r3.printStackTrace()
        L30:
            r2.put(r0)
            return
    }

    public static void b(java.lang.String r3, com.tkay.core.common.f.aj r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Clean own ad cache :"
            r0.<init>(r1)
            java.lang.String r1 = r4.t()
            r0.append(r1)
            java.lang.String r1 = "|||"
            r0.append(r1)
            int r2 = r4.l()
            r0.append(r2)
            r0.append(r1)
            int r1 = r4.c()
            r0.append(r1)
            int r0 = r4.l()
            r1 = 3
            if (r0 == r1) goto L53
            r1 = 4
            if (r0 == r1) goto L35
            r3 = 7
            if (r0 == r3) goto L53
            goto L8a
        L35:
            com.tkay.core.basead.b.a()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.basead.b.a()
            java.lang.String r1 = r4.t()
            int r4 = r4.c()
            java.lang.String r3 = com.tkay.core.basead.b.a(r3, r1, r4)
            com.tkay.core.basead.b.b(r0, r3)
            return
        L53:
            com.tkay.core.common.f.l r3 = r4.M()
            com.tkay.core.b.c r0 = com.tkay.core.b.c.a()
            java.lang.String r1 = r4.t()
            r0.a(r1)
            com.tkay.core.b.c.a()
            java.lang.String r4 = r4.t()
            com.tkay.core.b.c.b(r4)
            if (r3 == 0) goto L8a
            java.lang.String r4 = r3.token
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L8a
            r3.b()
            com.tkay.core.common.a.a r4 = com.tkay.core.common.a.a.a()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r3 = r3.token
            r4.b(r0, r3)
        L8a:
            return
    }

    public final com.tkay.core.common.f.a a(android.content.Context r9, java.lang.String r10) {
            r8 = this;
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.Object r0 = r0.a(r10)
            monitor-enter(r0)
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            java.util.List r9 = r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L28
            if (r9 == 0) goto L25
            int r10 = r9.size()     // Catch: java.lang.Throwable -> L28
            if (r10 <= 0) goto L25
            r10 = 0
            java.lang.Object r9 = r9.get(r10)     // Catch: java.lang.Throwable -> L28
            com.tkay.core.common.f.a r9 = (com.tkay.core.common.f.a) r9     // Catch: java.lang.Throwable -> L28
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L28
            return r9
        L25:
            r9 = 0
            monitor-exit(r0)
            return r9
        L28:
            r9 = move-exception
            monitor-exit(r0)
            throw r9
    }

    public final com.tkay.core.common.f.a a(android.content.Context r9, java.lang.String r10, boolean r11, boolean r12, java.util.Map<java.lang.String, java.lang.Object> r13) {
            r8 = this;
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.Object r0 = r0.a(r10)
            monitor-enter(r0)
            r6 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r7 = r13
            java.util.List r9 = r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L28
            if (r9 == 0) goto L25
            int r10 = r9.size()     // Catch: java.lang.Throwable -> L28
            if (r10 <= 0) goto L25
            r10 = 0
            java.lang.Object r9 = r9.get(r10)     // Catch: java.lang.Throwable -> L28
            com.tkay.core.common.f.a r9 = (com.tkay.core.common.f.a) r9     // Catch: java.lang.Throwable -> L28
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L28
            return r9
        L25:
            r9 = 0
            monitor-exit(r0)
            return r9
        L28:
            r9 = move-exception
            monitor-exit(r0)
            throw r9
    }

    public final com.tkay.core.common.f.a a(java.lang.String r4, com.tkay.core.common.f.aj r5) {
            r3 = this;
            int r0 = r5.l()
            r1 = 0
            r2 = 3
            if (r0 == r2) goto Lf
            int r0 = r5.l()
            r2 = 7
            if (r0 != r2) goto L20
        Lf:
            com.tkay.core.b.c r0 = com.tkay.core.b.c.a()
            com.tkay.core.common.f.l r0 = r0.a(r5)
            if (r0 == 0) goto L4d
            boolean r0 = r0.a()
            if (r0 == 0) goto L20
            goto L4d
        L20:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ak>> r0 = r3.c
            java.lang.Object r0 = r0.get(r4)
            java.util.concurrent.ConcurrentHashMap r0 = (java.util.concurrent.ConcurrentHashMap) r0
            if (r0 == 0) goto L4d
            java.lang.String r5 = r5.t()
            java.lang.Object r5 = r0.get(r5)
            com.tkay.core.common.f.ak r5 = (com.tkay.core.common.f.ak) r5
            if (r5 == 0) goto L3b
            com.tkay.core.common.f.a r5 = r5.a()
            goto L3c
        L3b:
            r5 = r1
        L3c:
            if (r5 == 0) goto L45
            boolean r0 = r5.j()
            if (r0 == 0) goto L45
            return r5
        L45:
            if (r5 == 0) goto L4d
            a(r4, r5)
            r5.k()
        L4d:
            return r1
    }

    public final com.tkay.core.common.f.ak a(java.lang.String r8, int r9, com.tkay.core.api.TYBaseAdAdapter r10, java.util.List<? extends com.tkay.core.api.BaseAd> r11, long r12) {
            r7 = this;
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.Object r0 = r0.a(r8)
            monitor-enter(r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ak>> r1 = r7.c     // Catch: java.lang.Throwable -> Lfe
            java.lang.Object r1 = r1.get(r8)     // Catch: java.lang.Throwable -> Lfe
            java.util.concurrent.ConcurrentHashMap r1 = (java.util.concurrent.ConcurrentHashMap) r1     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.f.aj r2 = r10.getUnitGroupInfo()     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.f.aj r3 = r10.getUnitGroupInfo()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r3 = r3.t()     // Catch: java.lang.Throwable -> Lfe
            if (r1 != 0) goto L29
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> Lfe
            r1.<init>()     // Catch: java.lang.Throwable -> Lfe
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ak>> r4 = r7.c     // Catch: java.lang.Throwable -> Lfe
            r4.put(r8, r1)     // Catch: java.lang.Throwable -> Lfe
        L29:
            java.lang.Object r4 = r1.get(r3)     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.f.ak r4 = (com.tkay.core.common.f.ak) r4     // Catch: java.lang.Throwable -> Lfe
            if (r4 != 0) goto L46
            com.tkay.core.common.f.ak r4 = new com.tkay.core.common.f.ak     // Catch: java.lang.Throwable -> Lfe
            r4.<init>()     // Catch: java.lang.Throwable -> Lfe
            r4.a = r9     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.f.d r5 = r10.getTrackingInfo()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r5 = r5.X()     // Catch: java.lang.Throwable -> Lfe
            r4.b = r5     // Catch: java.lang.Throwable -> Lfe
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> Lfe
            goto L52
        L46:
            r4.a = r9     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.f.d r1 = r10.getTrackingInfo()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r1 = r1.X()     // Catch: java.lang.Throwable -> Lfe
            r4.b = r1     // Catch: java.lang.Throwable -> Lfe
        L52:
            com.tkay.core.common.f.a r1 = r4.a()     // Catch: java.lang.Throwable -> Lfe
            if (r1 == 0) goto L70
            com.tkay.core.common.x r3 = com.tkay.core.common.x.a()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r8 = r3.b(r8)     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.f.d r1 = r1.h()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r1 = r1.X()     // Catch: java.lang.Throwable -> Lfe
            boolean r8 = android.text.TextUtils.equals(r8, r1)     // Catch: java.lang.Throwable -> Lfe
            if (r8 == 0) goto L70
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lfe
            return r4
        L70:
            if (r11 == 0) goto Lca
            int r8 = r11.size()     // Catch: java.lang.Throwable -> Lfe
            if (r8 <= 0) goto Lca
            java.util.ArrayList r8 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lfe
            r8.<init>()     // Catch: java.lang.Throwable -> Lfe
            java.util.Iterator r11 = r11.iterator()     // Catch: java.lang.Throwable -> Lfe
        L81:
            boolean r1 = r11.hasNext()     // Catch: java.lang.Throwable -> Lfe
            if (r1 == 0) goto Lc6
            java.lang.Object r1 = r11.next()     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.api.BaseAd r1 = (com.tkay.core.api.BaseAd) r1     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.f.d r3 = r10.getTrackingInfo()     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.f.d r3 = r3.N()     // Catch: java.lang.Throwable -> Lfe
            r1.setTrackingInfo(r3)     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.f.a r3 = new com.tkay.core.common.f.a     // Catch: java.lang.Throwable -> Lfe
            r3.<init>()     // Catch: java.lang.Throwable -> Lfe
            r3.b(r9)     // Catch: java.lang.Throwable -> Lfe
            r3.a(r10)     // Catch: java.lang.Throwable -> Lfe
            r3.a(r1)     // Catch: java.lang.Throwable -> Lfe
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lfe
            r3.c(r5)     // Catch: java.lang.Throwable -> Lfe
            r3.b(r12)     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.f.d r1 = r10.getTrackingInfo()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r1 = r1.X()     // Catch: java.lang.Throwable -> Lfe
            r3.a(r1)     // Catch: java.lang.Throwable -> Lfe
            long r5 = r2.A()     // Catch: java.lang.Throwable -> Lfe
            r3.a(r5)     // Catch: java.lang.Throwable -> Lfe
            r8.add(r3)     // Catch: java.lang.Throwable -> Lfe
            goto L81
        Lc6:
            r4.a(r8)     // Catch: java.lang.Throwable -> Lfe
            goto Lfc
        Lca:
            com.tkay.core.common.f.a r8 = new com.tkay.core.common.f.a     // Catch: java.lang.Throwable -> Lfe
            r8.<init>()     // Catch: java.lang.Throwable -> Lfe
            r8.b(r9)     // Catch: java.lang.Throwable -> Lfe
            r8.a(r10)     // Catch: java.lang.Throwable -> Lfe
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lfe
            r8.c(r5)     // Catch: java.lang.Throwable -> Lfe
            r8.b(r12)     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.f.d r9 = r10.getTrackingInfo()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r9 = r9.X()     // Catch: java.lang.Throwable -> Lfe
            r8.a(r9)     // Catch: java.lang.Throwable -> Lfe
            long r9 = r2.A()     // Catch: java.lang.Throwable -> Lfe
            r8.a(r9)     // Catch: java.lang.Throwable -> Lfe
            java.util.ArrayList r9 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lfe
            r9.<init>()     // Catch: java.lang.Throwable -> Lfe
            r9.add(r8)     // Catch: java.lang.Throwable -> Lfe
            r4.a(r9)     // Catch: java.lang.Throwable -> Lfe
        Lfc:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lfe
            return r4
        Lfe:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
    }

    public final java.util.List<com.tkay.core.common.f.a> a(android.content.Context r36, java.lang.String r37, boolean r38, boolean r39, boolean r40, java.util.Map<java.lang.String, java.lang.Object> r41) {
            r35 = this;
            r8 = r35
            r0 = r36
            r15 = r37
            com.tkay.core.common.v r1 = com.tkay.core.common.v.a()
            java.lang.Object r18 = r1.a(r15)
            monitor-enter(r18)
            android.os.Looper r1 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L1c
            android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L1c
            if (r1 == r2) goto L1c
            android.os.Looper.prepare()     // Catch: java.lang.Throwable -> L1c
        L1c:
            java.util.ArrayList r9 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L541
            r9.<init>()     // Catch: java.lang.Throwable -> L541
            org.json.JSONArray r19 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L541
            r19.<init>()     // Catch: java.lang.Throwable -> L541
            java.util.ArrayList r10 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L541
            r10.<init>()     // Catch: java.lang.Throwable -> L541
            java.util.ArrayList r11 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L541
            r11.<init>()     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L541
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L541
            com.tkay.core.c.e r1 = com.tkay.core.c.e.a(r1)     // Catch: java.lang.Throwable -> L541
            com.tkay.core.c.d r14 = r1.a(r15)     // Catch: java.lang.Throwable -> L541
            r20 = 0
            if (r14 != 0) goto L46
            monitor-exit(r18)     // Catch: java.lang.Throwable -> L541
            return r20
        L46:
            com.tkay.core.common.x r1 = com.tkay.core.common.x.a()     // Catch: java.lang.Throwable -> L541
            java.util.List r1 = r1.a(r15)     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.x r2 = com.tkay.core.common.x.a()     // Catch: java.lang.Throwable -> L541
            java.lang.String r2 = r2.b(r15)     // Catch: java.lang.Throwable -> L541
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L541
            if (r3 == 0) goto L60
            java.lang.String r2 = com.tkay.core.common.l.g.a(r36)     // Catch: java.lang.Throwable -> L541
        L60:
            r13 = r2
            if (r1 == 0) goto L66
            r11.addAll(r1)     // Catch: java.lang.Throwable -> L541
        L66:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ak>> r1 = r8.c     // Catch: java.lang.Throwable -> L541
            java.lang.Object r1 = r1.get(r15)     // Catch: java.lang.Throwable -> L541
            r12 = r1
            java.util.concurrent.ConcurrentHashMap r12 = (java.util.concurrent.ConcurrentHashMap) r12     // Catch: java.lang.Throwable -> L541
            int r1 = r11.size()     // Catch: java.lang.Throwable -> L541
            r7 = 2
            r6 = 3
            r5 = 1
            if (r1 <= 0) goto L30c
            r3 = 0
        L79:
            int r1 = r11.size()     // Catch: java.lang.Throwable -> L541
            if (r3 >= r1) goto L30c
            java.lang.Object r1 = r11.get(r3)     // Catch: java.lang.Throwable -> L541
            r2 = r1
            com.tkay.core.common.f.aj r2 = (com.tkay.core.common.f.aj) r2     // Catch: java.lang.Throwable -> L541
            int r1 = r2.c()     // Catch: java.lang.Throwable -> L541
            r4 = 35
            if (r1 != r4) goto L91
            r10.add(r2)     // Catch: java.lang.Throwable -> L541
        L91:
            int r1 = r2.a()     // Catch: java.lang.Throwable -> L541
            if (r1 >= 0) goto L9d
            int r1 = r2.a()     // Catch: java.lang.Throwable -> L541
            r4 = r1
            goto L9e
        L9d:
            r4 = r3
        L9e:
            com.tkay.core.a.c r1 = com.tkay.core.a.c.a()     // Catch: java.lang.Throwable -> L541
            boolean r1 = r1.a(r15, r2)     // Catch: java.lang.Throwable -> L541
            if (r1 == 0) goto Lcf
            java.lang.String r17 = r2.t()     // Catch: java.lang.Throwable -> L541
            int r21 = r2.c()     // Catch: java.lang.Throwable -> L541
            java.lang.String r22 = ""
            r23 = 0
            r24 = 3
            r1 = r19
            r2 = r4
            r32 = r3
            r3 = r17
            r4 = r21
            r5 = r22
            r16 = r10
            r10 = r6
            r6 = r23
            r7 = r24
            a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L541
        Lcb:
            r33 = r12
            goto L301
        Lcf:
            r32 = r3
            r16 = r10
            r10 = r6
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L541
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> L541
            com.tkay.core.a.a r1 = com.tkay.core.a.a.a(r1)     // Catch: java.lang.Throwable -> L541
            boolean r1 = r1.a(r15, r2)     // Catch: java.lang.Throwable -> L541
            if (r1 == 0) goto Lff
            java.lang.String r3 = r2.t()     // Catch: java.lang.Throwable -> L541
            int r5 = r2.c()     // Catch: java.lang.Throwable -> L541
            java.lang.String r6 = ""
            r7 = 0
            r17 = 2
            r1 = r19
            r2 = r4
            r4 = r5
            r5 = r6
            r6 = r7
            r7 = r17
            a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L541
            goto Lcb
        Lff:
            int r1 = r2.l()     // Catch: java.lang.Throwable -> L541
            if (r1 == r10) goto L10c
            int r1 = r2.l()     // Catch: java.lang.Throwable -> L541
            r3 = 7
            if (r1 != r3) goto L11e
        L10c:
            com.tkay.core.b.c r1 = com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.f.l r1 = r1.a(r2)     // Catch: java.lang.Throwable -> L541
            if (r1 == 0) goto L2ea
            boolean r1 = r1.a()     // Catch: java.lang.Throwable -> L541
            if (r1 == 0) goto L11e
            goto L2ea
        L11e:
            if (r12 == 0) goto L12d
            java.lang.String r1 = r2.t()     // Catch: java.lang.Throwable -> L541
            java.lang.Object r1 = r12.get(r1)     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.f.ak r1 = (com.tkay.core.common.f.ak) r1     // Catch: java.lang.Throwable -> L541
            r17 = r1
            goto L12f
        L12d:
            r17 = r20
        L12f:
            if (r17 == 0) goto L137
            com.tkay.core.common.f.a r1 = r17.a()     // Catch: java.lang.Throwable -> L541
            r7 = r1
            goto L139
        L137:
            r7 = r20
        L139:
            if (r17 == 0) goto L1e0
            if (r7 != 0) goto L13f
            goto L1e0
        L13f:
            boolean r1 = r7.g()     // Catch: java.lang.Throwable -> L541
            boolean r3 = r7.i()     // Catch: java.lang.Throwable -> L541
            if (r1 == 0) goto L1be
            if (r3 == 0) goto L1be
            com.tkay.core.api.TYBaseAdAdapter r21 = r7.e()     // Catch: java.lang.Throwable -> L541
            r7.f()     // Catch: java.lang.Throwable -> L541
            java.lang.String r3 = r2.t()     // Catch: java.lang.Throwable -> L541
            int r5 = r2.c()     // Catch: java.lang.Throwable -> L541
            java.lang.String r6 = r21.getNetworkSDKVersion()     // Catch: java.lang.Throwable -> L541
            r22 = 1
            r23 = -1
            r1 = r19
            r24 = r2
            r2 = r4
            r10 = r4
            r4 = r5
            r5 = r6
            r6 = r22
            r34 = r7
            r7 = r23
            a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.f.d r1 = r34.h()     // Catch: java.lang.Throwable -> L541
            java.lang.String r2 = r19.toString()     // Catch: java.lang.Throwable -> L541
            r1.r(r2)     // Catch: java.lang.Throwable -> L541
            r1.p(r10)     // Catch: java.lang.Throwable -> L541
            if (r38 == 0) goto L1ac
            r22 = 1
            r23 = -1
            java.lang.String r25 = r24.t()     // Catch: java.lang.Throwable -> L541
            int r26 = r24.c()     // Catch: java.lang.Throwable -> L541
            java.lang.String r27 = r21.getNetworkSDKVersion()     // Catch: java.lang.Throwable -> L541
            java.lang.String r28 = r19.toString()     // Catch: java.lang.Throwable -> L541
            int r2 = r1.q     // Catch: java.lang.Throwable -> L541
            r3 = 3
            if (r2 != r3) goto L19f
            r30 = 1
            goto L1a1
        L19f:
            r30 = 0
        L1a1:
            java.lang.String r31 = ""
            r21 = r1
            r24 = r10
            r29 = r13
            com.tkay.core.common.k.c.a(r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31)     // Catch: java.lang.Throwable -> L541
        L1ac:
            if (r40 != 0) goto L1b5
            r2 = r34
            r9.add(r2)     // Catch: java.lang.Throwable -> L541
            monitor-exit(r18)     // Catch: java.lang.Throwable -> L541
            return r9
        L1b5:
            java.util.List r1 = r17.b()     // Catch: java.lang.Throwable -> L541
            r9.addAll(r1)     // Catch: java.lang.Throwable -> L541
            goto Lcb
        L1be:
            r24 = r2
            r10 = r4
            r2 = r7
            a(r15, r2)     // Catch: java.lang.Throwable -> L541
            r2.k()     // Catch: java.lang.Throwable -> L541
            java.lang.String r3 = r24.t()     // Catch: java.lang.Throwable -> L541
            int r4 = r24.c()     // Catch: java.lang.Throwable -> L541
            java.lang.String r5 = ""
            r6 = 0
            if (r1 != 0) goto L1d7
            r7 = 0
            goto L1d8
        L1d7:
            r7 = 1
        L1d8:
            r1 = r19
            r2 = r10
            a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L541
            goto Lcb
        L1e0:
            r24 = r2
            r10 = r4
            int r1 = r24.J()     // Catch: java.lang.Throwable -> L541
            r7 = 2
            if (r1 != r7) goto L1ec
            r5 = 1
            goto L1ed
        L1ec:
            r5 = 0
        L1ed:
            if (r5 == 0) goto L1f5
            com.tkay.core.api.TYBaseAdAdapter r1 = com.tkay.core.common.l.i.a(r24)     // Catch: java.lang.Throwable -> L541
            r6 = r1
            goto L1f7
        L1f5:
            r6 = r20
        L1f7:
            if (r6 == 0) goto L2d3
            r5 = r24
            java.util.Map r1 = r14.a(r15, r13, r5)     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.v r2 = com.tkay.core.common.v.a()     // Catch: java.lang.Throwable -> L541
            java.util.Map r2 = r2.b(r15)     // Catch: java.lang.Throwable -> L541
            boolean r17 = r6.internalInitNetworkObjectByPlacementId(r0, r1, r2)     // Catch: java.lang.Throwable -> L24e
            if (r17 == 0) goto L21e
            r1 = r6
            r2 = r13
            r3 = r37
            r4 = r14
            r21 = r5
            r33 = r12
            r12 = r6
            r6 = r10
            r7 = r41
            a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L253
            goto L223
        L21e:
            r21 = r5
            r33 = r12
            r12 = r6
        L223:
            int r1 = r14.Y()     // Catch: java.lang.Throwable -> L253
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L253
            java.lang.String r2 = "0"
            boolean r1 = android.text.TextUtils.equals(r1, r2)     // Catch: java.lang.Throwable -> L253
            if (r1 == 0) goto L242
            if (r17 == 0) goto L23d
            com.tkay.core.api.BaseAd r1 = r12.getBaseAdObject(r0)     // Catch: java.lang.Throwable -> L253
            if (r1 == 0) goto L23f
            r5 = 1
            goto L240
        L23d:
            r1 = r20
        L23f:
            r5 = 0
        L240:
            r4 = r5
            goto L256
        L242:
            if (r17 == 0) goto L24a
            boolean r1 = r12.isAdReady()     // Catch: java.lang.Throwable -> L253
            r4 = r1
            goto L24b
        L24a:
            r4 = 0
        L24b:
            r1 = r20
            goto L256
        L24e:
            r21 = r5
            r33 = r12
            r12 = r6
        L253:
            r1 = r20
            r4 = 0
        L256:
            if (r4 == 0) goto L2c0
            if (r1 == 0) goto L26f
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L541
            r2.<init>()     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.f.d r3 = r12.getTrackingInfo()     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.f.d r3 = r3.N()     // Catch: java.lang.Throwable -> L541
            r1.setTrackingInfo(r3)     // Catch: java.lang.Throwable -> L541
            r2.add(r1)     // Catch: java.lang.Throwable -> L541
            r5 = r2
            goto L271
        L26f:
            r5 = r20
        L271:
            long r6 = r21.p()     // Catch: java.lang.Throwable -> L541
            r1 = r35
            r2 = r37
            r3 = r10
            r4 = r12
            com.tkay.core.common.f.ak r1 = r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.f.a r2 = r1.a()     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.f.d r2 = r2.h()     // Catch: java.lang.Throwable -> L541
            r2.p(r10)     // Catch: java.lang.Throwable -> L541
            if (r38 == 0) goto L2ad
            r22 = 1
            r23 = -1
            java.lang.String r25 = r21.t()     // Catch: java.lang.Throwable -> L541
            int r26 = r21.c()     // Catch: java.lang.Throwable -> L541
            java.lang.String r27 = r12.getNetworkSDKVersion()     // Catch: java.lang.Throwable -> L541
            java.lang.String r28 = r19.toString()     // Catch: java.lang.Throwable -> L541
            r30 = 1
            java.lang.String r31 = ""
            r21 = r2
            r24 = r10
            r29 = r13
            com.tkay.core.common.k.c.a(r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31)     // Catch: java.lang.Throwable -> L541
        L2ad:
            if (r40 != 0) goto L2b8
            com.tkay.core.common.f.a r0 = r1.a()     // Catch: java.lang.Throwable -> L541
            r9.add(r0)     // Catch: java.lang.Throwable -> L541
            monitor-exit(r18)     // Catch: java.lang.Throwable -> L541
            return r9
        L2b8:
            java.util.List r1 = r1.b()     // Catch: java.lang.Throwable -> L541
            r9.addAll(r1)     // Catch: java.lang.Throwable -> L541
            goto L301
        L2c0:
            java.lang.String r3 = r21.t()     // Catch: java.lang.Throwable -> L541
            int r4 = r21.c()     // Catch: java.lang.Throwable -> L541
            java.lang.String r5 = ""
            r6 = 0
            r7 = 4
            r1 = r19
            r2 = r10
            a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L541
            goto L301
        L2d3:
            r33 = r12
            r21 = r24
            java.lang.String r3 = r21.t()     // Catch: java.lang.Throwable -> L541
            int r4 = r21.c()     // Catch: java.lang.Throwable -> L541
            java.lang.String r5 = ""
            r6 = 0
            r7 = 4
            r1 = r19
            r2 = r10
            a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L541
            goto L301
        L2ea:
            r21 = r2
            r10 = r4
            r33 = r12
            java.lang.String r3 = r21.t()     // Catch: java.lang.Throwable -> L541
            int r4 = r21.c()     // Catch: java.lang.Throwable -> L541
            java.lang.String r5 = ""
            r6 = 0
            r7 = 5
            r1 = r19
            r2 = r10
            a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L541
        L301:
            int r3 = r32 + 1
            r10 = r16
            r12 = r33
            r5 = 1
            r6 = 3
            r7 = 2
            goto L79
        L30c:
            r16 = r10
            if (r40 == 0) goto L322
            int r0 = r9.size()     // Catch: java.lang.Throwable -> L541
            if (r0 != 0) goto L320
            r12 = 1
            java.util.List r0 = r8.a(r15, r12)     // Catch: java.lang.Throwable -> L541
            if (r0 == 0) goto L320
            r9.addAll(r0)     // Catch: java.lang.Throwable -> L541
        L320:
            monitor-exit(r18)     // Catch: java.lang.Throwable -> L541
            return r9
        L322:
            r10 = 0
            r12 = 1
            java.util.List r1 = r8.a(r15, r10)     // Catch: java.lang.Throwable -> L541
            if (r1 == 0) goto L337
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L541
            if (r2 <= 0) goto L337
            java.lang.Object r1 = r1.get(r10)     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.f.a r1 = (com.tkay.core.common.f.a) r1     // Catch: java.lang.Throwable -> L541
            goto L339
        L337:
            r1 = r20
        L339:
            if (r1 == 0) goto L386
            com.tkay.core.common.f.d r0 = r1.h()     // Catch: java.lang.Throwable -> L541
            r9.add(r1)     // Catch: java.lang.Throwable -> L541
            if (r38 == 0) goto L36f
            r22 = 1
            r23 = -1
            int r24 = r11.size()     // Catch: java.lang.Throwable -> L541
            java.lang.String r25 = r0.x()     // Catch: java.lang.Throwable -> L541
            int r26 = r0.H()     // Catch: java.lang.Throwable -> L541
            java.lang.String r1 = r0.u     // Catch: java.lang.Throwable -> L541
            java.lang.String r28 = r19.toString()     // Catch: java.lang.Throwable -> L541
            int r2 = r0.q     // Catch: java.lang.Throwable -> L541
            r3 = 3
            if (r2 != r3) goto L362
            r30 = r12
            goto L364
        L362:
            r30 = r10
        L364:
            java.lang.String r31 = ""
            r21 = r0
            r27 = r1
            r29 = r13
            com.tkay.core.common.k.c.a(r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31)     // Catch: java.lang.Throwable -> L541
        L36f:
            int r1 = r11.size()     // Catch: java.lang.Throwable -> L541
            java.lang.String r2 = r0.x()     // Catch: java.lang.Throwable -> L541
            int r3 = r0.H()     // Catch: java.lang.Throwable -> L541
            java.lang.String r4 = r0.u     // Catch: java.lang.Throwable -> L541
            r5 = 1
            r6 = -1
            r0 = r19
            a(r0, r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L541
            monitor-exit(r18)     // Catch: java.lang.Throwable -> L541
            return r9
        L386:
            int r1 = r14.R()     // Catch: java.lang.Throwable -> L541
            if (r1 != r12) goto L38e
            r5 = r12
            goto L399
        L38e:
            int r1 = r14.R()     // Catch: java.lang.Throwable -> L541
            r2 = 2
            if (r1 != r2) goto L398
            r5 = r39
            goto L399
        L398:
            r5 = r10
        L399:
            int r1 = r16.size()     // Catch: java.lang.Throwable -> L541
            if (r1 <= 0) goto L49d
            if (r5 == 0) goto L49d
            com.tkay.core.common.s r1 = com.tkay.core.common.s.a()     // Catch: java.lang.Throwable -> L541
            java.lang.String r1 = r1.b(r0, r15)     // Catch: java.lang.Throwable -> L541
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L541
            if (r2 != 0) goto L3d1
            java.util.Iterator r2 = r16.iterator()     // Catch: java.lang.Throwable -> L541
        L3b3:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L541
            if (r3 == 0) goto L3d1
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.f.aj r3 = (com.tkay.core.common.f.aj) r3     // Catch: java.lang.Throwable -> L541
            java.lang.String r4 = r3.g()     // Catch: java.lang.Throwable -> L541
            if (r4 == 0) goto L3b3
            java.lang.String r4 = r3.g()     // Catch: java.lang.Throwable -> L541
            boolean r4 = r4.contains(r1)     // Catch: java.lang.Throwable -> L541
            if (r4 == 0) goto L3b3
            r7 = r3
            goto L3d3
        L3d1:
            r7 = r20
        L3d3:
            if (r7 == 0) goto L49d
            java.util.Map r1 = r14.a(r15, r13, r7)     // Catch: java.lang.Throwable -> L541
            java.lang.String r2 = "isDefaultOffer"
            java.lang.Boolean r3 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L541
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L541
            int r11 = r11.indexOf(r7)     // Catch: java.lang.Throwable -> L541
            com.tkay.core.api.TYBaseAdAdapter r6 = com.tkay.core.common.l.i.a(r7)     // Catch: java.lang.Throwable -> L49d
            com.tkay.core.common.v r2 = com.tkay.core.common.v.a()     // Catch: java.lang.Throwable -> L49d
            java.util.Map r2 = r2.b(r15)     // Catch: java.lang.Throwable -> L49d
            boolean r16 = r6.initNetworkObjectByPlacementId(r0, r1, r2)     // Catch: java.lang.Throwable -> L49d
            if (r16 == 0) goto L406
            r1 = r6
            r2 = r13
            r3 = r37
            r4 = r14
            r5 = r7
            r10 = r6
            r6 = r11
            r17 = r7
            r7 = r41
            a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L49d
            goto L409
        L406:
            r10 = r6
            r17 = r7
        L409:
            int r1 = r14.Y()     // Catch: java.lang.Throwable -> L49d
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L49d
            java.lang.String r2 = "0"
            boolean r1 = android.text.TextUtils.equals(r1, r2)     // Catch: java.lang.Throwable -> L49d
            if (r1 == 0) goto L427
            if (r16 == 0) goto L423
            com.tkay.core.api.BaseAd r0 = r10.getBaseAdObject(r0)     // Catch: java.lang.Throwable -> L49d
            if (r0 == 0) goto L425
            r5 = r12
            goto L432
        L423:
            r0 = r20
        L425:
            r5 = 0
            goto L432
        L427:
            if (r16 == 0) goto L42e
            boolean r4 = r10.isAdReady()     // Catch: java.lang.Throwable -> L49d
            goto L42f
        L42e:
            r4 = 0
        L42f:
            r5 = r4
            r0 = r20
        L432:
            if (r5 == 0) goto L49d
            if (r0 == 0) goto L44b
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L49d
            r1.<init>()     // Catch: java.lang.Throwable -> L49d
            com.tkay.core.common.f.d r2 = r10.getTrackingInfo()     // Catch: java.lang.Throwable -> L49d
            com.tkay.core.common.f.d r2 = r2.N()     // Catch: java.lang.Throwable -> L49d
            r0.setTrackingInfo(r2)     // Catch: java.lang.Throwable -> L49d
            r1.add(r0)     // Catch: java.lang.Throwable -> L49d
            r5 = r1
            goto L44d
        L44b:
            r5 = r20
        L44d:
            long r6 = r17.p()     // Catch: java.lang.Throwable -> L49d
            r1 = r35
            r2 = r37
            r3 = r11
            r4 = r10
            com.tkay.core.common.f.ak r0 = r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L49d
            com.tkay.core.common.f.a r1 = r0.a()     // Catch: java.lang.Throwable -> L49d
            com.tkay.core.common.f.d r1 = r1.h()     // Catch: java.lang.Throwable -> L49d
            r1.z = r12     // Catch: java.lang.Throwable -> L49d
            r1.p(r11)     // Catch: java.lang.Throwable -> L49d
            java.lang.String r2 = r19.toString()     // Catch: java.lang.Throwable -> L49d
            r1.r(r2)     // Catch: java.lang.Throwable -> L49d
            if (r38 == 0) goto L494
            r22 = 1
            r23 = -1
            java.lang.String r25 = r17.t()     // Catch: java.lang.Throwable -> L49d
            int r26 = r17.c()     // Catch: java.lang.Throwable -> L49d
            java.lang.String r27 = r10.getNetworkSDKVersion()     // Catch: java.lang.Throwable -> L49d
            java.lang.String r28 = r19.toString()     // Catch: java.lang.Throwable -> L49d
            r30 = 1
            java.lang.String r31 = r17.g()     // Catch: java.lang.Throwable -> L49d
            r21 = r1
            r24 = r11
            r29 = r13
            com.tkay.core.common.k.c.a(r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31)     // Catch: java.lang.Throwable -> L49d
        L494:
            com.tkay.core.common.f.a r0 = r0.a()     // Catch: java.lang.Throwable -> L49d
            r9.add(r0)     // Catch: java.lang.Throwable -> L49d
            monitor-exit(r18)     // Catch: java.lang.Throwable -> L541
            return r9
        L49d:
            if (r38 == 0) goto L520
            java.lang.String r11 = ""
            java.lang.String r0 = ""
            r1 = -1
            r2 = 0
            r16 = 0
            r9 = r13
            r3 = 0
            r10 = r37
            r4 = r12
            r12 = r14
            r5 = r13
            r13 = r0
            r0 = r14
            r14 = r1
            r1 = r15
            r15 = r2
            r17 = r41
            com.tkay.core.common.f.d r21 = com.tkay.core.common.l.s.a(r9, r10, r11, r12, r13, r14, r15, r16, r17)     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.v r2 = com.tkay.core.common.v.a()     // Catch: java.lang.Throwable -> L541
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L541
            r6.<init>()     // Catch: java.lang.Throwable -> L541
            int r7 = r0.Y()     // Catch: java.lang.Throwable -> L541
            r6.append(r7)     // Catch: java.lang.Throwable -> L541
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.f r2 = r2.a(r1, r6)     // Catch: java.lang.Throwable -> L541
            if (r2 == 0) goto L4d7
            boolean r3 = r2.e()     // Catch: java.lang.Throwable -> L541
        L4d7:
            if (r2 != 0) goto L500
            java.lang.String r2 = "AdManage is null--isReady"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L541
            java.lang.String r7 = "Id:"
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L541
            r6.append(r1)     // Catch: java.lang.Throwable -> L541
            java.lang.String r7 = "--format:"
            r6.append(r7)     // Catch: java.lang.Throwable -> L541
            int r7 = r0.Y()     // Catch: java.lang.Throwable -> L541
            r6.append(r7)     // Catch: java.lang.Throwable -> L541
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L541
            java.lang.String r7 = r7.q()     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.k.c.a(r2, r6, r7)     // Catch: java.lang.Throwable -> L541
        L500:
            r22 = 0
            if (r3 == 0) goto L508
            r2 = 5
            r23 = r2
            goto L50a
        L508:
            r23 = r4
        L50a:
            r24 = -1
            java.lang.String r25 = ""
            r26 = -1
            java.lang.String r27 = ""
            java.lang.String r28 = r19.toString()     // Catch: java.lang.Throwable -> L541
            r30 = 0
            java.lang.String r31 = ""
            r29 = r5
            com.tkay.core.common.k.c.a(r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31)     // Catch: java.lang.Throwable -> L541
            goto L524
        L520:
            r4 = r12
            r5 = r13
            r0 = r14
            r1 = r15
        L524:
            if (r39 == 0) goto L53f
            java.lang.String r11 = ""
            java.lang.String r13 = ""
            r14 = -1
            r15 = 0
            r16 = 0
            r9 = r5
            r10 = r37
            r12 = r0
            r17 = r41
            com.tkay.core.common.f.d r0 = com.tkay.core.common.l.s.a(r9, r10, r11, r12, r13, r14, r15, r16, r17)     // Catch: java.lang.Throwable -> L541
            java.lang.String r1 = r19.toString()     // Catch: java.lang.Throwable -> L541
            com.tkay.core.common.k.c.a(r0, r4, r1, r5)     // Catch: java.lang.Throwable -> L541
        L53f:
            monitor-exit(r18)     // Catch: java.lang.Throwable -> L541
            return r20
        L541:
            r0 = move-exception
            monitor-exit(r18)
            throw r0
    }

    public final void a(android.content.Context r9, com.tkay.core.common.f.a r10) {
            r8 = this;
            com.tkay.core.api.TYBaseAdAdapter r5 = r10.e()
            com.tkay.core.common.f.d r3 = r10.h()
            if (r5 == 0) goto Lf
            com.tkay.core.common.f.aj r0 = r5.getUnitGroupInfo()
            goto L10
        Lf:
            r0 = 0
        L10:
            if (r3 == 0) goto L83
            com.tkay.core.common.v r1 = com.tkay.core.common.v.a()
            java.lang.String r2 = r3.W()
            java.lang.String r4 = r3.Y()
            com.tkay.core.common.f r1 = r1.a(r2, r4)
            if (r1 == 0) goto L35
            java.lang.String r2 = r3.X()
            if (r0 == 0) goto L2f
            double r6 = com.tkay.core.common.l.g.a(r0)
            goto L31
        L2f:
            r6 = 0
        L31:
            r1.a(r2, r6, r0)
            goto L6c
        L35:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Id:"
            r1.<init>(r2)
            java.lang.String r2 = r3.W()
            r1.append(r2)
            java.lang.String r2 = "--format:"
            r1.append(r2)
            java.lang.String r2 = r3.Y()
            r1.append(r2)
            java.lang.String r2 = "--adsource:"
            r1.append(r2)
            java.lang.String r2 = r3.x()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.String r2 = r2.q()
            java.lang.String r4 = "AdManage is null--Show"
            com.tkay.core.common.k.c.a(r4, r1, r2)
        L6c:
            java.lang.String r1 = r3.W()
            b(r1, r0)
            com.tkay.core.common.l.b.a r6 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.a$1 r7 = new com.tkay.core.common.a$1
            r0 = r7
            r1 = r8
            r2 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            r6.a(r7)
        L83:
            return
    }

    public final void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.Object r0 = r0.a(r3)
            monitor-enter(r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ak>> r1 = r2.c     // Catch: java.lang.Throwable -> L26
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L26
            java.util.concurrent.ConcurrentHashMap r3 = (java.util.concurrent.ConcurrentHashMap) r3     // Catch: java.lang.Throwable -> L26
            if (r3 == 0) goto L24
            int r1 = r3.size()     // Catch: java.lang.Throwable -> L26
            if (r1 <= 0) goto L24
            java.lang.Object r3 = r3.remove(r4)     // Catch: java.lang.Throwable -> L26
            com.tkay.core.common.f.ak r3 = (com.tkay.core.common.f.ak) r3     // Catch: java.lang.Throwable -> L26
            if (r3 == 0) goto L24
            r3.c()     // Catch: java.lang.Throwable -> L26
        L24:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            return
        L26:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public final void a(java.lang.String r7, java.lang.String r8, com.tkay.core.c.d r9) {
            r6 = this;
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.Object r0 = r0.a(r7)
            monitor-enter(r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ak>> r1 = r6.c     // Catch: java.lang.Throwable -> L78
            java.lang.Object r1 = r1.get(r7)     // Catch: java.lang.Throwable -> L78
            java.util.concurrent.ConcurrentHashMap r1 = (java.util.concurrent.ConcurrentHashMap) r1     // Catch: java.lang.Throwable -> L78
            if (r1 == 0) goto L76
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L78
            if (r2 != 0) goto L1a
            goto L76
        L1a:
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L78
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L78
        L22:
            if (r1 == 0) goto L74
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L78
            if (r2 == 0) goto L74
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L78
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L78
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L78
            com.tkay.core.common.f.ak r2 = (com.tkay.core.common.f.ak) r2     // Catch: java.lang.Throwable -> L78
            if (r2 == 0) goto L22
            com.tkay.core.common.f.a r3 = r2.a()     // Catch: java.lang.Throwable -> L78
            if (r3 == 0) goto L22
            boolean r4 = r3.j()     // Catch: java.lang.Throwable -> L78
            if (r4 == 0) goto L6d
            java.lang.String r4 = r3.b()     // Catch: java.lang.Throwable -> L78
            boolean r4 = r4.equals(r8)     // Catch: java.lang.Throwable -> L78
            if (r4 != 0) goto L22
            com.tkay.core.api.TYBaseAdAdapter r4 = r3.e()     // Catch: java.lang.Throwable -> L78
            com.tkay.core.common.f.d r4 = r4.getTrackingInfo()     // Catch: java.lang.Throwable -> L78
            com.tkay.core.common.f.d r4 = r4.N()     // Catch: java.lang.Throwable -> L78
            r4.v = r8     // Catch: java.lang.Throwable -> L78
            r5 = 4
            r4.q = r5     // Catch: java.lang.Throwable -> L78
            com.tkay.core.common.l.s.a(r4, r9)     // Catch: java.lang.Throwable -> L78
            java.lang.String r3 = r3.b()     // Catch: java.lang.Throwable -> L78
            com.tkay.core.common.k.c.a(r4, r3)     // Catch: java.lang.Throwable -> L78
            r2.a(r4)     // Catch: java.lang.Throwable -> L78
            goto L22
        L6d:
            a(r7, r3)     // Catch: java.lang.Throwable -> L78
            r3.k()     // Catch: java.lang.Throwable -> L78
            goto L22
        L74:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L78
            return
        L76:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L78
            return
        L78:
            r7 = move-exception
            monitor-exit(r0)
            throw r7
    }

    public final void a(java.lang.String r3, java.lang.String r4, com.tkay.core.common.f.a r5) {
            r2 = this;
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.Object r0 = r0.a(r3)
            monitor-enter(r0)
            if (r5 != 0) goto Ld
            monitor-exit(r0)
            return
        Ld:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.ak>> r1 = r2.c     // Catch: java.lang.Throwable -> L33
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L33
            java.util.concurrent.ConcurrentHashMap r3 = (java.util.concurrent.ConcurrentHashMap) r3     // Catch: java.lang.Throwable -> L33
            if (r3 == 0) goto L31
            int r1 = r3.size()     // Catch: java.lang.Throwable -> L33
            if (r1 <= 0) goto L31
            java.lang.Object r1 = r3.get(r4)     // Catch: java.lang.Throwable -> L33
            com.tkay.core.common.f.ak r1 = (com.tkay.core.common.f.ak) r1     // Catch: java.lang.Throwable -> L33
            if (r1 == 0) goto L31
            r1.a(r5)     // Catch: java.lang.Throwable -> L33
            boolean r5 = r1.d()     // Catch: java.lang.Throwable -> L33
            if (r5 != 0) goto L31
            r3.remove(r4)     // Catch: java.lang.Throwable -> L33
        L31:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            return
        L33:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }
}
