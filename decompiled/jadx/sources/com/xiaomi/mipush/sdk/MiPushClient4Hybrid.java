package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.b;
import com.xiaomi.push.bp;
import com.xiaomi.push.ey;
import com.xiaomi.push.h;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.hw;
import com.xiaomi.push.hx;
import com.xiaomi.push.hz;
import com.xiaomi.push.ii;
import com.xiaomi.push.ij;
import com.xiaomi.push.ik;
import com.xiaomi.push.ip;
import com.xiaomi.push.iq;
import com.xiaomi.push.it;
import com.xiaomi.push.service.bd;
import com.xiaomi.push.service.br;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class MiPushClient4Hybrid {
    private static MiPushCallback sCallback;
    private static Map<String, b.a> dataMap = new HashMap();
    private static Map<String, Long> sRegisterTimeMap = new HashMap();

    public class MiPushCallback {
        public void onCommandResult(String str, MiPushCommandMessage miPushCommandMessage) {
        }

        public void onReceiveRegisterResult(String str, MiPushCommandMessage miPushCommandMessage) {
        }

        public void onReceiveUnregisterResult(String str, MiPushCommandMessage miPushCommandMessage) {
        }
    }

    private static void addPullNotificationTime(Context context, String str) {
        context.getSharedPreferences("mipush_extra", 0).edit().putLong("last_pull_notification_" + str, System.currentTimeMillis()).commit();
    }

    private static short getDeviceStatus(MiPushMessage miPushMessage, boolean z) {
        String str = miPushMessage.getExtra() == null ? "" : miPushMessage.getExtra().get(Constants.EXTRA_KEY_HYBRID_DEVICE_STATUS);
        int iIntValue = TextUtils.isEmpty(str) ? 0 : Integer.valueOf(str).intValue();
        if (!z) {
            iIntValue = (iIntValue & (-4)) + h.a.NOT_ALLOWED.a();
        }
        return (short) iIntValue;
    }

    public static boolean isRegistered(Context context, String str) {
        return b.m85a(context).a(str) != null;
    }

    public static void onReceiveRegisterResult(Context context, ik ikVar) {
        b.a aVar;
        String strC = ikVar.c();
        if (ikVar.a() == 0 && (aVar = dataMap.get(strC)) != null) {
            aVar.a(ikVar.f714e, ikVar.f715f);
            b.m85a(context).a(strC, aVar);
        }
        ArrayList arrayList = null;
        if (!TextUtils.isEmpty(ikVar.f714e)) {
            arrayList = new ArrayList();
            arrayList.add(ikVar.f714e);
        }
        MiPushCommandMessage miPushCommandMessageGenerateCommandMessage = PushMessageHelper.generateCommandMessage(ey.COMMAND_REGISTER.f347a, arrayList, ikVar.f702a, ikVar.f713d, null, null);
        MiPushCallback miPushCallback = sCallback;
        if (miPushCallback != null) {
            miPushCallback.onReceiveRegisterResult(strC, miPushCommandMessageGenerateCommandMessage);
        }
    }

    public static void onReceiveUnregisterResult(Context context, iq iqVar) {
        MiPushCommandMessage miPushCommandMessageGenerateCommandMessage = PushMessageHelper.generateCommandMessage(ey.COMMAND_UNREGISTER.f347a, null, iqVar.f780a, iqVar.f788d, null, null);
        String strA = iqVar.a();
        MiPushCallback miPushCallback = sCallback;
        if (miPushCallback != null) {
            miPushCallback.onReceiveUnregisterResult(strA, miPushCommandMessageGenerateCommandMessage);
        }
    }

    public static void registerPush(Context context, String str, String str2, String str3) {
        if (b.m85a(context).m90a(str2, str3, str)) {
            ArrayList arrayList = new ArrayList();
            b.a aVarA = b.m85a(context).a(str);
            if (aVarA != null) {
                arrayList.add(aVarA.c);
                MiPushCommandMessage miPushCommandMessageGenerateCommandMessage = PushMessageHelper.generateCommandMessage(ey.COMMAND_REGISTER.f347a, arrayList, 0L, null, null, null);
                MiPushCallback miPushCallback = sCallback;
                if (miPushCallback != null) {
                    miPushCallback.onReceiveRegisterResult(str, miPushCommandMessageGenerateCommandMessage);
                }
            }
            if (shouldPullNotification(context, str)) {
                ii iiVar = new ii();
                iiVar.b(str2);
                iiVar.c(ht.PullOfflineMessage.f519a);
                iiVar.a(bd.a());
                iiVar.a(false);
                ao.a(context).a(iiVar, hj.Notification, false, true, null, false, str, str2);
                com.xiaomi.channel.commonutils.logger.b.b("MiPushClient4Hybrid pull offline pass through message");
                addPullNotificationTime(context, str);
                return;
            }
            return;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (Math.abs(jCurrentTimeMillis - (sRegisterTimeMap.get(str) != null ? sRegisterTimeMap.get(str).longValue() : 0L)) < 5000) {
            com.xiaomi.channel.commonutils.logger.b.m43a("MiPushClient4Hybrid  Could not send register message within 5s repeatedly.");
            return;
        }
        sRegisterTimeMap.put(str, Long.valueOf(jCurrentTimeMillis));
        String strA = bp.a(6);
        b.a aVar = new b.a(context);
        aVar.c(str2, str3, strA);
        dataMap.put(str, aVar);
        ij ijVar = new ij();
        ijVar.a(bd.a());
        ijVar.b(str2);
        ijVar.e(str3);
        ijVar.d(str);
        ijVar.f(strA);
        ijVar.c(com.xiaomi.push.h.m397a(context, context.getPackageName()));
        ijVar.b(com.xiaomi.push.h.a(context, context.getPackageName()));
        ijVar.h("4_9_0");
        ijVar.a(40090);
        ijVar.a(hx.Init);
        if (!com.xiaomi.push.m.m580d()) {
            String strE = com.xiaomi.push.j.e(context);
            if (!TextUtils.isEmpty(strE)) {
                ijVar.i(bp.a(strE));
            }
        }
        int iA = com.xiaomi.push.j.a();
        if (iA >= 0) {
            ijVar.c(iA);
        }
        ii iiVar2 = new ii();
        iiVar2.c(ht.HybridRegister.f519a);
        iiVar2.b(b.m85a(context).m86a());
        iiVar2.d(context.getPackageName());
        iiVar2.a(it.a(ijVar));
        iiVar2.a(bd.a());
        ao.a(context).a(iiVar2, hj.Notification, (hw) null);
    }

    public static void removeDuplicateCache(Context context, MiPushMessage miPushMessage) {
        String messageId = miPushMessage.getExtra() != null ? miPushMessage.getExtra().get("jobkey") : null;
        if (TextUtils.isEmpty(messageId)) {
            messageId = miPushMessage.getMessageId();
        }
        am.a(context, messageId);
    }

    public static void reportMessageArrived(Context context, MiPushMessage miPushMessage, boolean z) {
        if (miPushMessage == null || miPushMessage.getExtra() == null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("do not ack message, message is null");
            return;
        }
        try {
            hz hzVar = new hz();
            hzVar.b(b.m85a(context).m86a());
            hzVar.a(miPushMessage.getMessageId());
            hzVar.a(Long.valueOf(miPushMessage.getExtra().get(Constants.EXTRA_KEY_HYBRID_MESSAGE_TS)).longValue());
            hzVar.a(getDeviceStatus(miPushMessage, z));
            if (!TextUtils.isEmpty(miPushMessage.getTopic())) {
                hzVar.c(miPushMessage.getTopic());
            }
            ao.a(context).a(hzVar, hj.AckMessage, false, br.a(PushMessageHelper.generateMessage(miPushMessage)));
            com.xiaomi.channel.commonutils.logger.b.b("MiPushClient4Hybrid ack mina message, messageId is " + miPushMessage.getMessageId());
        } finally {
            try {
            } finally {
            }
        }
    }

    public static void reportMessageClicked(Context context, MiPushMessage miPushMessage) {
        MiPushClient.reportMessageClicked(context, miPushMessage);
    }

    public static void setCallback(MiPushCallback miPushCallback) {
        sCallback = miPushCallback;
    }

    private static boolean shouldPullNotification(Context context, String str) {
        SharedPreferences sharedPreferences = context.getSharedPreferences("mipush_extra", 0);
        StringBuilder sb = new StringBuilder();
        sb.append("last_pull_notification_");
        sb.append(str);
        return Math.abs(System.currentTimeMillis() - sharedPreferences.getLong(sb.toString(), -1L)) > 300000;
    }

    public static void unregisterPush(Context context, String str) {
        sRegisterTimeMap.remove(str);
        b.a aVarA = b.m85a(context).a(str);
        if (aVarA == null) {
            return;
        }
        ip ipVar = new ip();
        ipVar.a(bd.a());
        ipVar.d(str);
        ipVar.b(aVarA.f87a);
        ipVar.c(aVarA.c);
        ipVar.e(aVarA.b);
        ii iiVar = new ii();
        iiVar.c(ht.HybridUnregister.f519a);
        iiVar.b(b.m85a(context).m86a());
        iiVar.d(context.getPackageName());
        iiVar.a(it.a(ipVar));
        iiVar.a(bd.a());
        ao.a(context).a(iiVar, hj.Notification, (hw) null);
        b.m85a(context).b(str);
    }

    public static void uploadClearMessageData(Context context, LinkedList<? extends Object> linkedList) {
        com.xiaomi.push.service.al.a(context, linkedList);
    }
}
