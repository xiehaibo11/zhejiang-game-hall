package com.meizu.cloud.pushsdk.d.e;

public class b {
    private static final java.lang.String a = null;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private int e;
    private final java.lang.String f;
    private final java.util.concurrent.atomic.AtomicBoolean g;
    private long h;
    private final long i;
    private final long j;
    private final android.content.Context k;

    static {
            java.lang.Class<com.meizu.cloud.pushsdk.d.e.b> r0 = com.meizu.cloud.pushsdk.d.e.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.meizu.cloud.pushsdk.d.e.b.a = r0
            return
    }

    public b(long r3, long r5, java.util.concurrent.TimeUnit r7, android.content.Context r8) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.c = r0
            r0 = 0
            r2.e = r0
            java.lang.String r1 = "SQLITE"
            r2.f = r1
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r1.<init>(r0)
            r2.g = r1
            long r3 = r7.toMillis(r3)
            r2.i = r3
            long r3 = r7.toMillis(r5)
            r2.j = r3
            r2.k = r8
            java.util.Map r3 = r2.f()
            if (r3 != 0) goto L2f
        L28:
            java.lang.String r3 = com.meizu.cloud.pushsdk.d.f.e.b()
            r2.b = r3
            goto L68
        L2f:
            java.lang.String r4 = "userId"
            java.lang.Object r4 = r3.get(r4)     // Catch: java.lang.Exception -> L56
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L56
            java.lang.String r5 = "sessionId"
            java.lang.Object r5 = r3.get(r5)     // Catch: java.lang.Exception -> L56
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L56
            java.lang.String r6 = "sessionIndex"
            java.lang.Object r3 = r3.get(r6)     // Catch: java.lang.Exception -> L56
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Exception -> L56
            int r3 = r3.intValue()     // Catch: java.lang.Exception -> L56
            r2.b = r4     // Catch: java.lang.Exception -> L56
            r2.e = r3     // Catch: java.lang.Exception -> L56
            r2.c = r5     // Catch: java.lang.Exception -> L56
            goto L68
        L56:
            r3 = move-exception
            java.lang.String r4 = com.meizu.cloud.pushsdk.d.e.b.a
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]
            java.lang.String r3 = r3.getMessage()
            r5[r0] = r3
            java.lang.String r3 = "Exception occurred retrieving session info from file: %s"
            com.meizu.cloud.pushsdk.d.f.c.a(r4, r3, r5)
            goto L28
        L68:
            r2.d()
            r2.g()
            java.lang.String r3 = com.meizu.cloud.pushsdk.d.e.b.a
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.String r5 = "Tracker Session Object created."
            com.meizu.cloud.pushsdk.d.f.c.c(r3, r5, r4)
            return
    }

    private void d() {
            r5 = this;
            java.lang.String r0 = r5.c
            r5.d = r0
            java.lang.String r0 = com.meizu.cloud.pushsdk.d.f.e.b()
            r5.c = r0
            int r0 = r5.e
            r1 = 1
            int r0 = r0 + r1
            r5.e = r0
            java.lang.String r0 = com.meizu.cloud.pushsdk.d.e.b.a
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.String r4 = "Session information is updated:"
            com.meizu.cloud.pushsdk.d.f.c.b(r0, r4, r3)
            java.lang.String r0 = com.meizu.cloud.pushsdk.d.e.b.a
            java.lang.Object[] r3 = new java.lang.Object[r1]
            java.lang.String r4 = r5.c
            r3[r2] = r4
            java.lang.String r4 = " + Session ID: %s"
            com.meizu.cloud.pushsdk.d.f.c.b(r0, r4, r3)
            java.lang.String r0 = com.meizu.cloud.pushsdk.d.e.b.a
            java.lang.Object[] r3 = new java.lang.Object[r1]
            java.lang.String r4 = r5.d
            r3[r2] = r4
            java.lang.String r4 = " + Previous Session ID: %s"
            com.meizu.cloud.pushsdk.d.f.c.b(r0, r4, r3)
            java.lang.String r0 = com.meizu.cloud.pushsdk.d.e.b.a
            java.lang.Object[] r1 = new java.lang.Object[r1]
            int r3 = r5.e
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            java.lang.String r2 = " + Session Index: %s"
            com.meizu.cloud.pushsdk.d.f.c.b(r0, r2, r1)
            r5.e()
            return
    }

    private boolean e() {
            r3 = this;
            java.util.Map r0 = r3.c()
            android.content.Context r1 = r3.k
            java.lang.String r2 = "snowplow_session_vars"
            boolean r0 = com.meizu.cloud.pushsdk.d.f.a.a(r2, r0, r1)
            return r0
    }

    private java.util.Map f() {
            r2 = this;
            android.content.Context r0 = r2.k
            java.lang.String r1 = "snowplow_session_vars"
            java.util.Map r0 = com.meizu.cloud.pushsdk.d.f.a.a(r1, r0)
            return r0
    }

    private void g() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2.h = r0
            return
    }

    public com.meizu.cloud.pushsdk.d.a.b a() {
            r3 = this;
            java.lang.String r0 = com.meizu.cloud.pushsdk.d.e.b.a
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = "Getting session context..."
            com.meizu.cloud.pushsdk.d.f.c.c(r0, r2, r1)
            r3.g()
            com.meizu.cloud.pushsdk.d.a.b r0 = new com.meizu.cloud.pushsdk.d.a.b
            java.util.Map r1 = r3.c()
            java.lang.String r2 = "client_session"
            r0.<init>(r2, r1)
            return r0
    }

    public void b() {
            r9 = this;
            java.lang.String r0 = com.meizu.cloud.pushsdk.d.e.b.a
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = "Checking and updating session information."
            com.meizu.cloud.pushsdk.d.f.c.b(r0, r2, r1)
            long r5 = java.lang.System.currentTimeMillis()
            java.util.concurrent.atomic.AtomicBoolean r0 = r9.g
            boolean r0 = r0.get()
            if (r0 == 0) goto L19
            long r0 = r9.j
            goto L1b
        L19:
            long r0 = r9.i
        L1b:
            r7 = r0
            long r3 = r9.h
            boolean r0 = com.meizu.cloud.pushsdk.d.f.e.a(r3, r5, r7)
            if (r0 != 0) goto L2a
            r9.d()
            r9.g()
        L2a:
            return
    }

    public java.util.Map c() {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 8
            r0.<init>(r1)
            java.lang.String r1 = r3.b
            java.lang.String r2 = "userId"
            r0.put(r2, r1)
            java.lang.String r1 = r3.c
            java.lang.String r2 = "sessionId"
            r0.put(r2, r1)
            java.lang.String r1 = r3.d
            java.lang.String r2 = "previousSessionId"
            r0.put(r2, r1)
            int r1 = r3.e
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "sessionIndex"
            r0.put(r2, r1)
            r3.getClass()
            java.lang.String r1 = "storageMechanism"
            java.lang.String r2 = "SQLITE"
            r0.put(r1, r2)
            return r0
    }
}
