package com.iab.omid.library.mmadbridge.utils;

public final class b {
    public static java.lang.String a() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = android.os.Build.MANUFACTURER
            r0.append(r1)
            java.lang.String r1 = "; "
            r0.append(r1)
            java.lang.String r1 = android.os.Build.MODEL
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String b() {
            java.lang.String r0 = "Android"
            return r0
    }

    public static java.lang.String c() {
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r0 = java.lang.Integer.toString(r0)
            return r0
    }

    public static org.json.JSONObject d() {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = a()
            java.lang.String r2 = "deviceType"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r2, r1)
            java.lang.String r1 = c()
            java.lang.String r2 = "osVersion"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r2, r1)
            java.lang.String r1 = b()
            java.lang.String r2 = "os"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r2, r1)
            return r0
    }
}
