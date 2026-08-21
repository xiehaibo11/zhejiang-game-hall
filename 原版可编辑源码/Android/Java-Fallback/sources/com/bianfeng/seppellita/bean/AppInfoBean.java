package com.bianfeng.seppellita.bean;

public class AppInfoBean {
    private final java.lang.String DEF_APIHUB_KEY;
    private final java.lang.String SEPPELLITA_APIHUB_KEY;
    private final java.lang.String SEPPELLITA_SITE;
    private java.lang.String apihub_key;
    private java.lang.String apihub_secret;
    private java.lang.String app_build;
    private java.lang.String app_channel;
    private java.lang.String app_id;
    private java.lang.String app_is_new_device;
    private java.lang.String app_name;
    private java.lang.String app_package;
    private java.lang.String app_version;
    private java.lang.String encrypt_key;
    private java.lang.String site;

    public AppInfoBean(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r2 = "SEPPELLITA_APIHUB_KEY"
            r1.SEPPELLITA_APIHUB_KEY = r2
            java.lang.String r2 = "sl_site"
            r1.SEPPELLITA_SITE = r2
            java.lang.String r2 = "Seppellita"
            r1.DEF_APIHUB_KEY = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            int r0 = r0.getAppId()
            r2.append(r0)
            java.lang.String r0 = ""
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r1.app_id = r2
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r2 = r2.getPkgName()
            r1.app_package = r2
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r2 = r2.getVerCode()
            r1.app_build = r2
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r2 = r2.getVerName()
            r1.app_version = r2
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r2 = r2.getAppName()
            r1.app_name = r2
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r2 = r2.getChannelId()
            r1.app_channel = r2
            r1.init()
            return
    }

    public AppInfoBean(android.content.Context r1, boolean r2) {
            r0 = this;
            r0.<init>()
            java.lang.String r1 = "SEPPELLITA_APIHUB_KEY"
            r0.SEPPELLITA_APIHUB_KEY = r1
            java.lang.String r1 = "sl_site"
            r0.SEPPELLITA_SITE = r1
            java.lang.String r1 = "Seppellita"
            r0.DEF_APIHUB_KEY = r1
            if (r2 == 0) goto L5e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            int r2 = r2.getAppId()
            r1.append(r2)
            java.lang.String r2 = ""
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.app_id = r1
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r1 = r1.getPkgName()
            r0.app_package = r1
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r1 = r1.getVerCode()
            r0.app_build = r1
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r1 = r1.getVerName()
            r0.app_version = r1
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r1 = r1.getAppName()
            r0.app_name = r1
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r1 = r1.getChannelId()
            r0.app_channel = r1
        L5e:
            r0.init()
            return
    }

    private void init() {
            r3 = this;
            java.lang.String r0 = "Seppellita"
            boolean r1 = com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils.getIsNew()
            if (r1 == 0) goto Lb
            java.lang.String r1 = "1"
            goto Ld
        Lb:
            java.lang.String r1 = "0"
        Ld:
            r3.app_is_new_device = r1
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L2c
            java.lang.String r2 = "SEPPELLITA_APIHUB_KEY"
            java.lang.String r1 = r1.getMetaDataValueString(r2)     // Catch: java.lang.Exception -> L2c
            r3.apihub_key = r1     // Catch: java.lang.Exception -> L2c
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r1 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()     // Catch: java.lang.Exception -> L2c
            java.lang.String r2 = "sl_site"
            java.lang.String r1 = r1.getMetaDataValueString(r2)     // Catch: java.lang.Exception -> L2c
            if (r1 != 0) goto L36
            java.lang.String r1 = "S011"
            r3.site = r1     // Catch: java.lang.Exception -> L2c
            goto L36
        L2c:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.String r1 = ""
            r3.site = r1
            r3.apihub_key = r0
        L36:
            java.lang.String r1 = r3.apihub_key
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L40
            r3.apihub_key = r0
        L40:
            java.lang.String r0 = r3.apihub_key
            java.lang.String r0 = com.bianfeng.seppellita.utils.KeySecurityUtils.getApihubSecret(r0)
            r3.apihub_secret = r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.KeySecurityUtils.getEncryptKey(r0)
            r3.encrypt_key = r0
            return
    }

    public java.lang.String getApihub_key() {
            r1 = this;
            java.lang.String r0 = r1.apihub_key
            return r0
    }

    public java.lang.String getApihub_secret() {
            r1 = this;
            java.lang.String r0 = r1.apihub_secret
            return r0
    }

    public java.lang.String getApp_build() {
            r1 = this;
            java.lang.String r0 = r1.app_build
            return r0
    }

    public java.lang.String getApp_channel() {
            r1 = this;
            java.lang.String r0 = r1.app_channel
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = "0"
            goto Ld
        Lb:
            java.lang.String r0 = r1.app_channel
        Ld:
            return r0
    }

    public java.lang.String getApp_id() {
            r1 = this;
            java.lang.String r0 = r1.app_id
            return r0
    }

    public java.lang.String getApp_name() {
            r1 = this;
            java.lang.String r0 = r1.app_name
            return r0
    }

    public java.lang.String getApp_package() {
            r1 = this;
            java.lang.String r0 = r1.app_package
            return r0
    }

    public java.lang.String getApp_version() {
            r1 = this;
            java.lang.String r0 = r1.app_version
            return r0
    }

    public java.lang.String getEncrypt_key() {
            r1 = this;
            java.lang.String r0 = r1.encrypt_key
            return r0
    }

    public java.lang.String getIs_New_Device() {
            r1 = this;
            java.lang.String r0 = r1.app_is_new_device
            return r0
    }

    public java.lang.String getSite() {
            r1 = this;
            java.lang.String r0 = r1.site
            return r0
    }
}
