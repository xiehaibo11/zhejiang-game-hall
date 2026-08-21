package com.mbridge.msdk.video.js.a;

public class d implements com.mbridge.msdk.video.js.e, com.mbridge.msdk.video.js.g {
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
            r2 = this;
            java.lang.String r0 = "DefaultJSContainerModule"
            java.lang.String r1 = "endCardShowing"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            r0 = 1
            return r0
    }

    @Override
    public void hideAlertWebview() {
            r2 = this;
            java.lang.String r0 = "DefaultJSContainerModule"
            java.lang.String r1 = "hideAlertWebview ,msg="
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            return
    }

    @Override
    public void ivRewardAdsWithoutVideo(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = "DefaultJSContainerModule"
            java.lang.String r0 = "ivRewardAdsWithoutVideo,params="
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
            return
    }

    @Override
    public boolean miniCardShowing() {
            r2 = this;
            java.lang.String r0 = "DefaultJSContainerModule"
            java.lang.String r1 = "miniCardShowing"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            r0 = 0
            return r0
    }

    @Override
    public void notifyCloseBtn(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "notifyCloseBtn:state = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultJSContainerModule"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void readyStatus(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "readyStatus:isReady="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultJSContainerModule"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void resizeMiniCard(int r3, int r4, int r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "showMiniCard width = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = " height = "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = " radius = "
            r0.append(r3)
            r0.append(r5)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "DefaultJSContainerModule"
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
            return
    }

    @Override
    public boolean showAlertWebView() {
            r2 = this;
            java.lang.String r0 = "DefaultJSContainerModule"
            java.lang.String r1 = "showAlertWebView ,msg="
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            r0 = 0
            return r0
    }

    @Override
    public void showEndcard(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "showEndcard,type="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultJSContainerModule"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void showMiniCard(int r3, int r4, int r5, int r6, int r7) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "showMiniCard top = "
            r0.append(r1)
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
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "DefaultJSContainerModule"
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
            return
    }

    @Override
    public void showVideoClickView(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "showVideoClickView:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultJSContainerModule"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }

    @Override
    public void showVideoEndCover() {
            r2 = this;
            java.lang.String r0 = "DefaultJSContainerModule"
            java.lang.String r1 = "showVideoEndCover"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            return
    }

    @Override
    public void toggleCloseBtn(int r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "toggleCloseBtn:state="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DefaultJSContainerModule"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
            return
    }
}
