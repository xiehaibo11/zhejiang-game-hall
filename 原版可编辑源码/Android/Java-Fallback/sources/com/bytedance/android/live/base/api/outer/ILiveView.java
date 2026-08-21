package com.bytedance.android.live.base.api.outer;

public interface ILiveView {
    android.view.View getView();

    void openLive();

    void release();

    void setLiveStatusListener(com.bytedance.android.live.base.api.outer.ILiveStatusListener r1);

    void setMute(boolean r1);

    void show();

    void stream();
}
