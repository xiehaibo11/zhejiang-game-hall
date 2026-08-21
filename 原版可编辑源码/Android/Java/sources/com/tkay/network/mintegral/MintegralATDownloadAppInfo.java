package com.tkay.network.mintegral;

import com.mbridge.msdk.out.ApkDisplayInfo;
import com.tkay.core.api.TYAdAppInfo;

public class MintegralATDownloadAppInfo extends TYAdAppInfo {
    public String appName;
    public String appPackageName;
    public String appPrivacyLink;
    public long appSize;
    public String appVersion;
    public String publisher;

    @Override
    public String getAppDownloadCount() {
        return "";
    }

    @Override
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

    @Override
    public String getAppPackageName() {
        return this.appPackageName;
    }
}
