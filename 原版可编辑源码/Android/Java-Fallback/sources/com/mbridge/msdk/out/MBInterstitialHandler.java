package com.mbridge.msdk.out;

public class MBInterstitialHandler {
    private com.mbridge.msdk.interstitial.c.a mController;

    public MBInterstitialHandler(android.content.Context r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r3 = this;
            r3.<init>()
            com.mbridge.msdk.interstitial.c.a r0 = r3.mController
            if (r0 != 0) goto Le
            com.mbridge.msdk.interstitial.c.a r0 = new com.mbridge.msdk.interstitial.c.a
            r0.<init>()
            r3.mController = r0
        Le:
            if (r5 == 0) goto L31
            java.lang.String r0 = "unit_id"
            boolean r1 = r5.containsKey(r0)
            if (r1 == 0) goto L31
            java.lang.Object r0 = r5.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L31
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.ae.f(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L31
            com.mbridge.msdk.foundation.tools.ae.a(r0, r1)
        L31:
            com.mbridge.msdk.interstitial.c.a r0 = r3.mController
            r0.a(r4, r5)
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r5 = r5.j()
            if (r5 != 0) goto L49
            if (r4 == 0) goto L49
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            r5.b(r4)
        L49:
            return
    }

    public java.lang.String getRequestId() {
            r1 = this;
            com.mbridge.msdk.interstitial.c.a r0 = r1.mController
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.b()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public void preload() {
            r1 = this;
            com.mbridge.msdk.interstitial.c.a r0 = r1.mController     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto Le
            com.mbridge.msdk.interstitial.c.a r0 = r1.mController     // Catch: java.lang.Exception -> La
            r0.a()     // Catch: java.lang.Exception -> La
            goto Le
        La:
            r0 = move-exception
            r0.printStackTrace()
        Le:
            return
    }

    public void setInterstitialListener(com.mbridge.msdk.out.InterstitialListener r2) {
            r1 = this;
            com.mbridge.msdk.interstitial.c.a r0 = r1.mController     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto Le
            com.mbridge.msdk.interstitial.c.a r0 = r1.mController     // Catch: java.lang.Exception -> La
            r0.a(r2)     // Catch: java.lang.Exception -> La
            goto Le
        La:
            r2 = move-exception
            r2.printStackTrace()
        Le:
            return
    }

    public void show() {
            r1 = this;
            com.mbridge.msdk.interstitial.c.a r0 = r1.mController     // Catch: java.lang.Exception -> L6
            r0.c()     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r0 = move-exception
            r0.printStackTrace()
        La:
            return
    }
}
