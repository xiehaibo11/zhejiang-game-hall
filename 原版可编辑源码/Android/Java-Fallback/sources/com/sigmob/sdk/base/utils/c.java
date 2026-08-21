package com.sigmob.sdk.base.utils;

public final class c {
    private static java.lang.String a = "com.wind.Settings";

    static {
            return
    }

    private c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(java.lang.String r3, int r4) {
            android.content.Context r0 = com.sigmob.sdk.b.b()
            java.lang.String r1 = com.sigmob.sdk.base.utils.c.a
            r2 = 4
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            int r3 = r0.getInt(r3, r4)
            return r3
    }

    public static android.content.SharedPreferences a() {
            android.content.Context r0 = com.sigmob.sdk.b.b()
            java.lang.String r1 = com.sigmob.sdk.base.utils.c.a
            r2 = 4
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            return r0
    }

    public static android.content.SharedPreferences a(java.lang.String r2) {
            android.content.Context r0 = com.sigmob.sdk.b.b()
            r1 = 4
            android.content.SharedPreferences r2 = r0.getSharedPreferences(r2, r1)
            return r2
    }

    public static java.lang.String a(java.lang.String r3, java.lang.String r4) {
            android.content.Context r0 = com.sigmob.sdk.b.b()
            java.lang.String r1 = com.sigmob.sdk.base.utils.c.a
            r2 = 4
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            java.lang.String r3 = r0.getString(r3, r4)
            return r3
    }
}
