package com.mbridge.msdk.splash.view;

public class MBSplashWebview extends com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView {
    private static final java.lang.String e = null;
    private java.lang.String f;
    private com.iab.omid.library.mmadbridge.adsession.AdSession g;

    static {
            java.lang.Class<com.mbridge.msdk.splash.view.MBSplashWebview> r0 = com.mbridge.msdk.splash.view.MBSplashWebview.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.splash.view.MBSplashWebview.e = r0
            return
    }

    public MBSplashWebview(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.setBackgroundColor(r1)
            return
    }

    public void finishAdSession() {
            r2 = this;
            java.lang.String r0 = "OMSDK"
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r2.g     // Catch: java.lang.Exception -> L14
            if (r1 == 0) goto L1c
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r2.g     // Catch: java.lang.Exception -> L14
            r1.finish()     // Catch: java.lang.Exception -> L14
            r1 = 0
            r2.g = r1     // Catch: java.lang.Exception -> L14
            java.lang.String r1 = "finish adSession"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> L14
            goto L1c
        L14:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
        L1c:
            return
    }

    public com.iab.omid.library.mmadbridge.adsession.AdSession getAdSession() {
            r1 = this;
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r1.g
            return r0
    }

    public java.lang.String getRequestId() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public void setAdSession(com.iab.omid.library.mmadbridge.adsession.AdSession r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setRequestId(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }
}
