package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import android.util.Base64;
import com.xiaomi.push.hj;
import com.xiaomi.push.if;
import com.xiaomi.push.im;
import com.xiaomi.push.it;
import com.xiaomi.push.service.bk;
import java.util.HashMap;
import java.util.Map;

public class FCMPushHelper {
    private static Map<String, String> a(Context context) {
        HashMap map = new HashMap();
        map.put("actionType", String.valueOf(hj.f.a()));
        map.put("deviceStatus", String.valueOf((int) it.a(context, context.getPackageName())));
        map.put("mat", Long.toString(System.currentTimeMillis()));
        return map;
    }

    private static void a(Context context, if ifVar) {
        try {
            MiPushMessage miPushMessageGenerateMessage = PushMessageHelper.generateMessage((im) ai.a(context, ifVar), ifVar.a(), false);
            PushMessageReceiver pushMessageReceiverA = i.a(context);
            if (pushMessageReceiverA != null) {
                pushMessageReceiverA.onNotificationMessageArrived(context, miPushMessageGenerateMessage);
            }
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.a("fcm broadcast notification come error ", th);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0089  */
    /* JADX WARN: Removed duplicated region for block: B:19:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void a(Context context, byte[] bArr) {
        String str;
        boolean zA = ao.a(context).a();
        boolean z = true;
        boolean z2 = !"com.xiaomi.xmsf".equals(context.getPackageName());
        boolean zA2 = a(context);
        boolean z3 = false;
        if (zA && z2 && zA2) {
            bArr = com.xiaomi.push.service.n.a(bArr, b.a(context).d());
            if (bArr != null) {
                String strEncodeToString = Base64.encodeToString(bArr, 2);
                if (TextUtils.isEmpty(strEncodeToString)) {
                    com.xiaomi.channel.commonutils.logger.b.a("fcm message buf base64 encode failed");
                    z = false;
                } else {
                    Intent intent = new Intent(bk.n);
                    intent.setPackage("com.xiaomi.xmsf");
                    intent.setClassName("com.xiaomi.xmsf", "com.xiaomi.push.service.XMPushService");
                    intent.putExtra("ext_fcm_container_buffer", strEncodeToString);
                    intent.putExtra("mipush_app_package", context.getPackageName());
                    context.startService(intent);
                    com.xiaomi.channel.commonutils.logger.b.a("fcm message reroute to xmsf");
                }
                z3 = z;
                if (z3) {
                    com.xiaomi.channel.commonutils.logger.b.b("fcm message post local");
                    com.xiaomi.push.service.al.a(context, com.xiaomi.push.service.y.a(bArr), bArr);
                    return;
                }
                return;
            }
            str = "fcm message encrypt failed";
        } else {
            str = String.format("xmsf can not receive fcm msg - shouldUseMIUIPush=%s;isNotXmsf=%s;xmsfSupport=%s", Boolean.valueOf(zA), Boolean.valueOf(z2), Boolean.valueOf(zA2));
        }
        com.xiaomi.channel.commonutils.logger.b.a(str);
        if (z3) {
        }
    }

    private static boolean a(Context context) {
        return ((long) com.xiaomi.push.m.b(context)) >= 50002000 && b(context);
    }

    private static boolean b(Context context) {
        return context.getSharedPreferences("mipush_extra", 0).getBoolean("is_xmsf_sup_decrypt", false);
    }

    public static void clearToken(Context context) {
        i.a(context, e.b);
    }

    public static void convertMessage(Intent intent) {
        i.a(intent);
    }

    public static boolean isFCMSwitchOpen(Context context) {
        return i.a(context, e.b) && MiPushClient.getOpenFCMPush(context);
    }

    public static void notifyFCMNotificationCome(Context context, Map<String, String> map) {
        PushMessageReceiver pushMessageReceiverA;
        String str = map.get("pushMsg");
        if (TextUtils.isEmpty(str) || (pushMessageReceiverA = i.a(context)) == null) {
            return;
        }
        pushMessageReceiverA.onNotificationMessageArrived(context, i.a(str));
    }

    public static Map<String, String> notifyFCMPassThoughMessageCome(Context context, Map<String, String> map) {
        PushMessageReceiver pushMessageReceiverA;
        String str = map.get("pushMsg");
        if (!TextUtils.isEmpty(str) && (pushMessageReceiverA = i.a(context)) != null) {
            pushMessageReceiverA.onReceivePassThroughMessage(context, i.a(str));
        }
        String str2 = map.get("mipushContainer");
        if (TextUtils.isEmpty(str2)) {
            return new HashMap();
        }
        try {
            byte[] bArrDecode = Base64.decode(str2, 2);
            a(context, com.xiaomi.push.service.y.a(bArrDecode));
            a(context, bArrDecode);
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.a("fcm notify notification error ", th);
        }
        return a(context);
    }

    public static void persistIfXmsfSupDecrypt(Context context) {
        context.getSharedPreferences("mipush_extra", 0).edit().putBoolean("is_xmsf_sup_decrypt", ((long) com.xiaomi.push.m.b(context)) >= 50002000).apply();
    }

    public static void reportFCMMessageDelete() {
        MiTinyDataClient.upload(i.c(e.b), "fcm", 1L, "some fcm messages was deleted ");
    }

    public static void uploadToken(Context context, String str) {
        i.a(context, e.b, str);
    }
}
