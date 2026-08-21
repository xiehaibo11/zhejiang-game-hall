package com.bianfeng.ymnsdk.util;

import android.content.Context;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import org.json.JSONObject;

@Deprecated
public class AnalyticsData {
    public static final int DATA_CANCEL = -2;
    public static final int DATA_FAIL = -1;
    public static final int DATA_SUCCESS = 1;
    public static final String KEY_TRANSACTIONID = "transactionId";
    private static Set<String> blackFunctions;
    private static String transactionId;

    static {
        blackFunctions = new HashSet();
    }

    public AnalyticsData() {
    }

    public static void addBlackFunction(String r1) {
        blackFunctions.add(r1);
    }

    public static void callFunctionEvent(String r1) {
        if (blackFunctions.contains(r1) == true) goto L6;
        DataFunAgent.testCallFunction(r1);
        return;
    }

    public static void datafunOnEvent(String r1, String r2, Map<String, Object> r3) {
        datafunOnEvent(r1, r2, r3, null);
    }

    public static String getTransactionId() {
        if (TextUtils.isEmpty(transactionId) == false) goto L6;
        transactionId = "";
    L6:
        return transactionId;
    }

    public static void init(Context r0) {
        DataFunAgent.init(r0);
    }

    public static Map<String, Object> jsonStringToMap(String r5) {
        HashMap r0 = new HashMap();
        if (TextUtils.isEmpty(r5) == false) goto L14;
        Logger.i("AnalyticsData", "onCallback msg is null");
        return r0;
    L14:
        JSONObject r1 = new JSONObject(r5);     // Catch: Exception -> L12
        Iterator<String> r2 = r1.keys();     // Catch: Exception -> L12
    L7:
        if (r2.hasNext() == false) goto L11;
        String r3 = r2.next();     // Catch: Exception -> L12
        r0.put(r3, r1.get(r3));     // Catch: Exception -> L12
        goto L7
    L11:
        return r0;
    L12:
        r0.put(NotificationCompat.CATEGORY_MESSAGE, r5);
        return r0;
    }

    public static void loginServerResEvent(YmnPluginWrapper r3, int r4, String r5, String r6) {
        HashMap r0 = new HashMap();
        r0.put("platformId", r3.getPluginId());
        r0.put("sdkVersion", r3.getSdkVersion());
        r0.put(KEY_TRANSACTIONID, r6);
        if (r4 != (-1)) goto L5;
        datafunOnEvent("1010103", "2", r0, r5);
        return;
    L5:
        if (r4 != 1) goto L11;
        datafunOnEvent("1010103", "1", r0, r5);
        return;
    }

    public static void loginThirdEvent(YmnPluginWrapper r0) {
    }

    public static void loginThirdResEvent(YmnPluginWrapper r3, int r4, String r5) {
        HashMap r0 = new HashMap();
        r0.put("platformId", r3.getPluginId());
        r0.put("sdkVersion", r3.getSdkVersion());
        r0.put(KEY_TRANSACTIONID, transactionId);
        if (r4 != 102) goto L5;
        datafunOnEvent("1010101", "2", r0, r5);
        return;
    L5:
        if (r4 != 105) goto L7;
        datafunOnEvent("1010101", "3", r0, r5);
        return;
    L7:
        if (r4 != 106) goto L15;
        datafunOnEvent("1010101", "4", r0, r5);
        return;
    }

    public static void payServerEvent(YmnPluginWrapper r0) {
    }

    public static void payServerResEvent(YmnPluginWrapper r3, int r4, String r5, String r6) {
        HashMap r0 = new HashMap();
        r0.put("platformId", r3.getPluginId());
        r0.put("sdkVersion", r3.getSdkVersion());
        transactionId = r6;
        r0.put(KEY_TRANSACTIONID, r6);
        if (r4 != (-1)) goto L5;
        datafunOnEvent("1010203", "2", r0, r5);
        return;
    L5:
        if (r4 != 1) goto L11;
        datafunOnEvent("1010203", "1", r0, r5);
        return;
    }

    public static void payThirdResEvent(YmnPluginWrapper r3, int r4, String r5) {
        HashMap r0 = new HashMap();
        r0.put("platformId", r3.getPluginId());
        r0.put("sdkVersion", r3.getSdkVersion());
        r0.put(KEY_TRANSACTIONID, transactionId);
        switch(r4) {
            case 200: goto L7;
            case 201: goto L6;
            case 202: goto L5;
            default: goto L11;
        };
    L5:
        datafunOnEvent("1010204", "4", r0, r5);
        return;
    L6:
        datafunOnEvent("1010204", "3", r0, r5);
        return;
    L7:
        datafunOnEvent("1010204", "2", r0, r5);
        return;
    }

    public static void datafunOnEvent(String r1, String r2, Map<String, Object> r3, String r4) {
        HashMap r0 = new HashMap(r3);
        r0.putAll(jsonStringToMap(r4));
        DataFunAgent.onEvent(r1, r2, r0);
    }

    public static void callFunctionEvent(String r1, String[] r2) {
        if (blackFunctions.contains(r1) == true) goto L6;
        DataFunAgent.testCallFunction(r1, r2);
        return;
    }
}
