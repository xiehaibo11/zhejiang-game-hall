package com.tkay.core.api;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.tkay.core.common.b.m;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public abstract class TYInitMediation {
    public static final String KEY_LOCAL = "tkay_local";

    public List getActivityStatus() {
        return null;
    }

    public List getMetaValutStatus() {
        return null;
    }

    public String getNetworkName() {
        return "";
    }

    public String getNetworkSDKClass() {
        return "";
    }

    public String getNetworkVersion() {
        return "";
    }

    public List getPermissionStatus() {
        return null;
    }

    public Map<String, Boolean> getPluginClassStatus() {
        return null;
    }

    public List getProviderStatus() {
        return null;
    }

    public List getResourceStatus() {
        return null;
    }

    public List getServiceStatus() {
        return null;
    }

    public abstract void initSDK(Context context, Map<String, Object> map, MediationInitCallback mediationInitCallback);

    public boolean setUserDataConsent(Context context, boolean z, boolean z2) {
        return false;
    }

    protected final void runOnThreadPool(Runnable runnable) {
        m.a();
        m.b(runnable);
    }

    protected final void runOnMainThread(Runnable runnable) {
        m.a().a(runnable);
    }

    protected final void checkToSaveInitData(String str, Map<String, Object> map, String... strArr) {
        m.a().a(str, map, strArr);
    }

    public static String getStringFromMap(Map<String, Object> map, String str) {
        return getStringFromMap(map, str, "");
    }

    public static String getStringFromMap(Map<String, Object> map, String str, String str2) {
        return (String) getValueFromMap(map, str, str2);
    }

    public static int getIntFromMap(Map<String, Object> map, String str) {
        return getIntFromMap(map, str, 0);
    }

    public static int getIntFromMap(Map<String, Object> map, String str, int i) {
        return ((Integer) getValueFromMap(map, str, Integer.valueOf(i))).intValue();
    }

    public static long getLongFromMap(Map<String, Object> map, String str) {
        return getLongFromMap(map, str, 0L);
    }

    public static long getLongFromMap(Map<String, Object> map, String str, long j) {
        return ((Long) getValueFromMap(map, str, Long.valueOf(j))).longValue();
    }

    public static double getDoubleFromMap(Map<String, Object> map, String str) {
        return getDoubleFromMap(map, str, 0.0d);
    }

    public static double getDoubleFromMap(Map<String, Object> map, String str, double d) {
        return ((Double) getValueFromMap(map, str, Double.valueOf(d))).doubleValue();
    }

    public static boolean getBooleanFromMap(Map<String, Object> map, String str) {
        return getBooleanFromMap(map, str, false);
    }

    public static boolean getBooleanFromMap(Map<String, Object> map, String str, boolean z) {
        return ((Boolean) getValueFromMap(map, str, Boolean.valueOf(z))).booleanValue();
    }

    private static <T> T getValueFromMap(Map<String, Object> map, String str, T t) {
        Object obj;
        Object obj2;
        try {
            if (TextUtils.isEmpty(str) || map == null || map.size() <= 0 || (obj = map.get(str)) == null) {
                return t;
            }
            String str2 = (T) obj.toString();
            if (t instanceof String) {
                obj2 = str2;
            } else if (t instanceof Integer) {
                obj2 = (T) Integer.valueOf(Integer.parseInt(str2));
            } else if (t instanceof Long) {
                obj2 = (T) Long.valueOf(Long.parseLong(str2));
            } else if (t instanceof Double) {
                obj2 = (T) Double.valueOf(Double.parseDouble(str2));
            } else if (t instanceof Float) {
                obj2 = (T) Float.valueOf(Float.parseFloat(str2));
            } else {
                obj2 = t instanceof Boolean ? (T) Boolean.valueOf(Boolean.parseBoolean(str2)) : t;
            }
            if (TYSDK.isNetworkLogDebug()) {
                Log.d("TYInitMediation", "key = " + str + "getValueFromMap() >>> result = " + obj2 + " defaultValue = " + t);
            }
            return (T) obj2;
        } catch (Exception e) {
            if (TYSDK.isNetworkLogDebug()) {
                Log.e("TYInitMediation", "getValueFromMap() >>> errorMsg = " + e.getMessage());
            }
            return t;
        }
    }
}
