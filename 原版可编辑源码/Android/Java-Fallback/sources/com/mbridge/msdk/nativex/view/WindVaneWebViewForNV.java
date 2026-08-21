package com.mbridge.msdk.nativex.view;

public class WindVaneWebViewForNV extends com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView {
    private static java.lang.String e = "WindVaneWebViewForNV";
    private com.mbridge.msdk.nativex.listener.b f;
    private boolean g;

    static {
            return
    }

    public WindVaneWebViewForNV(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.g = r1
            return
    }

    public WindVaneWebViewForNV(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.g = r1
            return
    }

    public WindVaneWebViewForNV(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.g = r1
            return
    }

    @Override
    public boolean onKeyDown(int r4, android.view.KeyEvent r5) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.nativex.view.WindVaneWebViewForNV.e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "====webview 返回keyCode:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            r0 = 4
            if (r4 != r0) goto L29
            java.lang.String r0 = com.mbridge.msdk.nativex.view.WindVaneWebViewForNV.e
            java.lang.String r1 = "====webview 返回"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            com.mbridge.msdk.nativex.listener.b r0 = r3.f
            if (r0 == 0) goto L29
            r0.a()
            r4 = 1
            return r4
        L29:
            boolean r4 = super.onKeyDown(r4, r5)
            return r4
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            boolean r0 = r1.g
            if (r0 == 0) goto L6
            r2 = 0
            return r2
        L6:
            boolean r2 = super.onTouchEvent(r2)
            return r2
    }

    public void orientation(boolean r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L29
            r0.<init>()     // Catch: java.lang.Exception -> L29
            java.lang.String r1 = "orientation"
            if (r3 == 0) goto Lf
            java.lang.String r3 = "landscape"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L29
            goto L14
        Lf:
            java.lang.String r3 = "portrait"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L29
        L14:
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L29
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Exception -> L29
            r0 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r0)     // Catch: java.lang.Exception -> L29
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L29
            r0.a(r2, r1, r3)     // Catch: java.lang.Exception -> L29
            goto L2d
        L29:
            r3 = move-exception
            r3.printStackTrace()
        L2d:
            return
    }

    public void setBackListener(com.mbridge.msdk.nativex.listener.b r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setInterceptTouch(boolean r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void webViewShow(com.mbridge.msdk.foundation.entity.CampaignEx r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "webviewshow"
            java.lang.String r1 = com.mbridge.msdk.nativex.view.WindVaneWebViewForNV.e     // Catch: java.lang.Exception -> L56
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)     // Catch: java.lang.Exception -> L56
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L56
            java.lang.String r2 = ""
            r1.a(r3, r0, r2)     // Catch: java.lang.Exception -> L56
            com.mbridge.msdk.foundation.entity.p r0 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L56
            r0.<init>()     // Catch: java.lang.Exception -> L56
            java.lang.String r1 = r4.getRequestId()     // Catch: java.lang.Exception -> L56
            r0.k(r1)     // Catch: java.lang.Exception -> L56
            java.lang.String r1 = r4.getRequestIdNotice()     // Catch: java.lang.Exception -> L56
            r0.l(r1)     // Catch: java.lang.Exception -> L56
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Exception -> L56
            if (r1 == 0) goto L55
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Exception -> L56
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Exception -> L56
            if (r1 != 0) goto L34
            goto L55
        L34:
            java.lang.String r1 = r4.getId()     // Catch: java.lang.Exception -> L56
            r0.n(r1)     // Catch: java.lang.Exception -> L56
            boolean r4 = r4.isMraid()     // Catch: java.lang.Exception -> L56
            if (r4 == 0) goto L44
            int r4 = com.mbridge.msdk.foundation.entity.p.a     // Catch: java.lang.Exception -> L56
            goto L46
        L44:
            int r4 = com.mbridge.msdk.foundation.entity.p.b     // Catch: java.lang.Exception -> L56
        L46:
            r0.a(r4)     // Catch: java.lang.Exception -> L56
            android.content.Context r4 = r3.getContext()     // Catch: java.lang.Exception -> L56
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Exception -> L56
            com.mbridge.msdk.foundation.same.report.c.a(r0, r4, r5)     // Catch: java.lang.Exception -> L56
            goto L5a
        L55:
            return
        L56:
            r4 = move-exception
            r4.printStackTrace()
        L5a:
            return
    }
}
