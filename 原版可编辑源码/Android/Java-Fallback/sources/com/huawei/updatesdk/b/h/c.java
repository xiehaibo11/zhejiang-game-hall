package com.huawei.updatesdk.b.h;

public final class c {
    private static java.lang.String a;
    private static android.content.res.Resources b;

    public static int a(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "id"
            int r1 = a(r1, r2, r0)
            return r1
    }

    private static int a(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            android.content.res.Resources r0 = com.huawei.updatesdk.b.h.c.b
            if (r0 != 0) goto La
            android.content.res.Resources r0 = r1.getResources()
            com.huawei.updatesdk.b.h.c.b = r0
        La:
            android.content.res.Resources r0 = com.huawei.updatesdk.b.h.c.b
            java.lang.String r1 = a(r1)
            int r1 = r0.getIdentifier(r2, r3, r1)
            return r1
    }

    private static java.lang.String a(android.content.Context r1) {
            java.lang.String r0 = com.huawei.updatesdk.b.h.c.a
            if (r0 != 0) goto La
            java.lang.String r1 = r1.getPackageName()
            com.huawei.updatesdk.b.h.c.a = r1
        La:
            java.lang.String r1 = com.huawei.updatesdk.b.h.c.a
            return r1
    }

    public static int b(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "layout"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static int c(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "string"
            int r1 = a(r1, r2, r0)
            return r1
    }

    public static java.lang.String d(android.content.Context r2, java.lang.String r3) {
            android.content.res.Resources r0 = r2.getResources()     // Catch: android.content.res.Resources.NotFoundException -> Lf
            java.lang.String r1 = "string"
            int r2 = a(r2, r3, r1)     // Catch: android.content.res.Resources.NotFoundException -> Lf
            java.lang.String r2 = r0.getString(r2)     // Catch: android.content.res.Resources.NotFoundException -> Lf
            return r2
        Lf:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "recource get error name: "
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "UpdateSDK"
            com.huawei.updatesdk.a.a.a.a(r3, r2)
            java.lang.String r2 = ""
            return r2
    }
}
