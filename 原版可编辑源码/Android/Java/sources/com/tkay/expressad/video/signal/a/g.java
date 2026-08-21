package com.tkay.expressad.video.signal.a;

public class g implements com.tkay.expressad.video.signal.j {
    protected static final String s = "DefaultJSVideoModule";

    @Override
    public void alertWebViewShowed() {
    }

    @Override
    public void dismissAllAlert() {
    }

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
    public String getCurrentProgress() {
        return "{}";
    }

    @Override
    public void hideAlertView(int i) {
    }

    @Override
    public boolean isH5Canvas() {
        return false;
    }

    @Override
    public void notifyCloseBtn(int i) {
    }

    @Override
    public void progressBarOperate(int i) {
    }

    @Override
    public void setCover(boolean z) {
    }

    @Override
    public void setInstallDialogState(boolean z) {
    }

    @Override
    public void setMiniEndCardState(boolean z) {
    }

    @Override
    public void setScaleFitXY(int i) {
    }

    @Override
    public void setVisible(int i) {
    }

    @Override
    public void showAlertView() {
    }

    @Override
    public void showIVRewardAlertView(String str) {
    }

    @Override
    public void videoOperate(int i) {
    }

    @Override
    public void showVideoLocation(int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9) {
        StringBuilder sb = new StringBuilder("showVideoLocation:marginTop=");
        sb.append(i);
        sb.append(",marginLeft=");
        sb.append(i2);
        sb.append(",width=");
        sb.append(i3);
        sb.append(",height=");
        sb.append(i4);
        sb.append(",radius=");
        sb.append(i5);
        sb.append(",borderTop=");
        sb.append(i6);
        sb.append(",borderTop=");
        sb.append(i6);
        sb.append(",borderLeft=");
        sb.append(i7);
        sb.append(",borderWidth=");
        sb.append(i8);
        sb.append(",borderHeight=");
        sb.append(i9);
    }

    @Override
    public void soundOperate(int i, int i2) {
        StringBuilder sb = new StringBuilder("soundOperate:mute=");
        sb.append(i);
        sb.append(",soundViewVisible=");
        sb.append(i2);
    }

    @Override
    public void soundOperate(int i, int i2, String str) {
        StringBuilder sb = new StringBuilder("soundOperate:mute=");
        sb.append(i);
        sb.append(",soundViewVisible=");
        sb.append(i2);
        sb.append(",pt=");
        sb.append(str);
    }

    @Override
    public void closeVideoOperate(int i, int i2) {
        StringBuilder sb = new StringBuilder("closeOperte:close=");
        sb.append(i);
        sb.append("closeViewVisible=");
        sb.append(i2);
    }

    @Override
    public void progressOperate(int i, int i2) {
        StringBuilder sb = new StringBuilder("progressOperate:progress=");
        sb.append(i);
        sb.append("progressViewVisible=");
        sb.append(i2);
    }
}
