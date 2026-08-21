package com.bianfeng.ymnsdk.ymndatalib.utils;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import com.bianfeng.ymnsdk.utilslib.security.Md5Utils;
import com.huawei.hms.framework.common.ContainerUtils;
import java.util.Map;
import java.util.TreeMap;

/* JADX INFO: loaded from: classes.dex */
public class LoginSignUtils {
    public static String intData = "app_id,event,identify_id,platform_id,rst_code,rst_cost,app_memory,app_use_memory,cli_available_ram_memory,sub_rst_code,cli_available_rom_memory,cli_total_rom_memory,cli_total_ram_memory";
    public static String longData = "event_sequence";
    public static String privateKey = "0a1b70067129eb9835b27b79d026b95c";

    public static String sign(Object obj) {
        TreeMap<String, Object> treeMap = toTreeMap(obj);
        StringBuffer stringBuffer = new StringBuffer();
        for (Map.Entry<String, Object> entry : treeMap.entrySet()) {
            String string = entry.getValue().toString();
            String key = entry.getKey();
            if (!TextUtils.isEmpty(string)) {
                if (intData.contains(key)) {
                    string = ((int) Double.parseDouble(string)) + "";
                }
                if (longData.contains(key)) {
                    string = ((long) Double.parseDouble(string)) + "";
                }
                stringBuffer.append(entry.getKey());
                stringBuffer.append(ContainerUtils.KEY_VALUE_DELIMITER);
                stringBuffer.append(string);
                stringBuffer.append("&");
            }
        }
        stringBuffer.append(privateKey);
        return Md5Utils.md5(stringBuffer.toString());
    }

    public static TreeMap<String, Object> toTreeMap(Object obj) {
        try {
            return (TreeMap) UtilsSdk.getGsonUtils().fromJson(UtilsSdk.getGsonUtils().toJson(obj), TreeMap.class);
        } catch (Exception e) {
            YmnDatalibLogger.i("toTreeMap:" + e.getMessage());
            return new TreeMap<>();
        }
    }

    public static String sign(String str) {
        return Md5Utils.md5(str);
    }
}
