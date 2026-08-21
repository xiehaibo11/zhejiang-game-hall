package com.xiaomi.push;

import android.app.ActivityManager;
import android.app.AppOpsManager;
import android.app.NotificationManager;
import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.provider.Settings;
import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class h {

    public enum a {
        UNKNOWN(0),
        ALLOWED(1),
        NOT_ALLOWED(2);


        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private final int f465a;

        a(int i) {
            this.f465a = i;
        }

        public int a() {
            return this.f465a;
        }
    }

    public static int a(Context context) {
        if (context == null) {
            return 0;
        }
        try {
            ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo("com.android.systemui", 128);
            if (applicationInfo == null || applicationInfo.metaData == null) {
                return 0;
            }
            return applicationInfo.metaData.getInt("SupportForPushVersionCode");
        } catch (PackageManager.NameNotFoundException unused) {
            return 0;
        }
    }

    public static int a(Context context, String str) {
        PackageInfo packageInfo;
        try {
            packageInfo = context.getPackageManager().getPackageInfo(str, 16384);
        } catch (Exception unused) {
            packageInfo = null;
        }
        if (packageInfo != null) {
            return packageInfo.versionCode;
        }
        return 0;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private static ApplicationInfo m395a(Context context, String str) {
        if (str.equals(context.getPackageName())) {
            return context.getApplicationInfo();
        }
        try {
            return context.getPackageManager().getApplicationInfo(str, 0);
        } catch (PackageManager.NameNotFoundException unused) {
            com.xiaomi.channel.commonutils.logger.b.m43a("not found app info " + str);
            return null;
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static Drawable m396a(Context context, String str) {
        ApplicationInfo applicationInfoM395a = m395a(context, str);
        Drawable drawableLoadIcon = null;
        if (applicationInfoM395a != null) {
            try {
                drawableLoadIcon = applicationInfoM395a.loadIcon(context.getPackageManager());
                if (drawableLoadIcon == null) {
                    drawableLoadIcon = applicationInfoM395a.loadLogo(context.getPackageManager());
                }
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.m43a("get app icon drawable failed, " + e);
            }
        }
        return drawableLoadIcon != null ? drawableLoadIcon : new ColorDrawable(0);
    }

    private static a a(Context context, ApplicationInfo applicationInfo) {
        int i = Build.VERSION.SDK_INT;
        if (applicationInfo == null || i < 24) {
            return a.UNKNOWN;
        }
        Boolean boolValueOf = null;
        try {
            if (applicationInfo.packageName.equals(context.getPackageName())) {
                boolValueOf = Boolean.valueOf(((NotificationManager) context.getSystemService(RemoteMessageConst.NOTIFICATION)).areNotificationsEnabled());
            } else {
                Object objA = i >= 29 ? bk.a(context.getSystemService(RemoteMessageConst.NOTIFICATION), "getService", new Object[0]) : context.getSystemService("security");
                if (objA != null) {
                    boolValueOf = (Boolean) bk.b(objA, "areNotificationsEnabledForPackage", applicationInfo.packageName, Integer.valueOf(applicationInfo.uid));
                }
            }
            if (boolValueOf != null) {
                return boolValueOf.booleanValue() ? a.ALLOWED : a.NOT_ALLOWED;
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a("are notifications enabled error " + e);
        }
        return a.UNKNOWN;
    }

    public static a a(Context context, String str, boolean z) {
        ApplicationInfo applicationInfo;
        a aVarA;
        if (context == null || TextUtils.isEmpty(str)) {
            return a.UNKNOWN;
        }
        try {
            applicationInfo = str.equals(context.getPackageName()) ? context.getApplicationInfo() : context.getPackageManager().getApplicationInfo(str, 0);
            aVarA = a(context, applicationInfo);
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.m43a("get app op error " + th);
        }
        if (aVarA != a.UNKNOWN) {
            return aVarA;
        }
        Integer num = (Integer) bk.a((Class<? extends Object>) AppOpsManager.class, "OP_POST_NOTIFICATION");
        if (num == null) {
            return a.UNKNOWN;
        }
        Integer num2 = (Integer) bk.a(context.getSystemService("appops"), "checkOpNoThrow", num, Integer.valueOf(applicationInfo.uid), str);
        int i = (Integer) bk.a((Class<? extends Object>) AppOpsManager.class, "MODE_ALLOWED");
        int i2 = (Integer) bk.a((Class<? extends Object>) AppOpsManager.class, "MODE_IGNORED");
        com.xiaomi.channel.commonutils.logger.b.b(String.format("get app mode %s|%s|%s", num2, i, i2));
        if (i == null) {
            i = 0;
        }
        if (i2 == null) {
            i2 = 1;
        }
        if (num2 != null) {
            return z ? !num2.equals(i2) ? a.ALLOWED : a.NOT_ALLOWED : num2.equals(i) ? a.ALLOWED : a.NOT_ALLOWED;
        }
        return a.UNKNOWN;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static String m397a(Context context, String str) {
        PackageInfo packageInfo;
        try {
            packageInfo = context.getPackageManager().getPackageInfo(str, 16384);
        } catch (Exception unused) {
            packageInfo = null;
        }
        return packageInfo != null ? packageInfo.versionName : "1.0";
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m398a(Context context) {
        String str = (String) bk.a("android.app.ActivityThread", "currentProcessName", new Object[0]);
        if (TextUtils.isEmpty(str) || context == null) {
            return false;
        }
        return str.equals(context.getPackageName());
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m399a(Context context, String str) {
        if (!m.m574a()) {
            return true;
        }
        List<ActivityManager.RunningAppProcessInfo> runningAppProcesses = ((ActivityManager) context.getSystemService("activity")).getRunningAppProcesses();
        if (runningAppProcesses == null) {
            return false;
        }
        Iterator<ActivityManager.RunningAppProcessInfo> it = runningAppProcesses.iterator();
        while (it.hasNext()) {
            if (Arrays.asList(it.next().pkgList).contains(str)) {
                return true;
            }
        }
        return false;
    }

    public static int b(Context context, String str) {
        ApplicationInfo applicationInfoM395a = m395a(context, str);
        if (applicationInfoM395a == null) {
            return 0;
        }
        int i = applicationInfoM395a.icon;
        return i == 0 ? applicationInfoM395a.logo : i;
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public static String m400b(Context context, String str) {
        ApplicationInfo applicationInfo;
        try {
            PackageManager packageManager = context.getPackageManager();
            PackageInfo packageInfo = packageManager.getPackageInfo(str, 0);
            return (packageInfo == null || (applicationInfo = packageInfo.applicationInfo) == null) ? str : packageManager.getApplicationLabel(applicationInfo).toString();
        } catch (PackageManager.NameNotFoundException unused) {
            return str;
        }
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public static boolean m401b(Context context, String str) {
        PackageInfo packageInfo;
        try {
            packageInfo = context.getPackageManager().getPackageInfo(str, 0);
        } catch (PackageManager.NameNotFoundException unused) {
            packageInfo = null;
        }
        return packageInfo != null;
    }

    public static boolean c(Context context, String str) {
        return context.getPackageManager().checkPermission(str, context.getPackageName()) == 0;
    }

    public static boolean d(Context context, String str) {
        if (context == null || TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            if (Settings.Secure.getInt(context.getContentResolver(), "freeform_window_state", -1) >= 0) {
                return str.equals(Settings.Secure.getString(context.getContentResolver(), "freeform_package_name"));
            }
            return false;
        } catch (Exception unused) {
            return false;
        }
    }
}
