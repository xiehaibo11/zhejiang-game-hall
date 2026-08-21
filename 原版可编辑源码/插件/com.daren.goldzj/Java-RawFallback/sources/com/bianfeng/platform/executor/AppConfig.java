package com.bianfeng.platform.executor;

@java.lang.Deprecated
public class AppConfig {
    private static final java.lang.String KEY_APP_ID = "TD_APP_ID";
    private static final java.lang.String KEY_AREA_ID = "TD_AREA_ID";
    private static final java.lang.String KEY_CHANNEL_ID = "TD_CHANNEL_ID";
    private static final java.lang.String KEY_CHANNEL_ID_FIX = "channel_id";
    private static final java.lang.String KEY_CONFIG_ID = "TD_CONFIG_ID";
    private static final java.lang.String KEY_GROUP_ID = "TD_GROUP_ID";
    private static final java.lang.String KEY_HOST_URL = "YMN_HOST_VER";
    private static final java.lang.String KEY_MAIN_ACTIVITY = "MAIN_ACTIVITY";
    private static final java.lang.String KEY_OS_TYPE = "TD_CLIENT_TYPE";
    private static final java.lang.String KEY_PRODUCT_ID = "TD_PRODUCT_ID";
    private static final java.lang.String KEY_SDK_APP_ID = "TD_SDK_APP_ID";
    public static final java.lang.String SIGN_APP_SECREAT = "c986f7b40c468a3a3b1087d0eb08628b";
    private static final java.lang.String TAG = "AppConfig";
    private static final java.lang.String TD_SDK_APP_KEY = "TD_SDK_APP_KEY";
    private static java.lang.String appId;
    private static java.lang.String areaId;
    private static java.lang.String channelId;
    private static java.lang.String clientType;
    private static java.lang.String configId;
    private static android.content.Context context;
    private static boolean debug;
    private static java.lang.String groupId;
    private static java.lang.String hostUrl;
    private static boolean inited;
    private static java.lang.String mainActivity;
    private static android.os.Bundle metaData;
    private static java.lang.String pkgName;
    private static java.lang.String productId;
    private static java.lang.String sdkAppId;
    private static java.lang.String sdkAppKey;
    private static java.lang.String verCode;
    private static java.lang.String verName;

    public AppConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void check() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.pkgName
            java.lang.String r1 = ""
            if (r0 != 0) goto L8
            com.bianfeng.platform.executor.AppConfig.pkgName = r1
        L8:
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.verName
            if (r0 != 0) goto Le
            com.bianfeng.platform.executor.AppConfig.verName = r1
        Le:
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.verCode
            if (r0 != 0) goto L14
            com.bianfeng.platform.executor.AppConfig.verCode = r1
        L14:
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.channelId
            if (r0 != 0) goto L1a
            com.bianfeng.platform.executor.AppConfig.channelId = r1
        L1a:
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.groupId
            if (r0 != 0) goto L22
            java.lang.String r0 = "0"
            com.bianfeng.platform.executor.AppConfig.groupId = r0
        L22:
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.clientType
            java.lang.String r2 = "1"
            if (r0 != 0) goto L2a
            com.bianfeng.platform.executor.AppConfig.clientType = r2
        L2a:
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.areaId
            if (r0 != 0) goto L30
            com.bianfeng.platform.executor.AppConfig.areaId = r2
        L30:
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.configId
            if (r0 != 0) goto L36
            com.bianfeng.platform.executor.AppConfig.configId = r1
        L36:
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.hostUrl
            if (r0 != 0) goto L3c
            com.bianfeng.platform.executor.AppConfig.hostUrl = r1
        L3c:
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.sdkAppId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L52
            com.bianfeng.ymnsdk.feature.f r0 = new com.bianfeng.ymnsdk.feature.f
            java.lang.String r1 = "未配置有猫腻 AppId"
            r0.<init>(r1)
            com.bianfeng.ymnsdk.feature.f r0 = com.bianfeng.ymnsdk.feature.d.a(r0)
            r0.a()
        L52:
            return
    }

    public static java.lang.String getApkPath(android.content.Context r0) {
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = r0.sourceDir     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public static java.lang.String getAppId() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.appId
            return r0
    }

    public static java.lang.String getAreaId() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.areaId
            return r0
    }

    public static java.lang.String getChannelId() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.channelId
            return r0
    }

    public static java.lang.String getClientType() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.clientType
            return r0
    }

    public static java.lang.String getConfigId() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.configId
            return r0
    }

    public static android.content.Context getContext() {
            android.content.Context r0 = com.bianfeng.platform.executor.AppConfig.context
            return r0
    }

    public static java.lang.String getGroupId() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.groupId
            return r0
    }

    public static java.lang.String getHostUrl() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.hostUrl
            return r0
    }

    public static java.lang.String getMainActivity() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.mainActivity
            return r0
    }

    private static java.lang.String getMetaDataValue(android.os.Bundle r1, java.lang.String r2) {
            if (r1 == 0) goto L12
            boolean r0 = r1.containsKey(r2)
            if (r0 != 0) goto L9
            goto L12
        L9:
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            return r1
        L12:
            r1 = 0
            return r1
    }

    public static java.lang.String getMetaDataValue(java.lang.String r1) {
            android.os.Bundle r0 = com.bianfeng.platform.executor.AppConfig.metaData
            if (r0 == 0) goto L9
            java.lang.String r1 = getMetaDataValue(r0, r1)
            return r1
        L9:
            r1 = 0
            return r1
    }

    public static java.lang.String getPkgName() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.pkgName
            return r0
    }

    public static java.lang.String getProductId() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.productId
            return r0
    }

    public static java.lang.String getSdkAppId() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.sdkAppId
            return r0
    }

    public static java.lang.String getSdkAppKey() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.sdkAppKey
            return r0
    }

    public static java.lang.String getVerCode() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.verCode
            return r0
    }

    public static java.lang.String getVerName() {
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.verName
            return r0
    }

    public static void init(android.content.Context r3) {
            boolean r0 = com.bianfeng.platform.executor.AppConfig.inited     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            com.bianfeng.platform.executor.AppConfig.inited = r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            android.content.Context r0 = r3.getApplicationContext()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.context = r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r0 = r3.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.pkgName = r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r1 = com.bianfeng.platform.executor.AppConfig.pkgName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            r2 = 0
            android.content.pm.PackageInfo r1 = r0.getPackageInfo(r1, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r2 = r1.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.verName = r2     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            int r1 = r1.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.verCode = r1     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r1 = com.bianfeng.platform.executor.AppConfig.pkgName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r1, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            android.os.Bundle r0 = r0.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.metaData = r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            android.os.Bundle r0 = com.bianfeng.platform.executor.AppConfig.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r1 = "TD_APP_ID"
            java.lang.String r0 = getMetaDataValue(r0, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.appId = r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            android.os.Bundle r0 = com.bianfeng.platform.executor.AppConfig.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r1 = "TD_SDK_APP_ID"
            java.lang.String r0 = getMetaDataValue(r0, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.sdkAppId = r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r3 = getApkPath(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            if (r0 != 0) goto L71
            java.lang.String r3 = com.bianfeng.afext.Afexter.readChannel(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.channelId = r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            r3.<init>()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r0 = "channelId from afexter "
            r3.append(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r0 = com.bianfeng.platform.executor.AppConfig.channelId     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            r3.append(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r3 = r3.toString()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.ymnsdk.util.Logger.d(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
        L71:
            java.lang.String r3 = com.bianfeng.platform.executor.AppConfig.channelId     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r0 = "TD_CHANNEL_ID"
            if (r3 == 0) goto L83
            android.os.Bundle r3 = com.bianfeng.platform.executor.AppConfig.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r3 = getMetaDataValue(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.channelId = r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
        L83:
            java.lang.String r3 = com.bianfeng.platform.executor.AppConfig.channelId     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            if (r3 == 0) goto L93
            android.os.Bundle r3 = com.bianfeng.platform.executor.AppConfig.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r3 = getMetaDataValue(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.channelId = r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
        L93:
            java.lang.String r3 = com.bianfeng.platform.executor.AppConfig.channelId     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            if (r3 == 0) goto La5
            android.os.Bundle r3 = com.bianfeng.platform.executor.AppConfig.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r0 = "channel_id"
            java.lang.String r3 = getMetaDataValue(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.channelId = r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
        La5:
            android.os.Bundle r3 = com.bianfeng.platform.executor.AppConfig.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r0 = "TD_GROUP_ID"
            java.lang.String r3 = getMetaDataValue(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.groupId = r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            android.os.Bundle r3 = com.bianfeng.platform.executor.AppConfig.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r0 = "TD_CLIENT_TYPE"
            java.lang.String r3 = getMetaDataValue(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.clientType = r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            android.os.Bundle r3 = com.bianfeng.platform.executor.AppConfig.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r0 = "TD_AREA_ID"
            java.lang.String r3 = getMetaDataValue(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.areaId = r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            android.os.Bundle r3 = com.bianfeng.platform.executor.AppConfig.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r0 = "TD_PRODUCT_ID"
            java.lang.String r3 = getMetaDataValue(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.productId = r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            android.os.Bundle r3 = com.bianfeng.platform.executor.AppConfig.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r0 = "TD_CONFIG_ID"
            java.lang.String r3 = getMetaDataValue(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.configId = r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            android.os.Bundle r3 = com.bianfeng.platform.executor.AppConfig.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r0 = "YMN_HOST_VER"
            java.lang.String r3 = getMetaDataValue(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.hostUrl = r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            android.os.Bundle r3 = com.bianfeng.platform.executor.AppConfig.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r0 = "MAIN_ACTIVITY"
            java.lang.String r3 = getMetaDataValue(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.mainActivity = r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r3 = "TD_SDK_APP_KEY"
            java.lang.String r3 = getMetaDataValue(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.sdkAppKey = r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            check()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r3 = "debug"
            java.lang.String r3 = com.bianfeng.ymnsdk.feature.YmnProperties.getValue(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            boolean r3 = java.lang.Boolean.parseBoolean(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.platform.executor.AppConfig.debug = r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r3 = "AppConfig"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            r0.<init>()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r1 = "debugMode is"
            r0.append(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            boolean r1 = com.bianfeng.platform.executor.AppConfig.debug     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            r0.append(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            java.lang.String r0 = r0.toString()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            com.bianfeng.ymnsdk.util.Logger.i(r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L11b
            goto L11f
        L11b:
            r3 = move-exception
            r3.printStackTrace()
        L11f:
            return
    }

    public static boolean isDebug() {
            boolean r0 = com.bianfeng.platform.executor.AppConfig.debug
            return r0
    }

    public static void setAppId(java.lang.String r0) {
            com.bianfeng.platform.executor.AppConfig.appId = r0
            return
    }

    public static void setAreaId(java.lang.String r0) {
            com.bianfeng.platform.executor.AppConfig.areaId = r0
            return
    }

    public static void setChannelId(java.lang.String r0) {
            com.bianfeng.platform.executor.AppConfig.channelId = r0
            return
    }

    public static void setClientType(java.lang.String r0) {
            com.bianfeng.platform.executor.AppConfig.clientType = r0
            return
    }

    public static void setConfigId(java.lang.String r0) {
            com.bianfeng.platform.executor.AppConfig.configId = r0
            return
    }

    public static void setDebug(boolean r0) {
            com.bianfeng.platform.executor.AppConfig.debug = r0
            return
    }

    public static void setGroupId(java.lang.String r0) {
            com.bianfeng.platform.executor.AppConfig.groupId = r0
            return
    }

    public static void setHostUrl(java.lang.String r0) {
            com.bianfeng.platform.executor.AppConfig.hostUrl = r0
            return
    }

    public static void setProductId(java.lang.String r0) {
            com.bianfeng.platform.executor.AppConfig.productId = r0
            return
    }

    public static void setSdkAppId(java.lang.String r0) {
            com.bianfeng.platform.executor.AppConfig.sdkAppId = r0
            return
    }
}
