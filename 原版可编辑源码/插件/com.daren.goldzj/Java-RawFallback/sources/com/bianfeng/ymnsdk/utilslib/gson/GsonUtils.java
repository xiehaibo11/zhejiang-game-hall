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

    public java.lang.Object fromJson(java.lang.Object r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.TAG
            r0.append(r1)
            java.lang.String r1 = " fromJson Object"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r2.gson     // Catch: java.lang.Exception -> L23
            java.lang.String r3 = r2.toJson(r3)     // Catch: java.lang.Exception -> L23
            java.lang.Class<java.lang.Object> r1 = java.lang.Object.class
            java.lang.Object r3 = r0.fromJson(r3, r1)     // Catch: java.lang.Exception -> L23
            return r3
        L23:
            r3 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r1 = r2.TAG
            r0.<init>(r1, r3)
            throw r0
    }

    public <T> T fromJson(java.lang.Object r3, java.lang.Class<T> r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.TAG
            r0.append(r1)
            java.lang.String r1 = " fromJson Object Class"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r2.gson     // Catch: java.lang.Exception -> L21
            java.lang.String r3 = r2.toJson(r3)     // Catch: java.lang.Exception -> L21
            java.lang.Object r3 = r0.fromJson(r3, r4)     // Catch: java.lang.Exception -> L21
            return r3
        L21:
            r3 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r4 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r0 = r2.TAG
            r4.<init>(r0, r3)
            throw r4
    }

    public <T> T fromJson(java.lang.Object r3, java.lang.Object r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.TAG
            r0.append(r1)
            java.lang.String r1 = " fromJson Object"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            java.lang.Class r4 = r4.getClass()     // Catch: java.lang.Exception -> L34
            java.lang.reflect.Type[] r4 = r4.getGenericInterfaces()     // Catch: java.lang.Exception -> L34
            r0 = 0
            r4 = r4[r0]     // Catch: java.lang.Exception -> L34
            java.lang.reflect.ParameterizedType r4 = (java.lang.reflect.ParameterizedType) r4     // Catch: java.lang.Exception -> L34
            java.lang.reflect.Type[] r4 = r4.getActualTypeArguments()     // Catch: java.lang.Exception -> L34
            com.google.gson.Gson r1 = r2.gson     // Catch: java.lang.Exception -> L34
            java.lang.String r3 = r2.toJson(r3)     // Catch: java.lang.Exception -> L34
            r4 = r4[r0]     // Catch: java.lang.Exception -> L34
            java.lang.Object r3 = r1.fromJson(r3, r4)     // Catch: java.lang.Exception -> L34
            return r3
        L34:
            r3 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r4 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r0 = r2.TAG
            r4.<init>(r0, r3)
            throw r4
    }

    public <T> T fromJson(java.lang.String r3, java.lang.Class<T> r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.TAG
            r0.append(r1)
            java.lang.String r1 = " fromJson String Class"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r2.gson     // Catch: java.lang.Exception -> L1d
            java.lang.Object r3 = r0.fromJson(r3, r4)     // Catch: java.lang.Exception -> L1d
            return r3
        L1d:
            r3 = move-exception
            r3.printStackTrace()
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r4 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r0 = r2.TAG
            r4.<init>(r0, r3)
            throw r4
    }

    public <T> T fromJson(java.lang.String r3, java.lang.Object r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.TAG
            r0.append(r1)
            java.lang.String r1 = " fromJson Object"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            java.lang.Class r4 = r4.getClass()     // Catch: java.lang.Exception -> L30
            java.lang.reflect.Type[] r4 = r4.getGenericInterfaces()     // Catch: java.lang.Exception -> L30
            r0 = 0
            r4 = r4[r0]     // Catch: java.lang.Exception -> L30
            java.lang.reflect.ParameterizedType r4 = (java.lang.reflect.ParameterizedType) r4     // Catch: java.lang.Exception -> L30
            java.lang.reflect.Type[] r4 = r4.getActualTypeArguments()     // Catch: java.lang.Exception -> L30
            com.google.gson.Gson r1 = r2.gson     // Catch: java.lang.Exception -> L30
            r4 = r4[r0]     // Catch: java.lang.Exception -> L30
            java.lang.Object r3 = r1.fromJson(r3, r4)     // Catch: java.lang.Exception -> L30
            return r3
        L30:
            r3 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r4 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r0 = r2.TAG
            r4.<init>(r0, r3)
            throw r4
    }

    public java.util.LinkedHashMap<java.lang.String, java.lang.String> getLinkedHashMapFromStr(java.lang.String r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.TAG
            r0.append(r1)
            java.lang.String r1 = " getLinkedHashMapFromStr String"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r2.gson     // Catch: java.lang.Exception -> L28
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$7 r1 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$7     // Catch: java.lang.Exception -> L28
            r1.<init>(r2)     // Catch: java.lang.Exception -> L28
            java.lang.reflect.Type r1 = r1.getType()     // Catch: java.lang.Exception -> L28
            java.lang.Object r3 = r0.fromJson(r3, r1)     // Catch: java.lang.Exception -> L28
            java.util.LinkedHashMap r3 = (java.util.LinkedHashMap) r3     // Catch: java.lang.Exception -> L28
            return r3
        L28:
            r3 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r1 = r2.TAG
            r0.<init>(r1, r3)
            throw r0
    }

    public <T> java.util.List<T> getListFrom(java.lang.Object r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.TAG
            r0.append(r1)
            java.lang.String r1 = " getListFrom Object"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r2.gson     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = r2.toJson(r3)     // Catch: java.lang.Exception -> L2c
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$6 r1 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$6     // Catch: java.lang.Exception -> L2c
            r1.<init>(r2)     // Catch: java.lang.Exception -> L2c
            java.lang.reflect.Type r1 = r1.getType()     // Catch: java.lang.Exception -> L2c
            java.lang.Object r3 = r0.fromJson(r3, r1)     // Catch: java.lang.Exception -> L2c
            java.util.List r3 = (java.util.List) r3     // Catch: java.lang.Exception -> L2c
            return r3
        L2c:
            r3 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r1 = r2.TAG
            r0.<init>(r1, r3)
            throw r0
    }

    public <T> java.util.List<T> getListFrom(java.lang.String r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.TAG
            r0.append(r1)
            java.lang.String r1 = " getListFrom String"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r2.gson     // Catch: java.lang.Exception -> L28
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$5 r1 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$5     // Catch: java.lang.Exception -> L28
            r1.<init>(r2)     // Catch: java.lang.Exception -> L28
            java.lang.reflect.Type r1 = r1.getType()     // Catch: java.lang.Exception -> L28
            java.lang.Object r3 = r0.fromJson(r3, r1)     // Catch: java.lang.Exception -> L28
            java.util.List r3 = (java.util.List) r3     // Catch: java.lang.Exception -> L28
            return r3
        L28:
            r3 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r1 = r2.TAG
            r0.<init>(r1, r3)
            throw r0
    }

    public <T> java.util.Map<java.lang.String, T> getMapFrom(android.content.Context r3, java.lang.String r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.TAG
            r0.append(r1)
            java.lang.String r1 = " getMapFrom context String"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            r0 = 0
            android.content.res.AssetManager r3 = r3.getAssets()     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L46
            java.io.InputStreamReader r1 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L46
            java.io.InputStream r3 = r3.open(r4)     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L46
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L46
            com.google.gson.Gson r3 = r2.gson     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L41
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$3 r4 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$3     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L41
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L41
            java.lang.reflect.Type r4 = r4.getType()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L41
            java.lang.Object r3 = r3.fromJson(r1, r4)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L41
            java.util.Map r3 = (java.util.Map) r3     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L41
            r1.close()     // Catch: java.io.IOException -> L39
            goto L3d
        L39:
            r4 = move-exception
            r4.printStackTrace()
        L3d:
            return r3
        L3e:
            r3 = move-exception
            r0 = r1
            goto L4f
        L41:
            r3 = move-exception
            r0 = r1
            goto L47
        L44:
            r3 = move-exception
            goto L4f
        L46:
            r3 = move-exception
        L47:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r4 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L44
            java.lang.String r1 = r2.TAG     // Catch: java.lang.Throwable -> L44
            r4.<init>(r1, r3)     // Catch: java.lang.Throwable -> L44
            throw r4     // Catch: java.lang.Throwable -> L44
        L4f:
            if (r0 == 0) goto L59
            r0.close()     // Catch: java.io.IOException -> L55
            goto L59
        L55:
            r4 = move-exception
            r4.printStackTrace()
        L59:
            throw r3
    }

    public <T> java.util.Map<java.lang.String, T> getMapFrom(java.io.Reader r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.TAG
            r0.append(r1)
            java.lang.String r1 = " getMapFrom Reader"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r2.gson     // Catch: java.lang.Exception -> L28
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$4 r1 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$4     // Catch: java.lang.Exception -> L28
            r1.<init>(r2)     // Catch: java.lang.Exception -> L28
            java.lang.reflect.Type r1 = r1.getType()     // Catch: java.lang.Exception -> L28
            java.lang.Object r3 = r0.fromJson(r3, r1)     // Catch: java.lang.Exception -> L28
            java.util.Map r3 = (java.util.Map) r3     // Catch: java.lang.Exception -> L28
            return r3
        L28:
            r3 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r1 = r2.TAG
            r0.<init>(r1, r3)
            throw r0
    }

    public <T> java.util.Map<java.lang.String, T> getMapFrom(java.lang.Object r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.TAG
            r0.append(r1)
            java.lang.String r1 = " getMapFrom Object"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r2.gson     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = r2.toJson(r3)     // Catch: java.lang.Exception -> L2c
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$2 r1 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$2     // Catch: java.lang.Exception -> L2c
            r1.<init>(r2)     // Catch: java.lang.Exception -> L2c
            java.lang.reflect.Type r1 = r1.getType()     // Catch: java.lang.Exception -> L2c
            java.lang.Object r3 = r0.fromJson(r3, r1)     // Catch: java.lang.Exception -> L2c
            java.util.Map r3 = (java.util.Map) r3     // Catch: java.lang.Exception -> L2c
            return r3
        L2c:
            r3 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r1 = r2.TAG
            r0.<init>(r1, r3)
            throw r0
    }

    public <T> java.util.Map<java.lang.String, T> getMapFrom(java.lang.String r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.TAG
            r0.append(r1)
            java.lang.String r1 = " getMapFrom String"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.google.gson.Gson r0 = r2.gson     // Catch: java.lang.Exception -> L28
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$1 r1 = new com.bianfeng.ymnsdk.utilslib.gson.GsonUtils$1     // Catch: java.lang.Exception -> L28
            r1.<init>(r2)     // Catch: java.lang.Exception -> L28
            java.lang.reflect.Type r1 = r1.getType()     // Catch: java.lang.Exception -> L28
            java.lang.Object r3 = r0.fromJson(r3, r1)     // Catch: java.lang.Exception -> L28
            java.util.Map r3 = (java.util.Map) r3     // Catch: java.lang.Exception -> L28
            return r3
        L28:
            r3 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r1 = r2.TAG
            r0.<init>(r1, r3)
            throw r0
    }

    public boolean isJsonArrayObject(java.lang.String r2) {
            r1 = this;
            com.google.gson.JsonParser r0 = new com.google.gson.JsonParser     // Catch: java.lang.Exception -> Le
            r0.<init>()     // Catch: java.lang.Exception -> Le
            com.google.gson.JsonElement r2 = r0.parse(r2)     // Catch: java.lang.Exception -> Le
            r2.getAsJsonArray()     // Catch: java.lang.Exception -> Le
            r2 = 1
            return r2
        Le:
            r2 = 0
            return r2
    }

    public boolean isJsonObject(java.lang.String r2) {
            r1 = this;
            com.google.gson.JsonParser r0 = new com.google.gson.JsonParser     // Catch: java.lang.Exception -> Le
            r0.<init>()     // Catch: java.lang.Exception -> Le
            com.google.gson.JsonElement r2 = r0.parse(r2)     // Catch: java.lang.Exception -> Le
            r2.getAsJsonObject()     // Catch: java.lang.Exception -> Le
            r2 = 1
            return r2
        Le:
            r2 = 0
            return r2
    }

    public com.google.gson.JsonArray parseJsonArray(java.lang.String r2) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r1 = this;
            com.google.gson.JsonParser r0 = new com.google.gson.JsonParser     // Catch: java.lang.Exception -> Le
            r0.<init>()     // Catch: java.lang.Exception -> Le
            com.google.gson.JsonElement r2 = r0.parse(r2)     // Catch: java.lang.Exception -> Le
            com.google.gson.JsonArray r2 = r2.getAsJsonArray()     // Catch: java.lang.Exception -> Le
            return r2
        Le:
            r2 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r0.<init>(r2)
            throw r0
    }

    public com.google.gson.JsonObject parseJsonObject(java.lang.String r2) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r1 = this;
            com.google.gson.JsonParser r0 = new com.google.gson.JsonParser     // Catch: java.lang.Exception -> Le
            r0.<init>()     // Catch: java.lang.Exception -> Le
            com.google.gson.JsonElement r2 = r0.parse(r2)     // Catch: java.lang.Exception -> Le
            com.google.gson.JsonObject r2 = r2.getAsJsonObject()     // Catch: java.lang.Exception -> Le
            return r2
        Le:
            r2 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r0.<init>(r2)
            throw r0
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
            java.lang.String r3 = r0.toJson(r3)
            return r3
    }
}
