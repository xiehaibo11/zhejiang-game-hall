package com.bytedance.pangle.d;

public class a {
    private static java.lang.Class a;
    private static java.lang.Object b;


    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final java.lang.Object a() {
            java.lang.Object r0 = com.bytedance.pangle.d.a.b
            if (r0 != 0) goto L6e
            java.lang.Class<com.bytedance.pangle.d.a> r0 = com.bytedance.pangle.d.a.class
            monitor-enter(r0)     // Catch: java.lang.Exception -> L66
            java.lang.Object r1 = com.bytedance.pangle.d.a.b     // Catch: java.lang.Throwable -> L63
            if (r1 != 0) goto L24
            java.lang.Class r1 = com.bytedance.pangle.d.a.a     // Catch: java.lang.Throwable -> L63
            if (r1 != 0) goto L17
            java.lang.String r1 = "android.app.ActivityThread"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L63
            com.bytedance.pangle.d.a.a = r1     // Catch: java.lang.Throwable -> L63
        L17:
            java.lang.Class r1 = com.bytedance.pangle.d.a.a     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = "currentActivityThread"
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L63
            java.lang.Object r1 = com.bytedance.pangle.util.MethodUtils.invokeStaticMethod(r1, r2, r3)     // Catch: java.lang.Throwable -> L63
            com.bytedance.pangle.d.a.b = r1     // Catch: java.lang.Throwable -> L63
        L24:
            java.lang.Object r1 = com.bytedance.pangle.d.a.b     // Catch: java.lang.Throwable -> L63
            if (r1 != 0) goto L61
            android.os.Looper r1 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L63
            android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L63
            if (r1 == r2) goto L61
            java.lang.Object r1 = new java.lang.Object     // Catch: java.lang.Throwable -> L63
            r1.<init>()     // Catch: java.lang.Throwable -> L63
            android.os.Handler r2 = new android.os.Handler     // Catch: java.lang.Throwable -> L63
            android.os.Looper r3 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L63
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L63
            com.bytedance.pangle.d.a$1 r3 = new com.bytedance.pangle.d.a$1     // Catch: java.lang.Throwable -> L63
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L63
            r2.post(r3)     // Catch: java.lang.Throwable -> L63
            java.lang.Object r2 = com.bytedance.pangle.d.a.b     // Catch: java.lang.Throwable -> L63
            if (r2 != 0) goto L61
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L63
            r2 = 5000(0x1388, double:2.4703E-320)
            r1.wait(r2)     // Catch: java.lang.Throwable -> L53 java.lang.InterruptedException -> L55
            goto L5d
        L53:
            r2 = move-exception
            goto L5f
        L55:
            r2 = move-exception
            java.lang.String r3 = "Zeus_pangle"
            java.lang.String r4 = "ActivityThreadHelper currentActivityThread interruptedException failed."
            com.bytedance.pangle.log.ZeusLogger.errReport(r3, r4, r2)     // Catch: java.lang.Throwable -> L53
        L5d:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L53
            goto L61
        L5f:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L53
            throw r2     // Catch: java.lang.Throwable -> L63
        L61:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L63
            goto L6e
        L63:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L63
            throw r1     // Catch: java.lang.Exception -> L66
        L66:
            r0 = move-exception
            java.lang.String r1 = "Zeus_pangle"
            java.lang.String r2 = "ActivityThreadHelper currentActivityThread failed."
            com.bytedance.pangle.log.ZeusLogger.errReport(r1, r2, r0)
        L6e:
            java.lang.Object r0 = com.bytedance.pangle.d.a.b
            return r0
    }

    static java.lang.Object a(java.lang.Object r0) {
            com.bytedance.pangle.d.a.b = r0
            return r0
    }

    static java.lang.Class b() {
            java.lang.Class r0 = com.bytedance.pangle.d.a.a
            return r0
    }
}
