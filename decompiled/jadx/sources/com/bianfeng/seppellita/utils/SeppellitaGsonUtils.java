package com.bianfeng.seppellita.utils;

import com.bianfeng.seppellita.exception.SeppellitaException;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.google.gson.Gson;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class SeppellitaGsonUtils {
    public static String toJson(Object obj) {
        return new Gson().toJson(obj);
    }

    public static <T> T fromJson(String str, Class<T> cls) throws SeppellitaException {
        try {
            return (T) new Gson().fromJson(str, (Class) cls);
        } catch (Exception e) {
            throw new SeppellitaException(e);
        }
    }

    public static Map<String, String> getMap(String str) throws SeppellitaException {
        try {
            return (Map) new Gson().fromJson(str, Map.class);
        } catch (Exception e) {
            throw new SeppellitaException(e);
        }
    }

    public static List<String> getList(String str) throws SeppellitaException {
        try {
            return GsonUtils.getInstance().getListFrom(str);
        } catch (Exception e) {
            throw new SeppellitaException(e);
        }
    }
}
