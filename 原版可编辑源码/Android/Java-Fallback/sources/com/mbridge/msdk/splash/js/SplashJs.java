package com.mbridge.msdk.splash.js;

public class SplashJs extends com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload {
    private static java.lang.String a = "SplashJs";
    private com.mbridge.msdk.splash.js.b b;

    static {
            return
    }

    public SplashJs() {
            r0 = this;
            r0.<init>()
            return
    }

    public void cai(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.splash.js.SplashJs.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "cai"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            com.mbridge.msdk.splash.js.b r0 = r3.b
            if (r0 == 0) goto L1d
            r0.f(r4, r5)
        L1d:
            return
    }

    public void getFileInfo(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> Lf
            if (r0 != 0) goto L13
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Lf
            r0.<init>(r3)     // Catch: org.json.JSONException -> Lf
            com.mbridge.msdk.splash.js.c.a(r2, r0)     // Catch: org.json.JSONException -> Lf
            goto L13
        Lf:
            r2 = move-exception
            r2.printStackTrace()
        L13:
            return
    }

    public void gial(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.splash.js.SplashJs.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "gial"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            com.mbridge.msdk.splash.js.b r0 = r3.b
            if (r0 == 0) goto L1d
            r0.g(r4, r5)
        L1d:
            return
    }

    public void handlerH5Exception(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            if (r4 == 0) goto L29
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L21
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r4.a     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L29
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a     // Catch: java.lang.Throwable -> L21
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r4.getWebViewListener()     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L29
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r4.getWebViewListener()     // Catch: java.lang.Throwable -> L21
            r1 = 0
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = r4.getUrl()     // Catch: java.lang.Throwable -> L21
            r0.a(r4, r1, r5, r2)     // Catch: java.lang.Throwable -> L21
            goto L29
        L21:
            r4 = move-exception
            java.lang.String r5 = com.mbridge.msdk.splash.js.SplashJs.a
            java.lang.String r0 = "handlerH5Exception"
            com.mbridge.msdk.foundation.tools.z.c(r5, r0, r4)
        L29:
            return
    }

    public void increaseOfferFrequence(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L9
            r0.<init>(r3)     // Catch: org.json.JSONException -> L9
            com.mbridge.msdk.splash.js.c.b(r2, r0)     // Catch: org.json.JSONException -> L9
            goto Ld
        L9:
            r2 = move-exception
            r2.printStackTrace()
        Ld:
            return
    }

    public void init(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.splash.js.SplashJs.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "initialize"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            com.mbridge.msdk.splash.js.b r0 = r3.b
            if (r0 == 0) goto L1d
            r0.a(r4, r5)
        L1d:
            return
    }

    @Override
    public void initialize(android.content.Context r2, com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3) {
            r1 = this;
            super.initialize(r2, r3)
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L22
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Throwable -> L1a
            boolean r2 = r2 instanceof com.mbridge.msdk.splash.js.b     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L22
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Throwable -> L1a
            com.mbridge.msdk.splash.js.b r2 = (com.mbridge.msdk.splash.js.b) r2     // Catch: java.lang.Throwable -> L1a
            r1.b = r2     // Catch: java.lang.Throwable -> L1a
            goto L22
        L1a:
            r2 = move-exception
            java.lang.String r3 = com.mbridge.msdk.splash.js.SplashJs.a
            java.lang.String r0 = "initialize"
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r2)
        L22:
            return
    }

    public void install(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r3 = r1.addDownloaderListener(r2, r3)
            com.mbridge.msdk.splash.js.b r0 = r1.b
            if (r0 == 0) goto Lb
            r0.d(r2, r3)
        Lb:
            return
    }

    public void onJSBridgeConnect(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "onJSBridgeConnect"
            java.lang.String r1 = com.mbridge.msdk.splash.js.SplashJs.a     // Catch: java.lang.Throwable -> L11
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L11
            com.mbridge.msdk.splash.js.b r1 = r2.b     // Catch: java.lang.Throwable -> L11
            if (r1 == 0) goto L17
            com.mbridge.msdk.splash.js.b r1 = r2.b     // Catch: java.lang.Throwable -> L11
            r1.k(r3, r4)     // Catch: java.lang.Throwable -> L11
            goto L17
        L11:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.splash.js.SplashJs.a
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r3)
        L17:
            return
    }

    public void openURL(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.splash.js.SplashJs.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "openURL"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            com.mbridge.msdk.splash.js.b r0 = r3.b
            if (r0 == 0) goto L1d
            r0.e(r4, r5)
        L1d:
            return
    }

    public void pauseCountDown(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "pauseCountDown"
            java.lang.String r1 = com.mbridge.msdk.splash.js.SplashJs.a     // Catch: java.lang.Throwable -> L11
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L11
            com.mbridge.msdk.splash.js.b r1 = r2.b     // Catch: java.lang.Throwable -> L11
            if (r1 == 0) goto L17
            com.mbridge.msdk.splash.js.b r1 = r2.b     // Catch: java.lang.Throwable -> L11
            r1.l(r3, r4)     // Catch: java.lang.Throwable -> L11
            goto L17
        L11:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.splash.js.SplashJs.a
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r3)
        L17:
            return
    }

    public void readyStatus(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            if (r3 == 0) goto L2c
            com.mbridge.msdk.mbjscommon.windvane.a r3 = (com.mbridge.msdk.mbjscommon.windvane.a) r3     // Catch: java.lang.Throwable -> L24
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L24
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L24
            java.lang.String r4 = "isReady"
            r1 = 1
            int r4 = r0.optInt(r4, r1)     // Catch: java.lang.Throwable -> L24
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L2c
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L24
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L2c
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L24
            r0.a(r3, r4)     // Catch: java.lang.Throwable -> L24
            goto L2c
        L24:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.splash.js.SplashJs.a
            java.lang.String r0 = "readyStatus"
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r3)
        L2c:
            return
    }

    public void reportUrls(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "reportUrls"
            java.lang.String r1 = com.mbridge.msdk.splash.js.SplashJs.a     // Catch: java.lang.Throwable -> L11
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L11
            com.mbridge.msdk.splash.js.b r1 = r2.b     // Catch: java.lang.Throwable -> L11
            if (r1 == 0) goto L17
            com.mbridge.msdk.splash.js.b r1 = r2.b     // Catch: java.lang.Throwable -> L11
            r1.j(r3, r4)     // Catch: java.lang.Throwable -> L11
            goto L17
        L11:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.splash.js.SplashJs.a
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r3)
        L17:
            return
    }

    public void resetCountdown(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.splash.js.SplashJs.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "resetCountdown"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            com.mbridge.msdk.splash.js.b r0 = r3.b
            if (r0 == 0) goto L1d
            r0.h(r4, r5)
        L1d:
            return
    }

    public void resumeCountDown(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "resumeCountDown"
            java.lang.String r1 = com.mbridge.msdk.splash.js.SplashJs.a     // Catch: java.lang.Throwable -> L11
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L11
            com.mbridge.msdk.splash.js.b r1 = r2.b     // Catch: java.lang.Throwable -> L11
            if (r1 == 0) goto L17
            com.mbridge.msdk.splash.js.b r1 = r2.b     // Catch: java.lang.Throwable -> L11
            r1.m(r3, r4)     // Catch: java.lang.Throwable -> L11
            goto L17
        L11:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.splash.js.SplashJs.a
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r3)
        L17:
            return
    }

    public void sendImpressions(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "sendImpressions"
            java.lang.String r1 = com.mbridge.msdk.splash.js.SplashJs.a     // Catch: java.lang.Throwable -> L11
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> L11
            com.mbridge.msdk.splash.js.b r1 = r2.b     // Catch: java.lang.Throwable -> L11
            if (r1 == 0) goto L17
            com.mbridge.msdk.splash.js.b r1 = r2.b     // Catch: java.lang.Throwable -> L11
            r1.i(r3, r4)     // Catch: java.lang.Throwable -> L11
            goto L17
        L11:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.splash.js.SplashJs.a
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r3)
        L17:
            return
    }

    @Override
    public void sendNoticeAndCallBackClick(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            r0.install(r1, r2)
            return
    }

    public void toggleCloseBtn(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.splash.js.SplashJs.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "toggleCloseBtn"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            com.mbridge.msdk.splash.js.b r0 = r3.b
            if (r0 == 0) goto L1d
            r0.b(r4, r5)
        L1d:
            return
    }

    public void triggerCloseBtn(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.splash.js.SplashJs.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "triggerCloseBtn"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            com.mbridge.msdk.splash.js.b r0 = r3.b
            if (r0 == 0) goto L1d
            r0.c(r4, r5)
        L1d:
            return
    }
}
