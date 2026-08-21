package com.xiaomi.push.service;

import android.app.Notification;
import android.content.ContentResolver;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import android.provider.Settings;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import com.bianfeng.paylib.action.IPaymentFeature;
import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Map;

public class ay {
    public static final a<String, String, String> a;
    public static final a<String, String, String> b;
    public static final a<String, String, String> c;
    public static final a<String, String, String> d;
    public static final a<String, String, String> e;
    public static final a<String, String, String> f;
    private static final String[] a = {"com.mi.globalbrowser", "com.android.browser"};
    private static String a = null;

    public class a<F, S, T> {
        F a;
        S b;
        T c;

        private a(F f, S s, T t) {
            this.a = f;
            this.b = s;
            this.c = t;
        }
    }

    static {
        String str = "canSound";
        a = new a<>("setSound", str, str);
        String str2 = "canVibrate";
        b = new a<>("setVibrate", str2, str2);
        String str3 = "canLights";
        c = new a<>("setLights", str3, str3);
        String str4 = "canShowOnKeyguard";
        d = new a<>("setShowOnKeyguard", str4, str4);
        e = new a<>("setFloat", "canFloat", "canShowFloat");
        String str5 = "canShowBadge";
        f = new a<>("setShowBadge", str5, str5);
    }

    public static int a(ContentResolver contentResolver) {
        try {
            return Settings.Global.getInt(contentResolver, "user_aggregate", 0);
        } catch (Exception e2) {
            com.xiaomi.channel.commonutils.logger.b.a("get user aggregate failed, " + e2);
            return 0;
        }
    }

    static int a(Context context, String str) {
        return com.xiaomi.push.h.b(context, str);
    }

    public static int a(Context context, String str, String str2, a<String, String, String> aVar) {
        if (aVar == null) {
            return -1;
        }
        try {
            Bundle bundleA = a(context, aVar.b, str, str2, (Bundle) null);
            if (bundleA == null || !bundleA.containsKey(aVar.c)) {
                return -1;
            }
            return bundleA.getBoolean(aVar.c) ? 1 : 0;
        } catch (Exception unused) {
            return -1;
        }
    }

    private static Bundle a(Context context, String str, String str2, String str3, Bundle bundle) {
        if (context == null || TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            throw new IllegalArgumentException("call notification provider failed!");
        }
        Bundle bundle2 = new Bundle();
        bundle2.putString("package", str2);
        if (!TextUtils.isEmpty(str3)) {
            bundle2.putString(IPaymentFeature.ARG_CHANNEL_ID, str3);
        }
        if (bundle != null) {
            bundle2.putAll(bundle);
        }
        return context.getContentResolver().call(Uri.parse("content://statusbar.notification"), str, (String) null, bundle2);
    }

    public static <T> T a(Notification notification, String str) {
        if (notification.extras == null) {
            return null;
        }
        try {
            return (T) notification.extras.get(str);
        } catch (Exception unused) {
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0050  */
    /* JADX WARN: Removed duplicated region for block: B:22:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static <T> T a(Object obj, String str, T t) {
        Object objA;
        Object obj2 = null;
        try {
        } catch (Exception e2) {
            com.xiaomi.channel.commonutils.logger.b.a("get value error " + e2);
        }
        if (obj instanceof Notification) {
            objA = a((Notification) obj, str);
        } else if (obj instanceof Map) {
            objA = ((Map) obj).get(str);
        } else {
            if (!(obj instanceof Bundle)) {
                com.xiaomi.channel.commonutils.logger.b.a("not support get value from classType:" + obj);
                return obj2 != null ? t : (T) obj2;
            }
            objA = ((Bundle) obj).get(str);
        }
        obj2 = objA;
        if (obj2 != null) {
        }
    }

    public static String a(Notification notification) {
        CharSequence charSequence;
        if (notification.extras != null) {
            charSequence = notification.extras.getCharSequence(NotificationCompat.EXTRA_TITLE);
            if (TextUtils.isEmpty(charSequence)) {
                charSequence = notification.extras.getCharSequence(NotificationCompat.EXTRA_TITLE_BIG);
            }
            if (TextUtils.isEmpty(charSequence)) {
                charSequence = notification.extras.getCharSequence("mipush.customTitle");
            }
        } else {
            charSequence = null;
        }
        return charSequence != null ? charSequence.toString() : "";
    }

    public static String a(Object obj) {
        return (String) a(obj, "msg_busi_type", "");
    }

    static void a(Notification notification, int i) {
        try {
            if (notification.extras != null) {
                notification.extras.putInt("miui.messageCount", i);
            }
            Object objA = com.xiaomi.push.bk.a(notification, "extraNotification");
            if (objA != null) {
                com.xiaomi.push.bk.a(objA, "setMessageCount", Integer.valueOf(i));
            }
        } catch (Exception unused) {
        }
    }

    static void a(Notification notification, int i, int i2) {
        if (notification != null) {
            if (notification.extras == null) {
                notification.extras = new Bundle();
            }
            notification.extras.putInt("is_priority", i);
            notification.extras.putInt("mipush_class", i2);
        }
    }

    static void a(Notification notification, String str) {
        try {
            if (notification.extras != null) {
                notification.extras.putString(HiAnalyticsConstant.BI_KEY_TARGET_PACKAGE, str);
            }
            Object objA = com.xiaomi.push.bk.a(notification, "extraNotification");
            if (objA != null) {
                com.xiaomi.push.bk.a(objA, "setTargetPkg", str);
            }
        } catch (Exception unused) {
        }
    }

    static void a(Notification notification, boolean z) {
        try {
            if (notification.extras != null) {
                notification.extras.putBoolean("miui.enableFloat", z);
            }
            Object objA = com.xiaomi.push.bk.a(notification, "extraNotification");
            if (objA != null) {
                com.xiaomi.push.bk.a(objA, "setEnableFloat", Boolean.valueOf(z));
            }
        } catch (Exception unused) {
        }
    }

    static void a(Context context, String str, Intent intent) {
        if (intent == null) {
            return;
        }
        ArrayList arrayList = new ArrayList();
        if (!TextUtils.isEmpty(str)) {
            arrayList.add(str);
        }
        arrayList.addAll(Arrays.asList(a));
        int size = arrayList.size();
        for (int i = 0; i < size; i++) {
            String str2 = (String) arrayList.get(i);
            if (!TextUtils.isEmpty(str2)) {
                Intent intent2 = new Intent(intent);
                intent2.setPackage(str2);
                try {
                    if (context.getPackageManager().resolveActivity(intent2, 65536) != null) {
                        intent.setPackage(str2);
                        break;
                    }
                    continue;
                } catch (Exception e2) {
                    com.xiaomi.channel.commonutils.logger.b.a("can't match url intent. " + e2);
                }
            }
        }
        intent.setPackage(intent.getPackage());
    }

    public static void a(Map<String, String> map, Bundle bundle, String str) {
        if (map == null || bundle == null || TextUtils.isEmpty(str)) {
            com.xiaomi.channel.commonutils.logger.b.a("cp map to b fail:" + str);
            return;
        }
        if (TextUtils.isEmpty(map.get(str))) {
            bundle.remove(str);
        } else {
            bundle.putString(str, map.get(str));
        }
    }

    public static boolean a(Notification.Builder builder, boolean z) {
        if (Build.VERSION.SDK_INT >= 26) {
            builder.setGroupAlertBehavior(z ? 2 : 1);
            return true;
        }
        com.xiaomi.channel.commonutils.logger.b.b("not support setGroupAlertBehavior");
        return false;
    }

    public static boolean a(ContentResolver contentResolver) {
        int iA = a(contentResolver);
        return iA == 1 || iA == 2;
    }

    public static boolean a(Context context, String str, String str2, a<String, String, String> aVar, boolean z) {
        if (aVar != null) {
            try {
                Bundle bundle = new Bundle();
                bundle.putBoolean(aVar.c, z);
                a(context, aVar.a, str, str2, bundle);
                return true;
            } catch (Exception unused) {
            }
        }
        return false;
    }

    public static boolean a(Map<String, String> map) {
        return Boolean.parseBoolean((String) a(map, "not_suppress", "true"));
    }

    public static Notification.Action[] a(Notification notification) {
        Parcelable[] parcelableArray;
        if (notification.actions != null) {
            return notification.actions;
        }
        if (notification.extras == null || (parcelableArray = notification.extras.getParcelableArray("mipush.customActions")) == null) {
            return null;
        }
        return (Notification.Action[]) Arrays.copyOf(parcelableArray, parcelableArray.length, Notification.Action[].class);
    }

    public static String b(Notification notification) {
        CharSequence charSequence;
        if (notification.extras != null) {
            charSequence = notification.extras.getCharSequence(NotificationCompat.EXTRA_TEXT);
            if (TextUtils.isEmpty(charSequence) && Build.VERSION.SDK_INT >= 21) {
                charSequence = notification.extras.getCharSequence(NotificationCompat.EXTRA_BIG_TEXT);
            }
            if (TextUtils.isEmpty(charSequence)) {
                charSequence = notification.extras.getCharSequence("mipush.customContent");
            }
        } else {
            charSequence = null;
        }
        return charSequence != null ? charSequence.toString() : "";
    }

    public static void b(Notification notification, boolean z) {
        try {
            if (notification.extras != null) {
                notification.extras.putBoolean("miui.enableKeyguard", z);
            }
            Object objA = com.xiaomi.push.bk.a(notification, "extraNotification");
            if (objA != null) {
                com.xiaomi.push.bk.a(objA, "setEnableKeyguard", Boolean.valueOf(z));
            }
        } catch (Exception unused) {
        }
    }

    public static String c(Notification notification) {
        Object objA;
        try {
            string = notification.extras != null ? notification.extras.getString(HiAnalyticsConstant.BI_KEY_TARGET_PACKAGE) : null;
            return (!TextUtils.isEmpty(string) || (objA = com.xiaomi.push.bk.a(notification, "extraNotification")) == null) ? string : (String) com.xiaomi.push.bk.a(objA, "getTargetPkg", new Object[0]);
        } catch (Exception unused) {
            return string;
        }
    }
}
