package com.bianfeng.ymnsdk;

import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.LinkedHashMap;

public class YmnStrategy {
    public static final int STRATEGY_INNER_PROGRESS = 1;
    public static final int STRATEGY_INNER_TOAST_WARN = 2;
    public static final int STRATEGY_NONE = 0;
    private static int flags = 3;

    public static void addStrategy(int i) {
        flags |= i;
        Logger.d("add addStrategy " + i);
    }

    protected static LinkedHashMap<String, String> arrayParamersAsMap(String... strArr) {
        try {
            return YmnGsonUtil.getLinkedHashMapFromStr(strArr[0]);
        } catch (Exception e) {
            e.printStackTrace();
            return new LinkedHashMap<>();
        }
    }

    protected static boolean isJsonParamers(String... strArr) {
        if (strArr == null || strArr.length != 1) {
            return false;
        }
        return YmnGsonUtil.isJsonObject(strArr[0]);
    }

    public static void setStrategys(int i) {
        flags = i;
    }

    public static boolean withStrategy(int i) {
        return (flags & i) == i;
    }
}
