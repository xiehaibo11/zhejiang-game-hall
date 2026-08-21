package com.igexin.push.c;

public class a {
    private static final java.lang.String f = null;
    public volatile com.igexin.push.c.d a;
    public java.util.concurrent.atomic.AtomicBoolean b;
    protected int c;
    protected volatile long d;
    protected volatile long e;
    private int g;
    private int h;
    private int i;
    private com.igexin.push.c.j j;
    private final java.util.List<com.igexin.push.c.e> k;
    private final java.util.List<com.igexin.push.c.j> l;
    private final java.lang.Object m;
    private final java.lang.Object n;
    private int o;
    private boolean p;
    private final java.util.Comparator<com.igexin.push.c.j> q;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DT_"
            r0.append(r1)
            java.lang.Class<com.igexin.push.c.a> r1 = com.igexin.push.c.a.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.c.a.f = r0
            return
    }

    public a() {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.k = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.l = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.m = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.n = r0
            com.igexin.push.c.d r0 = com.igexin.push.c.d.a
            r2.a = r0
            r0 = 0
            r2.o = r0
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r1.<init>(r0)
            r2.b = r1
            com.igexin.push.c.b r0 = new com.igexin.push.c.b
            r0.<init>(r2)
            r2.q = r0
            return
    }

    private synchronized void a(com.igexin.push.c.d r5) {
            r4 = this;
            monitor-enter(r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb4
            r0.<init>()     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r1 = com.igexin.push.c.a.f     // Catch: java.lang.Throwable -> Lb4
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r1 = "|set domain type = "
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb4
            r0.append(r5)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lb4
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Lb4
            com.igexin.b.a.c.b.a(r0, r2)     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.c.d r0 = r4.a     // Catch: java.lang.Throwable -> Lb4
            if (r0 == r5) goto L25
            r0 = 0
            r4.a(r0)     // Catch: java.lang.Throwable -> Lb4
        L25:
            int[] r0 = com.igexin.push.c.c.a     // Catch: java.lang.Throwable -> Lb4
            int r2 = r5.ordinal()     // Catch: java.lang.Throwable -> Lb4
            r0 = r0[r2]     // Catch: java.lang.Throwable -> Lb4
            r2 = 1
            if (r0 == r2) goto L74
            r3 = 2
            if (r0 == r3) goto L3e
            r3 = 3
            if (r0 == r3) goto L37
            goto La5
        L37:
            com.igexin.push.c.d r0 = r4.a     // Catch: java.lang.Throwable -> Lb4
            if (r0 == r5) goto L74
            r4.o = r1     // Catch: java.lang.Throwable -> Lb4
            goto L74
        L3e:
            java.util.concurrent.atomic.AtomicBoolean r0 = r4.b     // Catch: java.lang.Throwable -> Lb4
            r0.set(r2)     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.c.d r0 = r4.a     // Catch: java.lang.Throwable -> Lb4
            if (r0 == r5) goto L4d
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lb4
            r4.d = r2     // Catch: java.lang.Throwable -> Lb4
        L4d:
            java.lang.String[] r0 = com.igexin.push.config.SDKUrlConfig.XFR_ADDRESS_BAK     // Catch: java.lang.Throwable -> Lb4
            r0 = r0[r1]     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.config.SDKUrlConfig.setCmAddress(r0)     // Catch: java.lang.Throwable -> Lb4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb4
            r0.<init>()     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = com.igexin.push.c.a.f     // Catch: java.lang.Throwable -> Lb4
            r0.append(r2)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = "|set domain type backup cm = "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = com.igexin.push.config.SDKUrlConfig.getCmAddress()     // Catch: java.lang.Throwable -> Lb4
            r0.append(r2)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lb4
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Lb4
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> Lb4
            goto La5
        L74:
            r4.g = r1     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r0 = r4.c(r2)     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.config.SDKUrlConfig.setCmAddress(r0)     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.c.d r0 = com.igexin.push.c.d.a     // Catch: java.lang.Throwable -> Lb4
            if (r5 != r0) goto L86
            java.util.concurrent.atomic.AtomicBoolean r0 = r4.b     // Catch: java.lang.Throwable -> Lb4
            r0.set(r1)     // Catch: java.lang.Throwable -> Lb4
        L86:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb4
            r0.<init>()     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = com.igexin.push.c.a.f     // Catch: java.lang.Throwable -> Lb4
            r0.append(r2)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = "|set domain type normal cm = "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = com.igexin.push.config.SDKUrlConfig.getCmAddress()     // Catch: java.lang.Throwable -> Lb4
            r0.append(r2)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lb4
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Lb4
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> Lb4
        La5:
            r4.a = r5     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.c.i r5 = com.igexin.push.c.i.a()     // Catch: java.lang.Throwable -> Lb4
            com.igexin.push.c.m r5 = r5.f()     // Catch: java.lang.Throwable -> Lb4
            r5.n()     // Catch: java.lang.Throwable -> Lb4
            monitor-exit(r4)
            return
        Lb4:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    private void a(java.lang.String r7) {
            r6 = this;
            r0 = 0
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L48
            r1.<init>(r7)     // Catch: java.lang.Throwable -> L48
            r2 = r0
        L7:
            int r3 = r1.length()     // Catch: java.lang.Throwable -> L48
            if (r2 >= r3) goto L22
            java.util.List<com.igexin.push.c.e> r3 = r6.k     // Catch: java.lang.Throwable -> L48
            com.igexin.push.c.e r4 = new com.igexin.push.c.e     // Catch: java.lang.Throwable -> L48
            r4.<init>()     // Catch: java.lang.Throwable -> L48
            org.json.JSONObject r5 = r1.getJSONObject(r2)     // Catch: java.lang.Throwable -> L48
            com.igexin.push.c.e r4 = r4.a(r5)     // Catch: java.lang.Throwable -> L48
            r3.add(r4)     // Catch: java.lang.Throwable -> L48
            int r2 = r2 + 1
            goto L7
        L22:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L48
            r1.<init>()     // Catch: java.lang.Throwable -> L48
            java.lang.String r2 = com.igexin.push.c.a.f     // Catch: java.lang.Throwable -> L48
            r1.append(r2)     // Catch: java.lang.Throwable -> L48
            java.lang.String r2 = "|get cm from cache, isWifi = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L48
            boolean r2 = r6.p     // Catch: java.lang.Throwable -> L48
            r1.append(r2)     // Catch: java.lang.Throwable -> L48
            java.lang.String r2 = ", lastCmList = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L48
            r1.append(r7)     // Catch: java.lang.Throwable -> L48
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L48
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L48
            com.igexin.b.a.c.b.a(r7, r1)     // Catch: java.lang.Throwable -> L48
            goto L68
        L48:
            r7 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.c.a.f
            r1.append(r2)
            java.lang.String r2 = "|"
            r1.append(r2)
            java.lang.String r7 = r7.toString()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r7, r0)
        L68:
            return
    }

    private java.lang.String b(boolean r10) {
            r9 = this;
            r0 = 0
            r1 = 0
            java.lang.Object r2 = r9.n     // Catch: java.lang.Exception -> L118
            monitor-enter(r2)     // Catch: java.lang.Exception -> L118
            boolean r3 = r9.p     // Catch: java.lang.Throwable -> L115
            if (r3 == 0) goto Lc
            java.lang.String r3 = com.igexin.push.core.d.aj     // Catch: java.lang.Throwable -> L115
            goto Le
        Lc:
            java.lang.String r3 = com.igexin.push.core.d.ak     // Catch: java.lang.Throwable -> L115
        Le:
            java.util.List<com.igexin.push.c.e> r4 = r9.k     // Catch: java.lang.Throwable -> L115
            boolean r4 = r4.isEmpty()     // Catch: java.lang.Throwable -> L115
            if (r4 == 0) goto L3a
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L115
            if (r4 == 0) goto L3a
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L115
            r10.<init>()     // Catch: java.lang.Throwable -> L115
            java.lang.String r3 = com.igexin.push.c.a.f     // Catch: java.lang.Throwable -> L115
            r10.append(r3)     // Catch: java.lang.Throwable -> L115
            java.lang.String r3 = "cm list size = 0"
            r10.append(r3)     // Catch: java.lang.Throwable -> L115
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L115
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L115
            com.igexin.b.a.c.b.a(r10, r3)     // Catch: java.lang.Throwable -> L115
            r9.i = r1     // Catch: java.lang.Throwable -> L115
            r9.h = r1     // Catch: java.lang.Throwable -> L115
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L115
            return r0
        L3a:
            java.util.List<com.igexin.push.c.e> r4 = r9.k     // Catch: java.lang.Throwable -> L115
            boolean r4 = r4.isEmpty()     // Catch: java.lang.Throwable -> L115
            if (r4 == 0) goto L4b
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L115
            if (r4 != 0) goto L4b
            r9.a(r3)     // Catch: java.lang.Throwable -> L115
        L4b:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L115
            r3.<init>()     // Catch: java.lang.Throwable -> L115
            java.lang.String r4 = com.igexin.push.c.a.f     // Catch: java.lang.Throwable -> L115
            r3.append(r4)     // Catch: java.lang.Throwable -> L115
            java.lang.String r4 = "cm try = "
            r3.append(r4)     // Catch: java.lang.Throwable -> L115
            int r4 = r9.i     // Catch: java.lang.Throwable -> L115
            r3.append(r4)     // Catch: java.lang.Throwable -> L115
            java.lang.String r4 = " times"
            r3.append(r4)     // Catch: java.lang.Throwable -> L115
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L115
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L115
            com.igexin.b.a.c.b.a(r3, r4)     // Catch: java.lang.Throwable -> L115
            java.util.List<com.igexin.push.c.e> r3 = r9.k     // Catch: java.lang.Throwable -> L115
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L115
            int r4 = r9.i     // Catch: java.lang.Throwable -> L115
            int r3 = r3 * 2
            if (r4 < r3) goto L9c
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L115
            r10.<init>()     // Catch: java.lang.Throwable -> L115
            java.lang.String r3 = com.igexin.push.c.a.f     // Catch: java.lang.Throwable -> L115
            r10.append(r3)     // Catch: java.lang.Throwable -> L115
            java.lang.String r3 = "cm invalid"
            r10.append(r3)     // Catch: java.lang.Throwable -> L115
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L115
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L115
            com.igexin.b.a.c.b.a(r10, r3)     // Catch: java.lang.Throwable -> L115
            r9.i = r1     // Catch: java.lang.Throwable -> L115
            r9.h = r1     // Catch: java.lang.Throwable -> L115
            java.util.List<com.igexin.push.c.e> r10 = r9.k     // Catch: java.lang.Throwable -> L115
            r10.clear()     // Catch: java.lang.Throwable -> L115
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L115
            return r0
        L9c:
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L115
            java.util.List<com.igexin.push.c.e> r5 = r9.k     // Catch: java.lang.Throwable -> L115
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L115
        La6:
            boolean r6 = r5.hasNext()     // Catch: java.lang.Throwable -> L115
            if (r6 == 0) goto Lde
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Throwable -> L115
            com.igexin.push.c.e r6 = (com.igexin.push.c.e) r6     // Catch: java.lang.Throwable -> L115
            long r7 = r6.b     // Catch: java.lang.Throwable -> L115
            int r7 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r7 >= 0) goto La6
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L115
            r7.<init>()     // Catch: java.lang.Throwable -> L115
            java.lang.String r8 = com.igexin.push.c.a.f     // Catch: java.lang.Throwable -> L115
            r7.append(r8)     // Catch: java.lang.Throwable -> L115
            java.lang.String r8 = "|add["
            r7.append(r8)     // Catch: java.lang.Throwable -> L115
            java.lang.String r6 = r6.a     // Catch: java.lang.Throwable -> L115
            r7.append(r6)     // Catch: java.lang.Throwable -> L115
            java.lang.String r6 = "] outDate"
            r7.append(r6)     // Catch: java.lang.Throwable -> L115
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L115
            java.lang.Object[] r7 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L115
            com.igexin.b.a.c.b.a(r6, r7)     // Catch: java.lang.Throwable -> L115
            r5.remove()     // Catch: java.lang.Throwable -> L115
            goto La6
        Lde:
            r9.d()     // Catch: java.lang.Throwable -> L115
            java.util.List<com.igexin.push.c.e> r3 = r9.k     // Catch: java.lang.Throwable -> L115
            boolean r3 = r3.isEmpty()     // Catch: java.lang.Throwable -> L115
            if (r3 == 0) goto Leb
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L115
            return r0
        Leb:
            if (r10 == 0) goto Lf3
            int r10 = r9.i     // Catch: java.lang.Throwable -> L115
            int r10 = r10 + 1
            r9.i = r10     // Catch: java.lang.Throwable -> L115
        Lf3:
            int r10 = r9.h     // Catch: java.lang.Throwable -> L115
            java.util.List<com.igexin.push.c.e> r3 = r9.k     // Catch: java.lang.Throwable -> L115
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L115
            if (r10 < r3) goto Lff
            r10 = r1
            goto L101
        Lff:
            int r10 = r9.h     // Catch: java.lang.Throwable -> L115
        L101:
            r9.h = r10     // Catch: java.lang.Throwable -> L115
            java.util.List<com.igexin.push.c.e> r3 = r9.k     // Catch: java.lang.Throwable -> L115
            java.lang.Object r10 = r3.get(r10)     // Catch: java.lang.Throwable -> L115
            com.igexin.push.c.e r10 = (com.igexin.push.c.e) r10     // Catch: java.lang.Throwable -> L115
            java.lang.String r10 = r10.a     // Catch: java.lang.Throwable -> L115
            int r3 = r9.h     // Catch: java.lang.Throwable -> L115
            int r3 = r3 + 1
            r9.h = r3     // Catch: java.lang.Throwable -> L115
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L115
            return r10
        L115:
            r10 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L115
            throw r10     // Catch: java.lang.Exception -> L118
        L118:
            r10 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.igexin.push.c.a.f
            r2.append(r3)
            java.lang.String r3 = "|"
            r2.append(r3)
            java.lang.String r10 = r10.toString()
            r2.append(r10)
            java.lang.String r10 = r2.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r10, r1)
            return r0
    }

    private java.lang.String c(boolean r4) {
            r3 = this;
            java.lang.Object r0 = r3.m
            monitor-enter(r0)
            int r1 = r3.g     // Catch: java.lang.Throwable -> L23
            java.util.List<com.igexin.push.c.j> r2 = r3.l     // Catch: java.lang.Throwable -> L23
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L23
            if (r1 < r2) goto Lf
            r1 = 0
            goto L11
        Lf:
            int r1 = r3.g     // Catch: java.lang.Throwable -> L23
        L11:
            r3.g = r1     // Catch: java.lang.Throwable -> L23
            java.util.List<com.igexin.push.c.j> r2 = r3.l     // Catch: java.lang.Throwable -> L23
            java.lang.Object r1 = r2.get(r1)     // Catch: java.lang.Throwable -> L23
            com.igexin.push.c.j r1 = (com.igexin.push.c.j) r1     // Catch: java.lang.Throwable -> L23
            r3.j = r1     // Catch: java.lang.Throwable -> L23
            java.lang.String r4 = r1.b(r4)     // Catch: java.lang.Throwable -> L23
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            return r4
        L23:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            throw r4
    }

    private void j() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.c.a.f
            r0.append(r1)
            java.lang.String r1 = "|before disconnect, type = "
            r0.append(r1)
            com.igexin.push.c.d r1 = r4.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            int[] r0 = com.igexin.push.c.c.a
            com.igexin.push.c.d r1 = r4.a
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L42
            r1 = 2
            if (r0 == r1) goto L2f
            goto L59
        L2f:
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.d
            long r0 = r0 - r2
            long r2 = com.igexin.push.config.j.g
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L59
            com.igexin.push.c.d r0 = com.igexin.push.c.d.c
        L3e:
            r4.a(r0)
            goto L59
        L42:
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.e
            long r0 = r0 - r2
            r2 = 86400000(0x5265c00, double:4.2687272E-316)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L59
            int r0 = r4.c
            int r1 = com.igexin.push.config.j.i
            if (r0 <= r1) goto L59
            com.igexin.push.c.d r0 = com.igexin.push.c.d.b
            goto L3e
        L59:
            return
    }

    public void a(java.util.List<com.igexin.push.c.e> r5) {
            r4 = this;
            java.lang.Object r0 = r4.n
            monitor-enter(r0)
            r1 = 0
            r4.h = r1     // Catch: java.lang.Throwable -> L38
            r4.i = r1     // Catch: java.lang.Throwable -> L38
            java.util.List<com.igexin.push.c.e> r2 = r4.k     // Catch: java.lang.Throwable -> L38
            r2.clear()     // Catch: java.lang.Throwable -> L38
            if (r5 == 0) goto L33
            java.util.List<com.igexin.push.c.e> r2 = r4.k     // Catch: java.lang.Throwable -> L38
            r2.addAll(r5)     // Catch: java.lang.Throwable -> L38
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38
            r2.<init>()     // Catch: java.lang.Throwable -> L38
            java.lang.String r3 = com.igexin.push.c.a.f     // Catch: java.lang.Throwable -> L38
            r2.append(r3)     // Catch: java.lang.Throwable -> L38
            java.lang.String r3 = "|set cm list: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L38
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L38
            r2.append(r5)     // Catch: java.lang.Throwable -> L38
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L38
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L38
            com.igexin.b.a.c.b.a(r5, r1)     // Catch: java.lang.Throwable -> L38
        L33:
            r4.d()     // Catch: java.lang.Throwable -> L38
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
            return
        L38:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
            throw r5
    }

    public void a(boolean r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public boolean a() {
            r6 = this;
            r0 = 0
            com.igexin.push.core.c r1 = com.igexin.push.core.c.a()     // Catch: java.lang.Exception -> La5
            com.igexin.push.e.a r1 = r1.i()     // Catch: java.lang.Exception -> La5
            boolean r1 = r1.h()     // Catch: java.lang.Exception -> La5
            r2 = 1
            if (r1 != 0) goto L12
            r1 = r2
            goto L13
        L12:
            r1 = r0
        L13:
            java.lang.String r3 = r6.b(r1)     // Catch: java.lang.Exception -> La5
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La5
            r4.<init>()     // Catch: java.lang.Exception -> La5
            java.lang.String r5 = com.igexin.push.c.a.f     // Catch: java.lang.Exception -> La5
            r4.append(r5)     // Catch: java.lang.Exception -> La5
            java.lang.String r5 = "|get from cm = "
            r4.append(r5)     // Catch: java.lang.Exception -> La5
            r4.append(r3)     // Catch: java.lang.Exception -> La5
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> La5
            java.lang.Object[] r5 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> La5
            com.igexin.b.a.c.b.a(r4, r5)     // Catch: java.lang.Exception -> La5
            if (r3 != 0) goto L69
            com.igexin.push.c.d r3 = r6.a     // Catch: java.lang.Exception -> La5
            com.igexin.push.c.d r4 = com.igexin.push.c.d.b     // Catch: java.lang.Exception -> La5
            if (r3 != r4) goto L53
            int r1 = r6.g     // Catch: java.lang.Exception -> La5
            java.lang.String[] r3 = com.igexin.push.config.SDKUrlConfig.XFR_ADDRESS_BAK     // Catch: java.lang.Exception -> La5
            int r3 = r3.length     // Catch: java.lang.Exception -> La5
            if (r1 < r3) goto L43
            r1 = r0
            goto L45
        L43:
            int r1 = r6.g     // Catch: java.lang.Exception -> La5
        L45:
            r6.g = r1     // Catch: java.lang.Exception -> La5
            java.lang.String[] r1 = com.igexin.push.config.SDKUrlConfig.XFR_ADDRESS_BAK     // Catch: java.lang.Exception -> La5
            int r3 = r6.g     // Catch: java.lang.Exception -> La5
            r3 = r1[r3]     // Catch: java.lang.Exception -> La5
            int r1 = r6.g     // Catch: java.lang.Exception -> La5
            int r1 = r1 + r2
            r6.g = r1     // Catch: java.lang.Exception -> La5
            goto L68
        L53:
            com.igexin.push.c.j r3 = r6.j     // Catch: java.lang.Exception -> La5
            if (r3 == 0) goto L64
            com.igexin.push.c.j r3 = r6.j     // Catch: java.lang.Exception -> La5
            boolean r3 = r3.f()     // Catch: java.lang.Exception -> La5
            if (r3 != 0) goto L64
            int r3 = r6.g     // Catch: java.lang.Exception -> La5
            int r3 = r3 + r2
            r6.g = r3     // Catch: java.lang.Exception -> La5
        L64:
            java.lang.String r3 = r6.c(r1)     // Catch: java.lang.Exception -> La5
        L68:
            r2 = r0
        L69:
            java.lang.String r1 = com.igexin.push.config.SDKUrlConfig.getCmAddress()     // Catch: java.lang.Exception -> La3
            boolean r1 = r1.equals(r3)     // Catch: java.lang.Exception -> La3
            if (r1 != 0) goto L9f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La3
            r1.<init>()     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = com.igexin.push.c.a.f     // Catch: java.lang.Exception -> La3
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "|address changed : form ["
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = com.igexin.push.config.SDKUrlConfig.getCmAddress()     // Catch: java.lang.Exception -> La3
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "] to ["
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            r1.append(r3)     // Catch: java.lang.Exception -> La3
            java.lang.String r4 = "]"
            r1.append(r4)     // Catch: java.lang.Exception -> La3
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> La3
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> La3
            com.igexin.b.a.c.b.a(r1, r4)     // Catch: java.lang.Exception -> La3
        L9f:
            com.igexin.push.config.SDKUrlConfig.setCmAddress(r3)     // Catch: java.lang.Exception -> La3
            goto Lc9
        La3:
            r1 = move-exception
            goto La7
        La5:
            r1 = move-exception
            r2 = r0
        La7:
            r1.printStackTrace()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = com.igexin.push.c.a.f
            r3.append(r4)
            java.lang.String r4 = "|switch address|"
            r3.append(r4)
            java.lang.String r1 = r1.toString()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r0)
        Lc9:
            return r2
    }

    public synchronized void b() {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.i = r0     // Catch: java.lang.Throwable -> Lf
            com.igexin.push.c.j r0 = r1.j     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Ld
            com.igexin.push.c.j r0 = r1.j     // Catch: java.lang.Throwable -> Lf
            r0.g()     // Catch: java.lang.Throwable -> Lf
        Ld:
            monitor-exit(r1)
            return
        Lf:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public void b(java.util.List<com.igexin.push.c.j> r3) {
            r2 = this;
            java.lang.Object r0 = r2.m
            monitor-enter(r0)
            java.util.List<com.igexin.push.c.j> r1 = r2.l     // Catch: java.lang.Throwable -> L16
            r1.clear()     // Catch: java.lang.Throwable -> L16
            java.util.List<com.igexin.push.c.j> r1 = r2.l     // Catch: java.lang.Throwable -> L16
            r1.addAll(r3)     // Catch: java.lang.Throwable -> L16
            java.util.List<com.igexin.push.c.j> r3 = r2.l     // Catch: java.lang.Throwable -> L16
            java.util.Comparator<com.igexin.push.c.j> r1 = r2.q     // Catch: java.lang.Throwable -> L16
            java.util.Collections.sort(r3, r1)     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return
        L16:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r3
    }

    public synchronized void c() {
            r2 = this;
            monitor-enter(r2)
            int r0 = r2.c     // Catch: java.lang.Throwable -> L27
            int r0 = r0 + 1
            r2.c = r0     // Catch: java.lang.Throwable -> L27
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L27
            r0.<init>()     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = com.igexin.push.c.a.f     // Catch: java.lang.Throwable -> L27
            r0.append(r1)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "|loginFailedlCnt = "
            r0.append(r1)     // Catch: java.lang.Throwable -> L27
            int r1 = r2.c     // Catch: java.lang.Throwable -> L27
            r0.append(r1)     // Catch: java.lang.Throwable -> L27
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L27
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L27
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> L27
            monitor-exit(r2)
            return
        L27:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public void d() {
            r3 = this;
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            java.util.List<com.igexin.push.c.e> r1 = r3.k
            java.util.Iterator r1 = r1.iterator()
        Lb:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1f
            java.lang.Object r2 = r1.next()
            com.igexin.push.c.e r2 = (com.igexin.push.c.e) r2
            org.json.JSONObject r2 = r2.a()
            r0.put(r2)
            goto Lb
        L1f:
            com.igexin.push.core.b.i r1 = com.igexin.push.core.b.i.a()
            int r2 = r0.length()
            if (r2 != 0) goto L2c
            java.lang.String r0 = "null"
            goto L30
        L2c:
            java.lang.String r0 = r0.toString()
        L30:
            boolean r2 = r3.p
            r2 = r2 ^ 1
            r1.c(r0, r2)
            return
    }

    public void e() {
            r3 = this;
            java.lang.Object r0 = r3.m
            monitor-enter(r0)
            r1 = 0
            r3.g = r1     // Catch: java.lang.Throwable -> Lf
            java.util.List<com.igexin.push.c.j> r1 = r3.l     // Catch: java.lang.Throwable -> Lf
            java.util.Comparator<com.igexin.push.c.j> r2 = r3.q     // Catch: java.lang.Throwable -> Lf
            java.util.Collections.sort(r1, r2)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            throw r1
    }

    public void f() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.c.a.f
            r0.append(r1)
            java.lang.String r1 = "|detect success, current type = "
            r0.append(r1)
            com.igexin.push.c.d r1 = r2.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            com.igexin.push.c.d r0 = r2.a
            com.igexin.push.c.d r1 = com.igexin.push.c.d.b
            if (r0 != r1) goto L35
            com.igexin.push.c.d r0 = com.igexin.push.c.d.c
            r2.a(r0)
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r0 = r0.i()
            r1 = 1
            r0.a(r1)
        L35:
            return
    }

    public void g() {
            r4 = this;
            int[] r0 = com.igexin.push.c.c.a
            com.igexin.push.c.d r1 = r4.a
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 2
            if (r0 == r1) goto Le
            goto L20
        Le:
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.d
            long r0 = r0 - r2
            long r2 = com.igexin.push.config.j.g
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L20
            com.igexin.push.c.d r0 = com.igexin.push.c.d.c
            r4.a(r0)
        L20:
            return
    }

    public void h() {
            r3 = this;
            com.igexin.push.c.d r0 = r3.a
            com.igexin.push.c.d r1 = com.igexin.push.c.d.b
            r2 = 0
            if (r0 == r1) goto L9
            r3.c = r2
        L9:
            int[] r0 = com.igexin.push.c.c.a
            com.igexin.push.c.d r1 = r3.a
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L20
            r1 = 3
            if (r0 == r1) goto L1a
            goto L36
        L1a:
            com.igexin.push.c.d r0 = com.igexin.push.c.d.a
            r3.a(r0)
            goto L31
        L20:
            long r0 = java.lang.System.currentTimeMillis()
            r3.e = r0
            com.igexin.push.c.i r0 = com.igexin.push.c.i.a()
            com.igexin.push.c.m r0 = r0.f()
            r0.n()
        L31:
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.b
            r0.set(r2)
        L36:
            return
    }

    public void i() {
            r2 = this;
            r2.j()
            boolean r0 = com.igexin.push.core.d.n
            if (r0 == 0) goto L1e
            com.igexin.push.c.d r0 = r2.a
            com.igexin.push.c.d r1 = com.igexin.push.c.d.b
            if (r0 == r1) goto L1e
            long r0 = java.lang.System.currentTimeMillis()
            r2.e = r0
            com.igexin.push.c.i r0 = com.igexin.push.c.i.a()
            com.igexin.push.c.m r0 = r0.f()
            r0.n()
        L1e:
            int[] r0 = com.igexin.push.c.c.a
            com.igexin.push.c.d r1 = r2.a
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 3
            if (r0 == r1) goto L2c
            goto L44
        L2c:
            int r0 = r2.o
            int r0 = r0 + 1
            r2.o = r0
            r1 = 10
            if (r0 < r1) goto L44
            r0 = 0
            r2.c = r0
            long r0 = java.lang.System.currentTimeMillis()
            r2.d = r0
            com.igexin.push.c.d r0 = com.igexin.push.c.d.b
            r2.a(r0)
        L44:
            return
    }
}
