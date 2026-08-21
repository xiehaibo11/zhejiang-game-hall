package com.bianfeng.utilslib;

public class AppConfigUtils {
    private static final java.lang.String YMNSDK_ALIPAY_CHANNEL_ID = "YMNSDK_H5GAME_ALIPAY_CHANNEL_ID";
    private static final java.lang.String YMNSDK_H5GAME_SDK_VERSION = "YMNSDK_H5GAME_SDK_VERSION";
    private static final java.lang.String YMNSDK_WEBPAY_APP_ID = "GX_GCP_ID";
    private static final java.lang.String YMNSDK_WEBPAY_PRIVATE_KEY = "GX_GCP_SERCERT";
    private static final java.lang.String YMNSDK_WEBPAY_SHOP_ID = "YMNSDK_H5GAME_SHOP_ID";
    private static final java.lang.String YMNSDK_WXPAY_CHANNEL_ID = "YMNSDK_H5GAME_WXPAY_CHANNEL_ID";
    private static com.bianfeng.utilslib.AppConfigUtils appConfig;
    private android.app.Activity context;
    private java.lang.String cp;
    private java.lang.String ext;
    private java.lang.String netIp;

    static {
            com.bianfeng.utilslib.AppConfigUtils r0 = new com.bianfeng.utilslib.AppConfigUtils
            r0.<init>()
            com.bianfeng.utilslib.AppConfigUtils.appConfig = r0
            return
    }

    private AppConfigUtils() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.netIp = r0
            r1.ext = r0
            r1.cp = r0
            return
    }

    public static com.bianfeng.utilslib.AppConfigUtils getInstance() {
            com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.AppConfigUtils.appConfig
            return r0
    }

    public int getActivityOrientation(android.app.Activity r3) {
            r2 = this;
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: java.lang.Exception -> L11
            android.content.ComponentName r3 = r3.getComponentName()     // Catch: java.lang.Exception -> L11
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ActivityInfo r3 = r0.getActivityInfo(r3, r1)     // Catch: java.lang.Exception -> L11
            int r3 = r3.screenOrientation     // Catch: java.lang.Exception -> L11
            return r3
        L11:
            r3 = move-exception
            r3.printStackTrace()
            r3 = 0
            return r3
    }

    public java.lang.String getCp() {
            r1 = this;
            java.lang.String r0 = r1.cp
            return r0
    }

    public java.lang.String getExt() {
            r1 = this;
            java.lang.String r0 = r1.ext
            return r0
    }

    public java.lang.String getMetaDataValue(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = r3.getPackageName()     // Catch: java.lang.Exception -> L28
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L28
            r1 = 0
            r3.getPackageInfo(r0, r1)     // Catch: java.lang.Exception -> L28
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r3 = r3.getApplicationInfo(r0, r1)     // Catch: java.lang.Exception -> L28
            android.os.Bundle r3 = r3.metaData     // Catch: java.lang.Exception -> L28
            if (r3 == 0) goto L26
            boolean r0 = r3.containsKey(r4)     // Catch: java.lang.Exception -> L28
            if (r0 != 0) goto L1d
            goto L26
        L1d:
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Exception -> L28
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L28
            return r3
        L26:
            r3 = 0
            return r3
        L28:
            java.lang.String r3 = "未获取appid"
            return r3
    }

    public java.lang.String getMetaDataValue(java.lang.String r2) {
            r1 = this;
            android.app.Activity r0 = r1.context
            java.lang.String r2 = r1.getMetaDataValue(r0, r2)
            return r2
    }

    public java.lang.String getNetIp() {
            r1 = this;
            java.lang.String r0 = r1.netIp
            return r0
    }

    public java.lang.String getSDKVersion() {
            r2 = this;
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "YMNSDK_H5GAME_SDK_VERSION"
            java.lang.String r0 = r2.getMetaDataValue(r0, r1)
            return r0
    }

    public java.lang.String getSdkVersion() {
            r3 = this;
            com.bianfeng.utilslib.reflex.ReflexCallbackUtils r0 = com.bianfeng.utilslib.UtilsSdk.getReflexCall()
            com.bianfeng.utilslib.reflex.ClassNameSetUtils r1 = com.bianfeng.utilslib.UtilsSdk.getClassNameSet()
            java.lang.String r1 = r1.getH5Version()
            java.lang.String r2 = "version"
            java.lang.Object r0 = r0.getField(r1, r2)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String getWebPayAppId() {
            r2 = this;
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "GX_GCP_ID"
            java.lang.String r0 = r2.getMetaDataValue(r0, r1)
            return r0
    }

    public java.lang.String getWebPayPrivateKey() {
            r2 = this;
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "GX_GCP_SERCERT"
            java.lang.String r0 = r2.getMetaDataValue(r0, r1)
            return r0
    }

    public java.lang.String getYmnsdkAliPayChannelId() {
            r2 = this;
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "YMNSDK_H5GAME_ALIPAY_CHANNEL_ID"
            java.lang.String r0 = r2.getMetaDataValue(r0, r1)
            return r0
    }

    public java.lang.String getYmnsdkWebpayShopId() {
            r2 = this;
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "YMNSDK_H5GAME_SHOP_ID"
            java.lang.String r0 = r2.getMetaDataValue(r0, r1)
            return r0
    }

    public java.lang.String getYmnsdkWxPayChannelId() {
            r2 = this;
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "YMNSDK_H5GAME_WXPAY_CHANNEL_ID"
            java.lang.String r0 = r2.getMetaDataValue(r0, r1)
            return r0
    }

    public void init(android.app.Activity r1) {
            r0 = this;
            r0.context = r1
            return
    }

    public boolean isGetIpSuccess() {
            r1 = this;
            java.lang.String r0 = r1.netIp
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r0 = r0 ^ 1
            return r0
    }

    public void setCp(java.lang.String r1) {
            r0 = this;
            r0.cp = r1
            return
    }

    public void setExt(java.lang.String r1) {
            r0 = this;
            r0.ext = r1
            return
    }

    public void setNetIp(java.lang.String r1) {
            r0 = this;
            r0.netIp = r1
            return
    }
}
