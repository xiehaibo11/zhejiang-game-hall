package com.mbridge.msdk.newinterstitial.out;

public class MBNewInterstitialHandler {
    private com.mbridge.msdk.reward.a.a a;
    private java.lang.String b;

    public MBNewInterstitialHandler(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
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
            r1.a(r3, r4)
            return
    }

    public MBNewInterstitialHandler(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a(r1, r2)
            return
    }

    private void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            r2.b = r4
            com.mbridge.msdk.reward.a.a r0 = r2.a     // Catch: java.lang.Throwable -> L1e
            if (r0 != 0) goto L11
            com.mbridge.msdk.reward.a.a r0 = new com.mbridge.msdk.reward.a.a     // Catch: java.lang.Throwable -> L1e
            r0.<init>()     // Catch: java.lang.Throwable -> L1e
            r2.a = r0     // Catch: java.lang.Throwable -> L1e
            r1 = 1
            r0.a(r1)     // Catch: java.lang.Throwable -> L1e
        L11:
            com.mbridge.msdk.reward.a.a r0 = r2.a     // Catch: java.lang.Throwable -> L1e
            r0.b(r3, r4)     // Catch: java.lang.Throwable -> L1e
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L1e
            r3.f(r4)     // Catch: java.lang.Throwable -> L1e
            goto L28
        L1e:
            r3 = move-exception
            java.lang.String r4 = r3.getMessage()
            java.lang.String r0 = "MBRewardVideoHandler"
            com.mbridge.msdk.foundation.tools.z.c(r0, r4, r3)
        L28:
            return
    }

    public void clearVideoCache() {
            r1 = this;
            com.mbridge.msdk.reward.a.a r0 = r1.a     // Catch: java.lang.Exception -> L8
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
            com.mbridge.msdk.reward.a.a r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.b()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public boolean isReady() {
            r5 = this;
            com.mbridge.msdk.reward.a.a r0 = r5.a
            java.lang.String r1 = "niv"
            r2 = 0
            if (r0 == 0) goto L22
            r3 = 1
            boolean r0 = r0.e(r3)
            if (r0 == 0) goto L18
            com.mbridge.msdk.foundation.same.report.f r3 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r4 = r5.b
            r3.d(r4, r1, r2)
            goto L21
        L18:
            com.mbridge.msdk.foundation.same.report.f r3 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r4 = r5.b
            r3.e(r4, r1, r2)
        L21:
            return r0
        L22:
            com.mbridge.msdk.foundation.same.report.f r0 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r3 = r5.b
            r0.e(r3, r1, r2)
            return r2
    }

    public void load() {
            r4 = this;
            com.mbridge.msdk.foundation.same.report.f r0 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r1 = r4.b
            java.lang.String r2 = "niv"
            r3 = 0
            r0.a(r1, r2, r3)
            com.mbridge.msdk.reward.a.a r0 = r4.a
            if (r0 == 0) goto L14
            r1 = 1
            r0.d(r1)
        L14:
            return
    }

    public void loadFormSelfFilling() {
            r4 = this;
            com.mbridge.msdk.foundation.same.report.f r0 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r1 = r4.b
            r2 = 0
            java.lang.String r3 = "niv"
            r0.a(r1, r3, r2)
            com.mbridge.msdk.reward.a.a r0 = r4.a
            if (r0 == 0) goto L13
            r0.d(r2)
        L13:
            return
    }

    public void playVideoMute(int r2) {
            r1 = this;
            com.mbridge.msdk.reward.a.a r0 = r1.a
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setAlertDialogText(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            com.mbridge.msdk.reward.a.a r0 = r1.a
            if (r0 == 0) goto L7
            r0.a(r2, r3, r4, r5)
        L7:
            return
    }

    public void setIVRewardEnable(int r5, double r6) {
            r4 = this;
            com.mbridge.msdk.reward.a.a r0 = r4.a
            if (r0 == 0) goto Ld
            int r1 = com.mbridge.msdk.foundation.same.a.y
            r2 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r6 = r6 * r2
            int r6 = (int) r6
            r0.a(r5, r1, r6)
        Ld:
            return
    }

    public void setIVRewardEnable(int r3, int r4) {
            r2 = this;
            com.mbridge.msdk.reward.a.a r0 = r2.a
            if (r0 == 0) goto L9
            int r1 = com.mbridge.msdk.foundation.same.a.z
            r0.a(r3, r1, r4)
        L9:
            return
    }

    public void setInterstitialVideoListener(com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r5) {
            r4 = this;
            com.mbridge.msdk.reward.a.a r0 = r4.a
            if (r0 == 0) goto Lf
            com.mbridge.msdk.newinterstitial.a.a r1 = new com.mbridge.msdk.newinterstitial.a.a
            java.lang.String r2 = r4.b
            r3 = 0
            r1.<init>(r5, r2, r3)
            r0.a(r1)
        Lf:
            return
    }

    public void setRewardVideoListener(com.mbridge.msdk.newinterstitial.out.NewInterstitialListener r5) {
            r4 = this;
            com.mbridge.msdk.reward.a.a r0 = r4.a
            if (r0 == 0) goto Lf
            com.mbridge.msdk.newinterstitial.a.a r1 = new com.mbridge.msdk.newinterstitial.a.a
            java.lang.String r2 = r4.b
            r3 = 0
            r1.<init>(r5, r2, r3)
            r0.a(r1)
        Lf:
            return
    }

    public void show() {
            r4 = this;
            com.mbridge.msdk.foundation.same.report.f r0 = com.mbridge.msdk.foundation.same.report.f.a()
            java.lang.String r1 = r4.b
            java.lang.String r2 = "niv"
            r3 = 0
            r0.f(r1, r2, r3)
            com.mbridge.msdk.reward.a.a r0 = r4.a
            if (r0 == 0) goto L14
            r1 = 0
            r0.a(r1, r1, r1)
        L14:
            return
    }
}
