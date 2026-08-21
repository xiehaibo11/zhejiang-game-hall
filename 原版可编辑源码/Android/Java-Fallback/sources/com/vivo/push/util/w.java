package com.vivo.push.util;

public final class w extends com.vivo.push.util.b {
    private static com.vivo.push.util.w b;

    public w() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized com.vivo.push.util.w b() {
            java.lang.Class<com.vivo.push.util.w> r0 = com.vivo.push.util.w.class
            monitor-enter(r0)
            com.vivo.push.util.w r1 = com.vivo.push.util.w.b     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.vivo.push.util.w r1 = new com.vivo.push.util.w     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.vivo.push.util.w.b = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.vivo.push.util.w r1 = com.vivo.push.util.w.b     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static byte[] c(java.lang.String r4) {
            r0 = 0
            java.lang.String r1 = ","
            java.lang.String[] r4 = r4.split(r1)     // Catch: java.lang.Exception -> L22
            int r1 = r4.length     // Catch: java.lang.Exception -> L22
            r2 = 0
            if (r1 <= 0) goto L10
            int r1 = r4.length     // Catch: java.lang.Exception -> L22
            byte[] r0 = new byte[r1]     // Catch: java.lang.Exception -> L22
            int r1 = r4.length     // Catch: java.lang.Exception -> L22
            goto L11
        L10:
            r1 = r2
        L11:
            if (r2 >= r1) goto L3a
            r3 = r4[r2]     // Catch: java.lang.Exception -> L22
            java.lang.String r3 = r3.trim()     // Catch: java.lang.Exception -> L22
            byte r3 = java.lang.Byte.parseByte(r3)     // Catch: java.lang.Exception -> L22
            r0[r2] = r3     // Catch: java.lang.Exception -> L22
            int r2 = r2 + 1
            goto L11
        L22:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "getCodeBytes error:"
            r1.<init>(r2)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "SharePreferenceManager"
            com.vivo.push.util.p.a(r1, r4)
        L3a:
            return r0
    }

    public final synchronized void a(android.content.Context r2) {
            r1 = this;
            monitor-enter(r1)
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> Le
            if (r0 != 0) goto Lc
            r1.a = r2     // Catch: java.lang.Throwable -> Le
            java.lang.String r0 = "com.vivo.push_preferences"
            r1.a(r2, r0)     // Catch: java.lang.Throwable -> Le
        Lc:
            monitor-exit(r1)
            return
        Le:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final byte[] c() {
            r2 = this;
            java.lang.String r0 = "com.vivo.push.secure_cache_iv"
            java.lang.String r1 = ""
            java.lang.String r0 = r2.b(r0, r1)
            byte[] r0 = c(r0)
            if (r0 == 0) goto L11
            int r1 = r0.length
            if (r1 > 0) goto L18
        L11:
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x001a: FILL_ARRAY_DATA , data: [34, 32, 33, 37, 33, 34, 32, 33, 33, 33, 34, 41, 35, 32, 32, 32} // fill-array
        L18:
            return r0
    }

    public final byte[] d() {
            r2 = this;
            java.lang.String r0 = "com.vivo.push.secure_cache_key"
            java.lang.String r1 = ""
            java.lang.String r0 = r2.b(r0, r1)
            byte[] r0 = c(r0)
            if (r0 == 0) goto L11
            int r1 = r0.length
            if (r1 > 0) goto L18
        L11:
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x001a: FILL_ARRAY_DATA , data: [33, 34, 35, 36, 37, 38, 39, 40, 41, 32, 38, 37, 36, 35, 34, 33} // fill-array
        L18:
            return r0
    }
}
