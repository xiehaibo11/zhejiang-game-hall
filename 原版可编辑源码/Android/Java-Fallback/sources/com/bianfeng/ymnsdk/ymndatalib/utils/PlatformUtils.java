package com.bianfeng.ymnsdk.ymndatalib.utils;

public class PlatformUtils {
    public static volatile com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils utils;
    public java.lang.String datafun_ver;
    public int login_platform_id;
    public java.lang.String login_sdk_plugin_ver;
    public java.lang.String login_sdk_third_ver;
    public int pay_platform_id;
    public java.lang.String pay_sdk_plugin_ver;
    public java.lang.String pay_sdk_third_ver;
    public java.lang.String ymnsdk_ver;

    public PlatformUtils() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.login_platform_id = r0
            java.lang.String r1 = ""
            r2.login_sdk_third_ver = r1
            r2.login_sdk_plugin_ver = r1
            r2.pay_platform_id = r0
            r2.pay_sdk_third_ver = r1
            r2.pay_sdk_plugin_ver = r1
            java.lang.String r0 = "1.1.5"
            r2.datafun_ver = r0
            r2.ymnsdk_ver = r1
            return
    }

    public static com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils getInstance() {
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.utils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils> r0 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r1 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.utils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r1 = new com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.utils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils.utils
            return r0
    }

    public java.lang.String getApk_ver() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ver_name:"
            r0.append(r1)
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r1 = r1.getVerName()
            r0.append(r1)
            java.lang.String r1 = "-ver_code:"
            r0.append(r1)
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r1 = r1.getVerCode()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public int getApp_id() {
            r1 = this;
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            int r0 = r0.getAppId()
            return r0
    }

    public java.lang.String getDatafun_ver() {
            r1 = this;
            java.lang.String r0 = r1.datafun_ver
            return r0
    }

    public int getIdentify_id() {
            r1 = this;
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            int r0 = r0.getIdentify_id()
            return r0
    }

    public java.lang.String getLogin_Sdk_plugin_ver() {
            r1 = this;
            java.lang.String r0 = r1.login_sdk_plugin_ver
            return r0
    }

    public int getLogin_platform_id() {
            r1 = this;
            int r0 = r1.login_platform_id
            return r0
    }

    public java.lang.String getLogin_sdk_third_ver() {
            r1 = this;
            java.lang.String r0 = r1.login_sdk_third_ver
            return r0
    }

    public java.lang.String getPay_Sdk_plugin_ver() {
            r1 = this;
            java.lang.String r0 = r1.pay_sdk_plugin_ver
            return r0
    }

    public int getPay_platform_id() {
            r1 = this;
            int r0 = r1.pay_platform_id
            return r0
    }

    public java.lang.String getPay_sdk_third_ver() {
            r1 = this;
            java.lang.String r0 = r1.pay_sdk_third_ver
            return r0
    }

    public java.lang.String getYmnsdk_ver() {
            r1 = this;
            java.lang.String r0 = r1.ymnsdk_ver
            return r0
    }

    public void setLoginPlatformInfo(int r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.login_platform_id = r1
            r0.login_sdk_third_ver = r2
            r0.login_sdk_plugin_ver = r3
            return
    }

    public void setPayPlatformInfo(int r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.pay_platform_id = r1
            r0.pay_sdk_third_ver = r2
            r0.pay_sdk_plugin_ver = r3
            return
    }

    public void setYmnsdkVer(java.lang.String r1) {
            r0 = this;
            r0.ymnsdk_ver = r1
            return
    }
}
