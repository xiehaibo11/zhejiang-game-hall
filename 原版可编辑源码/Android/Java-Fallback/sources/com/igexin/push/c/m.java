package com.igexin.push.c;

public abstract class m {
    private static final java.lang.String e = null;
    protected long a;
    protected final java.util.Map<java.lang.String, com.igexin.push.c.q> b;
    protected final java.util.Map<java.lang.String, com.igexin.push.c.j> c;
    protected com.igexin.push.c.a d;
    private final java.lang.Object f;
    private final java.lang.Object g;
    private final java.util.Comparator<java.util.Map.Entry<java.lang.String, com.igexin.push.c.j>> h;
    private android.os.Handler i;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DT_"
            r0.append(r1)
            java.lang.Class<com.igexin.push.c.m> r1 = com.igexin.push.c.m.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.c.m.e = r0
            return
    }

    public m(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r1.b = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.c = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.f = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.g = r0
            com.igexin.push.c.a r0 = new com.igexin.push.c.a
            r0.<init>()
            r1.d = r0
            com.igexin.push.c.n r0 = new com.igexin.push.c.n
            r0.<init>(r1)
            r1.h = r0
            boolean r0 = com.igexin.push.config.SDKUrlConfig.hasMultipleXfr()
            if (r0 == 0) goto L3a
            r1.b(r2)
            r1.c(r3)
            goto L3d
        L3a:
            r1.a()
        L3d:
            return
    }

    private com.igexin.push.c.j a(org.json.JSONObject r5) {
            r4 = this;
            java.lang.String r0 = "domain"
            boolean r1 = r5.has(r0)
            if (r1 != 0) goto La
            r5 = 0
            return r5
        La:
            com.igexin.push.c.j r1 = new com.igexin.push.c.j
            r1.<init>()
            java.lang.String r0 = r5.getString(r0)
            r1.a(r0)
            java.lang.String r0 = "port"
            boolean r2 = r5.has(r0)
            if (r2 == 0) goto L25
            int r0 = r5.getInt(r0)
            r1.a(r0)
        L25:
            java.lang.String r0 = "ip"
            boolean r2 = r5.has(r0)
            if (r2 == 0) goto L34
            java.lang.String r0 = r5.getString(r0)
            r1.b(r0)
        L34:
            java.lang.String r0 = "consumeTime"
            boolean r2 = r5.has(r0)
            if (r2 == 0) goto L43
            long r2 = r5.getLong(r0)
            r1.a(r2)
        L43:
            java.lang.String r0 = "detectSuccessTime"
            boolean r2 = r5.has(r0)
            if (r2 == 0) goto L52
            long r2 = r5.getLong(r0)
            r1.b(r2)
        L52:
            java.lang.String r0 = "isDomain"
            boolean r2 = r5.has(r0)
            if (r2 == 0) goto L61
            boolean r5 = r5.getBoolean(r0)
            r1.a(r5)
        L61:
            return r1
    }

    private java.util.List<java.lang.String> a(org.json.JSONArray r5) {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r5.length()     // Catch: java.lang.Exception -> L1c
            if (r1 >= r2) goto L1c
            org.json.JSONObject r2 = r5.getJSONObject(r1)     // Catch: java.lang.Exception -> L1c
            java.lang.String r3 = "domain"
            java.lang.String r2 = r2.getString(r3)     // Catch: java.lang.Exception -> L1c
            r0.add(r2)     // Catch: java.lang.Exception -> L1c
            int r1 = r1 + 1
            goto L6
        L1c:
            return r0
    }

    private void a() {
            r8 = this;
            r0 = 0
            r8.a = r0
            boolean r0 = r8.q()
            r1 = 1
            java.lang.String r2 = "null"
            if (r0 == 0) goto L19
            java.lang.String r0 = com.igexin.push.core.d.af
            if (r0 == 0) goto L25
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            r0.b(r2, r1)
            goto L25
        L19:
            java.lang.String r0 = com.igexin.push.core.d.ag
            if (r0 == 0) goto L25
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            r3 = 0
            r0.b(r2, r3)
        L25:
            java.util.List r0 = r8.o()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.Iterator r3 = r0.iterator()
        L32:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L5b
            java.lang.Object r4 = r3.next()
            java.lang.String r4 = (java.lang.String) r4
            com.igexin.push.c.j r5 = new com.igexin.push.c.j
            java.lang.String[] r6 = com.igexin.b.a.b.f.a(r4)
            r7 = 2
            r6 = r6[r7]
            int r6 = java.lang.Integer.parseInt(r6)
            r5.<init>(r4, r6)
            int r4 = r0.size()
            if (r4 <= r1) goto L57
            r8.a(r5)
        L57:
            r2.add(r5)
            goto L32
        L5b:
            com.igexin.push.c.a r1 = r8.d
            r1.b(r2)
            r0.clear()
            return
    }

    private void a(com.igexin.push.c.j r4) {
            r3 = this;
            com.igexin.push.c.q r0 = new com.igexin.push.c.q
            r0.<init>()
            com.igexin.push.c.h r1 = r3.b()
            com.igexin.push.c.h r2 = com.igexin.push.c.h.a
            if (r1 != r2) goto Lf
            r1 = 1
            goto L10
        Lf:
            r1 = 0
        L10:
            r0.a(r1)
            com.igexin.push.c.p r1 = r3.c()
            r0.a(r1)
            r0.a(r4)
            java.lang.Object r1 = r3.g
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.igexin.push.c.q> r2 = r3.b     // Catch: java.lang.Throwable -> L2b
            java.lang.String r4 = r4.a()     // Catch: java.lang.Throwable -> L2b
            r2.put(r4, r0)     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2b
            return
        L2b:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2b
            throw r4
    }

    private void b(java.lang.String r7) {
            r6 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto La
            r6.a()
            return
        La:
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L11
            r1.<init>(r7)     // Catch: org.json.JSONException -> L11
            goto L12
        L11:
            r1 = r0
        L12:
            if (r1 == 0) goto Lbe
            int r7 = r1.length()
            if (r7 != 0) goto L1c
            goto Lbe
        L1c:
            java.lang.String r7 = "lastDetectTime"
            boolean r2 = r1.has(r7)
            if (r2 == 0) goto L2a
            long r2 = r1.getLong(r7)     // Catch: org.json.JSONException -> L2a
            r6.a = r2     // Catch: org.json.JSONException -> L2a
        L2a:
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r6.a
            long r2 = r2 - r4
            long r2 = java.lang.Math.abs(r2)
            long r4 = com.igexin.push.c.f.a
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 < 0) goto L3f
            r6.a()
            return
        L3f:
            java.lang.String r7 = "list"
            boolean r2 = r1.has(r7)
            if (r2 == 0) goto L4b
            org.json.JSONArray r0 = r1.getJSONArray(r7)     // Catch: org.json.JSONException -> L4b
        L4b:
            if (r0 == 0) goto Lba
            int r7 = r0.length()
            if (r7 != 0) goto L54
            goto Lba
        L54:
            java.util.List r7 = r6.a(r0)
            boolean r1 = r7.isEmpty()
            if (r1 == 0) goto L62
            r6.a()
            return
        L62:
            java.util.List r1 = r6.o()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>(r1)
            r2.retainAll(r7)
            int r3 = r2.size()
            int r4 = r7.size()
            r5 = 0
            if (r3 == r4) goto L9e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = com.igexin.push.c.m.e
            r0.append(r3)
            java.lang.String r3 = " | db cache xfr != default, use default"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r3 = new java.lang.Object[r5]
            com.igexin.b.a.c.b.a(r0, r3)
            r2.clear()
            r1.clear()
            r7.clear()
            r6.a()
            return
        L9e:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = com.igexin.push.c.m.e
            r7.append(r1)
            java.lang.String r1 = " | db cache xfr == default, use cache"
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            java.lang.Object[] r1 = new java.lang.Object[r5]
            com.igexin.b.a.c.b.a(r7, r1)
            r6.b(r0)
            return
        Lba:
            r6.a()
            return
        Lbe:
            r6.a()
            return
    }

    private void b(org.json.JSONArray r8) {
            r7 = this;
            java.lang.String r0 = "|initWithCacheData exception "
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 0
            r3 = r2
        L9:
            int r4 = r8.length()     // Catch: java.lang.Exception -> L65
            if (r3 >= r4) goto L5f
            org.json.JSONObject r4 = r8.getJSONObject(r3)     // Catch: java.lang.Exception -> L65
            com.igexin.push.c.j r5 = r7.a(r4)     // Catch: java.lang.Exception -> L65
            if (r5 == 0) goto L23
            java.util.Map<java.lang.String, com.igexin.push.c.j> r4 = r7.c     // Catch: java.lang.Exception -> L65
            java.lang.String r6 = r5.a()     // Catch: java.lang.Exception -> L65
            r4.put(r6, r5)     // Catch: java.lang.Exception -> L65
            goto L2d
        L23:
            java.lang.String r5 = "domain"
            java.lang.String r4 = r4.getString(r5)     // Catch: java.lang.Exception -> L38
            com.igexin.push.c.j r5 = r7.d(r4)     // Catch: java.lang.Exception -> L38
        L2d:
            if (r5 == 0) goto L35
            r7.a(r5)     // Catch: java.lang.Exception -> L65
            r1.add(r5)     // Catch: java.lang.Exception -> L65
        L35:
            int r3 = r3 + 1
            goto L9
        L38:
            r8 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L65
            r1.<init>()     // Catch: java.lang.Exception -> L65
            java.lang.String r3 = com.igexin.push.c.m.e     // Catch: java.lang.Exception -> L65
            r1.append(r3)     // Catch: java.lang.Exception -> L65
            r1.append(r0)     // Catch: java.lang.Exception -> L65
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L65
            r1.append(r8)     // Catch: java.lang.Exception -> L65
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Exception -> L65
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L65
            com.igexin.b.a.c.b.a(r8, r1)     // Catch: java.lang.Exception -> L65
            java.util.Map<java.lang.String, com.igexin.push.c.j> r8 = r7.c     // Catch: java.lang.Exception -> L65
            r8.clear()     // Catch: java.lang.Exception -> L65
            r7.a()     // Catch: java.lang.Exception -> L65
            return
        L5f:
            com.igexin.push.c.a r8 = r7.d     // Catch: java.lang.Exception -> L65
            r8.b(r1)     // Catch: java.lang.Exception -> L65
            goto L83
        L65:
            r8 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = com.igexin.push.c.m.e
            r1.append(r3)
            r1.append(r0)
            java.lang.String r8 = r8.toString()
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r8, r0)
        L83:
            return
    }

    private void c(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> Le
            r1.<init>(r5)     // Catch: org.json.JSONException -> Le
            r0 = r1
        Le:
            if (r0 == 0) goto L6b
            int r5 = r0.length()
            if (r5 != 0) goto L17
            goto L6b
        L17:
            java.lang.String r5 = "loginFailedlCnt"
            boolean r1 = r0.has(r5)
            if (r1 == 0) goto L27
            com.igexin.push.c.a r1 = r4.d     // Catch: org.json.JSONException -> L27
            int r5 = r0.getInt(r5)     // Catch: org.json.JSONException -> L27
            r1.c = r5     // Catch: org.json.JSONException -> L27
        L27:
            java.lang.String r5 = "lastChange2BackupTime"
            boolean r1 = r0.has(r5)
            if (r1 == 0) goto L37
            com.igexin.push.c.a r1 = r4.d     // Catch: org.json.JSONException -> L37
            long r2 = r0.getLong(r5)     // Catch: org.json.JSONException -> L37
            r1.d = r2     // Catch: org.json.JSONException -> L37
        L37:
            java.lang.String r5 = "lastOfflineTime"
            boolean r1 = r0.has(r5)
            if (r1 == 0) goto L47
            com.igexin.push.c.a r1 = r4.d     // Catch: org.json.JSONException -> L47
            long r2 = r0.getLong(r5)     // Catch: org.json.JSONException -> L47
            r1.e = r2     // Catch: org.json.JSONException -> L47
        L47:
            java.lang.String r5 = "domainType"
            boolean r1 = r0.has(r5)
            if (r1 == 0) goto L6b
            com.igexin.push.c.a r1 = r4.d     // Catch: org.json.JSONException -> L6b
            int r5 = r0.getInt(r5)     // Catch: org.json.JSONException -> L6b
            com.igexin.push.c.d r5 = com.igexin.push.c.d.a(r5)     // Catch: org.json.JSONException -> L6b
            r1.a = r5     // Catch: org.json.JSONException -> L6b
            com.igexin.push.c.a r5 = r4.d     // Catch: org.json.JSONException -> L6b
            com.igexin.push.c.d r5 = r5.a     // Catch: org.json.JSONException -> L6b
            com.igexin.push.c.d r0 = com.igexin.push.c.d.b     // Catch: org.json.JSONException -> L6b
            if (r5 != r0) goto L6b
            com.igexin.push.c.a r5 = r4.d     // Catch: org.json.JSONException -> L6b
            java.util.concurrent.atomic.AtomicBoolean r5 = r5.b     // Catch: org.json.JSONException -> L6b
            r0 = 1
            r5.set(r0)     // Catch: org.json.JSONException -> L6b
        L6b:
            return
    }

    private com.igexin.push.c.j d(java.lang.String r3) {
            r2 = this;
            com.igexin.push.c.j r0 = new com.igexin.push.c.j
            r0.<init>()
            java.lang.String[] r1 = com.igexin.b.a.b.f.a(r3)
            r0.a(r3)
            r3 = 2
            r3 = r1[r3]
            int r3 = java.lang.Integer.parseInt(r3)
            r0.a(r3)
            return r0
    }

    private java.util.List<java.lang.String> o() {
            r1 = this;
            java.util.List r0 = com.igexin.push.config.SDKUrlConfig.getDefaultXfrList()
            return r0
    }

    private void p() {
            r2 = this;
            java.lang.Object r0 = r2.f
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.igexin.push.c.j> r1 = r2.c     // Catch: java.lang.Throwable -> La
            r1.clear()     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r1
    }

    private boolean q() {
            r2 = this;
            com.igexin.push.c.h r0 = r2.b()
            com.igexin.push.c.h r1 = com.igexin.push.c.h.b
            if (r0 != r1) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    protected com.igexin.push.c.q a(java.lang.String r5) {
            r4 = this;
            java.lang.Object r0 = r4.g
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.igexin.push.c.q> r1 = r4.b     // Catch: java.lang.Throwable -> L30
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L30
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L30
        Ld:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L30
            if (r2 == 0) goto L2d
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L30
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L30
            java.lang.Object r3 = r2.getKey()     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L30
            boolean r3 = r3.equals(r5)     // Catch: java.lang.Throwable -> L30
            if (r3 == 0) goto Ld
            java.lang.Object r5 = r2.getValue()     // Catch: java.lang.Throwable -> L30
            com.igexin.push.c.q r5 = (com.igexin.push.c.q) r5     // Catch: java.lang.Throwable -> L30
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return r5
        L2d:
            r5 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return r5
        L30:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r5
    }

    public abstract com.igexin.push.c.h b();

    protected void b(com.igexin.push.c.j r4) {
            r3 = this;
            java.lang.Object r0 = r3.f
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.igexin.push.c.j> r1 = r3.c     // Catch: java.lang.Throwable -> L13
            java.lang.String r2 = r4.a()     // Catch: java.lang.Throwable -> L13
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L13
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            com.igexin.push.c.a r4 = r3.d
            r4.e()
            return
        L13:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            throw r4
    }

    public abstract com.igexin.push.c.p c();

    public void d() {
            r3 = this;
            boolean r0 = r3.k()
            r1 = 0
            if (r0 != 0) goto L20
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.igexin.push.c.m.e
            r0.append(r2)
            java.lang.String r2 = "|startDetect detect = false, return !!!"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            return
        L20:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.igexin.push.c.m.e
            r0.append(r2)
            java.lang.String r2 = "|startDetect detect = true, start detect !!!"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            r3.h()
            return
    }

    public void e() {
            r5 = this;
            java.lang.Object r0 = r5.g
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.igexin.push.c.q> r1 = r5.b     // Catch: java.lang.Throwable -> L2f
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L2f
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2f
        Ld:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2f
            if (r2 == 0) goto L2d
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2f
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r3 = r2.getValue()     // Catch: java.lang.Throwable -> L2f
            com.igexin.push.c.q r3 = (com.igexin.push.c.q) r3     // Catch: java.lang.Throwable -> L2f
            r4 = 0
            r3.a(r4)     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L2f
            com.igexin.push.c.q r2 = (com.igexin.push.c.q) r2     // Catch: java.lang.Throwable -> L2f
            r2.d()     // Catch: java.lang.Throwable -> L2f
            goto Ld
        L2d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            return
        L2f:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2f
            throw r1
    }

    public void f() {
            r10 = this;
            r10.e()
            r10.p()
            java.util.List r0 = r10.o()
            java.lang.Object r1 = r10.g
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.igexin.push.c.q> r2 = r10.b     // Catch: java.lang.Throwable -> Laa
            int r2 = r2.size()     // Catch: java.lang.Throwable -> Laa
            int r3 = r0.size()     // Catch: java.lang.Throwable -> Laa
            r4 = 0
            if (r3 >= r2) goto L48
            int r3 = r0.size()     // Catch: java.lang.Throwable -> Laa
            int r3 = r2 - r3
            java.util.Map<java.lang.String, com.igexin.push.c.q> r5 = r10.b     // Catch: java.lang.Throwable -> Laa
            java.util.Set r5 = r5.entrySet()     // Catch: java.lang.Throwable -> Laa
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> Laa
            r6 = r4
        L2b:
            boolean r7 = r5.hasNext()     // Catch: java.lang.Throwable -> Laa
            if (r7 == 0) goto L48
            if (r6 >= r3) goto L48
            java.lang.Object r7 = r5.next()     // Catch: java.lang.Throwable -> Laa
            java.util.Map$Entry r7 = (java.util.Map.Entry) r7     // Catch: java.lang.Throwable -> Laa
            java.lang.Object r7 = r7.getValue()     // Catch: java.lang.Throwable -> Laa
            com.igexin.push.c.q r7 = (com.igexin.push.c.q) r7     // Catch: java.lang.Throwable -> Laa
            r7.e()     // Catch: java.lang.Throwable -> Laa
            r5.remove()     // Catch: java.lang.Throwable -> Laa
            int r6 = r6 + 1
            goto L2b
        L48:
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Laa
            java.util.Map<java.lang.String, com.igexin.push.c.q> r5 = r10.b     // Catch: java.lang.Throwable -> Laa
            java.util.Collection r5 = r5.values()     // Catch: java.lang.Throwable -> Laa
            r3.<init>(r5)     // Catch: java.lang.Throwable -> Laa
            java.util.Map<java.lang.String, com.igexin.push.c.q> r5 = r10.b     // Catch: java.lang.Throwable -> Laa
            r5.clear()     // Catch: java.lang.Throwable -> Laa
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Laa
            r5.<init>()     // Catch: java.lang.Throwable -> Laa
        L5d:
            int r6 = r0.size()     // Catch: java.lang.Throwable -> Laa
            if (r4 >= r6) goto La3
            com.igexin.push.c.j r6 = new com.igexin.push.c.j     // Catch: java.lang.Throwable -> Laa
            r6.<init>()     // Catch: java.lang.Throwable -> Laa
            java.lang.Object r7 = r0.get(r4)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> Laa
            java.lang.String[] r7 = com.igexin.b.a.b.f.a(r7)     // Catch: java.lang.Throwable -> Laa
            java.lang.Object r8 = r0.get(r4)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Throwable -> Laa
            r6.a(r8)     // Catch: java.lang.Throwable -> Laa
            r8 = 2
            r7 = r7[r8]     // Catch: java.lang.Throwable -> Laa
            int r7 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Throwable -> Laa
            r6.a(r7)     // Catch: java.lang.Throwable -> Laa
            if (r4 >= r2) goto L9a
            java.lang.Object r7 = r3.get(r4)     // Catch: java.lang.Throwable -> Laa
            com.igexin.push.c.q r7 = (com.igexin.push.c.q) r7     // Catch: java.lang.Throwable -> Laa
            r7.a(r6)     // Catch: java.lang.Throwable -> Laa
            java.util.Map<java.lang.String, com.igexin.push.c.q> r8 = r10.b     // Catch: java.lang.Throwable -> Laa
            java.lang.String r9 = r6.a()     // Catch: java.lang.Throwable -> Laa
            r8.put(r9, r7)     // Catch: java.lang.Throwable -> Laa
            goto L9d
        L9a:
            r10.a(r6)     // Catch: java.lang.Throwable -> Laa
        L9d:
            r5.add(r6)     // Catch: java.lang.Throwable -> Laa
            int r4 = r4 + 1
            goto L5d
        La3:
            com.igexin.push.c.a r0 = r10.d     // Catch: java.lang.Throwable -> Laa
            r0.b(r5)     // Catch: java.lang.Throwable -> Laa
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Laa
            return
        Laa:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Laa
            throw r0
    }

    public void g() {
            r6 = this;
            r6.e()
            r6.p()
            java.util.List r0 = r6.o()
            java.lang.Object r1 = r6.g
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.igexin.push.c.q> r2 = r6.b     // Catch: java.lang.Throwable -> L67
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Throwable -> L67
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L67
        L17:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L67
            if (r3 == 0) goto L2d
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L67
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Throwable -> L67
            java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Throwable -> L67
            com.igexin.push.c.q r3 = (com.igexin.push.c.q) r3     // Catch: java.lang.Throwable -> L67
            r3.e()     // Catch: java.lang.Throwable -> L67
            goto L17
        L2d:
            java.util.Map<java.lang.String, com.igexin.push.c.q> r2 = r6.b     // Catch: java.lang.Throwable -> L67
            r2.clear()     // Catch: java.lang.Throwable -> L67
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L67
            r2.<init>()     // Catch: java.lang.Throwable -> L67
            com.igexin.push.c.j r3 = new com.igexin.push.c.j     // Catch: java.lang.Throwable -> L67
            r3.<init>()     // Catch: java.lang.Throwable -> L67
            r4 = 0
            java.lang.Object r5 = r0.get(r4)     // Catch: java.lang.Throwable -> L67
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L67
            java.lang.String[] r5 = com.igexin.b.a.b.f.a(r5)     // Catch: java.lang.Throwable -> L67
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> L67
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L67
            r3.a(r0)     // Catch: java.lang.Throwable -> L67
            r0 = 2
            r0 = r5[r0]     // Catch: java.lang.Throwable -> L67
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L67
            r3.a(r0)     // Catch: java.lang.Throwable -> L67
            r2.add(r3)     // Catch: java.lang.Throwable -> L67
            com.igexin.push.c.a r0 = r6.d     // Catch: java.lang.Throwable -> L67
            r0.b(r2)     // Catch: java.lang.Throwable -> L67
            r2.clear()     // Catch: java.lang.Throwable -> L67
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L67
            return
        L67:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L67
            throw r0
    }

    public void h() {
            r5 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r5.a = r0
            java.lang.Object r0 = r5.g
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.igexin.push.c.q> r1 = r5.b     // Catch: java.lang.Throwable -> L51
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L51
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L51
        L13:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L51
            if (r2 == 0) goto L4f
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L51
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L51
            java.lang.Object r3 = r2.getValue()     // Catch: java.lang.Throwable -> L51
            com.igexin.push.c.q r3 = (com.igexin.push.c.q) r3     // Catch: java.lang.Throwable -> L51
            com.igexin.push.c.p r4 = r5.c()     // Catch: java.lang.Throwable -> L51
            r3.a(r4)     // Catch: java.lang.Throwable -> L51
            java.lang.Object r3 = r2.getValue()     // Catch: java.lang.Throwable -> L51
            com.igexin.push.c.q r3 = (com.igexin.push.c.q) r3     // Catch: java.lang.Throwable -> L51
            com.igexin.push.c.j r3 = r3.b()     // Catch: java.lang.Throwable -> L51
            if (r3 == 0) goto L45
            java.lang.Object r3 = r2.getValue()     // Catch: java.lang.Throwable -> L51
            com.igexin.push.c.q r3 = (com.igexin.push.c.q) r3     // Catch: java.lang.Throwable -> L51
            com.igexin.push.c.j r3 = r3.b()     // Catch: java.lang.Throwable -> L51
            r3.b()     // Catch: java.lang.Throwable -> L51
        L45:
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L51
            com.igexin.push.c.q r2 = (com.igexin.push.c.q) r2     // Catch: java.lang.Throwable -> L51
            r2.c()     // Catch: java.lang.Throwable -> L51
            goto L13
        L4f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            return
        L51:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            throw r1
    }

    public synchronized void i() {
            r6 = this;
            monitor-enter(r6)
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L76
            r6.a = r0     // Catch: java.lang.Throwable -> L76
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L76
            r0.<init>()     // Catch: java.lang.Throwable -> L76
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L76
            r1.<init>()     // Catch: java.lang.Throwable -> L76
            java.lang.Object r2 = r6.g     // Catch: java.lang.Throwable -> L76
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L76
            java.lang.String r3 = "lastDetectTime"
            long r4 = r6.a     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
            java.lang.String r3 = "list"
            r0.put(r3, r1)     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
            java.util.Map<java.lang.String, com.igexin.push.c.q> r3 = r6.b     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
            java.util.Set r3 = r3.entrySet()     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
        L2a:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
            if (r4 == 0) goto L4c
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
            java.lang.Object r4 = r4.getValue()     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
            com.igexin.push.c.q r4 = (com.igexin.push.c.q) r4     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
            com.igexin.push.c.j r4 = r4.b()     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
            org.json.JSONObject r4 = r4.h()     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
            if (r4 == 0) goto L2a
            r1.put(r4)     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4c
            goto L2a
        L4a:
            r0 = move-exception
            goto L74
        L4c:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L4a
            int r1 = r0.length()     // Catch: java.lang.Throwable -> L76
            if (r1 <= 0) goto L72
            boolean r1 = r6.q()     // Catch: java.lang.Throwable -> L76
            if (r1 == 0) goto L66
            com.igexin.push.core.b.i r1 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Throwable -> L76
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L76
            r2 = 1
            r1.b(r0, r2)     // Catch: java.lang.Throwable -> L76
            goto L72
        L66:
            com.igexin.push.core.b.i r1 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Throwable -> L76
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L76
            r2 = 0
            r1.b(r0, r2)     // Catch: java.lang.Throwable -> L76
        L72:
            monitor-exit(r6)
            return
        L74:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L4a
            throw r0     // Catch: java.lang.Throwable -> L76
        L76:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    protected void j() {
            r3 = this;
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            java.lang.String r1 = "null"
            r2 = 1
            r0.b(r1, r2)
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            r2 = 0
            r0.b(r1, r2)
            return
    }

    protected boolean k() {
            r7 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r7.a
            long r0 = r0 - r2
            long r0 = java.lang.Math.abs(r0)
            long r2 = com.igexin.push.c.f.a
            r4 = 2
            long r2 = r2 * r4
            r4 = 3600(0xe10, double:1.7786E-320)
            long r2 = r2 - r4
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r3 = 0
            r4 = 1
            if (r2 < 0) goto L44
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.c.m.e
            r0.append(r1)
            java.lang.String r1 = "|current time - last detect time > "
            r0.append(r1)
            long r1 = com.igexin.push.c.f.a
            r5 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r5
            r0.append(r1)
            java.lang.String r1 = " s, detect = true"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r0, r1)
            java.util.concurrent.atomic.AtomicBoolean r0 = com.igexin.push.c.k.a
            r0.set(r4)
            return r4
        L44:
            java.util.concurrent.atomic.AtomicBoolean r2 = com.igexin.push.c.k.a
            boolean r2 = r2.getAndSet(r4)
            if (r2 != 0) goto L75
            long r4 = com.igexin.push.c.f.a
            long r4 = r4 - r0
            long r0 = java.lang.Math.abs(r4)
            com.igexin.push.c.k r2 = com.igexin.push.c.k.c_()
            r2.a(r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = com.igexin.push.c.m.e
            r2.append(r4)
            java.lang.String r4 = "|set next detect time = "
            r2.append(r4)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.Object[] r1 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r0, r1)
        L75:
            return r3
    }

    protected synchronized void l() {
            r1 = this;
            monitor-enter(r1)
            com.igexin.push.c.a r0 = r1.d     // Catch: java.lang.Throwable -> L8
            r0.f()     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public void m() {
            r6 = this;
            java.lang.Class<com.igexin.push.c.m> r0 = com.igexin.push.c.m.class
            monitor-enter(r0)
            android.os.Handler r1 = r6.i     // Catch: java.lang.Throwable -> L38
            if (r1 != 0) goto L1c
            android.os.HandlerThread r1 = new android.os.HandlerThread     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = "NetDetect-T"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L38
            r1.start()     // Catch: java.lang.Throwable -> L38
            android.os.Handler r2 = new android.os.Handler     // Catch: java.lang.Throwable -> L38
            android.os.Looper r1 = r1.getLooper()     // Catch: java.lang.Throwable -> L38
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L38
            r6.i = r2     // Catch: java.lang.Throwable -> L38
        L1c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
            android.os.Handler r0 = r6.i
            java.lang.String r1 = "detToken"
            r0.removeCallbacksAndMessages(r1)
            android.os.Handler r0 = r6.i
            com.igexin.push.c.o r1 = new com.igexin.push.c.o
            r1.<init>(r6)
            long r2 = android.os.SystemClock.uptimeMillis()
            r4 = 5000(0x1388, double:2.4703E-320)
            long r2 = r2 + r4
            java.lang.String r4 = "detToken"
            r0.postAtTime(r1, r4, r2)
            return
        L38:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
            throw r1
    }

    protected synchronized void n() {
            r4 = this;
            monitor-enter(r4)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L55
            r0.<init>()     // Catch: java.lang.Throwable -> L55
            java.lang.String r1 = "loginFailedlCnt"
            com.igexin.push.c.a r2 = r4.d     // Catch: java.lang.Exception -> L2e java.lang.Throwable -> L55
            int r2 = r2.c     // Catch: java.lang.Exception -> L2e java.lang.Throwable -> L55
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2e java.lang.Throwable -> L55
            java.lang.String r1 = "lastChange2BackupTime"
            com.igexin.push.c.a r2 = r4.d     // Catch: java.lang.Exception -> L2e java.lang.Throwable -> L55
            long r2 = r2.d     // Catch: java.lang.Exception -> L2e java.lang.Throwable -> L55
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2e java.lang.Throwable -> L55
            java.lang.String r1 = "lastOfflineTime"
            com.igexin.push.c.a r2 = r4.d     // Catch: java.lang.Exception -> L2e java.lang.Throwable -> L55
            long r2 = r2.e     // Catch: java.lang.Exception -> L2e java.lang.Throwable -> L55
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2e java.lang.Throwable -> L55
            java.lang.String r1 = "domainType"
            com.igexin.push.c.a r2 = r4.d     // Catch: java.lang.Exception -> L2e java.lang.Throwable -> L55
            com.igexin.push.c.d r2 = r2.a     // Catch: java.lang.Exception -> L2e java.lang.Throwable -> L55
            int r2 = r2.b()     // Catch: java.lang.Exception -> L2e java.lang.Throwable -> L55
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L2e java.lang.Throwable -> L55
        L2e:
            int r1 = r0.length()     // Catch: java.lang.Throwable -> L55
            if (r1 <= 0) goto L53
            boolean r1 = r4.q()     // Catch: java.lang.Throwable -> L55
            if (r1 == 0) goto L47
            com.igexin.push.core.b.i r1 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Throwable -> L55
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L55
            r2 = 1
            r1.a(r0, r2)     // Catch: java.lang.Throwable -> L55
            goto L53
        L47:
            com.igexin.push.core.b.i r1 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Throwable -> L55
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L55
            r2 = 0
            r1.a(r0, r2)     // Catch: java.lang.Throwable -> L55
        L53:
            monitor-exit(r4)
            return
        L55:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }
}
