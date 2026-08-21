package com.kwad.sdk.api.loader;

import android.content.Context;
import android.text.TextUtils;

final class g {
    static String air = "autoRevert";

    static boolean F(String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        if (TextUtils.isEmpty(str) && TextUtils.isEmpty(str2)) {
            return false;
        }
        if (!TextUtils.isEmpty(str) && TextUtils.isEmpty(str2)) {
            return true;
        }
        String[] strArrSplit = str.split("\\.");
        String[] strArrSplit2 = str2.split("\\.");
        for (int i = 0; i < strArrSplit.length && i < strArrSplit2.length; i++) {
            try {
                int i2 = Integer.parseInt(strArrSplit[i]) - Integer.parseInt(strArrSplit2[i]);
                if (i2 > 0) {
                    return true;
                }
                if (i2 < 0) {
                    return false;
                }
            } catch (NumberFormatException unused) {
                return false;
            }
        }
        return strArrSplit.length > strArrSplit2.length;
    }

    static String aA(Context context) {
        return getVersion(context, "apiversion");
    }

    public static String ay(Context context) {
        return getVersion(context, "curversion");
    }

    public static String az(Context context) {
        return getVersion(context, "newversion");
    }

    private static void b(Context context, String str, String str2) {
        t.c(context, str, str2);
    }

    private static String getVersion(Context context, String str) {
        return t.d(context, str, "");
    }

    public static void k(Context context, String str) {
        b(context, "curversion", str);
    }

    public static void l(Context context, String str) {
        b(context, "newversion", str);
    }

    static void m(Context context, String str) {
        b(context, "apiversion", str);
    }
}
