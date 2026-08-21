package com.vivo.push.cache;

public final class b {
    private static volatile com.vivo.push.cache.b a;
    private com.vivo.push.cache.d b;

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized com.vivo.push.cache.b a() {
            java.lang.Class<com.vivo.push.cache.b> r0 = com.vivo.push.cache.b.class
            monitor-enter(r0)
            com.vivo.push.cache.b r1 = com.vivo.push.cache.b.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.vivo.push.cache.b r1 = new com.vivo.push.cache.b     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.vivo.push.cache.b.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.vivo.push.cache.b r1 = com.vivo.push.cache.b.a     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final com.vivo.push.cache.d a(android.content.Context r10) {
            r9 = this;
            java.lang.String r0 = "ConfigManagerFactory"
            com.vivo.push.cache.d r1 = r9.b
            if (r1 == 0) goto L7
            return r1
        L7:
            r1 = 0
            java.lang.String r2 = "com.vivo.push.cache.ClientConfigManagerImpl"
            java.lang.Class r3 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L32
            java.lang.String r4 = "getInstance"
            r5 = 1
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> L32
            java.lang.Class<android.content.Context> r7 = android.content.Context.class
            r8 = 0
            r6[r8] = r7     // Catch: java.lang.Exception -> L32
            java.lang.reflect.Method r3 = r3.getMethod(r4, r6)     // Catch: java.lang.Exception -> L32
            java.lang.String r4 = "createConfig success is "
            java.lang.String r2 = r4.concat(r2)     // Catch: java.lang.Exception -> L32
            com.vivo.push.util.p.d(r0, r2)     // Catch: java.lang.Exception -> L32
            java.lang.Object[] r2 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L32
            r2[r8] = r10     // Catch: java.lang.Exception -> L32
            java.lang.Object r10 = r3.invoke(r1, r2)     // Catch: java.lang.Exception -> L32
            com.vivo.push.cache.d r10 = (com.vivo.push.cache.d) r10     // Catch: java.lang.Exception -> L32
            r9.b = r10     // Catch: java.lang.Exception -> L32
            return r10
        L32:
            r10 = move-exception
            r10.printStackTrace()
            java.lang.String r2 = "createConfig error"
            com.vivo.push.util.p.b(r0, r2, r10)
            return r1
    }
}
