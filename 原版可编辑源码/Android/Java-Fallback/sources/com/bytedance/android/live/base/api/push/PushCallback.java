package com.bytedance.android.live.base.api.push;

public interface PushCallback {
    void onFailed(java.lang.Throwable r1);

    void onSuccess(com.bytedance.android.live.base.api.push.model.PushData r1);
}
