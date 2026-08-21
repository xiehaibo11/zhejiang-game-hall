package com.xiaomi.push;

public abstract class y implements java.lang.Runnable {
    private android.content.Context a;
    private java.io.File a;
    private java.lang.Runnable a;

    private y(android.content.Context r1, java.io.File r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.a = r2
            return
    }

    y(android.content.Context r1, java.io.File r2, com.xiaomi.push.z r3) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static void a(android.content.Context r1, java.io.File r2, java.lang.Runnable r3) {
            com.xiaomi.push.z r0 = new com.xiaomi.push.z
            r0.<init>(r1, r2, r3)
            r0.run()
            return
    }

    protected abstract void a(android.content.Context r1);

    @Override
    public final void run() {
            r4 = this;
            r0 = 0
            java.io.File r1 = r4.a     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            if (r1 != 0) goto L14
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            java.io.File r2 = r2.getFilesDir()     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            java.lang.String r3 = "default_locker"
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            r4.a = r1     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
        L14:
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            java.io.File r2 = r4.a     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            com.xiaomi.push.x r0 = com.xiaomi.push.x.a(r1, r2)     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            java.lang.Runnable r1 = r4.a     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            if (r1 == 0) goto L25
            java.lang.Runnable r1 = r4.a     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            r1.run()     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
        L25:
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            r4.a(r1)     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            if (r0 == 0) goto L38
            goto L35
        L2d:
            r1 = move-exception
            goto L39
        L2f:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L38
        L35:
            r0.a()
        L38:
            return
        L39:
            if (r0 == 0) goto L3e
            r0.a()
        L3e:
            throw r1
    }
}
