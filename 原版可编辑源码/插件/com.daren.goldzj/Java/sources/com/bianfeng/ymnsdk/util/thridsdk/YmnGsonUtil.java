package com.bianfeng.ymnsdk.util.thridsdk;

import android.content.Context;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import java.io.Reader;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class YmnGsonUtil {
    public static <T> T fromJson(String str, Class<T> cls) throws YmnsdkException {
        try {
            return (T) UtilsSdk.getGsonUtils().fromJson(str, (Class) cls);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static LinkedHashMap<String, String> getLinkedHashMapFromStr(String str) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getLinkedHashMapFromStr(str);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static <T> List<T> getListFrom(String str) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getListFrom(str);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static <T> Map<String, T> getMapFrom(String str) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getMapFrom(str);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static boolean isJsonArrayObject(String str) {
        return UtilsSdk.getGsonUtils().isJsonArrayObject(str);
    }

    public static boolean isJsonObject(String str) {
        return UtilsSdk.getGsonUtils().isJsonObject(str);
    }

    public static String toJson(Object obj) {
        return UtilsSdk.getGsonUtils().toJson(obj);
    }

    public static <T> T fromJson(Object obj, Class<T> cls) throws YmnsdkException {
        try {
            return (T) UtilsSdk.getGsonUtils().fromJson(obj, (Class) cls);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static <T> List<T> getListFrom(Object obj) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getListFrom(obj);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static <T> Map<String, T> getMapFrom(Object obj) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getMapFrom(obj);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static Object fromJson(Object obj) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().fromJson(obj);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static <T> Map<String, T> getMapFrom(Context context, String str) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getMapFrom(context, str);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static <T> Map<String, T> getMapFrom(Reader reader) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getMapFrom(reader);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }
}
