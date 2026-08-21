package com.mbridge.msdk.video.js.a;

import com.mbridge.msdk.foundation.tools.z;

public class d implements com.mbridge.msdk.video.js.e, com.mbridge.msdk.video.js.g {
    @Override
    public void configurationChanged(int i, int i2, int i3) {
    }

    @Override
    public void showVideoClickView(int i) {
        z.a("DefaultJSContainerModule", "showVideoClickView:" + i);
    }

    @Override
    public void showEndcard(int i) {
        z.a("DefaultJSContainerModule", "showEndcard,type=" + i);
    }

    @Override
    public boolean endCardShowing() {
        z.a("DefaultJSContainerModule", "endCardShowing");
        return true;
    }

    @Override
    public boolean miniCardShowing() {
        z.a("DefaultJSContainerModule", "miniCardShowing");
        return false;
    }

    @Override
    public void notifyCloseBtn(int i) {
        z.a("DefaultJSContainerModule", "notifyCloseBtn:state = " + i);
    }

    @Override
    public void toggleCloseBtn(int i) {
        z.a("DefaultJSContainerModule", "toggleCloseBtn:state=" + i);
    }

    @Override
    public void readyStatus(int i) {
        z.a("DefaultJSContainerModule", "readyStatus:isReady=" + i);
    }

    @Override
    public void showMiniCard(int i, int i2, int i3, int i4, int i5) {
        z.a("DefaultJSContainerModule", "showMiniCard top = " + i + " left = " + i2 + " width = " + i3 + " height = " + i4 + " radius = " + i5);
    }

    @Override
    public void resizeMiniCard(int i, int i2, int i3) {
        z.a("DefaultJSContainerModule", "showMiniCard width = " + i + " height = " + i2 + " radius = " + i3);
    }

    @Override
    public void showVideoEndCover() {
        z.a("DefaultJSContainerModule", "showVideoEndCover");
    }

    @Override
    public boolean showAlertWebView() {
        z.a("DefaultJSContainerModule", "showAlertWebView ,msg=");
        return false;
    }

    @Override
    public void hideAlertWebview() {
        z.a("DefaultJSContainerModule", "hideAlertWebview ,msg=");
    }

    @Override
    public void ivRewardAdsWithoutVideo(String str) {
        z.a("DefaultJSContainerModule", "ivRewardAdsWithoutVideo,params=");
    }
}
