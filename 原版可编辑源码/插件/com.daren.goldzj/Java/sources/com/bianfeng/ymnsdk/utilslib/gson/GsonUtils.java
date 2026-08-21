package com.bianfeng.ymnsdk.utilslib.gson;

import android.content.Context;
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

    public <T> Map<String, T> getMapFrom(String str) throws YmnException {
        UtilsLogger.i(this.TAG + " getMapFrom String");
        try {
            return (Map) this.gson.fromJson(str, new TypeToken<Map<String, T>>() {
            }.getType());
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public <T> Map<String, T> getMapFrom(Object obj) throws YmnException {
        UtilsLogger.i(this.TAG + " getMapFrom Object");
        try {
            return (Map) this.gson.fromJson(toJson(obj), new TypeToken<Map<String, T>>() {
            }.getType());
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public <T> Map<String, T> getMapFrom(Context context, String str) throws Throwable {
        InputStreamReader inputStreamReader;
        UtilsLogger.i(this.TAG + " getMapFrom context String");
        InputStreamReader inputStreamReader2 = null;
        try {
            try {
                inputStreamReader = new InputStreamReader(context.getAssets().open(str));
            } catch (Throwable th) {
                th = th;
            }
        } catch (Exception e) {
            e = e;
        }
        try {
            Map<String, T> map = (Map) this.gson.fromJson(inputStreamReader, new TypeToken<Map<String, T>>() {
            }.getType());
            try {
                inputStreamReader.close();
            } catch (IOException e2) {
                e2.printStackTrace();
            }
            return map;
        } catch (Exception e3) {
            e = e3;
            throw new YmnException(this.TAG, e);
        } catch (Throwable th2) {
            th = th2;
            inputStreamReader2 = inputStreamReader;
            if (inputStreamReader2 != null) {
                try {
                    inputStreamReader2.close();
                } catch (IOException e4) {
                    e4.printStackTrace();
                }
            }
            throw th;
        }
    }

    public <T> Map<String, T> getMapFrom(Reader reader) throws YmnException {
        UtilsLogger.i(this.TAG + " getMapFrom Reader");
        try {
            return (Map) this.gson.fromJson(reader, new TypeToken<Map<String, T>>() {
            }.getType());
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public <T> List<T> getListFrom(String str) throws YmnException {
        UtilsLogger.i(this.TAG + " getListFrom String");
        try {
            return (List) this.gson.fromJson(str, new TypeToken<List<T>>() {
            }.getType());
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public <T> List<T> getListFrom(Object obj) throws YmnException {
        UtilsLogger.i(this.TAG + " getListFrom Object");
        try {
            return (List) this.gson.fromJson(toJson(obj), new TypeToken<List<T>>() {
            }.getType());
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public LinkedHashMap<String, String> getLinkedHashMapFromStr(String str) throws YmnException {
        UtilsLogger.i(this.TAG + " getLinkedHashMapFromStr String");
        try {
            return (LinkedHashMap) this.gson.fromJson(str, new TypeToken<LinkedHashMap<String, String>>() {
            }.getType());
        } catch (Exception e) {
            throw new YmnException(this.TAG, e);
        }
    }

    public String toJson(Object obj) {
        UtilsLogger.i(this.TAG + " toJson Object");
        return this.gson.toJson(obj);
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

    public Object fromJson(Object obj) throws YmnException {
        UtilsLogger.i(this.TAG + " fromJson Object");
        try {
            return this.gson.fromJson(toJson(obj), Object.class);
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

    public boolean isJsonObject(String str) {
        try {
            new JsonParser().parse(str).getAsJsonObject();
            return true;
        } catch (Exception unused) {
            return false;
        }
    }

    public boolean isJsonArrayObject(String str) {
        try {
            new JsonParser().parse(str).getAsJsonArray();
            return true;
        } catch (Exception unused) {
            return false;
        }
    }

    public JsonObject parseJsonObject(String str) throws YmnException {
        try {
            return new JsonParser().parse(str).getAsJsonObject();
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    public JsonArray parseJsonArray(String str) throws YmnException {
        try {
            return new JsonParser().parse(str).getAsJsonArray();
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }
}
