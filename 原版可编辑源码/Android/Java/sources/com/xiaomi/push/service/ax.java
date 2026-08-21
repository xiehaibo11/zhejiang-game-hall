package com.xiaomi.push.service;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.content.Context;
import android.os.Build;
import android.service.notification.StatusBarNotification;
import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.xiaomi.push.ho;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.WeakHashMap;

public class ax {
    private static Context a;
    private static Object a;
    private static WeakHashMap<Integer, ax> a = new WeakHashMap<>();
    private static boolean a;
    private String a;
    private String b;

    private ax(String str) {
        this.a = str;
    }

    private static int a(String str) {
        if (Build.VERSION.SDK_INT < 24) {
            return -1;
        }
        try {
            return a.getPackageManager().getPackageUid(str, 0);
        } catch (Exception unused) {
            return -1;
        }
    }

    private static NotificationManager a() {
        return (NotificationManager) a.getSystemService(RemoteMessageConst.NOTIFICATION);
    }

    public static ax a(Context context, String str) {
        a(context);
        int iHashCode = str.hashCode();
        ax axVar = a.get(Integer.valueOf(iHashCode));
        if (axVar != null) {
            return axVar;
        }
        ax axVar2 = new ax(str);
        a.put(Integer.valueOf(iHashCode), axVar2);
        return axVar2;
    }

    private static <T> T a(Object obj) {
        if (obj == null) {
            return null;
        }
        try {
            return (T) obj.getClass().getMethod("getList", new Class[0]).invoke(obj, new Object[0]);
        } catch (Exception unused) {
            return null;
        }
    }

    private static Object a(List list) {
        return Class.forName("android.content.pm.ParceledListSlice").getConstructor(List.class).newInstance(list);
    }

    public static String a(String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        String strA = a("mipush|%s|%s", str2, "");
        return str.startsWith(strA) ? a("mipush_%s_%s", str2, str.replace(strA, "")) : str;
    }

    private static String a(String str, String str2, String str3) {
        return TextUtils.isEmpty(str) ? "" : String.format(str, str2, str3);
    }

    private static void a(Context context) {
        if (a == null) {
            a = context.getApplicationContext();
            NotificationManager notificationManagerA = a();
            Boolean bool = (Boolean) com.xiaomi.push.bk.a((Object) notificationManagerA, "isSystemConditionProviderEnabled", "xmsf_fake_condition_provider_path");
            a("fwk is support.init:" + bool);
            boolean zBooleanValue = bool != null ? bool.booleanValue() : false;
            a = zBooleanValue;
            if (zBooleanValue) {
                a = com.xiaomi.push.bk.a((Object) notificationManagerA, "getService", new Object[0]);
            }
        }
    }

    static void a(String str) {
        com.xiaomi.channel.commonutils.logger.b.a("NMHelper:" + str);
    }

    private static boolean a() {
        if (com.xiaomi.push.m.a() && ba.a(a).a(ho.aZ.a(), true)) {
            return a;
        }
        return false;
    }

    public static boolean a(Context context) {
        a(context);
        return a();
    }

    private StatusBarNotification[] a() {
        if (!com.xiaomi.push.m.a(a())) {
            return null;
        }
        try {
            Object objA = com.xiaomi.push.bk.a(a, "getActiveNotifications", a().getPackageName());
            if (objA instanceof StatusBarNotification[]) {
                return (StatusBarNotification[]) objA;
            }
            return null;
        } catch (Throwable th) {
            a("getAllNotifications error " + th);
            return null;
        }
    }

    private String b(String str) {
        return a(a() ? "mipush|%s|%s" : "mipush_%s_%s", this.a, str);
    }

    public NotificationChannel a(String str) {
        NotificationChannel notificationChannel = null;
        try {
            if (a()) {
                List<NotificationChannel> listA = a();
                if (listA != null) {
                    Iterator<NotificationChannel> it = listA.iterator();
                    while (true) {
                        if (it.hasNext()) {
                            NotificationChannel next = it.next();
                            if (str.equals(next.getId())) {
                                notificationChannel = next;
                                break;
                            }
                        }
                    }
                }
            } else {
                notificationChannel = a().getNotificationChannel(str);
            }
            break;
        } catch (Exception e) {
            a("getNotificationChannel error" + e);
        }
        return notificationChannel;
    }

    public Context a() {
        return a;
    }

    public String a() {
        return this.a;
    }

    public String a(String str) {
        return TextUtils.isEmpty(str) ? b() : com.xiaomi.push.m.a(a()) ? b(str) : str;
    }

    /* JADX WARN: Unreachable blocks removed: 2, instructions: 2 */
    List<NotificationChannel> a() {
        String str;
        String str2 = this.a;
        List<NotificationChannel> notificationChannels = null;
        try {
            if (a()) {
                int iA = a(str2);
                if (iA != -1) {
                    Object obj = a;
                    Object[] objArr = {str2, Integer.valueOf(iA), false};
                    str = "mipush|%s|%s";
                    notificationChannels = (List) a(com.xiaomi.push.bk.a(obj, "getNotificationChannelsForPackage", objArr));
                } else {
                    str = null;
                }
            } else {
                notificationChannels = a().getNotificationChannels();
                str = "mipush_%s_%s";
            }
            if (!com.xiaomi.push.m.a() || notificationChannels == null) {
                return notificationChannels;
            }
            ArrayList arrayList = new ArrayList();
            String strA = a(str, str2, "");
            for (NotificationChannel notificationChannel : notificationChannels) {
                if (notificationChannel.getId().startsWith(strA)) {
                    arrayList.add(notificationChannel);
                }
            }
            return arrayList;
        } catch (Exception e) {
            a("getNotificationChannels error " + e);
            return notificationChannels;
        }
    }

    public void a(int i) {
        String str = this.a;
        try {
            if (!a()) {
                a().cancel(i);
                return;
            }
            int iA = com.xiaomi.push.j.a();
            String packageName = a().getPackageName();
            if (Build.VERSION.SDK_INT >= 30) {
                com.xiaomi.push.bk.b(a, "cancelNotificationWithTag", str, packageName, null, Integer.valueOf(i), Integer.valueOf(iA));
            } else {
                com.xiaomi.push.bk.b(a, "cancelNotificationWithTag", str, null, Integer.valueOf(i), Integer.valueOf(iA));
            }
            a("cancel succ:" + i);
        } catch (Exception e) {
            a("cancel error" + e);
        }
    }

    public void a(int i, Notification notification) {
        String str = this.a;
        NotificationManager notificationManagerA = a();
        try {
            int i2 = Build.VERSION.SDK_INT;
            if (a()) {
                if (i2 >= 19) {
                    notification.extras.putString("xmsf_target_package", str);
                }
                if (i2 >= 29) {
                    notificationManagerA.notifyAsPackage(str, null, i, notification);
                    return;
                }
            }
            notificationManagerA.notify(i, notification);
        } catch (Exception unused) {
        }
    }

    void a(NotificationChannel notificationChannel) {
        String str = this.a;
        try {
            if (a()) {
                int iA = a(str);
                if (iA != -1) {
                    com.xiaomi.push.bk.b(a, "createNotificationChannelsForPackage", str, Integer.valueOf(iA), a(Arrays.asList(notificationChannel)));
                }
            } else {
                a().createNotificationChannel(notificationChannel);
            }
        } catch (Exception e) {
            a("createNotificationChannel error" + e);
        }
    }

    void a(NotificationChannel notificationChannel, boolean z) {
        String str = this.a;
        try {
            if (z) {
                int iA = a(str);
                if (iA != -1) {
                    com.xiaomi.push.bk.b(a, "updateNotificationChannelForPackage", str, Integer.valueOf(iA), notificationChannel);
                }
            } else {
                a(notificationChannel);
            }
        } catch (Exception e) {
            a("updateNotificationChannel error " + e);
        }
    }

    public boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        return str.startsWith(b(""));
    }

    String b() {
        if (TextUtils.isEmpty(this.b)) {
            this.b = b("default");
        }
        return this.b;
    }

    String b(String str, String str2) {
        return a() ? str : str2;
    }

    public List<StatusBarNotification> b() {
        String str = this.a;
        NotificationManager notificationManagerA = a();
        ArrayList arrayList = null;
        try {
            if (a()) {
                int iA = com.xiaomi.push.j.a();
                if (iA != -1) {
                    return (List) a(com.xiaomi.push.bk.a(a, "getAppActiveNotifications", str, Integer.valueOf(iA)));
                }
                return null;
            }
            StatusBarNotification[] activeNotifications = Build.VERSION.SDK_INT >= 23 ? notificationManagerA.getActiveNotifications() : a();
            boolean zA = com.xiaomi.push.m.a();
            if (activeNotifications == null || activeNotifications.length <= 0) {
                return null;
            }
            ArrayList arrayList2 = new ArrayList();
            try {
                for (StatusBarNotification statusBarNotification : activeNotifications) {
                    if (!zA || str.equals(ay.c(statusBarNotification.getNotification()))) {
                        arrayList2.add(statusBarNotification);
                    }
                }
                return arrayList2;
            } catch (Throwable th) {
                th = th;
                arrayList = arrayList2;
                a("getActiveNotifications error " + th);
                return arrayList;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    public String toString() {
        return "NotificationManagerHelper{" + this.a + "}";
    }
}
