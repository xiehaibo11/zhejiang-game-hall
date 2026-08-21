package com.mbridge.msdk.advanced.b;

public final class c {
    public static com.mbridge.msdk.foundation.db.f a = null;
    private static java.lang.String b = "ResManager";
    private static int c = 1;



    static {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)
            com.mbridge.msdk.advanced.b.c.a = r0
            return
    }

    public static com.mbridge.msdk.foundation.entity.CampaignEx a(com.mbridge.msdk.advanced.view.MBNativeAdvancedView r20, java.lang.String r21, java.lang.String r22, java.lang.String r23, int r24, boolean r25, boolean r26) {
            r6 = r20
            r3 = r22
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.a r0 = r0.b(r1)
            if (r0 != 0) goto L1e
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r0.b()
        L1e:
            long r1 = r0.ag()
            r4 = 1000(0x3e8, double:4.94E-321)
            long r7 = r1 * r4
            long r0 = r0.W()
            long r9 = r0 * r4
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.advanced.b.c.a
            if (r0 != 0) goto L42
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)
            com.mbridge.msdk.advanced.b.c.a = r0
        L42:
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.advanced.b.c.a
            r0.b(r9, r3)
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.advanced.b.c.a
            if (r0 != 0) goto L5d
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)
            com.mbridge.msdk.advanced.b.c.a = r0
        L5d:
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.advanced.b.c.a
            int r1 = com.mbridge.msdk.advanced.b.c.c
            r2 = 0
            java.util.List r0 = r0.b(r3, r2, r2, r1)
            r11 = 0
            if (r0 == 0) goto L183
            int r1 = r0.size()
            if (r1 <= 0) goto L183
            java.lang.Object r0 = r0.get(r2)
            r12 = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r12 = (com.mbridge.msdk.foundation.entity.CampaignEx) r12
            java.lang.String r0 = r12.getAdZip()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L8b
            java.lang.String r0 = r12.getAdHtml()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L8b
            return r11
        L8b:
            long r0 = java.lang.System.currentTimeMillis()
            long r13 = r0 - r7
            r15 = 8
            java.lang.String r2 = "cache campain is picked:"
            r16 = 0
            if (r25 != 0) goto L105
            long r18 = r12.getPlct()
            int r18 = (r18 > r16 ? 1 : (r18 == r16 ? 0 : -1))
            if (r18 <= 0) goto Lb1
            long r18 = r12.getPlct()
            long r18 = r18 * r4
            long r4 = r12.getTimestamp()
            long r18 = r18 + r4
            int r0 = (r18 > r0 ? 1 : (r18 == r0 ? 0 : -1))
            if (r0 >= 0) goto Lc1
        Lb1:
            long r0 = r12.getPlct()
            int r0 = (r0 > r16 ? 1 : (r0 == r16 ? 0 : -1))
            if (r0 > 0) goto Lf1
            long r0 = r12.getTimestamp()
            int r0 = (r0 > r13 ? 1 : (r0 == r13 ? 0 : -1))
            if (r0 < 0) goto Lf1
        Lc1:
            r0 = r20
            r1 = r12
            r6 = r2
            r2 = r21
            r3 = r22
            r4 = r24
            r5 = r26
            boolean r0 = a(r0, r1, r2, r3, r4, r5)
            if (r0 == 0) goto L183
            java.lang.String r0 = com.mbridge.msdk.advanced.b.c.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            java.lang.String r2 = r12.getAppName()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = a(r12)
            goto L183
        Lf1:
            java.lang.String r0 = com.mbridge.msdk.advanced.b.c.b
            java.lang.String r1 = "========已经超了缓存时间"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            boolean r0 = r12.isSpareOffer(r7, r9)
            if (r0 != 0) goto L183
            if (r6 == 0) goto L183
            r6.setVisibility(r15)
            goto L183
        L105:
            long r18 = r12.getPlct()
            int r18 = (r18 > r16 ? 1 : (r18 == r16 ? 0 : -1))
            if (r18 <= 0) goto L11d
            long r18 = r12.getPlct()
            long r18 = r18 * r4
            long r4 = r12.getTimestamp()
            long r18 = r18 + r4
            int r0 = (r18 > r0 ? 1 : (r18 == r0 ? 0 : -1))
            if (r0 >= 0) goto L12d
        L11d:
            long r0 = r12.getPlct()
            int r0 = (r0 > r16 ? 1 : (r0 == r16 ? 0 : -1))
            if (r0 > 0) goto L15c
            long r0 = r12.getTimestamp()
            int r0 = (r0 > r13 ? 1 : (r0 == r13 ? 0 : -1))
            if (r0 < 0) goto L15c
        L12d:
            r0 = r20
            r1 = r12
            r6 = r2
            r2 = r21
            r3 = r22
            r4 = r24
            r5 = r26
            boolean r0 = a(r0, r1, r2, r3, r4, r5)
            if (r0 == 0) goto L183
            java.lang.String r0 = com.mbridge.msdk.advanced.b.c.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            java.lang.String r2 = r12.getAppName()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = a(r12)
            goto L183
        L15c:
            r0 = r20
            r1 = r12
            r2 = r21
            r3 = r22
            r4 = r24
            r5 = r26
            boolean r0 = a(r0, r1, r2, r3, r4, r5)
            if (r0 == 0) goto L178
            boolean r0 = r12.isSpareOffer(r7, r9)
            if (r0 == 0) goto L178
            com.mbridge.msdk.foundation.entity.CampaignEx r11 = a(r12)
            goto L183
        L178:
            boolean r0 = r12.isSpareOffer(r7, r9)
            if (r0 != 0) goto L183
            if (r6 == 0) goto L183
            r6.setVisibility(r15)
        L183:
            return r11
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

    private static void a(com.mbridge.msdk.advanced.view.MBNativeAdvancedView r10, java.lang.String r11, com.mbridge.msdk.foundation.entity.CampaignEx r12, java.lang.String r13, java.lang.String r14, int r15) {
            if (r10 == 0) goto La6
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r10.getAdvancedNativeWebview()
            if (r0 == 0) goto La6
            com.mbridge.msdk.advanced.common.c r0 = com.mbridge.msdk.advanced.common.c.a()
            java.lang.String r1 = r12.getId()
            com.mbridge.msdk.advanced.common.c r0 = r0.c(r1)
            java.lang.String r1 = r12.getRequestId()
            com.mbridge.msdk.advanced.common.c r0 = r0.d(r1)
            java.lang.String r1 = r12.getRequestIdNotice()
            com.mbridge.msdk.advanced.common.c r0 = r0.g(r1)
            com.mbridge.msdk.advanced.common.c r0 = r0.b(r14)
            boolean r1 = r12.isBidCampaign()
            com.mbridge.msdk.advanced.common.c r0 = r0.a(r1)
            com.mbridge.msdk.advanced.d.a.a(r0, r14)
            com.mbridge.msdk.advanced.js.a r0 = new com.mbridge.msdk.advanced.js.a
            android.content.Context r1 = r10.getContext()
            r0.<init>(r1, r13, r14)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r1.add(r12)
            r0.a(r1)
            r0.a(r15)
            r10.setAdvancedNativeJSBridgeImpl(r0)
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r15 = r10.getAdvancedNativeWebview()
            long r7 = java.lang.System.currentTimeMillis()
            com.mbridge.msdk.advanced.b.c$1 r9 = new com.mbridge.msdk.advanced.b.c$1
            r0 = r9
            r1 = r13
            r2 = r14
            r3 = r12
            r4 = r10
            r5 = r7
            r0.<init>(r1, r2, r3, r4, r5)
            r15.setWebViewListener(r9)
            boolean r13 = r15.isDestoryed()
            if (r13 != 0) goto L91
            java.lang.String r10 = com.mbridge.msdk.advanced.b.c.b
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "======开始渲染："
            r12.append(r13)
            r12.append(r11)
            java.lang.String r12 = r12.toString()
            com.mbridge.msdk.foundation.tools.z.a(r10, r12)
            android.os.Handler r10 = new android.os.Handler
            android.os.Looper r12 = android.os.Looper.getMainLooper()
            r10.<init>(r12)
            com.mbridge.msdk.advanced.b.c$2 r12 = new com.mbridge.msdk.advanced.b.c$2
            r12.<init>(r15, r11)
            r10.post(r12)
            goto La6
        L91:
            r11 = 0
            r10.setH5Ready(r11)
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r10.j()
            r6 = 3
            java.lang.String r3 = "webview had destory"
            r1 = r12
            r2 = r14
            r4 = r7
            com.mbridge.msdk.advanced.d.a.a(r0, r1, r2, r3, r4, r6)
        La6:
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r1, java.lang.String r2) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r1)
            com.mbridge.msdk.foundation.db.f r1 = com.mbridge.msdk.advanced.b.c.a
            if (r1 != 0) goto L1e
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)
            com.mbridge.msdk.foundation.db.f r1 = com.mbridge.msdk.foundation.db.f.a(r1)
            com.mbridge.msdk.advanced.b.c.a = r1
        L1e:
            com.mbridge.msdk.foundation.db.f r1 = com.mbridge.msdk.advanced.b.c.a
            r1.b(r0, r2)
            return
    }

    public static void a(java.lang.String r3) {
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.advanced.b.c.a
            if (r0 != 0) goto L16
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)
            com.mbridge.msdk.advanced.b.c.a = r0
        L16:
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.advanced.b.c.a
            r1 = 0
            int r2 = com.mbridge.msdk.advanced.b.c.c
            r0.a(r3, r1, r2)
            return
    }

    public static boolean a(com.mbridge.msdk.advanced.view.MBNativeAdvancedView r5, com.mbridge.msdk.foundation.entity.CampaignEx r6, java.lang.String r7, java.lang.String r8) {
            r0 = 0
            if (r5 != 0) goto Lb
            java.lang.String r5 = com.mbridge.msdk.advanced.b.c.b
            java.lang.String r6 = "mbAdvancedNativeView  is null"
            com.mbridge.msdk.foundation.tools.z.d(r5, r6)
            return r0
        Lb:
            r1 = 1
            java.lang.String r2 = r6.getVideoUrlEncode()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L30
            boolean r1 = r5.isVideoReady()
            java.lang.String r2 = com.mbridge.msdk.advanced.b.c.b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "======isReady isVideoReady:"
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.mbridge.msdk.foundation.tools.z.d(r2, r3)
        L30:
            if (r1 == 0) goto L6c
            java.lang.String r2 = r6.getAdZip()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L6c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r7)
            r1.append(r8)
            java.lang.String r2 = r6.getRequestId()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            boolean r1 = com.mbridge.msdk.advanced.common.b.a(r1)
            java.lang.String r2 = com.mbridge.msdk.advanced.b.c.b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "======isReady getAdZip:"
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.mbridge.msdk.foundation.tools.z.d(r2, r3)
        L6c:
            if (r1 == 0) goto Lb2
            java.lang.String r2 = r6.getAdZip()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto Lb2
            java.lang.String r2 = r6.getAdHtml()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto Lb2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r7)
            r1.append(r8)
            java.lang.String r7 = r6.getRequestId()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            boolean r1 = com.mbridge.msdk.advanced.common.b.a(r7)
            java.lang.String r7 = com.mbridge.msdk.advanced.b.c.b
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r2 = "======isReady getAdHtml:"
            r8.append(r2)
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            com.mbridge.msdk.foundation.tools.z.d(r7, r8)
        Lb2:
            java.lang.String r7 = r6.getAdZip()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 == 0) goto Lce
            java.lang.String r7 = r6.getAdHtml()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 == 0) goto Lce
            java.lang.String r7 = com.mbridge.msdk.advanced.b.c.b
            java.lang.String r8 = "======isReady getAdHtml  getAdZip all are empty"
            com.mbridge.msdk.foundation.tools.z.d(r7, r8)
            goto Lcf
        Lce:
            r0 = r1
        Lcf:
            if (r0 == 0) goto Lf5
            java.lang.String r6 = r6.getendcard_url()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto Lf5
            boolean r0 = r5.isEndCardReady()
            java.lang.String r5 = com.mbridge.msdk.advanced.b.c.b
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "======isReady isEndCardReady:"
            r6.append(r7)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            com.mbridge.msdk.foundation.tools.z.d(r5, r6)
        Lf5:
            return r0
    }

    private static boolean a(com.mbridge.msdk.advanced.view.MBNativeAdvancedView r12, com.mbridge.msdk.foundation.entity.CampaignEx r13, java.lang.String r14, java.lang.String r15, int r16, boolean r17) {
            r6 = r12
            r7 = r14
            r8 = r15
            r9 = 0
            if (r13 == 0) goto Lfc
            r12.clearResState()
            java.lang.String r0 = r13.getVideoUrlEncode()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r10 = 1
            if (r0 != 0) goto L25
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()
            r1 = 298(0x12a, float:4.18E-43)
            boolean r2 = r13.isBidCampaign()
            boolean r0 = r0.a(r1, r15, r2)
            if (r0 == 0) goto L29
            goto L26
        L25:
            r0 = r10
        L26:
            r12.setVideoReady(r10)
        L29:
            r11 = r0
            java.lang.String r0 = r13.getendcard_url()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4f
            boolean r0 = r12.isEndCardReady()
            if (r0 != 0) goto L4f
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r1 = r13.getendcard_url()
            java.lang.String r0 = r0.getH5ResAddress(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4f
            r12.setEndCardReady(r10)
        L4f:
            java.lang.String r0 = r13.getAdZip()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L9d
            boolean r0 = r12.isH5Ready()
            if (r0 != 0) goto L9d
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r1 = r13.getAdZip()
            java.lang.String r1 = r0.getH5ResAddress(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L9c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r14)
            r0.append(r15)
            java.lang.String r2 = r13.getRequestId()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            boolean r0 = com.mbridge.msdk.advanced.common.b.a(r0)
            if (r0 == 0) goto L91
            r12.setH5Ready(r10)
            goto L9d
        L91:
            r0 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            a(r0, r1, r2, r3, r4, r5)
            if (r17 != 0) goto L9d
        L9c:
            r11 = r9
        L9d:
            java.lang.String r0 = r13.getAdZip()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lfb
            java.lang.String r0 = r13.getAdHtml()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lfb
            boolean r0 = r12.isH5Ready()
            if (r0 != 0) goto Lfb
            java.lang.String r0 = r13.getAdHtml()
            java.lang.String r1 = b(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Lfc
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r14)
            r0.append(r15)
            java.lang.String r2 = r13.getRequestId()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            boolean r0 = com.mbridge.msdk.advanced.common.b.a(r0)
            if (r0 == 0) goto Lef
            r12.setH5Ready(r10)
            boolean r0 = r13.isMraid()
            if (r0 == 0) goto Led
            r12.setVideoReady(r10)
        Led:
            r9 = r10
            goto Lfc
        Lef:
            r0 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            a(r0, r1, r2, r3, r4, r5)
            if (r17 != 0) goto Lfb
            goto Lfc
        Lfb:
            r9 = r11
        Lfc:
            return r9
    }

    private static java.lang.String b(java.lang.String r3) {
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
