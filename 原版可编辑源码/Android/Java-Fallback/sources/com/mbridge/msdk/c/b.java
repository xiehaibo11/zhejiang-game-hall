package com.mbridge.msdk.c;

public class b {
    public static final java.lang.String a = null;
    private static com.mbridge.msdk.c.b b;
    private static java.util.HashMap<java.lang.String, com.mbridge.msdk.c.d> c;
    private static volatile com.mbridge.msdk.c.a d;


    static {
            java.lang.Class<com.mbridge.msdk.c.b> r0 = com.mbridge.msdk.c.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.c.b.a = r0
            r0 = 0
            com.mbridge.msdk.c.b.b = r0
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            com.mbridge.msdk.c.b.c = r1
            com.mbridge.msdk.c.b.d = r0
            return
    }

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.c.b a() {
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.c.b> r0 = com.mbridge.msdk.c.b.class
            monitor-enter(r0)
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.c.b r1 = new com.mbridge.msdk.c.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.c.b.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.b
            return r0
    }

    private com.mbridge.msdk.foundation.entity.n a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2, int r3) {
            r1 = this;
            com.mbridge.msdk.foundation.entity.n r0 = new com.mbridge.msdk.foundation.entity.n
            r0.<init>()
            java.lang.String r2 = r1.b(r2, r3)     // Catch: java.lang.Exception -> L60
            r0.d(r2)     // Catch: java.lang.Exception -> L60
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L60
            r2.<init>()     // Catch: java.lang.Exception -> L60
            r2.append(r3)     // Catch: java.lang.Exception -> L60
            java.lang.String r3 = ""
            r2.append(r3)     // Catch: java.lang.Exception -> L60
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L60
            r0.a(r2)     // Catch: java.lang.Exception -> L60
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L60
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L60
            com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)     // Catch: java.lang.Exception -> L60
            com.mbridge.msdk.foundation.db.q r2 = com.mbridge.msdk.foundation.db.q.a(r2)     // Catch: java.lang.Exception -> L60
            int r2 = r2.a()     // Catch: java.lang.Exception -> L60
            r3 = 500(0x1f4, float:7.0E-43)
            if (r2 <= r3) goto L4d
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L60
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L60
            com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)     // Catch: java.lang.Exception -> L60
            com.mbridge.msdk.foundation.db.q r2 = com.mbridge.msdk.foundation.db.q.a(r2)     // Catch: java.lang.Exception -> L60
            java.lang.String r3 = "0"
            r2.b(r3)     // Catch: java.lang.Exception -> L60
        L4d:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L60
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L60
            com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)     // Catch: java.lang.Exception -> L60
            com.mbridge.msdk.foundation.db.q r2 = com.mbridge.msdk.foundation.db.q.a(r2)     // Catch: java.lang.Exception -> L60
            r2.a(r0)     // Catch: java.lang.Exception -> L60
        L60:
            return r0
    }

    private org.json.JSONObject a(com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L46
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L3e
            r1.<init>()     // Catch: java.lang.Exception -> L3e
            java.lang.String r0 = "campaignid"
            java.lang.String r2 = r5.getId()     // Catch: java.lang.Exception -> L3b
            r1.put(r0, r2)     // Catch: java.lang.Exception -> L3b
            java.lang.String r0 = "ts"
            long r2 = r5.getTs()     // Catch: java.lang.Exception -> L3b
            r1.put(r0, r2)     // Catch: java.lang.Exception -> L3b
            java.lang.String r0 = "label"
            java.lang.String r2 = r5.getLabel()     // Catch: java.lang.Exception -> L3b
            r1.put(r0, r2)     // Catch: java.lang.Exception -> L3b
            java.lang.String r0 = "vc"
            long r2 = r5.getcVersionCode()     // Catch: java.lang.Exception -> L3b
            r1.put(r0, r2)     // Catch: java.lang.Exception -> L3b
            java.lang.String r5 = r5.getPkgSource()     // Catch: java.lang.Exception -> L3b
            if (r5 != 0) goto L34
            java.lang.String r5 = ""
        L34:
            java.lang.String r0 = "pkg_source"
            r1.put(r0, r5)     // Catch: java.lang.Exception -> L3b
            r0 = r1
            goto L46
        L3b:
            r5 = move-exception
            r0 = r1
            goto L3f
        L3e:
            r5 = move-exception
        L3f:
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L46
            r5.printStackTrace()
        L46:
            return r0
    }

    public static void a(android.content.Context r5, java.lang.String r6) {
            com.mbridge.msdk.foundation.controller.b r0 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r0 = r0.d()
            java.lang.String r1 = "mbridge"
            r2 = 0
            if (r0 == 0) goto L1d
            com.mbridge.msdk.foundation.tools.FastKV$Builder r0 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L1d
            com.mbridge.msdk.foundation.same.b.c r3 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L1d
            java.lang.String r3 = com.mbridge.msdk.foundation.same.b.e.b(r3)     // Catch: java.lang.Exception -> L1d
            r0.<init>(r3, r1)     // Catch: java.lang.Exception -> L1d
            com.mbridge.msdk.foundation.tools.FastKV r0 = r0.build()     // Catch: java.lang.Exception -> L1d
            goto L1e
        L1d:
            r0 = r2
        L1e:
            java.lang.String r3 = "_"
            if (r0 == 0) goto L66
            java.util.Map r2 = r0.getAll()     // Catch: java.lang.Exception -> L26
        L26:
            if (r2 == 0) goto Lac
            java.util.Set r5 = r2.keySet()     // Catch: java.lang.Exception -> L61
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Exception -> L61
        L30:
            boolean r0 = r5.hasNext()     // Catch: java.lang.Exception -> L61
            if (r0 == 0) goto Lac
            java.lang.Object r0 = r5.next()     // Catch: java.lang.Exception -> L61
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L61
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L61
            r1.<init>()     // Catch: java.lang.Exception -> L61
            r1.append(r6)     // Catch: java.lang.Exception -> L61
            r1.append(r3)     // Catch: java.lang.Exception -> L61
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L61
            boolean r1 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L61
            if (r1 == 0) goto L30
            java.util.HashMap<java.lang.String, com.mbridge.msdk.c.d> r1 = com.mbridge.msdk.c.b.c     // Catch: java.lang.Exception -> L61
            java.lang.Object r4 = r2.get(r0)     // Catch: java.lang.Exception -> L61
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L61
            com.mbridge.msdk.c.d r4 = com.mbridge.msdk.c.d.b(r4)     // Catch: java.lang.Exception -> L61
            r1.put(r0, r4)     // Catch: java.lang.Exception -> L61
            goto L30
        L61:
            r5 = move-exception
            r5.printStackTrace()
            goto Lac
        L66:
            r0 = 0
            android.content.SharedPreferences r5 = r5.getSharedPreferences(r1, r0)     // Catch: java.lang.Exception -> La8
            java.util.Map r5 = r5.getAll()     // Catch: java.lang.Exception -> La8
            java.util.Set r0 = r5.keySet()     // Catch: java.lang.Exception -> La8
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> La8
        L77:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> La8
            if (r1 == 0) goto Lac
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> La8
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> La8
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La8
            r2.<init>()     // Catch: java.lang.Exception -> La8
            r2.append(r6)     // Catch: java.lang.Exception -> La8
            r2.append(r3)     // Catch: java.lang.Exception -> La8
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> La8
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> La8
            if (r2 == 0) goto L77
            java.util.HashMap<java.lang.String, com.mbridge.msdk.c.d> r2 = com.mbridge.msdk.c.b.c     // Catch: java.lang.Exception -> La8
            java.lang.Object r4 = r5.get(r1)     // Catch: java.lang.Exception -> La8
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> La8
            com.mbridge.msdk.c.d r4 = com.mbridge.msdk.c.d.b(r4)     // Catch: java.lang.Exception -> La8
            r2.put(r1, r4)     // Catch: java.lang.Exception -> La8
            goto L77
        La8:
            r5 = move-exception
            r5.printStackTrace()
        Lac:
            return
    }

    private java.lang.String b(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "key=2000079&iex="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = "&cal="
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L4b
            r0.<init>()     // Catch: java.lang.Exception -> L4b
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L4b
        L1f:
            boolean r1 = r3.hasNext()     // Catch: java.lang.Exception -> L4b
            if (r1 == 0) goto L33
            java.lang.Object r1 = r3.next()     // Catch: java.lang.Exception -> L4b
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Exception -> L4b
            org.json.JSONObject r1 = r2.a(r1)     // Catch: java.lang.Exception -> L4b
            r0.put(r1)     // Catch: java.lang.Exception -> L4b
            goto L1f
        L33:
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L4b
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.t.a(r3)     // Catch: java.lang.Exception -> L4b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4b
            r0.<init>()     // Catch: java.lang.Exception -> L4b
            r0.append(r4)     // Catch: java.lang.Exception -> L4b
            r0.append(r3)     // Catch: java.lang.Exception -> L4b
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L4b
            goto L53
        L4b:
            r3 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L53
            r3.printStackTrace()
        L53:
            return r4
    }

    private com.mbridge.msdk.c.d h(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Le
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
        Le:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "_"
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            r3 = 0
            java.util.HashMap<java.lang.String, com.mbridge.msdk.c.d> r0 = com.mbridge.msdk.c.b.c
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L34
            java.util.HashMap<java.lang.String, com.mbridge.msdk.c.d> r3 = com.mbridge.msdk.c.b.c
            java.lang.Object r2 = r3.get(r2)
            com.mbridge.msdk.c.d r2 = (com.mbridge.msdk.c.d) r2
            goto L4b
        L34:
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L46
            java.lang.String r0 = r0.b(r2)     // Catch: java.lang.Exception -> L46
            com.mbridge.msdk.c.d r3 = com.mbridge.msdk.c.d.b(r0)     // Catch: java.lang.Exception -> L46
            java.util.HashMap<java.lang.String, com.mbridge.msdk.c.d> r0 = com.mbridge.msdk.c.b.c     // Catch: java.lang.Exception -> L46
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L46
            goto L4a
        L46:
            r2 = move-exception
            r2.printStackTrace()
        L4a:
            r2 = r3
        L4b:
            return r2
    }

    public final org.json.JSONObject a(org.json.JSONObject r8, org.json.JSONObject r9) {
            r7 = this;
            java.lang.String r0 = "unitSetting"
            if (r8 == 0) goto L5e
            int r1 = r8.length()
            if (r1 != 0) goto Lb
            goto L5e
        Lb:
            if (r9 == 0) goto L5d
            int r1 = r9.length()
            if (r1 != 0) goto L14
            goto L5d
        L14:
            java.util.Iterator r1 = r9.keys()
        L18:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L5d
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            boolean r3 = r0.equals(r2)     // Catch: java.lang.Exception -> L58
            if (r3 == 0) goto L50
            boolean r3 = r8.has(r0)     // Catch: java.lang.Exception -> L58
            if (r3 == 0) goto L50
            org.json.JSONArray r3 = r8.getJSONArray(r0)     // Catch: java.lang.Exception -> L58
            r4 = 0
            java.lang.Object r5 = r3.get(r4)     // Catch: java.lang.Exception -> L58
            org.json.JSONObject r5 = (org.json.JSONObject) r5     // Catch: java.lang.Exception -> L58
            org.json.JSONArray r6 = r9.getJSONArray(r0)     // Catch: java.lang.Exception -> L58
            java.lang.Object r6 = r6.get(r4)     // Catch: java.lang.Exception -> L58
            org.json.JSONObject r6 = (org.json.JSONObject) r6     // Catch: java.lang.Exception -> L58
            org.json.JSONObject r5 = r7.a(r5, r6)     // Catch: java.lang.Exception -> L58
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L58
            r8.put(r2, r3)     // Catch: java.lang.Exception -> L58
            goto L18
        L50:
            java.lang.Object r3 = r9.opt(r2)     // Catch: java.lang.Exception -> L58
            r8.put(r2, r3)     // Catch: java.lang.Exception -> L58
            goto L18
        L58:
            r2 = move-exception
            r2.printStackTrace()
            goto L18
        L5d:
            return r8
        L5e:
            return r9
    }

    public final void a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "_"
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            com.mbridge.msdk.foundation.a.a.a r3 = com.mbridge.msdk.foundation.a.a.a.a()
            r3.a(r2, r4)
            com.mbridge.msdk.c.d r3 = com.mbridge.msdk.c.d.b(r4)
            java.util.HashMap<java.lang.String, com.mbridge.msdk.c.d> r4 = com.mbridge.msdk.c.b.c
            r4.put(r2, r3)
            return
    }

    public final boolean a(java.lang.String r7) {
            r6 = this;
            com.mbridge.msdk.c.a r7 = r6.b(r7)
            if (r7 == 0) goto L3f
            long r0 = r7.aj()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r7.an()
            long r4 = r4 + r0
            int r7 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r7 <= 0) goto L3f
            java.lang.String r7 = com.mbridge.msdk.c.b.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "app setting nexttime is not ready  [settingNextRequestTime= "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " currentTime = "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.b(r7, r0)
            r7 = 0
            return r7
        L3f:
            java.lang.String r7 = com.mbridge.msdk.c.b.a
            java.lang.String r0 = "app setting timeout or not exists"
            com.mbridge.msdk.foundation.tools.z.b(r7, r0)
            r7 = 1
            return r7
    }

    public final boolean a(java.lang.String r12, int r13, java.lang.String r14) {
            r11 = this;
            java.lang.String r0 = "_"
            r1 = 0
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L5d
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L5d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5d
            r3.<init>()     // Catch: java.lang.Exception -> L5d
            r3.append(r12)     // Catch: java.lang.Exception -> L5d
            r3.append(r0)     // Catch: java.lang.Exception -> L5d
            r3.append(r13)     // Catch: java.lang.Exception -> L5d
            r3.append(r0)     // Catch: java.lang.Exception -> L5d
            r3.append(r14)     // Catch: java.lang.Exception -> L5d
            java.lang.String r13 = r3.toString()     // Catch: java.lang.Exception -> L5d
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L5d
            r5 = 0
            java.lang.Long r14 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Exception -> L5d
            java.lang.Object r14 = com.mbridge.msdk.foundation.tools.ag.b(r2, r13, r14)     // Catch: java.lang.Exception -> L5d
            java.lang.Long r14 = (java.lang.Long) r14     // Catch: java.lang.Exception -> L5d
            long r7 = r14.longValue()     // Catch: java.lang.Exception -> L5d
            com.mbridge.msdk.c.a r12 = r11.b(r12)     // Catch: java.lang.Exception -> L5d
            if (r12 != 0) goto L46
            com.mbridge.msdk.c.b r12 = a()     // Catch: java.lang.Exception -> L5d
            com.mbridge.msdk.c.a r12 = r12.b()     // Catch: java.lang.Exception -> L5d
            goto L47
        L46:
            r5 = r7
        L47:
            long r7 = r12.Y()     // Catch: java.lang.Exception -> L5d
            r9 = 1000(0x3e8, double:4.94E-321)
            long r7 = r7 * r9
            long r5 = r5 + r7
            int r12 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r12 <= 0) goto L54
            return r1
        L54:
            java.lang.Long r12 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Exception -> L5d
            com.mbridge.msdk.foundation.tools.ag.a(r2, r13, r12)     // Catch: java.lang.Exception -> L5d
            r12 = 1
            return r12
        L5d:
            r12 = move-exception
            r12.printStackTrace()
            return r1
    }

    public final boolean a(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            com.mbridge.msdk.c.a r0 = r5.b(r7)
            boolean r1 = r5.a(r7)
            r2 = 1
            if (r1 == 0) goto L29
            boolean r1 = r5.a(r7, r2, r6)
            if (r1 == 0) goto L29
            com.mbridge.msdk.c.c r1 = new com.mbridge.msdk.c.c
            r1.<init>()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r4 = r4.l()
            r1.a(r3, r7, r4)
        L29:
            com.mbridge.msdk.c.d r6 = r5.e(r7, r6)
            if (r0 == 0) goto L6a
            if (r6 == 0) goto L6a
            long r0 = r0.ae()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r3
            long r3 = java.lang.System.currentTimeMillis()
            long r6 = r6.u()
            long r6 = r6 + r0
            int r0 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r0 <= 0) goto L6a
            java.lang.String r0 = com.mbridge.msdk.c.b.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unit setting  nexttime is not ready  [settingNextRequestTime= "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r6 = " currentTime = "
            r1.append(r6)
            r1.append(r3)
            java.lang.String r6 = "]"
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r6)
            r6 = 0
            return r6
        L6a:
            java.lang.String r6 = com.mbridge.msdk.c.b.a
            java.lang.String r7 = "unit setting timeout or not exists"
            com.mbridge.msdk.foundation.tools.z.b(r6, r7)
            return r2
    }

    public final com.mbridge.msdk.c.a b() {
            r5 = this;
            com.mbridge.msdk.c.a r0 = new com.mbridge.msdk.c.a
            r0.<init>()
            r1 = 86400(0x15180, double:4.26873E-319)
            r0.h(r1)
            r1 = 1
            r0.O(r1)
            r0.P(r1)
            r0.e(r1)
            r0.f(r1)
            r2 = 3600(0xe10, double:1.7786E-320)
            r0.f(r2)
            r2 = 0
            r0.g(r2)
            r2 = 0
            r0.d(r2)
            r0.c(r2)
            r3 = 7200(0x1c20, double:3.5573E-320)
            r0.b(r3)
            r3 = 20
            r0.d(r3)
            r3 = 10
            r0.e(r3)
            r0.I(r1)
            r0.J(r1)
            java.lang.String r3 = "正在下载中，请去通知栏查看下载进度"
            r0.e(r3)
            java.lang.String r3 = "mbridge"
            r0.c(r3)
            r0.u(r2)
            r3 = 1800(0x708, double:8.893E-321)
            r0.c(r3)
            r3 = 100
            r0.H(r3)
            r3 = 43200(0xa8c0, float:6.0536E-41)
            r0.G(r3)
            r0.F(r1)
            r3 = 604800(0x93a80, double:2.98811E-318)
            r0.a(r3)
            r0.N(r1)
            r3 = 3
            r0.K(r3)
            r0.v(r1)
            r0.E(r1)
            r0.C(r1)
            r3 = 86400(0x15180, float:1.21072E-40)
            r0.D(r3)
            r4 = 259200(0x3f480, float:3.63217E-40)
            r0.L(r4)
            r0.w(r1)
            r4 = 900(0x384, float:1.261E-42)
            r0.x(r4)
            r4 = 20
            r0.y(r4)
            java.lang.String r4 = "pid"
            r0.d(r4)
            r0.z(r1)
            r0.A(r1)
            r0.B(r1)
            r0.M(r1)
            r0.p(r1)
            r0.o(r1)
            r0.q(r1)
            r0.r(r2)
            r0.s(r1)
            r4 = -1
            r0.t(r4)
            java.lang.String r4 = com.mbridge.msdk.c.a.b.a
            r0.b(r4)
            r4 = 2
            r0.n(r4)
            r0.m(r3)
            r0.d(r2)
            java.lang.String r3 = "https://cdn-adn-https.rayjump.com/cdn-adn/v2/portal/19/08/20/11/06/5d5b63cb457e2.js"
            r0.h(r3)
            java.lang.String r3 = "https://mtg-native.rayjump.com/omsdk/omsdkjs_common_js.txt"
            r0.g(r3)
            r3 = 120(0x78, float:1.68E-43)
            r0.c(r3)
            r4 = 10
            r0.b(r4)
            r0.g(r2)
            r0.R(r2)
            r0.S(r3)
            r0.T(r1)
            int r3 = com.mbridge.msdk.foundation.same.a.M
            r0.j(r3)
            int r3 = com.mbridge.msdk.foundation.same.a.O
            r0.i(r3)
            int r3 = com.mbridge.msdk.foundation.same.a.N
            r0.h(r3)
            r0.a(r4)
            int r3 = com.mbridge.msdk.foundation.same.a.S
            r0.k(r3)
            r0.g(r4)
            r0.V(r2)
            r0.U(r2)
            java.lang.String r3 = ""
            r0.a(r3)
            r0.W(r1)
            r0.f(r1)
            r3 = 24
            r0.e(r3)
            r0.a(r2)
            r0.Q(r1)
            r0.b(r1)
            return r0
    }

    public final com.mbridge.msdk.c.a b(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.c.a r0 = com.mbridge.msdk.c.b.d
            if (r0 != 0) goto L20
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = r0.b(r2)     // Catch: java.lang.Exception -> L1c
            com.mbridge.msdk.c.a r2 = com.mbridge.msdk.c.a.f(r2)     // Catch: java.lang.Exception -> L1c
            com.mbridge.msdk.c.b.d = r2     // Catch: java.lang.Exception -> L1c
            com.mbridge.msdk.c.a r2 = com.mbridge.msdk.c.b.d     // Catch: java.lang.Exception -> L1c
            if (r2 == 0) goto L20
            com.mbridge.msdk.c.a r2 = com.mbridge.msdk.c.b.d     // Catch: java.lang.Exception -> L1c
            r2.aw()     // Catch: java.lang.Exception -> L1c
            goto L20
        L1c:
            r2 = move-exception
            r2.printStackTrace()
        L20:
            com.mbridge.msdk.c.a r2 = com.mbridge.msdk.c.b.d
            return r2
    }

    public final void b(java.lang.String r11, java.lang.String r12) {
            r10 = this;
            java.lang.String r0 = ""
            com.mbridge.msdk.foundation.a.a.a r1 = com.mbridge.msdk.foundation.a.a.a.a()
            r1.a(r11, r12)
            com.mbridge.msdk.c.a r11 = com.mbridge.msdk.c.a.f(r12)
            com.mbridge.msdk.c.b.d = r11
            com.mbridge.msdk.c.a r11 = com.mbridge.msdk.c.b.d
            if (r11 == 0) goto L18
            com.mbridge.msdk.c.a r11 = com.mbridge.msdk.c.b.d
            r11.aw()
        L18:
            com.mbridge.msdk.c.a r11 = com.mbridge.msdk.c.b.d
            com.mbridge.msdk.foundation.controller.a r12 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lb0
            android.content.Context r12 = r12.j()     // Catch: java.lang.Exception -> Lb0
            r1 = 0
            if (r12 == 0) goto L29
            android.content.pm.PackageManager r1 = r12.getPackageManager()     // Catch: java.lang.Exception -> Lb0
        L29:
            if (r11 == 0) goto Lb8
            if (r1 == 0) goto Lb8
            int r12 = r11.M()     // Catch: java.lang.Exception -> Lb0
            if (r12 <= 0) goto L9c
            java.util.List r12 = r11.O()     // Catch: java.lang.Exception -> Lb0
            if (r12 == 0) goto Lb8
            int r2 = r12.size()     // Catch: java.lang.Exception -> Lb0
            if (r2 <= 0) goto Lb8
            int r11 = r11.P()     // Catch: java.lang.Exception -> Lb0
            r2 = 1
            if (r11 != r2) goto Lb8
            java.util.ArrayList r11 = new java.util.ArrayList     // Catch: java.lang.Exception -> Lb0
            r11.<init>()     // Catch: java.lang.Exception -> Lb0
            r3 = 0
            r4 = r3
        L4d:
            int r5 = r12.size()     // Catch: java.lang.Exception -> Lb0
            if (r4 >= r5) goto L98
            java.lang.Object r5 = r12.get(r4)     // Catch: java.lang.Exception -> Lb0
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = (com.mbridge.msdk.foundation.entity.CampaignEx) r5     // Catch: java.lang.Exception -> Lb0
            java.lang.String r6 = r5.getPackageName()     // Catch: java.lang.Exception -> Lb0
            android.content.pm.PackageInfo r7 = r1.getPackageInfo(r6, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f java.lang.Exception -> Lb0
            java.lang.String r6 = r1.getInstallerPackageName(r6)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f java.lang.Exception -> Lb0
            r5.setPackageName(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f java.lang.Exception -> Lb0
            r5.setIex(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f java.lang.Exception -> Lb0
            long r8 = r7.lastUpdateTime     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f java.lang.Exception -> Lb0
            r5.setTs(r8)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f java.lang.Exception -> Lb0
            java.lang.String r8 = "is"
            r5.setLabel(r8)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f java.lang.Exception -> Lb0
            r5.setPkgSource(r6)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f java.lang.Exception -> Lb0
            int r6 = r7.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f java.lang.Exception -> Lb0
            long r6 = (long) r6     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f java.lang.Exception -> Lb0
            r5.setcVersionCode(r6)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L7f java.lang.Exception -> Lb0
            goto L92
        L7f:
            r5.setPackageName(r0)     // Catch: java.lang.Exception -> Lb0
            r5.setIex(r2)     // Catch: java.lang.Exception -> Lb0
            r6 = 0
            r5.setTs(r6)     // Catch: java.lang.Exception -> Lb0
            java.lang.String r6 = "ni"
            r5.setLabel(r6)     // Catch: java.lang.Exception -> Lb0
            r5.setPkgSource(r0)     // Catch: java.lang.Exception -> Lb0
        L92:
            r11.add(r5)     // Catch: java.lang.Exception -> Lb0
            int r4 = r4 + 1
            goto L4d
        L98:
            r10.a(r11, r2)     // Catch: java.lang.Exception -> Lb0
            goto Lb8
        L9c:
            com.mbridge.msdk.foundation.controller.a r11 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lb0
            android.content.Context r11 = r11.j()     // Catch: java.lang.Exception -> Lb0
            com.mbridge.msdk.foundation.db.i r11 = com.mbridge.msdk.foundation.db.i.a(r11)     // Catch: java.lang.Exception -> Lb0
            com.mbridge.msdk.foundation.db.q r11 = com.mbridge.msdk.foundation.db.q.a(r11)     // Catch: java.lang.Exception -> Lb0
            r11.b()     // Catch: java.lang.Exception -> Lb0
            goto Lb8
        Lb0:
            r11 = move-exception
            boolean r12 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r12 == 0) goto Lb8
            r11.printStackTrace()
        Lb8:
            return
    }

    public final com.mbridge.msdk.c.d c(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.mbridge.msdk.c.d r1 = r0.e(r1, r2)
            if (r1 != 0) goto La
            com.mbridge.msdk.c.d r1 = com.mbridge.msdk.c.d.l()
        La:
            return r1
    }

    public final java.lang.String c(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = ""
            if (r3 != 0) goto L5
            return r0
        L5:
            com.mbridge.msdk.foundation.a.a.a r1 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L12
            java.lang.String r3 = r1.b(r3)     // Catch: java.lang.Exception -> L12
            if (r3 != 0) goto L10
            goto L11
        L10:
            r0 = r3
        L11:
            return r0
        L12:
            r3 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L1a
            r3.printStackTrace()
        L1a:
            return r0
    }

    public final com.mbridge.msdk.c.d d(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.mbridge.msdk.c.d r1 = r0.h(r1, r2)
            if (r1 != 0) goto La
            com.mbridge.msdk.c.d r1 = com.mbridge.msdk.c.d.l()
        La:
            return r1
    }

    public final void d(java.lang.String r6) {
            r5 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            r5.c(r0, r6)
            java.lang.String r0 = com.mbridge.msdk.c.d.a
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L51
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r1 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r1 = r1.getH5ResAddress(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L51
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L45
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r2 = 2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "alert url is exception ,url:"
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.mbridge.msdk.foundation.same.report.e.a(r1, r0, r6, r2, r3)
            goto L51
        L45:
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r1 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            com.mbridge.msdk.c.b$1 r2 = new com.mbridge.msdk.c.b$1
            r2.<init>(r5, r0, r6)
            r1.downloadH5Res(r0, r2)
        L51:
            return
    }

    public final com.mbridge.msdk.c.d e(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.mbridge.msdk.c.d r1 = r0.h(r1, r2)
            if (r1 == 0) goto L10
            int r2 = r1.j()
            if (r2 != 0) goto L10
            r2 = 1
            r1.c(r2)
        L10:
            return r1
    }

    public final java.lang.String e(java.lang.String r4) {
            r3 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ivreward_"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r4 = r0.b(r4)
            return r4
    }

    public final com.mbridge.msdk.c.d f(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.mbridge.msdk.c.d r1 = r0.h(r1, r2)
            return r1
    }

    public final void f(java.lang.String r4) {
            r3 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ivreward_"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.c(r4)
            return
    }

    public final com.mbridge.msdk.c.a g(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L16
            if (r0 == 0) goto Lb
            com.mbridge.msdk.c.a r2 = r1.b()     // Catch: java.lang.Exception -> L16
            return r2
        Lb:
            com.mbridge.msdk.c.a r2 = r1.b(r2)     // Catch: java.lang.Exception -> L16
            if (r2 != 0) goto L1a
            com.mbridge.msdk.c.a r2 = r1.b()     // Catch: java.lang.Exception -> L16
            goto L1a
        L16:
            com.mbridge.msdk.c.a r2 = r1.b()
        L1a:
            return r2
    }

    public final void g(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> L38
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38
            r1.<init>()     // Catch: java.lang.Throwable -> L38
            r1.append(r5)     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = "_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L38
            r1.append(r6)     // Catch: java.lang.Throwable -> L38
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L38
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L38
            if (r1 != 0) goto L42
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L38
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = "current_time"
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L38
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L38
            r4.a(r5, r6, r0)     // Catch: java.lang.Throwable -> L38
            goto L42
        L38:
            r5 = move-exception
            java.lang.String r6 = com.mbridge.msdk.c.b.a
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r6, r5)
        L42:
            return
    }
}
