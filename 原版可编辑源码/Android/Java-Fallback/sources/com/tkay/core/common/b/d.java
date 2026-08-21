package com.tkay.core.common.b;

public class d implements android.app.Application.ActivityLifecycleCallbacks {
    public static final java.lang.String a = "start_time";
    public static final java.lang.String b = "end_time";
    public static final java.lang.String c = "psid";
    public static final java.lang.String d = "launch_mode";
    public static final int e = 0;
    public static final int f = 1;
    long g;
    int h;
    org.json.JSONObject i;
    android.os.Handler j;
    java.lang.Runnable k;
    private final java.lang.String l;




    public d(long r3) {
            r2 = this;
            r2.<init>()
            java.lang.Class<com.tkay.core.common.b.d> r0 = com.tkay.core.common.b.d.class
            java.lang.String r0 = r0.getName()
            r2.l = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.j = r0
            com.tkay.core.common.b.d$1 r0 = new com.tkay.core.common.b.d$1
            r0.<init>(r2)
            r2.k = r0
            r0 = 0
            r2.h = r0
            r2.g = r3
            return
    }

    private synchronized void a() {
            r12 = this;
            monitor-enter(r12)
            org.json.JSONObject r0 = r12.i     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L68
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L6a
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r1 = "tkay_sdk"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6a
            r2.<init>()     // Catch: java.lang.Throwable -> L6a
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r3 = r3.o()     // Catch: java.lang.Throwable -> L6a
            r2.append(r3)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r3 = "playRecord"
            r2.append(r3)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r3 = ""
            com.tkay.core.common.l.p.a(r0, r1, r2, r3)     // Catch: java.lang.Throwable -> L6a
            r0 = 0
            r12.g = r0     // Catch: java.lang.Throwable -> L6a
            org.json.JSONObject r0 = r12.i     // Catch: java.lang.Throwable -> L6a
            java.lang.String r1 = "start_time"
            long r8 = r0.optLong(r1)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r1 = "end_time"
            long r10 = r0.optLong(r1)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r1 = "psid"
            java.lang.String r7 = r0.optString(r1)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r1 = "launch_mode"
            int r0 = r0.optInt(r1)     // Catch: java.lang.Throwable -> L6a
            r1 = 0
            r12.i = r1     // Catch: java.lang.Throwable -> L6a
            r1 = 1
            if (r0 != r1) goto L54
            r0 = 3
            r2 = r0
            goto L55
        L54:
            r2 = r1
        L55:
            r3 = r8
            r5 = r10
            com.tkay.core.common.k.c.a(r2, r3, r5, r7)     // Catch: java.lang.Throwable -> L6a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6a
            java.lang.String r1 = "Time up to send application playTime, reset playStartTime and send agent, playtime:"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L6a
            long r10 = r10 - r8
            r1 = 1000(0x3e8, double:4.94E-321)
            long r10 = r10 / r1
            r0.append(r10)     // Catch: java.lang.Throwable -> L6a
        L68:
            monitor-exit(r12)
            return
        L6a:
            r0 = move-exception
            monitor-exit(r12)
            throw r0
    }

    private synchronized void a(long r16) {
            r15 = this;
            r1 = r15
            monitor-enter(r15)
            android.os.Handler r0 = r1.j     // Catch: java.lang.Throwable -> Lfe
            java.lang.Runnable r2 = r1.k     // Catch: java.lang.Throwable -> Lfe
            r0.removeCallbacks(r2)     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lfe
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r2 = r2.o()     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.c.a r0 = r0.b(r2)     // Catch: java.lang.Throwable -> Lfe
            org.json.JSONObject r2 = r1.i     // Catch: java.lang.Throwable -> Lfe
            r3 = 0
            r5 = 1
            if (r2 == 0) goto L92
            org.json.JSONObject r2 = r1.i     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r6 = "start_time"
            long r8 = r2.optLong(r6)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r6 = "end_time"
            long r10 = r2.optLong(r6)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r6 = "psid"
            java.lang.String r12 = r2.optString(r6)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r6 = "launch_mode"
            int r2 = r2.optInt(r6)     // Catch: java.lang.Throwable -> Lfe
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lfe
            long r6 = r6 - r10
            int r0 = r0.B()     // Catch: java.lang.Throwable -> Lfe
            long r13 = (long) r0     // Catch: java.lang.Throwable -> Lfe
            int r0 = (r6 > r13 ? 1 : (r6 == r13 ? 0 : -1))
            if (r0 <= 0) goto L92
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r6 = "onActivityResumed : Time countdown is closed, time up to send agent and create new psid, playtime:"
            r0.<init>(r6)     // Catch: java.lang.Throwable -> Lfe
            long r6 = r10 - r8
            r13 = 1000(0x3e8, double:4.94E-321)
            long r6 = r6 / r13
            r0.append(r6)     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lfe
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r6 = "tkay_sdk"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfe
            r7.<init>()     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.b.m r13 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r13 = r13.o()     // Catch: java.lang.Throwable -> Lfe
            r7.append(r13)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r13 = "playRecord"
            r7.append(r13)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r13 = ""
            com.tkay.core.common.l.p.a(r0, r6, r7, r13)     // Catch: java.lang.Throwable -> Lfe
            if (r2 != r5) goto L8c
            r0 = 3
            r7 = r0
            goto L8d
        L8c:
            r7 = r5
        L8d:
            com.tkay.core.common.k.c.a(r7, r8, r10, r12)     // Catch: java.lang.Throwable -> Lfe
            r1.g = r3     // Catch: java.lang.Throwable -> Lfe
        L92:
            r0 = 0
            r1.i = r0     // Catch: java.lang.Throwable -> Lfe
            long r6 = r1.g     // Catch: java.lang.Throwable -> Lfe
            int r0 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r0 != 0) goto Lb8
            r1.h = r5     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Le0 java.lang.Throwable -> Lfe
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Le0 java.lang.Throwable -> Lfe
            android.content.Context r2 = r2.f()     // Catch: java.lang.Exception -> Le0 java.lang.Throwable -> Lfe
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Le0 java.lang.Throwable -> Lfe
            java.lang.String r6 = r6.o()     // Catch: java.lang.Exception -> Le0 java.lang.Throwable -> Lfe
            long r5 = r0.a(r2, r6, r5)     // Catch: java.lang.Exception -> Le0 java.lang.Throwable -> Lfe
            r1.g = r5     // Catch: java.lang.Exception -> Le0 java.lang.Throwable -> Lfe
            goto Le0
        Lb8:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r0 = r0.o()     // Catch: java.lang.Throwable -> Lfe
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lfe
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r5 = "tkay_sdk"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfe
            r6.<init>()     // Catch: java.lang.Throwable -> Lfe
            r6.append(r0)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r0 = "playRecord"
            r6.append(r0)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r0 = r6.toString()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r6 = ""
            com.tkay.core.common.l.p.a(r2, r5, r0, r6)     // Catch: java.lang.Throwable -> Lfe
        Le0:
            long r5 = r1.g     // Catch: java.lang.Throwable -> Lfe
            int r0 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r0 != 0) goto Lec
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lfe
            r1.g = r2     // Catch: java.lang.Throwable -> Lfe
        Lec:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r2 = "onActivityResumed: Method use time:"
            r0.<init>(r2)     // Catch: java.lang.Throwable -> Lfe
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lfe
            long r2 = r2 - r16
            r0.append(r2)     // Catch: java.lang.Throwable -> Lfe
            monitor-exit(r15)
            return
        Lfe:
            r0 = move-exception
            monitor-exit(r15)
            throw r0
    }

    static void a(com.tkay.core.common.b.d r0) {
            r0.a()
            return
    }

    static void a(com.tkay.core.common.b.d r0, long r1) {
            r0.a(r1)
            return
    }

    private synchronized void b() {
            r8 = this;
            monitor-enter(r8)
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L9c
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r2 = r2.o()     // Catch: java.lang.Throwable -> L9c
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            r3.<init>()     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            java.lang.String r4 = "psid"
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            java.lang.String r5 = r5.q()     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            java.lang.String r4 = "start_time"
            long r5 = r8.g     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            java.lang.String r4 = "end_time"
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            java.lang.String r4 = "launch_mode"
            int r5 = r8.h     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            r8.i = r3     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            android.content.Context r4 = r4.f()     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            java.lang.String r5 = "tkay_sdk"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            r6.<init>()     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            r6.append(r2)     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            java.lang.String r7 = "playRecord"
            r6.append(r7)     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            com.tkay.core.common.l.p.a(r4, r5, r6, r7)     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            java.lang.String r5 = "onActivityPaused: record leave time:"
            r4.<init>(r5)     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
            r4.append(r3)     // Catch: java.lang.Exception -> L68 java.lang.Throwable -> L9c
        L68:
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L9c
            android.content.Context r3 = r3.f()     // Catch: java.lang.Throwable -> L9c
            com.tkay.core.c.b r3 = com.tkay.core.c.b.a(r3)     // Catch: java.lang.Throwable -> L9c
            com.tkay.core.c.a r2 = r3.b(r2)     // Catch: java.lang.Throwable -> L9c
            int r3 = r2.D()     // Catch: java.lang.Throwable -> L9c
            r4 = 1
            if (r3 != r4) goto L8b
            android.os.Handler r3 = r8.j     // Catch: java.lang.Throwable -> L9c
            java.lang.Runnable r4 = r8.k     // Catch: java.lang.Throwable -> L9c
            int r2 = r2.B()     // Catch: java.lang.Throwable -> L9c
            long r5 = (long) r2     // Catch: java.lang.Throwable -> L9c
            r3.postDelayed(r4, r5)     // Catch: java.lang.Throwable -> L9c
        L8b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9c
            java.lang.String r3 = "onActivityPaused: Method use time:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L9c
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L9c
            long r3 = r3 - r0
            r2.append(r3)     // Catch: java.lang.Throwable -> L9c
            monitor-exit(r8)
            return
        L9c:
            r0 = move-exception
            monitor-exit(r8)
            throw r0
    }

    static void b(com.tkay.core.common.b.d r0) {
            r0.b()
            return
    }

    @Override
    public void onActivityCreated(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    @Override
    public void onActivityDestroyed(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onActivityPaused(android.app.Activity r2) {
            r1 = this;
            com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.b.d$3 r0 = new com.tkay.core.common.b.d$3
            r0.<init>(r1)
            r2.a(r0)
            return
    }

    @Override
    public void onActivityResumed(android.app.Activity r4) {
            r3 = this;
            long r0 = java.lang.System.currentTimeMillis()
            com.tkay.core.common.l.b.a r4 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.b.d$2 r2 = new com.tkay.core.common.b.d$2
            r2.<init>(r3, r0)
            r4.a(r2)
            return
    }

    @Override
    public void onActivitySaveInstanceState(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    @Override
    public void onActivityStarted(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onActivityStopped(android.app.Activity r1) {
            r0 = this;
            return
    }
}
