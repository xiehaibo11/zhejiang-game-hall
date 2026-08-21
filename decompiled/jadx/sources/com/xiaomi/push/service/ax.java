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

/* JADX INFO: loaded from: classes4.dex */
public class ax {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Context f8321a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static Object f926a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static WeakHashMap<Integer, ax> f927a = new WeakHashMap<>();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static boolean f928a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f929a;
    private String b;

    private ax(String str) {
        this.f929a = str;
    }

    private static int a(String str) {
        if (Build.VERSION.SDK_INT < 24) {
            return -1;
        }
        try {
            return f8321a.getPackageManager().getPackageUid(str, 0);
        } catch (Exception unused) {
            return -1;
        }
    }

    private static NotificationManager a() {
        return (NotificationManager) f8321a.getSystemService(RemoteMessageConst.NOTIFICATION);
    }

    public static ax a(Context context, String str) {
        a(context);
        int iHashCode = str.hashCode();
        ax axVar = f927a.get(Integer.valueOf(iHashCode));
        if (axVar != null) {
            return axVar;
        }
        ax axVar2 = new ax(str);
        f927a.put(Integer.valueOf(iHashCode), axVar2);
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
        if (f8321a == null) {
            f8321a = context.getApplicationContext();
            NotificationManager notificationManagerA = a();
            Boolean bool = (Boolean) com.xiaomi.push.bk.a((Object) notificationManagerA, "isSystemConditionProviderEnabled", "xmsf_fake_condition_provider_path");
            m635a("fwk is support.init:" + bool);
            boolean zBooleanValue = bool != null ? bool.booleanValue() : false;
            f928a = zBooleanValue;
            if (zBooleanValue) {
                f926a = com.xiaomi.push.bk.a((Object) notificationManagerA, "getService", new Object[0]);
            }
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    static void m635a(String str) {
        com.xiaomi.channel.commonutils.logger.b.m43a("NMHelper:" + str);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private static boolean m636a() {
        if (com.xiaomi.push.m.m574a() && ba.a(f8321a).a(ho.NotificationBelongToAppSwitch.a(), true)) {
            return f928a;
        }
        return false;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m637a(Context context) {
        a(context);
        return m636a();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private StatusBarNotification[] m638a() {
        if (!com.xiaomi.push.m.m575a(m640a())) {
            return null;
        }
        try {
            Object objA = com.xiaomi.push.bk.a(f926a, "getActiveNotifications", m640a().getPackageName());
            if (objA instanceof StatusBarNotification[]) {
                return (StatusBarNotification[]) objA;
            }
            return null;
        } catch (Throwable th) {
            m635a("getAllNotifications error " + th);
            return null;
        }
    }

    private String b(String str) {
        return a(m636a() ? "mipush|%s|%s" : "mipush_%s_%s", this.f929a, str);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public NotificationChannel m639a(String str) {
        NotificationChannel notificationChannel = null;
        try {
            if (m636a()) {
                List<NotificationChannel> listM643a = m643a();
                if (listM643a != null) {
                    Iterator<NotificationChannel> it = listM643a.iterator();
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
            m635a("getNotificationChannel error" + e);
        }
        return notificationChannel;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public Context m640a() {
        return f8321a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m641a() {
        return this.f929a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m642a(String str) {
        return TextUtils.isEmpty(str) ? b() : com.xiaomi.push.m.m575a(m640a()) ? b(str) : str;
    }

    /* JADX WARN: Unreachable blocks removed: 2, instructions: 2 */
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    List<NotificationChannel> m643a() {
        String str;
        String str2 = this.f929a;
        List<NotificationChannel> notificationChannels = null;
        try {
            if (m636a()) {
                int iA = a(str2);
                if (iA != -1) {
                    Object obj = f926a;
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
            if (!com.xiaomi.push.m.m574a() || notificationChannels == null) {
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
            m635a("getNotificationChannels error " + e);
            return notificationChannels;
        }
    }

    public void a(int i) {
        String str = this.f929a;
        try {
            if (!m636a()) {
                a().cancel(i);
                return;
            }
            int iA = com.xiaomi.push.j.a();
            String packageName = m640a().getPackageName();
            if (Build.VERSION.SDK_INT >= 30) {
                com.xiaomi.push.bk.b(f926a, "cancelNotificationWithTag", str, packageName, null, Integer.valueOf(i), Integer.valueOf(iA));
            } else {
                com.xiaomi.push.bk.b(f926a, "cancelNotificationWithTag", str, null, Integer.valueOf(i), Integer.valueOf(iA));
            }
            m635a("cancel succ:" + i);
        } catch (Exception e) {
            m635a("cancel error" + e);
        }
    }

    public void a(int i, Notification notification) {
        String str = this.f929a;
        NotificationManager notificationManagerA = a();
        try {
            int i2 = Build.VERSION.SDK_INT;
            if (m636a()) {
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
        String str = this.f929a;
        try {
            if (m636a()) {
                int iA = a(str);
                if (iA != -1) {
                    com.xiaomi.push.bk.b(f926a, "createNotificationChannelsForPackage", str, Integer.valueOf(iA), a(Arrays.asList(notificationChannel)));
                }
            } else {
                a().createNotificationChannel(notificationChannel);
            }
        } catch (Exception e) {
            m635a("createNotificationChannel error" + e);
        }
    }

    void a(NotificationChannel notificationChannel, boolean z) {
        String str = this.f929a;
        try {
            if (z) {
                int iA = a(str);
                if (iA != -1) {
                    com.xiaomi.push.bk.b(f926a, "updateNotificationChannelForPackage", str, Integer.valueOf(iA), notificationChannel);
                }
            } else {
                a(notificationChannel);
            }
        } catch (Exception e) {
            m635a("updateNotificationChannel error " + e);
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m644a(String str) {
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
        return m636a() ? str : str2;
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public List<StatusBarNotification> m645b() {
        String str = this.f929a;
        NotificationManager notificationManagerA = a();
        ArrayList arrayList = null;
        try {
            if (m636a()) {
                int iA = com.xiaomi.push.j.a();
                if (iA != -1) {
                    return (List) a(com.xiaomi.push.bk.a(f926a, "getAppActiveNotifications", str, Integer.valueOf(iA)));
                }
                return null;
            }
            StatusBarNotification[] activeNotifications = Build.VERSION.SDK_INT >= 23 ? notificationManagerA.getActiveNotifications() : m638a();
            boolean zM574a = com.xiaomi.push.m.m574a();
            if (activeNotifications == null || activeNotifications.length <= 0) {
                return null;
            }
            ArrayList arrayList2 = new ArrayList();
            try {
                for (StatusBarNotification statusBarNotification : activeNotifications) {
                    if (!zM574a || str.equals(ay.c(statusBarNotification.getNotification()))) {
                        arrayList2.add(statusBarNotification);
                    }
                }
                return arrayList2;
            } catch (Throwable th) {
                th = th;
                arrayList = arrayList2;
                m635a("getActiveNotifications error " + th);
                return arrayList;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    public String toString() {
        return "NotificationManagerHelper{" + this.f929a + "}";
    }
}
