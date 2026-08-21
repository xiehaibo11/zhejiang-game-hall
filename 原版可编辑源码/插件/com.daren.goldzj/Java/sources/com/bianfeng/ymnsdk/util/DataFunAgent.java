package com.bianfeng.ymnsdk.util;

import android.content.Context;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;
import org.json.JSONArray;

@Deprecated
public class DataFunAgent {
    private static String sessionId;

    private static String arrayToMapItem(String[] strArr) {
        if (strArr == null || strArr.length == 0) {
            return null;
        }
        JSONArray jSONArray = new JSONArray();
        for (String str : strArr) {
            jSONArray.put(str);
        }
        return jSONArray.toString();
    }

    private static String getDeviceId(Context context) {
        return "";
    }

    protected static void init(Context context) {
        try {
            sessionId = UUID.randomUUID().toString();
        } catch (Exception e) {
            e.printStackTrace();
            sessionId = String.valueOf(System.currentTimeMillis());
        }
    }

    protected static void onEvent(String str, String str2, Map<String, Object> map) {
    }

    protected static void testCallFunction(String str) {
        testCallFunction(str, null);
    }

    protected static void testCallFunction(String str, String[] strArr) {
        HashMap map = new HashMap();
        map.put("sessionId", sessionId);
        map.put("functionName", str);
        map.put("args", arrayToMapItem(strArr));
        map.put("package_id", Integer.valueOf(YmnAppContext.getConfigId()));
    }
}
