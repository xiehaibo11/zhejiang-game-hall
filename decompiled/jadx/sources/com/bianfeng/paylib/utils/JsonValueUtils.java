package com.bianfeng.paylib.utils;

import android.text.TextUtils;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.UtilsSdk;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class JsonValueUtils {
    private static String source;

    public static String doubleToString(Object obj) {
        return new Double(String.valueOf(obj)).intValue() + "";
    }

    public static Integer doubleToInt(Object obj) {
        return Integer.valueOf(new Double(String.valueOf(obj)).intValue());
    }

    public static String perProduct(String str, String str2) {
        return ((float) ((Double.parseDouble(str2) / 100.0d) / Double.parseDouble(str))) + "";
    }

    public static int string2Int(String str) {
        try {
            return Integer.parseInt(str);
        } catch (Exception e) {
            UtilsSdk.getLogger().i("JsonValueUtils string2Int" + e.getMessage());
            return Integer.MAX_VALUE;
        }
    }

    public static double string2Double(String str) {
        try {
            return Double.parseDouble(str);
        } catch (Exception e) {
            UtilsSdk.getLogger().i("JsonValueUtils string2Int" + e.getMessage());
            return 2.147483647E9d;
        }
    }

    public static String getSource() {
        if (TextUtils.isEmpty(source)) {
            source = "ymnH5game";
        }
        return source;
    }

    public static String updataExt(String str) {
        HashMap map = new HashMap();
        Map<String, Object> mapFromJsonWithObject = ThridSdk.getGson().fromJsonWithObject(str);
        source = mapFromJsonWithObject.get("source").toString();
        mapFromJsonWithObject.remove("source");
        for (Map.Entry<String, Object> entry : mapFromJsonWithObject.entrySet()) {
            String key = entry.getKey();
            if ("gameid".equals(key)) {
                map.put(key, doubleToInt(entry.getValue()));
            } else {
                map.put(key, entry.getValue());
            }
        }
        return ThridSdk.getGson().toJson(map);
    }
}
