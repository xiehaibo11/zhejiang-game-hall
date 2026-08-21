package com.bykv.vk.openvk.live.core;

public interface ITTLiveConfig {
    java.lang.String getAppName();

    java.lang.String getChannel();

    java.lang.String getECHostAppId();

    java.lang.String getGeneralAppId();

    com.bykv.vk.openvk.live.core.TTHostPermissionInner getHostPermission();

    com.bykv.vk.openvk.live.core.ITTLiveHostAction getLiveHostAction();

    java.lang.String getPartner();

    java.lang.String getPartnerSecret();

    java.lang.String getVersion();

    int getVersionCode();

    boolean isDebug();

    boolean isValid();
}
