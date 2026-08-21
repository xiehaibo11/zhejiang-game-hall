package com.meizu.cloud.pushsdk.c.h;

public final class a {
    public static void a(com.meizu.cloud.pushsdk.c.c.k r1, com.meizu.cloud.pushsdk.c.a.b r2) {
            com.meizu.cloud.pushsdk.c.a.e r2 = r2.f()
            com.meizu.cloud.pushsdk.c.a.e r0 = com.meizu.cloud.pushsdk.c.a.e.d
            if (r2 == r0) goto L47
            if (r1 == 0) goto L47
            com.meizu.cloud.pushsdk.c.c.l r2 = r1.b()
            if (r2 == 0) goto L47
            com.meizu.cloud.pushsdk.c.c.l r2 = r1.b()
            com.meizu.cloud.pushsdk.c.g.d r2 = r2.a()
            if (r2 == 0) goto L47
            com.meizu.cloud.pushsdk.c.c.l r1 = r1.b()     // Catch: java.lang.Throwable -> L2f java.lang.Exception -> L31
            com.meizu.cloud.pushsdk.c.g.d r1 = r1.a()     // Catch: java.lang.Throwable -> L2f java.lang.Exception -> L31
            r1.close()     // Catch: java.lang.Throwable -> L2f java.lang.Exception -> L31
            boolean r1 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationChannel()
            if (r1 == 0) goto L47
        L2b:
            android.net.TrafficStats.clearThreadStatsTag()
            goto L47
        L2f:
            r1 = move-exception
            goto L3d
        L31:
            java.lang.String r1 = "Unable to close source data"
            com.meizu.cloud.pushsdk.c.a.a.a(r1)     // Catch: java.lang.Throwable -> L2f
            boolean r1 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationChannel()
            if (r1 == 0) goto L47
            goto L2b
        L3d:
            boolean r2 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationChannel()
            if (r2 == 0) goto L46
            android.net.TrafficStats.clearThreadStatsTag()
        L46:
            throw r1
        L47:
            return
    }
}
