package com.bianfeng.ymnsdk.util;

import android.content.Context;
import com.tencent.connect.common.Constants;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;
import org.json.JSONArray;

/* JADX INFO: loaded from: classes.dex */
@Deprecated
public class DataFunAgent {
    private static String sessionId;

    protected static void init(Context context) {
        try {
            sessionId = UUID.randomUUID().toString();
        } catch (Exception e) {
            e.printStackTrace();
            sessionId = String.valueOf(System.currentTimeMillis());
        }
    }

    protected static void onEvent(String eventId, String ext, Map<String, Object> map) {
    }

    private static String getDeviceId(Context context) {
        return "";
    }

    protected static void testCallFunction(String functionName) {
        testCallFunction(functionName, null);
    }

    protected static void testCallFunction(String functionName, String[] args) {
        Map<String, Object> map = new HashMap<>();
        map.put("sessionId", sessionId);
        map.put("functionName", functionName);
        map.put("args", arrayToMapItem(args));
        map.put(Constants.PACKAGE_ID, Integer.valueOf(YmnAppContext.getConfigId()));
    }

    private static String arrayToMapItem(String[] args) {
        if (args == null || args.length == 0) {
            return null;
        }
        JSONArray json = new JSONArray();
        for (String str : args) {
            json.put(str);
        }
        return json.toString();
    }
}
