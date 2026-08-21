package com.bianfeng.seppellita.utils;

public class SeppellitaGsonUtils {
    public SeppellitaGsonUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T> T fromJson(java.lang.String r1, java.lang.Class<T> r2) throws com.bianfeng.seppellita.exception.SeppellitaException {
            com.google.gson.Gson r0 = new com.google.gson.Gson     // Catch: java.lang.Exception -> La
            r0.<init>()     // Catch: java.lang.Exception -> La
            java.lang.Object r1 = r0.fromJson(r1, r2)     // Catch: java.lang.Exception -> La
            return r1
        La:
            r1 = move-exception
            com.bianfeng.seppellita.exception.SeppellitaException r2 = new com.bianfeng.seppellita.exception.SeppellitaException
            r2.<init>(r1)
            throw r2
    }

    public static java.util.List<java.lang.String> getList(java.lang.String r1) throws com.bianfeng.seppellita.exception.SeppellitaException {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()     // Catch: java.lang.Exception -> L9
            java.util.List r1 = r0.getListFrom(r1)     // Catch: java.lang.Exception -> L9
            return r1
        L9:
            r1 = move-exception
            com.bianfeng.seppellita.exception.SeppellitaException r0 = new com.bianfeng.seppellita.exception.SeppellitaException
            r0.<init>(r1)
            throw r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> getMap(java.lang.String r2) throws com.bianfeng.seppellita.exception.SeppellitaException {
            com.google.gson.Gson r0 = new com.google.gson.Gson     // Catch: java.lang.Exception -> Le
            r0.<init>()     // Catch: java.lang.Exception -> Le
            java.lang.Class<java.util.Map> r1 = java.util.Map.class
            java.lang.Object r2 = r0.fromJson(r2, r1)     // Catch: java.lang.Exception -> Le
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Exception -> Le
            return r2
        Le:
            r2 = move-exception
            com.bianfeng.seppellita.exception.SeppellitaException r0 = new com.bianfeng.seppellita.exception.SeppellitaException
            r0.<init>(r2)
            throw r0
    }

    public static java.lang.String toJson(java.lang.Object r1) {
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            java.lang.String r1 = r0.toJson(r1)
            return r1
    }
}
