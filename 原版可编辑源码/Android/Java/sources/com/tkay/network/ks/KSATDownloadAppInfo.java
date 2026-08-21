package com.tkay.network.ks;

import com.kwad.sdk.api.KsNativeAd;
import com.tkay.core.api.TYAdAppInfo;

public class KSATDownloadAppInfo extends TYAdAppInfo {
    public String appDownloadCount;
    public String appName;
    public String appPackageName;
    public String appPrivacyLink;
    public long appSize;
    public String appVersion;
    public String apppermissionLink;
    public String publisher;

    public KSATDownloadAppInfo(KsNativeAd ksNativeAd) {
        this.publisher = ksNativeAd.getCorporationName();
        this.appVersion = ksNativeAd.getAppVersion();
        this.appPrivacyLink = ksNativeAd.getAppPrivacyUrl();
        this.apppermissionLink = ksNativeAd.getPermissionInfoUrl();
        this.appName = ksNativeAd.getAppName();
        this.appSize = ksNativeAd.getAppPackageSize();
        this.appPackageName = ksNativeAd.getAppPackageName();
        this.appDownloadCount = ksNativeAd.getAppDownloadCountDes();
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

    @Override
    public String getAppDownloadCount() {
        return this.appDownloadCount;
    }
}
