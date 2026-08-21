package com.bianfeng.ymnsdk.utilslib.gson;

public class GsonUtils {
    private static com.bianfeng.ymnsdk.utilslib.gson.GsonUtils utils;
    private java.lang.String TAG;
    private com.google.gson.Gson gson;








    private GsonUtils() {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.bianfeng.ymnsdk.utilslib.gson.GsonUtils> r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.class
            java.lang.String r0 = r0.getSimpleName()
            r1.TAG = r0
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            r1.gson = r0
            return
    }

    public static com.bianfeng.ymnsdk.utilslib.gson.GsonUtils getInstance() {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.utils
            if (r0 != 0) goto L13
            java.lang.Class<com.bianfeng.ymnsdk.utilslib.gson.GsonUtils> r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils     // Catch: java.lang.Throwable -> L10
            r1.<init>()     // Catch: java.lang.Throwable -> L10
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.utils = r1     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            goto L13
        L10:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r1
        L13:
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.utils
            return r0
    }

    public java.lang.Object fromJson(java.lang.Object r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.TAG
            r0.append(r1)
            java.lang.String r1 = " fromJson Object"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r3.gson     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = r3.toJson(r4)     // Catch: java.lang.Exception -> L23
            java.lang.Class<java.lang.Object> r2 = java.lang.Object.class
            java.lang.Object r0 = r0.fromJson(r1, r2)     // Catch: java.lang.Exception -> L23
            return r0
        L23:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r2 = r3.TAG
            r1.<init>(r2, r0)
            throw r1
    }

    public <T> T fromJson(java.lang.Object r4, java.lang.Class<T> r5) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.TAG
            r0.append(r1)
            java.lang.String r1 = " fromJson Object Class"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r3.gson     // Catch: java.lang.Exception -> L21
            java.lang.String r1 = r3.toJson(r4)     // Catch: java.lang.Exception -> L21
            java.lang.Object r0 = r0.fromJson(r1, r5)     // Catch: java.lang.Exception -> L21
            return r0
        L21:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r2 = r3.TAG
            r1.<init>(r2, r0)
            throw r1
    }

    public <T> T fromJson(java.lang.Object r7, java.lang.Object r8) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r6.TAG
            r0.append(r1)
            java.lang.String r1 = " fromJson Object"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            java.lang.Class r0 = r8.getClass()     // Catch: java.lang.Exception -> L34
            java.lang.reflect.Type[] r0 = r0.getGenericInterfaces()     // Catch: java.lang.Exception -> L34
            r1 = 0
            r2 = r0[r1]     // Catch: java.lang.Exception -> L34
            java.lang.reflect.ParameterizedType r2 = (java.lang.reflect.ParameterizedType) r2     // Catch: java.lang.Exception -> L34
            java.lang.reflect.Type[] r3 = r2.getActualTypeArguments()     // Catch: java.lang.Exception -> L34
            com.google.gson.Gson r4 = r6.gson     // Catch: java.lang.Exception -> L34
            java.lang.String r5 = r6.toJson(r7)     // Catch: java.lang.Exception -> L34
            r1 = r3[r1]     // Catch: java.lang.Exception -> L34
            java.lang.Object r1 = r4.fromJson(r5, r1)     // Catch: java.lang.Exception -> L34
            return r1
        L34:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r2 = r6.TAG
            r1.<init>(r2, r0)
            throw r1
    }

    public <T> T fromJson(java.lang.String r4, java.lang.Class<T> r5) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.TAG
            r0.append(r1)
            java.lang.String r1 = " fromJson String Class"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r3.gson     // Catch: java.lang.Exception -> L1d
            java.lang.Object r0 = r0.fromJson(r4, r5)     // Catch: java.lang.Exception -> L1d
            return r0
        L1d:
            r0 = move-exception
            r0.printStackTrace()
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r2 = r3.TAG
            r1.<init>(r2, r0)
            throw r1
    }

    public <T> T fromJson(java.lang.String r6, java.lang.Object r7) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r5.TAG
            r0.append(r1)
            java.lang.String r1 = " fromJson Object"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            java.lang.Class r0 = r7.getClass()     // Catch: java.lang.Exception -> L30
            java.lang.reflect.Type[] r0 = r0.getGenericInterfaces()     // Catch: java.lang.Exception -> L30
            r1 = 0
            r2 = r0[r1]     // Catch: java.lang.Exception -> L30
            java.lang.reflect.ParameterizedType r2 = (java.lang.reflect.ParameterizedType) r2     // Catch: java.lang.Exception -> L30
            java.lang.reflect.Type[] r3 = r2.getActualTypeArguments()     // Catch: java.lang.Exception -> L30
            com.google.gson.Gson r4 = r5.gson     // Catch: java.lang.Exception -> L30
            r1 = r3[r1]     // Catch: java.lang.Exception -> L30
            java.lang.Object r1 = r4.fromJson(r6, r1)     // Catch: java.lang.Exception -> L30
            return r1
        L30:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r2 = r5.TAG
            r1.<init>(r2, r0)
            throw r1
    }

    public java.util.LinkedHashMap<java.lang.String, java.lang.String> getLinkedHashMapFromStr(java.lang.String r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.TAG
            r0.append(r1)
            java.lang.String r1 = " getLinkedHashMapFromStr String"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r3.gson     // Catch: java.lang.Exception -> L28
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$7 r1 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$7     // Catch: java.lang.Exception -> L28
            r1.<init>(r3)     // Catch: java.lang.Exception -> L28
            java.lang.reflect.Type r1 = r1.getType()     // Catch: java.lang.Exception -> L28
            java.lang.Object r0 = r0.fromJson(r4, r1)     // Catch: java.lang.Exception -> L28
            java.util.LinkedHashMap r0 = (java.util.LinkedHashMap) r0     // Catch: java.lang.Exception -> L28
            return r0
        L28:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r2 = r3.TAG
            r1.<init>(r2, r0)
            throw r1
    }

    public <T> java.util.List<T> getListFrom(java.lang.Object r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.TAG
            r0.append(r1)
            java.lang.String r1 = " getListFrom Object"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r3.gson     // Catch: java.lang.Exception -> L2c
            java.lang.String r1 = r3.toJson(r4)     // Catch: java.lang.Exception -> L2c
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$6 r2 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$6     // Catch: java.lang.Exception -> L2c
            r2.<init>(r3)     // Catch: java.lang.Exception -> L2c
            java.lang.reflect.Type r2 = r2.getType()     // Catch: java.lang.Exception -> L2c
            java.lang.Object r0 = r0.fromJson(r1, r2)     // Catch: java.lang.Exception -> L2c
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Exception -> L2c
            return r0
        L2c:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r2 = r3.TAG
            r1.<init>(r2, r0)
            throw r1
    }

    public <T> java.util.List<T> getListFrom(java.lang.String r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.TAG
            r0.append(r1)
            java.lang.String r1 = " getListFrom String"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r3.gson     // Catch: java.lang.Exception -> L28
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$5 r1 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$5     // Catch: java.lang.Exception -> L28
            r1.<init>(r3)     // Catch: java.lang.Exception -> L28
            java.lang.reflect.Type r1 = r1.getType()     // Catch: java.lang.Exception -> L28
            java.lang.Object r0 = r0.fromJson(r4, r1)     // Catch: java.lang.Exception -> L28
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Exception -> L28
            return r0
        L28:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r2 = r3.TAG
            r1.<init>(r2, r0)
            throw r1
    }

    public <T> java.util.Map<java.lang.String, T> getMapFrom(android.content.Context r5, java.lang.String r6) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.TAG
            r0.append(r1)
            java.lang.String r1 = " getMapFrom context String"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            r0 = 0
            android.content.res.AssetManager r1 = r5.getAssets()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.io.InputStream r3 = r1.open(r6)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r0 = r2
            com.google.gson.Gson r2 = r4.gson     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$3 r3 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$3     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.reflect.Type r3 = r3.getType()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.Object r2 = r2.fromJson(r0, r3)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r0.close()     // Catch: java.io.IOException -> L3b
            goto L3f
        L3b:
            r3 = move-exception
            r3.printStackTrace()
        L3f:
            return r2
        L40:
            r1 = move-exception
            goto L4b
        L42:
            r1 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r2 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L40
            java.lang.String r3 = r4.TAG     // Catch: java.lang.Throwable -> L40
            r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> L40
            throw r2     // Catch: java.lang.Throwable -> L40
        L4b:
            if (r0 == 0) goto L55
            r0.close()     // Catch: java.io.IOException -> L51
            goto L55
        L51:
            r2 = move-exception
            r2.printStackTrace()
        L55:
            throw r1
    }

    public <T> java.util.Map<java.lang.String, T> getMapFrom(java.io.Reader r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.TAG
            r0.append(r1)
            java.lang.String r1 = " getMapFrom Reader"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r3.gson     // Catch: java.lang.Exception -> L28
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$4 r1 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$4     // Catch: java.lang.Exception -> L28
            r1.<init>(r3)     // Catch: java.lang.Exception -> L28
            java.lang.reflect.Type r1 = r1.getType()     // Catch: java.lang.Exception -> L28
            java.lang.Object r0 = r0.fromJson(r4, r1)     // Catch: java.lang.Exception -> L28
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Exception -> L28
            return r0
        L28:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r2 = r3.TAG
            r1.<init>(r2, r0)
            throw r1
    }

    public <T> java.util.Map<java.lang.String, T> getMapFrom(java.lang.Object r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.TAG
            r0.append(r1)
            java.lang.String r1 = " getMapFrom Object"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r3.gson     // Catch: java.lang.Exception -> L2c
            java.lang.String r1 = r3.toJson(r4)     // Catch: java.lang.Exception -> L2c
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$2 r2 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$2     // Catch: java.lang.Exception -> L2c
            r2.<init>(r3)     // Catch: java.lang.Exception -> L2c
            java.lang.reflect.Type r2 = r2.getType()     // Catch: java.lang.Exception -> L2c
            java.lang.Object r0 = r0.fromJson(r1, r2)     // Catch: java.lang.Exception -> L2c
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Exception -> L2c
            return r0
        L2c:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r2 = r3.TAG
            r1.<init>(r2, r0)
            throw r1
    }

    public <T> java.util.Map<java.lang.String, T> getMapFrom(java.lang.String r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.TAG
            r0.append(r1)
            java.lang.String r1 = " getMapFrom String"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r3.gson     // Catch: java.lang.Exception -> L28
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$1 r1 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$1     // Catch: java.lang.Exception -> L28
            r1.<init>(r3)     // Catch: java.lang.Exception -> L28
            java.lang.reflect.Type r1 = r1.getType()     // Catch: java.lang.Exception -> L28
            java.lang.Object r0 = r0.fromJson(r4, r1)     // Catch: java.lang.Exception -> L28
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Exception -> L28
            return r0
        L28:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r2 = r3.TAG
            r1.<init>(r2, r0)
            throw r1
    }

    public boolean isJsonArrayObject(java.lang.String r3) {
            r2 = this;
            com.google.gson.JsonParser r0 = new com.google.gson.JsonParser     // Catch: java.lang.Exception -> Lf
            r0.<init>()     // Catch: java.lang.Exception -> Lf
            com.google.gson.JsonElement r0 = r0.parse(r3)     // Catch: java.lang.Exception -> Lf
            r0.getAsJsonArray()     // Catch: java.lang.Exception -> Lf
            r0 = 1
            return r0
        Lf:
            r0 = move-exception
            r1 = 0
            return r1
    }

    public boolean isJsonObject(java.lang.String r3) {
            r2 = this;
            com.google.gson.JsonParser r0 = new com.google.gson.JsonParser     // Catch: java.lang.Exception -> Lf
            r0.<init>()     // Catch: java.lang.Exception -> Lf
            com.google.gson.JsonElement r0 = r0.parse(r3)     // Catch: java.lang.Exception -> Lf
            r0.getAsJsonObject()     // Catch: java.lang.Exception -> Lf
            r0 = 1
            return r0
        Lf:
            r0 = move-exception
            r1 = 0
            return r1
    }

    public com.google.gson.JsonArray parseJsonArray(java.lang.String r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            com.google.gson.JsonParser r0 = new com.google.gson.JsonParser     // Catch: java.lang.Exception -> Le
            r0.<init>()     // Catch: java.lang.Exception -> Le
            com.google.gson.JsonElement r0 = r0.parse(r3)     // Catch: java.lang.Exception -> Le
            com.google.gson.JsonArray r0 = r0.getAsJsonArray()     // Catch: java.lang.Exception -> Le
            return r0
        Le:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r1.<init>(r0)
            throw r1
    }

    public com.google.gson.JsonObject parseJsonObject(java.lang.String r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            com.google.gson.JsonParser r0 = new com.google.gson.JsonParser     // Catch: java.lang.Exception -> Le
            r0.<init>()     // Catch: java.lang.Exception -> Le
            com.google.gson.JsonElement r0 = r0.parse(r3)     // Catch: java.lang.Exception -> Le
            com.google.gson.JsonObject r0 = r0.getAsJsonObject()     // Catch: java.lang.Exception -> Le
            return r0
        Le:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r1.<init>(r0)
            throw r1
    }

    public java.lang.String toJson(java.lang.Object r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.TAG
            r0.append(r1)
            java.lang.String r1 = " toJson Object"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r2.gson
            java.lang.String r0 = r0.toJson(r3)
            return r0
    }
}
