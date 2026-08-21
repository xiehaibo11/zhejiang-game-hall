package com.bianfeng.ymnsdk.util;

import android.content.Context;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import com.bianfeng.platform.PaymentWrapper;
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
    private static Set<String> blackFunctions = new HashSet();
    private static String transactionId;

    public static void addBlackFunction(String str) {
        blackFunctions.add(str);
    }

    public static void callFunctionEvent(String str) {
        if (blackFunctions.contains(str)) {
            return;
        }
        DataFunAgent.testCallFunction(str);
    }

    public static void datafunOnEvent(String str, String str2, Map<String, Object> map) {
        datafunOnEvent(str, str2, map, null);
    }

    public static String getTransactionId() {
        if (TextUtils.isEmpty(transactionId)) {
            transactionId = "";
        }
        return transactionId;
    }

    public static void init(Context context) {
        DataFunAgent.init(context);
    }

    public static Map<String, Object> jsonStringToMap(String str) {
        HashMap map = new HashMap();
        if (TextUtils.isEmpty(str)) {
            Logger.i("AnalyticsData", "onCallback msg is null");
            return map;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                map.put(next, jSONObject.get(next));
            }
            return map;
        } catch (Exception unused) {
            map.put(NotificationCompat.CATEGORY_MESSAGE, str);
            return map;
        }
    }

    public static void loginServerResEvent(YmnPluginWrapper ymnPluginWrapper, int i, String str, String str2) {
        HashMap map = new HashMap();
        map.put("platformId", ymnPluginWrapper.getPluginId());
        map.put("sdkVersion", ymnPluginWrapper.getSdkVersion());
        map.put(KEY_TRANSACTIONID, str2);
        if (i == -1) {
            datafunOnEvent("1010103", "2", map, str);
        } else {
            if (i != 1) {
                return;
            }
            datafunOnEvent("1010103", "1", map, str);
        }
    }

    public static void loginThirdEvent(YmnPluginWrapper ymnPluginWrapper) {
    }

    public static void loginThirdResEvent(YmnPluginWrapper ymnPluginWrapper, int i, String str) {
        HashMap map = new HashMap();
        map.put("platformId", ymnPluginWrapper.getPluginId());
        map.put("sdkVersion", ymnPluginWrapper.getSdkVersion());
        map.put(KEY_TRANSACTIONID, transactionId);
        if (i == 102) {
            datafunOnEvent("1010101", "2", map, str);
        } else if (i == 105) {
            datafunOnEvent("1010101", "3", map, str);
        } else {
            if (i != 106) {
                return;
            }
            datafunOnEvent("1010101", "4", map, str);
        }
    }

    public static void payServerEvent(YmnPluginWrapper ymnPluginWrapper) {
    }

    public static void payServerResEvent(YmnPluginWrapper ymnPluginWrapper, int i, String str, String str2) {
        HashMap map = new HashMap();
        map.put("platformId", ymnPluginWrapper.getPluginId());
        map.put("sdkVersion", ymnPluginWrapper.getSdkVersion());
        transactionId = str2;
        map.put(KEY_TRANSACTIONID, str2);
        if (i == -1) {
            datafunOnEvent("1010203", "2", map, str);
        } else {
            if (i != 1) {
                return;
            }
            datafunOnEvent("1010203", "1", map, str);
        }
    }

    public static void payThirdResEvent(YmnPluginWrapper ymnPluginWrapper, int i, String str) {
        HashMap map = new HashMap();
        map.put("platformId", ymnPluginWrapper.getPluginId());
        map.put("sdkVersion", ymnPluginWrapper.getSdkVersion());
        map.put(KEY_TRANSACTIONID, transactionId);
        switch (i) {
            case PaymentWrapper.PAYRESULT_SUCCESS:
                datafunOnEvent("1010204", "2", map, str);
                break;
            case PaymentWrapper.PAYRESULT_FAIL:
                datafunOnEvent("1010204", "3", map, str);
                break;
            case PaymentWrapper.PAYRESULT_CANCEL:
                datafunOnEvent("1010204", "4", map, str);
                break;
        }
    }

    public static void datafunOnEvent(String str, String str2, Map<String, Object> map, String str3) {
        HashMap map2 = new HashMap(map);
        map2.putAll(jsonStringToMap(str3));
        DataFunAgent.onEvent(str, str2, map2);
    }

    public static void callFunctionEvent(String str, String[] strArr) {
        if (blackFunctions.contains(str)) {
            return;
        }
        DataFunAgent.testCallFunction(str, strArr);
    }
}
