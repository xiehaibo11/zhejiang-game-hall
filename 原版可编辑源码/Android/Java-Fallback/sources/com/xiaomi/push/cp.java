package com.xiaomi.push;

public class cp {
    public static long a(java.lang.String r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r3 = 21
            if (r0 < r3) goto L1f
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L1b
            r0.<init>(r4)     // Catch: java.lang.Exception -> L1b
            boolean r0 = r0.exists()     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L1f
            android.system.StructStat r4 = android.system.Os.stat(r4)     // Catch: java.lang.Exception -> L1b
            long r0 = r4.st_size     // Catch: java.lang.Exception -> L1b
            r1 = r0
            goto L1f
        L1b:
            r4 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r4)
        L1f:
            return r1
    }
}
