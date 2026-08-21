package com.bykv.vk.openvk;

import java.util.Map;

public interface ComplianceInfo {
    String getAppName();

    String getAppVersion();

    String getDeveloperName();

    String getPermissionUrl();

    Map<String, String> getPermissionsMap();

    String getPrivacyUrl();
}
