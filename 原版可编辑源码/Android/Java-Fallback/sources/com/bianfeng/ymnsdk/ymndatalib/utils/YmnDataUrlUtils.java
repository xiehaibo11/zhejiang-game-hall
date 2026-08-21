package com.bianfeng.ymnsdk.ymndatalib.utils;

public class YmnDataUrlUtils {
    public static volatile boolean checkDebugUrl;
    public static volatile com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils urlUtils;
    public java.lang.String debug_url;
    public java.lang.String post_url;
    public java.lang.String test_ymndata_post;
    public java.lang.String test_ymndata_white_list;
    public java.lang.String ymndata_post_url;
    public java.lang.String ymndata_white_list_url;

    static {
            return
    }

    public YmnDataUrlUtils() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "https://sluice.imeete.com/api/data/receiver"
            r1.ymndata_post_url = r0
            java.lang.String r0 = "https://sdk-config.imeete.net/sluice/whitelist"
            r1.ymndata_white_list_url = r0
            java.lang.String r0 = "ymndata_post_url"
            r1.test_ymndata_post = r0
            java.lang.String r0 = "ymndata_white_list_url"
            r1.test_ymndata_white_list = r0
            return
    }

    public static com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils getInstance() {
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils.urlUtils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils> r0 = com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils r1 = com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils.urlUtils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils r1 = new com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils.urlUtils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.YmnDataUrlUtils.urlUtils
            return r0
    }

    private boolean hasDebug(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getDebugUrl(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Le
            r1.debug_url = r2
            r2 = 1
            return r2
        Le:
            r2 = 0
            return r2
    }

    public java.lang.String getYmndataPostUrl() {
            r2 = this;
            java.lang.String r0 = r2.test_ymndata_post
            boolean r0 = r2.hasDebug(r0)
            if (r0 == 0) goto L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "测试："
            r0.append(r1)
            java.lang.String r1 = r2.debug_url
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.debug_url
            r0.append(r1)
            java.lang.String r1 = "/api/data/receiver"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L32:
            java.lang.String r0 = r2.ymndata_post_url
            return r0
    }

    public java.lang.String get_ymndata_white_list() {
            r1 = this;
            java.lang.String r0 = r1.test_ymndata_white_list
            boolean r0 = r1.hasDebug(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = r1.debug_url
            return r0
        Lb:
            java.lang.String r0 = r1.ymndata_white_list_url
            return r0
    }

    public void setYmndataPostUrl(java.lang.String r1) {
            r0 = this;
            r0.ymndata_post_url = r1
            return
    }

    public void set_ymndata_white_list(java.lang.String r1) {
            r0 = this;
            r0.ymndata_white_list_url = r1
            return
    }
}
