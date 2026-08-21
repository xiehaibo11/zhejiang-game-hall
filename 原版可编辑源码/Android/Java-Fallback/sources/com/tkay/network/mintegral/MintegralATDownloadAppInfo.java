package com.tkay.network.mintegral;

public class MintegralATDownloadAppInfo extends com.tkay.core.api.TYAdAppInfo {
    public java.lang.String appName;
    public java.lang.String appPackageName;
    public java.lang.String appPrivacyLink;
    public long appSize;
    public java.lang.String appVersion;
    public java.lang.String publisher;

    public MintegralATDownloadAppInfo(com.mbridge.msdk.out.ApkDisplayInfo r2, java.lang.String r3, long r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = r2.getDevName()
            r1.publisher = r0
            java.lang.String r0 = r2.getAppVersion()
            r1.appVersion = r0
            java.lang.String r0 = r2.getPriUrl()
            r1.appPrivacyLink = r0
            java.lang.String r2 = r2.getAppName()
            r1.appName = r2
            r1.appPackageName = r3
            r1.appSize = r4
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
            java.lang.String r0 = r1.appPackageName
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
