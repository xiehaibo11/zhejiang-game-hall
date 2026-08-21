package com.bykv.vk.openvk.api.proto;

public interface Result {
    int code();

    boolean isSuccess();

    java.lang.String message();

    com.bykv.vk.openvk.api.proto.ValueSet values();
}
