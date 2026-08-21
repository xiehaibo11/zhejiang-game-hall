package com.bykv.vk.openvk.downloadnew.core;

public interface ITTHttpCallback {
    void onError(Throwable th);

    void onResponse(String str);
}
