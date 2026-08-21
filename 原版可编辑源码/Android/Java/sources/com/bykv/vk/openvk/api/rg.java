package com.bykv.vk.openvk.api;

import android.util.Log;

public class rg {
    private static int df = 4;
    private static boolean rg;

    public static void rg(int i) {
        df = i;
    }

    public static void rg() {
        rg = true;
        rg(3);
    }

    public static void rg(String str, String str2) {
        if (rg && str2 != null && df <= 2) {
            Log.v(str, str2);
        }
    }

    public static void df(String str, String str2) {
        if (rg && str2 != null && df <= 3) {
            Log.d(str, str2);
        }
    }

    public static void q(String str, String str2) {
        if (rg && str2 != null && df <= 4) {
            Log.i(str, str2);
        }
    }

    public static void rg(String str) {
        if (rg) {
            pt("TTLogger", str);
        }
    }

    public static void pt(String str, String str2) {
        if (rg && str2 != null && df <= 5) {
            Log.w(str, str2);
        }
    }

    public static void rg(String str, String str2, Throwable th) {
        if (rg) {
            if (!(str2 == null && th == null) && df <= 5) {
                Log.w(str, str2, th);
            }
        }
    }

    public static void rg(String str, Object... objArr) {
        if (rg && objArr != null && df <= 5) {
            Log.v(str, rg(objArr));
        }
    }

    public static void pp(String str, String str2) {
        if (rg && str2 != null && df <= 6) {
            Log.e(str, str2);
        }
    }

    public static void df(String str, String str2, Throwable th) {
        if (rg) {
            if (!(str2 == null && th == null) && df <= 6) {
                Log.e(str, str2, th);
            }
        }
    }

    private static String rg(Object... objArr) {
        if (objArr == null || objArr.length == 0) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        for (Object obj : objArr) {
            if (obj != null) {
                sb.append(obj.toString());
            } else {
                sb.append(" null ");
            }
            sb.append(" ");
        }
        return sb.toString();
    }
}
