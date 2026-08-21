package com.bianfeng.ymnsdk.util;

import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.heytap.mcssdk.constant.b;
import com.tencent.mm.opensdk.constants.ConstantsAPI;
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

    public static String getTransactionId() {
        if (TextUtils.isEmpty(transactionId)) {
            transactionId = "";
        }
        return transactionId;
    }

    public static void init(Context context) {
        DataFunAgent.init(context);
    }

    public static void loginThirdEvent(YmnPluginWrapper wrapper) {
    }

    public static void loginThirdResEvent(YmnPluginWrapper wrapper, int code, String msg) {
        Map<String, Object> customs = new HashMap<>();
        customs.put(ConstantsAPI.Token.WX_TOKEN_PLATFORMID_KEY, wrapper.getPluginId());
        customs.put(b.C, wrapper.getSdkVersion());
        customs.put(KEY_TRANSACTIONID, transactionId);
        if (code == 102) {
            datafunOnEvent("1010101", "2", customs, msg);
        } else if (code == 105) {
            datafunOnEvent("1010101", "3", customs, msg);
        } else if (code == 106) {
            datafunOnEvent("1010101", "4", customs, msg);
        }
    }

    public static void loginServerResEvent(YmnPluginWrapper wrapper, int code, String msg, String loginTransactionId) {
        Map<String, Object> customs = new HashMap<>();
        customs.put(ConstantsAPI.Token.WX_TOKEN_PLATFORMID_KEY, wrapper.getPluginId());
        customs.put(b.C, wrapper.getSdkVersion());
        customs.put(KEY_TRANSACTIONID, loginTransactionId);
        if (code == -1) {
            datafunOnEvent("1010103", "2", customs, msg);
        } else if (code == 1) {
            datafunOnEvent("1010103", "1", customs, msg);
        }
    }

    public static void payServerEvent(YmnPluginWrapper wrapper) {
    }

    public static void payServerResEvent(YmnPluginWrapper wrapper, int code, String msg, String paymentTransactionId) {
        Map<String, Object> customs = new HashMap<>();
        customs.put(ConstantsAPI.Token.WX_TOKEN_PLATFORMID_KEY, wrapper.getPluginId());
        customs.put(b.C, wrapper.getSdkVersion());
        transactionId = paymentTransactionId;
        customs.put(KEY_TRANSACTIONID, paymentTransactionId);
        if (code == -1) {
            datafunOnEvent("1010203", "2", customs, msg);
        } else if (code == 1) {
            datafunOnEvent("1010203", "1", customs, msg);
        }
    }

    public static void payThirdResEvent(YmnPluginWrapper wrapper, int code, String msg) {
        Map<String, Object> customs = new HashMap<>();
        customs.put(ConstantsAPI.Token.WX_TOKEN_PLATFORMID_KEY, wrapper.getPluginId());
        customs.put(b.C, wrapper.getSdkVersion());
        customs.put(KEY_TRANSACTIONID, transactionId);
        switch (code) {
            case 200:
                datafunOnEvent("1010204", "2", customs, msg);
                break;
            case 201:
                datafunOnEvent("1010204", "3", customs, msg);
                break;
            case 202:
                datafunOnEvent("1010204", "4", customs, msg);
                break;
        }
    }

    public static void datafunOnEvent(String eventId, String ext, Map<String, Object> map) {
        datafunOnEvent(eventId, ext, map, null);
    }

    public static void datafunOnEvent(String eventId, String ext, Map<String, Object> map, String msg) {
        Map<String, Object> dfMap = new HashMap<>(map);
        dfMap.putAll(jsonStringToMap(msg));
        DataFunAgent.onEvent(eventId, ext, dfMap);
    }

    public static Map<String, Object> jsonStringToMap(String jsonStr) {
        Map<String, Object> valueMap = new HashMap<>();
        if (TextUtils.isEmpty(jsonStr)) {
            Logger.i("AnalyticsData", "onCallback msg is null");
            return valueMap;
        }
        try {
            JSONObject jsonObject = new JSONObject(jsonStr);
            Iterator<String> keyIter = jsonObject.keys();
            while (keyIter.hasNext()) {
                String key = keyIter.next();
                valueMap.put(key, jsonObject.get(key));
            }
            return valueMap;
        } catch (Exception e) {
            valueMap.put("msg", jsonStr);
            return valueMap;
        }
    }

    public static void addBlackFunction(String functionName) {
        blackFunctions.add(functionName);
    }

    public static void callFunctionEvent(String functionName) {
        if (!blackFunctions.contains(functionName)) {
            DataFunAgent.testCallFunction(functionName);
        }
    }

    public static void callFunctionEvent(String functionName, String[] args) {
        if (!blackFunctions.contains(functionName)) {
            DataFunAgent.testCallFunction(functionName, args);
        }
    }
}
