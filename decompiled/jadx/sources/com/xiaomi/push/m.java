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

/* JADX INFO: loaded from: classes4.dex */
public class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile int f8263a = 0;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static Map<String, q> f832a = null;
    private static int b = -1;

    public static int a() {
        if (f8263a == 0) {
            try {
                int i = 1;
                if (!((TextUtils.isEmpty(m572a("ro.miui.ui.version.code")) && TextUtils.isEmpty(m572a("ro.miui.ui.version.name"))) ? false : true)) {
                    i = 2;
                }
                f8263a = i;
            } catch (Throwable th) {
                com.xiaomi.channel.commonutils.logger.b.a("get isMIUI failed", th);
                f8263a = 0;
            }
            com.xiaomi.channel.commonutils.logger.b.b("isMIUI's value is: " + f8263a);
        }
        return f8263a;
    }

    public static int a(Context context) {
        String strM572a = m572a("ro.miui.ui.version.code");
        if (TextUtils.isEmpty(strM572a) || !TextUtils.isDigitsOnly(strM572a)) {
            return 0;
        }
        return Integer.parseInt(strM572a);
    }

    public static q a(String str) {
        q qVarB = b(str);
        return qVarB == null ? q.Global : qVarB;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static String m571a() {
        int iA = v.a();
        return (!m574a() || iA <= 0) ? "" : iA < 2 ? "alpha" : iA < 3 ? "development" : "stable";
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

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static String m572a(String str) {
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

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private static void m573a() {
        if (f832a != null) {
            return;
        }
        HashMap map = new HashMap();
        f832a = map;
        map.put("CN", q.China);
        f832a.put("FI", q.Europe);
        f832a.put("SE", q.Europe);
        f832a.put("NO", q.Europe);
        f832a.put("FO", q.Europe);
        f832a.put("EE", q.Europe);
        f832a.put("LV", q.Europe);
        f832a.put("LT", q.Europe);
        f832a.put("BY", q.Europe);
        f832a.put("MD", q.Europe);
        f832a.put("UA", q.Europe);
        f832a.put("PL", q.Europe);
        f832a.put("CZ", q.Europe);
        f832a.put("SK", q.Europe);
        f832a.put("HU", q.Europe);
        f832a.put("DE", q.Europe);
        f832a.put("AT", q.Europe);
        f832a.put("CH", q.Europe);
        f832a.put("LI", q.Europe);
        f832a.put("GB", q.Europe);
        f832a.put("IE", q.Europe);
        f832a.put("NL", q.Europe);
        f832a.put("BE", q.Europe);
        f832a.put("LU", q.Europe);
        f832a.put("FR", q.Europe);
        f832a.put("RO", q.Europe);
        f832a.put("BG", q.Europe);
        f832a.put("RS", q.Europe);
        f832a.put("MK", q.Europe);
        f832a.put("AL", q.Europe);
        f832a.put("GR", q.Europe);
        f832a.put("SI", q.Europe);
        f832a.put("HR", q.Europe);
        f832a.put("IT", q.Europe);
        f832a.put("SM", q.Europe);
        f832a.put("MT", q.Europe);
        f832a.put("ES", q.Europe);
        f832a.put(AssistPushConsts.MSG_VALUE_PAYLOAD, q.Europe);
        f832a.put("AD", q.Europe);
        f832a.put("CY", q.Europe);
        f832a.put("DK", q.Europe);
        f832a.put("IS", q.Europe);
        f832a.put("UK", q.Europe);
        f832a.put("EL", q.Europe);
        f832a.put("RU", q.Russia);
        f832a.put("IN", q.India);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m574a() {
        return a() == 1;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m575a(Context context) {
        return context != null && m576a(context.getPackageName());
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m576a(String str) {
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
        m573a();
        return f832a.get(str.toUpperCase());
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
            strA = m577b(u.a("ro.product.country.region", ""));
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
            com.xiaomi.channel.commonutils.logger.b.m43a("get region from system, region = " + strA);
        }
        if (!TextUtils.isEmpty(strA)) {
            return strA;
        }
        String country = Locale.getDefault().getCountry();
        com.xiaomi.channel.commonutils.logger.b.m43a("locale.default.country = " + country);
        return country;
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    private static String m577b(String str) {
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        String[] strArrSplit = str.split(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
        return strArrSplit.length > 0 ? strArrSplit[0] : str;
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public static boolean m578b() {
        return a() == 2;
    }

    public static String c() {
        return m572a("ro.miui.ui.version.name");
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public static boolean m579c() {
        if (b < 0) {
            b = !m581e() ? 1 : 0;
        }
        return b > 0;
    }

    public static String d() {
        return m572a("ro.build.characteristics");
    }

    /* JADX INFO: renamed from: d, reason: collision with other method in class */
    public static boolean m580d() {
        return !q.China.name().equalsIgnoreCase(a(b()).name());
    }

    public static String e() {
        return m572a("ro.product.manufacturer");
    }

    /* JADX INFO: renamed from: e, reason: collision with other method in class */
    public static boolean m581e() {
        String strA = "";
        try {
            strA = u.a("ro.miui.ui.version.code", "");
        } catch (Exception unused) {
        }
        return !TextUtils.isEmpty(strA);
    }
}
