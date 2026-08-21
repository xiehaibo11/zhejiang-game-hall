package com.mbridge.msdk.foundation.same.report.c;

public class a {
    public static final java.lang.String a = null;
    private static com.mbridge.msdk.foundation.same.report.c.a b;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.report.c.a> r0 = com.mbridge.msdk.foundation.same.report.c.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.report.c.a.a = r0
            r0 = 0
            com.mbridge.msdk.foundation.same.report.c.a.b = r0
            return
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.same.report.c.a a() {
            com.mbridge.msdk.foundation.same.report.c.a r0 = com.mbridge.msdk.foundation.same.report.c.a.b
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.same.report.c.a> r0 = com.mbridge.msdk.foundation.same.report.c.a.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.same.report.c.a r1 = com.mbridge.msdk.foundation.same.report.c.a.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.same.report.c.a r1 = new com.mbridge.msdk.foundation.same.report.c.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.same.report.c.a.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.foundation.same.report.c.a r0 = com.mbridge.msdk.foundation.same.report.c.a.b
            return r0
    }
}
