package com.bykv.vk.openvk.api.proto;

public interface Manager {
    com.bykv.vk.openvk.api.proto.Loader createLoader(android.content.Context r1);

    com.bykv.vk.openvk.api.proto.Bridge getBridge(int r1);

    com.bykv.vk.openvk.api.proto.ValueSet values();
}
