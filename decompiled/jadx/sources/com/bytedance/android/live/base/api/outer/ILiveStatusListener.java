package com.bytedance.android.live.base.api.outer;

/* JADX INFO: loaded from: classes.dex */
public interface ILiveStatusListener {
    void onError(String str);

    void onFirstFrame();

    void onLiveStatusChange(boolean z);

    void onPrepare();

    void onVideoSizeChanged(int i, int i2);
}
