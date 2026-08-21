package com.bykv.vk.openvk;

public interface TTAdBridge {
    java.lang.String call(int r1, android.os.Bundle r2);

    <T> T callMethod(java.lang.Class<T> r1, int r2, java.util.Map<java.lang.String, java.lang.Object> r3);

    <T> T getObj(java.lang.Class<T> r1);

    <T> T getObj(java.lang.Class<T> r1, int r2, java.util.Map<java.lang.String, java.lang.Object> r3);

    void init(android.os.Bundle r1);

    void removeObj(java.lang.Object r1);

    void setObj(java.lang.Object r1);

    void subscribe(com.bykv.vk.openvk.TTAdEvent r1);

    void unsubscribe(com.bykv.vk.openvk.TTAdEvent r1);
}
