package com.igexin.push.core;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.database.Cursor;
import android.os.Build;
import android.os.Environment;
import android.text.TextUtils;
import com.igexin.assist.sdk.AssistPushConsts;
import com.igexin.push.config.SDKUrlConfig;
import com.igexin.push.core.bean.PushTaskBean;
import java.io.File;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public class d {
    public static String A = null;
    public static String B = null;
    public static String C = null;
    public static String D = null;
    public static String E = null;
    public static String J = null;
    public static String N = null;
    public static String Q = null;
    public static String R = null;
    public static String S = null;
    public static long T = 0;
    public static String U = null;
    public static byte[] V = null;
    public static boolean W = false;
    public static boolean X = false;
    public static boolean Y = false;
    public static Map<String, PushTaskBean> Z = null;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static String f2565a = "";
    public static Map<String, Integer> aa = null;
    public static HashMap<String, Long> ab = null;
    public static String ad = null;
    public static long ae = 0;
    public static String af = null;
    public static String ag = null;
    public static String ah = null;
    public static String ai = null;
    public static String aj = null;
    public static String ak = null;
    public static boolean al = false;
    public static int am = 0;
    public static int an = 0;
    public static byte[] ao = null;
    private static Map<String, Integer> ap = null;
    public static String b = "";
    public static String c = "";
    public static String d = "";
    public static String e = "";
    public static String f = "";
    public static Context g;
    public static volatile boolean k;
    public static volatile boolean n;
    public static volatile boolean o;
    public static String u;
    public static String v;
    public static String w;
    public static String x;
    public static String z;
    public static AtomicBoolean h = new AtomicBoolean(false);
    public static boolean i = true;
    public static volatile boolean j = false;
    public static volatile boolean l = true;
    public static boolean m = true;
    public static boolean p = true;
    public static int q = 0;
    public static int r = 0;
    public static int s = 0;
    public static long t = 0;
    public static String y = Build.MODEL;
    public static long F = -1;
    public static long G = -1;
    public static long H = 0;
    public static long I = 0;
    public static boolean K = com.igexin.push.config.n.f2496a.equals("debug");
    public static long L = 0;
    public static long M = 0;
    public static long O = 0;
    public static int P = 0;
    public static int ac = 0;

    public static int a(String str, boolean z2) {
        int iIntValue;
        synchronized (d.class) {
            if (ap.get(str) == null) {
                ap.put(str, 0);
            }
            iIntValue = ap.get(str).intValue();
            if (z2) {
                iIntValue--;
                ap.put(str, Integer.valueOf(iIntValue));
                if (iIntValue == 0) {
                    ap.remove(str);
                }
            }
        }
        return iIntValue;
    }

    public static String a() {
        return "";
    }

    public static void a(long j2) {
        t = j2;
        u = com.igexin.b.b.a.a(String.valueOf(j2));
    }

    public static boolean a(Context context) {
        g = context;
        e = context.getPackageName();
        f = com.igexin.push.util.c.b(context);
        if (!d()) {
            com.igexin.b.a.c.b.a("CoreRuntimeInfo|parseManifests failed", new Object[0]);
            return false;
        }
        V = com.igexin.b.b.a.a(f2565a + c + b + context.getPackageName()).getBytes();
        c();
        b();
        i = com.igexin.push.util.a.f();
        Z = new ConcurrentHashMap();
        aa = new ConcurrentHashMap();
        ab = new HashMap<>();
        k = new com.igexin.sdk.a.d(context).c();
        ap = new HashMap();
        e();
        al = true;
        com.igexin.b.a.c.b.a("CoreRuntimeInfo|getui sdk init success, isPushOn = " + k, new Object[0]);
        return true;
    }

    public static boolean a(String str, Integer num, boolean z2) {
        synchronized (d.class) {
            int iIntValue = num.intValue();
            if (z2 && ap.get(str) != null && (iIntValue = ap.get(str).intValue() + num.intValue()) == 0) {
                ap.remove(str);
                return false;
            }
            ap.put(str, Integer.valueOf(iIntValue));
            return true;
        }
    }

    private static void b() {
        File[] fileArrListFiles;
        try {
            File file = new File("/sdcard/libs/");
            if (file.exists() && file.isFile()) {
                com.igexin.b.a.c.b.a("CoreRuntimeInfo|libs is file not directory, delete libs file ++++", new Object[0]);
                file.delete();
            }
            if (!file.exists() && !file.mkdir()) {
                com.igexin.b.a.c.b.a("CoreRuntimeInfo|create libs directory failed ++++++", new Object[0]);
            }
            g.getFilesDir();
            try {
                File file2 = new File(Environment.getExternalStorageDirectory().getPath() + "/system/tmp/local");
                if (file2.exists() && (fileArrListFiles = file2.listFiles(new e())) != null && fileArrListFiles.length > 0) {
                    for (File file3 : fileArrListFiles) {
                        file3.delete();
                    }
                }
            } catch (Throwable th) {
                com.igexin.b.a.c.b.a("CoreRuntimeInfo|" + th.toString(), new Object[0]);
            }
            R = "/sdcard/libs//" + e + ".db";
            S = "/sdcard/libs//com.igexin.sdk.deviceId.db";
            Q = "/sdcard/libs//" + e + ".properties";
            U = "/sdcard/libs//" + e + ".bin";
        } catch (Throwable th2) {
            com.igexin.b.a.c.b.a("CoreRuntimeInfo|initFile exception = " + th2.toString(), new Object[0]);
        }
    }

    private static void c() {
        try {
            PackageInfo packageInfo = g.getPackageManager().getPackageInfo(e, 4096);
            if (packageInfo == null || packageInfo.requestedPermissions == null) {
                return;
            }
            for (String str : packageInfo.requestedPermissions) {
            }
        } catch (Exception e2) {
            com.igexin.b.a.c.b.a("CoreRuntimeInfo|init exception : " + e2.toString(), new Object[0]);
        }
    }

    private static boolean d() {
        String strA = com.igexin.push.core.b.a.a(g);
        String strB = com.igexin.push.core.b.a.b(g);
        String strC = com.igexin.push.core.b.a.c(g);
        if (TextUtils.isEmpty(strA) || TextUtils.isEmpty(strC) || TextUtils.isEmpty(strB)) {
            try {
                ApplicationInfo applicationInfo = g.getPackageManager().getApplicationInfo(e, 128);
                if (applicationInfo != null && applicationInfo.metaData != null) {
                    String string = applicationInfo.metaData.getString(AssistPushConsts.GETUI_APPID);
                    strC = applicationInfo.metaData.getString(AssistPushConsts.GETUI_APPSECRET);
                    String string2 = applicationInfo.metaData.getString(AssistPushConsts.GETUI_APPKEY);
                    if (string != null) {
                        string = string.trim();
                    }
                    if (strC != null) {
                        strC = strC.trim();
                    }
                    if (string2 != null) {
                        string2 = string2.trim();
                    }
                    String str = string;
                    strB = string2;
                    strA = str;
                    if (TextUtils.isEmpty(strA) && !TextUtils.isEmpty(strC) && !TextUtils.isEmpty(strB)) {
                        f2565a = strA;
                        b = strB;
                        c = strC;
                        d = SDKUrlConfig.getLocation();
                        return true;
                    }
                    com.igexin.b.a.c.b.a("CoreRuntimeInfo|getui sdk init error, missing parm #####", new Object[0]);
                }
            } catch (Throwable th) {
                com.igexin.b.a.c.b.a("CoreRuntimeInfo|get ApplicationInfo meta data exception :" + th.toString(), new Object[0]);
                return false;
            }
        } else {
            if (TextUtils.isEmpty(strA)) {
            }
            com.igexin.b.a.c.b.a("CoreRuntimeInfo|getui sdk init error, missing parm #####", new Object[0]);
        }
        return false;
    }

    private static void e() {
        Cursor cursorA = null;
        try {
            cursorA = c.a().k().a("message", null, null, null, null);
            if (cursorA != null) {
                an = cursorA.getCount();
            }
            if (cursorA == null) {
                return;
            }
        } catch (Throwable unused) {
            if (cursorA == null) {
                return;
            }
        }
        cursorA.close();
    }
}
