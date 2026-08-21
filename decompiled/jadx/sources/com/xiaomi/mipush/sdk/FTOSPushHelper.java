package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class FTOSPushHelper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static long f7976a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static volatile boolean f47a;

    private static void a(Context context) {
        AbstractPushManager abstractPushManagerA = f.a(context).a(e.ASSEMBLE_PUSH_FTOS);
        if (abstractPushManagerA != null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH :  register fun touch os when network change!");
            abstractPushManagerA.register();
        }
    }

    public static void doInNetworkChange(Context context) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (getNeedRegister()) {
            long j = f7976a;
            if (j <= 0 || j + 300000 <= jElapsedRealtime) {
                f7976a = jElapsedRealtime;
                a(context);
            }
        }
    }

    public static boolean getNeedRegister() {
        return f47a;
    }

    public static boolean hasNetwork(Context context) {
        return i.m108a(context);
    }

    public static void notifyFTOSNotificationClicked(Context context, Map<String, String> map) {
        PushMessageReceiver pushMessageReceiverA;
        if (map == null || !map.containsKey("pushMsg")) {
            return;
        }
        String str = map.get("pushMsg");
        if (TextUtils.isEmpty(str) || (pushMessageReceiverA = i.a(context)) == null) {
            return;
        }
        MiPushMessage miPushMessageA = i.a(str);
        if (miPushMessageA.getExtra().containsKey("notify_effect")) {
            return;
        }
        pushMessageReceiverA.onNotificationMessageClicked(context, miPushMessageA);
    }

    public static void setNeedRegister(boolean z) {
        f47a = z;
    }

    public static void uploadToken(Context context, String str) {
        i.m107a(context, e.ASSEMBLE_PUSH_FTOS, str);
    }
}
