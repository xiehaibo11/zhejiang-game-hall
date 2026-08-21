package com.bytedance.pangle.download;

public class a {
    private static volatile com.bytedance.pangle.download.a b;
    public final java.util.List<java.lang.String> a;


    public a() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.a = r0
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            com.bytedance.pangle.download.a$1 r1 = new com.bytedance.pangle.download.a$1
            r1.<init>(r2)
            r0.registerActivityLifecycleCallbacks(r1)
            return
    }

    public static com.bytedance.pangle.download.a a() {
            com.bytedance.pangle.download.a r0 = com.bytedance.pangle.download.a.b
            if (r0 != 0) goto L17
            java.lang.Class<com.bytedance.pangle.download.a> r0 = com.bytedance.pangle.download.a.class
            monitor-enter(r0)
            com.bytedance.pangle.download.a r1 = com.bytedance.pangle.download.a.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bytedance.pangle.download.a r1 = new com.bytedance.pangle.download.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bytedance.pangle.download.a.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bytedance.pangle.download.a r0 = com.bytedance.pangle.download.a.b
            return r0
    }

    static java.util.List a(com.bytedance.pangle.download.a r0) {
            java.util.List<java.lang.String> r0 = r0.a
            return r0
    }
}
