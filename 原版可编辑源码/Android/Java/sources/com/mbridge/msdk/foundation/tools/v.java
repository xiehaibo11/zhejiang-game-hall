package com.mbridge.msdk.foundation.tools;

import android.app.ActivityManager;
import android.content.Context;
import android.content.res.Configuration;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.provider.Settings;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.text.format.Formatter;
import android.util.DisplayMetrics;
import android.view.Display;
import android.view.WindowManager;
import android.webkit.WebSettings;
import android.webkit.WebView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.ab;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.lang.reflect.Constructor;
import java.util.HashMap;
import java.util.Locale;
import java.util.TimeZone;
import java.util.UUID;
import org.json.JSONObject;

public final class v extends e {
    private static String a = null;
    private static String b = null;
    private static int c = -1;
    private static int d = -1;
    private static volatile int e = -1;
    private static String f = "";
    private static String g = "";
    private static String h = "";
    private static String i = "";
    private static int j = 0;
    private static String k = "";
    private static String l = "";
    private static int m = -1;
    private static String n = "";
    private static int o = 0;
    private static String p = "";
    private static String q = null;
    private static int r = 0;
    private static int s = -1;
    private static int t = -1;
    private static Object u = null;
    private static int v = 0;
    private static int w = 0;
    private static int x = -1;
    private static int y;

    public static int a(int i2) {
        switch (i2) {
            case 1:
            case 2:
            case 4:
            case 7:
            case 11:
            case 16:
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
            case 17:
                return 3;
            case 13:
            case 18:
            case 19:
                return 4;
            case 20:
                return 5;
            default:
                return 0;
        }
    }

    public static void q(Context context) {
        try {
            C();
            A(context);
            v(context);
            u(context);
            t(context);
            x();
            z();
            E();
            s(context);
            B();
            com.mbridge.msdk.foundation.same.a.i = false;
            com.mbridge.msdk.foundation.same.a.h = ae.a(com.kuaishou.weapon.p0.g.b, context);
            w(context);
            try {
                e.g(context);
                e.b(context);
                e.c(context);
                e.i(context);
                e.j(context);
                try {
                    int iD = D();
                    if (iD >= 17 && iD < 21) {
                        m = Settings.Global.getInt(com.mbridge.msdk.foundation.controller.a.f().j().getContentResolver(), "install_non_market_apps", 0);
                    } else if (iD >= 21 || (iD < 17 && iD > 10)) {
                        m = Settings.Secure.getInt(com.mbridge.msdk.foundation.controller.a.f().j().getContentResolver(), "install_non_market_apps", 0);
                    }
                } catch (Throwable th) {
                    z.c("SameDiTool", th.getMessage(), th);
                }
                z.d("SameDiTool", "getUSSForPe:" + m);
                com.mbridge.msdk.foundation.same.a.k = ae.a(com.kuaishou.weapon.p0.g.e, context);
                com.mbridge.msdk.foundation.same.a.j = false;
                e.a(context);
            } catch (Throwable unused) {
            }
            N();
        } catch (Throwable unused2) {
        }
    }

    public static int r(Context context) {
        if (s == -1) {
            s = ae.c(context, "com.tencent.mm") ? 1 : 0;
        }
        return s;
    }

    public static int v() {
        if (t == -1) {
            t = ae.c() ? 1 : 0;
        }
        return t;
    }

    public static Object f(String str) {
        if (u == null) {
            u = ae.d(str);
        }
        return u;
    }

    public static int g(String str) {
        if (v == 0) {
            v = ae.e(str);
        }
        return v;
    }

    public static int w() {
        if (w == 0) {
            w = ae.d();
        }
        return w;
    }

    public static String x() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.MODEL;
    }

    public static String y() {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
            return "";
        }
        return Build.MANUFACTURER + " " + Build.MODEL;
    }

    public static String z() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.BRAND;
    }

    public static String s(Context context) {
        Locale locale;
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
            return "";
        }
        if (TextUtils.isEmpty(k)) {
            if (context == null) {
                return "en-US";
            }
            try {
                if (context.getResources() == null || context.getResources().getConfiguration() == null || (locale = context.getResources().getConfiguration().locale) == null) {
                    return "en-US";
                }
                if (Build.VERSION.SDK_INT >= 21) {
                    k = locale.toLanguageTag();
                } else {
                    k = locale.getLanguage() + Constants.ACCEPT_TIME_SEPARATOR_SERVER + locale.getCountry();
                }
                return k;
            } catch (Throwable th) {
                z.a("SameDiTool", th.getMessage());
                k = "en-US";
            }
        }
        return k;
    }

    public static int t(Context context) {
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

    public static int u(Context context) {
        if (context == null) {
            return j;
        }
        int i2 = j;
        if (i2 != 0) {
            return i2;
        }
        try {
            int i3 = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionCode;
            j = i3;
            return i3;
        } catch (Exception e2) {
            e2.printStackTrace();
            return -1;
        }
    }

    public static String v(Context context) {
        if (context == null) {
            return i;
        }
        try {
            if (TextUtils.isEmpty(i)) {
                String str = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionName;
                i = str;
                return str;
            }
            return i;
        } catch (Exception e2) {
            e2.printStackTrace();
            return "";
        }
    }

    public static int w(Context context) {
        if (context == null) {
            return o;
        }
        if (o == 0) {
            try {
                o = context.getApplicationInfo().targetSdkVersion;
            } catch (Exception e2) {
                z.d("SameDiTool", e2.getMessage());
            }
        }
        return o;
    }

    public static int x(Context context) {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) || context == null) {
            return 0;
        }
        try {
            DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
            HashMap mapZ = z(context);
            return mapZ.get("width") == null ? displayMetrics.widthPixels : ((Integer) mapZ.get("width")).intValue();
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0;
        }
    }

    public static int y(Context context) {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) || context == null) {
            return 0;
        }
        try {
            DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
            HashMap mapZ = z(context);
            return mapZ.get("height") == null ? displayMetrics.heightPixels : ((Integer) mapZ.get("height")).intValue();
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0;
        }
    }

    public static HashMap z(Context context) {
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
            z.c("SameDiTool", e2.getMessage(), e2);
        }
        return map;
    }

    public static String A(Context context) {
        if (context == null) {
            return h;
        }
        try {
            if (TextUtils.isEmpty(h)) {
                String str = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).packageName;
                h = str;
                return str;
            }
            return h;
        } catch (Exception e2) {
            e2.printStackTrace();
            return "";
        }
    }

    public static void B(final Context context) {
        if (context == null) {
            return;
        }
        try {
            if (Looper.myLooper() == Looper.getMainLooper()) {
                p(context);
            } else {
                new Handler(context.getMainLooper()).post(new Runnable() {
                    @Override
                    public final void run() {
                        e.p(context);
                    }
                });
            }
        } catch (Exception e2) {
            z.c("SameDiTool", "", e2);
        }
    }

    public static String C(final Context context) {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
            return null;
        }
        if (TextUtils.isEmpty(f)) {
            try {
                f = ag.b(context, "mbridge_ua", "").toString();
            } catch (Throwable th) {
                z.c("SameDiTool", th.getMessage(), th);
            }
        }
        try {
            if (Looper.myLooper() == Looper.getMainLooper()) {
                if (TextUtils.isEmpty(f)) {
                    try {
                        if (Build.VERSION.SDK_INT >= 17) {
                            f = WebSettings.getDefaultUserAgent(context);
                        }
                    } catch (Throwable unused) {
                    }
                    if (TextUtils.isEmpty(f)) {
                        try {
                            Constructor declaredConstructor = WebSettings.class.getDeclaredConstructor(Context.class, WebView.class);
                            declaredConstructor.setAccessible(true);
                            f = ((WebSettings) declaredConstructor.newInstance(context, null)).getUserAgentString();
                            declaredConstructor.setAccessible(false);
                        } catch (Throwable th2) {
                            th2.printStackTrace();
                        }
                        if (TextUtils.isEmpty(f)) {
                            try {
                                f = new WebView(context).getSettings().getUserAgentString();
                            } catch (Throwable th3) {
                                th3.printStackTrace();
                            }
                        }
                        if (TextUtils.isEmpty(f)) {
                            R();
                        }
                    }
                } else {
                    try {
                        new Thread(new Runnable() {
                            @Override
                            public final void run() {
                                String defaultUserAgent = null;
                                try {
                                    try {
                                        if (Build.VERSION.SDK_INT >= 17) {
                                            defaultUserAgent = WebSettings.getDefaultUserAgent(context);
                                        }
                                    } catch (Exception unused2) {
                                    }
                                    if (TextUtils.isEmpty(defaultUserAgent) || defaultUserAgent.equals(v.f)) {
                                        return;
                                    }
                                    String unused3 = v.f = defaultUserAgent;
                                    v.H(context);
                                } catch (Throwable th4) {
                                    th4.printStackTrace();
                                }
                            }
                        }).start();
                    } catch (Exception e2) {
                        e2.printStackTrace();
                    }
                }
            } else {
                R();
            }
        } catch (Throwable th4) {
            z.c("SameDiTool", th4.getMessage(), th4);
        }
        H(context);
        return f;
    }

    private static void H(Context context) {
        try {
            ag.a(context, "mbridge_ua", f);
        } catch (Throwable th) {
            z.c("SameDiTool", th.getMessage(), th);
        }
    }

    public static String A() {
        if (TextUtils.isEmpty(f)) {
            C(com.mbridge.msdk.foundation.controller.a.f().j());
        }
        return f;
    }

    private static void R() {
        String str = Build.VERSION.RELEASE;
        String strX = x();
        if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(strX)) {
            f = "Mozilla/5.0 (Linux; Android " + str + "; " + strX + " Build/) AppleWebKit/535.19 (KHTML, like Gecko) Chrome/18.0.1025.133 Mobile Safari/535.19";
            return;
        }
        f = "Mozilla/5.0 (Linux; Android 4.0.4; Galaxy Nexus Build/IMM76B) AppleWebKit/535.19 (KHTML, like Gecko) Chrome/18.0.1025.133 Mobile Safari/535.19";
    }

    public static int D(Context context) {
        try {
            final Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                return e;
            }
            if (contextJ == null) {
                return e;
            }
            if (e == -1) {
                e = 0;
                return e;
            }
            try {
                Runnable runnable = new Runnable() {
                    @Override
                    public final void run() {
                        try {
                            ConnectivityManager connectivityManager = (ConnectivityManager) contextJ.getSystemService("connectivity");
                            if (connectivityManager != null && com.mbridge.msdk.foundation.same.a.h) {
                                NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
                                if (activeNetworkInfo == null) {
                                    int unused = v.e = 0;
                                    return;
                                }
                                if (activeNetworkInfo.getType() == 1) {
                                    int unused2 = v.e = 9;
                                    return;
                                }
                                TelephonyManager telephonyManager = (TelephonyManager) contextJ.getSystemService("phone");
                                if (telephonyManager == null) {
                                    int unused3 = v.e = 0;
                                } else {
                                    int unused4 = v.e = v.a(telephonyManager.getNetworkType());
                                }
                            }
                        } catch (Exception e2) {
                            z.c("SameDiTool", e2.getMessage(), e2);
                            int unused5 = v.e = 0;
                        }
                    }
                };
                if (com.mbridge.msdk.foundation.same.f.b.c().getActiveCount() < 1) {
                    com.mbridge.msdk.foundation.same.f.b.c().execute(runnable);
                }
            } catch (Throwable th) {
                z.d("SameDiTool", th.getMessage());
            }
            return e;
        } catch (Exception e2) {
            z.c("SameDiTool", e2.getMessage(), e2);
            e = 0;
            return e;
        }
    }

    public static String a(Context context, int i2) {
        TelephonyManager telephonyManager;
        if (i2 == 0 || i2 == 9) {
            return "";
        }
        try {
            return (!com.mbridge.msdk.foundation.same.a.h || (telephonyManager = (TelephonyManager) context.getSystemService("phone")) == null) ? "" : String.valueOf(telephonyManager.getNetworkType());
        } catch (Throwable th) {
            z.c("SameDiTool", th.getMessage(), th);
            return "";
        }
    }

    public static String B() {
        try {
            if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_OTHER)) {
                return "";
            }
            if (TextUtils.isEmpty(l)) {
                new Thread(new Runnable() {
                    @Override
                    public final void run() {
                        try {
                            String unused = v.l = TimeZone.getDefault().getDisplayName(false, 0, Locale.ENGLISH);
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    }
                }).start();
                return l;
            }
        } catch (Throwable th) {
            z.c("SameDiTool", th.getMessage(), th);
        }
        return l;
    }

    public static String C() {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
            return "";
        }
        if (TextUtils.isEmpty(g)) {
            g = D() + "";
        }
        return g;
    }

    public static int D() {
        try {
            return Build.VERSION.SDK_INT;
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0;
        }
    }

    public static String E() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_DEVICE_ID) ? "" : !com.mbridge.msdk.foundation.controller.authoritycontroller.a.h() ? TextUtils.isEmpty(a) ? "" : a : TextUtils.isEmpty(a) ? "" : a;
    }

    public static void h(String str) {
        b = t.a(str);
        a = str;
    }

    public static String F() {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_DEVICE_ID)) {
            return "";
        }
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()) {
            return TextUtils.isEmpty(b) ? "" : b;
        }
        String str = b;
        return str == null ? "" : str;
    }

    public static UUID G() {
        try {
            return UUID.randomUUID();
        } catch (Throwable th) {
            z.c("SameDiTool", th.getMessage(), th);
            return null;
        }
    }

    public static String a(String str, Context context) {
        try {
        } catch (Exception e2) {
            z.c("SameDiTool", e2.getMessage(), e2);
        }
        if (!TextUtils.isEmpty(n)) {
            return n;
        }
        if (!TextUtils.isEmpty(str) && context != null) {
            n = context.getPackageManager().getInstallerPackageName(str);
            z.a("SameDiTool", "PKGSource:" + n);
        }
        return n;
    }

    public static String H() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.MANUFACTURER;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v10, types: [java.io.BufferedReader] */
    /* JADX WARN: Type inference failed for: r1v11, types: [java.io.BufferedReader] */
    /* JADX WARN: Type inference failed for: r1v13 */
    /* JADX WARN: Type inference failed for: r1v14 */
    /* JADX WARN: Type inference failed for: r1v16 */
    /* JADX WARN: Type inference failed for: r1v18 */
    /* JADX WARN: Type inference failed for: r1v19, types: [java.io.BufferedReader] */
    /* JADX WARN: Type inference failed for: r1v21 */
    /* JADX WARN: Type inference failed for: r1v22 */
    /* JADX WARN: Type inference failed for: r1v23 */
    /* JADX WARN: Type inference failed for: r1v3, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r1v4, types: [java.io.BufferedReader] */
    /* JADX WARN: Type inference failed for: r1v7 */
    /* JADX WARN: Type inference failed for: r1v9 */
    public static String I() {
        FileReader fileReader;
        Throwable th;
        Exception e2;
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
            return "";
        }
        if (r > 0) {
            return r + "GB";
        }
        ?? bufferedReader = "/proc/meminfo";
        r = 0;
        try {
            try {
                try {
                    fileReader = new FileReader("/proc/meminfo");
                    try {
                        bufferedReader = new BufferedReader(fileReader, 8192);
                    } catch (Exception e3) {
                        e2 = e3;
                        bufferedReader = 0;
                    } catch (Throwable th2) {
                        th = th2;
                        bufferedReader = 0;
                    }
                } catch (IOException e4) {
                    e4.printStackTrace();
                }
            } catch (Exception e5) {
                fileReader = null;
                e2 = e5;
                bufferedReader = 0;
            } catch (Throwable th3) {
                fileReader = null;
                th = th3;
                bufferedReader = 0;
            }
            try {
                String str = bufferedReader.readLine().split("\\s+")[1];
                bufferedReader.close();
                if (str != null) {
                    r = (int) Math.ceil(new Float(Float.valueOf(str).floatValue() / 1048576.0f).doubleValue());
                }
                try {
                    fileReader.close();
                } catch (IOException unused) {
                }
                bufferedReader.close();
                bufferedReader = bufferedReader;
            } catch (Exception e6) {
                e2 = e6;
                z.c("SameDiTool", e2.getMessage(), e2);
                if (fileReader != null) {
                    try {
                        fileReader.close();
                    } catch (IOException unused2) {
                    }
                }
                if (bufferedReader != 0) {
                    bufferedReader.close();
                    bufferedReader = bufferedReader;
                }
                return r + "GB";
            } catch (Throwable th4) {
                th = th4;
                z.c("SameDiTool", th.getMessage(), th);
                if (fileReader != null) {
                    try {
                        fileReader.close();
                    } catch (IOException unused3) {
                    }
                }
                if (bufferedReader != 0) {
                    bufferedReader.close();
                    bufferedReader = bufferedReader;
                }
                return r + "GB";
            }
            return r + "GB";
        } finally {
        }
    }

    public static String E(Context context) {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) || context == null) {
            return "";
        }
        try {
            return Settings.System.getString(context.getContentResolver(), "time_12_24");
        } catch (Exception e2) {
            z.c("SameDiTool", e2.getMessage(), e2);
            return "";
        } catch (Throwable th) {
            z.c("SameDiTool", th.getMessage(), th);
            return "";
        }
    }

    public static String F(Context context) {
        FileReader fileReader;
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) || context == null) {
            return "";
        }
        if (!TextUtils.isEmpty(q)) {
            return q;
        }
        BufferedReader bufferedReader = null;
        try {
            try {
                try {
                    fileReader = new FileReader("/proc/meminfo");
                    try {
                        BufferedReader bufferedReader2 = new BufferedReader(fileReader, 8192);
                        try {
                            String fileSize = Formatter.formatFileSize(context, Long.valueOf(bufferedReader2.readLine().split("\\s+")[1]).longValue() * 1024);
                            q = fileSize;
                            try {
                                bufferedReader2.close();
                            } catch (IOException e2) {
                                z.c("SameDiTool", e2.getMessage(), e2);
                            }
                            try {
                                fileReader.close();
                            } catch (IOException e3) {
                                z.c("SameDiTool", e3.getMessage(), e3);
                            }
                            return fileSize;
                        } catch (IOException e4) {
                            e = e4;
                            bufferedReader = bufferedReader2;
                            z.c("SameDiTool", e.getMessage(), e);
                            if (bufferedReader != null) {
                                try {
                                    bufferedReader.close();
                                } catch (IOException e5) {
                                    z.c("SameDiTool", e5.getMessage(), e5);
                                }
                            }
                            if (fileReader != null) {
                                fileReader.close();
                            }
                            return "";
                        } catch (Throwable th) {
                            th = th;
                            bufferedReader = bufferedReader2;
                            z.c("SameDiTool", th.getMessage(), th);
                            if (bufferedReader != null) {
                                try {
                                    bufferedReader.close();
                                } catch (IOException e6) {
                                    z.c("SameDiTool", e6.getMessage(), e6);
                                }
                            }
                            if (fileReader != null) {
                                fileReader.close();
                            }
                            return "";
                        }
                    } catch (IOException e7) {
                        e = e7;
                    } catch (Throwable th2) {
                        th = th2;
                    }
                } catch (IOException e8) {
                    z.c("SameDiTool", e8.getMessage(), e8);
                    return "";
                }
            } catch (IOException e9) {
                e = e9;
                fileReader = null;
            } catch (Throwable th3) {
                th = th3;
                fileReader = null;
            }
        } finally {
        }
    }

    public static String J() {
        String strA = "";
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            long jA = u.a();
            long jS = S();
            String str = "app_tki_" + jA + "_" + jS;
            String str2 = (String) ag.b(contextJ, str, "");
            try {
                if (!TextUtils.isEmpty(str2)) {
                    return str2;
                }
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("1", "");
                    jSONObject.put("2", String.valueOf(jS));
                    jSONObject.put("3", String.valueOf(jA));
                    jSONObject.put("4", "");
                    jSONObject.put("5", "");
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
                strA = a.a(jSONObject.toString());
                ag.a(contextJ, str, strA);
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

    public static int K() {
        try {
            if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                return 0;
            }
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            long j2 = 0;
            long jLongValue = ((Long) ag.b(contextJ, "FreeRamSize", 0L)).longValue();
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (jCurrentTimeMillis - jLongValue > 1800000 || d == -1) {
                Context contextJ2 = com.mbridge.msdk.foundation.controller.a.f().j();
                if (contextJ2 != null) {
                    ActivityManager activityManager = (ActivityManager) contextJ2.getSystemService("activity");
                    ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
                    activityManager.getMemoryInfo(memoryInfo);
                    j2 = memoryInfo.availMem;
                }
                d = Long.valueOf((j2 / 1000) / 1000).intValue();
                ag.a(contextJ, "FreeRamSize", Long.valueOf(jCurrentTimeMillis));
            }
        } catch (Throwable th) {
            z.c("SameDiTool", th.getMessage(), th);
        }
        return d;
    }

    private static long S() {
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        if (contextJ == null) {
            return 0L;
        }
        ActivityManager activityManager = (ActivityManager) contextJ.getSystemService("activity");
        ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
        activityManager.getMemoryInfo(memoryInfo);
        if (Build.VERSION.SDK_INT >= 16) {
            return memoryInfo.totalMem;
        }
        return 0L;
    }

    public static int L() {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
            return 0;
        }
        if (c < 1) {
            try {
                Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                long jLongValue = ((Long) ag.b(contextJ, "TotalRamSize", 0L)).longValue();
                long jCurrentTimeMillis = System.currentTimeMillis();
                if (jCurrentTimeMillis - jLongValue > 1800000 || c == -1) {
                    c = Long.valueOf((S() / 1000) / 1000).intValue();
                    ag.a(contextJ, "TotalRamSize", Long.valueOf(jCurrentTimeMillis));
                }
            } catch (Throwable th) {
                z.c("SameDiTool", th.getMessage(), th);
            }
        }
        return c;
    }

    public static int M() {
        return m;
    }

    public static String N() {
        if (!TextUtils.isEmpty(p)) {
            return p;
        }
        JSONObject jSONObject = new JSONObject();
        String str = null;
        try {
            Class<?> cls = Class.forName("com.huawei.system.BuildEx");
            str = (String) cls.getMethod("getOsBrand", new Class[0]).invoke(cls, new Object[0]);
        } catch (Throwable th) {
            z.d("SameDiTool", th.getMessage());
        }
        try {
            if (!TextUtils.isEmpty(str) && str.equals("harmony")) {
                jSONObject.put("osType", str);
                try {
                    Class<?> cls2 = Class.forName("ohos.system.version.SystemVersion");
                    jSONObject.put("version", (String) cls2.getMethod("getVersion", new Class[0]).invoke(cls2, new Object[0]));
                } catch (Throwable th2) {
                    z.d("SameDiTool", th2.getMessage());
                }
                try {
                    jSONObject.put("pure_state", Settings.Secure.getInt(com.mbridge.msdk.foundation.controller.a.f().j().getContentResolver(), "pure_mode_state", -1));
                } catch (Throwable th3) {
                    z.d("SameDiTool", th3.getMessage());
                }
                String string = jSONObject.toString();
                if (!TextUtils.isEmpty(string)) {
                    string = t.a(string);
                }
                p = string;
            } else {
                p = "android";
            }
        } catch (Throwable th4) {
            z.d("SameDiTool", th4.getMessage());
        }
        return p;
    }

    public static void b(int i2) {
        x = i2;
    }

    public static int O() {
        return x;
    }

    public static int P() {
        try {
            if (!ab.a.a.a("v_a_d_p", false)) {
                return 0;
            }
            if (ae.g()) {
                y = 1;
            } else if (ae.h()) {
                y = 2;
            } else {
                y = 0;
            }
        } catch (Exception e2) {
            y = 0;
            z.d("SameDiTool", e2.getMessage());
        }
        return y;
    }
}
