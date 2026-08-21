package com.bianfeng.ymnsdk.utilslib.cache;

public class YmnDeubgUrlUtils {
    private static volatile com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils urlUtils;
    private java.util.Map<java.lang.String, java.lang.String> urlMap;

    private YmnDeubgUrlUtils() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.urlMap = r0
            return
    }

    public static com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils getInstance() {
            com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils r0 = com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils.urlUtils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils> r0 = com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils r1 = com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils.urlUtils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils r1 = new com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils.urlUtils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils r0 = com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils.urlUtils
            return r0
    }

    public java.lang.String getDebugUrl() {
            r4 = this;
            java.lang.String r0 = ""
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L3c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3c
            r2.<init>()     // Catch: java.lang.Exception -> L3c
            java.lang.String r3 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.getSDCardBaseDir()     // Catch: java.lang.Exception -> L3c
            r2.append(r3)     // Catch: java.lang.Exception -> L3c
            java.lang.String r3 = java.io.File.separator     // Catch: java.lang.Exception -> L3c
            r2.append(r3)     // Catch: java.lang.Exception -> L3c
            java.lang.String r3 = ".bftj/sdk/ymnDebug"
            r2.append(r3)     // Catch: java.lang.Exception -> L3c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L3c
            r1.<init>(r2)     // Catch: java.lang.Exception -> L3c
            boolean r2 = r1.exists()     // Catch: java.lang.Exception -> L3c
            if (r2 != 0) goto L28
            return r0
        L28:
            java.util.Properties r2 = new java.util.Properties     // Catch: java.lang.Exception -> L3c
            r2.<init>()     // Catch: java.lang.Exception -> L3c
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L3c
            r3.<init>(r1)     // Catch: java.lang.Exception -> L3c
            r2.load(r3)     // Catch: java.lang.Exception -> L3c
            java.lang.String r1 = "url_host_ymnsdk"
            java.lang.String r0 = r2.getProperty(r1)     // Catch: java.lang.Exception -> L3c
            return r0
        L3c:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public java.lang.String getDebugUrl(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.urlMap     // Catch: java.lang.Exception -> L9
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Exception -> L9
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L9
            return r2
        L9:
            r2 = 0
            return r2
    }

    public void initDebugUrl() {
            r2 = this;
            java.lang.String r0 = r2.getDebugUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Lb
            return
        Lb:
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L2f
            boolean r1 = r1.isJsonObject(r0)     // Catch: java.lang.Exception -> L2f
            if (r1 != 0) goto L16
            return
        L16:
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L2f
            java.util.Map r0 = r1.getMapFrom(r0)     // Catch: java.lang.Exception -> L2f
            java.lang.String r1 = "data"
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L2f
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L2f
            java.util.Map r0 = r1.getMapFrom(r0)     // Catch: java.lang.Exception -> L2f
            r2.urlMap = r0     // Catch: java.lang.Exception -> L2f
            return
        L2f:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = "ymnsdk"
            java.lang.String r1 = "测试路径格式配置错误"
            android.util.Log.i(r0, r1)
            return
    }
}
