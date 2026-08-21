package com.mbridge.msdk.activity;

public class MBCommonActivity extends com.mbridge.msdk.activity.DomainMBCommonActivity {
    private boolean b;

    public MBCommonActivity() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            return
    }

    @Override
    public void finish() {
            r3 = this;
            com.mbridge.msdk.foundation.webview.BrowserView r0 = r3.browserView
            r1 = 0
            if (r0 == 0) goto Lf
            com.mbridge.msdk.foundation.webview.BrowserView r0 = r3.browserView
            r0.setListener(r1)
            com.mbridge.msdk.foundation.webview.BrowserView r0 = r3.browserView
            r0.destroy()
        Lf:
            java.util.HashMap<java.lang.String, com.mbridge.msdk.foundation.webview.BrowserView> r0 = com.mbridge.msdk.foundation.webview.b.a
            java.lang.String r2 = r3.a
            java.lang.Object r0 = r0.remove(r2)
            com.mbridge.msdk.foundation.webview.BrowserView r0 = (com.mbridge.msdk.foundation.webview.BrowserView) r0
            if (r0 == 0) goto L21
            r0.setListener(r1)
            r0.destroy()
        L21:
            r0 = 1
            r3.b = r0
            super.finish()
            return
    }

    @Override
    protected void onDestroy() {
            r3 = this;
            super.onDestroy()
            boolean r0 = r3.b
            if (r0 != 0) goto L28
            com.mbridge.msdk.foundation.webview.BrowserView r0 = r3.browserView
            r1 = 0
            if (r0 == 0) goto L16
            com.mbridge.msdk.foundation.webview.BrowserView r0 = r3.browserView
            r0.setListener(r1)
            com.mbridge.msdk.foundation.webview.BrowserView r0 = r3.browserView
            r0.destroy()
        L16:
            java.util.HashMap<java.lang.String, com.mbridge.msdk.foundation.webview.BrowserView> r0 = com.mbridge.msdk.foundation.webview.b.a
            java.lang.String r2 = r3.a
            java.lang.Object r0 = r0.remove(r2)
            com.mbridge.msdk.foundation.webview.BrowserView r0 = (com.mbridge.msdk.foundation.webview.BrowserView) r0
            if (r0 == 0) goto L28
            r0.setListener(r1)
            r0.destroy()
        L28:
            return
    }
}
