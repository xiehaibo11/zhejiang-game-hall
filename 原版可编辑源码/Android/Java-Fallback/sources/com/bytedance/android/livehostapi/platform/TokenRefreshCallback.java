package com.bytedance.android.livehostapi.platform;

public interface TokenRefreshCallback {
    void onFailed(java.lang.Throwable r1);

    void onSuccess(com.bytedance.android.livehostapi.platform.TokenInfo r1);
}
