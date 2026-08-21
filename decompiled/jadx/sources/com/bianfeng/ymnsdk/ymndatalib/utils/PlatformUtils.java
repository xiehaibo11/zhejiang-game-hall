package com.bianfeng.ymnsdk.ymndatalib.utils;

import com.bianfeng.ymnsdk.utilslib.appinfo.AppContext;

/* JADX INFO: loaded from: classes.dex */
public class PlatformUtils {
    public static volatile PlatformUtils utils;
    public int login_platform_id = 0;
    public String login_sdk_third_ver = "";
    public String login_sdk_plugin_ver = "";
    public int pay_platform_id = 0;
    public String pay_sdk_third_ver = "";
    public String pay_sdk_plugin_ver = "";
    public String datafun_ver = "1.1.5";
    public String ymnsdk_ver = "";

    public static PlatformUtils getInstance() {
        if (utils == null) {
            synchronized (PlatformUtils.class) {
                if (utils == null) {
                    utils = new PlatformUtils();
                }
            }
        }
        return utils;
    }

    public String getApk_ver() {
        return "ver_name:" + AppContext.getInstance().getVerName() + "-ver_code:" + AppContext.getInstance().getVerCode();
    }

    public int getApp_id() {
        return AppContext.getInstance().getAppId();
    }

    public String getDatafun_ver() {
        return this.datafun_ver;
    }

    public int getIdentify_id() {
        return AppContext.getInstance().getIdentify_id();
    }

    public String getLogin_Sdk_plugin_ver() {
        return this.login_sdk_plugin_ver;
    }

    public int getLogin_platform_id() {
        return this.login_platform_id;
    }

    public String getLogin_sdk_third_ver() {
        return this.login_sdk_third_ver;
    }

    public String getPay_Sdk_plugin_ver() {
        return this.pay_sdk_plugin_ver;
    }

    public int getPay_platform_id() {
        return this.pay_platform_id;
    }

    public String getPay_sdk_third_ver() {
        return this.pay_sdk_third_ver;
    }

    public String getYmnsdk_ver() {
        return this.ymnsdk_ver;
    }

    public void setLoginPlatformInfo(int i, String str, String str2) {
        this.login_platform_id = i;
        this.login_sdk_third_ver = str;
        this.login_sdk_plugin_ver = str2;
    }

    public void setPayPlatformInfo(int i, String str, String str2) {
        this.pay_platform_id = i;
        this.pay_sdk_third_ver = str;
        this.pay_sdk_plugin_ver = str2;
    }

    public void setYmnsdkVer(String str) {
        this.ymnsdk_ver = str;
    }
}
