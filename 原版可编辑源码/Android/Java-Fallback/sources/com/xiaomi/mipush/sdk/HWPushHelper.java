package com.xiaomi.mipush.sdk;

public class HWPushHelper {
    private static boolean a;

    static {
            return
    }

    public HWPushHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void convertMessage(android.content.Intent r0) {
            com.xiaomi.mipush.sdk.i.a(r0)
            return
    }

    public static boolean hasNetwork(android.content.Context r0) {
            boolean r0 = com.xiaomi.mipush.sdk.i.a(r0)
            return r0
    }

    public static boolean isHmsTokenSynced(android.content.Context r3) {
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.a
            java.lang.String r0 = com.xiaomi.mipush.sdk.i.a(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 == 0) goto Le
            return r2
        Le:
            java.lang.String r0 = com.xiaomi.mipush.sdk.i.a(r3, r0)
            com.xiaomi.mipush.sdk.af r3 = com.xiaomi.mipush.sdk.af.a(r3)
            com.xiaomi.mipush.sdk.au r1 = com.xiaomi.mipush.sdk.au.c
            java.lang.String r3 = r3.a(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L32
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L32
            java.lang.String r0 = "synced"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L32
            r3 = 1
            return r3
        L32:
            return r2
    }

    public static boolean isUserOpenHmsPush(android.content.Context r0) {
            boolean r0 = com.xiaomi.mipush.sdk.MiPushClient.getOpenHmsPush(r0)
            return r0
    }

    public static boolean needConnect() {
            boolean r0 = com.xiaomi.mipush.sdk.HWPushHelper.a
            return r0
    }

    public static void notifyHmsNotificationMessageClicked(android.content.Context r5, java.lang.String r6) {
            java.lang.String r0 = "pushMsg"
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            java.lang.String r2 = ""
            if (r1 != 0) goto L37
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L2f
            r1.<init>(r6)     // Catch: java.lang.Exception -> L2f
            int r6 = r1.length()     // Catch: java.lang.Exception -> L2f
            if (r6 <= 0) goto L37
            r6 = 0
        L16:
            int r3 = r1.length()     // Catch: java.lang.Exception -> L2f
            if (r6 >= r3) goto L37
            org.json.JSONObject r3 = r1.getJSONObject(r6)     // Catch: java.lang.Exception -> L2f
            boolean r4 = r3.has(r0)     // Catch: java.lang.Exception -> L2f
            if (r4 == 0) goto L2c
            java.lang.String r6 = r3.getString(r0)     // Catch: java.lang.Exception -> L2f
            r2 = r6
            goto L37
        L2c:
            int r6 = r6 + 1
            goto L16
        L2f:
            r6 = move-exception
            java.lang.String r6 = r6.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r6)
        L37:
            com.xiaomi.mipush.sdk.PushMessageReceiver r6 = com.xiaomi.mipush.sdk.i.a(r5)
            if (r6 == 0) goto L51
            com.xiaomi.mipush.sdk.MiPushMessage r0 = com.xiaomi.mipush.sdk.i.a(r2)
            java.util.Map r1 = r0.getExtra()
            java.lang.String r2 = "notify_effect"
            boolean r1 = r1.containsKey(r2)
            if (r1 == 0) goto L4e
            return
        L4e:
            r6.onNotificationMessageClicked(r5, r0)
        L51:
            return
    }

    public static void notifyHmsPassThoughMessageArrived(android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = "content"
            java.lang.String r1 = ""
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L1b
            if (r2 != 0) goto L23
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1b
            r2.<init>(r4)     // Catch: java.lang.Exception -> L1b
            boolean r4 = r2.has(r0)     // Catch: java.lang.Exception -> L1b
            if (r4 == 0) goto L23
            java.lang.String r4 = r2.getString(r0)     // Catch: java.lang.Exception -> L1b
            r1 = r4
            goto L23
        L1b:
            r4 = move-exception
            java.lang.String r4 = r4.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r4)
        L23:
            com.xiaomi.mipush.sdk.PushMessageReceiver r4 = com.xiaomi.mipush.sdk.i.a(r3)
            if (r4 == 0) goto L30
            com.xiaomi.mipush.sdk.MiPushMessage r0 = com.xiaomi.mipush.sdk.i.a(r1)
            r4.onReceivePassThroughMessage(r3, r0)
        L30:
            return
    }

    public static void registerHuaWeiAssemblePush(android.content.Context r1) {
            com.xiaomi.mipush.sdk.f r1 = com.xiaomi.mipush.sdk.f.a(r1)
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.a
            com.xiaomi.mipush.sdk.AbstractPushManager r1 = r1.a(r0)
            if (r1 == 0) goto Lf
            r1.register()
        Lf:
            return
    }

    public static void reportError(java.lang.String r0, int r1) {
            com.xiaomi.mipush.sdk.i.a(r0, r1)
            return
    }

    public static synchronized void setConnectTime(android.content.Context r4) {
            java.lang.Class<com.xiaomi.mipush.sdk.HWPushHelper> r0 = com.xiaomi.mipush.sdk.HWPushHelper.class
            monitor-enter(r0)
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r4 = r4.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L1d
            android.content.SharedPreferences$Editor r4 = r4.edit()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = "last_connect_time"
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1d
            android.content.SharedPreferences$Editor r4 = r4.putLong(r1, r2)     // Catch: java.lang.Throwable -> L1d
            r4.commit()     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r0)
            return
        L1d:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static synchronized void setGetTokenTime(android.content.Context r4) {
            java.lang.Class<com.xiaomi.mipush.sdk.HWPushHelper> r0 = com.xiaomi.mipush.sdk.HWPushHelper.class
            monitor-enter(r0)
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r4 = r4.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L1d
            android.content.SharedPreferences$Editor r4 = r4.edit()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = "last_get_token_time"
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1d
            android.content.SharedPreferences$Editor r4 = r4.putLong(r1, r2)     // Catch: java.lang.Throwable -> L1d
            r4.commit()     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r0)
            return
        L1d:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static void setNeedConnect(boolean r0) {
            com.xiaomi.mipush.sdk.HWPushHelper.a = r0
            return
    }

    public static synchronized boolean shouldGetToken(android.content.Context r7) {
            java.lang.Class<com.xiaomi.mipush.sdk.HWPushHelper> r0 = com.xiaomi.mipush.sdk.HWPushHelper.class
            monitor-enter(r0)
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r7 = r7.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L25
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = "last_get_token_time"
            r5 = -1
            long r5 = r7.getLong(r1, r5)     // Catch: java.lang.Throwable -> L25
            long r3 = r3 - r5
            long r3 = java.lang.Math.abs(r3)     // Catch: java.lang.Throwable -> L25
            r5 = 172800000(0xa4cb800, double:8.53745436E-316)
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 <= 0) goto L23
            r2 = 1
        L23:
            monitor-exit(r0)
            return r2
        L25:
            r7 = move-exception
            monitor-exit(r0)
            throw r7
    }

    public static synchronized boolean shouldTryConnect(android.content.Context r7) {
            java.lang.Class<com.xiaomi.mipush.sdk.HWPushHelper> r0 = com.xiaomi.mipush.sdk.HWPushHelper.class
            monitor-enter(r0)
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r7 = r7.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L24
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L24
            java.lang.String r1 = "last_connect_time"
            r5 = -1
            long r5 = r7.getLong(r1, r5)     // Catch: java.lang.Throwable -> L24
            long r3 = r3 - r5
            long r3 = java.lang.Math.abs(r3)     // Catch: java.lang.Throwable -> L24
            r5 = 5000(0x1388, double:2.4703E-320)
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 <= 0) goto L22
            r2 = 1
        L22:
            monitor-exit(r0)
            return r2
        L24:
            r7 = move-exception
            monitor-exit(r0)
            throw r7
    }

    public static void uploadToken(android.content.Context r1, java.lang.String r2) {
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.a
            com.xiaomi.mipush.sdk.i.a(r1, r0, r2)
            return
    }
}
