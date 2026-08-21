package com.bytedance.android.live.base.api;

public interface ILiveOuterPreviewCoverView {
    void cancelAutoEnterGuide(boolean r1);

    void onShow();

    void release();

    void setCustomBottomView(android.view.View r1);

    void setOnDislikeCallback(com.bytedance.android.live.base.api.callback.EmptyCallback r1);

    void stream(java.lang.String r1);
}
