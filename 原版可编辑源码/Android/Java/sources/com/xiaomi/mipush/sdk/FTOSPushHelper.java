package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import java.util.Map;

public class FTOSPushHelper {
    private static long a;
    private static volatile boolean a;

    private static void a(Context context) {
        AbstractPushManager abstractPushManagerA = f.a(context).a(e.d);
        if (abstractPushManagerA != null) {
            com.xiaomi.channel.commonutils.logger.b.a("ASSEMBLE_PUSH :  register fun touch os when network change!");
            abstractPushManagerA.register();
        }
    }

    public static void doInNetworkChange(Context context) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (getNeedRegister()) {
            long j = a;
            if (j <= 0 || j + 300000 <= jElapsedRealtime) {
                a = jElapsedRealtime;
                a(context);
            }
        }
    }

    public static boolean getNeedRegister() {
        return a;
    }

    public static boolean hasNetwork(Context context) {
        return i.a(context);
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
        a = z;
    }

    public static void uploadToken(Context context, String str) {
        i.a(context, e.d, str);
    }
}
