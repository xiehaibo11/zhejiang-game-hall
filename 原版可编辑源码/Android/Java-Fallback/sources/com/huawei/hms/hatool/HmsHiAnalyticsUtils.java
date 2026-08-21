package com.huawei.hms.hatool;

public class HmsHiAnalyticsUtils {
    public HmsHiAnalyticsUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void enableLog() {
            com.huawei.hms.hatool.l1.a()
            return
    }

    public static boolean getInitFlag() {
            boolean r0 = com.huawei.hms.hatool.j1.b()
            return r0
    }

    public static void init(android.content.Context r1, boolean r2, boolean r3, boolean r4, java.lang.String r5, java.lang.String r6) {
            com.huawei.hms.hatool.k1 r0 = new com.huawei.hms.hatool.k1
            r0.<init>(r1)
            com.huawei.hms.hatool.k1 r1 = r0.a(r2)
            com.huawei.hms.hatool.k1 r1 = r1.c(r3)
            com.huawei.hms.hatool.k1 r1 = r1.b(r4)
            r2 = 0
            com.huawei.hms.hatool.k1 r1 = r1.a(r2, r5)
            r2 = 1
            com.huawei.hms.hatool.k1 r1 = r1.a(r2, r5)
            com.huawei.hms.hatool.k1 r1 = r1.a(r6)
            r1.a()
            return
    }

    public static void onEvent(int r0, java.lang.String r1, java.util.LinkedHashMap<java.lang.String, java.lang.String> r2) {
            com.huawei.hms.hatool.j1.a(r0, r1, r2)
            return
    }

    public static void onEvent(android.content.Context r0, java.lang.String r1, java.lang.String r2) {
            com.huawei.hms.hatool.j1.a(r0, r1, r2)
            return
    }

    public static void onReport() {
            com.huawei.hms.hatool.j1.c()
            return
    }
}
