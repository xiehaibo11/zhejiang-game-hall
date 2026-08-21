package com.xiaomi.push.service.receivers;

public class NetworkStatusReceiver extends android.content.BroadcastReceiver {
    private static boolean a;
    private boolean b;

    static {
            return
    }

    public NetworkStatusReceiver() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r0 = 1
            r1.b = r0
            return
    }

    public NetworkStatusReceiver(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            r1 = 0
            r0.b = r1
            r1 = 1
            com.xiaomi.push.service.receivers.NetworkStatusReceiver.a = r1
            return
    }

    private void a(android.content.Context r4) {
            r3 = this;
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r4)
            boolean r0 = r0.a()
            if (r0 != 0) goto L3e
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r4)
            boolean r0 = r0.c()
            if (r0 == 0) goto L3e
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r4)
            boolean r0 = r0.f()
            if (r0 != 0) goto L3e
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L3a
            r0.<init>()     // Catch: java.lang.Exception -> L3a
            android.content.ComponentName r1 = new android.content.ComponentName     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = "com.xiaomi.push.service.XMPushService"
            r1.<init>(r4, r2)     // Catch: java.lang.Exception -> L3a
            r0.setComponent(r1)     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = "com.xiaomi.push.network_status_changed"
            r0.setAction(r1)     // Catch: java.lang.Exception -> L3a
            com.xiaomi.push.service.ServiceClient r1 = com.xiaomi.push.service.ServiceClient.getInstance(r4)     // Catch: java.lang.Exception -> L3a
            r1.startServiceSafely(r0)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L3e:
            com.xiaomi.push.hb.a(r4)
            boolean r0 = com.xiaomi.push.bj.b(r4)
            if (r0 == 0) goto L58
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r4)
            boolean r0 = r0.b()
            if (r0 == 0) goto L58
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r4)
            r0.c()
        L58:
            boolean r0 = com.xiaomi.push.bj.b(r4)
            if (r0 == 0) goto Lea
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r4)
            com.xiaomi.mipush.sdk.au r1 = com.xiaomi.mipush.sdk.au.a
            java.lang.String r0 = r0.a(r1)
            java.lang.String r1 = "syncing"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L73
            com.xiaomi.mipush.sdk.MiPushClient.disablePush(r4)
        L73:
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r4)
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.b
            java.lang.String r0 = r0.a(r2)
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L86
            com.xiaomi.mipush.sdk.MiPushClient.enablePush(r4)
        L86:
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r4)
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.c
            java.lang.String r0 = r0.a(r2)
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L99
            com.xiaomi.mipush.sdk.MiPushClient.syncAssemblePushToken(r4)
        L99:
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r4)
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.d
            java.lang.String r0 = r0.a(r2)
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Lac
            com.xiaomi.mipush.sdk.MiPushClient.syncAssembleFCMPushToken(r4)
        Lac:
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r4)
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.e
            java.lang.String r0 = r0.a(r2)
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Lbf
            com.xiaomi.mipush.sdk.MiPushClient.syncAssembleCOSPushToken(r4)
        Lbf:
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r4)
            com.xiaomi.mipush.sdk.au r2 = com.xiaomi.mipush.sdk.au.f
            java.lang.String r0 = r0.a(r2)
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Ld2
            com.xiaomi.mipush.sdk.MiPushClient.syncAssembleFTOSPushToken(r4)
        Ld2:
            boolean r0 = com.xiaomi.mipush.sdk.HWPushHelper.needConnect()
            if (r0 == 0) goto Le4
            boolean r0 = com.xiaomi.mipush.sdk.HWPushHelper.shouldTryConnect(r4)
            if (r0 == 0) goto Le4
            com.xiaomi.mipush.sdk.HWPushHelper.setConnectTime(r4)
            com.xiaomi.mipush.sdk.HWPushHelper.registerHuaWeiAssemblePush(r4)
        Le4:
            com.xiaomi.mipush.sdk.COSPushHelper.doInNetworkChange(r4)
            com.xiaomi.mipush.sdk.FTOSPushHelper.doInNetworkChange(r4)
        Lea:
            return
    }

    static void a(com.xiaomi.push.service.receivers.NetworkStatusReceiver r0, android.content.Context r1) {
            r0.a(r1)
            return
    }

    public static boolean a() {
            boolean r0 = com.xiaomi.push.service.receivers.NetworkStatusReceiver.a
            return r0
    }

    @Override
    public void onReceive(android.content.Context r2, android.content.Intent r3) {
            r1 = this;
            boolean r3 = r1.b
            if (r3 == 0) goto L5
            return
        L5:
            android.os.Handler r3 = com.xiaomi.push.o.a()
            com.xiaomi.push.service.receivers.a r0 = new com.xiaomi.push.service.receivers.a
            r0.<init>(r1, r2)
            r3.post(r0)
            return
    }
}
