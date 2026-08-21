package com.tkay.core.common;

public class b {
    public static final java.lang.String a = "1";
    private static volatile com.tkay.core.common.b c;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<com.tkay.core.common.b.a>> b;




    public interface a {
        void a(java.lang.Object r1);
    }

    private b() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.b = r0
            return
    }

    public static com.tkay.core.common.b a() {
            com.tkay.core.common.b r0 = com.tkay.core.common.b.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.b> r0 = com.tkay.core.common.b.class
            monitor-enter(r0)
            com.tkay.core.common.b r1 = com.tkay.core.common.b.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.b r1 = new com.tkay.core.common.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.b.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.b r0 = com.tkay.core.common.b.c
            return r0
    }

    public final synchronized void a(java.lang.String r3, com.tkay.core.common.b.a r4) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1a
            if (r0 != 0) goto L18
            if (r4 != 0) goto La
            goto L18
        La:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> L1a
            com.tkay.core.common.b$1 r1 = new com.tkay.core.common.b$1     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Throwable -> L1a
            r0.a(r1)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r2)
            return
        L18:
            monitor-exit(r2)
            return
        L1a:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void a(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L9
            monitor-exit(r2)
            return
        L9:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> L17
            com.tkay.core.common.b$3 r1 = new com.tkay.core.common.b$3     // Catch: java.lang.Throwable -> L17
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Throwable -> L17
            r0.a(r1)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r2)
            return
        L17:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void b(java.lang.String r3, com.tkay.core.common.b.a r4) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1a
            if (r0 != 0) goto L18
            if (r4 != 0) goto La
            goto L18
        La:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> L1a
            com.tkay.core.common.b$2 r1 = new com.tkay.core.common.b$2     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Throwable -> L1a
            r0.a(r1)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r2)
            return
        L18:
            monitor-exit(r2)
            return
        L1a:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }
}
