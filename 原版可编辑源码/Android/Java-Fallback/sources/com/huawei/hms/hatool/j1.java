package com.huawei.hms.hatool;

public abstract class j1 {
    public static com.huawei.hms.hatool.h1 a;

    public static synchronized com.huawei.hms.hatool.h1 a() {
            java.lang.Class<com.huawei.hms.hatool.j1> r0 = com.huawei.hms.hatool.j1.class
            monitor-enter(r0)
            com.huawei.hms.hatool.h1 r1 = com.huawei.hms.hatool.j1.a     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L11
            com.huawei.hms.hatool.m1 r1 = com.huawei.hms.hatool.m1.c()     // Catch: java.lang.Throwable -> L15
            com.huawei.hms.hatool.h1 r1 = r1.b()     // Catch: java.lang.Throwable -> L15
            com.huawei.hms.hatool.j1.a = r1     // Catch: java.lang.Throwable -> L15
        L11:
            com.huawei.hms.hatool.h1 r1 = com.huawei.hms.hatool.j1.a     // Catch: java.lang.Throwable -> L15
            monitor-exit(r0)
            return r1
        L15:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void a(int r1, java.lang.String r2, java.util.LinkedHashMap<java.lang.String, java.lang.String> r3) {
            com.huawei.hms.hatool.h1 r0 = a()
            if (r0 == 0) goto L32
            com.huawei.hms.hatool.u0 r0 = com.huawei.hms.hatool.u0.b()
            boolean r0 = r0.a()
            if (r0 == 0) goto L32
            r0 = 1
            if (r1 == r0) goto L2d
            if (r1 != 0) goto L16
            goto L2d
        L16:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Data type no longer collects range.type: "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "hmsSdk"
            com.huawei.hms.hatool.y.d(r2, r1)
            goto L32
        L2d:
            com.huawei.hms.hatool.h1 r0 = com.huawei.hms.hatool.j1.a
            r0.a(r1, r2, r3)
        L32:
            return
    }

    @java.lang.Deprecated
    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            com.huawei.hms.hatool.h1 r0 = a()
            if (r0 == 0) goto Lb
            com.huawei.hms.hatool.h1 r0 = com.huawei.hms.hatool.j1.a
            r0.a(r1, r2, r3)
        Lb:
            return
    }

    public static boolean b() {
            com.huawei.hms.hatool.m1 r0 = com.huawei.hms.hatool.m1.c()
            boolean r0 = r0.a()
            return r0
    }

    public static void c() {
            com.huawei.hms.hatool.h1 r0 = a()
            if (r0 == 0) goto L16
            com.huawei.hms.hatool.u0 r0 = com.huawei.hms.hatool.u0.b()
            boolean r0 = r0.a()
            if (r0 == 0) goto L16
            com.huawei.hms.hatool.h1 r0 = com.huawei.hms.hatool.j1.a
            r1 = -1
            r0.a(r1)
        L16:
            return
    }
}
