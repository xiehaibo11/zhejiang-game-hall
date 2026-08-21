package com.mbridge.msdk.splash.c;

public final class c {
    private static java.lang.String a = "SplashLoadManager";
    private java.lang.String b;
    private java.lang.String c;
    private long d;
    private long e;
    private com.mbridge.msdk.splash.b.b f;
    private android.content.Context g;
    private com.mbridge.msdk.splash.view.MBSplashView h;
    private com.mbridge.msdk.c.d i;
    private boolean j;
    private int k;
    private int l;
    private int m;
    private java.lang.String n;
    private int o;
    private boolean p;
    private volatile boolean q;
    private com.mbridge.msdk.videocommon.listener.a r;
    private com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener s;
    private java.lang.String t;
    private int u;
    private java.lang.String v;
    private int w;
    private android.os.Handler x;
    private java.lang.Runnable y;










    static {
            return
    }

    public c(java.lang.String r3, java.lang.String r4, long r5) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.v = r0
            com.mbridge.msdk.splash.c.c$1 r0 = new com.mbridge.msdk.splash.c.c$1
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.x = r0
            com.mbridge.msdk.splash.c.c$2 r0 = new com.mbridge.msdk.splash.c.c$2
            r0.<init>(r2)
            r2.y = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            r2.g = r0
            r2.c = r3
            r2.b = r4
            r2.e = r5
            return
    }

    private com.mbridge.msdk.foundation.same.net.g.d a(int r9, java.lang.String r10) {
            r8 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            r1.append(r2)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.l()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r1)
            com.mbridge.msdk.foundation.same.net.g.d r2 = new com.mbridge.msdk.foundation.same.net.g.d
            r2.<init>()
            java.lang.String r3 = r8.b
            java.lang.String r4 = "splash"
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.d.a(r3, r4)
            android.content.Context r4 = r8.g
            java.lang.String r5 = r8.b
            java.lang.String r4 = com.mbridge.msdk.splash.a.a.a.a(r4, r5)
            android.content.Context r5 = r8.g
            java.lang.String r6 = r8.b
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.ae.b(r5, r6)
            java.lang.String r6 = com.mbridge.msdk.splash.a.a.a.a()
            java.lang.String r7 = "app_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r7, r0)
            java.lang.String r0 = r8.b
            java.lang.String r7 = "unit_id"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r7, r0)
            java.lang.String r0 = r8.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L67
            java.lang.String r0 = com.mbridge.msdk.MBridgeConstans.PLACEMENT_ID
            java.lang.String r7 = r8.c
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r0, r7)
        L67:
            java.lang.String r0 = "sign"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r9)
            java.lang.String r9 = ""
            r0.append(r9)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "req_type"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r1, r0)
            java.lang.String r0 = "1"
            java.lang.String r1 = "ad_num"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r1, r0)
            java.lang.String r1 = "tnum"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r1, r0)
            java.lang.String r1 = "only_impression"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r1, r0)
            java.lang.String r1 = "ping_mode"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r1, r0)
            java.lang.String r0 = "ttc_ids"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r0, r4)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.b
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r0, r3)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.c
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r0, r5)
            java.lang.String r0 = "install_ids"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r0, r6)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.a
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r0, r10)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r0 = 297(0x129, float:4.16E-43)
            r10.append(r0)
            r10.append(r9)
            java.lang.String r10 = r10.toString()
            java.lang.String r0 = "ad_type"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r0, r10)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            int r0 = r8.u
            r10.append(r0)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            java.lang.String r10 = "offset"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r10, r9)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            int r10 = r8.m
            r9.append(r10)
            java.lang.String r10 = "x"
            r9.append(r10)
            int r10 = r8.l
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            java.lang.String r10 = "unit_size"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r10, r9)
            return r2
    }

    static java.lang.String a(com.mbridge.msdk.splash.c.c r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    static java.lang.String a(com.mbridge.msdk.splash.c.c r0, java.lang.String r1) {
            r0.v = r1
            return r1
    }

    private void a(long r3) {
            r2 = this;
            android.os.Handler r0 = r2.x
            java.lang.Runnable r1 = r2.y
            r0.postDelayed(r1, r3)
            return
    }

    private void a(android.content.Context r4, java.lang.String r5, int r6) {
            r3 = this;
            if (r4 != 0) goto L8
            java.lang.String r4 = "Context is null"
            r3.a(r4, r5, r6)     // Catch: java.lang.Exception -> L71
            return
        L8:
            java.lang.String r0 = r3.b     // Catch: java.lang.Exception -> L71
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.a(r0)     // Catch: java.lang.Exception -> L71
            if (r0 == 0) goto L16
            java.lang.String r4 = "UnitId is null"
            r3.a(r4, r5, r6)     // Catch: java.lang.Exception -> L71
            return
        L16:
            java.lang.String r0 = com.mbridge.msdk.splash.c.c.a     // Catch: java.lang.Exception -> L71
            java.lang.String r1 = "load 开始准备请求参数"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L71
            java.lang.String r0 = r3.t     // Catch: java.lang.Exception -> L71
            com.mbridge.msdk.foundation.same.net.g.d r0 = r3.a(r6, r0)     // Catch: java.lang.Exception -> L71
            if (r0 != 0) goto L32
            java.lang.String r4 = com.mbridge.msdk.splash.c.c.a     // Catch: java.lang.Exception -> L71
            java.lang.String r0 = "load 请求参数为空 load失败"
            com.mbridge.msdk.foundation.tools.z.b(r4, r0)     // Catch: java.lang.Exception -> L71
            java.lang.String r4 = "Load param is null"
            r3.a(r4, r5, r6)     // Catch: java.lang.Exception -> L71
            return
        L32:
            if (r0 == 0) goto L3f
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L71
            if (r1 != 0) goto L3f
            java.lang.String r1 = "token"
            r0.a(r1, r5)     // Catch: java.lang.Exception -> L71
        L3f:
            java.lang.String r1 = r3.b     // Catch: java.lang.Exception -> L71
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.ae.g(r1)     // Catch: java.lang.Exception -> L71
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L71
            if (r2 != 0) goto L50
            java.lang.String r2 = "j"
            r0.a(r2, r1)     // Catch: java.lang.Exception -> L71
        L50:
            com.mbridge.msdk.splash.f.b r1 = new com.mbridge.msdk.splash.f.b     // Catch: java.lang.Exception -> L71
            r1.<init>(r4)     // Catch: java.lang.Exception -> L71
            com.mbridge.msdk.splash.c.c$3 r4 = new com.mbridge.msdk.splash.c.c$3     // Catch: java.lang.Exception -> L71
            r4.<init>(r3, r6, r5, r6)     // Catch: java.lang.Exception -> L71
            r4.a(r5)     // Catch: java.lang.Exception -> L71
            java.lang.String r2 = r3.b     // Catch: java.lang.Exception -> L71
            r4.setUnitId(r2)     // Catch: java.lang.Exception -> L71
            java.lang.String r2 = r3.c     // Catch: java.lang.Exception -> L71
            r4.setPlacementId(r2)     // Catch: java.lang.Exception -> L71
            r2 = 297(0x129, float:4.16E-43)
            r4.setAdType(r2)     // Catch: java.lang.Exception -> L71
            r2 = 1
            r1.choiceV3OrV5BySetting(r2, r0, r4, r5)     // Catch: java.lang.Exception -> L71
            goto L7d
        L71:
            r4 = move-exception
            r4.printStackTrace()
            java.lang.String r4 = "Load exception"
            r3.a(r4, r5, r6)
            r4 = 0
            r3.u = r4
        L7d:
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r3, int r4) {
            r2 = this;
            com.mbridge.msdk.splash.view.MBSplashView r0 = r2.h
            if (r0 == 0) goto L8
            r1 = 0
            r0.setDynamicView(r1)
        L8:
            boolean r0 = r3.isDynamicView()
            if (r0 == 0) goto L11
            r2.d(r3, r4)
        L11:
            com.mbridge.msdk.splash.view.MBSplashView r0 = r2.h
            boolean r0 = com.mbridge.msdk.splash.c.b.a(r0, r3)
            if (r0 == 0) goto L1d
            r2.b(r3, r4)
            goto L20
        L1d:
            r2.c(r3, r4)
        L20:
            return
    }

    static void a(com.mbridge.msdk.splash.c.c r0, com.mbridge.msdk.foundation.entity.CampaignEx r1, int r2) {
            r0.b(r1, r2)
            return
    }

    static void a(com.mbridge.msdk.splash.c.c r5, com.mbridge.msdk.foundation.entity.CampaignUnit r6, int r7, java.lang.String r8, java.lang.String r9) {
            r8 = 1
            r0 = 0
            if (r6 == 0) goto L8e
            java.util.ArrayList r1 = r6.getAds()
            if (r1 == 0) goto L8e
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.ArrayList r2 = r6.getAds()
            java.lang.Object r2 = r2.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            java.lang.String r3 = r5.b
            r2.setCampaignUnitId(r3)
            java.lang.Thread r3 = new java.lang.Thread
            com.mbridge.msdk.splash.c.c$4 r4 = new com.mbridge.msdk.splash.c.c$4
            r4.<init>(r5, r2)
            r3.<init>(r4)
            r3.start()
            java.lang.String r6 = r6.getSessionId()
            r5.t = r6
            int r6 = r2.getOfferType()
            r3 = 99
            if (r6 == r3) goto L8f
            java.lang.String r6 = r2.getAdZip()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L4d
            java.lang.String r6 = r2.getAdHtml()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L8f
        L4d:
            boolean r6 = com.mbridge.msdk.foundation.tools.ae.b(r2)
            if (r6 == 0) goto L65
            android.content.Context r6 = r5.g
            java.lang.String r3 = r2.getPackageName()
            boolean r6 = com.mbridge.msdk.foundation.tools.ae.c(r6, r3)
            if (r6 == 0) goto L61
            r6 = r8
            goto L62
        L61:
            r6 = 2
        L62:
            r2.setRtinsType(r6)
        L65:
            int r6 = r2.getWtick()
            if (r6 == r8) goto L8a
            android.content.Context r6 = r5.g
            java.lang.String r3 = r2.getPackageName()
            boolean r6 = com.mbridge.msdk.foundation.tools.ae.c(r6, r3)
            if (r6 != 0) goto L78
            goto L8a
        L78:
            boolean r6 = com.mbridge.msdk.foundation.tools.ae.b(r2)
            if (r6 == 0) goto L82
            r1.add(r2)
            goto L8f
        L82:
            java.lang.String r6 = r5.b
            int r3 = com.mbridge.msdk.foundation.same.a.E
            com.mbridge.msdk.foundation.tools.ae.a(r6, r2, r3)
            goto L8f
        L8a:
            r1.add(r2)
            goto L8f
        L8e:
            r1 = 0
        L8f:
            if (r1 == 0) goto L120
            int r6 = r1.size()
            if (r6 <= 0) goto L120
            int r6 = r5.u     // Catch: java.lang.Exception -> Lca
            int r6 = r6 + r8
            r5.u = r6     // Catch: java.lang.Exception -> Lca
            com.mbridge.msdk.c.d r9 = r5.i     // Catch: java.lang.Exception -> Lca
            if (r9 == 0) goto La8
            com.mbridge.msdk.c.d r9 = r5.i     // Catch: java.lang.Exception -> Lca
            int r9 = r9.v()     // Catch: java.lang.Exception -> Lca
            if (r6 <= r9) goto Lb1
        La8:
            java.lang.String r6 = com.mbridge.msdk.splash.c.c.a     // Catch: java.lang.Exception -> Lca
            java.lang.String r9 = "onload 重置offset为0"
            com.mbridge.msdk.foundation.tools.z.b(r6, r9)     // Catch: java.lang.Exception -> Lca
            r5.u = r0     // Catch: java.lang.Exception -> Lca
        Lb1:
            java.lang.String r6 = com.mbridge.msdk.splash.c.c.a     // Catch: java.lang.Exception -> Lca
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lca
            r9.<init>()     // Catch: java.lang.Exception -> Lca
            java.lang.String r2 = "onload 算出 下次的offset是:"
            r9.append(r2)     // Catch: java.lang.Exception -> Lca
            int r2 = r5.u     // Catch: java.lang.Exception -> Lca
            r9.append(r2)     // Catch: java.lang.Exception -> Lca
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> Lca
            com.mbridge.msdk.foundation.tools.z.b(r6, r9)     // Catch: java.lang.Exception -> Lca
            goto Lce
        Lca:
            r6 = move-exception
            r6.printStackTrace()
        Lce:
            java.lang.String r6 = com.mbridge.msdk.splash.c.c.a
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r2 = "onload load成功 size:"
            r9.append(r2)
            int r2 = r1.size()
            r9.append(r2)
            java.lang.String r9 = r9.toString()
            com.mbridge.msdk.foundation.tools.z.b(r6, r9)
            java.lang.Object r6 = r1.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = (com.mbridge.msdk.foundation.entity.CampaignEx) r6
            java.lang.String r9 = r6.getAdZip()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 == 0) goto L116
            java.lang.String r9 = r6.getAdHtml()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L10f
            java.lang.String r9 = r6.getAdHtml()
            java.lang.String r1 = "<MBTPLMARK>"
            boolean r9 = r9.contains(r1)
            if (r9 == 0) goto L10f
            goto L116
        L10f:
            r6.setHasMBTplMark(r0)
            r6.setIsMraid(r8)
            goto L11c
        L116:
            r6.setHasMBTplMark(r8)
            r6.setIsMraid(r0)
        L11c:
            r5.a(r6, r7)
            goto L12c
        L120:
            java.lang.String r6 = com.mbridge.msdk.splash.c.c.a
            java.lang.String r8 = "onload load失败 返回的compaign没有可以用的"
            com.mbridge.msdk.foundation.tools.z.b(r6, r8)
            java.lang.String r6 = "invalid  campaign"
            r5.a(r6, r9, r7)
        L12c:
            return
    }

    static void a(com.mbridge.msdk.splash.c.c r1, java.lang.String r2, int r3) {
            java.lang.String r0 = r1.n
            r1.a(r2, r0, r3)
            return
    }

    static void a(com.mbridge.msdk.splash.c.c r0, java.lang.String r1, com.mbridge.msdk.foundation.entity.CampaignEx r2, int r3) {
            r0.a(r1, r2, r3)
            return
    }

    static void a(com.mbridge.msdk.splash.c.c r0, java.lang.String r1, java.lang.String r2, int r3) {
            r0.a(r1, r2, r3)
            return
    }

    private void a(java.lang.String r9, int r10, java.lang.String r11) {
            r8 = this;
            com.mbridge.msdk.splash.view.MBSplashView r0 = r8.h
            java.lang.String r1 = r8.c
            java.lang.String r2 = r8.b
            boolean r4 = r8.j
            int r5 = r8.k
            r6 = 1
            r7 = 0
            r3 = r11
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = com.mbridge.msdk.splash.c.b.a(r0, r1, r2, r3, r4, r5, r6, r7)
            if (r11 == 0) goto L1e
            java.lang.String r9 = com.mbridge.msdk.splash.c.c.a
            java.lang.String r0 = "load failed cache "
            com.mbridge.msdk.foundation.tools.z.d(r9, r0)
            r8.a(r11, r10)
            goto L21
        L1e:
            r8.b(r9, r10)
        L21:
            return
    }

    private void a(java.lang.String r3, com.mbridge.msdk.foundation.entity.CampaignEx r4, int r5) {
            r2 = this;
            com.mbridge.msdk.splash.c.e$c r0 = new com.mbridge.msdk.splash.c.e$c
            r0.<init>()
            java.lang.String r1 = r2.b
            r0.c(r1)
            java.lang.String r1 = r2.c
            r0.b(r1)
            r0.a(r4)
            r0.a(r3)
            boolean r3 = r2.j
            r0.a(r3)
            int r3 = r2.k
            r0.a(r3)
            com.mbridge.msdk.splash.c.c$8 r3 = new com.mbridge.msdk.splash.c.c$8
            r3.<init>(r2, r4, r5)
            com.mbridge.msdk.splash.c.e r4 = com.mbridge.msdk.splash.c.e.a.a()
            com.mbridge.msdk.splash.view.MBSplashView r5 = r2.h
            r4.a(r5, r0, r3)
            return
    }

    private void a(java.lang.String r2, java.lang.String r3, int r4) {
            r1 = this;
            boolean r0 = r1.p
            if (r0 == 0) goto Lb
            r0 = 0
            r1.p = r0
            r1.a(r2, r4, r3)
            return
        Lb:
            r1.b(r2, r4)
            return
    }

    static int b(com.mbridge.msdk.splash.c.c r0) {
            int r0 = r0.o
            return r0
    }

    private void b(com.mbridge.msdk.foundation.entity.CampaignEx r2, int r3) {
            r1 = this;
            com.mbridge.msdk.splash.view.MBSplashView r0 = r1.h
            boolean r0 = com.mbridge.msdk.splash.c.b.a(r0, r2)
            if (r0 == 0) goto L22
            boolean r0 = r1.q
            if (r0 != 0) goto L22
            r1.d()
            boolean r0 = r1.p
            if (r0 == 0) goto L18
            java.lang.String r0 = r1.b
            com.mbridge.msdk.splash.c.b.a(r2, r0)
        L18:
            r0 = 1
            r1.q = r0
            com.mbridge.msdk.splash.b.b r0 = r1.f
            if (r0 == 0) goto L22
            r0.a(r2, r3)
        L22:
            return
    }

    static void b(com.mbridge.msdk.splash.c.c r9, com.mbridge.msdk.foundation.entity.CampaignEx r10, int r11) {
            boolean r0 = r10.isDynamicView()
            if (r0 == 0) goto Le6
            com.mbridge.msdk.splash.a.c$a r0 = new com.mbridge.msdk.splash.a.c$a
            r0.<init>()
            java.lang.String r1 = r9.b
            com.mbridge.msdk.splash.a.c$a r1 = r0.b(r1)
            java.lang.String r2 = r9.c
            com.mbridge.msdk.splash.a.c$a r1 = r1.a(r2)
            boolean r2 = r9.j
            com.mbridge.msdk.splash.a.c$a r1 = r1.a(r2)
            com.mbridge.msdk.splash.a.c$a r1 = r1.a(r10)
            int r2 = r9.k
            com.mbridge.msdk.splash.a.c$a r1 = r1.a(r2)
            int r2 = r9.w
            r1.h(r2)
            java.lang.String r1 = r10.getAdZip()     // Catch: java.lang.Throwable -> Lc9
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lc9
            if (r1 != 0) goto Ld3
            java.lang.String r1 = r10.getAdZip()     // Catch: java.lang.Throwable -> Lc9
            android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r2 = "hdbtn"
            java.lang.String r2 = r1.getQueryParameter(r2)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r3 = "alecfc"
            java.lang.String r3 = r1.getQueryParameter(r3)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r4 = "hdinfo"
            java.lang.String r4 = r1.getQueryParameter(r4)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r5 = "shake_show"
            java.lang.String r5 = r1.getQueryParameter(r5)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r6 = "shake_strength"
            java.lang.String r6 = r1.getQueryParameter(r6)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r7 = "shake_time"
            java.lang.String r7 = r1.getQueryParameter(r7)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r8 = "n_logo"
            java.lang.String r1 = r1.getQueryParameter(r8)     // Catch: java.lang.Throwable -> Lc9
            boolean r8 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lc9
            if (r8 != 0) goto L75
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> Lc9
            r0.b(r2)     // Catch: java.lang.Throwable -> Lc9
        L75:
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto L82
            int r2 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> Lc9
            r0.c(r2)     // Catch: java.lang.Throwable -> Lc9
        L82:
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto L8f
            int r2 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> Lc9
            r0.d(r2)     // Catch: java.lang.Throwable -> Lc9
        L8f:
            boolean r2 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto L9c
            int r2 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Throwable -> Lc9
            r0.e(r2)     // Catch: java.lang.Throwable -> Lc9
        L9c:
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto La9
            int r2 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Throwable -> Lc9
            r0.f(r2)     // Catch: java.lang.Throwable -> Lc9
        La9:
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto Lb6
            int r2 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Throwable -> Lc9
            r0.g(r2)     // Catch: java.lang.Throwable -> Lc9
        Lb6:
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lc9
            if (r2 != 0) goto Ld3
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> Lc9
            if (r1 != 0) goto Lc4
            r1 = 0
            goto Lc5
        Lc4:
            r1 = 1
        Lc5:
            r0.i(r1)     // Catch: java.lang.Throwable -> Lc9
            goto Ld3
        Lc9:
            r1 = move-exception
            java.lang.String r2 = com.mbridge.msdk.splash.c.c.a
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        Ld3:
            com.mbridge.msdk.splash.c.a r1 = com.mbridge.msdk.splash.c.a.a.a()
            com.mbridge.msdk.splash.view.MBSplashView r2 = r9.h
            com.mbridge.msdk.splash.a.c r3 = new com.mbridge.msdk.splash.a.c
            r3.<init>(r0)
            com.mbridge.msdk.splash.c.c$7 r0 = new com.mbridge.msdk.splash.c.c$7
            r0.<init>(r9, r10, r11)
            r1.a(r2, r3, r0)
        Le6:
            return
    }

    private void b(java.lang.String r3, int r4) {
            r2 = this;
            boolean r0 = r2.q
            if (r0 != 0) goto L18
            r2.d()
            java.lang.String r0 = com.mbridge.msdk.splash.c.c.a
            java.lang.String r1 = "real failed "
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            r0 = 1
            r2.q = r0
            com.mbridge.msdk.splash.b.b r0 = r2.f
            if (r0 == 0) goto L18
            r0.a(r3, r4)
        L18:
            return
    }

    static java.lang.String c() {
            java.lang.String r0 = com.mbridge.msdk.splash.c.c.a
            return r0
    }

    static java.lang.String c(com.mbridge.msdk.splash.c.c r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    private void c(com.mbridge.msdk.foundation.entity.CampaignEx r2, int r3) {
            r1 = this;
            com.mbridge.msdk.splash.view.MBSplashView r0 = r1.h
            r0.clearResState()
            java.lang.String r0 = r2.getAdZip()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L12
            r1.f(r2, r3)
        L12:
            boolean r0 = r2.isDynamicView()
            if (r0 != 0) goto L3f
            java.lang.String r0 = r2.getAdHtml()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L25
            r1.e(r2, r3)
        L25:
            java.lang.String r0 = r2.getVideoUrlEncode()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L32
            r1.g(r2, r3)
        L32:
            java.lang.String r0 = r2.getImageUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3f
            r1.d(r2, r3)
        L3f:
            return
    }

    static void c(com.mbridge.msdk.splash.c.c r2, com.mbridge.msdk.foundation.entity.CampaignEx r3, int r4) {
            com.mbridge.msdk.splash.view.MBSplashView r0 = r2.h
            boolean r0 = r0.isH5Ready()
            if (r0 != 0) goto L11
            com.mbridge.msdk.splash.view.MBSplashView r0 = r2.h
            r1 = 1
            r0.setH5Ready(r1)
            r2.b(r3, r4)
        L11:
            return
    }

    private void d() {
            r2 = this;
            android.os.Handler r0 = r2.x
            java.lang.Runnable r1 = r2.y
            r0.removeCallbacks(r1)
            return
    }

    private void d(com.mbridge.msdk.foundation.entity.CampaignEx r3, int r4) {
            r2 = this;
            com.mbridge.msdk.splash.view.MBSplashView r0 = r2.h
            com.mbridge.msdk.splash.c.c$5 r1 = new com.mbridge.msdk.splash.c.c$5
            r1.<init>(r2, r3, r4)
            com.mbridge.msdk.splash.c.b.a(r0, r3, r1)
            return
    }

    static void d(com.mbridge.msdk.splash.c.c r1) {
            r0 = 0
            r1.u = r0
            return
    }

    static android.content.Context e(com.mbridge.msdk.splash.c.c r0) {
            android.content.Context r0 = r0.g
            return r0
    }

    private void e(com.mbridge.msdk.foundation.entity.CampaignEx r9, int r10) {
            r8 = this;
            java.lang.String r0 = "6"
            java.lang.String r1 = ""
            r2 = 0
            java.lang.String r3 = r9.getAdHtml()     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> La7
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> La7
            r4.<init>(r3)     // Catch: java.lang.Throwable -> La5 java.lang.Exception -> La7
            boolean r3 = r4.exists()     // Catch: java.lang.Exception -> La2 java.lang.Throwable -> La5
            if (r3 != 0) goto L94
            com.mbridge.msdk.foundation.same.b.c r3 = com.mbridge.msdk.foundation.same.b.c.g     // Catch: java.lang.Exception -> La2 java.lang.Throwable -> La5
            java.lang.String r3 = com.mbridge.msdk.foundation.same.b.e.b(r3)     // Catch: java.lang.Exception -> La2 java.lang.Throwable -> La5
            java.lang.String r5 = r9.getAdHtml()     // Catch: java.lang.Exception -> La2 java.lang.Throwable -> La5
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.ak.a(r5)     // Catch: java.lang.Exception -> La2 java.lang.Throwable -> La5
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r5)     // Catch: java.lang.Exception -> La2 java.lang.Throwable -> La5
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> La2 java.lang.Throwable -> La5
            if (r6 == 0) goto L34
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> La2 java.lang.Throwable -> La5
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Exception -> La2 java.lang.Throwable -> La5
        L34:
            java.lang.String r6 = ".html"
            java.lang.String r5 = r5.concat(r6)     // Catch: java.lang.Exception -> La2 java.lang.Throwable -> La5
            java.io.File r6 = new java.io.File     // Catch: java.lang.Exception -> La2 java.lang.Throwable -> La5
            r6.<init>(r3, r5)     // Catch: java.lang.Exception -> La2 java.lang.Throwable -> La5
            boolean r3 = r6.exists()     // Catch: java.lang.Exception -> La0 java.lang.Throwable -> La5
            if (r3 != 0) goto L95
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Exception -> La0 java.lang.Throwable -> La5
            r3.<init>(r6)     // Catch: java.lang.Exception -> La0 java.lang.Throwable -> La5
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            r2.<init>()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            java.lang.String r4 = "<script>"
            r2.append(r4)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            com.mbridge.msdk.c.b.b r4 = com.mbridge.msdk.c.b.b.a()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            java.lang.String r4 = r4.b()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            r2.append(r4)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            java.lang.String r4 = "</script>"
            r2.append(r4)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            java.lang.String r4 = r9.getAdHtml()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            r2.append(r4)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            java.lang.String r4 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            java.lang.String r2 = com.iab.omid.library.mmadbridge.ScriptInjector.injectScriptContentIntoHtml(r4, r2)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            boolean r4 = r9.isActiveOm()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            if (r4 == 0) goto L7f
            java.lang.String r2 = com.mbridge.msdk.a.b.a(r2)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
        L7f:
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            r3.write(r2)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            r3.flush()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L8f
            r2 = r3
            goto L95
        L8b:
            r9 = move-exception
            r2 = r3
            goto Lf5
        L8f:
            r2 = move-exception
            r7 = r3
            r3 = r2
            r2 = r7
            goto La9
        L94:
            r6 = r4
        L95:
            java.lang.String r3 = r8.b     // Catch: java.lang.Exception -> La0 java.lang.Throwable -> La5
            com.mbridge.msdk.foundation.same.report.c.a(r9, r1, r3, r0)     // Catch: java.lang.Exception -> La0 java.lang.Throwable -> La5
            if (r2 == 0) goto Lbb
        L9c:
            r2.close()     // Catch: java.lang.Exception -> Lfb
            goto Lbb
        La0:
            r3 = move-exception
            goto La9
        La2:
            r3 = move-exception
            r6 = r4
            goto La9
        La5:
            r9 = move-exception
            goto Lf5
        La7:
            r3 = move-exception
            r6 = r2
        La9:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> La5
            r9.setMraid(r1)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = r3.getMessage()     // Catch: java.lang.Throwable -> La5
            java.lang.String r3 = r8.b     // Catch: java.lang.Throwable -> La5
            com.mbridge.msdk.foundation.same.report.c.a(r9, r1, r3, r0)     // Catch: java.lang.Throwable -> La5
            if (r2 == 0) goto Lbb
            goto L9c
        Lbb:
            boolean r0 = r6.exists()     // Catch: java.lang.Exception -> Lfb
            if (r0 == 0) goto Led
            boolean r0 = r6.isFile()     // Catch: java.lang.Exception -> Lfb
            if (r0 == 0) goto Led
            boolean r0 = r6.canRead()     // Catch: java.lang.Exception -> Lfb
            if (r0 == 0) goto Led
            java.lang.String r0 = r6.getAbsolutePath()     // Catch: java.lang.Exception -> Lfb
            r9.setAdHtml(r0)     // Catch: java.lang.Exception -> Lfb
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfb
            r0.<init>()     // Catch: java.lang.Exception -> Lfb
            java.lang.String r1 = "file:////"
            r0.append(r1)     // Catch: java.lang.Exception -> Lfb
            java.lang.String r1 = r6.getAbsolutePath()     // Catch: java.lang.Exception -> Lfb
            r0.append(r1)     // Catch: java.lang.Exception -> Lfb
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lfb
            r8.a(r0, r9, r10)     // Catch: java.lang.Exception -> Lfb
            goto L105
        Led:
            java.lang.String r9 = "html file write failed"
            java.lang.String r0 = r8.n     // Catch: java.lang.Exception -> Lfb
            r8.a(r9, r0, r10)     // Catch: java.lang.Exception -> Lfb
            goto L105
        Lf5:
            if (r2 == 0) goto Lfa
            r2.close()     // Catch: java.lang.Exception -> Lfb
        Lfa:
            throw r9     // Catch: java.lang.Exception -> Lfb
        Lfb:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            java.lang.String r0 = r8.n
            r8.a(r9, r0, r10)
        L105:
            return
    }

    static com.mbridge.msdk.splash.view.MBSplashView f(com.mbridge.msdk.splash.c.c r0) {
            com.mbridge.msdk.splash.view.MBSplashView r0 = r0.h
            return r0
    }

    private void f(com.mbridge.msdk.foundation.entity.CampaignEx r2, int r3) {
            r1 = this;
            boolean r0 = r2.isDynamicView()
            if (r0 == 0) goto Le
            java.lang.String r2 = r2.getAdZip()
            com.mbridge.msdk.foundation.tools.i.a(r2)
            goto L22
        Le:
            com.mbridge.msdk.splash.c.c$6 r0 = new com.mbridge.msdk.splash.c.c$6
            r0.<init>(r1, r2, r3)
            r1.s = r0
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r3 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r2 = r2.getAdZip()
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener r0 = r1.s
            r3.downloadH5Res(r2, r0)
        L22:
            return
    }

    static android.os.Handler g(com.mbridge.msdk.splash.c.c r0) {
            android.os.Handler r0 = r0.x
            return r0
    }

    private void g(com.mbridge.msdk.foundation.entity.CampaignEx r8, int r9) {
            r7 = this;
            com.mbridge.msdk.splash.c.c$9 r0 = new com.mbridge.msdk.splash.c.c$9
            r0.<init>(r7, r8)
            r7.r = r0
            java.util.concurrent.CopyOnWriteArrayList r4 = new java.util.concurrent.CopyOnWriteArrayList
            r4.<init>()
            r4.add(r8)
            com.mbridge.msdk.videocommon.download.b r1 = com.mbridge.msdk.videocommon.download.b.getInstance()
            android.content.Context r2 = r7.g
            java.lang.String r3 = r7.b
            com.mbridge.msdk.videocommon.listener.a r6 = r7.r
            r5 = 297(0x129, float:4.16E-43)
            r1.createUnitCache(r2, r3, r4, r5, r6)
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()
            java.lang.String r1 = r7.b
            boolean r2 = r8.isBidCampaign()
            r3 = 297(0x129, float:4.16E-43)
            boolean r0 = r0.a(r3, r1, r2)
            if (r0 != 0) goto L3a
            com.mbridge.msdk.videocommon.download.b r8 = com.mbridge.msdk.videocommon.download.b.getInstance()
            java.lang.String r9 = r7.b
            r8.load(r9)
            goto L43
        L3a:
            com.mbridge.msdk.splash.view.MBSplashView r0 = r7.h
            r1 = 1
            r0.setVideoReady(r1)
            r7.b(r8, r9)
        L43:
            return
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.v
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public final void a(int r1, int r2) {
            r0 = this;
            r0.m = r1
            r0.l = r2
            return
    }

    public final void a(com.mbridge.msdk.c.d r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public final void a(com.mbridge.msdk.splash.b.b r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final void a(com.mbridge.msdk.splash.view.MBSplashView r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final void a(java.lang.String r10, int r11) {
            r9 = this;
            r0 = 0
            r9.q = r0
            r9.n = r10
            r9.o = r11
            com.mbridge.msdk.splash.view.MBSplashView r1 = r9.h
            java.lang.String r2 = r9.c
            java.lang.String r3 = r9.b
            boolean r5 = r9.j
            int r6 = r9.k
            r7 = 0
            r8 = 0
            r4 = r10
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = com.mbridge.msdk.splash.c.b.a(r1, r2, r3, r4, r5, r6, r7, r8)
            r2 = 0
            if (r1 == 0) goto L21
            long r4 = r1.getTimestamp()
            goto L22
        L21:
            r4 = r2
        L22:
            com.mbridge.msdk.c.d r6 = r9.i
            int r6 = r6.n()
            r7 = 1
            if (r6 != r7) goto L33
            if (r11 == r7) goto L33
            if (r1 == 0) goto L33
            r9.a(r1, r11)
            return
        L33:
            r9.p = r7
            if (r11 != r7) goto L5a
            com.mbridge.msdk.c.d r6 = r9.i
            java.util.List r6 = r6.s()
            if (r6 == 0) goto L55
            int r7 = r6.size()
            if (r7 <= 0) goto L55
            java.lang.Object r0 = r6.get(r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            int r0 = r0 * 1000
            long r6 = (long) r0
            r9.d = r6
            goto L6c
        L55:
            r6 = 30000(0x7530, double:1.4822E-319)
            r9.d = r6
            goto L6c
        L5a:
            long r6 = r9.e
            int r0 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r0 > 0) goto L6a
            com.mbridge.msdk.c.d r0 = r9.i
            int r0 = r0.o()
            long r6 = (long) r0
            r9.d = r6
            goto L6c
        L6a:
            r9.d = r6
        L6c:
            com.mbridge.msdk.c.d r0 = r9.i
            if (r0 == 0) goto L9b
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 <= 0) goto L9b
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 == 0) goto L9b
            com.mbridge.msdk.c.d r0 = r9.i
            int r0 = r0.x()
            int r0 = r0 * 1000
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r4
            long r4 = (long) r0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L97
            long r0 = r9.d
            r9.a(r0)
            android.content.Context r0 = r9.g
            r9.a(r0, r10, r11)
            goto La5
        L97:
            r9.a(r1, r11)
            goto La5
        L9b:
            long r0 = r9.d
            r9.a(r0)
            android.content.Context r0 = r9.g
            r9.a(r0, r10, r11)
        La5:
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final void b() {
            r2 = this;
            com.mbridge.msdk.splash.b.b r0 = r2.f
            r1 = 0
            if (r0 == 0) goto L7
            r2.f = r1
        L7:
            com.mbridge.msdk.videocommon.listener.a r0 = r2.r
            if (r0 == 0) goto Ld
            r2.r = r1
        Ld:
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener r0 = r2.s
            if (r0 == 0) goto L13
            r2.s = r1
        L13:
            return
    }

    public final void b(int r1) {
            r0 = this;
            r0.w = r1
            return
    }
}
