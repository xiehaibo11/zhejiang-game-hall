package com.bykv.vk.openvk;

import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public interface ComplianceInfo {
    String getAppName();

    String getAppVersion();

    String getDeveloperName();

    String getPermissionUrl();

    Map<String, String> getPermissionsMap();

    String getPrivacyUrl();
}
