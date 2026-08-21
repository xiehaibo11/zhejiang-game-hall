package com.tkay.expressad.atsignalcommon.bridge;

public interface IBannerJSBridge extends com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge {
    void cai(java.lang.Object r1, java.lang.String r2);

    void click(java.lang.Object r1, java.lang.String r2);

    void getFileInfo(java.lang.Object r1, java.lang.String r2);

    void getNetstat(java.lang.Object r1, java.lang.String r2);

    void gial(java.lang.Object r1, java.lang.String r2);

    void handlerH5Exception(java.lang.Object r1, java.lang.String r2);

    void increaseOfferFrequence(java.lang.Object r1, java.lang.String r2);

    void init(java.lang.Object r1, java.lang.String r2);

    void install(java.lang.Object r1, java.lang.String r2);

    void onJSBridgeConnect(java.lang.Object r1, java.lang.String r2);

    void openURL(java.lang.Object r1, java.lang.String r2);

    void readyStatus(java.lang.Object r1, java.lang.String r2);

    void reportUrls(java.lang.Object r1, java.lang.String r2);

    void resetCountdown(java.lang.Object r1, java.lang.String r2);

    void sendImpressions(java.lang.Object r1, java.lang.String r2);

    void toggleCloseBtn(java.lang.Object r1, java.lang.String r2);

    void triggerCloseBtn(java.lang.Object r1, java.lang.String r2);
}
