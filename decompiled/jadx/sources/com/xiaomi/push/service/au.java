package com.xiaomi.push.service;

import android.app.Notification;
import android.app.NotificationChannel;
import android.content.Context;
import android.graphics.drawable.Icon;
import android.os.Build;
import android.os.Bundle;
import android.service.notification.StatusBarNotification;
import android.text.TextUtils;
import com.xiaomi.push.ho;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
class au {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static au f8315a = new au();

    class a {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        List<b> f921a;
        List<b> b;

        private a() {
            this.f921a = new ArrayList();
            this.b = new ArrayList();
        }
    }

    class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        int f8317a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        Notification f922a;

        public b(int i, Notification notification) {
            this.f8317a = i;
            this.f922a = notification;
        }

        public String toString() {
            return "id:" + this.f8317a;
        }
    }

    private au() {
    }

    private int a(String str, String str2) {
        return ("GroupSummary" + str + str2).hashCode();
    }

    public static au a() {
        return f8315a;
    }

    private String a(Notification notification) {
        if (notification == null || notification.extras == null) {
            return null;
        }
        return notification.extras.getString("push_src_group_name");
    }

    private List<StatusBarNotification> a(ax axVar) {
        List<StatusBarNotification> listM645b = axVar != null ? axVar.m645b() : null;
        if (listM645b == null || listM645b.size() == 0) {
            return null;
        }
        return listM645b;
    }

    private void a(Context context, int i, Notification notification, boolean z) {
        String str;
        String strC = ay.c(notification);
        if (TextUtils.isEmpty(strC)) {
            str = "group auto not extract pkg from notification:" + i;
        } else {
            List<StatusBarNotification> listA = a(ax.a(context, strC));
            if (listA != null) {
                String strB = b(notification);
                HashMap map = new HashMap();
                for (StatusBarNotification statusBarNotification : listA) {
                    if (statusBarNotification.getNotification() != null && statusBarNotification.getId() != i) {
                        a(map, statusBarNotification);
                    }
                }
                for (Map.Entry<String, a> entry : map.entrySet()) {
                    String key = entry.getKey();
                    if (!TextUtils.isEmpty(key)) {
                        a value = entry.getValue();
                        if (z && key.equals(strB) && !m634b(notification)) {
                            (m633a(notification) ? value.b : value.f921a).add(new b(i, notification));
                        }
                        int size = value.f921a.size();
                        if (value.b.size() <= 0) {
                            if (z && size >= 2) {
                                a(context, strC, key, value.f921a.get(0).f922a);
                            }
                        } else if (size <= 0) {
                            a(context, strC, key);
                        }
                    }
                }
                return;
            }
            str = "group auto not get notifications";
        }
        com.xiaomi.channel.commonutils.logger.b.m43a(str);
    }

    private void a(Context context, String str, String str2) {
        com.xiaomi.channel.commonutils.logger.b.b("group cancel summary:" + str2);
        ax.a(context, str).a(a(str, str2));
    }

    private void a(Context context, String str, String str2, Notification notification) {
        Notification.Builder defaults;
        try {
            if (TextUtils.isEmpty(str2)) {
                com.xiaomi.channel.commonutils.logger.b.m43a("group show summary group is null");
                return;
            }
            int iA = ay.a(context, str);
            if (iA == 0) {
                com.xiaomi.channel.commonutils.logger.b.m43a("group show summary not get icon from " + str);
                return;
            }
            ax axVarA = ax.a(context, str);
            if (Build.VERSION.SDK_INT >= 26) {
                String strB = axVarA.b(notification.getChannelId(), "groupSummary");
                NotificationChannel notificationChannelM639a = axVarA.m639a(strB);
                if ("groupSummary".equals(strB) && notificationChannelM639a == null) {
                    axVarA.a(new NotificationChannel(strB, "group_summary", 3));
                }
                defaults = new Notification.Builder(context, strB);
            } else {
                defaults = new Notification.Builder(context).setPriority(0).setDefaults(-1);
            }
            ay.a(defaults, true);
            Notification notificationBuild = defaults.setContentTitle("GroupSummary").setContentText("GroupSummary").setSmallIcon(Icon.createWithResource(str, iA)).setAutoCancel(true).setGroup(str2).setGroupSummary(true).build();
            if (!com.xiaomi.push.m.m579c() && "com.xiaomi.xmsf".equals(context.getPackageName())) {
                ay.m646a(notificationBuild, str);
            }
            int iA2 = a(str, str2);
            axVarA.a(iA2, notificationBuild);
            com.xiaomi.channel.commonutils.logger.b.b("group show summary notify:" + iA2);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a("group show summary error " + e);
        }
    }

    private void a(Map<String, a> map, StatusBarNotification statusBarNotification) {
        String strB = b(statusBarNotification.getNotification());
        a aVar = map.get(strB);
        if (aVar == null) {
            aVar = new a();
            map.put(strB, aVar);
        }
        (m633a(statusBarNotification.getNotification()) ? aVar.b : aVar.f921a).add(new b(statusBarNotification.getId(), statusBarNotification.getNotification()));
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private boolean m632a() {
        return Build.VERSION.SDK_INT >= 24;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private boolean m633a(Notification notification) {
        if (notification == null) {
            return false;
        }
        Object objA = com.xiaomi.push.bk.a((Object) notification, "isGroupSummary", (Object[]) null);
        if (objA instanceof Boolean) {
            return ((Boolean) objA).booleanValue();
        }
        return false;
    }

    private boolean a(Context context) {
        if (b(context) && ax.m637a(context)) {
            return ba.a(context).a(ho.LatestNotificationNotIntoGroupSwitch.a(), false);
        }
        return false;
    }

    private String b(Notification notification) {
        if (notification == null) {
            return null;
        }
        return m634b(notification) ? a(notification) : notification.getGroup();
    }

    private void b(Context context, int i, Notification notification) {
        String str;
        String strC = ay.c(notification);
        if (TextUtils.isEmpty(strC)) {
            str = "group restore not extract pkg from notification:" + i;
        } else {
            ax axVarA = ax.a(context, strC);
            List<StatusBarNotification> listA = a(axVarA);
            if (listA != null) {
                for (StatusBarNotification statusBarNotification : listA) {
                    Notification notification2 = statusBarNotification.getNotification();
                    if (notification2 != null && m634b(notification2) && statusBarNotification.getId() != i) {
                        Notification.Builder builderRecoverBuilder = Notification.Builder.recoverBuilder(context, statusBarNotification.getNotification());
                        builderRecoverBuilder.setGroup(a(notification2));
                        ay.a(builderRecoverBuilder, m633a(notification2));
                        axVarA.a(statusBarNotification.getId(), builderRecoverBuilder.build());
                        com.xiaomi.channel.commonutils.logger.b.b("group restore notification:" + statusBarNotification.getId());
                    }
                }
                return;
            }
            str = "group restore not get notifications";
        }
        com.xiaomi.channel.commonutils.logger.b.m43a(str);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    private boolean m634b(Notification notification) {
        if (notification == null || notification.getGroup() == null || notification.extras == null) {
            return false;
        }
        long j = notification.extras.getLong("push_src_group_time");
        return notification.getGroup().equals(String.format("pushmask_%s_%s", Long.valueOf(j), a(notification)));
    }

    private boolean b(Context context) {
        return ba.a(context).a(ho.NotificationAutoGroupSwitch.a(), true);
    }

    public String a(Context context, Notification.Builder builder, String str) {
        if (!m632a() || !a(context)) {
            return str;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        Bundle extras = builder.getExtras();
        extras.putString("push_src_group_name", str);
        extras.putLong("push_src_group_time", jCurrentTimeMillis);
        return String.format("pushmask_%s_%s", Long.valueOf(jCurrentTimeMillis), str);
    }

    public void a(Context context, int i, Notification notification) {
        if (m632a()) {
            if (a(context)) {
                try {
                    b(context, i, notification);
                } catch (Exception e) {
                    com.xiaomi.channel.commonutils.logger.b.m43a("group notify handle restore error " + e);
                }
            }
            if (b(context)) {
                try {
                    a(context, i, notification, true);
                } catch (Exception e2) {
                    com.xiaomi.channel.commonutils.logger.b.m43a("group notify handle auto error " + e2);
                }
            }
        }
    }
}
