package com.tkay.expressad.atsignalcommon.bridge;

public class BannerJSPlugin extends com.tkay.expressad.atsignalcommon.windvane.AbsFeedBackForH5 {
    private final java.lang.String h;
    private com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge i;

    public BannerJSPlugin() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "BannerJSBridge"
            r1.h = r0
            return
    }

    public void cai(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.cai(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void click(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.click(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void getFileInfo(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.getFileInfo(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void getNetstat(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.getNetstat(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void gial(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.gial(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void handlerH5Exception(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.handlerH5Exception(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void increaseOfferFrequence(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.increaseOfferFrequence(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void init(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.init(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    @Override
    public void initialize(android.content.Context r2, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3) {
            r1 = this;
            super.initialize(r2, r3)
            boolean r0 = r2 instanceof com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto Lc
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r2 = (com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge) r2     // Catch: java.lang.Throwable -> L22
            r1.i = r2     // Catch: java.lang.Throwable -> L22
            return
        Lc:
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Throwable -> L22
            if (r2 == 0) goto L22
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Throwable -> L22
            boolean r2 = r2 instanceof com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge     // Catch: java.lang.Throwable -> L22
            if (r2 == 0) goto L22
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Throwable -> L22
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r2 = (com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge) r2     // Catch: java.lang.Throwable -> L22
            r1.i = r2     // Catch: java.lang.Throwable -> L22
        L22:
            return
    }

    public void install(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.install(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void onJSBridgeConnect(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.onJSBridgeConnect(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void openURL(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.openURL(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void readyStatus(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.readyStatus(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void reportUrls(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.reportUrls(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void resetCountdown(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.resetCountdown(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void sendImpressions(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.sendImpressions(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void toggleCloseBtn(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.toggleCloseBtn(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public void triggerCloseBtn(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge r0 = r1.i     // Catch: java.lang.Throwable -> L9
            r0.triggerCloseBtn(r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }
}
