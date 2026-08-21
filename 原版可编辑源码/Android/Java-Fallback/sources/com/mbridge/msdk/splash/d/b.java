package com.mbridge.msdk.splash.d;

public final class b implements com.mbridge.msdk.splash.b.b {
    private com.mbridge.msdk.out.MBSplashLoadListener a;
    private com.mbridge.msdk.splash.d.c b;
    private com.mbridge.msdk.out.MBridgeIds c;
    private java.lang.String d;
    private java.lang.String e;

    public b(com.mbridge.msdk.splash.d.c r1, com.mbridge.msdk.out.MBridgeIds r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            if (r2 == 0) goto Lf
            java.lang.String r1 = r2.getUnitId()
            r0.d = r1
        Lf:
            return
    }

    @Override
    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r7, int r8) {
            r6 = this;
            com.mbridge.msdk.splash.d.c r0 = r6.b
            if (r0 == 0) goto L4f
            boolean r0 = r0.a()
            if (r0 == 0) goto L4f
            if (r7 == 0) goto L4f
            com.mbridge.msdk.out.MBSplashLoadListener r0 = r6.a
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L27
            com.mbridge.msdk.out.MBridgeIds r3 = r6.c
            r0.onLoadSuccessed(r3, r8)
            com.mbridge.msdk.out.MBSplashLoadListener r0 = r6.a
            com.mbridge.msdk.out.MBridgeIds r3 = r6.c
            int r4 = r7.getFlb()
            if (r4 != r1) goto L23
            r4 = r1
            goto L24
        L23:
            r4 = r2
        L24:
            r0.isSupportZoomOut(r3, r4)
        L27:
            com.mbridge.msdk.splash.d.c r0 = r6.b
            r0.a(r2)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r7)
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            java.lang.String r4 = r6.d
            boolean r5 = r7.isBidCampaign()
            com.mbridge.msdk.foundation.same.report.e.a(r3, r0, r4, r5)
            r0 = 2
            if (r8 != r0) goto L4f
            com.mbridge.msdk.splash.d.c r8 = r6.b
            if (r8 == 0) goto L4f
            r8.a(r7, r2, r1)
        L4f:
            return
    }

    public final void a(com.mbridge.msdk.out.MBSplashLoadListener r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    @Override
    public final void a(java.lang.String r3, int r4) {
            r2 = this;
            com.mbridge.msdk.splash.d.c r0 = r2.b
            if (r0 == 0) goto L2e
            boolean r0 = r0.a()
            if (r0 == 0) goto L2e
            com.mbridge.msdk.out.MBSplashLoadListener r0 = r2.a
            if (r0 == 0) goto L13
            com.mbridge.msdk.out.MBridgeIds r1 = r2.c
            r0.onLoadFailed(r1, r3, r4)
        L13:
            com.mbridge.msdk.splash.d.c r4 = r2.b
            r0 = 0
            r4.a(r0)
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r4 = r4.j()
            java.lang.String r0 = r2.d
            java.lang.String r1 = r2.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r1 = r1 ^ 1
            com.mbridge.msdk.foundation.same.report.e.a(r4, r3, r0, r1)
        L2e:
            return
    }
}
