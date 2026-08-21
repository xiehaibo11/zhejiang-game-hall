package com.bianfeng.seppellita.bean;

import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.seppellita.utils.KeySecurityUtils;
import com.bianfeng.seppellita.utils.SeppellitaSharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.appinfo.AppContext;

public class AppInfoBean {
    private final String DEF_APIHUB_KEY;
    private final String SEPPELLITA_APIHUB_KEY;
    private final String SEPPELLITA_SITE;
    private String apihub_key;
    private String apihub_secret;
    private String app_build;
    private String app_channel;
    private String app_id;
    private String app_is_new_device;
    private String app_name;
    private String app_package;
    private String app_version;
    private String encrypt_key;
    private String site;

    public AppInfoBean(Context context) {
        this.SEPPELLITA_APIHUB_KEY = "SEPPELLITA_APIHUB_KEY";
        this.SEPPELLITA_SITE = "sl_site";
        this.DEF_APIHUB_KEY = "Seppellita";
        this.app_id = AppContext.getInstance().getAppId() + "";
        this.app_package = AppContext.getInstance().getPkgName();
        this.app_build = AppContext.getInstance().getVerCode();
        this.app_version = AppContext.getInstance().getVerName();
        this.app_name = AppContext.getInstance().getAppName();
        this.app_channel = AppContext.getInstance().getChannelId();
        init();
    }

    public AppInfoBean(Context context, boolean z) {
        this.SEPPELLITA_APIHUB_KEY = "SEPPELLITA_APIHUB_KEY";
        this.SEPPELLITA_SITE = "sl_site";
        this.DEF_APIHUB_KEY = "Seppellita";
        if (z) {
            this.app_id = AppContext.getInstance().getAppId() + "";
            this.app_package = AppContext.getInstance().getPkgName();
            this.app_build = AppContext.getInstance().getVerCode();
            this.app_version = AppContext.getInstance().getVerName();
            this.app_name = AppContext.getInstance().getAppName();
            this.app_channel = AppContext.getInstance().getChannelId();
        }
        init();
    }

    private void init() {
        this.app_is_new_device = SeppellitaSharedPreferencesUtils.getIsNew() ? "1" : "0";
        try {
            this.apihub_key = AppContext.getInstance().getMetaDataValueString("SEPPELLITA_APIHUB_KEY");
            if (AppContext.getInstance().getMetaDataValueString("sl_site") == null) {
                this.site = "S011";
            }
        } catch (Exception e) {
            e.printStackTrace();
            this.site = "";
            this.apihub_key = "Seppellita";
        }
        if (TextUtils.isEmpty(this.apihub_key)) {
            this.apihub_key = "Seppellita";
        }
        String apihubSecret = KeySecurityUtils.getApihubSecret(this.apihub_key);
        this.apihub_secret = apihubSecret;
        this.encrypt_key = KeySecurityUtils.getEncryptKey(apihubSecret);
    }

    public String getApp_id() {
        return this.app_id;
    }

    public String getApp_name() {
        return this.app_name;
    }

    public String getApp_package() {
        return this.app_package;
    }

    public String getApp_build() {
        return this.app_build;
    }

    public String getApp_version() {
        return this.app_version;
    }

    public String getApp_channel() {
        return TextUtils.isEmpty(this.app_channel) ? "0" : this.app_channel;
    }

    public String getIs_New_Device() {
        return this.app_is_new_device;
    }

    public String getApihub_key() {
        return this.apihub_key;
    }

    public String getSite() {
        return this.site;
    }

    public String getApihub_secret() {
        return this.apihub_secret;
    }

    public String getEncrypt_key() {
        return this.encrypt_key;
    }
}
