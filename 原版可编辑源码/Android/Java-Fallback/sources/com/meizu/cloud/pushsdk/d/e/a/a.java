package com.meizu.cloud.pushsdk.d.e.a;

public class a extends com.meizu.cloud.pushsdk.d.e.a {
    private static final java.lang.String n = null;
    private static java.util.concurrent.ScheduledExecutorService o;



    static {
            java.lang.Class<com.meizu.cloud.pushsdk.d.e.a.a> r0 = com.meizu.cloud.pushsdk.d.e.a.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.meizu.cloud.pushsdk.d.e.a.a.n = r0
            return
    }

    public a(com.meizu.cloud.pushsdk.d.e.a.a r1) {
            r0 = this;
            r0.<init>(r1)
            int r1 = r0.k
            com.meizu.cloud.pushsdk.d.b.a.b.a(r1)
            r0.c()
            return
    }

    static void a(com.meizu.cloud.pushsdk.d.e.a.a r0, com.meizu.cloud.pushsdk.d.c.b r1, boolean r2) {
            super.a(r1, r2)
            return
    }

    @Override
    public void a(com.meizu.cloud.pushsdk.d.c.b r2, boolean r3) {
            r1 = this;
            com.meizu.cloud.pushsdk.d.e.a.a$2 r0 = new com.meizu.cloud.pushsdk.d.e.a.a$2
            r0.<init>(r1, r2, r3)
            com.meizu.cloud.pushsdk.d.b.a.b.a(r0)
            return
    }

    public void c() {
            r8 = this;
            java.util.concurrent.ScheduledExecutorService r0 = com.meizu.cloud.pushsdk.d.e.a.a.o
            if (r0 != 0) goto L28
            boolean r0 = r8.i
            if (r0 == 0) goto L28
            java.lang.String r0 = com.meizu.cloud.pushsdk.d.e.a.a.n
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = "Session checking has been resumed."
            com.meizu.cloud.pushsdk.d.f.c.b(r0, r2, r1)
            com.meizu.cloud.pushsdk.d.e.b r0 = r8.d
            java.util.concurrent.ScheduledExecutorService r1 = java.util.concurrent.Executors.newSingleThreadScheduledExecutor()
            com.meizu.cloud.pushsdk.d.e.a.a.o = r1
            com.meizu.cloud.pushsdk.d.e.a.a$1 r2 = new com.meizu.cloud.pushsdk.d.e.a.a$1
            r2.<init>(r8, r0)
            long r3 = r8.j
            long r5 = r8.j
            java.util.concurrent.TimeUnit r7 = r8.l
            r1.scheduleAtFixedRate(r2, r3, r5, r7)
        L28:
            return
    }
}
