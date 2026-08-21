package com.bianfeng.ymnsdk.utilslib.gson;

import android.content.Context;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;
import com.google.gson.Gson;
import com.google.gson.JsonArray;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.Reader;
import java.lang.reflect.ParameterizedType;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class GsonUtils {
    private static GsonUtils utils;
    private String TAG;
    private Gson gson;

    private GsonUtils() {
        this.TAG = GsonUtils.class.getSimpleName();
        this.gson = new Gson();
    }

    public static GsonUtils getInstance() {
        if (utils != null) goto L13;
        monitor-enter(GsonUtils.class);
        utils = new GsonUtils();     // Catch: Throwable -> L9
        monitor-exit(GsonUtils.class);     // Catch: Throwable -> L9
    L9:
        th = move-exception;
        throw th;
    L13:
        return utils;
    }

    public <T> Map<String, T> getMapFrom(String r3) throws YmnException {
        UtilsLogger.i(this.TAG + " getMapFrom String");
        return (Map) this.gson.fromJson(r3, new 1(this).getType());
    L5:
        e = move-exception;
        throw new YmnException(this.TAG, e);
    }

    public <T> Map<String, T> getMapFrom(Object r3) throws YmnException {
        UtilsLogger.i(this.TAG + " getMapFrom Object");
        return (Map) this.gson.fromJson(toJson(r3), new 2(this).getType());
    L5:
        e = move-exception;
        throw new YmnException(this.TAG, e);
    }

    public <T> Map<String, T> getMapFrom(Context r3, String r4) throws YmnException {
        UtilsLogger.i(this.TAG + " getMapFrom context String");
        InputStreamReader r0 = null;
        InputStreamReader r1 = new InputStreamReader(r3.getAssets().open(r4));     // Catch: Throwable -> L14 Exception -> L16
        Map<String, T> r32 = (Map) this.gson.fromJson(r1, new 3(this).getType());     // Catch: Throwable -> L10 Exception -> L12
        r1.close();     // Catch: IOException -> L7
    L9:
        return r32;
    L7:
        e = move-exception;
        e.printStackTrace();
        goto L9
    L12:
        e = e;
    L18:
        throw new YmnException(this.TAG, e);     // Catch: Throwable -> L14
    L10:
        th = th;
        r0 = r1;
    L19:
        if (r0 != null) goto L27;
    L24:
        throw th;
    L27:
        r0.close();     // Catch: IOException -> L22
    L22:
        e = move-exception;
        e.printStackTrace();
    L14:
        th = th;
    L16:
        e = e;
        goto L18
    }

    public <T> Map<String, T> getMapFrom(Reader r3) throws YmnException {
        UtilsLogger.i(this.TAG + " getMapFrom Reader");
        return (Map) this.gson.fromJson(r3, new 4(this).getType());
    L5:
        e = move-exception;
        throw new YmnException(this.TAG, e);
    }

    public <T> List<T> getListFrom(String r3) throws YmnException {
        UtilsLogger.i(this.TAG + " getListFrom String");
        return (List) this.gson.fromJson(r3, new 5(this).getType());
    L5:
        e = move-exception;
        throw new YmnException(this.TAG, e);
    }

    public <T> List<T> getListFrom(Object r3) throws YmnException {
        UtilsLogger.i(this.TAG + " getListFrom Object");
        return (List) this.gson.fromJson(toJson(r3), new 6(this).getType());
    L5:
        e = move-exception;
        throw new YmnException(this.TAG, e);
    }

    public LinkedHashMap<String, String> getLinkedHashMapFromStr(String r3) throws YmnException {
        UtilsLogger.i(this.TAG + " getLinkedHashMapFromStr String");
        return (LinkedHashMap) this.gson.fromJson(r3, new 7(this).getType());
    L5:
        e = move-exception;
        throw new YmnException(this.TAG, e);
    }

    public String toJson(Object r3) {
        UtilsLogger.i(this.TAG + " toJson Object");
        return this.gson.toJson(r3);
    }

    public <T> T fromJson(String r3, Class<T> r4) throws YmnException {
        UtilsLogger.i(this.TAG + " fromJson String Class");
        return (T) this.gson.fromJson(r3, r4);
    L5:
        e = move-exception;
        e.printStackTrace();
        throw new YmnException(this.TAG, e);
    }

    public <T> T fromJson(Object r3, Class<T> r4) throws YmnException {
        UtilsLogger.i(this.TAG + " fromJson Object Class");
        return (T) this.gson.fromJson(toJson(r3), r4);
    L5:
        e = move-exception;
        throw new YmnException(this.TAG, e);
    }

    public Object fromJson(Object r3) throws YmnException {
        UtilsLogger.i(this.TAG + " fromJson Object");
        return this.gson.fromJson(toJson(r3), Object.class);
    L5:
        e = move-exception;
        throw new YmnException(this.TAG, e);
    }

    public <T> T fromJson(Object r3, Object r4) throws YmnException {
        UtilsLogger.i(this.TAG + " fromJson Object");
        return (T) this.gson.fromJson(toJson(r3), ((ParameterizedType) r4.getClass().getGenericInterfaces()[0]).getActualTypeArguments()[0]);
    L5:
        e = move-exception;
        throw new YmnException(this.TAG, e);
    }

    public <T> T fromJson(String r3, Object r4) throws YmnException {
        UtilsLogger.i(this.TAG + " fromJson Object");
        return (T) this.gson.fromJson(r3, ((ParameterizedType) r4.getClass().getGenericInterfaces()[0]).getActualTypeArguments()[0]);
    L5:
        e = move-exception;
        throw new YmnException(this.TAG, e);
    }

    public boolean isJsonObject(String r2) {
        new JsonParser().parse(r2).getAsJsonObject();     // Catch: Exception -> L5
        return true;
    L5:
        return false;
    }

    public boolean isJsonArrayObject(String r2) {
        new JsonParser().parse(r2).getAsJsonArray();     // Catch: Exception -> L5
        return true;
    L5:
        return false;
    }

    public JsonObject parseJsonObject(String r2) throws YmnException {
        return new JsonParser().parse(r2).getAsJsonObject();
    L4:
        e = move-exception;
        throw new YmnException(e);
    }

    public JsonArray parseJsonArray(String r2) throws YmnException {
        return new JsonParser().parse(r2).getAsJsonArray();
    L4:
        e = move-exception;
        throw new YmnException(e);
    }
}
