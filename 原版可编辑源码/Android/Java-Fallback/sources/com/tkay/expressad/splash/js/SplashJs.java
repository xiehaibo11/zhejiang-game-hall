package com.tkay.expressad.splash.js;

public class SplashJs extends com.tkay.expressad.atsignalcommon.windvane.AbsFeedBackForH5 {
    private static java.lang.String h = "SplashJs";
    private com.tkay.expressad.splash.js.SplashJSBridgeImpl i;

    static {
            return
    }

    public SplashJs() {
            r0 = this;
            r0.<init>()
            return
    }

    public void cai(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i
            if (r0 == 0) goto L7
            r0.cai(r2, r3)
        L7:
            return
    }

    public void getFileInfo(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: org.json.JSONException -> Lf
            if (r0 != 0) goto Le
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Lf
            r0.<init>(r3)     // Catch: org.json.JSONException -> Lf
            com.tkay.expressad.splash.js.SplashJsUtils.getFileInfo(r2, r0)     // Catch: org.json.JSONException -> Lf
        Le:
            return
        Lf:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    public void gial(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i
            if (r0 == 0) goto L7
            r0.gial(r2, r3)
        L7:
            return
    }

    public void handlerH5Exception(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            if (r4 == 0) goto L21
            com.tkay.expressad.atsignalcommon.windvane.a r4 = (com.tkay.expressad.atsignalcommon.windvane.a) r4     // Catch: java.lang.Throwable -> L21
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r4.a     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L21
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r4.a     // Catch: java.lang.Throwable -> L21
            com.tkay.expressad.atsignalcommon.windvane.e r0 = r4.getWebViewListener()     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L21
            com.tkay.expressad.atsignalcommon.windvane.e r0 = r4.getWebViewListener()     // Catch: java.lang.Throwable -> L21
            r1 = 0
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = r4.getUrl()     // Catch: java.lang.Throwable -> L21
            r0.onReceivedError(r4, r1, r5, r2)     // Catch: java.lang.Throwable -> L21
        L21:
            return
    }

    public void increaseOfferFrequence(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L9
            r0.<init>(r3)     // Catch: org.json.JSONException -> L9
            com.tkay.expressad.splash.js.SplashJsUtils.increaseOfferFrequence(r2, r0)     // Catch: org.json.JSONException -> L9
            return
        L9:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    public void init(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i
            if (r0 == 0) goto L7
            r0.init(r2, r3)
        L7:
            return
    }

    @Override
    public void initialize(android.content.Context r1, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r2) {
            r0 = this;
            super.initialize(r1, r2)
            java.lang.Object r1 = r2.getObject()     // Catch: java.lang.Throwable -> L19
            if (r1 == 0) goto L19
            java.lang.Object r1 = r2.getObject()     // Catch: java.lang.Throwable -> L19
            boolean r1 = r1 instanceof com.tkay.expressad.splash.js.SplashJSBridgeImpl     // Catch: java.lang.Throwable -> L19
            if (r1 == 0) goto L19
            java.lang.Object r1 = r2.getObject()     // Catch: java.lang.Throwable -> L19
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r1 = (com.tkay.expressad.splash.js.SplashJSBridgeImpl) r1     // Catch: java.lang.Throwable -> L19
            r0.i = r1     // Catch: java.lang.Throwable -> L19
        L19:
            return
    }

    public void install(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i
            if (r0 == 0) goto L7
            r0.install(r2, r3)
        L7:
            return
    }

    public void onJSBridgeConnect(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.onJSBridgeConnect(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void openURL(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i
            if (r0 == 0) goto L7
            r0.openURL(r2, r3)
        L7:
            return
    }

    public void pauseCountDown(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.pauseCountDown(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void readyStatus(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            if (r3 == 0) goto L24
            com.tkay.expressad.atsignalcommon.windvane.a r3 = (com.tkay.expressad.atsignalcommon.windvane.a) r3     // Catch: java.lang.Throwable -> L24
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L24
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L24
            java.lang.String r4 = "isReady"
            r1 = 1
            int r4 = r0.optInt(r4, r1)     // Catch: java.lang.Throwable -> L24
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.a     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L24
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3 = r3.a     // Catch: java.lang.Throwable -> L24
            com.tkay.expressad.atsignalcommon.windvane.e r0 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L24
            com.tkay.expressad.atsignalcommon.windvane.e r0 = r3.getWebViewListener()     // Catch: java.lang.Throwable -> L24
            r0.readyState(r3, r4)     // Catch: java.lang.Throwable -> L24
        L24:
            return
    }

    public void reportUrls(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.reportUrls(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void resetCountdown(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i
            if (r0 == 0) goto L7
            r0.resetCountdown(r2, r3)
        L7:
            return
    }

    public void resumeCountDown(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.resumeCountDown(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void sendImpressions(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.sendImpressions(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void toggleCloseBtn(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i
            if (r0 == 0) goto L7
            r0.toggleCloseBtn(r2, r3)
        L7:
            return
    }

    public void triggerCloseBtn(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r1.i
            if (r0 == 0) goto L7
            r0.triggerCloseBtn(r2, r3)
        L7:
            return
    }
}
