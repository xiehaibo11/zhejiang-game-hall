package com.bykv.vk.openvk.live;

public interface TTLiveAuthCallback extends java.io.Serializable {
    void onAuth(com.bykv.vk.openvk.live.TTLiveToken r1);

    void onFailed(java.lang.Throwable r1);
}
