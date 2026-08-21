package com.tkay.network.toutiao;

import com.bykv.vk.openvk.ComplianceInfo;
import com.tkay.core.api.TYAdAppInfo;

public class TTATDownloadAppInfo extends TYAdAppInfo {
    public String appName;
    public String appPrivacyLink;
    public long appSize;
    public String appVersion;
    public String publisher;

    @Override
    public String getAppDownloadCount() {
        return "";
    }

    @Override
    public String getAppPackageName() {
        return "";
    }

    @Override
    public String getAppPermissonUrl() {
        return "";
    }

    public TTATDownloadAppInfo(ComplianceInfo complianceInfo, long j) {
        this.appPrivacyLink = complianceInfo.getPrivacyUrl();
        this.appName = complianceInfo.getAppName();
        this.publisher = complianceInfo.getDeveloperName();
        this.appVersion = complianceInfo.getAppVersion();
        this.appSize = j;
    }

    @Override
    public String getPublisher() {
        return this.publisher;
    }

    @Override
    public String getAppVersion() {
        return this.appVersion;
    }

    @Override
    public String getAppPrivacyUrl() {
        return this.appPrivacyLink;
    }

    @Override
    public long getAppSize() {
        return this.appSize;
    }

    @Override
    public String getAppName() {
        return this.appName;
    }
}
