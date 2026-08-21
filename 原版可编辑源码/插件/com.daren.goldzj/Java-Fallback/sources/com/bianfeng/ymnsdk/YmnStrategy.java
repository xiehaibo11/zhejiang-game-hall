package com.bianfeng.ymnsdk;

import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.LinkedHashMap;

public class YmnStrategy {
    public static final int STRATEGY_INNER_PROGRESS = 1;
    public static final int STRATEGY_INNER_TOAST_WARN = 2;
    public static final int STRATEGY_NONE = 0;
    private static int flags = 3;

    static {
    }

    public YmnStrategy() {
    }

    public static void addStrategy(int r2) {
        flags |= r2;
        Logger.d("add addStrategy " + r2);
    }

    protected static LinkedHashMap<String, String> arrayParamersAsMap(String... r1) {
        return YmnGsonUtil.getLinkedHashMapFromStr(r1[0]);
    L5:
        e = move-exception;
        e.printStackTrace();
        return new LinkedHashMap();
    }

    protected static boolean isJsonParamers(String... r3) {
        if (r3 != null) goto L5;
    L9:
        return false;
    L5:
        if (r3.length != 1) goto L9;
        return YmnGsonUtil.isJsonObject(r3[0]);
    }

    public static void setStrategys(int r0) {
        flags = r0;
    }

    public static boolean withStrategy(int r1) {
        if ((flags & r1) != r1) goto L5;
        return true;
    L5:
        return false;
    }
}
