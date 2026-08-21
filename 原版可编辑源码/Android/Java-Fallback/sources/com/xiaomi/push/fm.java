package com.xiaomi.push;

class fm {
    private static final boolean a = false;

    static {
            java.lang.String r0 = "BCompressed"
            r1 = 3
            boolean r0 = android.util.Log.isLoggable(r0, r1)
            com.xiaomi.push.fm.a = r0
            return
    }

    static byte[] a(com.xiaomi.push.fl r4, byte[] r5) {
            java.lang.String r0 = "BCompressed"
            byte[] r1 = com.xiaomi.push.fp.a.a(r5)     // Catch: java.lang.Exception -> L3b
            boolean r2 = com.xiaomi.push.fm.a     // Catch: java.lang.Exception -> L3b
            if (r2 == 0) goto L3a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3b
            r2.<init>()     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = "decompress "
            r2.append(r3)     // Catch: java.lang.Exception -> L3b
            int r3 = r5.length     // Catch: java.lang.Exception -> L3b
            r2.append(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = " to "
            r2.append(r3)     // Catch: java.lang.Exception -> L3b
            int r3 = r1.length     // Catch: java.lang.Exception -> L3b
            r2.append(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = " for "
            r2.append(r3)     // Catch: java.lang.Exception -> L3b
            r2.append(r4)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L3b
            com.xiaomi.channel.commonutils.logger.b.a(r0, r2)     // Catch: java.lang.Exception -> L3b
            int r4 = r4.a     // Catch: java.lang.Exception -> L3b
            r2 = 1
            if (r4 != r2) goto L3a
            java.lang.String r4 = "decompress not support upStream"
            com.xiaomi.channel.commonutils.logger.b.a(r0, r4)     // Catch: java.lang.Exception -> L3b
        L3a:
            return r1
        L3b:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "decompress error "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0, r4)
            return r5
    }
}
