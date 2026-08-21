package com.tkay.core.common.b;

public final class e implements android.app.Application.ActivityLifecycleCallbacks {
    int a;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> b;
    boolean c;
    boolean d;

    public e(boolean r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.c = r0
            r2.d = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 3
            r0.<init>(r1)
            r2.b = r0
            if (r3 == 0) goto L18
            r3 = 1
            r2.d = r3
            a()
        L18:
            return
    }

    private static void a() {
            com.tkay.core.common.k.c.a()
            com.tkay.core.common.f.d r0 = new com.tkay.core.common.f.d
            r0.<init>()
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.a(r1)
            r2 = 21
            r1.a(r2, r0)
            return
    }

    @Override
    public final void onActivityCreated(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    @Override
    public final void onActivityDestroyed(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public final void onActivityPaused(android.app.Activity r1) {
            r0 = this;
            boolean r1 = r0.d
            if (r1 != 0) goto La
            r1 = 1
            r0.d = r1
            a()
        La:
            return
    }

    @Override
    public final void onActivityResumed(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public final void onActivitySaveInstanceState(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    @Override
    public final void onActivityStarted(android.app.Activity r4) {
            r3 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r4)
            int r0 = r3.a
            r1 = 1
            int r0 = r0 + r1
            r3.a = r0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r3.b
            java.lang.String r4 = r4.toString()
            java.lang.Boolean r2 = java.lang.Boolean.TRUE
            r0.put(r4, r2)
            int r4 = r3.a
            if (r4 != r1) goto L25
            boolean r4 = r3.d
            if (r4 != 0) goto L25
            r3.d = r1
            a()
        L25:
            return
    }

    @Override
    public final void onActivityStopped(android.app.Activity r4) {
            r3 = this;
            int r0 = r3.a
            r1 = 1
            int r0 = r0 - r1
            r3.a = r0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r3.b
            java.lang.String r2 = r4.toString()
            boolean r0 = r0.containsKey(r2)
            boolean r2 = r3.c
            if (r2 != 0) goto L1d
            if (r0 != 0) goto L1d
            r3.c = r1
            int r2 = r3.a
            int r2 = r2 + r1
            r3.a = r2
        L1d:
            if (r0 == 0) goto L28
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r3.b     // Catch: java.lang.Throwable -> L28
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L28
            r0.remove(r4)     // Catch: java.lang.Throwable -> L28
        L28:
            int r4 = r3.a
            if (r4 != 0) goto L2f
            r4 = 0
            r3.d = r4
        L2f:
            return
    }
}
