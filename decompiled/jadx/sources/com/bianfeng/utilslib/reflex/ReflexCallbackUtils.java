package com.bianfeng.utilslib.reflex;

import com.bianfeng.utilslib.UtilsSdk;
import java.lang.reflect.Field;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class ReflexCallbackUtils {
    private static ReflexCallbackUtils utils;

    private ReflexCallbackUtils() {
    }

    public static ReflexCallbackUtils getInstance() {
        if (utils == null) {
            utils = new ReflexCallbackUtils();
        }
        return utils;
    }

    public Object onCallWithHashmap(String str, String str2) {
        HashMap map = new HashMap();
        map.put("type", str2);
        UtilsSdk.getLogger().i("ReflexCallbackUtils onCallWithObject：" + str);
        return invokeMethod(str, "onCall", map);
    }

    public Object onCallWithObject(String str, Object obj) {
        UtilsSdk.getLogger().i("ReflexCallbackUtils onCallWithObject：" + str);
        return invokeMethod(str, "onCall", obj);
    }

    public Object callMethod(String str, String str2, Object obj) {
        UtilsSdk.getLogger().i("callMethod 3" + str + "data" + str2);
        return invokeMethod(str, str2, obj);
    }

    public Object callMethod(String str, String str2) {
        UtilsSdk.getLogger().i("callMethod" + str + "data" + str2);
        return invokeMethod(str, str2, null);
    }

    private Object invokeMethod(String str, String str2, Object obj) {
        try {
            Class<?> cls = Class.forName(str);
            Object objNewInstance = cls.getConstructor(new Class[0]).newInstance(new Object[0]);
            if (obj == null) {
                return cls.getMethod(str2, new Class[0]).invoke(objNewInstance, new Object[0]);
            }
            return cls.getMethod(str2, obj.getClass()).invoke(objNewInstance, obj);
        } catch (Exception e) {
            e.printStackTrace();
            UtilsSdk.getLogger().i("ReflexCallbackUtils invokeMethod clzssName:" + str + "==methodName=" + str2 + "==Exception :" + e.getMessage());
            return "not find class=" + str + ",method=" + str2;
        }
    }

    public Object getField(String str, String str2) {
        try {
            Class<?> cls = Class.forName(str);
            Object objNewInstance = cls.getConstructor(new Class[0]).newInstance(new Object[0]);
            Field declaredField = cls.getDeclaredField(str2);
            declaredField.setAccessible(true);
            return declaredField.get(objNewInstance);
        } catch (Exception unused) {
            return "not find class=" + str + ",Field=" + str2;
        }
    }
}
