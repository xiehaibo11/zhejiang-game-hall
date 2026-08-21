package com.bykv.vk.openvk.downloadnew.core;

public interface ITTPermissionCallback {
    void onDenied(String str);

    void onGranted();
}
