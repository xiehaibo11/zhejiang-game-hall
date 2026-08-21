package com.mbridge.msdk.advanced.c;

public final class b implements com.mbridge.msdk.advanced.a.a {
    private com.mbridge.msdk.out.NativeAdvancedAdListener a;
    private com.mbridge.msdk.advanced.c.c b;
    private com.mbridge.msdk.out.MBridgeIds c;
    private java.lang.String d;
    private java.lang.String e;

    public b(com.mbridge.msdk.advanced.c.c r1, com.mbridge.msdk.out.MBridgeIds r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            java.lang.String r1 = r2.getUnitId()
            r0.d = r1
            return
    }

    @Override
    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r5, int r6) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onLoadSuccessed: "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "NativeAdvancedLoadManager"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            com.mbridge.msdk.advanced.c.c r0 = r4.b
            if (r0 == 0) goto L59
            boolean r0 = r0.a()
            if (r0 == 0) goto L59
            if (r5 == 0) goto L59
            com.mbridge.msdk.out.NativeAdvancedAdListener r0 = r4.a
            if (r0 == 0) goto L2f
            com.mbridge.msdk.advanced.c.c r1 = r4.b
            if (r1 == 0) goto L2f
            com.mbridge.msdk.out.MBridgeIds r1 = r4.c
            r0.onLoadSuccessed(r1)
        L2f:
            com.mbridge.msdk.advanced.c.c r0 = r4.b
            r1 = 0
            r0.a(r1)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r5)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.String r2 = r4.d
            boolean r3 = r5.isBidCampaign()
            com.mbridge.msdk.foundation.same.report.e.a(r1, r0, r2, r3)
            r0 = 2
            if (r6 != r0) goto L59
            com.mbridge.msdk.advanced.c.c r6 = r4.b
            if (r6 == 0) goto L59
            r0 = 1
            r6.a(r5, r0)
        L59:
            return
    }

    public final void a(com.mbridge.msdk.out.NativeAdvancedAdListener r1) {
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
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onLoadFailed: "
            r0.append(r1)
            r0.append(r4)
            r0.append(r3)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "NativeAdvancedLoadManager"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
            com.mbridge.msdk.advanced.c.c r4 = r2.b
            if (r4 == 0) goto L47
            boolean r4 = r4.a()
            if (r4 == 0) goto L47
            com.mbridge.msdk.out.NativeAdvancedAdListener r4 = r2.a
            if (r4 == 0) goto L2c
            com.mbridge.msdk.out.MBridgeIds r0 = r2.c
            r4.onLoadFailed(r0, r3)
        L2c:
            com.mbridge.msdk.advanced.c.c r4 = r2.b
            r0 = 0
            r4.a(r0)
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r4 = r4.j()
            java.lang.String r0 = r2.d
            java.lang.String r1 = r2.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r1 = r1 ^ 1
            com.mbridge.msdk.foundation.same.report.e.a(r4, r3, r0, r1)
        L47:
            return
    }
}
