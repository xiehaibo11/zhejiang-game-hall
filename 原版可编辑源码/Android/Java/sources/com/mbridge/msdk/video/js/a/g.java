package com.mbridge.msdk.video.js.a;

import com.mbridge.msdk.foundation.tools.z;

public class g implements com.mbridge.msdk.video.js.i {
    @Override
    public int getBorderViewHeight() {
        return 0;
    }

    @Override
    public int getBorderViewLeft() {
        return 0;
    }

    @Override
    public int getBorderViewRadius() {
        return 0;
    }

    @Override
    public int getBorderViewTop() {
        return 0;
    }

    @Override
    public int getBorderViewWidth() {
        return 0;
    }

    @Override
    public boolean isH5Canvas() {
        return false;
    }

    @Override
    public void showVideoLocation(int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9) {
        z.a("DefaultJSVideoModule", "showVideoLocation:marginTop=" + i + ",marginLeft=" + i2 + ",width=" + i3 + ",height=" + i4 + ",radius=" + i5 + ",borderTop=" + i6 + ",borderTop=" + i6 + ",borderLeft=" + i7 + ",borderWidth=" + i8 + ",borderHeight=" + i9);
    }

    @Override
    public void soundOperate(int i, int i2) {
        z.a("DefaultJSVideoModule", "soundOperate:mute=" + i + ",soundViewVisible=" + i2);
    }

    @Override
    public void soundOperate(int i, int i2, String str) {
        z.a("DefaultJSVideoModule", "soundOperate:mute=" + i + ",soundViewVisible=" + i2 + ",pt=" + str);
    }

    @Override
    public void videoOperate(int i) {
        z.a("DefaultJSVideoModule", "videoOperate:" + i);
    }

    @Override
    public void closeVideoOperate(int i, int i2) {
        z.a("DefaultJSVideoModule", "closeOperte:close=" + i + "closeViewVisible=" + i2);
    }

    @Override
    public void progressOperate(int i, int i2) {
        z.a("DefaultJSVideoModule", "progressOperate:progress=" + i + "progressViewVisible=" + i2);
    }

    @Override
    public void progressBarOperate(int i) {
        z.a("DefaultJSVideoModule", "progressBarOperate:progressViewVisible=" + i);
    }

    @Override
    public String getCurrentProgress() {
        z.a("DefaultJSVideoModule", "getCurrentProgress");
        return "{}";
    }

    @Override
    public void setScaleFitXY(int i) {
        z.a("DefaultJSVideoModule", "setScaleFitXY:" + i);
    }

    @Override
    public void setVisible(int i) {
        z.a("DefaultJSVideoModule", "setVisible:" + i);
    }

    @Override
    public void setCover(boolean z) {
        z.a("DefaultJSVideoModule", "setCover:" + z);
    }

    @Override
    public void notifyCloseBtn(int i) {
        z.a("DefaultJSVideoModule", "notifyCloseBtn:" + i);
    }

    @Override
    public void showIVRewardAlertView(String str) {
        z.a("DefaultJSVideoModule", "showAlertView:");
    }

    @Override
    public void showAlertView() {
        z.a("DefaultJSVideoModule", "showAlertView:");
    }

    @Override
    public void hideAlertView(int i) {
        z.a("DefaultJSVideoModule", "hideAlertView:");
    }

    @Override
    public void alertWebViewShowed() {
        z.a("DefaultJSVideoModule", "alertWebViewShowed:");
    }

    @Override
    public void dismissAllAlert() {
        z.a("DefaultJSVideoModule", "dismissAllAlert");
    }

    @Override
    public void setInstallDialogState(boolean z) {
        z.a("DefaultJSVideoModule", "setInstallDialogState");
    }

    @Override
    public void setMiniEndCardState(boolean z) {
        z.a("DefaultJSVideoModule", "setMiniEndCardState");
    }
}
