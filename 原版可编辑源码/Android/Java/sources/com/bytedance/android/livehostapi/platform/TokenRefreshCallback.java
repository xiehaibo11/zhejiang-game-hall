package com.bytedance.android.livehostapi.platform;

public interface TokenRefreshCallback {
    void onFailed(Throwable th);

    void onSuccess(TokenInfo tokenInfo);
}
