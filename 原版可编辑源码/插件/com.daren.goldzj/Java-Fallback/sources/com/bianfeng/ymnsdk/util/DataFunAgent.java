package com.bianfeng.ymnsdk.util;

import android.content.Context;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;
import org.json.JSONArray;

@Deprecated
public class DataFunAgent {
    private static String sessionId;

    public DataFunAgent() {
    }

    private static String arrayToMapItem(String[] r3) {
        if (r3 != null) goto L4;
        return null;
    L4:
        if (r3.length == 0) goto L15;
        JSONArray r0 = new JSONArray();
        int r1 = 0;
    L8:
        if (r1 >= r3.length) goto L11;
        r0.put(r3[r1]);
        r1 = r1 + 1;
        goto L8
    L11:
        return r0.toString();
    L15:
        return null;
    }

    private static String getDeviceId(Context r0) {
        return "";
    }

    protected static void init(Context r2) {
        sessionId = UUID.randomUUID().toString();     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
        sessionId = String.valueOf(System.currentTimeMillis());
    }

    protected static void onEvent(String r0, String r1, Map<String, Object> r2) {
    }

    protected static void testCallFunction(String r1) {
        testCallFunction(r1, null);
    }

    protected static void testCallFunction(String r3, String[] r4) {
        HashMap r0 = new HashMap();
        r0.put("sessionId", sessionId);
        r0.put("functionName", r3);
        r0.put("args", arrayToMapItem(r4));
        r0.put("package_id", Integer.valueOf(YmnAppContext.getConfigId()));
    }
}
