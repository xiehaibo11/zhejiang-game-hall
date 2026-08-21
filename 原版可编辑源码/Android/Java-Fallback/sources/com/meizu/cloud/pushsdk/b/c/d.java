package com.meizu.cloud.pushsdk.b.c;

public final class d {
    private java.lang.String a;
    private java.lang.Boolean b;
    private java.lang.Integer c;
    private java.lang.Thread.UncaughtExceptionHandler d;
    private java.util.concurrent.ThreadFactory e;


    public d() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r0
            r1.c = r0
            r1.d = r0
            r1.e = r0
            return
    }

    private static java.util.concurrent.ThreadFactory a(com.meizu.cloud.pushsdk.b.c.d r9) {
            java.lang.String r2 = r9.a
            java.lang.Boolean r4 = r9.b
            java.lang.Integer r5 = r9.c
            java.lang.Thread$UncaughtExceptionHandler r6 = r9.d
            java.util.concurrent.ThreadFactory r9 = r9.e
            if (r9 == 0) goto Ld
            goto L11
        Ld:
            java.util.concurrent.ThreadFactory r9 = java.util.concurrent.Executors.defaultThreadFactory()
        L11:
            r1 = r9
            if (r2 == 0) goto L1c
            java.util.concurrent.atomic.AtomicLong r9 = new java.util.concurrent.atomic.AtomicLong
            r7 = 0
            r9.<init>(r7)
            goto L1d
        L1c:
            r9 = 0
        L1d:
            r3 = r9
            com.meizu.cloud.pushsdk.b.c.d$1 r9 = new com.meizu.cloud.pushsdk.b.c.d$1
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r9
    }

    public com.meizu.cloud.pushsdk.b.c.d a(java.lang.Integer r1) {
            r0 = this;
            r0.c = r1
            return r0
    }

    public com.meizu.cloud.pushsdk.b.c.d a(java.lang.String r4) {
            r3 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            r0[r1] = r2
            java.lang.String.format(r4, r0)
            r3.a = r4
            return r3
    }

    public java.util.concurrent.ThreadFactory a() {
            r1 = this;
            java.util.concurrent.ThreadFactory r0 = a(r1)
            return r0
    }
}
