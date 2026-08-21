package com.igexin.push.core.b;

public class a {
    public static java.lang.String a(android.content.Context r2) {
            android.content.SharedPreferences r2 = d(r2)
            java.lang.String r0 = "appId"
            java.lang.String r1 = ""
            java.lang.String r2 = r2.getString(r0, r1)
            return r2
    }

    public static java.lang.String b(android.content.Context r2) {
            android.content.SharedPreferences r2 = d(r2)
            java.lang.String r0 = "appKey"
            java.lang.String r1 = ""
            java.lang.String r2 = r2.getString(r0, r1)
            return r2
    }

    public static java.lang.String c(android.content.Context r2) {
            android.content.SharedPreferences r2 = d(r2)
            java.lang.String r0 = "appSecret"
            java.lang.String r1 = ""
            java.lang.String r2 = r2.getString(r0, r1)
            return r2
    }

    private static android.content.SharedPreferences d(android.content.Context r2) {
            java.lang.String r0 = "ups_gt_appinfo"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            return r2
    }
}
