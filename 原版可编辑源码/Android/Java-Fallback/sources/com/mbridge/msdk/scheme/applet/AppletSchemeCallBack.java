package com.mbridge.msdk.scheme.applet;

public abstract class AppletSchemeCallBack implements com.mbridge.msdk.scheme.applet.IAppletSchemeCallBack {
    private static final java.lang.String TAG = "AppletSchemeCallBack";

    public AppletSchemeCallBack() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onAppletSchemeRequestFailed(int r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.onRequestFailed(r1, r2, r3)     // Catch: java.lang.Exception -> L4
            goto L12
        L4:
            r1 = move-exception
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r2 == 0) goto L12
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "AppletSchemeCallBack"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L12:
            return
    }

    @Override
    public void onAppletSchemeRequestStart() {
            r2 = this;
            r2.onRequestStart()     // Catch: java.lang.Exception -> L4
            goto L12
        L4:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L12
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "AppletSchemeCallBack"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L12:
            return
    }

    @Override
    public void onAppletSchemeRequestSuccess(java.lang.String r2) {
            r1 = this;
            r1.onRequestSuccess(r2)     // Catch: java.lang.Exception -> L4
            goto L12
        L4:
            r2 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L12
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "AppletSchemeCallBack"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L12:
            return
    }

    @Override
    public void onNetworkError(int r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.onRequestFailed(r1, r2, r3)     // Catch: java.lang.Exception -> L4
            goto L12
        L4:
            r1 = move-exception
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r2 == 0) goto L12
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "AppletSchemeCallBack"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L12:
            return
    }

    protected abstract void onRequestFailed(int r1, java.lang.String r2, java.lang.String r3);

    protected abstract void onRequestStart();

    protected abstract void onRequestSuccess(java.lang.String r1);
}
