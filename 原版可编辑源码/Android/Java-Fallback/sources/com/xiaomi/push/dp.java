package com.xiaomi.push;

public class dp {
    private static void a(byte[] r2) {
            int r0 = r2.length
            r1 = 2
            if (r0 < r1) goto Le
            r0 = 0
            r1 = 99
            r2[r0] = r1
            r0 = 1
            r1 = 100
            r2[r0] = r1
        Le:
            return
    }

    public static boolean a(android.content.Context r3, java.lang.String r4, long r5) {
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r3)
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.aY
            int r1 = r1.a()
            r2 = 0
            boolean r0 = r0.a(r1, r2)
            if (r0 == 0) goto L26
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 29
            if (r0 < r1) goto L1f
            android.content.pm.ApplicationInfo r0 = r3.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            if (r0 >= r1) goto L26
        L1f:
            boolean r3 = com.xiaomi.push.aj.a(r3, r4, r5)
            if (r3 != 0) goto L26
            r2 = 1
        L26:
            return r2
    }

    public static byte[] a(java.lang.String r0, byte[] r1) {
            byte[] r0 = com.xiaomi.push.bm.a(r0)
            a(r0)     // Catch: java.lang.Exception -> Lc
            byte[] r0 = com.xiaomi.push.i.a(r0, r1)     // Catch: java.lang.Exception -> Lc
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public static byte[] b(java.lang.String r0, byte[] r1) {
            byte[] r0 = com.xiaomi.push.bm.a(r0)
            a(r0)     // Catch: java.lang.Exception -> Lc
            byte[] r0 = com.xiaomi.push.i.b(r0, r1)     // Catch: java.lang.Exception -> Lc
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }
}
