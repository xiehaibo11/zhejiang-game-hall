package com.alipay.sdk.interior;

public class Log {
    public static long a;

    public interface ISdkLogCallback {
        void onLogLine(java.lang.String r1);
    }

    static {
            return
    }

    public Log() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean forcedLogReport(android.content.Context r8) {
            r0 = 0
            com.alipay.sdk.m.s.b r1 = com.alipay.sdk.m.s.b.d()     // Catch: java.lang.Exception -> L21
            r1.a(r8)     // Catch: java.lang.Exception -> L21
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Exception -> L21
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            long r3 = com.alipay.sdk.interior.Log.a     // Catch: java.lang.Exception -> L21
            long r3 = r1 - r3
            r5 = 600(0x258, double:2.964E-321)
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 >= 0) goto L1a
            return r0
        L1a:
            com.alipay.sdk.interior.Log.a = r1     // Catch: java.lang.Exception -> L21
            com.alipay.sdk.m.k.a.a(r8)     // Catch: java.lang.Exception -> L21
            r8 = 1
            return r8
        L21:
            r8 = move-exception
            com.alipay.sdk.m.u.e.a(r8)
            return r0
    }

    public static void setupLogCallback(com.alipay.sdk.interior.Log.ISdkLogCallback r0) {
            com.alipay.sdk.m.u.e.a(r0)
            return
    }
}
