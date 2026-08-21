package com.tkay.network.gdt;

import com.qq.e.ads.nativ.NativeUnifiedADAppMiitInfo;
import com.tkay.core.api.TYAdAppInfo;

/* JADX INFO: loaded from: classes3.dex */
public class GDTATDownloadAppInfo extends TYAdAppInfo {
    public String appDownloadCount;
    public String appName;
    public String appPrivacyLink;
    public long appSize;
    public String appVersion;
    public String apppermissionLink;
    public String publisher;

    @Override // com.tkay.core.api.TYAdAppInfo
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
    public String getAppPermissonUrl() {
        return this.apppermissionLink;
    }

    @Override // com.tkay.core.api.TYAdAppInfo
    public String getAppName() {
        return this.appName;
    }

    @Override // com.tkay.core.api.TYAdAppInfo
    public String getAppDownloadCount() {
        return this.appDownloadCount;
    }

    @Override // com.tkay.core.api.TYAdAppInfo
    public long getAppSize() {
        return this.appSize;
    }
}
