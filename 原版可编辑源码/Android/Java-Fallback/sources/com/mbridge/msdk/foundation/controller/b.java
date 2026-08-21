package com.mbridge.msdk.foundation.controller;

public class b {
    private static volatile com.mbridge.msdk.foundation.controller.b j;
    public final int a;
    public final int b;
    public final int c;
    public final int d;
    public final int e;
    public final int f;
    public final int g;
    public final int h;
    android.os.Handler i;
    private android.content.Context k;
    private java.lang.String l;
    private java.lang.String m;
    private java.lang.String n;
    private java.lang.String o;
    private java.lang.String p;
    private boolean q;
    private com.mbridge.msdk.b.a r;
    private java.lang.String s;
    private java.util.concurrent.atomic.AtomicBoolean t;
    private com.mbridge.msdk.foundation.tools.FastKV u;
    private java.util.Map<java.lang.String, java.lang.Object> v;
    private int w;
    private com.mbridge.msdk.out.AdMobClickListener x;







    static {
            return
    }

    private b() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.q = r0
            r0 = 1
            r2.a = r0
            r0 = 2
            r2.b = r0
            r0 = 3
            r2.c = r0
            r0 = 4
            r2.d = r0
            r0 = 5
            r2.e = r0
            r0 = 6
            r2.f = r0
            r0 = 7
            r2.g = r0
            r0 = 8
            r2.h = r0
            r0 = 0
            r2.t = r0
            com.mbridge.msdk.foundation.controller.b$4 r0 = new com.mbridge.msdk.foundation.controller.b$4
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.i = r0
            return
    }

    public static com.mbridge.msdk.foundation.controller.b a() {
            com.mbridge.msdk.foundation.controller.b r0 = com.mbridge.msdk.foundation.controller.b.j
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.controller.b> r0 = com.mbridge.msdk.foundation.controller.b.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.controller.b r1 = com.mbridge.msdk.foundation.controller.b.j     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.controller.b r1 = new com.mbridge.msdk.foundation.controller.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.controller.b.j = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.foundation.controller.b r0 = com.mbridge.msdk.foundation.controller.b.j
            return r0
    }

    static void a(com.mbridge.msdk.foundation.controller.b r0) {
            r0.e()
            return
    }

    static void a(com.mbridge.msdk.foundation.controller.b r3, java.lang.String r4) {
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            if (r0 != 0) goto L8
            goto L8c
        L8:
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            if (r0 == 0) goto L5f
            com.mbridge.msdk.c.a r0 = r0.b(r4)
            if (r0 == 0) goto L57
            java.lang.String r1 = r0.aM()
            com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_URL = r1
            java.lang.String r1 = r0.aL()
            com.mbridge.msdk.MBridgeConstans.OMID_JS_H5_URL = r1
            java.lang.String r1 = r0.al()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L3b
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r2 = r0.al()
            r1.c = r2
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()
            r1.e()
        L3b:
            java.lang.String r1 = r0.am()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L5f
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r0 = r0.am()
            r1.d = r0
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()
            r0.f()
            goto L5f
        L57:
            java.lang.String r0 = "https://cdn-adn-https.rayjump.com/cdn-adn/v2/portal/19/08/20/11/06/5d5b63cb457e2.js"
            com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_URL = r0
            java.lang.String r0 = "https://mtg-native.rayjump.com/omsdk/omsdkjs_common_js.txt"
            com.mbridge.msdk.MBridgeConstans.OMID_JS_H5_URL = r0
        L5f:
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            boolean r0 = r0.a(r4)
            if (r0 == 0) goto L82
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            r1 = 1
            r2 = 0
            boolean r0 = r0.a(r4, r1, r2)
            if (r0 == 0) goto L82
            com.mbridge.msdk.c.c r0 = new com.mbridge.msdk.c.c
            r0.<init>()
            android.content.Context r1 = r3.k
            java.lang.String r3 = r3.o
            r0.a(r1, r4, r3)
            goto L8c
        L82:
            com.mbridge.msdk.foundation.same.report.d r4 = new com.mbridge.msdk.foundation.same.report.d
            android.content.Context r3 = r3.k
            r4.<init>(r3)
            r4.a()
        L8c:
            return
    }

    static java.lang.String b(com.mbridge.msdk.foundation.controller.b r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    static android.content.Context c(com.mbridge.msdk.foundation.controller.b r0) {
            android.content.Context r0 = r0.k
            return r0
    }

    static void d(com.mbridge.msdk.foundation.controller.b r8) {
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L7d
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L7d
            java.lang.String r3 = r8.n     // Catch: java.lang.Exception -> L7d
            com.mbridge.msdk.c.a r2 = r2.b(r3)     // Catch: java.lang.Exception -> L7d
            if (r2 != 0) goto L18
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L7d
            com.mbridge.msdk.c.a r2 = r2.b()     // Catch: java.lang.Exception -> L7d
        L18:
            android.content.Context r3 = r8.k     // Catch: java.lang.Exception -> L7d
            java.lang.String r4 = "mbridge_setting_campaign_time"
            java.lang.Long r5 = new java.lang.Long     // Catch: java.lang.Exception -> L7d
            r6 = 0
            r5.<init>(r6)     // Catch: java.lang.Exception -> L7d
            java.lang.Object r3 = com.mbridge.msdk.foundation.tools.ag.b(r3, r4, r5)     // Catch: java.lang.Exception -> L7d
            java.lang.Long r3 = (java.lang.Long) r3     // Catch: java.lang.Exception -> L7d
            long r3 = r3.longValue()     // Catch: java.lang.Exception -> L7d
            int r5 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r5 <= 0) goto L3e
            int r5 = r2.N()     // Catch: java.lang.Exception -> L7d
            int r5 = r5 * 1000
            long r5 = (long) r5     // Catch: java.lang.Exception -> L7d
            long r3 = r3 + r5
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L3e
            goto L81
        L3e:
            int r0 = r2.M()     // Catch: java.lang.Exception -> L7d
            if (r0 > 0) goto L58
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L7d
            android.content.Context r8 = r8.j()     // Catch: java.lang.Exception -> L7d
            com.mbridge.msdk.foundation.db.i r8 = com.mbridge.msdk.foundation.db.i.a(r8)     // Catch: java.lang.Exception -> L7d
            com.mbridge.msdk.foundation.db.q r8 = com.mbridge.msdk.foundation.db.q.a(r8)     // Catch: java.lang.Exception -> L7d
            r8.b()     // Catch: java.lang.Exception -> L7d
            goto L81
        L58:
            android.content.Context r0 = r8.k     // Catch: java.lang.Exception -> L7d
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Exception -> L7d
            com.mbridge.msdk.foundation.db.q r0 = com.mbridge.msdk.foundation.db.q.a(r0)     // Catch: java.lang.Exception -> L7d
            java.util.List r0 = r0.c()     // Catch: java.lang.Exception -> L7d
            if (r0 == 0) goto L81
            int r1 = r0.size()     // Catch: java.lang.Exception -> L7d
            if (r1 <= 0) goto L81
            android.os.Message r1 = android.os.Message.obtain()     // Catch: java.lang.Exception -> L7d
            r1.obj = r0     // Catch: java.lang.Exception -> L7d
            r0 = 7
            r1.what = r0     // Catch: java.lang.Exception -> L7d
            android.os.Handler r8 = r8.i     // Catch: java.lang.Exception -> L7d
            r8.sendMessage(r1)     // Catch: java.lang.Exception -> L7d
            goto L81
        L7d:
            r8 = move-exception
            r8.printStackTrace()
        L81:
            return
    }

    private void e() {
            r5 = this;
            java.lang.String r0 = "com.mbridge.msdk.e.b"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L24
            java.lang.String r1 = "getInstance"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L24
            java.lang.reflect.Method r1 = r0.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L24
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L24
            java.lang.Object r1 = r1.invoke(r3, r4)     // Catch: java.lang.Throwable -> L24
            java.lang.String r3 = "start"
            java.lang.Class[] r4 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L24
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r3, r4)     // Catch: java.lang.Throwable -> L24
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L24
            r0.invoke(r1, r2)     // Catch: java.lang.Throwable -> L24
            goto L2e
        L24:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "SDKController"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L2e:
            return
    }

    public final void a(java.util.Map<java.lang.String, java.lang.Object> r11, int r12) {
            r10 = this;
            java.lang.String r0 = "layout_type"
            com.mbridge.msdk.system.a r1 = com.mbridge.msdk.out.MBridgeSDKFactory.getMBridgeSDK()
            com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r1 = r1.getStatus()
            com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r2 = com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS.COMPLETED
            java.lang.String r3 = "SDKController"
            if (r1 == r2) goto L16
            java.lang.String r11 = "preloaad failed,sdk do not inited"
            com.mbridge.msdk.foundation.tools.z.d(r3, r11)
            return
        L16:
            r10.v = r11
            r10.w = r12
            com.mbridge.msdk.foundation.controller.a r12 = com.mbridge.msdk.foundation.controller.a.f()
            r12.k()
            if (r11 == 0) goto Lc2
            com.mbridge.msdk.b.a r11 = r10.r
            if (r11 != 0) goto L2e
            com.mbridge.msdk.b.a r11 = new com.mbridge.msdk.b.a
            r11.<init>()
            r10.r = r11
        L2e:
            java.util.Map<java.lang.String, java.lang.Object> r11 = r10.v     // Catch: java.lang.Exception -> Lbe
            if (r11 == 0) goto Lc2
            java.util.Map<java.lang.String, java.lang.Object> r11 = r10.v     // Catch: java.lang.Exception -> Lbe
            int r11 = r11.size()     // Catch: java.lang.Exception -> Lbe
            if (r11 <= 0) goto Lc2
            java.util.Map<java.lang.String, java.lang.Object> r11 = r10.v     // Catch: java.lang.Exception -> Lbe
            boolean r11 = r11.containsKey(r0)     // Catch: java.lang.Exception -> Lbe
            if (r11 == 0) goto Lc2
            java.util.Map<java.lang.String, java.lang.Object> r11 = r10.v     // Catch: java.lang.Exception -> Lbe
            java.lang.Object r11 = r11.get(r0)     // Catch: java.lang.Exception -> Lbe
            java.lang.Integer r11 = (java.lang.Integer) r11     // Catch: java.lang.Exception -> Lbe
            int r11 = r11.intValue()     // Catch: java.lang.Exception -> Lbe
            java.lang.String r12 = "preload"
            r0 = 2
            r1 = 3
            r2 = 0
            r4 = 1
            if (r11 != 0) goto L8d
            java.util.Map<java.lang.String, java.lang.Object> r11 = r10.v     // Catch: java.lang.Exception -> Lbe
            int r3 = r10.w     // Catch: java.lang.Exception -> Lbe
            com.mbridge.msdk.out.AdMobClickListener r5 = r10.x     // Catch: java.lang.Exception -> Lbe
            java.lang.String r6 = "com.mbridge.msdk.mbnative.e.a"
            java.lang.Class r6 = java.lang.Class.forName(r6)     // Catch: java.lang.Exception -> L88
            java.lang.Object r7 = r6.newInstance()     // Catch: java.lang.Exception -> L88
            java.lang.Class[] r8 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L88
            java.lang.Class<java.util.Map> r9 = java.util.Map.class
            r8[r2] = r9     // Catch: java.lang.Exception -> L88
            java.lang.Class r9 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L88
            r8[r4] = r9     // Catch: java.lang.Exception -> L88
            java.lang.Class<com.mbridge.msdk.out.AdMobClickListener> r9 = com.mbridge.msdk.out.AdMobClickListener.class
            r8[r0] = r9     // Catch: java.lang.Exception -> L88
            java.lang.reflect.Method r12 = r6.getMethod(r12, r8)     // Catch: java.lang.Exception -> L88
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L88
            r1[r2] = r11     // Catch: java.lang.Exception -> L88
            java.lang.Integer r11 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L88
            r1[r4] = r11     // Catch: java.lang.Exception -> L88
            r1[r0] = r5     // Catch: java.lang.Exception -> L88
            r12.invoke(r7, r1)     // Catch: java.lang.Exception -> L88
            goto Lc2
        L88:
            r11 = move-exception
            r11.printStackTrace()     // Catch: java.lang.Exception -> Lbe
            goto Lc2
        L8d:
            if (r1 != r11) goto Lb2
            java.util.Map<java.lang.String, java.lang.Object> r11 = r10.v     // Catch: java.lang.Exception -> Lbe
            java.lang.String r0 = "com.mbridge.msdk.appwall.service.HandlerProvider"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> Lad
            java.lang.Object r1 = r0.newInstance()     // Catch: java.lang.Exception -> Lad
            java.lang.Class[] r3 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> Lad
            java.lang.Class<java.util.Map> r5 = java.util.Map.class
            r3[r2] = r5     // Catch: java.lang.Exception -> Lad
            java.lang.reflect.Method r12 = r0.getMethod(r12, r3)     // Catch: java.lang.Exception -> Lad
            java.lang.Object[] r0 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lad
            r0[r2] = r11     // Catch: java.lang.Exception -> Lad
            r12.invoke(r1, r0)     // Catch: java.lang.Exception -> Lad
            goto Lc2
        Lad:
            r11 = move-exception
            r11.printStackTrace()     // Catch: java.lang.Exception -> Lbe
            goto Lc2
        Lb2:
            if (r4 != r11) goto Lb5
            goto Lc2
        Lb5:
            if (r0 != r11) goto Lb8
            goto Lc2
        Lb8:
            java.lang.String r11 = "unknow layout type in preload"
            com.mbridge.msdk.foundation.tools.z.d(r3, r11)     // Catch: java.lang.Exception -> Lbe
            goto Lc2
        Lbe:
            r11 = move-exception
            r11.printStackTrace()
        Lc2:
            return
    }

    public final void a(java.util.Map r13, android.content.Context r14) {
            r12 = this;
            java.lang.String r0 = "SDKController"
            java.lang.String r1 = ""
            if (r14 == 0) goto L3c5
            java.lang.String r2 = "mbridge_appid"
            boolean r3 = r13.containsKey(r2)
            if (r3 == 0) goto L16
            java.lang.Object r3 = r13.get(r2)
            java.lang.String r3 = (java.lang.String) r3
            r12.n = r3
        L16:
            android.content.Context r3 = r14.getApplicationContext()
            r12.k = r3
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r4 = r12.k
            r3.b(r4)
            java.lang.Object r3 = r13.get(r2)     // Catch: java.lang.Throwable -> L3b java.lang.Exception -> L3d
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L3b java.lang.Exception -> L3d
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L3b java.lang.Exception -> L3d
            if (r4 != 0) goto L46
            com.mbridge.msdk.foundation.a.a.a r4 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> L3b java.lang.Exception -> L3d
            java.lang.String r5 = "sdk_app_id"
            r4.a(r5, r3)     // Catch: java.lang.Throwable -> L3b java.lang.Exception -> L3d
            goto L46
        L3b:
            r3 = move-exception
            goto L3f
        L3d:
            r3 = move-exception
            goto L43
        L3f:
            r3.printStackTrace()
            goto L46
        L43:
            r3.printStackTrace()
        L46:
            android.content.Context r3 = r12.k     // Catch: java.lang.Exception -> L4b
            com.mbridge.msdk.foundation.same.net.n.a(r3)     // Catch: java.lang.Exception -> L4b
        L4b:
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 26
            if (r3 >= r4) goto L5c
            com.mbridge.msdk.d.b r3 = com.mbridge.msdk.d.b.a(r14)
            r4 = 30000(0x7530, float:4.2039E-41)
            java.lang.String r5 = r12.n
            r3.a(r4, r5)
        L5c:
            boolean r3 = r12.q
            r4 = 1
            if (r3 != r4) goto L74
            com.mbridge.msdk.rover.b r13 = com.mbridge.msdk.rover.b.a()
            r13.a(r14)
            r13.b()
            com.mbridge.msdk.foundation.same.report.d r13 = new com.mbridge.msdk.foundation.same.report.d
            r13.<init>(r14)
            r13.a()
            return
        L74:
            com.mbridge.msdk.foundation.tools.v.C(r14)
            if (r13 == 0) goto L3a6
            boolean r3 = r13.containsKey(r2)
            if (r3 == 0) goto L87
            java.lang.Object r2 = r13.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            r12.n = r2
        L87:
            java.lang.String r2 = "mbridge_appkey"
            boolean r3 = r13.containsKey(r2)
            if (r3 == 0) goto L97
            java.lang.Object r2 = r13.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            r12.o = r2
        L97:
            java.lang.String r2 = "mbridge_wx_appid"
            boolean r3 = r13.containsKey(r2)
            if (r3 == 0) goto La7
            java.lang.Object r2 = r13.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            r12.p = r2
        La7:
            java.lang.String r2 = "applicationID"
            boolean r3 = r13.containsKey(r2)
            if (r3 == 0) goto Lb7
            java.lang.Object r2 = r13.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            r12.s = r2
        Lb7:
            java.lang.String r2 = "mbridge_appstartupcarsh"
            boolean r3 = r13.containsKey(r2)
            if (r3 == 0) goto Lc7
            java.lang.Object r13 = r13.get(r2)
            java.lang.String r13 = (java.lang.String) r13
            r12.m = r13
        Lc7:
            r13 = 0
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L172
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L172
            java.lang.String r3 = r3.k()     // Catch: java.lang.Throwable -> L172
            com.mbridge.msdk.c.a r2 = r2.b(r3)     // Catch: java.lang.Throwable -> L172
            if (r2 == 0) goto L17a
            java.util.List r2 = r2.n()     // Catch: java.lang.Throwable -> L172
            if (r2 == 0) goto L17a
            int r3 = r2.size()     // Catch: java.lang.Throwable -> L172
            if (r3 <= 0) goto L17a
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L172
        Lea:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L172
            if (r3 == 0) goto L17a
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L172
            com.mbridge.msdk.foundation.entity.b r3 = (com.mbridge.msdk.foundation.entity.b) r3     // Catch: java.lang.Throwable -> L172
            int r5 = r3.a()     // Catch: java.lang.Throwable -> L172
            r6 = 287(0x11f, float:4.02E-43)
            java.lang.String r7 = "loadFormSelfFilling"
            r8 = 2
            if (r5 != r6) goto L137
            java.lang.String r5 = "com.mbridge.msdk.interstitialvideo.out.MBInterstitialVideoHandler"
            java.lang.Class r5 = java.lang.Class.forName(r5)     // Catch: java.lang.Throwable -> L172
            android.content.Context r6 = r12.k     // Catch: java.lang.Throwable -> L172
            if (r6 == 0) goto Lea
            if (r5 == 0) goto Lea
            java.lang.Class[] r6 = new java.lang.Class[r8]     // Catch: java.lang.Throwable -> L172
            java.lang.Class<java.lang.String> r9 = java.lang.String.class
            r6[r13] = r9     // Catch: java.lang.Throwable -> L172
            java.lang.Class<java.lang.String> r9 = java.lang.String.class
            r6[r4] = r9     // Catch: java.lang.Throwable -> L172
            java.lang.reflect.Constructor r6 = r5.getConstructor(r6)     // Catch: java.lang.Throwable -> L172
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L172
            r8[r13] = r1     // Catch: java.lang.Throwable -> L172
            java.lang.String r3 = r3.b()     // Catch: java.lang.Throwable -> L172
            r8[r4] = r3     // Catch: java.lang.Throwable -> L172
            java.lang.Object r3 = r6.newInstance(r8)     // Catch: java.lang.Throwable -> L172
            if (r3 == 0) goto Lea
            java.lang.Class[] r6 = new java.lang.Class[r13]     // Catch: java.lang.Throwable -> L172
            java.lang.reflect.Method r5 = r5.getMethod(r7, r6)     // Catch: java.lang.Throwable -> L172
            java.lang.Object[] r6 = new java.lang.Object[r13]     // Catch: java.lang.Throwable -> L172
            r5.invoke(r3, r6)     // Catch: java.lang.Throwable -> L172
            goto Lea
        L137:
            int r5 = r3.a()     // Catch: java.lang.Throwable -> L172
            r6 = 94
            if (r5 != r6) goto Lea
            java.lang.String r5 = "com.mbridge.msdk.out.MBRewardVideoHandler"
            java.lang.Class r5 = java.lang.Class.forName(r5)     // Catch: java.lang.Throwable -> L172
            if (r5 == 0) goto Lea
            java.lang.Class[] r6 = new java.lang.Class[r8]     // Catch: java.lang.Throwable -> L172
            java.lang.Class<java.lang.String> r9 = java.lang.String.class
            r6[r13] = r9     // Catch: java.lang.Throwable -> L172
            java.lang.Class<java.lang.String> r9 = java.lang.String.class
            r6[r4] = r9     // Catch: java.lang.Throwable -> L172
            java.lang.reflect.Constructor r6 = r5.getConstructor(r6)     // Catch: java.lang.Throwable -> L172
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L172
            r8[r13] = r1     // Catch: java.lang.Throwable -> L172
            java.lang.String r3 = r3.b()     // Catch: java.lang.Throwable -> L172
            r8[r4] = r3     // Catch: java.lang.Throwable -> L172
            java.lang.Object r3 = r6.newInstance(r8)     // Catch: java.lang.Throwable -> L172
            if (r3 == 0) goto Lea
            java.lang.Class[] r6 = new java.lang.Class[r13]     // Catch: java.lang.Throwable -> L172
            java.lang.reflect.Method r5 = r5.getMethod(r7, r6)     // Catch: java.lang.Throwable -> L172
            java.lang.Object[] r6 = new java.lang.Object[r13]     // Catch: java.lang.Throwable -> L172
            r5.invoke(r3, r6)     // Catch: java.lang.Throwable -> L172
            goto Lea
        L172:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r3 == 0) goto L17a
            r2.printStackTrace()
        L17a:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r12.n
            r2.c(r3)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r12.o
            r2.d(r3)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r12.p
            r2.e(r3)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r12.l
            r2.b(r3)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r12.s
            r2.a(r3)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            com.mbridge.msdk.foundation.controller.b$6 r3 = new com.mbridge.msdk.foundation.controller.b$6
            r3.<init>(r12)
            android.os.Handler r5 = r12.i
            r2.a(r3, r5)
            android.content.Context r2 = r12.k
            android.content.Context r2 = r2.getApplicationContext()
            com.iab.omid.library.mmadbridge.Omid.activate(r2)     // Catch: java.lang.IllegalArgumentException -> L1d7
            boolean r3 = com.iab.omid.library.mmadbridge.Omid.isActive()     // Catch: java.lang.IllegalArgumentException -> L1d7
            if (r3 != 0) goto L1df
            com.mbridge.msdk.foundation.same.report.d r5 = new com.mbridge.msdk.foundation.same.report.d     // Catch: java.lang.IllegalArgumentException -> L1d7
            r5.<init>(r2, r13)     // Catch: java.lang.IllegalArgumentException -> L1d7
            java.lang.String r6 = ""
            java.lang.String r7 = ""
            java.lang.String r8 = ""
            java.lang.String r9 = ""
            java.lang.String r10 = "activate om failed"
            r5.a(r6, r7, r8, r9, r10)     // Catch: java.lang.IllegalArgumentException -> L1d7
            goto L1df
        L1d7:
            r2 = move-exception
            java.lang.String r3 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r3, r2)
        L1df:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "facebook = "
            r2.append(r3)
            java.lang.String r3 = r12.l
            r2.append(r3)
            java.lang.String r3 = "appId = "
            r2.append(r3)
            java.lang.String r3 = r12.n
            r2.append(r3)
            java.lang.String r3 = "appKey = "
            r2.append(r3)
            java.lang.String r3 = r12.o
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)
            android.content.Context r2 = r12.k
            android.content.Context r2 = r2.getApplicationContext()
            boolean r3 = r12.d()     // Catch: java.lang.Throwable -> L359
            java.lang.String r5 = "H+tU+FeXHM=="
            if (r3 == 0) goto L234
            com.mbridge.msdk.foundation.tools.FastKV r3 = r12.u     // Catch: java.lang.Throwable -> L359
            if (r3 != 0) goto L234
            com.mbridge.msdk.foundation.tools.FastKV$Builder r3 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L231 java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.same.b.c r6 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L231 java.lang.Throwable -> L359
            java.lang.String r6 = com.mbridge.msdk.foundation.same.b.e.b(r6)     // Catch: java.lang.Exception -> L231 java.lang.Throwable -> L359
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.t.b(r5)     // Catch: java.lang.Exception -> L231 java.lang.Throwable -> L359
            r3.<init>(r6, r7)     // Catch: java.lang.Exception -> L231 java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.tools.FastKV r3 = r3.build()     // Catch: java.lang.Exception -> L231 java.lang.Throwable -> L359
            r12.u = r3     // Catch: java.lang.Exception -> L231 java.lang.Throwable -> L359
            goto L234
        L231:
            r3 = 0
            r12.u = r3     // Catch: java.lang.Throwable -> L359
        L234:
            com.mbridge.msdk.foundation.tools.FastKV r3 = r12.u     // Catch: java.lang.Throwable -> L359
            java.lang.String r6 = "c"
            java.lang.String r7 = "b"
            java.lang.String r8 = "H+tU+Fz8"
            java.lang.String r9 = "H+tU+bfPhM=="
            if (r3 == 0) goto L2c6
            com.mbridge.msdk.foundation.tools.FastKV r13 = r12.u     // Catch: java.lang.Throwable -> L359
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.b(r9)     // Catch: java.lang.Throwable -> L359
            java.lang.String r13 = r13.getString(r2, r1)     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.tools.FastKV r2 = r12.u     // Catch: java.lang.Throwable -> L359
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.t.b(r8)     // Catch: java.lang.Throwable -> L359
            java.lang.String r1 = r2.getString(r3, r1)     // Catch: java.lang.Throwable -> L359
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L359
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L359
            if (r2 == 0) goto L278
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L359
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L359
            if (r2 == 0) goto L278
            com.mbridge.msdk.foundation.a.a.a r2 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> L359
            java.lang.String r2 = r2.b(r7)     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.same.a.t = r2     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.a.a.a r2 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> L359
            java.lang.String r2 = r2.b(r6)     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.same.a.u = r2     // Catch: java.lang.Throwable -> L359
        L278:
            boolean r2 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L359
            if (r2 == 0) goto L2ae
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L359
            if (r2 == 0) goto L2ae
            java.lang.String r13 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L359
            boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L359
            if (r13 == 0) goto L296
            java.lang.String r13 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L359
            boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L359
            if (r13 == 0) goto L296
            goto L361
        L296:
            com.mbridge.msdk.foundation.tools.FastKV r13 = r12.u     // Catch: java.lang.Throwable -> L359
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r9)     // Catch: java.lang.Throwable -> L359
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L359
            r13.putString(r1, r2)     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.tools.FastKV r13 = r12.u     // Catch: java.lang.Throwable -> L359
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r8)     // Catch: java.lang.Throwable -> L359
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L359
            r13.putString(r1, r2)     // Catch: java.lang.Throwable -> L359
            goto L361
        L2ae:
            com.mbridge.msdk.foundation.same.a.t = r13     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.same.a.u = r1     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.a.a.a r13 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> L359
            java.lang.String r1 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L359
            r13.a(r7, r1)     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.a.a.a r13 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> L359
            java.lang.String r1 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L359
            r13.a(r6, r1)     // Catch: java.lang.Throwable -> L359
            goto L361
        L2c6:
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.t.b(r5)     // Catch: java.lang.Throwable -> L359
            android.content.SharedPreferences r13 = r2.getSharedPreferences(r3, r13)     // Catch: java.lang.Throwable -> L359
            if (r13 == 0) goto L2e4
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.b(r9)     // Catch: java.lang.Throwable -> L359
            java.lang.String r2 = r13.getString(r2, r1)     // Catch: java.lang.Throwable -> L359
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.t.b(r8)     // Catch: java.lang.Throwable -> L359
            java.lang.String r1 = r13.getString(r3, r1)     // Catch: java.lang.Throwable -> L359
            r11 = r2
            r2 = r1
            r1 = r11
            goto L2e5
        L2e4:
            r2 = r1
        L2e5:
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L359
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L359
            if (r3 == 0) goto L309
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L359
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L359
            if (r3 == 0) goto L309
            com.mbridge.msdk.foundation.a.a.a r3 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> L359
            java.lang.String r3 = r3.b(r7)     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.same.a.t = r3     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.a.a.a r3 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> L359
            java.lang.String r3 = r3.b(r6)     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.same.a.u = r3     // Catch: java.lang.Throwable -> L359
        L309:
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L359
            if (r3 == 0) goto L342
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L359
            if (r3 == 0) goto L342
            java.lang.String r1 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L359
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L359
            if (r1 == 0) goto L326
            java.lang.String r1 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L359
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L359
            if (r1 == 0) goto L326
            goto L361
        L326:
            if (r13 == 0) goto L361
            android.content.SharedPreferences$Editor r13 = r13.edit()     // Catch: java.lang.Throwable -> L359
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r9)     // Catch: java.lang.Throwable -> L359
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L359
            r13.putString(r1, r2)     // Catch: java.lang.Throwable -> L359
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r8)     // Catch: java.lang.Throwable -> L359
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L359
            r13.putString(r1, r2)     // Catch: java.lang.Throwable -> L359
            r13.apply()     // Catch: java.lang.Throwable -> L359
            goto L361
        L342:
            com.mbridge.msdk.foundation.same.a.t = r1     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.same.a.u = r2     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.a.a.a r13 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> L359
            java.lang.String r1 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L359
            r13.a(r7, r1)     // Catch: java.lang.Throwable -> L359
            com.mbridge.msdk.foundation.a.a.a r13 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> L359
            java.lang.String r1 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L359
            r13.a(r6, r1)     // Catch: java.lang.Throwable -> L359
            goto L361
        L359:
            r13 = move-exception
            java.lang.String r1 = r13.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r13)
        L361:
            boolean r13 = com.mbridge.msdk.MBridgeConstans.INIT_UA_IN     // Catch: java.lang.Exception -> L38d
            if (r13 == 0) goto L372
            java.util.concurrent.ThreadPoolExecutor r13 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Exception -> L38d
            com.mbridge.msdk.foundation.controller.b$2 r1 = new com.mbridge.msdk.foundation.controller.b$2     // Catch: java.lang.Exception -> L38d
            r1.<init>(r12)     // Catch: java.lang.Exception -> L38d
            r13.execute(r1)     // Catch: java.lang.Exception -> L38d
            goto L392
        L372:
            android.os.Looper r13 = android.os.Looper.myLooper()     // Catch: java.lang.Exception -> L38d
            android.os.Looper r1 = android.os.Looper.getMainLooper()     // Catch: java.lang.Exception -> L38d
            if (r13 != r1) goto L389
            java.util.concurrent.ThreadPoolExecutor r13 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Exception -> L38d
            com.mbridge.msdk.foundation.controller.b$3 r1 = new com.mbridge.msdk.foundation.controller.b$3     // Catch: java.lang.Exception -> L38d
            r1.<init>(r12)     // Catch: java.lang.Exception -> L38d
            r13.execute(r1)     // Catch: java.lang.Exception -> L38d
            goto L392
        L389:
            r12.e()     // Catch: java.lang.Exception -> L38d
            goto L392
        L38d:
            java.lang.String r13 = "get app setting failed"
            com.mbridge.msdk.foundation.tools.z.d(r0, r13)
        L392:
            r12.c()
            android.content.Context r13 = r12.k
            com.mbridge.msdk.foundation.tools.ac.a(r13)
            r12.q = r4
            com.mbridge.msdk.rover.b r13 = com.mbridge.msdk.rover.b.a()
            r13.a(r14)
            r13.b()
        L3a6:
            com.mbridge.msdk.c.b r13 = com.mbridge.msdk.c.b.a()
            java.lang.String r0 = r12.n
            com.mbridge.msdk.c.a r13 = r13.g(r0)
            int r13 = r13.a()
            long r0 = (long) r13
            r2 = 1300(0x514, double:6.423E-321)
            int r13 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r13 == 0) goto L3c5
            android.os.Handler r13 = r12.i
            com.mbridge.msdk.foundation.controller.b$1 r2 = new com.mbridge.msdk.foundation.controller.b$1
            r2.<init>(r12, r14)
            r13.postDelayed(r2, r0)
        L3c5:
            return
    }

    public final void b() {
            r2 = this;
            android.os.Handler r0 = r2.i
            if (r0 == 0) goto L8
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
        L8:
            return
    }

    public final void c() {
            r2 = this;
            java.lang.Thread r0 = new java.lang.Thread
            com.mbridge.msdk.foundation.controller.b$5 r1 = new com.mbridge.msdk.foundation.controller.b$5
            r1.<init>(r2)
            r0.<init>(r1)
            r0.start()
            return
    }

    public final boolean d() {
            r4 = this;
            android.content.Context r0 = r4.k
            r1 = 1
            if (r0 == 0) goto L23
            java.util.concurrent.atomic.AtomicBoolean r2 = r4.t
            if (r2 != 0) goto L23
            r2 = 0
            java.lang.String r3 = "mb_optimization_setting"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r3, r2)
            java.lang.String r3 = "use_thread_pool"
            int r0 = r0.getInt(r3, r2)
            java.util.concurrent.atomic.AtomicBoolean r3 = new java.util.concurrent.atomic.AtomicBoolean
            r3.<init>(r1)
            r4.t = r3
            if (r0 != 0) goto L20
            r2 = r1
        L20:
            r3.set(r2)
        L23:
            java.util.concurrent.atomic.AtomicBoolean r0 = r4.t
            if (r0 == 0) goto L2c
            boolean r0 = r0.get()
            return r0
        L2c:
            return r1
    }
}
