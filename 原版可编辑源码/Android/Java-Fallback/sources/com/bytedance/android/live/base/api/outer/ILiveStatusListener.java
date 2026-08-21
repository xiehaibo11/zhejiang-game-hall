package com.bytedance.android.live.base.api.outer;

public interface ILiveStatusListener {
    void onError(java.lang.String r1);

    void onFirstFrame();

    void onLiveStatusChange(boolean r1);

    void onPrepare();

    void onVideoSizeChanged(int r1, int r2);
}
