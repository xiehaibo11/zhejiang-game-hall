package com.tkay.network.mintegral;

import com.mbridge.msdk.out.ApkDisplayInfo;
import com.tkay.core.api.TYAdAppInfo;

/* JADX INFO: loaded from: classes3.dex */
public class MintegralATDownloadAppInfo extends TYAdAppInfo {
    public String appName;
    public String appPackageName;
    public String appPrivacyLink;
    public long appSize;
    public String appVersion;
    public String publisher;

    @Override // com.tkay.core.api.TYAdAppInfo
    public String getAppDownloadCount() {
        return "";
    }

    @Override // com.tkay.core.api.TYAdAppInfo
    public String getAppPermissonUrl() {
        return "";
    }

    public MintegralATDownloadAppInfo(ApkDisplayInfo apkDisplayInfo, String str, long j) {
        this.publisher = apkDisplayInfo.getDevName();
        this.appVersion = apkDisplayInfo.getAppVersion();
        this.appPrivacyLink = apkDisplayInfo.getPriUrl();
        this.appName = apkDisplayInfo.getAppName();
        this.appPackageName = str;
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

    @Override // com.tkay.core.api.TYAdAppInfo
    public String getAppPackageName() {
        return this.appPackageName;
    }
}
