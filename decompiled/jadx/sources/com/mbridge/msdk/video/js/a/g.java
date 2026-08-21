package com.mbridge.msdk.video.js.a;

import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: compiled from: DefaultJSVideoModule.java */
/* JADX INFO: loaded from: classes3.dex */
public class g implements com.mbridge.msdk.video.js.i {
    @Override // com.mbridge.msdk.video.js.i
    public int getBorderViewHeight() {
        return 0;
    }

    @Override // com.mbridge.msdk.video.js.i
    public int getBorderViewLeft() {
        return 0;
    }

    @Override // com.mbridge.msdk.video.js.i
    public int getBorderViewRadius() {
        return 0;
    }

    @Override // com.mbridge.msdk.video.js.i
    public int getBorderViewTop() {
        return 0;
    }

    @Override // com.mbridge.msdk.video.js.i
    public int getBorderViewWidth() {
        return 0;
    }

    @Override // com.mbridge.msdk.video.js.i
    public boolean isH5Canvas() {
        return false;
    }

    @Override // com.mbridge.msdk.video.js.i
    public void showVideoLocation(int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9) {
        z.a("DefaultJSVideoModule", "showVideoLocation:marginTop=" + i + ",marginLeft=" + i2 + ",width=" + i3 + ",height=" + i4 + ",radius=" + i5 + ",borderTop=" + i6 + ",borderTop=" + i6 + ",borderLeft=" + i7 + ",borderWidth=" + i8 + ",borderHeight=" + i9);
    }

    @Override // com.mbridge.msdk.video.js.i
    public void soundOperate(int i, int i2) {
        z.a("DefaultJSVideoModule", "soundOperate:mute=" + i + ",soundViewVisible=" + i2);
    }

    @Override // com.mbridge.msdk.video.js.i
    public void soundOperate(int i, int i2, String str) {
        z.a("DefaultJSVideoModule", "soundOperate:mute=" + i + ",soundViewVisible=" + i2 + ",pt=" + str);
    }

    @Override // com.mbridge.msdk.video.js.i
    public void videoOperate(int i) {
        z.a("DefaultJSVideoModule", "videoOperate:" + i);
    }

    @Override // com.mbridge.msdk.video.js.i
    public void closeVideoOperate(int i, int i2) {
        z.a("DefaultJSVideoModule", "closeOperte:close=" + i + "closeViewVisible=" + i2);
    }

    @Override // com.mbridge.msdk.video.js.i
    public void progressOperate(int i, int i2) {
        z.a("DefaultJSVideoModule", "progressOperate:progress=" + i + "progressViewVisible=" + i2);
    }

    @Override // com.mbridge.msdk.video.js.i
    public void progressBarOperate(int i) {
        z.a("DefaultJSVideoModule", "progressBarOperate:progressViewVisible=" + i);
    }

    @Override // com.mbridge.msdk.video.js.i
    public String getCurrentProgress() {
        z.a("DefaultJSVideoModule", "getCurrentProgress");
        return "{}";
    }

    @Override // com.mbridge.msdk.video.js.i
    public void setScaleFitXY(int i) {
        z.a("DefaultJSVideoModule", "setScaleFitXY:" + i);
    }

    @Override // com.mbridge.msdk.video.js.i
    public void setVisible(int i) {
        z.a("DefaultJSVideoModule", "setVisible:" + i);
    }

    @Override // com.mbridge.msdk.video.js.i
    public void setCover(boolean z) {
        z.a("DefaultJSVideoModule", "setCover:" + z);
    }

    @Override // com.mbridge.msdk.video.js.i
    public void notifyCloseBtn(int i) {
        z.a("DefaultJSVideoModule", "notifyCloseBtn:" + i);
    }

    @Override // com.mbridge.msdk.video.js.i
    public void showIVRewardAlertView(String str) {
        z.a("DefaultJSVideoModule", "showAlertView:");
    }

    @Override // com.mbridge.msdk.video.js.i
    public void showAlertView() {
        z.a("DefaultJSVideoModule", "showAlertView:");
    }

    @Override // com.mbridge.msdk.video.js.i
    public void hideAlertView(int i) {
        z.a("DefaultJSVideoModule", "hideAlertView:");
    }

    @Override // com.mbridge.msdk.video.js.i
    public void alertWebViewShowed() {
        z.a("DefaultJSVideoModule", "alertWebViewShowed:");
    }

    @Override // com.mbridge.msdk.video.js.i
    public void dismissAllAlert() {
        z.a("DefaultJSVideoModule", "dismissAllAlert");
    }

    @Override // com.mbridge.msdk.video.js.i
    public void setInstallDialogState(boolean z) {
        z.a("DefaultJSVideoModule", "setInstallDialogState");
    }

    @Override // com.mbridge.msdk.video.js.i
    public void setMiniEndCardState(boolean z) {
        z.a("DefaultJSVideoModule", "setMiniEndCardState");
    }
}
