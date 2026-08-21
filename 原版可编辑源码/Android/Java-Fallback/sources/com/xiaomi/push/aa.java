package com.xiaomi.push;

public class aa {
    private static final java.util.HashMap<java.lang.String, java.lang.String> a = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.push.aa.a = r0
            java.lang.String r1 = "FFD8FF"
            java.lang.String r2 = "jpg"
            r0.put(r1, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.xiaomi.push.aa.a
            java.lang.String r1 = "89504E47"
            java.lang.String r2 = "png"
            r0.put(r1, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.xiaomi.push.aa.a
            java.lang.String r1 = "gif"
            java.lang.String r2 = "47494638"
            r0.put(r2, r1)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.xiaomi.push.aa.a
            java.lang.String r2 = "474946"
            r0.put(r2, r1)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.xiaomi.push.aa.a
            java.lang.String r1 = "424D"
            java.lang.String r2 = "bmp"
            r0.put(r1, r2)
            return
    }

    public static long a(java.io.File r5) {
            r0 = 0
            java.io.File[] r5 = r5.listFiles()     // Catch: java.lang.Exception -> L23
            r2 = 0
        L7:
            int r3 = r5.length     // Catch: java.lang.Exception -> L23
            if (r2 >= r3) goto L27
            r3 = r5[r2]     // Catch: java.lang.Exception -> L23
            boolean r3 = r3.isDirectory()     // Catch: java.lang.Exception -> L23
            if (r3 == 0) goto L19
            r3 = r5[r2]     // Catch: java.lang.Exception -> L23
            long r3 = a(r3)     // Catch: java.lang.Exception -> L23
            goto L1f
        L19:
            r3 = r5[r2]     // Catch: java.lang.Exception -> L23
            long r3 = r3.length()     // Catch: java.lang.Exception -> L23
        L1f:
            long r0 = r0 + r3
            int r2 = r2 + 1
            goto L7
        L23:
            r5 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r5)
        L27:
            return r0
    }
}
