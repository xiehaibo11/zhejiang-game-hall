package com.bianfeng.ymnsdk.util.thridsdk;

import android.content.Context;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import java.io.Reader;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class YmnGsonUtil {
    public YmnGsonUtil() {
    }

    public static <T> T fromJson(String r1, Class<T> r2) throws YmnsdkException {
        return (T) UtilsSdk.getGsonUtils().fromJson(r1, r2);
    L4:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    public static LinkedHashMap<String, String> getLinkedHashMapFromStr(String r1) throws YmnsdkException {
        return UtilsSdk.getGsonUtils().getLinkedHashMapFromStr(r1);
    L4:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    public static <T> List<T> getListFrom(String r1) throws YmnsdkException {
        return UtilsSdk.getGsonUtils().getListFrom(r1);
    L4:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    public static <T> Map<String, T> getMapFrom(String r1) throws YmnsdkException {
        return UtilsSdk.getGsonUtils().getMapFrom(r1);
    L4:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    public static boolean isJsonArrayObject(String r1) {
        return UtilsSdk.getGsonUtils().isJsonArrayObject(r1);
    }

    public static boolean isJsonObject(String r1) {
        return UtilsSdk.getGsonUtils().isJsonObject(r1);
    }

    public static String toJson(Object r1) {
        return UtilsSdk.getGsonUtils().toJson(r1);
    }

    public static <T> T fromJson(Object r1, Class<T> r2) throws YmnsdkException {
        return (T) UtilsSdk.getGsonUtils().fromJson(r1, r2);
    L4:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    public static <T> List<T> getListFrom(Object r1) throws YmnsdkException {
        return UtilsSdk.getGsonUtils().getListFrom(r1);
    L4:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    public static <T> Map<String, T> getMapFrom(Object r1) throws YmnsdkException {
        return UtilsSdk.getGsonUtils().getMapFrom(r1);
    L4:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    public static Object fromJson(Object r1) throws YmnsdkException {
        return UtilsSdk.getGsonUtils().fromJson(r1);
    L4:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    public static <T> Map<String, T> getMapFrom(Context r1, String r2) throws YmnsdkException {
        return UtilsSdk.getGsonUtils().getMapFrom(r1, r2);
    L4:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    public static <T> Map<String, T> getMapFrom(Reader r1) throws YmnsdkException {
        return UtilsSdk.getGsonUtils().getMapFrom(r1);
    L4:
        e = move-exception;
        throw new YmnsdkException(e);
    }
}
