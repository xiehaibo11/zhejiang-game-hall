package com.bykv.vk.openvk;

public interface TTInitializer {
    com.bykv.vk.openvk.TTVfManager getAdManager();

    void init(android.content.Context r1, com.bykv.vk.openvk.AdConfig r2, com.bykv.vk.openvk.TTVfSdk.InitCallback r3);

    boolean isInitSuccess();
}
