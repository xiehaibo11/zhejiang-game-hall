package com.xiaomi.mipush.sdk;

public class FTOSPushHelper {
    private static long a;
    private static volatile boolean a;

    static {
            return
    }

    public FTOSPushHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(android.content.Context r1) {
            com.xiaomi.mipush.sdk.f r1 = com.xiaomi.mipush.sdk.f.a(r1)
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.d
            com.xiaomi.mipush.sdk.AbstractPushManager r1 = r1.a(r0)
            if (r1 == 0) goto L14
            java.lang.String r0 = "ASSEMBLE_PUSH :  register fun touch os when network change!"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            r1.register()
        L14:
            return
    }

    public static void doInNetworkChange(android.content.Context r6) {
            long r0 = android.os.SystemClock.elapsedRealtime()
            boolean r2 = getNeedRegister()
            if (r2 == 0) goto L1f
            long r2 = com.xiaomi.mipush.sdk.FTOSPushHelper.a
            r4 = 0
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 <= 0) goto L1a
            r4 = 300000(0x493e0, double:1.482197E-318)
            long r2 = r2 + r4
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 > 0) goto L1f
        L1a:
            com.xiaomi.mipush.sdk.FTOSPushHelper.a = r0
            a(r6)
        L1f:
            return
    }

    public static boolean getNeedRegister() {
            boolean r0 = com.xiaomi.mipush.sdk.FTOSPushHelper.a
            return r0
    }

    public static boolean hasNetwork(android.content.Context r0) {
            boolean r0 = com.xiaomi.mipush.sdk.i.a(r0)
            return r0
    }

    public static void notifyFTOSNotificationClicked(android.content.Context r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            if (r4 == 0) goto L31
            java.lang.String r0 = "pushMsg"
            boolean r1 = r4.containsKey(r0)
            if (r1 != 0) goto Lb
            goto L31
        Lb:
            java.lang.Object r4 = r4.get(r0)
            java.lang.String r4 = (java.lang.String) r4
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L31
            com.xiaomi.mipush.sdk.PushMessageReceiver r0 = com.xiaomi.mipush.sdk.i.a(r3)
            if (r0 == 0) goto L31
            com.xiaomi.mipush.sdk.MiPushMessage r4 = com.xiaomi.mipush.sdk.i.a(r4)
            java.util.Map r1 = r4.getExtra()
            java.lang.String r2 = "notify_effect"
            boolean r1 = r1.containsKey(r2)
            if (r1 == 0) goto L2e
            return
        L2e:
            r0.onNotificationMessageClicked(r3, r4)
        L31:
            return
    }

    public static void setNeedRegister(boolean r0) {
            com.xiaomi.mipush.sdk.FTOSPushHelper.a = r0
            return
    }

    public static void uploadToken(android.content.Context r1, java.lang.String r2) {
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.d
            com.xiaomi.mipush.sdk.i.a(r1, r0, r2)
            return
    }
}
