package com.kuaishou.weapon.p0;

public class n {
    private static volatile com.kuaishou.weapon.p0.n a = null;
    private static int b = 3;
    private static int c = 6;
    private static java.util.concurrent.ThreadPoolExecutor d;



    static {
            return
    }

    private n() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kuaishou.weapon.p0.n a() {
            com.kuaishou.weapon.p0.n r0 = com.kuaishou.weapon.p0.n.a
            if (r0 != 0) goto L3b
            java.lang.Class<com.kuaishou.weapon.p0.n> r0 = com.kuaishou.weapon.p0.n.class
            monitor-enter(r0)
            com.kuaishou.weapon.p0.n r1 = com.kuaishou.weapon.p0.n.a     // Catch: java.lang.Throwable -> L38
            if (r1 != 0) goto L12
            com.kuaishou.weapon.p0.n r1 = new com.kuaishou.weapon.p0.n     // Catch: java.lang.Throwable -> L38
            r1.<init>()     // Catch: java.lang.Throwable -> L38
            com.kuaishou.weapon.p0.n.a = r1     // Catch: java.lang.Throwable -> L38
        L12:
            java.util.concurrent.ThreadPoolExecutor r1 = com.kuaishou.weapon.p0.n.d     // Catch: java.lang.Throwable -> L38
            if (r1 != 0) goto L36
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L38
            int r3 = com.kuaishou.weapon.p0.n.b     // Catch: java.lang.Throwable -> L38
            int r4 = com.kuaishou.weapon.p0.n.c     // Catch: java.lang.Throwable -> L38
            r5 = 60
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L38
            java.util.concurrent.LinkedBlockingQueue r8 = new java.util.concurrent.LinkedBlockingQueue     // Catch: java.lang.Throwable -> L38
            r2 = 10
            r8.<init>(r2)     // Catch: java.lang.Throwable -> L38
            com.kuaishou.weapon.p0.n$1 r9 = new com.kuaishou.weapon.p0.n$1     // Catch: java.lang.Throwable -> L38
            r9.<init>()     // Catch: java.lang.Throwable -> L38
            r2 = r1
            r2.<init>(r3, r4, r5, r7, r8, r9)     // Catch: java.lang.Throwable -> L38
            com.kuaishou.weapon.p0.n.d = r1     // Catch: java.lang.Throwable -> L38
            r2 = 1
            r1.allowCoreThreadTimeOut(r2)     // Catch: java.lang.Throwable -> L38
        L36:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
            goto L3b
        L38:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
            throw r1
        L3b:
            com.kuaishou.weapon.p0.n r0 = com.kuaishou.weapon.p0.n.a
            return r0
    }

    public static com.kuaishou.weapon.p0.n a(int r9, int r10) {
            com.kuaishou.weapon.p0.n r0 = com.kuaishou.weapon.p0.n.a
            if (r0 != 0) goto L3f
            java.lang.Class<com.kuaishou.weapon.p0.n> r0 = com.kuaishou.weapon.p0.n.class
            monitor-enter(r0)
            com.kuaishou.weapon.p0.n r1 = com.kuaishou.weapon.p0.n.a     // Catch: java.lang.Throwable -> L3c
            if (r1 != 0) goto L3a
            com.kuaishou.weapon.p0.n.b = r9     // Catch: java.lang.Throwable -> L3c
            com.kuaishou.weapon.p0.n.c = r10     // Catch: java.lang.Throwable -> L3c
            com.kuaishou.weapon.p0.n r9 = new com.kuaishou.weapon.p0.n     // Catch: java.lang.Throwable -> L3c
            r9.<init>()     // Catch: java.lang.Throwable -> L3c
            com.kuaishou.weapon.p0.n.a = r9     // Catch: java.lang.Throwable -> L3c
            java.util.concurrent.ThreadPoolExecutor r9 = com.kuaishou.weapon.p0.n.d     // Catch: java.lang.Throwable -> L3c
            if (r9 != 0) goto L3a
            java.util.concurrent.ThreadPoolExecutor r9 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L3c
            int r2 = com.kuaishou.weapon.p0.n.b     // Catch: java.lang.Throwable -> L3c
            int r3 = com.kuaishou.weapon.p0.n.c     // Catch: java.lang.Throwable -> L3c
            r4 = 60
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L3c
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue     // Catch: java.lang.Throwable -> L3c
            r10 = 10
            r7.<init>(r10)     // Catch: java.lang.Throwable -> L3c
            com.kuaishou.weapon.p0.n$2 r8 = new com.kuaishou.weapon.p0.n$2     // Catch: java.lang.Throwable -> L3c
            r8.<init>()     // Catch: java.lang.Throwable -> L3c
            r1 = r9
            r1.<init>(r2, r3, r4, r6, r7, r8)     // Catch: java.lang.Throwable -> L3c
            com.kuaishou.weapon.p0.n.d = r9     // Catch: java.lang.Throwable -> L3c
            r10 = 1
            r9.allowCoreThreadTimeOut(r10)     // Catch: java.lang.Throwable -> L3c
        L3a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3c
            goto L3f
        L3c:
            r9 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3c
            throw r9
        L3f:
            com.kuaishou.weapon.p0.n r9 = com.kuaishou.weapon.p0.n.a
            return r9
    }

    public void a(java.lang.Runnable r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.concurrent.ThreadPoolExecutor r0 = com.kuaishou.weapon.p0.n.d     // Catch: java.lang.Exception -> L7
            r0.execute(r2)     // Catch: java.lang.Exception -> L7
        L7:
            return
    }
}
