package com.mbridge.msdk.video.js;

public interface i {
    void alertWebViewShowed();

    void closeVideoOperate(int r1, int r2);

    void dismissAllAlert();

    int getBorderViewHeight();

    int getBorderViewLeft();

    int getBorderViewRadius();

    int getBorderViewTop();

    int getBorderViewWidth();

    java.lang.String getCurrentProgress();

    void hideAlertView(int r1);

    boolean isH5Canvas();

    void notifyCloseBtn(int r1);

    void progressBarOperate(int r1);

    void progressOperate(int r1, int r2);

    void setCover(boolean r1);

    void setInstallDialogState(boolean r1);

    void setMiniEndCardState(boolean r1);

    void setScaleFitXY(int r1);

    void setVisible(int r1);

    void showAlertView();

    void showIVRewardAlertView(java.lang.String r1);

    void showVideoLocation(int r1, int r2, int r3, int r4, int r5, int r6, int r7, int r8, int r9);

    void soundOperate(int r1, int r2);

    void soundOperate(int r1, int r2, java.lang.String r3);

    void videoOperate(int r1);
}
