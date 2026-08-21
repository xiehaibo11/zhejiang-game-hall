package com.kwad.sdk.utils;

import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
public final class bd {
    private static Class<?> aJB;

    private static String fK(String str) {
        try {
            return com.kwad.sdk.crash.utils.h.c(Runtime.getRuntime().exec("getprop " + str).getInputStream());
        } catch (IOException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return null;
        }
    }

    public static String get(String str) {
        Object objJ = j(MonitorConstants.CONNECT_TYPE_GET, str);
        return objJ instanceof String ? (String) objJ : fK(str);
    }

    private static Object j(String str, Object... objArr) {
        try {
            if (aJB == null) {
                aJB = Class.forName("android.os.SystemProperties");
            }
            return s.c(aJB, str, objArr);
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTrace(th);
            return null;
        }
    }
}
