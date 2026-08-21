package com.mbridge.msdk.videocommon.d;

public class b {
    public static com.mbridge.msdk.videocommon.d.a a;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> b;
    private static volatile com.mbridge.msdk.videocommon.d.b d;
    private volatile boolean c;
    private java.util.concurrent.CopyOnWriteArrayList<java.lang.String> e;


    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.videocommon.d.b.b = r0
            r0 = 0
            com.mbridge.msdk.videocommon.d.b.a = r0
            return
    }

    private b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.e = r0
            return
    }

    public static com.mbridge.msdk.videocommon.d.b a() {
            com.mbridge.msdk.videocommon.d.b r0 = com.mbridge.msdk.videocommon.d.b.d
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.videocommon.d.b> r0 = com.mbridge.msdk.videocommon.d.b.class
            monitor-enter(r0)
            com.mbridge.msdk.videocommon.d.b r1 = com.mbridge.msdk.videocommon.d.b.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.videocommon.d.b r1 = new com.mbridge.msdk.videocommon.d.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.videocommon.d.b.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.videocommon.d.b r0 = com.mbridge.msdk.videocommon.d.b.d
            return r0
    }

    private final boolean a(com.mbridge.msdk.videocommon.d.c r7) {
            r6 = this;
            com.mbridge.msdk.videocommon.d.a r0 = r6.b()
            if (r0 == 0) goto L42
            if (r7 == 0) goto L42
            long r0 = r0.d()
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r7.x()
            long r4 = r4 + r0
            int r7 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r7 <= 0) goto L42
            boolean r7 = com.mbridge.msdk.foundation.tools.z.c
            if (r7 == 0) goto L40
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "unit setting  nexttime is not ready  [settingNextRequestTime= "
            r7.append(r0)
            r7.append(r4)
            java.lang.String r0 = " currentTime = "
            r7.append(r0)
            r7.append(r2)
            java.lang.String r0 = "]"
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            java.lang.String r0 = "RewardSettingManager"
            com.mbridge.msdk.foundation.tools.z.b(r0, r7)
        L40:
            r7 = 0
            return r7
        L42:
            r7 = 1
            return r7
    }

    private static com.mbridge.msdk.videocommon.d.c b(boolean r7) {
            com.mbridge.msdk.videocommon.d.c r0 = new com.mbridge.msdk.videocommon.d.c
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L9b
            r1.<init>()     // Catch: java.lang.Exception -> L9b
            com.mbridge.msdk.videocommon.b.b r2 = new com.mbridge.msdk.videocommon.b.b     // Catch: java.lang.Exception -> L9b
            r3 = 15
            r4 = 0
            r5 = 1
            r2.<init>(r5, r3, r4)     // Catch: java.lang.Exception -> L9b
            r1.add(r2)     // Catch: java.lang.Exception -> L9b
            r0.a(r1)     // Catch: java.lang.Exception -> L9b
            r0.n(r5)     // Catch: java.lang.Exception -> L9b
            r0.m(r5)     // Catch: java.lang.Exception -> L9b
            r0.o(r5)     // Catch: java.lang.Exception -> L9b
            r0.s(r5)     // Catch: java.lang.Exception -> L9b
            r1 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            r0.a(r1)     // Catch: java.lang.Exception -> L9b
            r0.b(r1)     // Catch: java.lang.Exception -> L9b
            r1 = 2
            r0.t(r1)     // Catch: java.lang.Exception -> L9b
            r0.p(r1)     // Catch: java.lang.Exception -> L9b
            r0.q(r5)     // Catch: java.lang.Exception -> L9b
            r0.r(r5)     // Catch: java.lang.Exception -> L9b
            r2 = 3
            r0.i(r2)     // Catch: java.lang.Exception -> L9b
            r3 = 80
            r0.j(r3)     // Catch: java.lang.Exception -> L9b
            r3 = 100
            r0.k(r3)     // Catch: java.lang.Exception -> L9b
            r3 = 0
            r0.l(r3)     // Catch: java.lang.Exception -> L9b
            r0.h(r1)     // Catch: java.lang.Exception -> L9b
            r4 = -1
            r0.f(r4)     // Catch: java.lang.Exception -> L9b
            r6 = 70
            r0.x(r6)     // Catch: java.lang.Exception -> L9b
            r0.e(r1)     // Catch: java.lang.Exception -> L9b
            if (r7 == 0) goto L62
            r7 = 5
            r0.d(r7)     // Catch: java.lang.Exception -> L9b
            goto L65
        L62:
            r0.d(r4)     // Catch: java.lang.Exception -> L9b
        L65:
            r0.c(r3)     // Catch: java.lang.Exception -> L9b
            r0.b(r3)     // Catch: java.lang.Exception -> L9b
            r0.g(r5)     // Catch: java.lang.Exception -> L9b
            r0.u(r5)     // Catch: java.lang.Exception -> L9b
            r0.a(r3)     // Catch: java.lang.Exception -> L9b
            r0.w(r2)     // Catch: java.lang.Exception -> L9b
            java.util.ArrayList r7 = new java.util.ArrayList     // Catch: java.lang.Exception -> L9b
            r7.<init>()     // Catch: java.lang.Exception -> L9b
            r1 = 4
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L9b
            r7.add(r1)     // Catch: java.lang.Exception -> L9b
            r1 = 6
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L9b
            r7.add(r1)     // Catch: java.lang.Exception -> L9b
            r0.a(r7)     // Catch: java.lang.Exception -> L9b
            r0.y(r5)     // Catch: java.lang.Exception -> L9b
            r0.z(r5)     // Catch: java.lang.Exception -> L9b
            r7 = 60
            r0.A(r7)     // Catch: java.lang.Exception -> L9b
            goto L9f
        L9b:
            r7 = move-exception
            r7.printStackTrace()
        L9f:
            return r0
    }

    public static boolean c(java.lang.String r3) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L2f
            if (r1 != 0) goto L2e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2f
            r1.<init>(r3)     // Catch: java.lang.Exception -> L2f
            java.lang.String r3 = "unitSetting"
            org.json.JSONArray r3 = r1.optJSONArray(r3)     // Catch: java.lang.Exception -> L2f
            if (r3 == 0) goto L2e
            org.json.JSONObject r1 = r3.optJSONObject(r0)     // Catch: java.lang.Exception -> L2f
            java.lang.String r2 = "unitId"
            java.lang.String r1 = r1.optString(r2)     // Catch: java.lang.Exception -> L2f
            if (r3 == 0) goto L2e
            int r3 = r3.length()     // Catch: java.lang.Exception -> L2f
            if (r3 <= 0) goto L2e
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L2f
            if (r3 != 0) goto L2e
            r3 = 1
            return r3
        L2e:
            return r0
        L2f:
            r3 = move-exception
            r3.printStackTrace()
            return r0
    }

    private void d(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r2.c
            if (r0 != 0) goto L17
            r0 = 1
            r2.c = r0
            com.mbridge.msdk.videocommon.c.a r0 = new com.mbridge.msdk.videocommon.c.a
            r0.<init>()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r0.a(r1, r3, r4)
        L17:
            return
    }

    public final com.mbridge.msdk.videocommon.d.c a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "reward"
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            r0.append(r5)
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r1 = com.mbridge.msdk.videocommon.d.b.b
            boolean r1 = r1.containsKey(r0)
            r2 = 0
            if (r1 == 0) goto L42
            r1 = 0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r3 = com.mbridge.msdk.videocommon.d.b.b     // Catch: java.lang.Exception -> L33
            java.lang.Object r0 = r3.get(r0)     // Catch: java.lang.Exception -> L33
            com.mbridge.msdk.videocommon.d.c r0 = (com.mbridge.msdk.videocommon.d.c) r0     // Catch: java.lang.Exception -> L33
            boolean r1 = r4.a(r0)     // Catch: java.lang.Exception -> L34
            goto L34
        L33:
            r0 = r2
        L34:
            if (r1 == 0) goto L41
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.l()
            r4.a(r5, r1, r6, r2)
        L41:
            return r0
        L42:
            com.mbridge.msdk.foundation.a.a.a r1 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = r1.b(r0)
            com.mbridge.msdk.videocommon.d.c r1 = com.mbridge.msdk.videocommon.d.c.c(r1)
            boolean r3 = r4.a(r1)
            if (r3 == 0) goto L60
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.l()
            r4.a(r5, r0, r6, r2)
            return r2
        L60:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r5 = com.mbridge.msdk.videocommon.d.b.b
            r5.put(r0, r1)
            return r1
    }

    public final com.mbridge.msdk.videocommon.d.c a(java.lang.String r5, java.lang.String r6, boolean r7) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "reward_"
            r0.append(r1)
            r0.append(r5)
            java.lang.String r1 = "_"
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r1 = com.mbridge.msdk.videocommon.d.b.b
            boolean r1 = r1.containsKey(r0)
            r2 = 0
            if (r1 == 0) goto L3f
            r7 = 0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r1 = com.mbridge.msdk.videocommon.d.b.b     // Catch: java.lang.Exception -> L30
            java.lang.Object r0 = r1.get(r0)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.videocommon.d.c r0 = (com.mbridge.msdk.videocommon.d.c) r0     // Catch: java.lang.Exception -> L30
            boolean r7 = r4.a(r0)     // Catch: java.lang.Exception -> L31
            goto L31
        L30:
            r0 = r2
        L31:
            if (r7 == 0) goto L3e
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r7 = r7.l()
            r4.a(r5, r7, r6, r2)
        L3e:
            return r0
        L3f:
            com.mbridge.msdk.foundation.a.a.a r1 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = r1.b(r0)
            com.mbridge.msdk.videocommon.d.c r1 = com.mbridge.msdk.videocommon.d.c.c(r1)
            boolean r3 = r4.a(r1)
            if (r3 == 0) goto L64
            if (r1 != 0) goto L63
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.l()
            r4.a(r5, r0, r6, r2)
            com.mbridge.msdk.videocommon.d.c r5 = b(r7)
            return r5
        L63:
            return r1
        L64:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r5 = com.mbridge.msdk.videocommon.d.b.b
            r5.put(r0, r1)
            return r1
    }

    public final void a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lb
            if (r0 != 0) goto Lb
            java.util.concurrent.CopyOnWriteArrayList<java.lang.String> r0 = r1.e     // Catch: java.lang.Exception -> Lb
            r0.remove(r2)     // Catch: java.lang.Exception -> Lb
        Lb:
            return
    }

    public final void a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "reward_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "_"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            com.mbridge.msdk.foundation.a.a.a r4 = com.mbridge.msdk.foundation.a.a.a.a()
            r4.a(r3, r5)
            com.mbridge.msdk.videocommon.d.c r4 = com.mbridge.msdk.videocommon.d.c.c(r5)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r5 = com.mbridge.msdk.videocommon.d.b.b
            r5.put(r3, r4)
            return
    }

    public final void a(java.lang.String r9, java.lang.String r10, java.lang.String r11, com.mbridge.msdk.videocommon.c.c r12) {
            r8 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> L37
            if (r0 != 0) goto L1b
            java.util.concurrent.CopyOnWriteArrayList<java.lang.String> r0 = r8.e     // Catch: java.lang.Exception -> L37
            boolean r0 = r0.contains(r11)     // Catch: java.lang.Exception -> L37
            if (r0 == 0) goto Lf
            goto L1b
        Lf:
            boolean r0 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> L37
            if (r0 != 0) goto L37
            java.util.concurrent.CopyOnWriteArrayList<java.lang.String> r0 = r8.e     // Catch: java.lang.Exception -> L37
            r0.add(r11)     // Catch: java.lang.Exception -> L37
            goto L37
        L1b:
            java.lang.String r0 = "test_reward_unit_setting"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L37
            r1.<init>()     // Catch: java.lang.Exception -> L37
            java.lang.String r2 = "unitID: "
            r1.append(r2)     // Catch: java.lang.Exception -> L37
            r1.append(r11)     // Catch: java.lang.Exception -> L37
            java.lang.String r2 = " is requesting"
            r1.append(r2)     // Catch: java.lang.Exception -> L37
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L37
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> L37
            return
        L37:
            com.mbridge.msdk.videocommon.c.a r2 = new com.mbridge.msdk.videocommon.c.a
            r2.<init>()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r0.j()
            r4 = r9
            r5 = r10
            r6 = r11
            r7 = r12
            r2.a(r3, r4, r5, r6, r7)
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final com.mbridge.msdk.videocommon.d.a b() {
            r8 = this;
            com.mbridge.msdk.videocommon.d.a r0 = com.mbridge.msdk.videocommon.d.b.a
            if (r0 != 0) goto La3
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "reward_"
            r1.append(r2)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = r0.b(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L8c
            com.mbridge.msdk.videocommon.d.a r0 = com.mbridge.msdk.videocommon.d.a.a(r0)
            java.lang.String r1 = "RewardSettingManager"
            if (r0 == 0) goto L6b
            long r2 = r0.c()
            long r4 = java.lang.System.currentTimeMillis()
            long r6 = r0.h()
            long r6 = r6 + r2
            int r2 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r2 <= 0) goto L6b
            boolean r2 = com.mbridge.msdk.foundation.tools.z.c
            if (r2 == 0) goto L69
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "app setting nexttime is not ready  [settingNextRequestTime= "
            r2.append(r3)
            r2.append(r6)
            java.lang.String r3 = " currentTime = "
            r2.append(r3)
            r2.append(r4)
            java.lang.String r3 = "]"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)
        L69:
            r1 = 0
            goto L71
        L6b:
            java.lang.String r2 = "app setting timeout or not exists"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)
            r1 = 1
        L71:
            if (r1 != 0) goto L74
            return r0
        L74:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.l()
            r8.d(r0, r1)
            com.mbridge.msdk.videocommon.d.a r0 = r8.c()
            return r0
        L8c:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.l()
            r8.d(r0, r1)
            com.mbridge.msdk.videocommon.d.a r0 = r8.c()
        La3:
            return r0
    }

    public final void b(java.lang.String r6) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto L5c
            com.mbridge.msdk.videocommon.d.b r0 = a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            r2 = 0
            r0.a(r1, r6, r2)
            java.lang.String r0 = com.mbridge.msdk.videocommon.d.c.a
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L5c
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r1 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r1 = r1.getH5ResAddress(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L5c
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L50
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
            goto L5c
        L50:
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r1 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            com.mbridge.msdk.videocommon.d.b$1 r2 = new com.mbridge.msdk.videocommon.d.b$1
            r2.<init>(r5, r0, r6)
            r1.downloadH5Res(r0, r2)
        L5c:
            return
    }

    public final void b(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "reward_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            r0.a(r3, r4)
            com.mbridge.msdk.videocommon.d.a r3 = com.mbridge.msdk.videocommon.d.a.a(r4)
            com.mbridge.msdk.videocommon.d.b.a = r3
            return
    }

    public final com.mbridge.msdk.videocommon.d.a c() {
            r7 = this;
            com.mbridge.msdk.videocommon.d.a r0 = new com.mbridge.msdk.videocommon.d.a
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
            com.mbridge.msdk.videocommon.b.d r4 = new com.mbridge.msdk.videocommon.b.d
            r5 = 1
            java.lang.String r6 = "Virtual Item"
            r4.<init>(r6, r5)
            r2.put(r3, r4)
            r0.a(r1)
            r0.b(r2)
            r1 = 43200(0xa8c0, double:2.13436E-319)
            r0.a(r1)
            r1 = 5400(0x1518, double:2.668E-320)
            r0.b(r1)
            r1 = 3600(0xe10, double:1.7786E-320)
            r0.c(r1)
            r0.d(r1)
            r1 = 5
            r0.e(r1)
            r0.a(r5)
            return r0
    }

    public final com.mbridge.msdk.videocommon.d.c c(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "reward_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "_"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r4 = com.mbridge.msdk.videocommon.d.b.b
            boolean r4 = r4.containsKey(r3)
            if (r4 == 0) goto L2a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r4 = com.mbridge.msdk.videocommon.d.b.b
            java.lang.Object r3 = r4.get(r3)
            com.mbridge.msdk.videocommon.d.c r3 = (com.mbridge.msdk.videocommon.d.c) r3
            return r3
        L2a:
            com.mbridge.msdk.foundation.a.a.a r4 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r3 = r4.b(r3)
            com.mbridge.msdk.videocommon.d.c r3 = com.mbridge.msdk.videocommon.d.c.c(r3)
            return r3
    }
}
