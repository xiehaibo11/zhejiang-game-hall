package com.huawei.updatesdk.a.b.a;

public class a {
    private static final java.lang.Object b = null;
    private static com.huawei.updatesdk.a.b.a.a c;
    private android.content.Context a;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.updatesdk.a.b.a.a.b = r0
            return
    }

    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.a = r1
            return
    }

    public static void a(android.content.Context r2) {
            java.lang.Object r0 = com.huawei.updatesdk.a.b.a.a.b
            monitor-enter(r0)
            com.huawei.updatesdk.a.b.a.a r1 = com.huawei.updatesdk.a.b.a.a.c     // Catch: java.lang.Throwable -> L10
            if (r1 != 0) goto Le
            com.huawei.updatesdk.a.b.a.a r1 = new com.huawei.updatesdk.a.b.a.a     // Catch: java.lang.Throwable -> L10
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L10
            com.huawei.updatesdk.a.b.a.a.c = r1     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r2
    }

    public static com.huawei.updatesdk.a.b.a.a c() {
            java.lang.Object r0 = com.huawei.updatesdk.a.b.a.a.b
            monitor-enter(r0)
            com.huawei.updatesdk.a.b.a.a r1 = com.huawei.updatesdk.a.b.a.a.c     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    public android.content.Context a() {
            r1 = this;
            android.content.Context r0 = r1.a
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            android.content.Context r0 = r1.a
            if (r0 == 0) goto L16
            java.io.File r0 = r0.getFilesDir()
            if (r0 != 0) goto Lb
            goto L16
        Lb:
            android.content.Context r0 = r1.a
            java.io.File r0 = r0.getFilesDir()
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
        L16:
            java.lang.String r0 = ""
            return r0
    }
}
