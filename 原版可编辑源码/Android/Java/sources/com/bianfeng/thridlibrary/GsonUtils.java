package com.bianfeng.thridlibrary;

import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import java.util.HashMap;
import java.util.Map;

public class GsonUtils {
    private static volatile GsonUtils utils;
    private Gson gson = new Gson();

    private GsonUtils() {
    }

    public static GsonUtils getInstance() {
        if (utils == null) {
            synchronized (GsonUtils.class) {
                if (utils == null) {
                    utils = new GsonUtils();
                }
            }
        }
        return utils;
    }

    public String toJson(Object obj) {
        return this.gson.toJson(obj);
    }

    public <T> T fromJson(String str, Class<T> cls) {
        return (T) this.gson.fromJson(str, (Class) cls);
    }

    public Map<String, String> fromJson(String str) {
        return (Map) this.gson.fromJson(str, new TypeToken<Map<String, String>>() {
        }.getType());
    }

    public Map<String, Object> fromJsonWithObject(String str) {
        return (Map) this.gson.fromJson(str, new TypeToken<Map<String, Object>>() {
        }.getType());
    }

    public Map<String, String> getFromMap(String str) {
        try {
            return (Map) this.gson.fromJson(str, new TypeToken<Map<String, String>>() {
            }.getType());
        } catch (Exception unused) {
            return new HashMap();
        }
    }
}
