package com.xiaomi.push;

public class r {
    private static volatile com.xiaomi.push.r a;
    private android.content.Context a;
    private android.os.Handler a;
    private java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>> a;

    private r(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r1.a = r2
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r2.<init>(r0)
            r1.a = r2
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            r1.a = r2
            return
    }

    static android.content.Context a(com.xiaomi.push.r r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    public static com.xiaomi.push.r a(android.content.Context r2) {
            com.xiaomi.push.r r0 = com.xiaomi.push.r.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.r> r0 = com.xiaomi.push.r.class
            monitor-enter(r0)
            com.xiaomi.push.r r1 = com.xiaomi.push.r.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.r r1 = new com.xiaomi.push.r     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.r.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.r r2 = com.xiaomi.push.r.a
            return r2
    }

    private synchronized java.lang.String a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>> r0 = r1.a     // Catch: java.lang.Throwable -> L30
            if (r0 == 0) goto L2c
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L30
            if (r0 != 0) goto L2c
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L30
            if (r0 == 0) goto L12
            goto L2c
        L12:
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>> r0 = r1.a     // Catch: java.lang.Throwable -> L28
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L28
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L28
            if (r2 == 0) goto L24
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L28
            monitor-exit(r1)
            return r2
        L24:
            java.lang.String r2 = ""
            monitor-exit(r1)
            return r2
        L28:
            java.lang.String r2 = ""
            monitor-exit(r1)
            return r2
        L2c:
            java.lang.String r2 = ""
            monitor-exit(r1)
            return r2
        L30:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    private synchronized void b(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>> r0 = r1.a     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto Lc
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L25
            r0.<init>()     // Catch: java.lang.Throwable -> L25
            r1.a = r0     // Catch: java.lang.Throwable -> L25
        Lc:
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>> r0 = r1.a     // Catch: java.lang.Throwable -> L25
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L25
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto L1b
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L25
            r0.<init>()     // Catch: java.lang.Throwable -> L25
        L1b:
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L25
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>> r3 = r1.a     // Catch: java.lang.Throwable -> L25
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L25
            monitor-exit(r1)
            return
        L25:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized java.lang.String a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            monitor-enter(r2)
            java.lang.String r0 = r2.a(r3, r4)     // Catch: java.lang.Throwable -> L1a
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto Ld
            monitor-exit(r2)
            return r0
        Ld:
            android.content.Context r0 = r2.a     // Catch: java.lang.Throwable -> L1a
            r1 = 4
            android.content.SharedPreferences r3 = r0.getSharedPreferences(r3, r1)     // Catch: java.lang.Throwable -> L1a
            java.lang.String r3 = r3.getString(r4, r5)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r2)
            return r3
        L1a:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public synchronized void a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            monitor-enter(r2)
            r2.b(r3, r4, r5)     // Catch: java.lang.Throwable -> L10
            android.os.Handler r0 = r2.a     // Catch: java.lang.Throwable -> L10
            com.xiaomi.push.s r1 = new com.xiaomi.push.s     // Catch: java.lang.Throwable -> L10
            r1.<init>(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L10
            r0.post(r1)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r2)
            return
        L10:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }
}
