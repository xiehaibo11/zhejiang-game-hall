package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.Intent;
import android.os.SystemClock;

public class COSPushHelper {
    private static long a;
    private static volatile boolean a;

    public static void convertMessage(Intent intent) {
        i.a(intent);
    }

    public static void doInNetworkChange(Context context) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (getNeedRegister()) {
            long j = a;
            if (j <= 0 || j + 300000 <= jElapsedRealtime) {
                a = jElapsedRealtime;
                registerCOSAssemblePush(context);
            }
        }
    }

    public static boolean getNeedRegister() {
        return a;
    }

    public static boolean hasNetwork(Context context) {
        return i.a(context);
    }

    public static void onNotificationMessageCome(Context context, String str) {
    }

    public static void onPassThoughMessageCome(Context context, String str) {
    }

    public static void registerCOSAssemblePush(Context context) {
        AbstractPushManager abstractPushManagerA = f.a(context).a(e.c);
        if (abstractPushManagerA != null) {
            com.xiaomi.channel.commonutils.logger.b.a("ASSEMBLE_PUSH :  register cos when network change!");
            abstractPushManagerA.register();
        }
    }

    public static synchronized void setNeedRegister(boolean z) {
        a = z;
    }

    public static void uploadToken(Context context, String str) {
        i.a(context, e.c, str);
    }
}
