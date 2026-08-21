package com.bianfeng.ymnsdk.utilslib;

public class UtilsSdk {
    private static volatile boolean isFrist;
    private static volatile boolean isFristInitDeviceInfo;

    public UtilsSdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getAppPermissions(android.content.Context r2) {
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppPermissionUtils.getList(r2)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = move-exception
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String getDebugUrl() {
            com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils r0 = com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils.getInstance()
            java.lang.String r0 = r0.getDebugUrl()
            return r0
    }

    public static java.lang.String getDebugUrl(java.lang.String r1) {
            com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils r0 = com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils.getInstance()
            java.lang.String r0 = r0.getDebugUrl(r1)
            return r0
    }

    public static com.bianfeng.ymnsdk.utilslib.gson.GsonUtils getGsonUtils() {
            java.lang.Class<com.bianfeng.ymnsdk.utilslib.UtilsSdk> r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.class
            java.lang.String r1 = "getGsonUtils"
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0, r1)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            return r0
    }

    public static java.lang.String getVersion() {
            java.lang.String r0 = "1.5.8"
            return r0
    }

    public static void initContext(android.content.Context r2) {
            boolean r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.isFrist
            if (r0 != 0) goto L25
            com.bianfeng.ymnsdk.utilslib.cache.FileUtils.init(r2)
            com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils r0 = com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils.getInstance()
            r0.initDebugUrl()
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.init(r2)
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.updateState()
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            r0.init(r2)
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r0 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            r0.setContext(r2)
            r0 = 1
            com.bianfeng.ymnsdk.utilslib.UtilsSdk.isFrist = r0
        L25:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UtilsSdk initContext: "
            r0.append(r1)
            boolean r1 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.isFrist
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ymnsdk"
            android.util.Log.i(r1, r0)
            return
    }

    public static void initDeviceInfo(android.content.Context r1) {
            boolean r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.isFristInitDeviceInfo
            if (r0 != 0) goto Le
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r0 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            r0.init(r1)
            r0 = 1
            com.bianfeng.ymnsdk.utilslib.UtilsSdk.isFristInitDeviceInfo = r0
        Le:
            return
    }
}
