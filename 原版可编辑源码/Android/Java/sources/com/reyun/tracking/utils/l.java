package com.reyun.tracking.utils;

public class l {
    public static Runnable a(String str, n nVar) {
        return new m(str, nVar);
    }

    public static Runnable a(String str, String str2, int i, n nVar) {
        return new o(str, null, str2, i, nVar);
    }

    public static Runnable a(String str, String str2, String str3, n nVar) {
        return new o(str, str2, str3, nVar);
    }
}
