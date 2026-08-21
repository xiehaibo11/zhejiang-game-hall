package com.bykv.vk.openvk.live;

public interface ITTLiveTokenInjectionAuth extends java.io.Serializable {
    com.bykv.vk.openvk.live.TTLiveToken getTokenInfo();

    boolean isLogin();

    void onTokenInvalid(com.bykv.vk.openvk.live.TTLiveToken r1, com.bykv.vk.openvk.live.TTLiveAuthCallback r2, android.app.Activity r3, java.util.Map<java.lang.String, java.lang.String> r4);
}
