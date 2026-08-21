package com.bykv.vk.openvk;

public interface IKGUtils {
    android.webkit.WebResourceResponse findRes(java.lang.String r1, java.lang.String r2, com.bykv.vk.openvk.FindResProxy r3);

    java.util.Map<java.lang.String, java.lang.Long> getChannelVersion();

    void preload(java.util.List<java.lang.String> r1);

    void releaseLoader();
}
