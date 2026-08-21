package com.meizu.cloud.pushinternal;

public class DebugLogger {
    public static boolean debug;

    static {
            return
    }

    public DebugLogger() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void d(java.lang.String r1, java.lang.String r2) {
            com.meizu.cloud.pushsdk.b.g r0 = com.meizu.cloud.pushsdk.b.g.b()
            r0.a(r1, r2)
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2) {
            com.meizu.cloud.pushsdk.b.g r0 = com.meizu.cloud.pushsdk.b.g.b()
            r0.d(r1, r2)
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            com.meizu.cloud.pushsdk.b.g r0 = com.meizu.cloud.pushsdk.b.g.b()
            r0.a(r1, r2, r3)
            return
    }

    public static void flush() {
            com.meizu.cloud.pushsdk.b.g r0 = com.meizu.cloud.pushsdk.b.g.b()
            r1 = 0
            r0.a(r1)
            return
    }

    public static void i(java.lang.String r1, java.lang.String r2) {
            com.meizu.cloud.pushsdk.b.g r0 = com.meizu.cloud.pushsdk.b.g.b()
            r0.b(r1, r2)
            return
    }

    public static void init(android.content.Context r1) {
            com.meizu.cloud.pushsdk.b.g r0 = com.meizu.cloud.pushsdk.b.g.b()
            r0.a(r1)
            return
    }

    public static void init(android.content.Context r1, java.lang.String r2) {
            com.meizu.cloud.pushsdk.b.g r0 = com.meizu.cloud.pushsdk.b.g.b()
            r0.a(r1, r2)
            return
    }

    public static boolean isDebuggable() {
            com.meizu.cloud.pushsdk.b.g r0 = com.meizu.cloud.pushsdk.b.g.b()
            boolean r0 = r0.a()
            return r0
    }

    public static void switchDebug(boolean r1) {
            com.meizu.cloud.pushsdk.b.g r0 = com.meizu.cloud.pushsdk.b.g.b()
            r0.b(r1)
            return
    }

    public static void w(java.lang.String r1, java.lang.String r2) {
            com.meizu.cloud.pushsdk.b.g r0 = com.meizu.cloud.pushsdk.b.g.b()
            r0.c(r1, r2)
            return
    }
}
