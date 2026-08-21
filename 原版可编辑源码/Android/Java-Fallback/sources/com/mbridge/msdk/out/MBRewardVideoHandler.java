package com.mbridge.msdk.out;

public class MBRewardVideoHandler {
    private static final java.lang.String AD_TYPE = "rv";
    private static final java.lang.String TAG = "MBRewardVideoHandler";
    private com.mbridge.msdk.reward.a.a controller;
    private java.lang.String unitId;

    public MBRewardVideoHandler(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 != 0) goto L16
            if (r2 == 0) goto L16
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            r0.b(r2)
        L16:
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.ae.f(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L23
            com.mbridge.msdk.foundation.tools.ae.a(r4, r2)
        L23:
            r1.initMBRewardVideoHandler(r3, r4)
            return
    }

    public MBRewardVideoHandler(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.f(r4)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L10
            com.mbridge.msdk.foundation.tools.ae.a(r4, r0)
        L10:
            r2.initMBRewardVideoHandler(r3, r4)
            return
    }

    private void initMBRewardVideoHandler(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            r2.unitId = r4
            com.mbridge.msdk.reward.a.a r0 = r2.controller     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto L11
            com.mbridge.msdk.reward.a.a r0 = new com.mbridge.msdk.reward.a.a     // Catch: java.lang.Throwable -> L17
            r0.<init>()     // Catch: java.lang.Throwable -> L17
            r2.controller = r0     // Catch: java.lang.Throwable -> L17
            r1 = 0
            r0.a(r1)     // Catch: java.lang.Throwable -> L17
        L11:
            com.mbridge.msdk.reward.a.a r0 = r2.controller     // Catch: java.lang.Throwable -> L17
            r0.b(r3, r4)     // Catch: java.lang.Throwable -> L17
            goto L21
        L17:
            r3 = move-exception
            java.lang.String r4 = r3.getMessage()
            java.lang.String r0 = "MBRewardVideoHandler"
            com.mbridge.msdk.foundation.tools.z.c(r0, r4, r3)
        L21:
            return
    }

    public void clearBitmapCache() {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L10
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L10
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)     // Catch: java.lang.Throwable -> L10
            r0.a()     // Catch: java.lang.Throwable -> L10
            goto L1a
        L10:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBRewardVideoHandler"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L1a:
            return
    }

    public void clearVideoCache() {
            r1 = this;
            com.mbridge.msdk.reward.a.a r0 = r1.controller     // Catch: java.lang.Exception -> L8
            if (r0 == 0) goto Lc
            com.mbridge.msdk.foundation.tools.x.a()     // Catch: java.lang.Exception -> L8
            goto Lc
        L8:
            r0 = move-exception
            r0.printStackTrace()
        Lc:
            return
    }

    public java.lang.String getRequestId() {
            r1 = this;
            com.mbridge.msdk.reward.a.a r0 = r1.controller
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.b()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public boolean isReady() {
            r5 = this;
            com.mbridge.msdk.reward.a.a r0 = r5.controller
            java.lang.String r1 = "rv"
            r2 = 0
            if (r0 == 0) goto L21
            boolean r0 = r0.e(r2)
            if (r0 == 0) goto L17
            com.mbridge.msdk.foundation.same.report.f r3 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r4 = r5.unitId
            r3.d(r4, r1, r2)
            goto L20
        L17:
            com.mbridge.msdk.foundation.same.report.f r3 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r4 = r5.unitId
            r3.e(r4, r1, r2)
        L20:
            return r0
        L21:
            com.mbridge.msdk.foundation.same.report.f r0 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r3 = r5.unitId
            r0.e(r3, r1, r2)
            return r2
    }

    public void load() {
            r4 = this;
            com.mbridge.msdk.foundation.same.report.f r0 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r1 = r4.unitId
            java.lang.String r2 = "rv"
            r3 = 0
            r0.a(r1, r2, r3)
            com.mbridge.msdk.reward.a.a r0 = r4.controller
            if (r0 == 0) goto L14
            r1 = 1
            r0.d(r1)
        L14:
            return
    }

    public void loadFormSelfFilling() {
            r4 = this;
            com.mbridge.msdk.foundation.same.report.f r0 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r1 = r4.unitId
            r2 = 0
            java.lang.String r3 = "rv"
            r0.a(r1, r3, r2)
            com.mbridge.msdk.reward.a.a r0 = r4.controller
            if (r0 == 0) goto L13
            r0.d(r2)
        L13:
            return
    }

    public void playVideoMute(int r2) {
            r1 = this;
            com.mbridge.msdk.reward.a.a r0 = r1.controller
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setAlertDialogText(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            com.mbridge.msdk.reward.a.a r0 = r1.controller
            if (r0 == 0) goto L7
            r0.a(r2, r3, r4, r5)
        L7:
            return
    }

    public void setRewardPlus(boolean r2) {
            r1 = this;
            com.mbridge.msdk.reward.a.a r0 = r1.controller
            if (r0 == 0) goto L7
            r0.c(r2)
        L7:
            return
    }

    public void setRewardVideoListener(com.mbridge.msdk.video.bt.module.b.g r5) {
            r4 = this;
            com.mbridge.msdk.reward.a.a r0 = r4.controller
            if (r0 == 0) goto Lf
            com.mbridge.msdk.video.bt.module.b.a r1 = new com.mbridge.msdk.video.bt.module.b.a
            java.lang.String r2 = r4.unitId
            r3 = 0
            r1.<init>(r5, r2, r3)
            r0.a(r1)
        Lf:
            return
    }

    public void show() {
            r4 = this;
            com.mbridge.msdk.foundation.same.report.f r0 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r1 = r4.unitId
            java.lang.String r2 = "rv"
            r3 = 0
            r0.f(r1, r2, r3)
            com.mbridge.msdk.reward.a.a r0 = r4.controller
            if (r0 == 0) goto L14
            r1 = 0
            r0.a(r1, r1, r1)
        L14:
            return
    }

    public void show(java.lang.String r5) {
            r4 = this;
            com.mbridge.msdk.foundation.same.report.f r0 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r1 = r4.unitId
            java.lang.String r2 = "rv"
            r3 = 0
            r0.f(r1, r2, r3)
            com.mbridge.msdk.reward.a.a r0 = r4.controller
            if (r0 == 0) goto L14
            r1 = 0
            r0.a(r1, r5, r1)
        L14:
            return
    }

    public void show(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            com.mbridge.msdk.foundation.same.report.f r0 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r1 = r4.unitId
            java.lang.String r2 = "rv"
            r3 = 0
            r0.f(r1, r2, r3)
            com.mbridge.msdk.reward.a.a r0 = r4.controller
            if (r0 == 0) goto L14
            r1 = 0
            r0.a(r1, r5, r6)
        L14:
            return
    }
}
