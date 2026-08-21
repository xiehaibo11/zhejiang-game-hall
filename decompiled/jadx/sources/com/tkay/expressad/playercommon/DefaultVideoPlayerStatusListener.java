package com.tkay.expressad.playercommon;

/* JADX INFO: loaded from: classes3.dex */
public class DefaultVideoPlayerStatusListener implements VideoPlayerStatusListener {
    protected static final String TAG = "DefaultVideoPlayerStatusListener";

    @Override // com.tkay.expressad.playercommon.VideoPlayerStatusListener
    public void onBufferingEnd() {
    }

    @Override // com.tkay.expressad.playercommon.VideoPlayerStatusListener
    public void onBufferingStart(String str) {
    }

    @Override // com.tkay.expressad.playercommon.VideoPlayerStatusListener
    public void onPlayCompleted() {
    }

    @Override // com.tkay.expressad.playercommon.VideoPlayerStatusListener
    public void onPlayError(String str) {
    }

    @Override // com.tkay.expressad.playercommon.VideoPlayerStatusListener
    public void onPlayProgressMS(int i, int i2) {
    }

    @Override // com.tkay.expressad.playercommon.VideoPlayerStatusListener
    public void onPlaySetDataSourceError(String str) {
    }

    @Override // com.tkay.expressad.playercommon.VideoPlayerStatusListener
    public void onPlayStarted(int i) {
    }

    @Override // com.tkay.expressad.playercommon.VideoPlayerStatusListener
    public void onVideoDownloadResume() {
    }

    @Override // com.tkay.expressad.playercommon.VideoPlayerStatusListener
    public void onPlayProgress(int i, int i2) {
        StringBuilder sb = new StringBuilder("onPlayProgress:");
        sb.append(i);
        sb.append(",allDuration:");
        sb.append(i2);
    }
}
