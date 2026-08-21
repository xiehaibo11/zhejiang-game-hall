package com.mbridge.msdk.splash.c;

public final class b {
    public static com.mbridge.msdk.foundation.db.f a = null;
    private static java.lang.String b = "ResManager";
    private static int c = 1;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> d;




    static {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)
            com.mbridge.msdk.splash.c.b.a = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.splash.c.b.d = r0
            return
    }

    private static com.mbridge.msdk.foundation.entity.CampaignEx a(com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            java.lang.String r0 = r4.getAdZip()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L2a
            java.lang.String r0 = r4.getAdHtml()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23
            java.lang.String r0 = r4.getAdHtml()
            java.lang.String r3 = "<MBTPLMARK>"
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto L23
            goto L2a
        L23:
            r4.setHasMBTplMark(r1)
            r4.setIsMraid(r2)
            goto L30
        L2a:
            r4.setHasMBTplMark(r2)
            r4.setIsMraid(r1)
        L30:
            return r4
    }

    public static com.mbridge.msdk.foundation.entity.CampaignEx a(com.mbridge.msdk.splash.view.MBSplashView r18, java.lang.String r19, java.lang.String r20, java.lang.String r21, boolean r22, int r23, boolean r24, boolean r25) {
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.splash.c.b.a
            if (r0 != 0) goto L16
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)
            com.mbridge.msdk.splash.c.b.a = r0
        L16:
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.a r0 = r0.b(r1)
            if (r0 != 0) goto L30
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r0.b()
        L30:
            long r1 = r0.ag()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 * r3
            long r5 = r0.W()
            long r5 = r5 * r3
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.splash.c.b.a
            if (r0 != 0) goto L52
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)
            com.mbridge.msdk.splash.c.b.a = r0
        L52:
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.splash.c.b.a
            r13 = r20
            r0.b(r5, r13)
            com.mbridge.msdk.foundation.db.f r7 = com.mbridge.msdk.splash.c.b.a
            r9 = 0
            r10 = 0
            int r11 = com.mbridge.msdk.splash.c.b.c
            boolean r0 = android.text.TextUtils.isEmpty(r21)
            r12 = r0 ^ 1
            r8 = r20
            java.util.List r0 = r7.a(r8, r9, r10, r11, r12)
            r14 = 0
            if (r0 == 0) goto L171
            int r7 = r0.size()
            if (r7 <= 0) goto L171
            r7 = 0
            java.lang.Object r0 = r0.get(r7)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            java.lang.String r7 = r0.getAdZip()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 == 0) goto L90
            java.lang.String r7 = r0.getAdHtml()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 == 0) goto L90
            return r14
        L90:
            long r7 = java.lang.System.currentTimeMillis()
            long r9 = r7 - r1
            java.lang.String r15 = "cache campain is picked:"
            r11 = 0
            if (r24 != 0) goto Lfc
            long r1 = r0.getPlct()
            int r1 = (r1 > r11 ? 1 : (r1 == r11 ? 0 : -1))
            if (r1 <= 0) goto Lb2
            long r1 = r0.getPlct()
            long r1 = r1 * r3
            long r3 = r0.getTimestamp()
            long r1 = r1 + r3
            int r1 = (r1 > r7 ? 1 : (r1 == r7 ? 0 : -1))
            if (r1 >= 0) goto Lc2
        Lb2:
            long r1 = r0.getPlct()
            int r1 = (r1 > r11 ? 1 : (r1 == r11 ? 0 : -1))
            if (r1 > 0) goto Lf3
            long r1 = r0.getTimestamp()
            int r1 = (r1 > r9 ? 1 : (r1 == r9 ? 0 : -1))
            if (r1 < 0) goto Lf3
        Lc2:
            r7 = r18
            r8 = r0
            r9 = r19
            r10 = r20
            r11 = r22
            r12 = r23
            r13 = r25
            boolean r1 = a(r7, r8, r9, r10, r11, r12, r13)
            if (r1 == 0) goto L171
            java.lang.String r1 = com.mbridge.msdk.splash.c.b.b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r15)
            java.lang.String r3 = r0.getAppName()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = a(r0)
            goto L171
        Lf3:
            java.lang.String r0 = com.mbridge.msdk.splash.c.b.b
            java.lang.String r1 = "========已经超了缓存时间"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            goto L171
        Lfc:
            long r16 = r0.getPlct()
            int r16 = (r16 > r11 ? 1 : (r16 == r11 ? 0 : -1))
            if (r16 <= 0) goto L114
            long r16 = r0.getPlct()
            long r16 = r16 * r3
            long r3 = r0.getTimestamp()
            long r16 = r16 + r3
            int r3 = (r16 > r7 ? 1 : (r16 == r7 ? 0 : -1))
            if (r3 >= 0) goto L124
        L114:
            long r3 = r0.getPlct()
            int r3 = (r3 > r11 ? 1 : (r3 == r11 ? 0 : -1))
            if (r3 > 0) goto L154
            long r3 = r0.getTimestamp()
            int r3 = (r3 > r9 ? 1 : (r3 == r9 ? 0 : -1))
            if (r3 < 0) goto L154
        L124:
            r7 = r18
            r8 = r0
            r9 = r19
            r10 = r20
            r11 = r22
            r12 = r23
            r13 = r25
            boolean r1 = a(r7, r8, r9, r10, r11, r12, r13)
            if (r1 == 0) goto L171
            java.lang.String r1 = com.mbridge.msdk.splash.c.b.b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r15)
            java.lang.String r3 = r0.getAppName()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = a(r0)
            goto L171
        L154:
            r7 = r18
            r8 = r0
            r9 = r19
            r10 = r20
            r11 = r22
            r12 = r23
            r13 = r25
            boolean r3 = a(r7, r8, r9, r10, r11, r12, r13)
            if (r3 == 0) goto L171
            boolean r1 = r0.isSpareOffer(r1, r5)
            if (r1 == 0) goto L171
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = a(r0)
        L171:
            return r14
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.splash.c.b.b
            return r0
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r1, java.lang.String r2) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r1)
            com.mbridge.msdk.foundation.db.f r1 = com.mbridge.msdk.splash.c.b.a
            if (r1 != 0) goto L1e
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)
            com.mbridge.msdk.foundation.db.f r1 = com.mbridge.msdk.foundation.db.f.a(r1)
            com.mbridge.msdk.splash.c.b.a = r1
        L1e:
            com.mbridge.msdk.foundation.db.f r1 = com.mbridge.msdk.splash.c.b.a
            r1.b(r0, r2)
            return
    }

    public static void a(com.mbridge.msdk.splash.view.MBSplashView r3, com.mbridge.msdk.foundation.entity.CampaignEx r4, com.mbridge.msdk.splash.view.nativeview.a r5) {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            java.lang.String r1 = r4.getImageUrl()
            com.mbridge.msdk.splash.c.b$2 r2 = new com.mbridge.msdk.splash.c.b$2
            r2.<init>(r4, r5, r3)
            r0.a(r1, r2)
            java.lang.String r3 = r4.getIconUrl()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L3a
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            com.mbridge.msdk.foundation.same.c.b r3 = com.mbridge.msdk.foundation.same.c.b.a(r3)
            java.lang.String r4 = r4.getIconUrl()
            com.mbridge.msdk.splash.c.b$3 r5 = new com.mbridge.msdk.splash.c.b$3
            r5.<init>()
            r3.a(r4, r5)
        L3a:
            return
    }

    private static void a(com.mbridge.msdk.splash.view.MBSplashView r6, com.mbridge.msdk.foundation.entity.CampaignEx r7, java.lang.String r8) {
            com.mbridge.msdk.splash.c.b$1 r5 = new com.mbridge.msdk.splash.c.b$1
            r5.<init>(r6)
            java.util.concurrent.CopyOnWriteArrayList r3 = new java.util.concurrent.CopyOnWriteArrayList
            r3.<init>()
            r3.add(r7)
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r4 = 297(0x129, float:4.16E-43)
            r2 = r8
            r0.createUnitCache(r1, r2, r3, r4, r5)
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()
            boolean r7 = r7.isBidCampaign()
            r1 = 297(0x129, float:4.16E-43)
            boolean r7 = r0.a(r1, r8, r7)
            if (r7 != 0) goto L37
            com.mbridge.msdk.videocommon.download.b r6 = com.mbridge.msdk.videocommon.download.b.getInstance()
            r6.load(r8)
            goto L3b
        L37:
            r7 = 1
            r6.setVideoReady(r7)
        L3b:
            return
    }

    private static void a(com.mbridge.msdk.splash.view.MBSplashView r1, java.lang.String r2, com.mbridge.msdk.foundation.entity.CampaignEx r3, java.lang.String r4, java.lang.String r5, boolean r6, int r7) {
            com.mbridge.msdk.splash.c.e$c r0 = new com.mbridge.msdk.splash.c.e$c
            r0.<init>()
            r0.c(r5)
            r0.b(r4)
            r0.a(r3)
            r0.a(r2)
            r0.a(r6)
            r0.a(r7)
            com.mbridge.msdk.splash.c.e r2 = com.mbridge.msdk.splash.c.e.a.a()
            r3 = 0
            r2.a(r1, r0, r3)
            return
    }

    public static void a(java.lang.String r3) {
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.splash.c.b.a
            if (r0 != 0) goto L16
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)
            com.mbridge.msdk.splash.c.b.a = r0
        L16:
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.splash.c.b.a
            r1 = 0
            int r2 = com.mbridge.msdk.splash.c.b.c
            r0.a(r3, r1, r2)
            return
    }

    public static boolean a(com.mbridge.msdk.splash.view.MBSplashView r5, com.mbridge.msdk.foundation.entity.CampaignEx r6) {
            r0 = 0
            if (r5 != 0) goto Lb
            java.lang.String r5 = com.mbridge.msdk.splash.c.b.b
            java.lang.String r6 = "mbSplashView  is null"
            com.mbridge.msdk.foundation.tools.z.d(r5, r6)
            return r0
        Lb:
            r1 = 1
            java.lang.String r2 = r6.getVideoUrlEncode()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L30
            boolean r1 = r5.isVideoReady()
            java.lang.String r2 = com.mbridge.msdk.splash.c.b.b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "======isReady isVideoReady:"
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.mbridge.msdk.foundation.tools.z.d(r2, r3)
        L30:
            if (r1 == 0) goto L56
            java.lang.String r2 = r6.getAdZip()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L56
            boolean r1 = r5.isH5Ready()
            java.lang.String r2 = com.mbridge.msdk.splash.c.b.b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "======isReady getAdZip:"
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.mbridge.msdk.foundation.tools.z.d(r2, r3)
        L56:
            if (r1 == 0) goto L86
            java.lang.String r2 = r6.getAdZip()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L86
            java.lang.String r2 = r6.getAdHtml()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L86
            boolean r1 = r5.isH5Ready()
            java.lang.String r2 = com.mbridge.msdk.splash.c.b.b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "======isReady getAdHtml:"
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.mbridge.msdk.foundation.tools.z.d(r2, r3)
        L86:
            java.lang.String r2 = r6.getAdZip()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto La2
            java.lang.String r2 = r6.getAdHtml()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto La2
            java.lang.String r1 = com.mbridge.msdk.splash.c.b.b
            java.lang.String r2 = "======isReady getAdHtml  getAdZip all are empty"
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)
            r1 = r0
        La2:
            boolean r2 = r6.isDynamicView()
            if (r2 == 0) goto Lcd
            java.lang.String r6 = r6.getImageUrl()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto Lb6
            boolean r0 = r5.isImageReady()
        Lb6:
            java.lang.String r5 = com.mbridge.msdk.splash.c.b.b
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "======isReady DYNAMIC VIEW and image state is : "
            r6.append(r1)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            com.mbridge.msdk.foundation.tools.z.d(r5, r6)
            r1 = r0
        Lcd:
            return r1
    }

    private static boolean a(com.mbridge.msdk.splash.view.MBSplashView r13, com.mbridge.msdk.foundation.entity.CampaignEx r14, java.lang.String r15, java.lang.String r16, boolean r17, int r18, boolean r19) {
            r7 = r13
            r8 = r14
            r9 = r16
            r10 = 0
            if (r8 == 0) goto Lc7
            r13.clearResState()
            java.lang.String r0 = r14.getVideoUrlEncode()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r11 = 1
            if (r0 != 0) goto L3a
            boolean r0 = r13.isVideoReady()
            if (r0 != 0) goto L2e
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()
            r1 = 297(0x129, float:4.16E-43)
            boolean r2 = r14.isBidCampaign()
            boolean r0 = r0.a(r1, r9, r2)
            if (r0 == 0) goto L2c
            goto L2e
        L2c:
            r0 = r10
            goto L2f
        L2e:
            r0 = r11
        L2f:
            if (r0 != 0) goto L35
            a(r13, r14, r9)
            goto L38
        L35:
            r13.setVideoReady(r11)
        L38:
            r12 = r0
            goto L3b
        L3a:
            r12 = r11
        L3b:
            java.lang.String r0 = r14.getAdZip()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L6d
            boolean r0 = r13.isH5Ready()
            if (r0 != 0) goto L6d
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r1 = r14.getAdZip()
            java.lang.String r1 = r0.getH5ResAddress(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L6c
            if (r19 != 0) goto L6d
            r0 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            a(r0, r1, r2, r3, r4, r5, r6)
            goto L6d
        L6c:
            r12 = r10
        L6d:
            java.lang.String r0 = r14.getAdZip()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto La3
            java.lang.String r0 = r14.getAdHtml()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto La3
            boolean r0 = r13.isH5Ready()
            if (r0 != 0) goto La3
            java.lang.String r0 = r14.getAdHtml()
            java.lang.String r1 = c(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto La4
            if (r19 != 0) goto La3
            r0 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            a(r0, r1, r2, r3, r4, r5, r6)
        La3:
            r10 = r12
        La4:
            boolean r0 = r14.isDynamicView()
            if (r0 == 0) goto Lc7
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = com.mbridge.msdk.splash.c.b.d
            java.lang.String r1 = r14.getImageUrl()
            java.lang.Object r0 = r0.get(r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            if (r0 == 0) goto Lbd
            boolean r0 = r0.booleanValue()
            r10 = r0
        Lbd:
            if (r10 != 0) goto Lc4
            r0 = 0
            a(r13, r14, r0)
            goto Lc7
        Lc4:
            r13.setImageReady(r11)
        Lc7:
            return r10
    }

    static java.util.concurrent.ConcurrentHashMap b() {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = com.mbridge.msdk.splash.c.b.d
            return r0
    }

    public static void b(java.lang.String r1) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = com.mbridge.msdk.splash.c.b.d
            r0.remove(r1)
            return
    }

    private static java.lang.String c(java.lang.String r3) {
            java.lang.String r0 = ""
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L23
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L23
            boolean r3 = r1.exists()     // Catch: java.lang.Throwable -> L23
            if (r3 == 0) goto L29
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L23
            r3.<init>()     // Catch: java.lang.Throwable -> L23
            java.lang.String r2 = "file:///"
            r3.append(r2)     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Throwable -> L23
            r3.append(r1)     // Catch: java.lang.Throwable -> L23
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L23
            goto L29
        L23:
            r3 = move-exception
            throw r3     // Catch: java.lang.Exception -> L25
        L25:
            r3 = move-exception
            r3.getMessage()
        L29:
            return r0
    }
}
