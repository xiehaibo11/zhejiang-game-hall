package com.bianfeng.ymnsdk.utilslib.cache;

import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import java.io.File;
import java.io.FileInputStream;
import java.util.HashMap;
import java.util.Map;
import java.util.Properties;

public class YmnDeubgUrlUtils {
    private static volatile YmnDeubgUrlUtils urlUtils;
    private Map<String, String> urlMap;

    private YmnDeubgUrlUtils() {
        this.urlMap = new HashMap();
    }

    public static YmnDeubgUrlUtils getInstance() {
        if (urlUtils != null) goto L15;
        monitor-enter(YmnDeubgUrlUtils.class);
    L11:
        th = move-exception;
        throw th;
    L7:
        if (urlUtils != null) goto L9;
        urlUtils = new YmnDeubgUrlUtils();     // Catch: Throwable -> L11
    L9:
        monitor-exit(YmnDeubgUrlUtils.class);     // Catch: Throwable -> L11
    L15:
        return urlUtils;
    }

    public String getDebugUrl() {
        File r1 = new File(SDCardHelper.getSDCardBaseDir() + File.separator + ".bftj/sdk/ymnDebug");     // Catch: Exception -> L8
        if (r1.exists() == true) goto L6;
        return "";
    L6:
        Properties r2 = new Properties();     // Catch: Exception -> L8
        r2.load(new FileInputStream(r1));     // Catch: Exception -> L8
        return r2.getProperty("url_host_ymnsdk");
    L8:
        e = move-exception;
        e.printStackTrace();
        return "";
    }

    public void initDebugUrl() {
        String r0 = getDebugUrl();
        if (TextUtils.isEmpty(r0) == false) goto L13;
        return;
    L13:
    L10:
        e = move-exception;
        e.printStackTrace();
        Log.i("ymnsdk", "测试路径格式配置错误");
        return;
    L6:
        if (UtilsSdk.getGsonUtils().isJsonObject(r0) == true) goto L8;
        return;
    L8:
        Object r02 = UtilsSdk.getGsonUtils().getMapFrom(r0).get("data");     // Catch: Exception -> L10
        this.urlMap = UtilsSdk.getGsonUtils().getMapFrom(r02);     // Catch: Exception -> L10
    }

    public String getDebugUrl(String r2) {
        return this.urlMap.get(r2);
    L4:
        return null;
    }
}
