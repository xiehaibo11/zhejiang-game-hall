package com.bianfeng.ymnsdk.utilslib.cache;

import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import java.io.File;
import java.io.FileInputStream;
import java.util.HashMap;
import java.util.Map;
import java.util.Properties;

/* JADX INFO: loaded from: classes.dex */
public class YmnDeubgUrlUtils {
    private static volatile YmnDeubgUrlUtils urlUtils;
    private Map<String, String> urlMap = new HashMap();

    private YmnDeubgUrlUtils() {
    }

    public static YmnDeubgUrlUtils getInstance() {
        if (urlUtils == null) {
            synchronized (YmnDeubgUrlUtils.class) {
                if (urlUtils == null) {
                    urlUtils = new YmnDeubgUrlUtils();
                }
            }
        }
        return urlUtils;
    }

    public String getDebugUrl() {
        try {
            File file = new File(SDCardHelper.getSDCardBaseDir() + File.separator + ".bftj/sdk/ymnDebug");
            if (!file.exists()) {
                return "";
            }
            Properties properties = new Properties();
            properties.load(new FileInputStream(file));
            return properties.getProperty("url_host_ymnsdk");
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public void initDebugUrl() {
        String data = getDebugUrl();
        if (TextUtils.isEmpty(data)) {
            return;
        }
        try {
            if (!UtilsSdk.getGsonUtils().isJsonObject(data)) {
                return;
            }
            Map<String, Object> map = UtilsSdk.getGsonUtils().getMapFrom(data);
            Object urldata = map.get("data");
            this.urlMap = UtilsSdk.getGsonUtils().getMapFrom(urldata);
        } catch (Exception e) {
            e.printStackTrace();
            Log.i("ymnsdk", "测试路径格式配置错误");
        }
    }

    public String getDebugUrl(String key) {
        try {
            return this.urlMap.get(key);
        } catch (Exception e) {
            return null;
        }
    }
}
