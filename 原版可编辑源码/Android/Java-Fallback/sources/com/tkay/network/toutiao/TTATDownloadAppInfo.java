package com.tkay.network.toutiao;

public class TTATDownloadAppInfo extends com.tkay.core.api.TYAdAppInfo {
    public java.lang.String appName;
    public java.lang.String appPrivacyLink;
    public long appSize;
    public java.lang.String appVersion;
    public java.lang.String publisher;

    public TTATDownloadAppInfo(com.bykv.vk.openvk.ComplianceInfo r2, long r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = r2.getPrivacyUrl()
            r1.appPrivacyLink = r0
            java.lang.String r0 = r2.getAppName()
            r1.appName = r0
            java.lang.String r0 = r2.getDeveloperName()
            r1.publisher = r0
            java.lang.String r2 = r2.getAppVersion()
            r1.appVersion = r2
            r1.appSize = r3
            return
    }

    @Override
    public java.lang.String getAppDownloadCount() {
            r1 = this;
            java.lang.String r0 = ""
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
            java.lang.String r0 = ""
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
