package com.mbridge.msdk.video.bt.module;

public class MBridgeBTLayout extends com.mbridge.msdk.video.bt.module.BTBaseView {
    private android.webkit.WebView p;

    public MBridgeBTLayout(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MBridgeBTLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public void broadcast(java.lang.String r5, org.json.JSONObject r6) {
            r4 = this;
            java.lang.String r0 = "broadcast"
            android.webkit.WebView r1 = r4.p
            if (r1 == 0) goto L49
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L3c
            r1.<init>()     // Catch: java.lang.Exception -> L3c
            java.lang.String r2 = "code"
            int r3 = com.mbridge.msdk.video.bt.module.MBridgeBTLayout.n     // Catch: java.lang.Exception -> L3c
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L3c
            java.lang.String r2 = "id"
            java.lang.String r3 = r4.getInstanceId()     // Catch: java.lang.Exception -> L3c
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L3c
            java.lang.String r2 = "eventName"
            r1.put(r2, r5)     // Catch: java.lang.Exception -> L3c
            java.lang.String r5 = "data"
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L3c
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L3c
            android.webkit.WebView r6 = r4.p     // Catch: java.lang.Exception -> L3c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L3c
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> L3c
            r2 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)     // Catch: java.lang.Exception -> L3c
            r5.a(r6, r0, r1)     // Catch: java.lang.Exception -> L3c
            goto L49
        L3c:
            com.mbridge.msdk.video.bt.a.c r5 = com.mbridge.msdk.video.bt.a.c.a()
            android.webkit.WebView r6 = r4.p
            java.lang.String r1 = r4.getInstanceId()
            r5.a(r6, r0, r1)
        L49:
            return
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            return
    }

    public void notifyEvent(java.lang.String r3) {
            r2 = this;
            android.webkit.WebView r0 = r2.p
            if (r0 == 0) goto L9
            java.lang.String r1 = r2.d
            a(r0, r3, r1)
        L9:
            return
    }

    public void onBackPressed() {
            r4 = this;
            android.webkit.WebView r0 = r4.p
            if (r0 == 0) goto L11
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()
            android.webkit.WebView r1 = r4.p
            java.lang.String r2 = r4.d
            java.lang.String r3 = "onSystemBackPressed"
            r0.a(r1, r3, r2)
        L11:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r5) {
            r4 = this;
            android.webkit.WebView r0 = r4.p
            if (r0 == 0) goto L49
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.b     // Catch: java.lang.Exception -> L45
            if (r0 == 0) goto L11
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.b     // Catch: java.lang.Exception -> L45
            boolean r0 = r0.isDynamicView()     // Catch: java.lang.Exception -> L45
            if (r0 == 0) goto L11
            return
        L11:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L45
            r0.<init>()     // Catch: java.lang.Exception -> L45
            int r5 = r5.orientation     // Catch: java.lang.Exception -> L45
            r1 = 2
            java.lang.String r2 = "orientation"
            if (r5 != r1) goto L23
            java.lang.String r5 = "landscape"
            r0.put(r2, r5)     // Catch: java.lang.Exception -> L45
            goto L28
        L23:
            java.lang.String r5 = "portrait"
            r0.put(r2, r5)     // Catch: java.lang.Exception -> L45
        L28:
            java.lang.String r5 = "instanceId"
            java.lang.String r3 = r4.d     // Catch: java.lang.Exception -> L45
            r0.put(r5, r3)     // Catch: java.lang.Exception -> L45
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L45
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L45
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r1)     // Catch: java.lang.Exception -> L45
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L45
            android.webkit.WebView r1 = r4.p     // Catch: java.lang.Exception -> L45
            r0.a(r1, r2, r5)     // Catch: java.lang.Exception -> L45
            goto L49
        L45:
            r5 = move-exception
            r5.printStackTrace()
        L49:
            return
    }

    @Override
    public void onDestory() {
            r0 = this;
            return
    }

    public void setWebView(android.webkit.WebView r1) {
            r0 = this;
            r0.p = r1
            return
    }
}
