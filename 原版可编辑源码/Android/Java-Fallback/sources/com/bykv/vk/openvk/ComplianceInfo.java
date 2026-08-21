package com.bykv.vk.openvk;

public interface ComplianceInfo {
    java.lang.String getAppName();

    java.lang.String getAppVersion();

    java.lang.String getDeveloperName();

    java.lang.String getPermissionUrl();

    java.util.Map<java.lang.String, java.lang.String> getPermissionsMap();

    java.lang.String getPrivacyUrl();
}
