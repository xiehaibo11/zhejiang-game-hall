package com.qihoo360.replugin;

public class g {
    private static com.qihoo360.replugin.g a;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, android.os.IBinder> b;

    public g() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.b = r0
            return
    }

    public static com.qihoo360.replugin.g a() {
            com.qihoo360.replugin.g r0 = com.qihoo360.replugin.g.a
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.Class<com.qihoo360.replugin.g> r0 = com.qihoo360.replugin.g.class
            monitor-enter(r0)
            com.qihoo360.replugin.g r1 = com.qihoo360.replugin.g.a     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto L13
            com.qihoo360.replugin.g r1 = new com.qihoo360.replugin.g     // Catch: java.lang.Throwable -> L17
            r1.<init>()     // Catch: java.lang.Throwable -> L17
            com.qihoo360.replugin.g.a = r1     // Catch: java.lang.Throwable -> L17
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            com.qihoo360.replugin.g r0 = com.qihoo360.replugin.g.a
            return r0
        L17:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r1
    }

    public android.os.IBinder a(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L26
            java.util.concurrent.ConcurrentHashMap<java.lang.String, android.os.IBinder> r0 = r3.b
            java.lang.Object r0 = r0.get(r4)
            android.os.IBinder r0 = (android.os.IBinder) r0
            r1 = 0
            if (r0 != 0) goto L12
            return r1
        L12:
            boolean r2 = r0.isBinderAlive()
            if (r2 == 0) goto L20
            boolean r2 = r0.pingBinder()
            if (r2 != 0) goto L1f
            goto L20
        L1f:
            return r0
        L20:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, android.os.IBinder> r0 = r3.b
            r0.remove(r4)
            return r1
        L26:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "service name can not value null"
            r4.<init>(r0)
            throw r4
    }

    public void a(java.lang.String r2, android.os.IBinder r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, android.os.IBinder> r0 = r1.b
            r0.put(r2, r3)
            return
    }
}
