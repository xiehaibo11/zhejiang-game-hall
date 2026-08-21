package com.bianfeng.datafunsdk;

import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import java.util.HashMap;
import java.util.Map;

public class w {
    public static String a(Object obj) {
        return UtilsSdk.getGsonUtils().toJson(obj);
    }

    public static <T> Map<String, T> a(String str) {
        try {
            return UtilsSdk.getGsonUtils().getMapFrom(str);
        } catch (Exception e) {
            e.printStackTrace();
            return new HashMap();
        }
    }

    public static <T> T a(String str, Class<T> cls) throws n {
        try {
            return (T) UtilsSdk.getGsonUtils().fromJson(str, (Class) cls);
        } catch (YmnException e) {
            throw new n();
        }
    }
}
