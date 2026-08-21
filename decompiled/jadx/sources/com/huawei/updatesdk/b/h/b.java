package com.huawei.updatesdk.b.h;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.io.File;
import java.lang.Thread;
import java.lang.reflect.Field;

/* JADX INFO: loaded from: classes2.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Integer f2338a;
    private static boolean b;
    private static boolean c;
    private static Field d;

    static class a implements Thread.UncaughtExceptionHandler {
        a() {
        }

        @Override // java.lang.Thread.UncaughtExceptionHandler
        public void uncaughtException(Thread thread, Throwable th) {
            com.huawei.updatesdk.a.a.c.a.a.a.a("PackageUtils", thread.getName() + " : " + th.getMessage());
        }
    }

    /* JADX INFO: renamed from: com.huawei.updatesdk.b.h.b$b, reason: collision with other inner class name */
    public enum EnumC0085b {
        NOT_INSTALLED,
        INSTALLED,
        INSTALLED_LOWCODE
    }

    private static class c implements Runnable {
        private c() {
        }

        /* synthetic */ c(a aVar) {
            this();
        }

        @Override // java.lang.Runnable
        public void run() {
            com.huawei.updatesdk.a.a.c.a.a.a.a("PackageManagerRunnable", "PackageManagerRunnable run!!!!");
            com.huawei.updatesdk.a.a.d.d.a(new File(com.huawei.updatesdk.b.d.d.b()));
        }
    }

    public static int a(PackageInfo packageInfo) {
        ApplicationInfo applicationInfo = packageInfo.applicationInfo;
        if ((applicationInfo.flags & 1) == 0) {
            return 0;
        }
        return a(applicationInfo) ? 1 : 2;
    }

    public static int a(String str) {
        ApplicationInfo applicationInfo;
        try {
            PackageInfo packageInfo = com.huawei.updatesdk.a.b.a.a.c().a().getPackageManager().getPackageInfo(str, 128);
            return (packageInfo == null || (applicationInfo = packageInfo.applicationInfo) == null || applicationInfo.metaData == null || !packageInfo.applicationInfo.metaData.containsKey("com.huawei.maple.flag")) ? 0 : 1;
        } catch (Exception unused) {
            com.huawei.updatesdk.a.a.c.a.a.a.d("PackageUtils", "getMapleStatus not found: " + str);
            return 0;
        }
    }

    public static PackageInfo a(String str, Context context) {
        try {
            return context.getPackageManager().getPackageInfo(str, 64);
        } catch (Exception unused) {
            com.huawei.updatesdk.a.a.c.a.a.a.d("PackageUtils", "not found: " + str);
            return null;
        }
    }

    public static EnumC0085b a(Context context, String str) {
        EnumC0085b enumC0085b = EnumC0085b.NOT_INSTALLED;
        if (context == null) {
            return enumC0085b;
        }
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(str, 0);
            if (packageInfo == null) {
                return enumC0085b;
            }
            com.huawei.updatesdk.a.a.a.b("PackageUtils", "appmarket info,versioncode = " + packageInfo.versionCode + "versioncode = " + packageInfo.versionName);
            return packageInfo.versionCode < 70203000 ? EnumC0085b.INSTALLED_LOWCODE : EnumC0085b.INSTALLED;
        } catch (Exception e) {
            com.huawei.updatesdk.a.a.c.a.a.a.d("PackageUtils", "isInstallByPackage Exception:" + e.toString());
            return enumC0085b;
        }
    }

    public static void a() {
        Thread thread = new Thread(new c(null));
        thread.setName("delete market file task");
        thread.setUncaughtExceptionHandler(new a());
        thread.start();
    }

    public static boolean a(Context context, String str, boolean z) {
        return z || b(context, str) > 90000000;
    }

    private static boolean a(ApplicationInfo applicationInfo) {
        StringBuilder sb;
        String string;
        int i = applicationInfo.flags;
        Integer numC = c();
        if (numC != null && (i & numC.intValue()) != 0) {
            return true;
        }
        Field fieldB = b();
        if (fieldB == null) {
            return false;
        }
        try {
            return (fieldB.getInt(applicationInfo) & DownloadExpSwitchCode.BACK_CLEAR_DATA) != 0;
        } catch (IllegalAccessException e) {
            sb = new StringBuilder();
            sb.append("can not get hwflags");
            string = e.toString();
            sb.append(string);
            com.huawei.updatesdk.a.a.c.a.a.a.a("PackageUtils", sb.toString());
            return false;
        } catch (IllegalArgumentException e2) {
            sb = new StringBuilder();
            sb.append("can not get hwflags");
            string = e2.toString();
            sb.append(string);
            com.huawei.updatesdk.a.a.c.a.a.a.a("PackageUtils", sb.toString());
            return false;
        }
    }

    private static int b(Context context, String str) {
        try {
            return context.getPackageManager().getPackageInfo(str, 0).versionCode;
        } catch (Exception e) {
            com.huawei.updatesdk.a.a.c.a.a.a.d("PackageUtils", "isInstallByPackage:" + e.toString());
            return 0;
        }
    }

    public static Field b() {
        if (c) {
            return d;
        }
        try {
            d = ApplicationInfo.class.getField("hwFlags");
        } catch (NoSuchFieldException unused) {
            com.huawei.updatesdk.a.a.c.a.a.a.a("PackageUtils", "can not find hwFlags");
        }
        c = true;
        return d;
    }

    public static boolean b(Context context, String str, boolean z) {
        return z || b(context, str) > 100200000;
    }

    public static Integer c() {
        String string;
        StringBuilder sb;
        String string2;
        if (b) {
            return f2338a;
        }
        try {
            Class<?> cls = Class.forName("android.content.pm.PackageParser");
            f2338a = Integer.valueOf(cls.getDeclaredField("PARSE_IS_REMOVABLE_PREINSTALLED_APK").getInt(cls));
        } catch (ClassNotFoundException e) {
            sb = new StringBuilder();
            sb.append("isDelApp error ClassNotFoundException:");
            string2 = e.toString();
            sb.append(string2);
            string = sb.toString();
            com.huawei.updatesdk.a.a.c.a.a.a.a("PackageUtils", string);
        } catch (IllegalAccessException e2) {
            sb = new StringBuilder();
            sb.append("isDelApp error IllegalAccessException:");
            string2 = e2.toString();
            sb.append(string2);
            string = sb.toString();
            com.huawei.updatesdk.a.a.c.a.a.a.a("PackageUtils", string);
        } catch (IllegalArgumentException e3) {
            sb = new StringBuilder();
            sb.append("isDelApp error IllegalArgumentException:");
            string2 = e3.toString();
            sb.append(string2);
            string = sb.toString();
            com.huawei.updatesdk.a.a.c.a.a.a.a("PackageUtils", string);
        } catch (NoSuchFieldException e4) {
            sb = new StringBuilder();
            sb.append("isDelApp error NoSuchFieldException:");
            string2 = e4.toString();
            sb.append(string2);
            string = sb.toString();
            com.huawei.updatesdk.a.a.c.a.a.a.a("PackageUtils", string);
        } catch (Exception e5) {
            string = e5.toString();
            com.huawei.updatesdk.a.a.c.a.a.a.a("PackageUtils", string);
        }
        b = true;
        return f2338a;
    }

    public static String c(Context context, String str) {
        String installerPackageName;
        try {
            installerPackageName = context.getPackageManager().getInstallerPackageName(str);
        } catch (Exception unused) {
            com.huawei.updatesdk.a.a.a.b("PackageUtils", "can not find installer pkg." + str);
            installerPackageName = null;
        }
        com.huawei.updatesdk.a.a.c.a.a.a.c("PackageUtils", "installer pkg: " + installerPackageName);
        return installerPackageName;
    }

    public static boolean d(Context context, String str) {
        if (context != null && !TextUtils.isEmpty(str)) {
            try {
                return context.getPackageManager().getPackageInfo(str, 0) != null;
            } catch (Exception e) {
                com.huawei.updatesdk.a.a.c.a.a.a.d("PackageUtils", "isAppInstalled NameNotFoundException:" + e.toString());
            }
        }
        return false;
    }
}
