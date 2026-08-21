package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.Intent;
import android.os.SystemClock;

/* JADX INFO: loaded from: classes4.dex */
public class COSPushHelper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static long f7975a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static volatile boolean f46a;

    public static void convertMessage(Intent intent) {
        i.a(intent);
    }

    public static void doInNetworkChange(Context context) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (getNeedRegister()) {
            long j = f7975a;
            if (j <= 0 || j + 300000 <= jElapsedRealtime) {
                f7975a = jElapsedRealtime;
                registerCOSAssemblePush(context);
            }
        }
    }

    public static boolean getNeedRegister() {
        return f46a;
    }

    public static boolean hasNetwork(Context context) {
        return i.m108a(context);
    }

    public static void onNotificationMessageCome(Context context, String str) {
    }

    public static void onPassThoughMessageCome(Context context, String str) {
    }

    public static void registerCOSAssemblePush(Context context) {
        AbstractPushManager abstractPushManagerA = f.a(context).a(e.ASSEMBLE_PUSH_COS);
        if (abstractPushManagerA != null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH :  register cos when network change!");
            abstractPushManagerA.register();
        }
    }

    public static synchronized void setNeedRegister(boolean z) {
        f46a = z;
    }

    public static void uploadToken(Context context, String str) {
        i.m107a(context, e.ASSEMBLE_PUSH_COS, str);
    }
}
