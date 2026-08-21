package com.tkay.network.gdt;

import com.qq.e.ads.nativ.NativeUnifiedADAppMiitInfo;
import com.tkay.core.api.TYAdAppInfo;

public class GDTATDownloadAppInfo extends TYAdAppInfo {
    public String appDownloadCount;
    public String appName;
    public String appPrivacyLink;
    public long appSize;
    public String appVersion;
    public String apppermissionLink;
    public String publisher;

    @Override
    public String getAppPackageName() {
        return "";
    }

    public GDTATDownloadAppInfo(NativeUnifiedADAppMiitInfo nativeUnifiedADAppMiitInfo, String str) {
        this.publisher = nativeUnifiedADAppMiitInfo.getAuthorName();
        this.appVersion = nativeUnifiedADAppMiitInfo.getVersionName();
        this.appPrivacyLink = nativeUnifiedADAppMiitInfo.getPrivacyAgreement();
        this.apppermissionLink = nativeUnifiedADAppMiitInfo.getPermissionsUrl();
        this.appName = nativeUnifiedADAppMiitInfo.getAppName();
        this.appSize = nativeUnifiedADAppMiitInfo.getPackageSizeBytes();
        this.appDownloadCount = str;
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
    public String getAppPermissonUrl() {
        return this.apppermissionLink;
    }

    @Override
    public String getAppName() {
        return this.appName;
    }

    @Override
    public String getAppDownloadCount() {
        return this.appDownloadCount;
    }

    @Override
    public long getAppSize() {
        return this.appSize;
    }
}
