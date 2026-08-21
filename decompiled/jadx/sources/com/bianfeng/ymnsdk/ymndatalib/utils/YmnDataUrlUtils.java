package com.bianfeng.ymnsdk.ymndatalib.utils;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
public class YmnDataUrlUtils {
    public static volatile boolean checkDebugUrl;
    public static volatile YmnDataUrlUtils urlUtils;
    public String debug_url;
    public String post_url;
    public String ymndata_post_url = "https://sluice.imeete.com/api/data/receiver";
    public String ymndata_white_list_url = "https://sdk-config.imeete.net/sluice/whitelist";
    public String test_ymndata_post = "ymndata_post_url";
    public String test_ymndata_white_list = "ymndata_white_list_url";

    public static YmnDataUrlUtils getInstance() {
        if (urlUtils == null) {
            synchronized (YmnDataUrlUtils.class) {
                if (urlUtils == null) {
                    urlUtils = new YmnDataUrlUtils();
                }
            }
        }
        return urlUtils;
    }

    private boolean hasDebug(String str) {
        String debugUrl = UtilsSdk.getDebugUrl(str);
        if (TextUtils.isEmpty(debugUrl)) {
            return false;
        }
        this.debug_url = debugUrl;
        return true;
    }

    public String getYmndataPostUrl() {
        if (!hasDebug(this.test_ymndata_post)) {
            return this.ymndata_post_url;
        }
        YmnDatalibLogger.i("测试：" + this.debug_url);
        return this.debug_url + "/api/data/receiver";
    }

    public String get_ymndata_white_list() {
        return hasDebug(this.test_ymndata_white_list) ? this.debug_url : this.ymndata_white_list_url;
    }

    public void setYmndataPostUrl(String str) {
        this.ymndata_post_url = str;
    }

    public void set_ymndata_white_list(String str) {
        this.ymndata_white_list_url = str;
    }
}
