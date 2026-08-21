package com.tkay.expressad.atsignalcommon.communication;

public class BannerSignalPlugin extends com.tkay.expressad.atsignalcommon.windvane.l {
    private final java.lang.String a;
    private com.tkay.expressad.atsignalcommon.communication.b b;

    public BannerSignalPlugin() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "BannerSignalPlugin"
            r1.a = r0
            return
    }

    public void click(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void getFileInfo(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void getNetstat(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void handlerH5Exception(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void increaseOfferFrequence(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void init(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public void initialize(android.content.Context r2, com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r3) {
            r1 = this;
            super.initialize(r2, r3)
            boolean r0 = r2 instanceof com.tkay.expressad.atsignalcommon.communication.b     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto Lc
            com.tkay.expressad.atsignalcommon.communication.b r2 = (com.tkay.expressad.atsignalcommon.communication.b) r2     // Catch: java.lang.Throwable -> L22
            r1.b = r2     // Catch: java.lang.Throwable -> L22
            return
        Lc:
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Throwable -> L22
            if (r2 == 0) goto L22
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Throwable -> L22
            boolean r2 = r2 instanceof com.tkay.expressad.atsignalcommon.communication.b     // Catch: java.lang.Throwable -> L22
            if (r2 == 0) goto L22
            java.lang.Object r2 = r3.getObject()     // Catch: java.lang.Throwable -> L22
            com.tkay.expressad.atsignalcommon.communication.b r2 = (com.tkay.expressad.atsignalcommon.communication.b) r2     // Catch: java.lang.Throwable -> L22
            r1.b = r2     // Catch: java.lang.Throwable -> L22
        L22:
            return
    }

    public void install(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void onSignalCommunication(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void openURL(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void readyStatus(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void reportUrls(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void resetCountdown(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void sendImpressions(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void toggleCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void triggerCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }
}
