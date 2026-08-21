package com.bykv.vk.openvk;

public interface TTVfManager {
    com.bykv.vk.openvk.TTVfNative createVfNative(android.content.Context r1);

    java.lang.String getBiddingToken(com.bykv.vk.openvk.VfSlot r1);

    java.lang.String getBiddingToken(com.bykv.vk.openvk.VfSlot r1, boolean r2, int r3);

    <T> T getExtra(java.lang.Class<T> r1, android.os.Bundle r2);

    java.lang.String getPluginVersion();

    java.lang.String getSDKVersion();

    int getThemeStatus();

    void register(java.lang.Object r1);

    void requestPermissionIfNecessary(android.content.Context r1);

    void setThemeStatus(int r1);

    boolean tryShowInstallDialogWhenExit(android.app.Activity r1, com.bykv.vk.openvk.downloadnew.core.ExitInstallListener r2);

    void unregister(java.lang.Object r1);
}
