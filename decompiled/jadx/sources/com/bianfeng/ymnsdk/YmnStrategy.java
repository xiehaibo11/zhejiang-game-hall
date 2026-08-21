package com.bianfeng.ymnsdk;

import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.LinkedHashMap;

/* JADX INFO: loaded from: classes.dex */
public class YmnStrategy {
    public static final int STRATEGY_INNER_PROGRESS = 1;
    public static final int STRATEGY_INNER_TOAST_WARN = 2;
    public static final int STRATEGY_NONE = 0;
    private static int flags = 3;

    public static void setStrategys(int strategys) {
        flags = strategys;
    }

    public static void addStrategy(int strategy) {
        flags |= strategy;
        Logger.d("add addStrategy " + strategy);
    }

    public static boolean withStrategy(int strategy) {
        return (flags & strategy) == strategy;
    }

    protected static LinkedHashMap<String, String> arrayParamersAsMap(String... args) {
        try {
            return YmnGsonUtil.getLinkedHashMapFromStr(args[0]);
        } catch (Exception e) {
            e.printStackTrace();
            return new LinkedHashMap<>();
        }
    }

    protected static boolean isJsonParamers(String... args) {
        if (args == null || args.length != 1) {
            return false;
        }
        return YmnGsonUtil.isJsonObject(args[0]);
    }
}
