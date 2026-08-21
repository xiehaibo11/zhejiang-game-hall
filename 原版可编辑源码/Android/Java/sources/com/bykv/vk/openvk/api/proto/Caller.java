package com.bykv.vk.openvk.api.proto;

public interface Caller {
    <T> T call(int i, ValueSet valueSet, Class<T> cls);
}
