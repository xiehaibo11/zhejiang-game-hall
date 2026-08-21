package com.tkay.core.common.l;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.os.Looper;
import android.os.SystemClock;
import android.provider.Settings;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.WindowManager;
import android.webkit.WebSettings;
import android.webkit.WebView;
import com.qihoo360.replugin.RePlugin;
import com.tkay.core.api.IExHandler;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.b.f;
import java.math.BigDecimal;
import java.util.Locale;
import java.util.Map;
import java.util.TimeZone;
import java.util.UUID;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.regex.Pattern;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static String f6237a = null;
    public static String b = null;
    public static String c = null;
    public static String d = "";
    static String e = null;
    private static String f = null;
    private static String g = null;
    private static String h = null;
    private static String i = "";
    private static String j = "";
    private static String k = "";
    private static String l = "";
    private static String m = "";
    private static int n = 0;
    private static String o = "";
    private static String p = "";
    private static String q = null;
    private static String r = "";
    private static String s = "";
    private static int t = -1;
    private static int u = -1;
    private static int v = -1;
    private static int w = -1;

    private static int a(int i2) {
        if (i2 == 20) {
            return 16;
        }
        switch (i2) {
            case 1:
            case 2:
            case 4:
            case 7:
            case 11:
                return 1;
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
                return 13;
            default:
                return -1;
        }
    }

    private d() {
    }

    public static void a(Context context) {
        try {
            d();
            k(context);
            i(context);
            h(context);
            g(context);
            a();
            b();
            d(context);
            f();
            f(context);
            c();
            n(context);
            f6237a = p.b(context, com.tkay.core.common.b.f.o, f.o.e, "");
            if (h.a("android.permission.READ_PHONE_STATE", context)) {
                String simOperator = ((TelephonyManager) context.getSystemService("phone")).getSimOperator();
                if (!h.b(simOperator) || simOperator.length() <= 3) {
                    return;
                }
                r = simOperator.substring(0, 3);
                s = simOperator.substring(3, simOperator.length());
            }
        } catch (Exception unused) {
        }
    }

    public static String b(Context context) {
        if (com.tkay.core.common.b.m.a().c("mcc")) {
            return "";
        }
        if (context == null) {
            com.tkay.core.common.b.m.a().f();
        }
        try {
            return !com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b() ? "" : r;
        } catch (Exception unused) {
            return "";
        }
    }

    public static String c(Context context) {
        if (com.tkay.core.common.b.m.a().c("mnc")) {
            return "";
        }
        if (context == null) {
            com.tkay.core.common.b.m.a().f();
        }
        try {
            return !com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b() ? "" : s;
        } catch (Exception unused) {
            return "";
        }
    }

    public static String d(Context context) {
        if (com.tkay.core.common.b.m.a().c("android_id")) {
            return "";
        }
        if (context == null) {
            context = com.tkay.core.common.b.m.a().f();
        }
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
                return "";
            }
            try {
                if (h == null) {
                    String string = Settings.Secure.getString(context.getContentResolver(), "android_id");
                    h = string;
                    if (string == null) {
                        h = "";
                    }
                }
            } catch (Exception unused) {
                h = "";
            }
            return h;
        } catch (Exception unused2) {
            return "";
        }
    }

    public static String e(Context context) {
        if (context == null) {
            return "";
        }
        e = null;
        try {
            if (TextUtils.isEmpty(null)) {
                String strD = d(context);
                e = strD;
                e = f.b(strD);
            }
        } catch (Throwable unused) {
        }
        return e;
    }

    public static String a() {
        if (com.tkay.core.common.b.m.a().c("model")) {
            return "";
        }
        try {
            return !com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b() ? "" : Build.MODEL;
        } catch (Exception unused) {
            return "";
        }
    }

    public static String b() {
        if (com.tkay.core.common.b.m.a().c("brand")) {
            return "";
        }
        try {
            return !com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b() ? "" : Build.BRAND;
        } catch (Exception unused) {
            return "";
        }
    }

    public static String f(Context context) {
        if (com.tkay.core.common.b.m.a().c("language")) {
            return "";
        }
        if (context == null) {
            context = com.tkay.core.common.b.m.a().f();
        }
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
                return "";
            }
            if (TextUtils.isEmpty(o)) {
                String language = context.getResources().getConfiguration().locale.getLanguage();
                o = language;
                return language;
            }
            return o;
        } catch (Exception unused) {
            return "";
        }
    }

    public static int g(Context context) {
        if (com.tkay.core.common.b.m.a().c("orient")) {
            return 0;
        }
        if (context == null) {
            context = com.tkay.core.common.b.m.a().f();
        }
        int i2 = context.getResources().getConfiguration().orientation;
        if (i2 == 2) {
            return 2;
        }
        if (i2 == 1) {
        }
        return 1;
    }

    public static String h(Context context) {
        if (com.tkay.core.common.b.m.a().c("app_vc")) {
            return "";
        }
        if (context == null) {
            context = com.tkay.core.common.b.m.a().f();
        }
        if (n == 0) {
            try {
                n = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionCode;
                StringBuilder sb = new StringBuilder();
                sb.append(n);
                return sb.toString();
            } catch (Exception e2) {
                e2.printStackTrace();
                return "";
            }
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(n);
        return sb2.toString();
    }

    public static String i(Context context) {
        if (com.tkay.core.common.b.m.a().c("app_vn")) {
            return "";
        }
        if (context == null) {
            context = com.tkay.core.common.b.m.a().f();
        }
        try {
            if (TextUtils.isEmpty(m)) {
                String str = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionName;
                m = str;
                return str;
            }
            return m;
        } catch (Exception e2) {
            e2.printStackTrace();
            return "";
        }
    }

    private static int t(Context context) {
        if (context == null) {
            context = com.tkay.core.common.b.m.a().f();
        }
        return context.getResources().getDisplayMetrics().widthPixels;
    }

    private static int u(Context context) {
        if (context == null) {
            context = com.tkay.core.common.b.m.a().f();
        }
        return context.getResources().getDisplayMetrics().heightPixels;
    }

    public static String j(Context context) {
        if (com.tkay.core.common.b.m.a().c("screen")) {
            return "";
        }
        if (context == null) {
            context = com.tkay.core.common.b.m.a().f();
        }
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
                return "";
            }
            StringBuilder sb = new StringBuilder();
            sb.append((context == null ? com.tkay.core.common.b.m.a().f() : context).getResources().getDisplayMetrics().widthPixels);
            sb.append("*");
            if (context == null) {
                context = com.tkay.core.common.b.m.a().f();
            }
            sb.append(context.getResources().getDisplayMetrics().heightPixels);
            return sb.toString();
        } catch (Exception unused) {
            return "";
        }
    }

    public static String k(Context context) {
        if (com.tkay.core.common.b.m.a().c("package_name")) {
            return "";
        }
        if (context == null) {
            context = com.tkay.core.common.b.m.a().f();
        }
        try {
            if (TextUtils.isEmpty(l)) {
                String str = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).packageName;
                l = str;
                return str;
            }
            return l;
        } catch (Exception e2) {
            e2.printStackTrace();
            return "";
        }
    }

    public static String l(Context context) {
        if (com.tkay.core.common.b.m.a().c("it_src")) {
            return "";
        }
        if (context == null) {
            context = com.tkay.core.common.b.m.a().f();
        }
        try {
            if (TextUtils.isEmpty(b)) {
                String installerPackageName = context.getPackageManager().getInstallerPackageName(k(context));
                b = installerPackageName;
                return installerPackageName;
            }
            return b;
        } catch (Exception unused) {
            return "";
        }
    }

    private static int v(Context context) {
        NetworkInfo activeNetworkInfo;
        if (context == null) {
            return -1;
        }
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
            if (connectivityManager == null || !h.a(com.kuaishou.weapon.p0.g.b, context) || (activeNetworkInfo = connectivityManager.getActiveNetworkInfo()) == null) {
                return -1;
            }
            if (activeNetworkInfo.getType() == 1) {
                return -2;
            }
            TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
            if (telephonyManager == null) {
                return -1;
            }
            return telephonyManager.getNetworkType();
        } catch (Exception e2) {
            e2.printStackTrace();
            return -1;
        }
    }

    public static String m(Context context) {
        NetworkInfo activeNetworkInfo;
        if (com.tkay.core.common.b.m.a().c("network_type")) {
            return "";
        }
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
                return "";
            }
            if (context == null) {
                return RePlugin.PROCESS_UI;
            }
            try {
                ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
                if (connectivityManager == null || !h.a(com.kuaishou.weapon.p0.g.b, context) || (activeNetworkInfo = connectivityManager.getActiveNetworkInfo()) == null) {
                    return RePlugin.PROCESS_UI;
                }
                int i2 = 1;
                if (activeNetworkInfo.getType() == 1) {
                    return RePlugin.PROCESS_PERSIST;
                }
                TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
                if (telephonyManager == null) {
                    return RePlugin.PROCESS_UI;
                }
                int networkType = telephonyManager.getNetworkType();
                StringBuilder sb = new StringBuilder();
                if (networkType != 20) {
                    switch (networkType) {
                        case 1:
                        case 2:
                        case 4:
                        case 7:
                        case 11:
                            break;
                        case 3:
                        case 5:
                        case 6:
                        case 8:
                        case 9:
                        case 10:
                        case 12:
                        case 14:
                        case 15:
                            i2 = 3;
                            break;
                        case 13:
                            i2 = 13;
                            break;
                        default:
                            i2 = -1;
                            break;
                    }
                } else {
                    i2 = 16;
                }
                sb.append(i2);
                return sb.toString();
            } catch (Exception e2) {
                e2.printStackTrace();
                return RePlugin.PROCESS_UI;
            }
        } catch (Exception unused) {
            return "";
        }
    }

    public static String c() {
        if (com.tkay.core.common.b.m.a().c("timezone")) {
            return "";
        }
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
                return "";
            }
            try {
                if (TextUtils.isEmpty(p)) {
                    String displayName = TimeZone.getDefault().getDisplayName(false, 0, Locale.ENGLISH);
                    p = displayName;
                    return displayName;
                }
            } catch (Throwable unused) {
            }
            return p;
        } catch (Exception unused2) {
            return "";
        }
    }

    public static String d() {
        if (com.tkay.core.common.b.m.a().c("os_vc")) {
            return "";
        }
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
                return "";
            }
            if (TextUtils.isEmpty(k)) {
                k = String.valueOf(Build.VERSION.SDK_INT);
            }
            return k;
        } catch (Exception unused) {
            return "";
        }
    }

    public static String e() {
        if (com.tkay.core.common.b.m.a().c("os_vn")) {
            return "";
        }
        if (TextUtils.isEmpty(j)) {
            j = Build.VERSION.RELEASE;
        }
        return j;
    }

    private static int n() {
        return Build.VERSION.SDK_INT;
    }

    public static void a(String str) {
        g = str;
        p.a(com.tkay.core.common.b.m.a().f(), com.tkay.core.common.b.f.o, com.tkay.core.common.b.f.r, g);
    }

    public static String f() {
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
                return "";
            }
            if (TextUtils.isEmpty(g)) {
                g = p.b(com.tkay.core.common.b.m.a().f(), com.tkay.core.common.b.f.o, com.tkay.core.common.b.f.r, "");
            }
            return g;
        } catch (Exception unused) {
            return "";
        }
    }

    public static String n(Context context) {
        String str = q;
        if (str == null) {
            try {
                String str2 = context.getPackageManager().getPackageInfo("com.android.vending", 0).versionName;
                q = str2;
                if (str2 == null) {
                    q = "";
                }
                return q;
            } catch (Exception unused) {
                q = "";
                return "";
            }
        }
        if (str == null) {
            q = "";
        }
        return q;
    }

    private static void w(Context context) {
        f6237a = p.b(context, com.tkay.core.common.b.f.o, f.o.e, "");
    }

    public static String o(Context context) {
        if (com.tkay.core.common.b.m.a().b() == null) {
            return "";
        }
        if (TextUtils.isEmpty(c)) {
            WindowManager windowManager = (WindowManager) context.getSystemService("window");
            DisplayMetrics displayMetrics = new DisplayMetrics();
            windowManager.getDefaultDisplay().getMetrics(displayMetrics);
            c = String.valueOf(displayMetrics.density);
        }
        return c;
    }

    public static String g() {
        if (com.tkay.core.common.b.m.a().b() == null) {
            return "";
        }
        try {
            return new BigDecimal((System.currentTimeMillis() - SystemClock.elapsedRealtime()) / 1000.0d).setScale(6, 4).toString();
        } catch (Throwable th) {
            th.printStackTrace();
            return "";
        }
    }

    public static JSONObject h() {
        if (!TextUtils.isEmpty(f6237a)) {
            try {
                return new JSONObject(f6237a);
            } catch (Exception unused) {
            }
        }
        return new JSONObject();
    }

    public static synchronized void a(int i2, String str) {
        if (!TextUtils.isEmpty(f6237a)) {
            try {
                JSONObject jSONObject = new JSONObject(f6237a);
                if (jSONObject.has(String.valueOf(i2))) {
                    return;
                }
                jSONObject.put(String.valueOf(i2), str);
                f6237a = jSONObject.toString();
                return;
            } catch (Exception unused) {
                return;
            }
        }
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(String.valueOf(i2), str);
            f6237a = jSONObject2.toString();
        } catch (Exception unused2) {
        }
    }

    public static synchronized String i() {
        if (com.tkay.core.common.b.m.a().c("ua")) {
            return "";
        }
        try {
            if (!com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
                return "";
            }
            if (!TextUtils.isEmpty(i)) {
                return i;
            }
            String str = Build.VERSION.RELEASE;
            String strA = a();
            String str2 = Build.ID;
            if (TextUtils.isEmpty(str) || TextUtils.isEmpty(strA) || TextUtils.isEmpty(str2)) {
                return "";
            }
            return "Mozilla/5.0 (Linux; Android " + str + "; " + strA + " Build/" + str2 + ") AppleWebKit/535.19 (KHTML, like Gecko) Chrome/18.0.1025.133 Mobile Safari/535.19";
        } catch (Exception unused) {
            return "";
        }
    }

    public static void p(Context context) {
        if (com.tkay.core.common.b.m.a().c("ua")) {
            return;
        }
        try {
            if (com.tkay.core.common.b.p.a(com.tkay.core.common.b.m.a().f()).b()) {
                i = p.b(context, com.tkay.core.common.b.f.o, com.tkay.core.common.b.f.e, "");
                String strB = p.b(context, com.tkay.core.common.b.f.o, com.tkay.core.common.b.f.f, "");
                if (TextUtils.isEmpty(i) || !Build.VERSION.RELEASE.equals(strB)) {
                    if (Looper.myLooper() != Looper.getMainLooper()) {
                        if (TextUtils.isEmpty(i)) {
                        }
                        return;
                    }
                    try {
                        if (Build.VERSION.SDK_INT >= 17) {
                            i = WebSettings.getDefaultUserAgent(context);
                        } else {
                            WebView webView = new WebView(context);
                            g.a(webView);
                            i = webView.getSettings().getUserAgentString();
                        }
                        p.a(context, com.tkay.core.common.b.f.o, com.tkay.core.common.b.f.e, i);
                        p.a(context, com.tkay.core.common.b.f.o, com.tkay.core.common.b.f.f, Build.VERSION.RELEASE);
                    } catch (Throwable unused) {
                    }
                    if (TextUtils.isEmpty(i)) {
                    }
                }
            }
        } catch (Exception unused2) {
        }
    }

    public static synchronized void q(Context context) {
        if (TextUtils.isEmpty(com.tkay.core.common.b.m.a().w())) {
            IExHandler iExHandlerB = com.tkay.core.common.b.m.a().b();
            String uniqueId = iExHandlerB != null ? iExHandlerB.getUniqueId(context) : "";
            if (TextUtils.isEmpty(uniqueId)) {
                uniqueId = r(context);
            }
            if (TextUtils.isEmpty(uniqueId) || Pattern.matches("^[0-]+$", uniqueId)) {
                uniqueId = d(context);
            }
            if (TextUtils.isEmpty(uniqueId)) {
                uniqueId = UUID.randomUUID().toString();
            }
            com.tkay.core.common.b.m.a().k(f.a(uniqueId));
            com.tkay.core.common.k.c.a("", "3", "", String.valueOf(System.currentTimeMillis()));
        }
    }

    public static synchronized String r(final Context context) {
        if (com.tkay.core.common.b.m.a().c("gaid")) {
            return "";
        }
        final ExecutorService executorServiceNewFixedThreadPool = Executors.newFixedThreadPool(2);
        final String[] strArr = new String[1];
        executorServiceNewFixedThreadPool.submit(new Runnable() { // from class: com.tkay.core.common.l.d.1
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    try {
                        Class<?> cls = Class.forName("com.google.android.gms.ads.identifier.AdvertisingIdClient");
                        Class<?> cls2 = Class.forName("com.google.android.gms.ads.identifier.AdvertisingIdClient$Info");
                        strArr[0] = (String) cls2.getMethod("getId", new Class[0]).invoke(cls.getMethod("getAdvertisingIdInfo", Context.class).invoke(null, context), new Object[0]);
                    } catch (Exception unused) {
                    }
                } catch (Throwable unused2) {
                    strArr[0] = new com.tkay.core.common.b.c().a(context).a();
                }
                if (!TextUtils.isEmpty(strArr[0]) && !d.d(strArr[0])) {
                    d.a(strArr[0]);
                }
                try {
                    synchronized (executorServiceNewFixedThreadPool) {
                        executorServiceNewFixedThreadPool.notifyAll();
                    }
                } catch (Throwable unused3) {
                }
            }
        });
        try {
            synchronized (executorServiceNewFixedThreadPool) {
                executorServiceNewFixedThreadPool.wait(2000L);
            }
            executorServiceNewFixedThreadPool.shutdown();
            if (strArr[0] == null) {
                return "";
            }
            return strArr[0];
        } catch (Exception unused) {
            return "";
        }
    }

    private static boolean e(String str) {
        return Pattern.matches("^[0-]+$", str);
    }

    public static String j() {
        if (!TextUtils.isEmpty(d)) {
            return d;
        }
        String strF = com.tkay.core.common.b.m.a().F();
        if (!TextUtils.isEmpty(strF)) {
            d = strF;
            return strF;
        }
        String strF2 = com.tkay.core.common.b.m.a().F();
        if (TextUtils.isEmpty(strF2)) {
            try {
                Class.forName("com.unity3d.player.UnityPlayer");
                strF2 = "2";
            } catch (Throwable unused) {
                strF2 = "1";
            }
            try {
                Class.forName("org.cocos2dx.lib.Cocos2dxActivity");
                Class.forName("org.cocos2dx.lib.Cocos2dxJavascriptJavaBridge");
                strF2 = "4";
            } catch (Throwable unused2) {
            }
        }
        d = strF2;
        return strF2;
    }

    public static int s(Context context) {
        if (t == -1) {
            t = h.a(context, "com.tencent.mm") ? 1 : 0;
        }
        return t;
    }

    public static int k() {
        if (u == -1) {
            if (TextUtils.isEmpty(l())) {
                u = 0;
            } else {
                try {
                    Class.forName("com.tencent.mm.opensdk.openapi.WXAPIFactory");
                    Class.forName("com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram");
                    u = 1;
                } catch (Throwable unused) {
                    u = 0;
                }
            }
        }
        return u;
    }

    public static String l() {
        Object obj;
        String strC = com.tkay.core.common.b.m.a().c();
        if (!TextUtils.isEmpty(strC)) {
            return strC;
        }
        try {
            Map<String, Object> mapL = com.tkay.core.common.b.m.a().l();
            if (mapL == null || (obj = mapL.get(TYAdConst.KEY.WECHAT_APPID)) == null) {
                return null;
            }
            return obj.toString();
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    public static int m() {
        int i2 = v;
        if (i2 != -1) {
            return i2;
        }
        v = 0;
        try {
            v = ((Integer) Class.forName("com.tencent.mm.opensdk.constants.Build").getField("SDK_INT").get(null)).intValue();
        } catch (Throwable unused) {
        }
        return v;
    }

    public static int b(String str) {
        int i2 = w;
        if (i2 != -1) {
            return i2;
        }
        w = 0;
        try {
            w = ((Integer) Class.forName("com.tencent.mm.opensdk.openapi.IWXAPI").getMethod("getWXAppSupportAPI", new Class[0]).invoke(c(str), new Object[0])).intValue();
        } catch (Throwable unused) {
        }
        return w;
    }

    public static Object c(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            return Class.forName("com.tencent.mm.opensdk.openapi.WXAPIFactory").getMethod("createWXAPI", Context.class, String.class).invoke(null, com.tkay.core.common.b.m.a().f(), str);
        } catch (Throwable unused) {
            return null;
        }
    }

    static /* synthetic */ boolean d(String str) {
        return Pattern.matches("^[0-]+$", str);
    }
}
