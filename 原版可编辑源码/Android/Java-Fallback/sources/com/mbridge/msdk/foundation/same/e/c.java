package com.mbridge.msdk.foundation.same.e;

public final class c {
    private static volatile java.util.concurrent.ThreadPoolExecutor a;


    static {
            return
    }

    private static int a(int r1, java.lang.String r2) {
            com.mbridge.msdk.foundation.tools.ab r0 = com.mbridge.msdk.foundation.tools.ab.a()     // Catch: java.lang.Exception -> Ld
            int r2 = r0.a(r2, r1)     // Catch: java.lang.Exception -> Ld
            if (r2 > 0) goto Lb
            goto L1b
        Lb:
            r1 = r2
            goto L1b
        Ld:
            r2 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L1b
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "CommonTaskLoaderThreadPool"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L1b:
            return r1
    }

    public static java.util.concurrent.ThreadPoolExecutor a() {
            java.lang.String r0 = "CommonTaskLoaderThreadPool"
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.e.c.a
            if (r1 == 0) goto L7
            goto L70
        L7:
            r1 = 10
            java.lang.String r2 = "c_t_l_t_p_c"
            int r4 = a(r1, r2)
            r1 = 50
            java.lang.String r2 = "c_t_l_t_p_m"
            int r1 = a(r1, r2)
            r2 = 5
            java.lang.String r3 = "c_t_l_t_p_t"
            int r2 = a(r2, r3)
            if (r1 >= r4) goto L22
            r5 = r4
            goto L23
        L22:
            r5 = r1
        L23:
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L66
            if (r1 == 0) goto L4b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L66
            r1.<init>()     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "create ThreadPoolExecutor for core "
            r1.append(r3)     // Catch: java.lang.Exception -> L66
            r1.append(r4)     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = " max "
            r1.append(r3)     // Catch: java.lang.Exception -> L66
            r1.append(r5)     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = " timeout "
            r1.append(r3)     // Catch: java.lang.Exception -> L66
            r1.append(r2)     // Catch: java.lang.Exception -> L66
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L66
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> L66
        L4b:
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Exception -> L66
            long r6 = (long) r2     // Catch: java.lang.Exception -> L66
            java.util.concurrent.TimeUnit r8 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Exception -> L66
            java.util.concurrent.LinkedBlockingDeque r9 = new java.util.concurrent.LinkedBlockingDeque     // Catch: java.lang.Exception -> L66
            r9.<init>()     // Catch: java.lang.Exception -> L66
            com.mbridge.msdk.foundation.same.e.c$1 r10 = new com.mbridge.msdk.foundation.same.e.c$1     // Catch: java.lang.Exception -> L66
            r10.<init>()     // Catch: java.lang.Exception -> L66
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r11 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy     // Catch: java.lang.Exception -> L66
            r11.<init>()     // Catch: java.lang.Exception -> L66
            r3 = r1
            r3.<init>(r4, r5, r6, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L66
            com.mbridge.msdk.foundation.same.e.c.a = r1     // Catch: java.lang.Exception -> L66
            goto L70
        L66:
            r1 = move-exception
            boolean r2 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r2 == 0) goto L70
            java.lang.String r2 = "create ThreadPoolExecutor failed "
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r1)
        L70:
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.e.c.a
            r1 = 1
            if (r0 != 0) goto L9d
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            int r0 = r0.availableProcessors()
            int r0 = r0 * 2
            int r4 = r0 + 1
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            r5 = 5
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque r8 = new java.util.concurrent.LinkedBlockingDeque
            r8.<init>()
            com.mbridge.msdk.foundation.same.e.c$1 r9 = new com.mbridge.msdk.foundation.same.e.c$1
            r9.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r10 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r10.<init>()
            r2 = r0
            r3 = r4
            r2.<init>(r3, r4, r5, r7, r8, r9, r10)
            com.mbridge.msdk.foundation.same.e.c.a = r0
        L9d:
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.e.c.a
            r0.allowCoreThreadTimeOut(r1)
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.e.c.a
            return r0
    }
}
