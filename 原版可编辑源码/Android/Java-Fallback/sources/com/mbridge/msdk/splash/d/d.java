package com.mbridge.msdk.splash.d;

public final class d {
    private com.mbridge.msdk.out.MBSplashShowListener a;
    private com.mbridge.msdk.foundation.entity.CampaignEx b;
    private boolean c;
    private com.mbridge.msdk.splash.d.c d;

    public d(com.mbridge.msdk.splash.d.c r1, com.mbridge.msdk.out.MBSplashShowListener r2, double r3, com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r0 = this;
            r0.<init>()
            r0.d = r1
            r0.a = r2
            r0.b = r5
            boolean r1 = r0.a(r3, r5)
            r0.c = r1
            return
    }

    private boolean a(double r10, com.mbridge.msdk.foundation.entity.CampaignEx r12) {
            r9 = this;
            java.lang.String r0 = "SplashShowListenerImpl"
            r1 = 0
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> La0
            java.lang.String r2 = r2.k()     // Catch: java.lang.Exception -> La0
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> La0
            r4 = 0
            if (r3 != 0) goto L2c
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.c.a r2 = r3.b(r2)     // Catch: java.lang.Exception -> La0
            if (r2 == 0) goto L2c
            long r3 = r2.W()     // Catch: java.lang.Exception -> La0
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r5
            long r7 = r2.ag()     // Catch: java.lang.Exception -> La0
            long r5 = r5 * r7
            r2 = r3
            r4 = r5
            goto L2d
        L2c:
            r2 = r4
        L2d:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La0
            r6.<init>()     // Catch: java.lang.Exception -> La0
            java.lang.String r7 = "cbp : "
            r6.append(r7)     // Catch: java.lang.Exception -> La0
            r6.append(r10)     // Catch: java.lang.Exception -> La0
            java.lang.String r7 = " plct : "
            r6.append(r7)     // Catch: java.lang.Exception -> La0
            r6.append(r4)     // Catch: java.lang.Exception -> La0
            java.lang.String r7 = " plctb : "
            r6.append(r7)     // Catch: java.lang.Exception -> La0
            r6.append(r2)     // Catch: java.lang.Exception -> La0
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)     // Catch: java.lang.Exception -> La0
            r6 = 1
            if (r12 == 0) goto L61
            boolean r2 = r12.isSpareOffer(r4, r2)     // Catch: java.lang.Exception -> La0
            if (r2 == 0) goto L5e
            r12.setSpareOfferFlag(r6)     // Catch: java.lang.Exception -> La0
            return r6
        L5e:
            r12.setSpareOfferFlag(r1)     // Catch: java.lang.Exception -> La0
        L61:
            if (r12 == 0) goto L9f
            boolean r12 = r12.isBidCampaign()     // Catch: java.lang.Exception -> La0
            if (r12 != 0) goto L9f
            r2 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r12 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r12 != 0) goto L70
            return r1
        L70:
            java.util.Random r12 = new java.util.Random     // Catch: java.lang.Exception -> La0
            r12.<init>()     // Catch: java.lang.Exception -> La0
            double r2 = r12.nextDouble()     // Catch: java.lang.Exception -> La0
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La0
            r12.<init>()     // Catch: java.lang.Exception -> La0
            java.lang.String r4 = "hit : "
            r12.append(r4)     // Catch: java.lang.Exception -> La0
            r12.append(r2)     // Catch: java.lang.Exception -> La0
            java.lang.String r4 = " "
            r12.append(r4)     // Catch: java.lang.Exception -> La0
            int r10 = (r2 > r10 ? 1 : (r2 == r10 ? 0 : -1))
            if (r10 <= 0) goto L91
            r11 = r6
            goto L92
        L91:
            r11 = r1
        L92:
            r12.append(r11)     // Catch: java.lang.Exception -> La0
            java.lang.String r11 = r12.toString()     // Catch: java.lang.Exception -> La0
            com.mbridge.msdk.foundation.tools.z.d(r0, r11)     // Catch: java.lang.Exception -> La0
            if (r10 <= 0) goto L9f
            r1 = r6
        L9f:
            return r1
        La0:
            r10 = move-exception
            java.lang.String r11 = "CBPERROR"
            com.mbridge.msdk.foundation.tools.z.c(r0, r11, r10)
            return r1
    }

    public final void a(com.mbridge.msdk.out.MBridgeIds r5) {
            r4 = this;
            com.mbridge.msdk.splash.d.c r0 = r4.d
            if (r0 == 0) goto L7
            r1 = 1
            r0.a = r1
        L7:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "load_to="
            r0.append(r1)
            com.mbridge.msdk.splash.d.c r1 = r4.d
            long r1 = r1.b()
            r0.append(r1)
            java.lang.String r1 = "&"
            r0.append(r1)
            java.lang.String r2 = "allow_skip="
            r0.append(r2)
            com.mbridge.msdk.splash.d.c r2 = r4.d
            boolean r2 = r2.c()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "countdown="
            r0.append(r2)
            com.mbridge.msdk.splash.d.c r2 = r4.d
            int r2 = r2.d()
            r0.append(r2)
            r0.append(r1)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.b
            java.lang.String r3 = r5.getUnitId()
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.same.report.e.a(r1, r2, r3, r0)
            com.mbridge.msdk.out.MBSplashShowListener r0 = r4.a
            if (r0 == 0) goto L61
            boolean r1 = r4.c
            if (r1 != 0) goto L61
            r0.onShowSuccessed(r5)
        L61:
            return
    }

    public final void a(com.mbridge.msdk.out.MBridgeIds r6, int r7) {
            r5 = this;
            com.mbridge.msdk.out.MBSplashShowListener r0 = r5.a
            if (r0 == 0) goto L7
            r0.onDismiss(r6, r7)
        L7:
            com.mbridge.msdk.splash.d.c r0 = r5.d
            if (r0 == 0) goto Le
            r1 = 0
            r0.a = r1
        Le:
            r0 = 6
            if (r7 == r0) goto L17
            r0 = 4
            if (r7 == r0) goto L17
            r0 = 5
            if (r7 != r0) goto L6d
        L17:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b
            java.lang.String r6 = r6.getUnitId()
            r1 = 0
            if (r0 == 0) goto L61
            com.mbridge.msdk.splash.a.b r1 = com.mbridge.msdk.splash.a.b.a()     // Catch: java.lang.Exception -> L65
            com.mbridge.msdk.splash.a.b r1 = r1.b(r6)     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = r0.getRequestId()     // Catch: java.lang.Exception -> L65
            com.mbridge.msdk.splash.a.b r1 = r1.d(r2)     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = r0.getRequestIdNotice()     // Catch: java.lang.Exception -> L65
            com.mbridge.msdk.splash.a.b r1 = r1.g(r2)     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = r0.getId()     // Catch: java.lang.Exception -> L65
            com.mbridge.msdk.splash.a.b r1 = r1.c(r2)     // Catch: java.lang.Exception -> L65
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L65
            r2.<init>()     // Catch: java.lang.Exception -> L65
            long r3 = r0.getCreativeId()     // Catch: java.lang.Exception -> L65
            r2.append(r3)     // Catch: java.lang.Exception -> L65
            java.lang.String r3 = ""
            r2.append(r3)     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L65
            com.mbridge.msdk.splash.a.b r1 = r1.e(r2)     // Catch: java.lang.Exception -> L65
            boolean r0 = r0.isBidCampaign()     // Catch: java.lang.Exception -> L65
            com.mbridge.msdk.splash.a.b r1 = r1.a(r0)     // Catch: java.lang.Exception -> L65
        L61:
            com.mbridge.msdk.splash.e.a.a(r1, r6, r7)     // Catch: java.lang.Exception -> L65
            goto L6d
        L65:
            r6 = move-exception
            boolean r7 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r7 == 0) goto L6d
            r6.printStackTrace()
        L6d:
            return
    }

    public final void a(com.mbridge.msdk.out.MBridgeIds r4, int r5, int r6, int r7) {
            r3 = this;
            com.mbridge.msdk.out.MBSplashShowListener r0 = r3.a
            if (r0 == 0) goto L7
            r0.onZoomOutPlayStart(r4)
        L7:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            java.lang.String r4 = r4.getUnitId()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3f
            r1.<init>()     // Catch: java.lang.Exception -> L3f
            java.lang.String r2 = "flb_size="
            r1.append(r2)     // Catch: java.lang.Exception -> L3f
            r1.append(r6)     // Catch: java.lang.Exception -> L3f
            java.lang.String r6 = "x"
            r1.append(r6)     // Catch: java.lang.Exception -> L3f
            r1.append(r5)     // Catch: java.lang.Exception -> L3f
            java.lang.String r5 = "&flb_type="
            r1.append(r5)     // Catch: java.lang.Exception -> L3f
            r1.append(r7)     // Catch: java.lang.Exception -> L3f
            java.lang.String r5 = "&"
            r1.append(r5)     // Catch: java.lang.Exception -> L3f
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> L3f
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L3f
            android.content.Context r6 = r6.j()     // Catch: java.lang.Exception -> L3f
            com.mbridge.msdk.foundation.same.report.e.a(r6, r0, r4, r5)     // Catch: java.lang.Exception -> L3f
            goto L50
        L3f:
            r4 = move-exception
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L48
            if (r5 == 0) goto L50
            r4.printStackTrace()     // Catch: java.lang.Exception -> L48
            goto L50
        L48:
            r4 = move-exception
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r5 == 0) goto L50
            r4.printStackTrace()
        L50:
            return
    }

    public final void a(com.mbridge.msdk.out.MBridgeIds r2, long r3) {
            r1 = this;
            com.mbridge.msdk.out.MBSplashShowListener r0 = r1.a
            if (r0 == 0) goto L7
            r0.onAdTick(r2, r3)
        L7:
            return
    }

    public final void a(com.mbridge.msdk.out.MBridgeIds r4, java.lang.String r5) {
            r3 = this;
            com.mbridge.msdk.splash.d.c r0 = r3.d
            if (r0 == 0) goto L7
            r1 = 0
            r0.a = r1
        L7:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.b
            java.lang.String r2 = r4.getUnitId()
            com.mbridge.msdk.foundation.same.report.e.b(r0, r1, r2, r5)
            com.mbridge.msdk.out.MBSplashShowListener r0 = r3.a
            if (r0 == 0) goto L1f
            r0.onShowFailed(r4, r5)
        L1f:
            return
    }

    public final void b(com.mbridge.msdk.out.MBridgeIds r3) {
            r2 = this;
            com.mbridge.msdk.out.MBSplashShowListener r0 = r2.a
            if (r0 == 0) goto Lb
            boolean r1 = r2.c
            if (r1 != 0) goto Lb
            r0.onAdClicked(r3)
        Lb:
            return
    }
}
