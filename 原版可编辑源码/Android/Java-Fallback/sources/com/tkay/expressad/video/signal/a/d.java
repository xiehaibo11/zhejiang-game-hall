package com.tkay.expressad.video.signal.a;

public class d implements com.tkay.expressad.video.signal.e, com.tkay.expressad.video.signal.h {
    protected static final java.lang.String j = "DefaultJSContainerModule";

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void configurationChanged(int r1, int r2, int r3) {
            r0 = this;
            return
    }

    @Override
    public boolean endCardShowing() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void handlerPlayableException(java.lang.String r1) {
            r0 = this;
            return
    }

    @Override
    public void hideAlertWebview() {
            r0 = this;
            return
    }

    @Override
    public void install(com.tkay.expressad.foundation.d.c r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "install ,campaign="
            r0.<init>(r1)
            r0.append(r3)
            return
    }

    @Override
    public void ivRewardAdsWithoutVideo(java.lang.String r1) {
            r0 = this;
            return
    }

    @Override
    public boolean miniCardLoaded() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean miniCardShowing() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void notifyCloseBtn(int r1) {
            r0 = this;
            return
    }

    @Override
    public void orientation(android.content.res.Configuration r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "orientation ,config="
            r0.<init>(r1)
            r0.append(r3)
            return
    }

    @Override
    public void preLoadData(com.tkay.expressad.video.signal.factory.b r1) {
            r0 = this;
            return
    }

    @Override
    public void readyStatus(int r1) {
            r0 = this;
            return
    }

    @Override
    public void resizeMiniCard(int r3, int r4, int r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "showMiniCard width = "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = " height = "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = " radius = "
            r0.append(r3)
            r0.append(r5)
            return
    }

    @Override
    public boolean showAlertWebView() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void showEndcard(int r1) {
            r0 = this;
            return
    }

    @Override
    public void showMiniCard(int r3, int r4, int r5, int r6, int r7) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "showMiniCard top = "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = " left = "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = " width = "
            r0.append(r3)
            r0.append(r5)
            java.lang.String r3 = " height = "
            r0.append(r3)
            r0.append(r6)
            java.lang.String r3 = " radius = "
            r0.append(r3)
            r0.append(r7)
            return
    }

    @Override
    public void showPlayableView() {
            r0 = this;
            return
    }

    @Override
    public void showVideoClickView(int r1) {
            r0 = this;
            return
    }

    @Override
    public void showVideoEndCover() {
            r0 = this;
            return
    }

    @Override
    public void toggleCloseBtn(int r1) {
            r0 = this;
            return
    }

    @Override
    public void webviewshow() {
            r0 = this;
            return
    }
}
