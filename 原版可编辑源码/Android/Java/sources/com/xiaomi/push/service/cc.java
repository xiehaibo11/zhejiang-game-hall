package com.xiaomi.push.service;

import android.app.Notification;
import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.service.notification.StatusBarNotification;
import android.text.TextUtils;
import com.xiaomi.push.al;
import com.xiaomi.push.eq;
import java.util.List;
import java.util.Map;

public class cc {
    private static int a(Map<String, String> map) {
        return Math.max(0, com.xiaomi.push.w.a(map.get("notification_top_period"), 0));
    }

    private static Notification a(Notification notification, int i, String str, ax axVar) {
        if (notification != null) {
            if (!str.equals(notification.extras.getString("message_id"))) {
                notification = null;
            }
            return notification;
        }
        List<StatusBarNotification> listB = axVar.b();
        if (listB == null) {
            return null;
        }
        for (StatusBarNotification statusBarNotification : listB) {
            Notification notification2 = statusBarNotification.getNotification();
            String string = notification2.extras.getString("message_id");
            if (i == statusBarNotification.getId() && str.equals(string)) {
                return notification2;
            }
        }
        return null;
    }

    private static al.a a(Context context, String str, int i, String str2, Notification notification) {
        return new cd(i, str2, context, str, notification);
    }

    static void a(Context context, String str, int i, String str2, Notification notification) {
        if (com.xiaomi.push.m.a(context) && notification != null && notification.extras.getBoolean("mipush_n_top_flag", false)) {
            c(context, str, i, str2, notification);
        }
    }

    static void a(Context context, Map<String, String> map, eq eqVar, long j) {
        if (map == null || eqVar == null || !com.xiaomi.push.m.a(context) || !a(map)) {
            return;
        }
        int iA = a(map);
        int iB = b(map);
        if (iA <= 0 || iB > iA) {
            com.xiaomi.channel.commonutils.logger.b.d("set top notification failed - period:" + iA + " frequency:" + iB);
            return;
        }
        eqVar.setPriority(2);
        Bundle bundle = new Bundle();
        bundle.putLong("mipush_org_when", j);
        bundle.putBoolean("mipush_n_top_flag", true);
        if (iB > 0) {
            bundle.putInt("mipush_n_top_fre", iB);
        }
        bundle.putInt("mipush_n_top_prd", iA);
        eqVar.addExtras(bundle);
    }

    private static boolean a(Map<String, String> map) {
        String str = map.get("notification_top_repeat");
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        boolean z = Boolean.parseBoolean(str);
        com.xiaomi.channel.commonutils.logger.b.c("top notification' repeat is " + z);
        return z;
    }

    private static int b(Map<String, String> map) {
        return Math.max(0, com.xiaomi.push.w.a(map.get("notification_top_frequency"), 0));
    }

    private static String b(int i, String str) {
        return "n_top_update_" + i + "_" + str;
    }

    private static void c(Context context, String str, int i, String str2, Notification notification) {
        ax axVarA;
        Notification notificationA;
        if (context == null || TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || Build.VERSION.SDK_INT < 26 || (notificationA = a(notification, i, str2, (axVarA = ax.a(context, str)))) == null) {
            return;
        }
        boolean z = notification != null;
        if (notificationA.getGroupAlertBehavior() != 1) {
            com.xiaomi.push.bk.a((Object) notificationA, "mGroupAlertBehavior", (Object) 1);
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        long j = notificationA.extras.getLong("mipush_org_when", 0L);
        int i2 = notificationA.extras.getInt("mipush_n_top_fre", 0);
        int i3 = notificationA.extras.getInt("mipush_n_top_prd", 0);
        if (i3 <= 0 || i3 < i2) {
            return;
        }
        long j2 = ((long) (i3 * 1000)) + j;
        int iMin = (j >= jCurrentTimeMillis || jCurrentTimeMillis >= j2) ? 0 : i2 > 0 ? (int) Math.min((j2 - jCurrentTimeMillis) / 1000, i2) : i3;
        if (!z) {
            if (iMin > 0) {
                notificationA.when = jCurrentTimeMillis;
                com.xiaomi.channel.commonutils.logger.b.a("update top notification: " + str2);
                axVarA.a(i, notificationA);
            } else {
                Notification.Builder builderRecoverBuilder = Notification.Builder.recoverBuilder(context, notificationA);
                builderRecoverBuilder.setPriority(0);
                builderRecoverBuilder.setWhen(jCurrentTimeMillis);
                Bundle extras = builderRecoverBuilder.getExtras();
                if (extras != null) {
                    extras.remove("mipush_n_top_flag");
                    extras.remove("mipush_org_when");
                    extras.remove("mipush_n_top_fre");
                    extras.remove("mipush_n_top_prd");
                    builderRecoverBuilder.setExtras(extras);
                }
                com.xiaomi.channel.commonutils.logger.b.a("update top notification to common: " + str2);
                axVarA.a(i, builderRecoverBuilder.build());
            }
        }
        if (iMin > 0) {
            com.xiaomi.channel.commonutils.logger.b.a("schedule top notification next update delay: " + iMin);
            com.xiaomi.push.al.a(context).a(b(i, str2));
            com.xiaomi.push.al.a(context).b(a(context, str, i, str2, (Notification) null), iMin);
        }
    }
}
