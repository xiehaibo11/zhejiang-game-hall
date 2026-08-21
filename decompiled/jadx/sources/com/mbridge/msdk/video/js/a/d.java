package com.mbridge.msdk.video.js.a;

import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: compiled from: DefaultJSContainerModule.java */
/* JADX INFO: loaded from: classes3.dex */
public class d implements com.mbridge.msdk.video.js.e, com.mbridge.msdk.video.js.g {
    @Override // com.mbridge.msdk.video.js.e
    public void configurationChanged(int i, int i2, int i3) {
    }

    @Override // com.mbridge.msdk.video.js.e
    public void showVideoClickView(int i) {
        z.a("DefaultJSContainerModule", "showVideoClickView:" + i);
    }

    @Override // com.mbridge.msdk.video.js.e
    public void showEndcard(int i) {
        z.a("DefaultJSContainerModule", "showEndcard,type=" + i);
    }

    @Override // com.mbridge.msdk.video.js.e
    public boolean endCardShowing() {
        z.a("DefaultJSContainerModule", "endCardShowing");
        return true;
    }

    @Override // com.mbridge.msdk.video.js.e
    public boolean miniCardShowing() {
        z.a("DefaultJSContainerModule", "miniCardShowing");
        return false;
    }

    @Override // com.mbridge.msdk.video.js.g
    public void notifyCloseBtn(int i) {
        z.a("DefaultJSContainerModule", "notifyCloseBtn:state = " + i);
    }

    @Override // com.mbridge.msdk.video.js.g
    public void toggleCloseBtn(int i) {
        z.a("DefaultJSContainerModule", "toggleCloseBtn:state=" + i);
    }

    @Override // com.mbridge.msdk.video.js.e
    public void readyStatus(int i) {
        z.a("DefaultJSContainerModule", "readyStatus:isReady=" + i);
    }

    @Override // com.mbridge.msdk.video.js.e
    public void showMiniCard(int i, int i2, int i3, int i4, int i5) {
        z.a("DefaultJSContainerModule", "showMiniCard top = " + i + " left = " + i2 + " width = " + i3 + " height = " + i4 + " radius = " + i5);
    }

    @Override // com.mbridge.msdk.video.js.e
    public void resizeMiniCard(int i, int i2, int i3) {
        z.a("DefaultJSContainerModule", "showMiniCard width = " + i + " height = " + i2 + " radius = " + i3);
    }

    @Override // com.mbridge.msdk.video.js.e
    public void showVideoEndCover() {
        z.a("DefaultJSContainerModule", "showVideoEndCover");
    }

    @Override // com.mbridge.msdk.video.js.e
    public boolean showAlertWebView() {
        z.a("DefaultJSContainerModule", "showAlertWebView ,msg=");
        return false;
    }

    @Override // com.mbridge.msdk.video.js.e
    public void hideAlertWebview() {
        z.a("DefaultJSContainerModule", "hideAlertWebview ,msg=");
    }

    @Override // com.mbridge.msdk.video.js.e
    public void ivRewardAdsWithoutVideo(String str) {
        z.a("DefaultJSContainerModule", "ivRewardAdsWithoutVideo,params=");
    }
}
