package com.tkay.expressad.videocommon.a;

public class a {
    public static final int a = 1;
    public static final int b = 2;
    private static final java.lang.String c = null;
    private static com.tkay.expressad.videocommon.a.a d;

    static {
            java.lang.Class<com.tkay.expressad.videocommon.a.a> r0 = com.tkay.expressad.videocommon.a.a.class
            java.lang.String r0 = r0.getName()
            com.tkay.expressad.videocommon.a.a.c = r0
            r0 = 0
            com.tkay.expressad.videocommon.a.a.d = r0
            return
    }

    private a() {
            r1 = this;
            r1.<init>()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lb
            r0.f()     // Catch: java.lang.Exception -> Lb
            return
        Lb:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    public static com.tkay.expressad.videocommon.a.a a() {
            com.tkay.expressad.videocommon.a.a r0 = com.tkay.expressad.videocommon.a.a.d
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.videocommon.a.a> r0 = com.tkay.expressad.videocommon.a.a.class
            monitor-enter(r0)
            com.tkay.expressad.videocommon.a.a r1 = com.tkay.expressad.videocommon.a.a.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.videocommon.a.a r1 = new com.tkay.expressad.videocommon.a.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.videocommon.a.a.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.videocommon.a.a r0 = com.tkay.expressad.videocommon.a.a.d
            return r0
    }

    public static java.util.List<com.tkay.expressad.foundation.d.c> a(java.util.List<com.tkay.expressad.foundation.d.c> r13) {
            r0 = 0
            if (r13 == 0) goto L60
            com.tkay.expressad.videocommon.e.c r1 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Exception -> L5c
            com.tkay.expressad.videocommon.e.a r1 = r1.b()     // Catch: java.lang.Exception -> L5c
            r2 = 0
            if (r1 == 0) goto L14
            long r4 = r1.c()     // Catch: java.lang.Exception -> L5c
            goto L15
        L14:
            r4 = r2
        L15:
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L5c
            if (r13 == 0) goto L60
            int r1 = r13.size()     // Catch: java.lang.Exception -> L5c
            if (r1 <= 0) goto L60
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L5c
            r1.<init>()     // Catch: java.lang.Exception -> L5c
            java.util.Iterator r13 = r13.iterator()     // Catch: java.lang.Exception -> L59
        L2a:
            boolean r0 = r13.hasNext()     // Catch: java.lang.Exception -> L59
            if (r0 == 0) goto L57
            java.lang.Object r0 = r13.next()     // Catch: java.lang.Exception -> L59
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0     // Catch: java.lang.Exception -> L59
            if (r0 == 0) goto L2a
            long r8 = r0.o()     // Catch: java.lang.Exception -> L59
            r10 = 1000(0x3e8, double:4.94E-321)
            long r8 = r8 * r10
            long r10 = r0.bg()     // Catch: java.lang.Exception -> L59
            long r10 = r6 - r10
            int r12 = (r8 > r2 ? 1 : (r8 == r2 ? 0 : -1))
            if (r12 <= 0) goto L4d
            int r8 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r8 >= 0) goto L53
        L4d:
            if (r12 > 0) goto L2a
            int r8 = (r4 > r10 ? 1 : (r4 == r10 ? 0 : -1))
            if (r8 < 0) goto L2a
        L53:
            r1.add(r0)     // Catch: java.lang.Exception -> L59
            goto L2a
        L57:
            r0 = r1
            goto L60
        L59:
            r13 = move-exception
            r0 = r1
            goto L5d
        L5c:
            r13 = move-exception
        L5d:
            r13.printStackTrace()
        L60:
            return r0
    }

    private static void a(java.lang.String r0, java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Ld
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Ld
        Ld:
            return
    }

    public static boolean a(com.tkay.expressad.foundation.d.c r12) {
            r0 = 1
            com.tkay.expressad.videocommon.e.c r1 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Exception -> L36
            com.tkay.expressad.videocommon.e.a r1 = r1.b()     // Catch: java.lang.Exception -> L36
            r2 = 0
            if (r1 == 0) goto L12
            long r4 = r1.c()     // Catch: java.lang.Exception -> L36
            goto L13
        L12:
            r4 = r2
        L13:
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L36
            if (r12 == 0) goto L35
            long r8 = r12.o()     // Catch: java.lang.Exception -> L36
            r10 = 1000(0x3e8, double:4.94E-321)
            long r8 = r8 * r10
            long r10 = r12.bg()     // Catch: java.lang.Exception -> L36
            long r6 = r6 - r10
            int r12 = (r8 > r2 ? 1 : (r8 == r2 ? 0 : -1))
            if (r12 <= 0) goto L2d
            int r1 = (r8 > r6 ? 1 : (r8 == r6 ? 0 : -1))
            if (r1 >= 0) goto L33
        L2d:
            if (r12 > 0) goto L35
            int r12 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r12 < 0) goto L35
        L33:
            r12 = 0
            return r12
        L35:
            return r0
        L36:
            r12 = move-exception
            r12.printStackTrace()
            return r0
    }

    private static void b() {
            return
    }

    private static void c() {
            return
    }

    private static void d() {
            return
    }

    private static void e() {
            return
    }

    private static void f() {
            return
    }
}
