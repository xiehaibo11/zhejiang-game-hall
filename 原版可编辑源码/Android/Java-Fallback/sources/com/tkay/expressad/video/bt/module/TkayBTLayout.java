package com.tkay.expressad.video.bt.module;

public class TkayBTLayout extends com.tkay.expressad.video.bt.module.BTBaseView {
    private static final java.lang.String p = "portrait";
    private static final java.lang.String q = "landscape";
    private android.webkit.WebView r;

    public TkayBTLayout(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public TkayBTLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public void broadcast(java.lang.String r5, org.json.JSONObject r6) {
            r4 = this;
            java.lang.String r0 = "broadcast"
            android.webkit.WebView r1 = r4.r
            if (r1 == 0) goto L47
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L3b
            r1.<init>()     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = "code"
            int r3 = com.tkay.expressad.video.bt.module.TkayBTLayout.n     // Catch: java.lang.Exception -> L3b
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = "id"
            java.lang.String r3 = r4.getInstanceId()     // Catch: java.lang.Exception -> L3b
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = "eventName"
            r1.put(r2, r5)     // Catch: java.lang.Exception -> L3b
            java.lang.String r5 = "data"
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L3b
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L3b
            android.webkit.WebView r5 = r4.r     // Catch: java.lang.Exception -> L3b
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Exception -> L3b
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L3b
            r1 = 2
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r1)     // Catch: java.lang.Exception -> L3b
            com.tkay.expressad.atsignalcommon.windvane.j.a(r5, r0, r6)     // Catch: java.lang.Exception -> L3b
            return
        L3b:
            com.tkay.expressad.video.bt.a.c.a()
            android.webkit.WebView r5 = r4.r
            java.lang.String r6 = r4.getInstanceId()
            com.tkay.expressad.video.bt.a.c.a(r5, r0, r6)
        L47:
            return
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            return
    }

    public void notifyEvent(java.lang.String r3) {
            r2 = this;
            android.webkit.WebView r0 = r2.r
            if (r0 == 0) goto L9
            java.lang.String r1 = r2.d
            a(r0, r3, r1)
        L9:
            return
    }

    public void onBackPressed() {
            r3 = this;
            android.webkit.WebView r0 = r3.r
            if (r0 == 0) goto L10
            com.tkay.expressad.video.bt.a.c.a()
            android.webkit.WebView r0 = r3.r
            java.lang.String r1 = r3.d
            java.lang.String r2 = "onSystemBackPressed"
            com.tkay.expressad.video.bt.a.c.a(r0, r2, r1)
        L10:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r5) {
            r4 = this;
            android.webkit.WebView r0 = r4.r
            if (r0 == 0) goto L48
            com.tkay.expressad.foundation.d.c r0 = r4.b     // Catch: java.lang.Exception -> L44
            if (r0 == 0) goto L11
            com.tkay.expressad.foundation.d.c r0 = r4.b     // Catch: java.lang.Exception -> L44
            boolean r0 = r0.j()     // Catch: java.lang.Exception -> L44
            if (r0 == 0) goto L11
            return
        L11:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L44
            r0.<init>()     // Catch: java.lang.Exception -> L44
            int r5 = r5.orientation     // Catch: java.lang.Exception -> L44
            r1 = 2
            java.lang.String r2 = "orientation"
            if (r5 != r1) goto L23
            java.lang.String r5 = "landscape"
            r0.put(r2, r5)     // Catch: java.lang.Exception -> L44
            goto L28
        L23:
            java.lang.String r5 = "portrait"
            r0.put(r2, r5)     // Catch: java.lang.Exception -> L44
        L28:
            java.lang.String r5 = "instanceId"
            java.lang.String r3 = r4.d     // Catch: java.lang.Exception -> L44
            r0.put(r5, r3)     // Catch: java.lang.Exception -> L44
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L44
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L44
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r1)     // Catch: java.lang.Exception -> L44
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L44
            android.webkit.WebView r0 = r4.r     // Catch: java.lang.Exception -> L44
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r2, r5)     // Catch: java.lang.Exception -> L44
            return
        L44:
            r5 = move-exception
            r5.printStackTrace()
        L48:
            return
    }

    @Override
    public void onDestory() {
            r0 = this;
            return
    }

    public void setWebView(android.webkit.WebView r1) {
            r0 = this;
            r0.r = r1
            return
    }
}
