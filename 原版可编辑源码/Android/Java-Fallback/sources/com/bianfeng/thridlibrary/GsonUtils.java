package com.bianfeng.thridlibrary;

public class GsonUtils {
    private static volatile com.bianfeng.thridlibrary.GsonUtils utils;
    private com.google.gson.Gson gson;




    private GsonUtils() {
            r1 = this;
            r1.<init>()
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            r1.gson = r0
            return
    }

    public static com.bianfeng.thridlibrary.GsonUtils getInstance() {
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.GsonUtils.utils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.thridlibrary.GsonUtils> r0 = com.bianfeng.thridlibrary.GsonUtils.class
            monitor-enter(r0)
            com.bianfeng.thridlibrary.GsonUtils r1 = com.bianfeng.thridlibrary.GsonUtils.utils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.thridlibrary.GsonUtils r1 = new com.bianfeng.thridlibrary.GsonUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.thridlibrary.GsonUtils.utils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.GsonUtils.utils
            return r0
    }

    public <T> T fromJson(java.lang.String r2, java.lang.Class<T> r3) {
            r1 = this;
            com.google.gson.Gson r0 = r1.gson
            java.lang.Object r2 = r0.fromJson(r2, r3)
            return r2
    }

    public java.util.Map<java.lang.String, java.lang.String> fromJson(java.lang.String r3) {
            r2 = this;
            com.google.gson.Gson r0 = r2.gson
            com.bianfeng.thridlibrary.GsonUtils$1 r1 = new com.bianfeng.thridlibrary.GsonUtils$1
            r1.<init>(r2)
            java.lang.reflect.Type r1 = r1.getType()
            java.lang.Object r3 = r0.fromJson(r3, r1)
            java.util.Map r3 = (java.util.Map) r3
            return r3
    }

    public java.util.Map<java.lang.String, java.lang.Object> fromJsonWithObject(java.lang.String r3) {
            r2 = this;
            com.google.gson.Gson r0 = r2.gson
            com.bianfeng.thridlibrary.GsonUtils$2 r1 = new com.bianfeng.thridlibrary.GsonUtils$2
            r1.<init>(r2)
            java.lang.reflect.Type r1 = r1.getType()
            java.lang.Object r3 = r0.fromJson(r3, r1)
            java.util.Map r3 = (java.util.Map) r3
            return r3
    }

    public java.util.Map<java.lang.String, java.lang.String> getFromMap(java.lang.String r3) {
            r2 = this;
            com.google.gson.Gson r0 = r2.gson     // Catch: java.lang.Exception -> L12
            com.bianfeng.thridlibrary.GsonUtils$3 r1 = new com.bianfeng.thridlibrary.GsonUtils$3     // Catch: java.lang.Exception -> L12
            r1.<init>(r2)     // Catch: java.lang.Exception -> L12
            java.lang.reflect.Type r1 = r1.getType()     // Catch: java.lang.Exception -> L12
            java.lang.Object r3 = r0.fromJson(r3, r1)     // Catch: java.lang.Exception -> L12
            java.util.Map r3 = (java.util.Map) r3     // Catch: java.lang.Exception -> L12
            return r3
        L12:
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            return r3
    }

    public java.lang.String toJson(java.lang.Object r2) {
            r1 = this;
            com.google.gson.Gson r0 = r1.gson
            java.lang.String r2 = r0.toJson(r2)
            return r2
    }
}
