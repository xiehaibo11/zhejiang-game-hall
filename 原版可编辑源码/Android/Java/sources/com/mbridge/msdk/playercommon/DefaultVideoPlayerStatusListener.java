package com.mbridge.msdk.playercommon;

import com.mbridge.msdk.foundation.tools.z;

public class DefaultVideoPlayerStatusListener implements VideoPlayerStatusListener {
    protected static final String TAG = "DefaultVideoPlayerStatusListener";

    @Override
    public void onPlayStarted(int i) {
        z.a(TAG, "onPlayStarted:" + i);
    }

    @Override
    public void onPlayCompleted() {
        z.a(TAG, "onPlayCompleted");
    }

    @Override
    public void onPlayError(String str) {
        z.a(TAG, "onPlayError:" + str);
    }

    @Override
    public void onPlayProgress(int i, int i2) {
        z.a(TAG, "onPlayProgress:" + i + ",allDuration:" + i2);
    }

    @Override
    public void onBufferingStart(String str) {
        z.a(TAG, "OnBufferingStart:" + str);
    }

    @Override
    public void onBufferingEnd() {
        z.a(TAG, "OnBufferingEnd");
    }

    @Override
    public void onPlaySetDataSourceError(String str) {
        z.a(TAG, "onPlaySetDataSourceError:" + str);
    }

    @Override
    public void onPlayProgressMS(int i, int i2) {
        z.a(TAG, "onPlayProgressMS:");
    }
}
