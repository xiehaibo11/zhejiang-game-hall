package com.bykv.vk.openvk.api.proto;

public interface Result {
    int code();

    boolean isSuccess();

    String message();

    ValueSet values();
}
