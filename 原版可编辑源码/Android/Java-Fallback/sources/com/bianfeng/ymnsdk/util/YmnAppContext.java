package com.bianfeng.ymnsdk.util;

public class YmnAppContext {
    private static final java.lang.String KEY_AREA_ID = "TD_AREA_ID";
    private static final java.lang.String KEY_CHANNEL_ID = "TD_CHANNEL_ID";
    private static final java.lang.String KEY_CHANNEL_ID_FIX = "channel_id";
    private static final java.lang.String KEY_DATAFUN_URL = "KEY_DATAFUN_HOST";
    private static final java.lang.String KEY_GROUP_ID = "TD_GROUP_ID";
    private static final java.lang.String KEY_HOST_URL = "YMN_HOST_VER";
    private static final java.lang.String KEY_MAIN_ACTIVITY = "MAIN_ACTIVITY";
    private static final java.lang.String KEY_PRODUCT_ID = "TD_PRODUCT_ID";
    private static final java.lang.String KEY_SDK_APP_ID = "TD_SDK_APP_ID";
    public static final java.lang.String SIGN_APP_SECREAT = "c986f7b40c468a3a3b1087d0eb08628b";
    private static final java.lang.String TAG = "YmnAppContext";
    private static final java.lang.String TD_SDK_APP_KEY = "TD_SDK_APP_KEY";
    private static int appId;
    private static java.lang.String areaId;
    private static java.lang.String channelId;
    private static java.lang.String clientType;
    private static int configId;
    private static java.lang.String datafunUrl;
    private static boolean debug;
    private static java.lang.String groupId;
    private static java.lang.String hostUrl;
    private static volatile boolean inited;
    private static java.lang.String mainActivity;
    private static java.lang.String pkgName;
    private static java.lang.String productId;
    private static java.lang.String sdkAppId;
    private static java.lang.String sdkAppKey;
    private static java.lang.String verCode;
    private static java.lang.String verName;

    public YmnAppContext() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void check() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.pkgName
            java.lang.String r1 = ""
            if (r0 != 0) goto L8
            com.bianfeng.ymnsdk.util.YmnAppContext.pkgName = r1
        L8:
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.verName
            if (r0 != 0) goto Le
            com.bianfeng.ymnsdk.util.YmnAppContext.verName = r1
        Le:
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.verCode
            if (r0 != 0) goto L14
            com.bianfeng.ymnsdk.util.YmnAppContext.verCode = r1
        L14:
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.channelId
            if (r0 != 0) goto L1a
            com.bianfeng.ymnsdk.util.YmnAppContext.channelId = r1
        L1a:
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.groupId
            if (r0 != 0) goto L22
            java.lang.String r0 = "0"
            com.bianfeng.ymnsdk.util.YmnAppContext.groupId = r0
        L22:
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.clientType
            java.lang.String r2 = "1"
            if (r0 != 0) goto L2a
            com.bianfeng.ymnsdk.util.YmnAppContext.clientType = r2
        L2a:
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.areaId
            if (r0 != 0) goto L30
            com.bianfeng.ymnsdk.util.YmnAppContext.areaId = r2
        L30:
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.hostUrl
            if (r0 != 0) goto L36
            com.bianfeng.ymnsdk.util.YmnAppContext.hostUrl = r1
        L36:
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.sdkAppId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L4b
            com.bianfeng.ymnsdk.feature.f r0 = new com.bianfeng.ymnsdk.feature.f
            java.lang.String r1 = "未配置有猫腻 AppId"
            r0.<init>(r1)
            com.bianfeng.ymnsdk.feature.d.a(r0)
            r0.a()
        L4b:
            return
    }

    public static java.lang.String getApkPath(android.content.Context r2) {
            android.content.pm.ApplicationInfo r0 = r2.getApplicationInfo()     // Catch: java.lang.Throwable -> L7
            java.lang.String r0 = r0.sourceDir     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = move-exception
            r1 = 0
            return r1
    }

    public static int getAppId() {
            int r0 = com.bianfeng.ymnsdk.util.YmnAppContext.appId
            return r0
    }

    public static java.lang.String getAreaId() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.areaId
            return r0
    }

    public static java.lang.String getChannelId() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.channelId
            return r0
    }

    public static int getChannelIdInt() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.channelId     // Catch: java.lang.Exception -> L7
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = move-exception
            r1 = 0
            return r1
    }

    public static java.lang.String getClientType() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.clientType
            return r0
    }

    public static int getConfigId() {
            int r0 = com.bianfeng.ymnsdk.util.YmnAppContext.configId
            return r0
    }

    public static java.lang.String getConfigIdStr() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = com.bianfeng.ymnsdk.util.YmnAppContext.configId
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String getDataFunUrl() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.datafunUrl
            return r0
    }

    public static java.lang.String getGroupId() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.groupId
            return r0
    }

    public static java.lang.String getHostUrl() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.hostUrl
            return r0
    }

    public static java.lang.String getMainActivity() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.mainActivity
            return r0
    }

    public static int getMetaDataValueInt(java.lang.String r2) {
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L9
            int r0 = r0.getMetaDataValueInt(r2)     // Catch: java.lang.Exception -> L9
            return r0
        L9:
            r0 = move-exception
            r1 = 0
            return r1
    }

    public static java.lang.String getMetaDataValueString(java.lang.String r2) {
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L9
            java.lang.String r0 = r0.getMetaDataValueString(r2)     // Catch: java.lang.Exception -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String getPkgName() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.pkgName
            return r0
    }

    public static java.lang.String getProductId() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.productId
            return r0
    }

    public static java.lang.String getSdkAppId() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.sdkAppId
            return r0
    }

    public static java.lang.String getSdkAppKey() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.sdkAppKey
            return r0
    }

    public static java.lang.String getVerCode() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.verCode
            return r0
    }

    public static java.lang.String getVerName() {
            java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.verName
            return r0
    }

    public static void init(android.content.Context r1) {
            boolean r0 = com.bianfeng.ymnsdk.util.YmnAppContext.inited
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            com.bianfeng.ymnsdk.util.YmnAppContext.inited = r0
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r0 = r0.getPkgName()
            com.bianfeng.ymnsdk.util.YmnAppContext.pkgName = r0
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r0 = r0.getVerName()
            com.bianfeng.ymnsdk.util.YmnAppContext.verName = r0
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r0 = r0.getVerCode()
            com.bianfeng.ymnsdk.util.YmnAppContext.verCode = r0
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            int r0 = r0.getAppId()
            com.bianfeng.ymnsdk.util.YmnAppContext.appId = r0
            java.lang.String r0 = "TD_SDK_APP_ID"
            java.lang.String r0 = getMetaDataValueString(r0)
            com.bianfeng.ymnsdk.util.YmnAppContext.sdkAppId = r0
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            int r0 = r0.getIdentify_id()
            com.bianfeng.ymnsdk.util.YmnAppContext.configId = r0
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r0 = r0.getDeviceType()
            com.bianfeng.ymnsdk.util.YmnAppContext.clientType = r0
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r0 = r0.getChannelId()
            com.bianfeng.ymnsdk.util.YmnAppContext.channelId = r0
            java.lang.String r0 = "TD_GROUP_ID"
            java.lang.String r0 = getMetaDataValueString(r0)
            com.bianfeng.ymnsdk.util.YmnAppContext.groupId = r0
            java.lang.String r0 = "TD_AREA_ID"
            java.lang.String r0 = getMetaDataValueString(r0)
            com.bianfeng.ymnsdk.util.YmnAppContext.areaId = r0
            java.lang.String r0 = "TD_PRODUCT_ID"
            java.lang.String r0 = getMetaDataValueString(r0)
            com.bianfeng.ymnsdk.util.YmnAppContext.productId = r0
            java.lang.String r0 = "YMN_HOST_VER"
            java.lang.String r0 = getMetaDataValueString(r0)
            com.bianfeng.ymnsdk.util.YmnAppContext.hostUrl = r0
            java.lang.String r0 = "KEY_DATAFUN_HOST"
            java.lang.String r0 = getMetaDataValueString(r0)
            com.bianfeng.ymnsdk.util.YmnAppContext.datafunUrl = r0
            java.lang.String r0 = "MAIN_ACTIVITY"
            java.lang.String r0 = getMetaDataValueString(r0)
            com.bianfeng.ymnsdk.util.YmnAppContext.mainActivity = r0
            java.lang.String r0 = "TD_SDK_APP_KEY"
            java.lang.String r0 = getMetaDataValueString(r0)
            com.bianfeng.ymnsdk.util.YmnAppContext.sdkAppKey = r0
            check()
            return
    }

    public static boolean isDebug() {
            java.lang.String r0 = "debug"
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.YmnProperties.getValue(r0)
            boolean r0 = java.lang.Boolean.parseBoolean(r0)
            com.bianfeng.ymnsdk.util.YmnAppContext.debug = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "debugMode is"
            r0.append(r1)
            boolean r1 = com.bianfeng.ymnsdk.util.YmnAppContext.debug
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "YmnAppContext"
            com.bianfeng.ymnsdk.util.Logger.i(r1, r0)
            boolean r0 = com.bianfeng.ymnsdk.util.YmnAppContext.debug
            return r0
    }

    public static void setAppId(java.lang.String r0) {
            com.bianfeng.ymnsdk.util.YmnAppContext.sdkAppId = r0
            return
    }

    public static void setConfigId(int r0) {
            com.bianfeng.ymnsdk.util.YmnAppContext.configId = r0
            return
    }

    public static void setGroupId(java.lang.String r0) {
            com.bianfeng.ymnsdk.util.YmnAppContext.groupId = r0
            return
    }

    public static void setSdkAppKey(java.lang.String r0) {
            com.bianfeng.ymnsdk.util.YmnAppContext.sdkAppKey = r0
            return
    }
}
