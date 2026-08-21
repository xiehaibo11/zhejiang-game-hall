package com.bianfeng.ymnsdk.util.thridsdk;

import android.content.Context;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import java.io.Reader;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class YmnGsonUtil {
    public static <T> Map<String, T> getMapFrom(String data) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getMapFrom(data);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static <T> Map<String, T> getMapFrom(Object data) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getMapFrom(data);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static <T> Map<String, T> getMapFrom(Context context, String fileName) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getMapFrom(context, fileName);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static <T> Map<String, T> getMapFrom(Reader data) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getMapFrom(data);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static <T> List<T> getListFrom(String data) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getListFrom(data);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static <T> List<T> getListFrom(Object data) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getListFrom(data);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static LinkedHashMap<String, String> getLinkedHashMapFromStr(String data) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().getLinkedHashMapFromStr(data);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static String toJson(Object object) {
        return UtilsSdk.getGsonUtils().toJson(object);
    }

    public static <T> T fromJson(String str, Class<T> cls) throws YmnsdkException {
        try {
            return (T) UtilsSdk.getGsonUtils().fromJson(str, (Class) cls);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static <T> T fromJson(Object obj, Class<T> cls) throws YmnsdkException {
        try {
            return (T) UtilsSdk.getGsonUtils().fromJson(obj, (Class) cls);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static Object fromJson(Object data) throws YmnsdkException {
        try {
            return UtilsSdk.getGsonUtils().fromJson(data);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public static boolean isJsonArrayObject(String data) {
        return UtilsSdk.getGsonUtils().isJsonArrayObject(data);
    }

    public static boolean isJsonObject(String data) {
        return UtilsSdk.getGsonUtils().isJsonObject(data);
    }
}
