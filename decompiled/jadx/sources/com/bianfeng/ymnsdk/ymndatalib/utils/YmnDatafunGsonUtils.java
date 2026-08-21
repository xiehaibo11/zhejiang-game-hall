package com.bianfeng.ymnsdk.ymndatalib.utils;

import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import java.util.TreeMap;

/* JADX INFO: loaded from: classes.dex */
public class YmnDatafunGsonUtils {
    public static TreeMap<String, Object> fromTreeMap(String str) {
        try {
            return (TreeMap) UtilsSdk.getGsonUtils().fromJson(str, TreeMap.class);
        } catch (Exception e) {
            return new TreeMap<>();
        }
    }

    public static String toJson(Object obj) {
        return UtilsSdk.getGsonUtils().toJson(obj);
    }
}
