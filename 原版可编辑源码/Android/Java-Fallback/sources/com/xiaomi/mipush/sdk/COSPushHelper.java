package com.xiaomi.mipush.sdk;

public class COSPushHelper {
    private static long a;
    private static volatile boolean a;

    static {
            return
    }

    public COSPushHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void convertMessage(android.content.Intent r0) {
            com.xiaomi.mipush.sdk.i.a(r0)
            return
    }

    public static void doInNetworkChange(android.content.Context r6) {
            long r0 = android.os.SystemClock.elapsedRealtime()
            boolean r2 = getNeedRegister()
            if (r2 == 0) goto L1f
            long r2 = com.xiaomi.mipush.sdk.COSPushHelper.a
            r4 = 0
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 <= 0) goto L1a
            r4 = 300000(0x493e0, double:1.482197E-318)
            long r2 = r2 + r4
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 > 0) goto L1f
        L1a:
            com.xiaomi.mipush.sdk.COSPushHelper.a = r0
            registerCOSAssemblePush(r6)
        L1f:
            return
    }

    public static boolean getNeedRegister() {
            boolean r0 = com.xiaomi.mipush.sdk.COSPushHelper.a
            return r0
    }

    public static boolean hasNetwork(android.content.Context r0) {
            boolean r0 = com.xiaomi.mipush.sdk.i.a(r0)
            return r0
    }

    public static void onNotificationMessageCome(android.content.Context r0, java.lang.String r1) {
            return
    }

    public static void onPassThoughMessageCome(android.content.Context r0, java.lang.String r1) {
            return
    }

    public static void registerCOSAssemblePush(android.content.Context r1) {
            com.xiaomi.mipush.sdk.f r1 = com.xiaomi.mipush.sdk.f.a(r1)
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.c
            com.xiaomi.mipush.sdk.AbstractPushManager r1 = r1.a(r0)
            if (r1 == 0) goto L14
            java.lang.String r0 = "ASSEMBLE_PUSH :  register cos when network change!"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            r1.register()
        L14:
            return
    }

    public static synchronized void setNeedRegister(boolean r1) {
            java.lang.Class<com.xiaomi.mipush.sdk.COSPushHelper> r0 = com.xiaomi.mipush.sdk.COSPushHelper.class
            monitor-enter(r0)
            com.xiaomi.mipush.sdk.COSPushHelper.a = r1     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void uploadToken(android.content.Context r1, java.lang.String r2) {
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.c
            com.xiaomi.mipush.sdk.i.a(r1, r0, r2)
            return
    }
}
