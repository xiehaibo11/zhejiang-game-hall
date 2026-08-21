package com.xiaomi.push;

import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.Parcelable;
import android.text.TextUtils;
import com.igexin.assist.sdk.AssistPushConsts;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.xiaomi.mipush.sdk.Constants;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;

public class m {
    private static volatile int a = 0;
    private static Map<String, q> a = null;
    private static int b = -1;

    public static int a() {
        if (a == 0) {
            try {
                int i = 1;
                if (!((TextUtils.isEmpty(a("ro.miui.ui.version.code")) && TextUtils.isEmpty(a("ro.miui.ui.version.name"))) ? false : true)) {
                    i = 2;
                }
                a = i;
            } catch (Throwable th) {
                com.xiaomi.channel.commonutils.logger.b.a("get isMIUI failed", th);
                a = 0;
            }
            com.xiaomi.channel.commonutils.logger.b.b("isMIUI's value is: " + a);
        }
        return a;
    }

    public static int a(Context context) {
        String strA = a("ro.miui.ui.version.code");
        if (TextUtils.isEmpty(strA) || !TextUtils.isDigitsOnly(strA)) {
            return 0;
        }
        return Integer.parseInt(strA);
    }

    public static q a(String str) {
        q qVarB = b(str);
        return qVarB == null ? q.b : qVarB;
    }

    public static String a() {
        int iA = v.a();
        return (!a() || iA <= 0) ? "" : iA < 2 ? "alpha" : iA < 3 ? "development" : "stable";
    }

    public static String a(Intent intent) {
        if (intent == null) {
            return null;
        }
        return intent.toString() + " " + a(intent.getExtras());
    }

    public static String a(Bundle bundle) {
        String strA;
        StringBuilder sb = new StringBuilder("Bundle[");
        if (bundle == null) {
            sb.append("null");
        } else {
            boolean z = true;
            for (String str : bundle.keySet()) {
                if (!z) {
                    sb.append(", ");
                }
                sb.append(str);
                sb.append(com.alipay.sdk.m.n.a.h);
                Object obj = bundle.get(str);
                if (obj instanceof int[]) {
                    strA = Arrays.toString((int[]) obj);
                } else if (obj instanceof byte[]) {
                    strA = Arrays.toString((byte[]) obj);
                } else if (obj instanceof boolean[]) {
                    strA = Arrays.toString((boolean[]) obj);
                } else if (obj instanceof short[]) {
                    strA = Arrays.toString((short[]) obj);
                } else if (obj instanceof long[]) {
                    strA = Arrays.toString((long[]) obj);
                } else if (obj instanceof float[]) {
                    strA = Arrays.toString((float[]) obj);
                } else if (obj instanceof double[]) {
                    strA = Arrays.toString((double[]) obj);
                } else if (obj instanceof String[]) {
                    strA = Arrays.toString((String[]) obj);
                } else if (obj instanceof CharSequence[]) {
                    strA = Arrays.toString((CharSequence[]) obj);
                } else if (obj instanceof Parcelable[]) {
                    strA = Arrays.toString((Parcelable[]) obj);
                } else if (obj instanceof Bundle) {
                    strA = a((Bundle) obj);
                } else {
                    sb.append(obj);
                    z = false;
                }
                sb.append(strA);
                z = false;
            }
        }
        sb.append("]");
        return sb.toString();
    }

    public static String a(String str) {
        try {
            try {
                return (String) bk.a("android.os.SystemProperties", MonitorConstants.CONNECT_TYPE_GET, str, "");
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.d("fail to get property. " + e);
                return null;
            }
        } catch (Throwable unused) {
            return null;
        }
    }

    private static void a() {
        if (a != null) {
            return;
        }
        HashMap map = new HashMap();
        a = map;
        map.put("CN", q.a);
        a.put("FI", q.c);
        a.put("SE", q.c);
        a.put("NO", q.c);
        a.put("FO", q.c);
        a.put("EE", q.c);
        a.put("LV", q.c);
        a.put("LT", q.c);
        a.put("BY", q.c);
        a.put("MD", q.c);
        a.put("UA", q.c);
        a.put("PL", q.c);
        a.put("CZ", q.c);
        a.put("SK", q.c);
        a.put("HU", q.c);
        a.put("DE", q.c);
        a.put("AT", q.c);
        a.put("CH", q.c);
        a.put("LI", q.c);
        a.put("GB", q.c);
        a.put("IE", q.c);
        a.put("NL", q.c);
        a.put("BE", q.c);
        a.put("LU", q.c);
        a.put("FR", q.c);
        a.put("RO", q.c);
        a.put("BG", q.c);
        a.put("RS", q.c);
        a.put("MK", q.c);
        a.put("AL", q.c);
        a.put("GR", q.c);
        a.put("SI", q.c);
        a.put("HR", q.c);
        a.put("IT", q.c);
        a.put("SM", q.c);
        a.put("MT", q.c);
        a.put("ES", q.c);
        a.put(AssistPushConsts.MSG_VALUE_PAYLOAD, q.c);
        a.put("AD", q.c);
        a.put("CY", q.c);
        a.put("DK", q.c);
        a.put("IS", q.c);
        a.put("UK", q.c);
        a.put("EL", q.c);
        a.put("RU", q.d);
        a.put("IN", q.e);
    }

    public static boolean a() {
        return a() == 1;
    }

    public static boolean a(Context context) {
        return context != null && a(context.getPackageName());
    }

    public static boolean a(String str) {
        return "com.xiaomi.xmsf".equals(str);
    }

    public static int b(Context context) {
        try {
            return context.getPackageManager().getPackageInfo("com.xiaomi.xmsf", 0).versionCode;
        } catch (Exception unused) {
            return 0;
        }
    }

    private static q b(String str) {
        a();
        return a.get(str.toUpperCase());
    }

    public static String b() {
        String strA = u.a("ro.miui.region", "");
        if (TextUtils.isEmpty(strA)) {
            strA = u.a("persist.sys.oppo.region", "");
        }
        if (TextUtils.isEmpty(strA)) {
            strA = u.a("ro.oppo.regionmark", "");
        }
        if (TextUtils.isEmpty(strA)) {
            strA = u.a("ro.vendor.oplus.regionmark", "");
        }
        if (TextUtils.isEmpty(strA)) {
            strA = u.a("ro.hw.country", "");
        }
        if (TextUtils.isEmpty(strA)) {
            strA = u.a("ro.csc.countryiso_code", "");
        }
        if (TextUtils.isEmpty(strA)) {
            strA = b(u.a("ro.product.country.region", ""));
        }
        if (TextUtils.isEmpty(strA)) {
            strA = u.a("gsm.vivo.countrycode", "");
        }
        if (TextUtils.isEmpty(strA)) {
            strA = u.a("persist.sys.oem.region", "");
        }
        if (TextUtils.isEmpty(strA)) {
            strA = u.a("ro.product.locale.region", "");
        }
        if (TextUtils.isEmpty(strA)) {
            strA = u.a("persist.sys.country", "");
        }
        if (!TextUtils.isEmpty(strA)) {
            com.xiaomi.channel.commonutils.logger.b.a("get region from system, region = " + strA);
        }
        if (!TextUtils.isEmpty(strA)) {
            return strA;
        }
        String country = Locale.getDefault().getCountry();
        com.xiaomi.channel.commonutils.logger.b.a("locale.default.country = " + country);
        return country;
    }

    private static String b(String str) {
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        String[] strArrSplit = str.split(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
        return strArrSplit.length > 0 ? strArrSplit[0] : str;
    }

    public static boolean b() {
        return a() == 2;
    }

    public static String c() {
        return a("ro.miui.ui.version.name");
    }

    public static boolean c() {
        if (b < 0) {
            b = !e() ? 1 : 0;
        }
        return b > 0;
    }

    public static String d() {
        return a("ro.build.characteristics");
    }

    public static boolean d() {
        return !q.a.name().equalsIgnoreCase(a(b()).name());
    }

    public static String e() {
        return a("ro.product.manufacturer");
    }

    public static boolean e() {
        String strA = "";
        try {
            strA = u.a("ro.miui.ui.version.code", "");
        } catch (Exception unused) {
        }
        return !TextUtils.isEmpty(strA);
    }
}
