package com.mbridge.msdk.advanced.b;

public final class a {
    private static java.lang.String a = "NativeAdvancedLoadManager";
    private java.lang.String b;
    private java.lang.String c;
    private long d;
    private com.mbridge.msdk.advanced.a.a e;
    private android.content.Context f;
    private com.mbridge.msdk.advanced.view.MBNativeAdvancedView g;
    private com.mbridge.msdk.c.d h;
    private com.mbridge.msdk.foundation.entity.CampaignEx i;
    private int j;
    private int k;
    private int l;
    private int m;
    private java.lang.String n;
    private int o;
    private boolean p;
    private volatile boolean q;
    private com.mbridge.msdk.videocommon.listener.a r;
    private com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener s;
    private com.mbridge.msdk.foundation.download.download.H5DownLoadManager.ZipDownloadListener t;
    private java.lang.String u;
    private int v;
    private java.lang.String w;
    private android.os.Handler x;
    private java.lang.Runnable y;













    static {
            return
    }

    public a(java.lang.String r1, java.lang.String r2, long r3) {
            r0 = this;
            r0.<init>()
            java.lang.String r3 = ""
            r0.w = r3
            com.mbridge.msdk.advanced.b.a$1 r3 = new com.mbridge.msdk.advanced.b.a$1
            android.os.Looper r4 = android.os.Looper.getMainLooper()
            r3.<init>(r0, r4)
            r0.x = r3
            com.mbridge.msdk.advanced.b.a$5 r3 = new com.mbridge.msdk.advanced.b.a$5
            r3.<init>(r0)
            r0.y = r3
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            r0.f = r3
            r0.c = r1
            r0.b = r2
            return
    }

    static com.mbridge.msdk.advanced.view.MBNativeAdvancedView a(com.mbridge.msdk.advanced.b.a r0) {
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r0.g
            return r0
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
            java.lang.String r4 = "h5_native"
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.d.a(r3, r4)
            android.content.Context r4 = r8.f
            java.lang.String r5 = r8.b
            java.lang.String r4 = com.mbridge.msdk.advanced.common.a.a.a(r4, r5)
            android.content.Context r5 = r8.f
            java.lang.String r6 = r8.b
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.ae.b(r5, r6)
            java.lang.String r6 = com.mbridge.msdk.advanced.common.a.a.a()
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
            r0 = 298(0x12a, float:4.18E-43)
            r10.append(r0)
            r10.append(r9)
            java.lang.String r10 = r10.toString()
            java.lang.String r0 = "ad_type"
            com.mbridge.msdk.foundation.same.net.f.b.a(r2, r0, r10)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            int r0 = r8.v
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

    static java.lang.String a(com.mbridge.msdk.advanced.b.a r0, java.lang.String r1) {
            r0.w = r1
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
            r3.a(r4, r5, r6)     // Catch: java.lang.Exception -> L81
            return
        L8:
            java.lang.String r0 = r3.b     // Catch: java.lang.Exception -> L81
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.a(r0)     // Catch: java.lang.Exception -> L81
            if (r0 == 0) goto L16
            java.lang.String r4 = "UnitId is null"
            r3.a(r4, r5, r6)     // Catch: java.lang.Exception -> L81
            return
        L16:
            java.lang.String r0 = r3.b     // Catch: java.lang.Throwable -> L1c
            com.mbridge.msdk.advanced.b.c.a(r0)     // Catch: java.lang.Throwable -> L1c
            goto L26
        L1c:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.advanced.b.a.a     // Catch: java.lang.Exception -> L81
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Exception -> L81
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Exception -> L81
        L26:
            java.lang.String r0 = com.mbridge.msdk.advanced.b.a.a     // Catch: java.lang.Exception -> L81
            java.lang.String r1 = "load 开始准备请求参数"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L81
            java.lang.String r0 = r3.u     // Catch: java.lang.Exception -> L81
            com.mbridge.msdk.foundation.same.net.g.d r0 = r3.a(r6, r0)     // Catch: java.lang.Exception -> L81
            if (r0 != 0) goto L42
            java.lang.String r4 = com.mbridge.msdk.advanced.b.a.a     // Catch: java.lang.Exception -> L81
            java.lang.String r0 = "load 请求参数为空 load失败"
            com.mbridge.msdk.foundation.tools.z.b(r4, r0)     // Catch: java.lang.Exception -> L81
            java.lang.String r4 = "Load param is null"
            r3.a(r4, r5, r6)     // Catch: java.lang.Exception -> L81
            return
        L42:
            if (r0 == 0) goto L4f
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L81
            if (r1 != 0) goto L4f
            java.lang.String r1 = "token"
            r0.a(r1, r5)     // Catch: java.lang.Exception -> L81
        L4f:
            java.lang.String r1 = r3.b     // Catch: java.lang.Exception -> L81
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.ae.g(r1)     // Catch: java.lang.Exception -> L81
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L81
            if (r2 != 0) goto L60
            java.lang.String r2 = "j"
            r0.a(r2, r1)     // Catch: java.lang.Exception -> L81
        L60:
            com.mbridge.msdk.advanced.e.a r1 = new com.mbridge.msdk.advanced.e.a     // Catch: java.lang.Exception -> L81
            r1.<init>(r4)     // Catch: java.lang.Exception -> L81
            com.mbridge.msdk.advanced.b.a$6 r4 = new com.mbridge.msdk.advanced.b.a$6     // Catch: java.lang.Exception -> L81
            r4.<init>(r3, r6, r5, r6)     // Catch: java.lang.Exception -> L81
            r4.a(r5)     // Catch: java.lang.Exception -> L81
            java.lang.String r2 = r3.b     // Catch: java.lang.Exception -> L81
            r4.setUnitId(r2)     // Catch: java.lang.Exception -> L81
            java.lang.String r2 = r3.c     // Catch: java.lang.Exception -> L81
            r4.setPlacementId(r2)     // Catch: java.lang.Exception -> L81
            r2 = 298(0x12a, float:4.18E-43)
            r4.setAdType(r2)     // Catch: java.lang.Exception -> L81
            r2 = 1
            r1.choiceV3OrV5BySetting(r2, r0, r4, r5)     // Catch: java.lang.Exception -> L81
            goto L8d
        L81:
            r4 = move-exception
            r4.printStackTrace()
            java.lang.String r4 = "Load exception"
            r3.a(r4, r5, r6)
            r4 = 0
            r3.v = r4
        L8d:
            return
    }

    static void a(com.mbridge.msdk.advanced.b.a r0, com.mbridge.msdk.foundation.entity.CampaignEx r1, int r2) {
            r0.b(r1, r2)
            return
    }

    static void a(com.mbridge.msdk.advanced.b.a r0, com.mbridge.msdk.foundation.entity.CampaignEx r1, java.lang.String r2, int r3) {
            r0.a(r1, r2, r3)
            return
    }

    static void a(com.mbridge.msdk.advanced.b.a r5, com.mbridge.msdk.foundation.entity.CampaignUnit r6, int r7, java.lang.String r8, java.lang.String r9) {
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
            com.mbridge.msdk.advanced.b.a$7 r4 = new com.mbridge.msdk.advanced.b.a$7
            r4.<init>(r5, r2)
            r3.<init>(r4)
            r3.start()
            java.lang.String r6 = r6.getSessionId()
            r5.u = r6
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
            android.content.Context r6 = r5.f
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
            android.content.Context r6 = r5.f
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
            int r6 = r5.v     // Catch: java.lang.Exception -> Lca
            int r6 = r6 + r8
            r5.v = r6     // Catch: java.lang.Exception -> Lca
            com.mbridge.msdk.c.d r9 = r5.h     // Catch: java.lang.Exception -> Lca
            if (r9 == 0) goto La8
            com.mbridge.msdk.c.d r9 = r5.h     // Catch: java.lang.Exception -> Lca
            int r9 = r9.v()     // Catch: java.lang.Exception -> Lca
            if (r6 <= r9) goto Lb1
        La8:
            java.lang.String r6 = com.mbridge.msdk.advanced.b.a.a     // Catch: java.lang.Exception -> Lca
            java.lang.String r9 = "onload 重置offset为0"
            com.mbridge.msdk.foundation.tools.z.b(r6, r9)     // Catch: java.lang.Exception -> Lca
            r5.v = r0     // Catch: java.lang.Exception -> Lca
        Lb1:
            java.lang.String r6 = com.mbridge.msdk.advanced.b.a.a     // Catch: java.lang.Exception -> Lca
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lca
            r9.<init>()     // Catch: java.lang.Exception -> Lca
            java.lang.String r2 = "onload 算出 下次的offset是:"
            r9.append(r2)     // Catch: java.lang.Exception -> Lca
            int r2 = r5.v     // Catch: java.lang.Exception -> Lca
            r9.append(r2)     // Catch: java.lang.Exception -> Lca
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> Lca
            com.mbridge.msdk.foundation.tools.z.b(r6, r9)     // Catch: java.lang.Exception -> Lca
            goto Lce
        Lca:
            r6 = move-exception
            r6.printStackTrace()
        Lce:
            java.lang.String r6 = com.mbridge.msdk.advanced.b.a.a
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
            java.lang.String r6 = com.mbridge.msdk.advanced.b.a.a
            java.lang.String r8 = "onload load失败 返回的compaign没有可以用的"
            com.mbridge.msdk.foundation.tools.z.b(r6, r8)
            java.lang.String r6 = "invalid  campaign"
            r5.a(r6, r9, r7)
        L12c:
            return
    }

    static void a(com.mbridge.msdk.advanced.b.a r10, java.lang.String r11, com.mbridge.msdk.foundation.entity.CampaignEx r12, int r13) {
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r10.g
            if (r0 == 0) goto Ld1
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r0.getAdvancedNativeWebview()
            if (r0 == 0) goto Ld1
            com.mbridge.msdk.advanced.common.c r0 = com.mbridge.msdk.advanced.common.c.a()
            java.lang.String r1 = r12.getId()
            com.mbridge.msdk.advanced.common.c r0 = r0.c(r1)
            java.lang.String r1 = r12.getRequestId()
            com.mbridge.msdk.advanced.common.c r0 = r0.d(r1)
            java.lang.String r1 = r12.getRequestIdNotice()
            com.mbridge.msdk.advanced.common.c r0 = r0.g(r1)
            java.lang.String r1 = r10.b
            com.mbridge.msdk.advanced.common.c r0 = r0.b(r1)
            boolean r1 = r12.isBidCampaign()
            com.mbridge.msdk.advanced.common.c r0 = r0.a(r1)
            java.lang.String r1 = r10.b
            com.mbridge.msdk.advanced.d.a.a(r0, r1)
            com.mbridge.msdk.advanced.js.a r0 = new com.mbridge.msdk.advanced.js.a
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r1 = r10.g
            android.content.Context r1 = r1.getContext()
            java.lang.String r2 = r10.c
            java.lang.String r3 = r10.b
            r0.<init>(r1, r2, r3)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r1.add(r12)
            r0.a(r1)
            int r1 = r10.j
            r0.a(r1)
            int r1 = r10.k
            r0.b(r1)
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r1 = r10.g
            r1.setAdvancedNativeJSBridgeImpl(r0)
            long r0 = java.lang.System.currentTimeMillis()
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r2 = r10.g
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r8 = r2.getAdvancedNativeWebview()
            if (r8 != 0) goto L74
            java.lang.String r11 = "webview is null"
            r10.a(r12, r11, r13)
            goto Ld1
        L74:
            if (r8 == 0) goto L82
            boolean r2 = r8.isDestoryed()
            if (r2 == 0) goto L82
            java.lang.String r11 = "webview is destroyed"
            r10.a(r12, r11, r13)
            goto Ld1
        L82:
            com.mbridge.msdk.advanced.b.a$2 r9 = new com.mbridge.msdk.advanced.b.a$2
            r2 = r9
            r3 = r10
            r4 = r12
            r5 = r13
            r6 = r0
            r2.<init>(r3, r4, r5, r6)
            r8.setWebViewListener(r9)
            boolean r2 = r8.isDestoryed()
            if (r2 != 0) goto Lb8
            java.lang.String r12 = com.mbridge.msdk.advanced.b.a.a
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r0 = "=======开始渲染: "
            r13.append(r0)
            r13.append(r11)
            java.lang.String r13 = r13.toString()
            com.mbridge.msdk.foundation.tools.z.d(r12, r13)
            android.os.Handler r12 = r10.x
            if (r12 == 0) goto Ld1
            com.mbridge.msdk.advanced.b.a$3 r13 = new com.mbridge.msdk.advanced.b.a$3
            r13.<init>(r10, r8, r11)
            r12.post(r13)
            goto Ld1
        Lb8:
            java.lang.String r11 = r10.n
            java.lang.String r2 = "webview has destory"
            r10.a(r2, r11, r13)
            com.mbridge.msdk.foundation.controller.a r11 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r11.j()
            java.lang.String r4 = r10.b
            r8 = 3
            java.lang.String r5 = "webview had destory"
            r3 = r12
            r6 = r0
            com.mbridge.msdk.advanced.d.a.a(r2, r3, r4, r5, r6, r8)
        Ld1:
            return
    }

    static void a(com.mbridge.msdk.advanced.b.a r0, java.lang.String r1, java.lang.String r2, int r3) {
            r0.a(r1, r2, r3)
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r4, int r5) {
            r3 = this;
            r3.i = r4
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r3.g
            java.lang.String r1 = r3.c
            java.lang.String r2 = r3.b
            boolean r0 = com.mbridge.msdk.advanced.b.c.a(r0, r4, r1, r2)
            if (r0 == 0) goto L12
            r3.b(r4, r5)
            goto L15
        L12:
            r3.c(r4, r5)
        L15:
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r2, java.lang.String r3, int r4) {
            r1 = this;
            java.lang.String r0 = r1.n
            r1.a(r3, r0, r4)
            r4 = 2
            r1.b(r2, r3, r4)
            return
    }

    private void a(java.lang.String r8, int r9, java.lang.String r10) {
            r7 = this;
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r7.g
            java.lang.String r1 = r7.c
            java.lang.String r2 = r7.b
            int r4 = r7.j
            r5 = 1
            r6 = 1
            r3 = r10
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = com.mbridge.msdk.advanced.b.c.a(r0, r1, r2, r3, r4, r5, r6)
            if (r10 == 0) goto L1c
            java.lang.String r8 = com.mbridge.msdk.advanced.b.a.a
            java.lang.String r0 = "load failed cache "
            com.mbridge.msdk.foundation.tools.z.d(r8, r0)
            r7.a(r10, r9)
            goto L1f
        L1c:
            r7.b(r8, r9)
        L1f:
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

    static int b(com.mbridge.msdk.advanced.b.a r0) {
            int r0 = r0.o
            return r0
    }

    static void b(com.mbridge.msdk.advanced.b.a r1, com.mbridge.msdk.foundation.entity.CampaignEx r2, int r3) {
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r1.g
            boolean r0 = r0.isH5Ready()
            if (r0 == 0) goto L11
            r1.b(r2, r3)
            r3 = 1
            java.lang.String r0 = ""
            r1.b(r2, r0, r3)
        L11:
            return
    }

    private void b(com.mbridge.msdk.foundation.entity.CampaignEx r4, int r5) {
            r3 = this;
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r3.g
            java.lang.String r1 = r3.c
            java.lang.String r2 = r3.b
            boolean r0 = com.mbridge.msdk.advanced.b.c.a(r0, r4, r1, r2)
            if (r0 == 0) goto L22
            boolean r0 = r3.q
            if (r0 != 0) goto L22
            r3.d()
            java.lang.String r0 = r3.b
            com.mbridge.msdk.advanced.b.c.a(r4, r0)
            r0 = 1
            r3.q = r0
            com.mbridge.msdk.advanced.a.a r0 = r3.e
            if (r0 == 0) goto L22
            r0.a(r4, r5)
        L22:
            return
    }

    private void b(com.mbridge.msdk.foundation.entity.CampaignEx r3, java.lang.String r4, int r5) {
            r2 = this;
            com.mbridge.msdk.advanced.common.c r0 = com.mbridge.msdk.advanced.common.c.a()
            java.lang.String r1 = r3.getId()
            com.mbridge.msdk.advanced.common.c r0 = r0.c(r1)
            java.lang.String r1 = r2.b
            com.mbridge.msdk.advanced.common.c r0 = r0.b(r1)
            java.lang.String r1 = r3.getRequestId()
            com.mbridge.msdk.advanced.common.c r0 = r0.d(r1)
            java.lang.String r1 = r3.getRequestIdNotice()
            com.mbridge.msdk.advanced.common.c r0 = r0.g(r1)
            com.mbridge.msdk.advanced.common.c r4 = r0.f(r4)
            com.mbridge.msdk.advanced.common.c r4 = r4.b(r5)
            boolean r3 = r3.isBidCampaign()
            com.mbridge.msdk.advanced.common.c r3 = r4.a(r3)
            java.lang.String r4 = r2.b
            com.mbridge.msdk.advanced.d.a.b(r3, r4)
            return
    }

    private void b(java.lang.String r4, int r5) {
            r3 = this;
            boolean r0 = r3.q
            if (r0 != 0) goto L27
            r3.d()
            java.lang.String r0 = com.mbridge.msdk.advanced.b.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "real failed: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            r0 = 1
            r3.q = r0
            com.mbridge.msdk.advanced.a.a r0 = r3.e
            if (r0 == 0) goto L27
            r0.a(r4, r5)
        L27:
            return
    }

    static java.lang.String c() {
            java.lang.String r0 = com.mbridge.msdk.advanced.b.a.a
            return r0
    }

    static java.lang.String c(com.mbridge.msdk.advanced.b.a r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    private void c(com.mbridge.msdk.foundation.entity.CampaignEx r4, int r5) {
            r3 = this;
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r3.g
            if (r0 == 0) goto L7
            r0.clearResState()
        L7:
            java.lang.String r0 = r4.getAdZip()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2e
            java.lang.String r0 = com.mbridge.msdk.advanced.b.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "开始下载zip： "
            r1.append(r2)
            java.lang.String r2 = r4.getAdZip()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            r3.h(r4, r5)
        L2e:
            java.lang.String r0 = r4.getAdHtml()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L55
            java.lang.String r0 = com.mbridge.msdk.advanced.b.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "开始下载HTML： "
            r1.append(r2)
            java.lang.String r2 = r4.getAdHtml()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            r3.g(r4, r5)
        L55:
            java.lang.String r0 = r4.getVideoUrlEncode()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L7c
            java.lang.String r0 = com.mbridge.msdk.advanced.b.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "开始下载Video： "
            r1.append(r2)
            java.lang.String r2 = r4.getVideoUrlEncode()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            r3.i(r4, r5)
        L7c:
            java.lang.String r0 = r4.getImageUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto La3
            java.lang.String r0 = com.mbridge.msdk.advanced.b.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "开始下载image： "
            r1.append(r2)
            java.lang.String r2 = r4.getImageUrl()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            r3.f(r4, r5)
        La3:
            java.lang.String r0 = r4.getendcard_url()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lca
            java.lang.String r0 = com.mbridge.msdk.advanced.b.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "开始下载EndCard： "
            r1.append(r2)
            java.lang.String r2 = r4.getendcard_url()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            r3.e(r4, r5)
        Lca:
            java.lang.String r0 = r4.getGifUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lf1
            java.lang.String r0 = com.mbridge.msdk.advanced.b.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "开始下载gitUrl： "
            r1.append(r2)
            java.lang.String r2 = r4.getGifUrl()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            r3.d(r4, r5)
        Lf1:
            return
    }

    static java.lang.String d(com.mbridge.msdk.advanced.b.a r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    private void d() {
            r2 = this;
            android.os.Handler r0 = r2.x
            java.lang.Runnable r1 = r2.y
            r0.removeCallbacks(r1)
            return
    }

    private void d(com.mbridge.msdk.foundation.entity.CampaignEx r4, int r5) {
            r3 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            java.lang.String r1 = r4.getGifUrl()
            com.mbridge.msdk.advanced.b.a$8 r2 = new com.mbridge.msdk.advanced.b.a$8
            r2.<init>(r3, r4, r5)
            r0.a(r1, r2)
            return
    }

    static android.os.Handler e(com.mbridge.msdk.advanced.b.a r0) {
            android.os.Handler r0 = r0.x
            return r0
    }

    private void e(com.mbridge.msdk.foundation.entity.CampaignEx r2, int r3) {
            r1 = this;
            com.mbridge.msdk.advanced.b.a$9 r0 = new com.mbridge.msdk.advanced.b.a$9
            r0.<init>(r1, r2, r3)
            r1.t = r0
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r3 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r2 = r2.getendcard_url()
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener r0 = r1.t
            r3.downloadH5Res(r2, r0)
            return
    }

    static void f(com.mbridge.msdk.advanced.b.a r1) {
            r0 = 0
            r1.v = r0
            return
    }

    private void f(com.mbridge.msdk.foundation.entity.CampaignEx r4, int r5) {
            r3 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            java.lang.String r1 = r4.getImageUrl()
            com.mbridge.msdk.advanced.b.a$10 r2 = new com.mbridge.msdk.advanced.b.a$10
            r2.<init>(r3, r4, r5)
            r0.a(r1, r2)
            return
    }

    static android.content.Context g(com.mbridge.msdk.advanced.b.a r0) {
            android.content.Context r0 = r0.f
            return r0
    }

    private void g(com.mbridge.msdk.foundation.entity.CampaignEx r9, int r10) {
            r8 = this;
            java.lang.String r0 = "8"
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
            goto Lf9
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
            r2.close()     // Catch: java.lang.Exception -> Lff
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
            goto Lf9
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
            boolean r0 = r6.exists()     // Catch: java.lang.Exception -> Lff
            if (r0 == 0) goto Lea
            boolean r0 = r6.isFile()     // Catch: java.lang.Exception -> Lff
            if (r0 == 0) goto Lea
            boolean r0 = r6.canRead()     // Catch: java.lang.Exception -> Lff
            if (r0 == 0) goto Lea
            java.lang.String r0 = r6.getAbsolutePath()     // Catch: java.lang.Exception -> Lff
            r9.setAdHtml(r0)     // Catch: java.lang.Exception -> Lff
            java.lang.String r0 = com.mbridge.msdk.advanced.b.a.a     // Catch: java.lang.Exception -> Lff
            java.lang.String r1 = "开始渲染 HTML： "
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> Lff
            android.os.Handler r0 = r8.x     // Catch: java.lang.Exception -> Lff
            if (r0 == 0) goto L109
            android.os.Handler r0 = r8.x     // Catch: java.lang.Exception -> Lff
            com.mbridge.msdk.advanced.b.a$11 r1 = new com.mbridge.msdk.advanced.b.a$11     // Catch: java.lang.Exception -> Lff
            r1.<init>(r8, r6, r9, r10)     // Catch: java.lang.Exception -> Lff
            r0.post(r1)     // Catch: java.lang.Exception -> Lff
            goto L109
        Lea:
            java.lang.String r9 = com.mbridge.msdk.advanced.b.a.a     // Catch: java.lang.Exception -> Lff
            java.lang.String r0 = "渲染 HTML 失败： html file write failed"
            com.mbridge.msdk.foundation.tools.z.a(r9, r0)     // Catch: java.lang.Exception -> Lff
            java.lang.String r9 = "html file write failed"
            java.lang.String r0 = r8.n     // Catch: java.lang.Exception -> Lff
            r8.a(r9, r0, r10)     // Catch: java.lang.Exception -> Lff
            goto L109
        Lf9:
            if (r2 == 0) goto Lfe
            r2.close()     // Catch: java.lang.Exception -> Lff
        Lfe:
            throw r9     // Catch: java.lang.Exception -> Lff
        Lff:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            java.lang.String r0 = r8.n
            r8.a(r9, r0, r10)
        L109:
            return
    }

    static java.lang.String h(com.mbridge.msdk.advanced.b.a r0) {
            java.lang.String r0 = r0.c
            return r0
    }

    private void h(com.mbridge.msdk.foundation.entity.CampaignEx r2, int r3) {
            r1 = this;
            com.mbridge.msdk.advanced.b.a$12 r0 = new com.mbridge.msdk.advanced.b.a$12
            r0.<init>(r1, r2, r3)
            r1.s = r0
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r3 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r2 = r2.getAdZip()
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener r0 = r1.s
            r3.downloadH5Res(r2, r0)
            return
    }

    private void i(com.mbridge.msdk.foundation.entity.CampaignEx r8, int r9) {
            r7 = this;
            com.mbridge.msdk.advanced.b.a$4 r0 = new com.mbridge.msdk.advanced.b.a$4
            r0.<init>(r7, r8)
            r7.r = r0
            java.util.concurrent.CopyOnWriteArrayList r4 = new java.util.concurrent.CopyOnWriteArrayList
            r4.<init>()
            r4.add(r8)
            com.mbridge.msdk.videocommon.download.b r1 = com.mbridge.msdk.videocommon.download.b.getInstance()
            android.content.Context r2 = r7.f
            java.lang.String r3 = r7.b
            com.mbridge.msdk.videocommon.listener.a r6 = r7.r
            r5 = 298(0x12a, float:4.18E-43)
            r1.createUnitCache(r2, r3, r4, r5, r6)
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()
            java.lang.String r1 = r7.b
            boolean r2 = r8.isBidCampaign()
            r3 = 298(0x12a, float:4.18E-43)
            boolean r0 = r0.a(r3, r1, r2)
            if (r0 != 0) goto L41
            java.lang.String r8 = com.mbridge.msdk.advanced.b.a.a
            java.lang.String r9 = " load Video"
            com.mbridge.msdk.foundation.tools.z.a(r8, r9)
            com.mbridge.msdk.videocommon.download.b r8 = com.mbridge.msdk.videocommon.download.b.getInstance()
            java.lang.String r9 = r7.b
            r8.load(r9)
            goto L51
        L41:
            java.lang.String r0 = com.mbridge.msdk.advanced.b.a.a
            java.lang.String r1 = " load Video isReady true"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0 = r7.g
            r1 = 1
            r0.setVideoReady(r1)
            r7.b(r8, r9)
        L51:
            return
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.w
            return r0
    }

    public final java.lang.String a(java.lang.String r6) {
            r5 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.i
            if (r0 == 0) goto L6f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6a
            r0.<init>()     // Catch: java.lang.Exception -> L6a
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.i     // Catch: java.lang.Exception -> L6a
            java.lang.String r1 = r1.getId()     // Catch: java.lang.Exception -> L6a
            r0.append(r1)     // Catch: java.lang.Exception -> L6a
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.i     // Catch: java.lang.Exception -> L6a
            java.lang.String r1 = r1.getVideoUrlEncode()     // Catch: java.lang.Exception -> L6a
            r0.append(r1)     // Catch: java.lang.Exception -> L6a
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.i     // Catch: java.lang.Exception -> L6a
            java.lang.String r1 = r1.getBidToken()     // Catch: java.lang.Exception -> L6a
            r0.append(r1)     // Catch: java.lang.Exception -> L6a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L6a
            com.mbridge.msdk.videocommon.download.b r1 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> L6a
            java.lang.String r2 = r5.b     // Catch: java.lang.Exception -> L6a
            com.mbridge.msdk.videocommon.download.a r0 = r1.a(r2, r0)     // Catch: java.lang.Exception -> L6a
            if (r0 == 0) goto L71
            int r1 = r0.f()     // Catch: java.lang.Exception -> L6a
            r2 = 5
            if (r1 != r2) goto L71
            java.lang.String r0 = r0.d()     // Catch: java.lang.Exception -> L6a
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L6a
            r2.<init>(r0)     // Catch: java.lang.Exception -> L6a
            boolean r2 = r2.exists()     // Catch: java.lang.Exception -> L6a
            if (r2 == 0) goto L71
            java.lang.String r2 = com.mbridge.msdk.advanced.b.a.a     // Catch: java.lang.Exception -> L6a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6a
            r3.<init>()     // Catch: java.lang.Exception -> L6a
            java.lang.String r4 = "本地已下载完 拿本地播放地址："
            r3.append(r4)     // Catch: java.lang.Exception -> L6a
            r3.append(r0)     // Catch: java.lang.Exception -> L6a
            java.lang.String r4 = " state："
            r3.append(r4)     // Catch: java.lang.Exception -> L6a
            r3.append(r1)     // Catch: java.lang.Exception -> L6a
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> L6a
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)     // Catch: java.lang.Exception -> L6a
            r6 = r0
            goto L71
        L6a:
            r0 = move-exception
            r0.printStackTrace()
            goto L71
        L6f:
            java.lang.String r6 = ""
        L71:
            return r6
    }

    public final void a(int r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final void a(int r1, int r2) {
            r0 = this;
            r0.m = r1
            r0.l = r2
            return
    }

    public final void a(com.mbridge.msdk.advanced.a.a r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void a(com.mbridge.msdk.advanced.view.MBNativeAdvancedView r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void a(com.mbridge.msdk.c.d r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final void a(java.lang.String r11, int r12) {
            r10 = this;
            r0 = 0
            r10.q = r0
            r10.n = r11
            r10.o = r12
            r1 = 0
            r10.i = r1
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r1 = r10.g
            if (r1 != 0) goto L14
            java.lang.String r0 = "MBAdvancedNativeView is null"
            r10.a(r0, r11, r12)
            return
        L14:
            boolean r1 = android.text.TextUtils.isEmpty(r11)
            if (r1 == 0) goto L2a
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r2 = r10.g
            java.lang.String r3 = r10.c
            java.lang.String r4 = r10.b
            int r6 = r10.j
            r7 = 0
            r8 = 0
            r5 = r11
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = com.mbridge.msdk.advanced.b.c.a(r2, r3, r4, r5, r6, r7, r8)
            goto L39
        L2a:
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r2 = r10.g
            java.lang.String r3 = r10.c
            java.lang.String r4 = r10.b
            int r6 = r10.j
            r7 = 0
            r8 = 1
            r5 = r11
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = com.mbridge.msdk.advanced.b.c.a(r2, r3, r4, r5, r6, r7, r8)
        L39:
            r2 = 0
            if (r1 == 0) goto L42
            long r4 = r1.getTimestamp()
            goto L43
        L42:
            r4 = r2
        L43:
            com.mbridge.msdk.c.d r6 = r10.h
            if (r6 == 0) goto L58
            int r6 = r6.n()
            r7 = 1
            if (r6 != r7) goto L58
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView r6 = r10.g
            if (r6 == 0) goto L58
            if (r1 == 0) goto L58
            r10.a(r1, r12)
            return
        L58:
            r10.p = r0
            com.mbridge.msdk.c.d r6 = r10.h
            r7 = 30000(0x7530, double:1.4822E-319)
            if (r6 == 0) goto L7f
            java.util.List r6 = r6.s()
            if (r6 == 0) goto L7c
            int r9 = r6.size()
            if (r9 <= 0) goto L7c
            java.lang.Object r0 = r6.get(r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            int r0 = r0 * 1000
            long r6 = (long) r0
            r10.d = r6
            goto L81
        L7c:
            r10.d = r7
            goto L81
        L7f:
            r10.d = r7
        L81:
            java.lang.String r0 = com.mbridge.msdk.advanced.b.a.a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "开始从V3请求新的 offer，超时 ："
            r6.append(r7)
            long r7 = r10.d
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r6)
            com.mbridge.msdk.c.d r0 = r10.h
            if (r0 == 0) goto Lc8
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lc8
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 == 0) goto Lc8
            com.mbridge.msdk.c.d r0 = r10.h
            int r0 = r0.x()
            int r0 = r0 * 1000
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r4
            long r4 = (long) r0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto Lc4
            long r0 = r10.d
            r10.a(r0)
            android.content.Context r0 = r10.f
            r10.a(r0, r11, r12)
            goto Ld2
        Lc4:
            r10.a(r1, r12)
            goto Ld2
        Lc8:
            long r0 = r10.d
            r10.a(r0)
            android.content.Context r0 = r10.f
            r10.a(r0, r11, r12)
        Ld2:
            return
    }

    public final void b() {
            r4 = this;
            com.mbridge.msdk.advanced.a.a r0 = r4.e
            r1 = 0
            if (r0 == 0) goto L7
            r4.e = r1
        L7:
            java.lang.String r0 = r4.n
            int r2 = r4.o
            java.lang.String r3 = "LoadManager release"
            r4.a(r3, r0, r2)
            com.mbridge.msdk.videocommon.listener.a r0 = r4.r
            if (r0 == 0) goto L16
            r4.r = r1
        L16:
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager$ZipDownloadListener r0 = r4.s
            if (r0 == 0) goto L1c
            r4.s = r1
        L1c:
            return
    }
}
