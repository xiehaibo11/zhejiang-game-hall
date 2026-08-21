package com.alipay.sdk.m.n0;

public class c {
    public static com.alipay.sdk.m.n0.b a;
    public static final java.lang.Object b = null;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.alipay.sdk.m.n0.c.b = r0
            return
    }

    public static long a(com.alipay.sdk.m.n0.b r3) {
            if (r3 == 0) goto L4c
            r0 = 5
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.c()
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = r3.d()
            r2 = 1
            r0[r2] = r1
            long r1 = r3.a()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 2
            r0[r2] = r1
            java.lang.String r1 = r3.e()
            r2 = 3
            r0[r2] = r1
            java.lang.String r3 = r3.b()
            r1 = 4
            r0[r1] = r3
            java.lang.String r3 = "%s%s%s%s%s"
            java.lang.String r3 = java.lang.String.format(r3, r0)
            boolean r0 = com.alipay.sdk.m.l0.f.a(r3)
            if (r0 != 0) goto L4c
            java.util.zip.Adler32 r0 = new java.util.zip.Adler32
            r0.<init>()
            r0.reset()
            byte[] r3 = r3.getBytes()
            r0.update(r3)
            long r0 = r0.getValue()
            return r0
        L4c:
            r0 = 0
            return r0
    }

    public static com.alipay.sdk.m.n0.b a(android.content.Context r6) {
            if (r6 == 0) goto L54
            java.lang.Object r0 = com.alipay.sdk.m.n0.c.b
            monitor-enter(r0)
            com.alipay.sdk.m.n0.d r1 = com.alipay.sdk.m.n0.d.a(r6)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = r1.b()     // Catch: java.lang.Throwable -> L51
            boolean r2 = com.alipay.sdk.m.l0.f.a(r1)     // Catch: java.lang.Throwable -> L51
            if (r2 != 0) goto L4f
            java.lang.String r2 = "\n"
            boolean r2 = r1.endsWith(r2)     // Catch: java.lang.Throwable -> L51
            if (r2 == 0) goto L26
            r2 = 0
            int r3 = r1.length()     // Catch: java.lang.Throwable -> L51
            int r3 = r3 + (-1)
            java.lang.String r1 = r1.substring(r2, r3)     // Catch: java.lang.Throwable -> L51
        L26:
            com.alipay.sdk.m.n0.b r2 = new com.alipay.sdk.m.n0.b     // Catch: java.lang.Throwable -> L51
            r2.<init>()     // Catch: java.lang.Throwable -> L51
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L51
            java.lang.String r5 = com.alipay.sdk.m.l0.d.a(r6)     // Catch: java.lang.Throwable -> L51
            java.lang.String r6 = com.alipay.sdk.m.l0.d.b(r6)     // Catch: java.lang.Throwable -> L51
            r2.c(r5)     // Catch: java.lang.Throwable -> L51
            r2.a(r5)     // Catch: java.lang.Throwable -> L51
            r2.b(r3)     // Catch: java.lang.Throwable -> L51
            r2.b(r6)     // Catch: java.lang.Throwable -> L51
            r2.d(r1)     // Catch: java.lang.Throwable -> L51
            long r3 = a(r2)     // Catch: java.lang.Throwable -> L51
            r2.a(r3)     // Catch: java.lang.Throwable -> L51
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            return r2
        L4f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            goto L54
        L51:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            throw r6
        L54:
            r6 = 0
            return r6
    }

    public static synchronized com.alipay.sdk.m.n0.b b(android.content.Context r2) {
            java.lang.Class<com.alipay.sdk.m.n0.c> r0 = com.alipay.sdk.m.n0.c.class
            monitor-enter(r0)
            com.alipay.sdk.m.n0.b r1 = com.alipay.sdk.m.n0.c.a     // Catch: java.lang.Throwable -> L16
            if (r1 == 0) goto L9
            monitor-exit(r0)
            return r1
        L9:
            if (r2 == 0) goto L13
            com.alipay.sdk.m.n0.b r2 = a(r2)     // Catch: java.lang.Throwable -> L16
            com.alipay.sdk.m.n0.c.a = r2     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)
            return r2
        L13:
            r2 = 0
            monitor-exit(r0)
            return r2
        L16:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }
}
