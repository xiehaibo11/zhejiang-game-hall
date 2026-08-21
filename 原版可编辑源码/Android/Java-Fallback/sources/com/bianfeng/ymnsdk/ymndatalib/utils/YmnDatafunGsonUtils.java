package com.bianfeng.ymnsdk.ymndatalib.utils;

public class YmnDatafunGsonUtils {
    public YmnDatafunGsonUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.TreeMap<java.lang.String, java.lang.Object> fromTreeMap(java.lang.String r2) {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> Ld
            java.lang.Class<java.util.TreeMap> r1 = java.util.TreeMap.class
            java.lang.Object r2 = r0.fromJson(r2, r1)     // Catch: java.lang.Exception -> Ld
            java.util.TreeMap r2 = (java.util.TreeMap) r2     // Catch: java.lang.Exception -> Ld
            return r2
        Ld:
            r2 = move-exception
            java.util.TreeMap r2 = new java.util.TreeMap
            r2.<init>()
            return r2
    }

    public static java.lang.String toJson(java.lang.Object r1) {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()
            java.lang.String r1 = r0.toJson(r1)
            return r1
    }
}
