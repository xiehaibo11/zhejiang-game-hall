package com.mbridge.msdk.advanced.c;

public final class d {
    private com.mbridge.msdk.out.NativeAdvancedAdListener a;
    private com.mbridge.msdk.foundation.entity.CampaignEx b;
    private boolean c;
    private com.mbridge.msdk.advanced.c.c d;

    public d(com.mbridge.msdk.advanced.c.c r1, com.mbridge.msdk.out.NativeAdvancedAdListener r2, double r3, com.mbridge.msdk.foundation.entity.CampaignEx r5) {
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
            java.lang.String r0 = "NativeAdvancedShowListenerImpl"
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
            com.mbridge.msdk.advanced.c.c r0 = r4.d
            if (r0 == 0) goto L7
            r1 = 1
            r0.a = r1
        L7:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "load_to="
            r0.append(r1)
            java.lang.String r1 = "0"
            r0.append(r1)
            java.lang.String r1 = "&"
            r0.append(r1)
            java.lang.String r2 = "allow_skip="
            r0.append(r2)
            com.mbridge.msdk.advanced.c.c r2 = r4.d
            int r2 = r2.c()
            r0.append(r2)
            r0.append(r1)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.b
            java.lang.String r3 = r5.getUnitId()
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.same.report.e.a(r1, r2, r3, r0)
            com.mbridge.msdk.out.NativeAdvancedAdListener r0 = r4.a
            if (r0 == 0) goto L4c
            boolean r1 = r4.c
            if (r1 != 0) goto L4c
            r0.onLogImpression(r5)
        L4c:
            return
    }

    public final void a(com.mbridge.msdk.out.MBridgeIds r3, java.lang.String r4) {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.b
            java.lang.String r3 = r3.getUnitId()
            com.mbridge.msdk.foundation.same.report.e.b(r0, r1, r3, r4)
            return
    }

    public final void b(com.mbridge.msdk.out.MBridgeIds r3) {
            r2 = this;
            com.mbridge.msdk.out.NativeAdvancedAdListener r0 = r2.a
            if (r0 == 0) goto Lb
            boolean r1 = r2.c
            if (r1 != 0) goto Lb
            r0.onClick(r3)
        Lb:
            return
    }

    public final void c(com.mbridge.msdk.out.MBridgeIds r2) {
            r1 = this;
            com.mbridge.msdk.out.NativeAdvancedAdListener r0 = r1.a
            if (r0 == 0) goto Le
            r0.onClose(r2)
            com.mbridge.msdk.advanced.c.c r2 = r1.d
            if (r2 == 0) goto Le
            r0 = 0
            r2.a = r0
        Le:
            return
    }

    public final void d(com.mbridge.msdk.out.MBridgeIds r2) {
            r1 = this;
            com.mbridge.msdk.out.NativeAdvancedAdListener r0 = r1.a
            if (r0 == 0) goto L7
            r0.onLeaveApp(r2)
        L7:
            return
    }

    public final void e(com.mbridge.msdk.out.MBridgeIds r2) {
            r1 = this;
            com.mbridge.msdk.out.NativeAdvancedAdListener r0 = r1.a
            if (r0 == 0) goto L7
            r0.showFullScreen(r2)
        L7:
            return
    }

    public final void f(com.mbridge.msdk.out.MBridgeIds r2) {
            r1 = this;
            com.mbridge.msdk.out.NativeAdvancedAdListener r0 = r1.a
            if (r0 == 0) goto L7
            r0.closeFullScreen(r2)
        L7:
            return
    }
}
