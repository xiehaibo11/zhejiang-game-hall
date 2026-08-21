package com.tkay.expressad.playercommon;

public interface VideoPlayerStatusListener {
    void onBufferingEnd();

    void onBufferingStart(java.lang.String r1);

    void onPlayCompleted();

    void onPlayError(java.lang.String r1);

    void onPlayProgress(int r1, int r2);

    void onPlayProgressMS(int r1, int r2);

    void onPlaySetDataSourceError(java.lang.String r1);

    void onPlayStarted(int r1);

    void onVideoDownloadResume();
}
