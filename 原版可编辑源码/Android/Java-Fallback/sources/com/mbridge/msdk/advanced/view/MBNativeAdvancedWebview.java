package com.mbridge.msdk.advanced.view;

public class MBNativeAdvancedWebview extends com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView {
    private static final java.lang.String e = null;
    private com.iab.omid.library.mmadbridge.adsession.AdSession f;
    private com.mbridge.msdk.advanced.common.NetWorkStateReceiver g;

    static {
            java.lang.Class<com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview> r0 = com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview.e = r0
            return
    }

    public MBNativeAdvancedWebview(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.setBackgroundColor(r1)
            return
    }

    public void finishAdSession() {
            r2 = this;
            java.lang.String r0 = "OMSDK"
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r2.f     // Catch: java.lang.Exception -> L14
            if (r1 == 0) goto L1c
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r2.f     // Catch: java.lang.Exception -> L14
            r1.finish()     // Catch: java.lang.Exception -> L14
            r1 = 0
            r2.f = r1     // Catch: java.lang.Exception -> L14
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
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r1.f
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r0 = this;
            super.onAttachedToWindow()
            r0.registerNetWorkReceiver()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            r0.unregisterNetWorkReceiver()
            return
    }

    public void registerNetWorkReceiver() {
            r3 = this;
            com.mbridge.msdk.advanced.common.NetWorkStateReceiver r0 = r3.g     // Catch: java.lang.Throwable -> L1f
            if (r0 != 0) goto Lb
            com.mbridge.msdk.advanced.common.NetWorkStateReceiver r0 = new com.mbridge.msdk.advanced.common.NetWorkStateReceiver     // Catch: java.lang.Throwable -> L1f
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L1f
            r3.g = r0     // Catch: java.lang.Throwable -> L1f
        Lb:
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L1f
            r0.<init>()     // Catch: java.lang.Throwable -> L1f
            java.lang.String r1 = "android.net.conn.CONNECTIVITY_CHANGE"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L1f
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Throwable -> L1f
            com.mbridge.msdk.advanced.common.NetWorkStateReceiver r2 = r3.g     // Catch: java.lang.Throwable -> L1f
            r1.registerReceiver(r2, r0)     // Catch: java.lang.Throwable -> L1f
            goto L29
        L1f:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview.e
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L29:
            return
    }

    public void setAdSession(com.iab.omid.library.mmadbridge.adsession.AdSession r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void unregisterNetWorkReceiver() {
            r2 = this;
            com.mbridge.msdk.advanced.common.NetWorkStateReceiver r0 = r2.g     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto L1d
            com.mbridge.msdk.advanced.common.NetWorkStateReceiver r0 = r2.g     // Catch: java.lang.Throwable -> L13
            r0.a()     // Catch: java.lang.Throwable -> L13
            android.content.Context r0 = r2.getContext()     // Catch: java.lang.Throwable -> L13
            com.mbridge.msdk.advanced.common.NetWorkStateReceiver r1 = r2.g     // Catch: java.lang.Throwable -> L13
            r0.unregisterReceiver(r1)     // Catch: java.lang.Throwable -> L13
            goto L1d
        L13:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview.e
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L1d:
            return
    }
}
