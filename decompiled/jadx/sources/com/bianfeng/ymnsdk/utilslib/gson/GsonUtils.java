package com.bianfeng.ymnsdk.utilslib.gson;

import android.content.Context;
import android.content.res.AssetManager;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;
import com.google.gson.Gson;
import com.google.gson.JsonArray;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;
import com.google.gson.reflect.TypeToken;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.Reader;
import java.lang.reflect.ParameterizedType;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class GsonUtils {
    private static GsonUtils utils;
    private String TAG = GsonUtils.class.getSimpleName();
    private Gson gson = new Gson();

    private GsonUtils() {
    }

    public static GsonUtils getInstance() {
        if (utils == null) {
            synchronized (GsonUtils.class) {
                utils = new GsonUtils();
            }
        }
        return utils;
    }

    public <T> Map<String, T> getMapFrom(String data) throws YmnException {
        UtilsLogger.i(this.TAG + " getMapFrom String");
        try {
            return (Map) this.gson.fromJson(data, new TypeToken<Map<String, T>>() { // from class: com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.1
            }.getType());
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public <T> Map<String, T> getMapFrom(Object data) throws YmnException {
        UtilsLogger.i(this.TAG + " getMapFrom Object");
        try {
            return (Map) this.gson.fromJson(toJson(data), new TypeToken<Map<String, T>>() { // from class: com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.2
            }.getType());
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public <T> Map<String, T> getMapFrom(Context context, String fileName) throws YmnException {
        UtilsLogger.i(this.TAG + " getMapFrom context String");
        Reader reader = null;
        try {
            try {
                AssetManager am = context.getAssets();
                reader = new InputStreamReader(am.open(fileName));
                Map<String, T> map = (Map) this.gson.fromJson(reader, new TypeToken<Map<String, T>>() { // from class: com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.3
                }.getType());
                try {
                    reader.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
                return map;
            } catch (Throwable th) {
                if (reader != null) {
                    try {
                        reader.close();
                    } catch (IOException e2) {
                        e2.printStackTrace();
                    }
                }
                throw th;
            }
        } catch (Exception e3) {
            throw new YmnException(this.TAG, e3);
        }
    }

    public <T> Map<String, T> getMapFrom(Reader data) throws YmnException {
        UtilsLogger.i(this.TAG + " getMapFrom Reader");
        try {
            return (Map) this.gson.fromJson(data, new TypeToken<Map<String, T>>() { // from class: com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.4
            }.getType());
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public <T> List<T> getListFrom(String data) throws YmnException {
        UtilsLogger.i(this.TAG + " getListFrom String");
        try {
            return (List) this.gson.fromJson(data, new TypeToken<List<T>>() { // from class: com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.5
            }.getType());
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public <T> List<T> getListFrom(Object data) throws YmnException {
        UtilsLogger.i(this.TAG + " getListFrom Object");
        try {
            return (List) this.gson.fromJson(toJson(data), new TypeToken<List<T>>() { // from class: com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.6
            }.getType());
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public LinkedHashMap<String, String> getLinkedHashMapFromStr(String data) throws YmnException {
        UtilsLogger.i(this.TAG + " getLinkedHashMapFromStr String");
        try {
            return (LinkedHashMap) this.gson.fromJson(data, new TypeToken<LinkedHashMap<String, String>>() { // from class: com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.7
            }.getType());
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public String toJson(Object object) {
        UtilsLogger.i(this.TAG + " toJson Object");
        return this.gson.toJson(object);
    }

    public <T> T fromJson(String str, Class<T> cls) throws YmnException {
        UtilsLogger.i(this.TAG + " fromJson String Class");
        try {
            return (T) this.gson.fromJson(str, (Class) cls);
        } catch (Exception e) {
            e.printStackTrace();
            throw new YmnException(this.TAG, e);
        }
    }

    public <T> T fromJson(Object obj, Class<T> cls) throws YmnException {
        UtilsLogger.i(this.TAG + " fromJson Object Class");
        try {
            return (T) this.gson.fromJson(toJson(obj), (Class) cls);
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public Object fromJson(Object data) throws YmnException {
        UtilsLogger.i(this.TAG + " fromJson Object");
        try {
            return this.gson.fromJson(toJson(data), Object.class);
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public <T> T fromJson(Object obj, Object obj2) throws YmnException {
        UtilsLogger.i(this.TAG + " fromJson Object");
        try {
            return (T) this.gson.fromJson(toJson(obj), ((ParameterizedType) obj2.getClass().getGenericInterfaces()[0]).getActualTypeArguments()[0]);
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public <T> T fromJson(String str, Object obj) throws YmnException {
        UtilsLogger.i(this.TAG + " fromJson Object");
        try {
            return (T) this.gson.fromJson(str, ((ParameterizedType) obj.getClass().getGenericInterfaces()[0]).getActualTypeArguments()[0]);
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public boolean isJsonObject(String data) {
        try {
            new JsonParser().parse(data).getAsJsonObject();
            return true;
        } catch (Exception e) {
            return false;
        }
    }

    public boolean isJsonArrayObject(String data) {
        try {
            new JsonParser().parse(data).getAsJsonArray();
            return true;
        } catch (Exception e) {
            return false;
        }
    }

    public JsonObject parseJsonObject(String data) throws YmnException {
        try {
            return new JsonParser().parse(data).getAsJsonObject();
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    public JsonArray parseJsonArray(String data) throws YmnException {
        try {
            return new JsonParser().parse(data).getAsJsonArray();
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }
}
