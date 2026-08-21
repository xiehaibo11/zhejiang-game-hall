package com.meizu.cloud.pushsdk.d.f;

public class c {
    private static int a;

    static {
            return
    }

    private static java.lang.String a() {
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.String r0 = r0.getName()
            return r0
    }

    private static java.lang.String a(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PushTracker->"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private static java.lang.String a(java.lang.String r2, java.lang.Object... r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = a()
            r0.append(r1)
            java.lang.String r1 = "|"
            r0.append(r1)
            java.lang.String r2 = java.lang.String.format(r2, r3)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static void a(com.meizu.cloud.pushsdk.d.f.b r0) {
            int r0 = r0.a()
            com.meizu.cloud.pushsdk.d.f.c.a = r0
            return
    }

    public static void a(java.lang.String r2, java.lang.String r3, java.lang.Object... r4) {
            int r0 = com.meizu.cloud.pushsdk.d.f.c.a
            com.meizu.cloud.pushsdk.d.f.b r1 = com.meizu.cloud.pushsdk.d.f.b.b
            int r1 = r1.a()
            if (r0 < r1) goto L15
            java.lang.String r2 = a(r2)
            java.lang.String r3 = a(r3, r4)
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r3)
        L15:
            return
    }

    public static void b(java.lang.String r2, java.lang.String r3, java.lang.Object... r4) {
            int r0 = com.meizu.cloud.pushsdk.d.f.c.a
            com.meizu.cloud.pushsdk.d.f.b r1 = com.meizu.cloud.pushsdk.d.f.b.c
            int r1 = r1.a()
            if (r0 < r1) goto L15
            java.lang.String r2 = a(r2)
            java.lang.String r3 = a(r3, r4)
            com.meizu.cloud.pushinternal.DebugLogger.d(r2, r3)
        L15:
            return
    }

    public static void c(java.lang.String r2, java.lang.String r3, java.lang.Object... r4) {
            int r0 = com.meizu.cloud.pushsdk.d.f.c.a
            com.meizu.cloud.pushsdk.d.f.b r1 = com.meizu.cloud.pushsdk.d.f.b.d
            int r1 = r1.a()
            if (r0 < r1) goto L15
            java.lang.String r2 = a(r2)
            java.lang.String r3 = a(r3, r4)
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r3)
        L15:
            return
    }
}
