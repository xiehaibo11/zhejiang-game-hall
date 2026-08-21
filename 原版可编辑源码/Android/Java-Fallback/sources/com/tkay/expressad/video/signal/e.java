package com.tkay.expressad.video.signal;

public interface e extends com.tkay.expressad.video.signal.f {
    public static final int d_ = -1;
    public static final int e_ = 1;
    public static final int f_ = 2;
    public static final int g_ = 1;
    public static final int h_ = 2;
    public static final int i_ = 3;
    public static final int j_ = 4;
    public static final int k_ = 5;
    public static final int l_ = 100;

    void configurationChanged(int r1, int r2, int r3);

    boolean endCardShowing();

    void handlerPlayableException(java.lang.String r1);

    void hideAlertWebview();

    void ivRewardAdsWithoutVideo(java.lang.String r1);

    boolean miniCardLoaded();

    boolean miniCardShowing();

    void readyStatus(int r1);

    void resizeMiniCard(int r1, int r2, int r3);

    boolean showAlertWebView();

    void showEndcard(int r1);

    void showMiniCard(int r1, int r2, int r3, int r4, int r5);

    void showPlayableView();

    void showVideoClickView(int r1);

    void showVideoEndCover();
}
