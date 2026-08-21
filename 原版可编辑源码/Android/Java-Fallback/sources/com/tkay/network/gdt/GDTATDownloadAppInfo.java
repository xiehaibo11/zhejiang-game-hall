package com.tkay.network.gdt;

public class GDTATDownloadAppInfo extends com.tkay.core.api.TYAdAppInfo {
    public java.lang.String appDownloadCount;
    public java.lang.String appName;
    public java.lang.String appPrivacyLink;
    public long appSize;
    public java.lang.String appVersion;
    public java.lang.String apppermissionLink;
    public java.lang.String publisher;

    public GDTATDownloadAppInfo(com.qq.e.ads.nativ.NativeUnifiedADAppMiitInfo r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = r3.getAuthorName()
            r2.publisher = r0
            java.lang.String r0 = r3.getVersionName()
            r2.appVersion = r0
            java.lang.String r0 = r3.getPrivacyAgreement()
            r2.appPrivacyLink = r0
            java.lang.String r0 = r3.getPermissionsUrl()
            r2.apppermissionLink = r0
            java.lang.String r0 = r3.getAppName()
            r2.appName = r0
            long r0 = r3.getPackageSizeBytes()
            r2.appSize = r0
            r2.appDownloadCount = r4
            return
    }

    @Override
    public java.lang.String getAppDownloadCount() {
            r1 = this;
            java.lang.String r0 = r1.appDownloadCount
            return r0
    }

    @Override
    public java.lang.String getAppName() {
            r1 = this;
            java.lang.String r0 = r1.appName
            return r0
    }

    @Override
    public java.lang.String getAppPackageName() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public java.lang.String getAppPermissonUrl() {
            r1 = this;
            java.lang.String r0 = r1.apppermissionLink
            return r0
    }

    @Override
    public java.lang.String getAppPrivacyUrl() {
            r1 = this;
            java.lang.String r0 = r1.appPrivacyLink
            return r0
    }

    @Override
    public long getAppSize() {
            r2 = this;
            long r0 = r2.appSize
            return r0
    }

    @Override
    public java.lang.String getAppVersion() {
            r1 = this;
            java.lang.String r0 = r1.appVersion
            return r0
    }

    @Override
    public java.lang.String getPublisher() {
            r1 = this;
            java.lang.String r0 = r1.publisher
            return r0
    }
}
