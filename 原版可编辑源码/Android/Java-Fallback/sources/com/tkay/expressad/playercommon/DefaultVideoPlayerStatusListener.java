package com.tkay.expressad.playercommon;

public class DefaultVideoPlayerStatusListener implements com.tkay.expressad.playercommon.VideoPlayerStatusListener {
    protected static final java.lang.String TAG = "DefaultVideoPlayerStatusListener";

    public DefaultVideoPlayerStatusListener() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onBufferingEnd() {
            r0 = this;
            return
    }

    @Override
    public void onBufferingStart(java.lang.String r1) {
            r0 = this;
            return
    }

    @Override
    public void onPlayCompleted() {
            r0 = this;
            return
    }

    @Override
    public void onPlayError(java.lang.String r1) {
            r0 = this;
            return
    }

    @Override
    public void onPlayProgress(int r3, int r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onPlayProgress:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = ",allDuration:"
            r0.append(r3)
            r0.append(r4)
            return
    }

    @Override
    public void onPlayProgressMS(int r1, int r2) {
            r0 = this;
            return
    }

    @Override
    public void onPlaySetDataSourceError(java.lang.String r1) {
            r0 = this;
            return
    }

    @Override
    public void onPlayStarted(int r1) {
            r0 = this;
            return
    }

    @Override
    public void onVideoDownloadResume() {
            r0 = this;
            return
    }
}
