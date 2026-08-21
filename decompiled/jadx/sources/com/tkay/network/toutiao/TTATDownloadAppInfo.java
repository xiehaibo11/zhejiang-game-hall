package com.tkay.network.toutiao;

import com.bykv.vk.openvk.ComplianceInfo;
import com.tkay.core.api.TYAdAppInfo;

/* JADX INFO: loaded from: classes3.dex */
public class TTATDownloadAppInfo extends TYAdAppInfo {
    public String appName;
    public String appPrivacyLink;
    public long appSize;
    public String appVersion;
    public String publisher;

    @Override // com.tkay.core.api.TYAdAppInfo
    public String getAppDownloadCount() {
        return "";
    }

    @Override // com.tkay.core.api.TYAdAppInfo
    public String getAppPackageName() {
        return "";
    }

    @Override // com.tkay.core.api.TYAdAppInfo
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

    @Override // com.tkay.core.api.TYAdAppInfo
    public String getPublisher() {
        return this.publisher;
    }

    @Override // com.tkay.core.api.TYAdAppInfo
    public String getAppVersion() {
        return this.appVersion;
    }

    @Override // com.tkay.core.api.TYAdAppInfo
    public String getAppPrivacyUrl() {
        return this.appPrivacyLink;
    }

    @Override // com.tkay.core.api.TYAdAppInfo
    public long getAppSize() {
        return this.appSize;
    }

    @Override // com.tkay.core.api.TYAdAppInfo
    public String getAppName() {
        return this.appName;
    }
}
