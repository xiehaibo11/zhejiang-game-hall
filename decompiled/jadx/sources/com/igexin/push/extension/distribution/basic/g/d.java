package com.igexin.push.extension.distribution.basic.g;

import android.app.Notification;
import android.content.Context;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile Boolean f2638a;

    public static int a(Context context) {
        try {
            return context.getPackageManager().getPackageInfo(context.getPackageName(), 0).applicationInfo.targetSdkVersion;
        } catch (Exception unused) {
            return 0;
        }
    }

    public static String a() {
        return Build.BRAND;
    }

    private static String a(String str) {
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            return (String) cls.getDeclaredMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(cls, str);
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    public static synchronized boolean a(int i, Notification notification) {
        try {
            if (b()) {
                Object obj = notification.getClass().getDeclaredField("extraNotification").get(notification);
                obj.getClass().getDeclaredMethod("setMessageCount", Integer.TYPE).invoke(obj, Integer.valueOf(i));
                return true;
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static synchronized boolean a(int i, boolean z) {
        try {
            if (com.igexin.push.core.d.g == null) {
                return false;
            }
            String strA = a();
            if ("huawei".equalsIgnoreCase(strA) || "honor".equalsIgnoreCase(strA)) {
                int iIntValue = ((Integer) g.b(com.igexin.push.core.d.g, "hwBadgeNum", 0)).intValue();
                if (!z) {
                    i += iIntValue;
                }
                g.a(com.igexin.push.core.d.g, "hwBadgeNum", Integer.valueOf(i));
                Bundle bundle = new Bundle();
                bundle.putString("package", com.igexin.push.core.d.g.getPackageName());
                bundle.putString("class", b(com.igexin.push.core.d.g));
                bundle.putInt("badgenumber", i);
                com.igexin.push.core.d.g.getContentResolver().call(Uri.parse("content://com.huawei.android.launcher.settings/badge/"), "change_badge", (String) null, bundle);
                return true;
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    private static String b(Context context) {
        try {
            List<ResolveInfo> listQueryIntentActivities = context.getPackageManager().queryIntentActivities(context.getPackageManager().getLaunchIntentForPackage(context.getPackageName()), 0);
            return listQueryIntentActivities.size() > 0 ? listQueryIntentActivities.get(0).activityInfo.name : "";
        } catch (Throwable unused) {
            return "";
        }
    }

    public static boolean b() {
        try {
            if (f2638a != null) {
                return f2638a.booleanValue();
            }
            f2638a = Boolean.valueOf((!"Xiaomi".equalsIgnoreCase(Build.BRAND) && TextUtils.isEmpty(a("ro.miui.ui.version.name")) && TextUtils.isEmpty(a("ro.miui.ui.version.code"))) ? false : true);
            return f2638a.booleanValue();
        } catch (Throwable unused) {
            return false;
        }
    }
}
