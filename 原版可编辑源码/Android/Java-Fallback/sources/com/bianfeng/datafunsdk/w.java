package com.bianfeng.datafunsdk;

public class w {
    public static <T> T a(java.lang.String r1, java.lang.Class<T> r2) throws com.bianfeng.datafunsdk.n {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L9
            java.lang.Object r1 = r0.fromJson(r1, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L9
            return r1
        L9:
            r1 = move-exception
            com.bianfeng.datafunsdk.n r1 = new com.bianfeng.datafunsdk.n
            r1.<init>()
            throw r1
    }

    public static java.lang.String a(java.lang.Object r1) {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()
            java.lang.String r1 = r0.toJson(r1)
            return r1
    }

    public static <T> java.util.Map<java.lang.String, T> a(java.lang.String r1) {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L9
            java.util.Map r1 = r0.getMapFrom(r1)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = move-exception
            r1.printStackTrace()
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            return r1
    }
}
