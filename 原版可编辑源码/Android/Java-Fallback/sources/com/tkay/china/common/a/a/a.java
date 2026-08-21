package com.tkay.china.common.a.a;

public final class a {
    public static final int a = 1;
    public static final int b = 2;
    private static com.tkay.china.common.a.a.a c;
    private java.util.concurrent.ExecutorService d;

    final class 1 extends com.tkay.core.common.l.b.b {
        final long a;
        final java.lang.Runnable b;
        final com.tkay.china.common.a.a.a c;

        1(com.tkay.china.common.a.a.a r3, java.lang.Runnable r4) {
                r2 = this;
                r2.c = r3
                r0 = 0
                r2.a = r0
                r2.b = r4
                r2.<init>()
                return
        }

        @Override
        public final void a() {
                r3 = this;
                long r0 = r3.a     // Catch: java.lang.InterruptedException -> L5
                java.lang.Thread.sleep(r0)     // Catch: java.lang.InterruptedException -> L5
            L5:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "thread-"
                r0.<init>(r1)
                long r1 = r3.b()
                r0.append(r1)
                java.lang.Runnable r0 = r3.b
                r0.run()
                return
        }
    }

    static {
            return
    }

    protected a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            r1.d = r0
            return
    }

    public static com.tkay.china.common.a.a.a a() {
            com.tkay.china.common.a.a.a r0 = com.tkay.china.common.a.a.a.c
            if (r0 != 0) goto Lb
            com.tkay.china.common.a.a.a r0 = new com.tkay.china.common.a.a.a
            r0.<init>()
            com.tkay.china.common.a.a.a.c = r0
        Lb:
            com.tkay.china.common.a.a.a r0 = com.tkay.china.common.a.a.a.c
            return r0
    }

    private static void a(com.tkay.china.common.a.a.a r0) {
            com.tkay.china.common.a.a.a.c = r0
            return
    }

    private void a(java.lang.Runnable r6) {
            r5 = this;
            if (r6 == 0) goto L1d
            com.tkay.china.common.a.a.a$1 r0 = new com.tkay.china.common.a.a.a$1
            r0.<init>(r5, r6)
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            java.lang.Long r6 = java.lang.Long.valueOf(r1)
            int r6 = r6.intValue()
            long r1 = (long) r6
            r0.a(r1)
            r5.a(r0)
        L1d:
            return
    }

    private void b() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.d
            r0.shutdown()
            return
    }

    private void b(com.tkay.core.common.l.b.b r1) {
            r0 = this;
            r0.a(r1)
            return
    }

    private void b(java.lang.Runnable r6) {
            r5 = this;
            if (r6 == 0) goto L1d
            com.tkay.china.common.a.a.a$1 r0 = new com.tkay.china.common.a.a.a$1
            r0.<init>(r5, r6)
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            java.lang.Long r6 = java.lang.Long.valueOf(r1)
            int r6 = r6.intValue()
            long r1 = (long) r6
            r0.a(r1)
            r5.a(r0)
        L1d:
            return
    }

    public final void a(com.tkay.core.common.l.b.b r2) {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.d
            r0.execute(r2)
            return
    }
}
