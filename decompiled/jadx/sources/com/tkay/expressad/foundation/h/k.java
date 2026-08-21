package com.tkay.expressad.foundation.h;

import android.app.ActivityManager;
import android.content.Context;
import android.content.res.Configuration;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.os.Looper;
import android.os.SystemClock;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.Display;
import android.view.WindowManager;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.UUID;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class k extends d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6946a = "SameDiTool";
    private static String b = null;
    private static String c = null;
    private static int d = -1;
    private static int e = -1;
    private static int f = -1;
    private static String g = "";
    private static String h = "";
    private static String i = "";
    private static String j = "";
    private static int k = 0;
    private static String l = "";
    private static String m = "";
    private static int n = -1;
    private static String o = "";
    private static int p = 0;
    private static String q = "";

    public static int a(int i2) {
        if (i2 == 20) {
            return 5;
        }
        switch (i2) {
            case 1:
            case 2:
            case 4:
            case 7:
            case 11:
                return 2;
            case 3:
            case 5:
            case 6:
            case 8:
            case 9:
            case 10:
            case 12:
            case 14:
            case 15:
                return 3;
            case 13:
                return 4;
            default:
                return 0;
        }
    }

    public static int i() {
        return 0;
    }

    private k() {
    }

    private static void j(Context context) {
        try {
            h(context);
            d(context);
            c(context);
            b(context);
            com.tkay.expressad.foundation.g.a.bX = t.a("android.permission.WRITE_EXTERNAL_STORAGE", context);
            com.tkay.expressad.foundation.g.a.bW = t.a(com.kuaishou.weapon.p0.g.b, context);
            k(context);
        } catch (Throwable unused) {
        }
    }

    public static int b(Context context) {
        Configuration configuration;
        if (context == null || context.getResources() == null || (configuration = context.getResources().getConfiguration()) == null) {
            return 1;
        }
        int i2 = configuration.orientation;
        if (i2 == 2) {
            return 2;
        }
        if (i2 == 1) {
        }
        return 1;
    }

    public static int c(Context context) {
        if (context == null) {
            return k;
        }
        int i2 = k;
        if (i2 != 0) {
            return i2;
        }
        try {
            int i3 = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionCode;
            k = i3;
            return i3;
        } catch (Exception e2) {
            e2.printStackTrace();
            return -1;
        }
    }

    public static String d(Context context) {
        if (context == null) {
            return j;
        }
        try {
            if (TextUtils.isEmpty(j)) {
                String str = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionName;
                j = str;
                return str;
            }
            return j;
        } catch (Exception e2) {
            e2.printStackTrace();
            return "";
        }
    }

    private static int k(Context context) {
        if (context == null) {
            return p;
        }
        if (p == 0) {
            try {
                p = context.getApplicationInfo().targetSdkVersion;
            } catch (Exception e2) {
                e2.getMessage();
            }
        }
        return p;
    }

    public static int e(Context context) {
        if (com.tkay.core.common.b.m.a().c("screen")) {
            return 0;
        }
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b() || context == null) {
                return 0;
            }
            try {
                DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
                HashMap mapG = g(context);
                return mapG.get("width") == null ? displayMetrics.widthPixels : ((Integer) mapG.get("width")).intValue();
            } catch (Exception e2) {
                e2.printStackTrace();
                return 0;
            }
        } catch (Exception unused) {
        }
    }

    public static int f(Context context) {
        if (com.tkay.core.common.b.m.a().c("screen")) {
            return 0;
        }
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b() || context == null) {
                return 0;
            }
            try {
                DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
                HashMap mapG = g(context);
                return mapG.get("height") == null ? displayMetrics.heightPixels : ((Integer) mapG.get("height")).intValue();
            } catch (Exception e2) {
                e2.printStackTrace();
                return 0;
            }
        } catch (Exception unused) {
        }
    }

    public static HashMap g(Context context) {
        HashMap map = new HashMap();
        if (context == null) {
            return map;
        }
        try {
            Display defaultDisplay = ((WindowManager) context.getSystemService("window")).getDefaultDisplay();
            DisplayMetrics displayMetrics = new DisplayMetrics();
            if (Build.VERSION.SDK_INT >= 17) {
                defaultDisplay.getRealMetrics(displayMetrics);
            } else {
                defaultDisplay.getMetrics(displayMetrics);
            }
            map.put("height", Integer.valueOf(displayMetrics.heightPixels));
            map.put("width", Integer.valueOf(displayMetrics.widthPixels));
        } catch (Exception e2) {
            e2.getMessage();
        }
        return map;
    }

    public static String h(Context context) {
        if (context == null) {
            return i;
        }
        try {
            if (TextUtils.isEmpty(i)) {
                String str = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).packageName;
                i = str;
                return str;
            }
            return i;
        } catch (Exception e2) {
            e2.printStackTrace();
            return "";
        }
    }

    public static void i(final Context context) {
        if (context == null) {
            return;
        }
        try {
            if (Looper.myLooper() == Looper.getMainLooper()) {
                a(context);
            } else {
                com.tkay.core.common.b.m.a().a(new Runnable() { // from class: com.tkay.expressad.foundation.h.k.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        d.a(context);
                    }
                });
            }
        } catch (Throwable unused) {
        }
    }

    public static int a() {
        Context contextF;
        try {
            contextF = com.tkay.core.common.b.m.a().f();
        } catch (Throwable th) {
            th.getMessage();
            f = 0;
            return 0;
        }
        if (com.tkay.core.common.b.m.a().c("network_type")) {
            return f;
        }
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
                return f;
            }
            if (contextF == null) {
                return f;
            }
            if (f == -1) {
                f = 0;
                return 0;
            }
            try {
                AnonymousClass2 anonymousClass2 = new AnonymousClass2(contextF);
                if (com.tkay.expressad.foundation.g.h.a.b().getActiveCount() <= 0) {
                    com.tkay.expressad.foundation.g.h.a.b().execute(anonymousClass2);
                }
            } catch (Throwable th2) {
                th2.getMessage();
            }
            return f;
        } catch (Exception unused) {
            return f;
        }
        th.getMessage();
        f = 0;
        return 0;
    }

    /* JADX INFO: renamed from: com.tkay.expressad.foundation.h.k$2, reason: invalid class name */
    final class AnonymousClass2 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Context f6948a;

        AnonymousClass2(Context context) {
            this.f6948a = context;
        }

        @Override // java.lang.Runnable
        public final void run() {
            ConnectivityManager connectivityManager;
            try {
                if (com.tkay.core.common.b.m.a().c("network_type")) {
                    return;
                }
                try {
                    if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b() || this.f6948a == null || (connectivityManager = (ConnectivityManager) this.f6948a.getSystemService("connectivity")) == null) {
                        return;
                    }
                    NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
                    if (activeNetworkInfo == null) {
                        int unused = k.f = 0;
                        return;
                    }
                    if (activeNetworkInfo.getType() == 1) {
                        int unused2 = k.f = 9;
                        return;
                    }
                    TelephonyManager telephonyManager = (TelephonyManager) this.f6948a.getSystemService("phone");
                    if (telephonyManager == null) {
                        int unused3 = k.f = 0;
                    } else {
                        int unused4 = k.f = k.a(telephonyManager.getNetworkType());
                    }
                } catch (Exception unused5) {
                }
            } catch (Throwable th) {
                th.getMessage();
                int unused6 = k.f = 0;
            }
        }
    }

    private static void l(Context context) {
        try {
            AnonymousClass2 anonymousClass2 = new AnonymousClass2(context);
            if (com.tkay.expressad.foundation.g.h.a.b().getActiveCount() <= 0) {
                com.tkay.expressad.foundation.g.h.a.b().execute(anonymousClass2);
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public static String a(Context context, int i2) {
        TelephonyManager telephonyManager;
        if (i2 == 0 || i2 == 9) {
            return "";
        }
        try {
            return (!com.tkay.expressad.foundation.g.a.bW || (telephonyManager = (TelephonyManager) context.getSystemService("phone")) == null) ? "" : String.valueOf(telephonyManager.getNetworkType());
        } catch (Throwable th) {
            th.getMessage();
            return "";
        }
    }

    private static void a(String str) {
        c = j.a(str);
        b = str;
    }

    private static UUID j() {
        try {
            return UUID.randomUUID();
        } catch (Throwable th) {
            th.getMessage();
            return null;
        }
    }

    private static String a(String str, Context context) {
        try {
        } catch (Exception e2) {
            e2.getMessage();
        }
        if (!TextUtils.isEmpty(o)) {
            return o;
        }
        if (!TextUtils.isEmpty(str) && context != null) {
            o = context.getPackageManager().getInstallerPackageName(str);
            new StringBuilder("PKGSource:").append(o);
        }
        return o;
    }

    private static boolean m(Context context) {
        DisplayMetrics displayMetrics;
        if (context == null) {
            return false;
        }
        try {
            Display defaultDisplay = ((WindowManager) context.getSystemService("window")).getDefaultDisplay();
            displayMetrics = new DisplayMetrics();
            defaultDisplay.getMetrics(displayMetrics);
        } catch (Exception e2) {
            e2.getMessage();
        }
        return Math.sqrt(Math.pow((double) (((float) displayMetrics.widthPixels) / displayMetrics.xdpi), 2.0d) + Math.pow((double) (((float) displayMetrics.heightPixels) / displayMetrics.ydpi), 2.0d)) >= 6.0d;
    }

    private static int k() {
        return n;
    }

    public static String b() {
        if (com.tkay.core.common.b.m.a().c("model")) {
            return "";
        }
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
                return "";
            }
            return Build.MANUFACTURER + " " + Build.MODEL;
        } catch (Exception unused) {
            return "";
        }
    }

    public static String c() {
        if (com.tkay.core.common.b.m.a().c("os_vc")) {
            return "";
        }
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
                return "";
            }
            if (TextUtils.isEmpty(h)) {
                h = String.valueOf(d());
            }
            return h;
        } catch (Exception unused) {
            return "";
        }
    }

    public static int d() {
        try {
            return Build.VERSION.SDK_INT;
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0;
        }
    }

    public static String e() {
        String strA = "";
        try {
            Context contextF = com.tkay.core.common.b.m.a().f();
            long jCurrentTimeMillis = System.currentTimeMillis() - SystemClock.elapsedRealtime();
            long jL = l();
            String str = "app_tki_" + jCurrentTimeMillis + "_" + jL;
            String str2 = (String) v.b(contextF, str, "");
            try {
                if (!TextUtils.isEmpty(str2)) {
                    return str2;
                }
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("1", "");
                    jSONObject.put("2", String.valueOf(jL));
                    jSONObject.put("3", String.valueOf(jCurrentTimeMillis));
                    jSONObject.put("4", "");
                    jSONObject.put("5", "");
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
                strA = a.a(jSONObject.toString());
                v.a(contextF, str, strA);
            } catch (Exception e3) {
                e = e3;
                strA = str2;
                e.printStackTrace();
            }
        } catch (Exception e4) {
            e = e4;
        }
        return strA;
    }

    private static long l() {
        Context contextF = com.tkay.core.common.b.m.a().f();
        if (contextF == null) {
            return 0L;
        }
        ActivityManager activityManager = (ActivityManager) contextF.getSystemService("activity");
        ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
        activityManager.getMemoryInfo(memoryInfo);
        if (Build.VERSION.SDK_INT >= 16) {
            return memoryInfo.totalMem;
        }
        return 0L;
    }

    public static int f() {
        if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
            return 0;
        }
        if (d <= 0) {
            try {
                Context contextF = com.tkay.core.common.b.m.a().f();
                long jLongValue = ((Long) v.b(contextF, "TotalRamSize", 0L)).longValue();
                long jCurrentTimeMillis = System.currentTimeMillis();
                if (jCurrentTimeMillis - jLongValue > 1800000 || d == -1) {
                    d = Long.valueOf((l() / 1000) / 1000).intValue();
                    v.a(contextF, "TotalRamSize", Long.valueOf(jCurrentTimeMillis));
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
        return d;
    }

    public static int g() {
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
                return 0;
            }
            Context contextF = com.tkay.core.common.b.m.a().f();
            long j2 = 0;
            long jLongValue = ((Long) v.b(contextF, "FreeRamSize", 0L)).longValue();
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (jCurrentTimeMillis - jLongValue > 1800000 || e == -1) {
                Context contextF2 = com.tkay.core.common.b.m.a().f();
                if (contextF2 != null) {
                    ActivityManager activityManager = (ActivityManager) contextF2.getSystemService("activity");
                    ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
                    activityManager.getMemoryInfo(memoryInfo);
                    j2 = memoryInfo.availMem;
                }
                e = Long.valueOf((j2 / 1000) / 1000).intValue();
                v.a(contextF, "FreeRamSize", Long.valueOf(jCurrentTimeMillis));
            }
        } catch (Throwable th) {
            th.getMessage();
        }
        return e;
    }

    private static long m() {
        Context contextF = com.tkay.core.common.b.m.a().f();
        if (contextF == null) {
            return 0L;
        }
        ActivityManager activityManager = (ActivityManager) contextF.getSystemService("activity");
        ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
        activityManager.getMemoryInfo(memoryInfo);
        return memoryInfo.availMem;
    }

    public static String h() {
        if (TextUtils.isEmpty(q)) {
            if (Build.VERSION.SDK_INT >= 21) {
                q = com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b() ? Arrays.asList(Build.SUPPORTED_ABIS).toString() : "";
            } else {
                ArrayList arrayList = new ArrayList();
                arrayList.add(!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b() ? "" : Build.CPU_ABI);
                arrayList.add(com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b() ? Build.CPU_ABI2 : "");
                q = arrayList.toString();
            }
        }
        return q;
    }

    private static String n() {
        return !com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b() ? "" : Arrays.asList(Build.SUPPORTED_ABIS).toString();
    }

    private static String o() {
        return !com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b() ? "" : Build.CPU_ABI;
    }

    private static String p() {
        return !com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b() ? "" : Build.CPU_ABI2;
    }
}
