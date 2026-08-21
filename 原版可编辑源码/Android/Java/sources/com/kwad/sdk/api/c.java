package com.kwad.sdk.api;

import com.kwad.sdk.api.core.IKsAdSDK;

public final class c {
    private static IKsAdSDK aia;

    public static void a(IKsAdSDK iKsAdSDK) {
        aia = iKsAdSDK;
    }

    public static String bU(String str) {
        return (String) c("TRANSFORM_API_HOST", str);
    }

    public static <T> T c(String str, Object... objArr) {
        try {
            T t = (T) aia.dM(str, objArr);
            if (t != null) {
                return t;
            }
            return null;
        } catch (Throwable unused) {
            return null;
        }
    }

    public static IKsAdSDK yk() {
        return aia;
    }

    public static boolean yl() {
        Boolean bool = (Boolean) c("enableDynamic", new Object[0]);
        return (bool == null || bool.booleanValue()) ? false : true;
    }

    public static int ym() {
        Integer num = (Integer) c("getAutoRevertTime", new Object[0]);
        if (num != null) {
            return num.intValue();
        }
        return -1;
    }
}
