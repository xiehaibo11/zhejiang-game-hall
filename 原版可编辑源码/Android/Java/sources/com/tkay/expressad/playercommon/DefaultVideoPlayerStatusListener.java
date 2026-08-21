package com.tkay.expressad.playercommon;

public class DefaultVideoPlayerStatusListener implements VideoPlayerStatusListener {
    protected static final String TAG = "DefaultVideoPlayerStatusListener";

    @Override
    public void onBufferingEnd() {
    }

    @Override
    public void onBufferingStart(String str) {
    }

    @Override
    public void onPlayCompleted() {
    }

    @Override
    public void onPlayError(String str) {
    }

    @Override
    public void onPlayProgressMS(int i, int i2) {
    }

    @Override
    public void onPlaySetDataSourceError(String str) {
    }

    @Override
    public void onPlayStarted(int i) {
    }

    @Override
    public void onVideoDownloadResume() {
    }

    @Override
    public void onPlayProgress(int i, int i2) {
        StringBuilder sb = new StringBuilder("onPlayProgress:");
        sb.append(i);
        sb.append(",allDuration:");
        sb.append(i2);
    }
}
