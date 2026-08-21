package com.bianfeng.afext;

import com.bianfeng.ymnsdk.gongxiang.b;
import com.bianfeng.ymnsdk.gongxiang.c;
import com.bianfeng.ymnsdk.gongxiang.i;
import com.huawei.hms.framework.common.ContainerUtils;
import java.io.File;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import org.json.JSONObject;

public class Afexter {
    public static void write(String apkFile, String channel, String urlData) throws Exception {
        Map<String, String> extraInfo = new HashMap<>();
        String[] args = urlData.split("&");
        for (String str : args) {
            String[] kv = str.split(ContainerUtils.KEY_VALUE_DELIMITER);
            extraInfo.put(kv[0], kv[1]);
        }
        write(apkFile, channel, extraInfo);
    }

    public static void write(String apkFile, String channel, JSONObject json) throws Exception {
        Map<String, String> extraInfo = new HashMap<>();
        Set<String> keys = json.keySet();
        for (String key : keys) {
            extraInfo.put(key, json.optString(key));
        }
        write(apkFile, channel, extraInfo);
    }

    public static void write(String apkFile, String channel, Map<String, String> extraInfo) throws Exception {
        i.a(new File(apkFile), channel, extraInfo);
    }

    public static b read(String apkFile) {
        return c.a(new File(apkFile));
    }

    public static String readChannel(String apkFile) {
        b info = read(apkFile);
        if (info != null) {
            return info.a();
        }
        return null;
    }

    public static Map<String, String> readExtraInfo(String apkFile) {
        b info = read(apkFile);
        if (info != null) {
            return info.b();
        }
        return null;
    }
}
