package com.bykv.vk.openvk.api.proto;

public interface Initializer {
    com.bykv.vk.openvk.api.proto.Manager getManager();

    void init(android.content.Context r1, com.bykv.vk.openvk.api.proto.ValueSet r2);

    boolean isInitSuccess();
}
