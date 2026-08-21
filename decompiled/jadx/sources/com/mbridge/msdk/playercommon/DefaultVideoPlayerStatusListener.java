package com.mbridge.msdk.playercommon;

import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: loaded from: classes2.dex */
public class DefaultVideoPlayerStatusListener implements VideoPlayerStatusListener {
    protected static final String TAG = "DefaultVideoPlayerStatusListener";

    @Override // com.mbridge.msdk.playercommon.VideoPlayerStatusListener
    public void onPlayStarted(int i) {
        z.a(TAG, "onPlayStarted:" + i);
    }

    @Override // com.mbridge.msdk.playercommon.VideoPlayerStatusListener
    public void onPlayCompleted() {
        z.a(TAG, "onPlayCompleted");
    }

    @Override // com.mbridge.msdk.playercommon.VideoPlayerStatusListener
    public void onPlayError(String str) {
        z.a(TAG, "onPlayError:" + str);
    }

    @Override // com.mbridge.msdk.playercommon.VideoPlayerStatusListener
    public void onPlayProgress(int i, int i2) {
        z.a(TAG, "onPlayProgress:" + i + ",allDuration:" + i2);
    }

    @Override // com.mbridge.msdk.playercommon.VideoPlayerStatusListener
    public void onBufferingStart(String str) {
        z.a(TAG, "OnBufferingStart:" + str);
    }

    @Override // com.mbridge.msdk.playercommon.VideoPlayerStatusListener
    public void onBufferingEnd() {
        z.a(TAG, "OnBufferingEnd");
    }

    @Override // com.mbridge.msdk.playercommon.VideoPlayerStatusListener
    public void onPlaySetDataSourceError(String str) {
        z.a(TAG, "onPlaySetDataSourceError:" + str);
    }

    @Override // com.mbridge.msdk.playercommon.VideoPlayerStatusListener
    public void onPlayProgressMS(int i, int i2) {
        z.a(TAG, "onPlayProgressMS:");
    }
}
