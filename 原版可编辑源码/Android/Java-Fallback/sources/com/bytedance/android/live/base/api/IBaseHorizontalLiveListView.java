package com.bytedance.android.live.base.api;

public interface IBaseHorizontalLiveListView {
    void refresh();

    android.view.View self();

    void setEmptyListener(com.bytedance.android.live.base.api.callback.Callback<java.lang.Boolean> r1);

    void setErrorListener(com.bytedance.android.live.base.api.callback.Callback<java.lang.Boolean> r1);

    void setRoomCountListener(com.bytedance.android.live.base.api.callback.Callback<java.lang.Integer> r1);
}
