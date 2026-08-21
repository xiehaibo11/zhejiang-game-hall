package com.bianfeng.ymnsdk.util.thridsdk;

public class YmnGsonUtil {
    public YmnGsonUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.Object fromJson(java.lang.Object r1) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L9
            java.lang.Object r1 = r0.fromJson(r1)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r0 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r0.<init>(r1)
            throw r0
    }

    public static <T> T fromJson(java.lang.Object r1, java.lang.Class<T> r2) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L9
            java.lang.Object r1 = r0.fromJson(r1, r2)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r2 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r2.<init>(r1)
            throw r2
    }

    public static <T> T fromJson(java.lang.String r1, java.lang.Class<T> r2) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L9
            java.lang.Object r1 = r0.fromJson(r1, r2)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r2 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r2.<init>(r1)
            throw r2
    }

    public static java.util.LinkedHashMap<java.lang.String, java.lang.String> getLinkedHashMapFromStr(java.lang.String r1) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L9
            java.util.LinkedHashMap r1 = r0.getLinkedHashMapFromStr(r1)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r0 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r0.<init>(r1)
            throw r0
    }

    public static <T> java.util.List<T> getListFrom(java.lang.Object r1) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L9
            java.util.List r1 = r0.getListFrom(r1)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r0 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r0.<init>(r1)
            throw r0
    }

    public static <T> java.util.List<T> getListFrom(java.lang.String r1) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L9
            java.util.List r1 = r0.getListFrom(r1)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r0 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r0.<init>(r1)
            throw r0
    }

    public static <T> java.util.Map<java.lang.String, T> getMapFrom(android.content.Context r1, java.lang.String r2) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L9
            java.util.Map r1 = r0.getMapFrom(r1, r2)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r2 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r2.<init>(r1)
            throw r2
    }

    public static <T> java.util.Map<java.lang.String, T> getMapFrom(java.io.Reader r1) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L9
            java.util.Map r1 = r0.getMapFrom(r1)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r0 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r0.<init>(r1)
            throw r0
    }

    public static <T> java.util.Map<java.lang.String, T> getMapFrom(java.lang.Object r1) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L9
            java.util.Map r1 = r0.getMapFrom(r1)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r0 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r0.<init>(r1)
            throw r0
    }

    public static <T> java.util.Map<java.lang.String, T> getMapFrom(java.lang.String r1) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()     // Catch: java.lang.Exception -> L9
            java.util.Map r1 = r0.getMapFrom(r1)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r0 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            r0.<init>(r1)
            throw r0
    }

    public static boolean isJsonArrayObject(java.lang.String r1) {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()
            boolean r1 = r0.isJsonArrayObject(r1)
            return r1
    }

    public static boolean isJsonObject(java.lang.String r1) {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()
            boolean r1 = r0.isJsonObject(r1)
            return r1
    }

    public static java.lang.String toJson(java.lang.Object r1) {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.UtilsSdk.getGsonUtils()
            java.lang.String r1 = r0.toJson(r1)
            return r1
    }
}
