package com.kuaishou.weapon.p0;

public class g {
    public static final java.lang.String a = "android.permission.INTERNET";
    public static final java.lang.String b = "android.permission.ACCESS_NETWORK_STATE";
    public static final java.lang.String c = "android.permission.READ_PHONE_STATE";
    public static final java.lang.String d = "android.permission.ACCESS_WIFI_STATE";
    public static final java.lang.String e = "android.permission.GET_TASKS";
    public static final java.lang.String f = "android.permission.GET_ACCOUNTS";
    public static final java.lang.String g = "android.permission.ACCESS_FINE_LOCATION";
    public static final java.lang.String h = "android.permission.ACCESS_COARSE_LOCATION";
    public static final java.lang.String i = "android.permission.READ_EXTERNAL_STORAGE";
    public static final java.lang.String j = "android.permission.WRITE_EXTERNAL_STORAGE";
    public static final java.lang.String k = "android.permission.BIND_ACCESSIBILITY_SERVICE";

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(android.content.Context r2, java.lang.String r3) {
            if (r2 == 0) goto L12
            if (r3 != 0) goto L5
            goto L12
        L5:
            int r0 = android.os.Process.myPid()
            int r1 = android.os.Process.myUid()
            int r2 = r2.checkPermission(r3, r0, r1)
            return r2
        L12:
            r2 = -1
            return r2
    }

    public static boolean a(android.content.Context r4, java.lang.String[] r5) {
            if (r5 == 0) goto L14
            r0 = 0
            int r1 = r5.length     // Catch: java.lang.Throwable -> L13
            r2 = r0
        L5:
            if (r2 >= r1) goto L14
            r3 = r5[r2]     // Catch: java.lang.Throwable -> L13
            int r3 = a(r4, r3)     // Catch: java.lang.Throwable -> L13
            if (r3 == 0) goto L10
            return r0
        L10:
            int r2 = r2 + 1
            goto L5
        L13:
            return r0
        L14:
            r4 = 1
            return r4
    }
}
