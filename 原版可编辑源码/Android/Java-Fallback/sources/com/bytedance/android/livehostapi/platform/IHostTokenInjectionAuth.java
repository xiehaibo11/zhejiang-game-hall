package com.bytedance.android.livehostapi.platform;

public interface IHostTokenInjectionAuth extends com.bytedance.android.live.base.IService {
    com.bytedance.android.livehostapi.platform.TokenInfo getTokenInfo();

    boolean isLogin();

    void onTokenInvalid(com.bytedance.android.livehostapi.platform.TokenInfo r1, com.bytedance.android.livehostapi.platform.TokenRefreshCallback r2, android.app.Activity r3, java.util.Map<java.lang.String, java.lang.String> r4);
}
