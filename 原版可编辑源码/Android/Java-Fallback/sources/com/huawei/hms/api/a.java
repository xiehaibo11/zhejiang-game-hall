package com.huawei.hms.api;

class a {
    static final com.huawei.hms.api.a b = null;
    private static final java.lang.Object c = null;
    java.util.List<android.app.Activity> a;

    static {
            com.huawei.hms.api.a r0 = new com.huawei.hms.api.a
            r0.<init>()
            com.huawei.hms.api.a.b = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.api.a.c = r0
            return
    }

    a() {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 1
            r0.<init>(r1)
            r2.a = r0
            return
    }

    void a(android.app.Activity r5) {
            r4 = this;
            java.lang.Object r0 = com.huawei.hms.api.a.c
            monitor-enter(r0)
            java.util.List<android.app.Activity> r1 = r4.a     // Catch: java.lang.Throwable -> L2a
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2a
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2a
            if (r2 == 0) goto L23
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2a
            android.app.Activity r2 = (android.app.Activity) r2     // Catch: java.lang.Throwable -> L2a
            if (r2 == 0) goto L9
            if (r2 == r5) goto L9
            boolean r3 = r2.isFinishing()     // Catch: java.lang.Throwable -> L2a
            if (r3 != 0) goto L9
            r2.finish()     // Catch: java.lang.Throwable -> L2a
            goto L9
        L23:
            java.util.List<android.app.Activity> r1 = r4.a     // Catch: java.lang.Throwable -> L2a
            r1.add(r5)     // Catch: java.lang.Throwable -> L2a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2a
            return
        L2a:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2a
            throw r5
    }

    void b(android.app.Activity r3) {
            r2 = this;
            java.lang.Object r0 = com.huawei.hms.api.a.c
            monitor-enter(r0)
            java.util.List<android.app.Activity> r1 = r2.a     // Catch: java.lang.Throwable -> La
            r1.remove(r3)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r3
    }
}
