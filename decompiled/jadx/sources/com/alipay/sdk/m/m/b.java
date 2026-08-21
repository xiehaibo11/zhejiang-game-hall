package com.alipay.sdk.m.m;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.pm.PackageInfo;
import android.os.Build;
import android.preference.PreferenceManager;
import android.text.TextUtils;
import android.widget.TextView;
import com.alipay.sdk.m.u.c;
import com.alipay.sdk.m.u.n;
import com.qihoo360.replugin.RePlugin;
import com.sigmob.sdk.archives.tar.e;
import java.util.Random;

/* JADX INFO: loaded from: classes.dex */
public class b {
    public static final String d = "virtualImeiAndImsi";
    public static final String e = "virtual_imei";
    public static final String f = "virtual_imsi";
    public static volatile b g;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f1218a;
    public String b = "sdk-and-lite";
    public String c;

    public b() {
        String strA = com.alipay.sdk.m.j.a.a();
        if (com.alipay.sdk.m.j.a.b()) {
            return;
        }
        this.b += '_' + strA;
    }

    public static synchronized b b() {
        if (g == null) {
            g = new b();
        }
        return g;
    }

    public static String c() {
        return Long.toHexString(System.currentTimeMillis()) + (new Random().nextInt(9000) + 1000);
    }

    public static String d() {
        return "-1;-1";
    }

    public static String e() {
        return "1";
    }

    public static String f() {
        Context contextB = com.alipay.sdk.m.s.b.d().b();
        SharedPreferences sharedPreferences = contextB.getSharedPreferences(d, 0);
        String string = sharedPreferences.getString(e, null);
        if (!TextUtils.isEmpty(string)) {
            return string;
        }
        String strC = TextUtils.isEmpty(com.alipay.sdk.m.t.a.a(contextB).d()) ? c() : c.b(contextB).b();
        sharedPreferences.edit().putString(e, strC).apply();
        return strC;
    }

    public static String g() {
        String strC;
        Context contextB = com.alipay.sdk.m.s.b.d().b();
        SharedPreferences sharedPreferences = contextB.getSharedPreferences(d, 0);
        String string = sharedPreferences.getString(f, null);
        if (!TextUtils.isEmpty(string)) {
            return string;
        }
        if (TextUtils.isEmpty(com.alipay.sdk.m.t.a.a(contextB).d())) {
            String strC2 = com.alipay.sdk.m.s.b.d().c();
            strC = (TextUtils.isEmpty(strC2) || strC2.length() < 18) ? c() : strC2.substring(3, 18);
        } else {
            strC = c.b(contextB).c();
        }
        String str = strC;
        sharedPreferences.edit().putString(f, str).apply();
        return str;
    }

    public static String h() {
        return e.V;
    }

    public static String i() {
        return RePlugin.PROCESS_UI;
    }

    public String a() {
        return this.c;
    }

    public static synchronized void a(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        PreferenceManager.getDefaultSharedPreferences(com.alipay.sdk.m.s.b.d().b()).edit().putString("trideskey", str).apply();
        com.alipay.sdk.m.l.a.f = str;
    }

    public static String b(Context context) {
        if (context == null) {
            return "";
        }
        try {
            StringBuilder sb = new StringBuilder();
            String packageName = context.getPackageName();
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(packageName, 0);
            sb.append("(");
            sb.append(packageName);
            sb.append(";");
            sb.append(packageInfo.versionCode);
            sb.append(")");
            return sb.toString();
        } catch (Exception unused) {
            return "";
        }
    }

    public static String a(Context context) {
        return Float.toString(new TextView(context).getTextSize());
    }

    public String a(com.alipay.sdk.m.s.a aVar, com.alipay.sdk.m.t.a aVar2, boolean z) {
        Context contextB = com.alipay.sdk.m.s.b.d().b();
        c cVarB = c.b(contextB);
        if (TextUtils.isEmpty(this.f1218a)) {
            this.f1218a = "Msp/15.8.15 (" + n.f() + ";" + n.e() + ";" + n.c(contextB) + ";" + n.e(contextB) + ";" + n.f(contextB) + ";" + a(contextB);
        }
        String strB = c.d(contextB).b();
        String strB2 = n.b(contextB);
        String strE = e();
        String strC = cVarB.c();
        String strB3 = cVarB.b();
        String strG = g();
        String strF = f();
        if (aVar2 != null) {
            this.c = aVar2.c();
        }
        String strReplace = Build.MANUFACTURER.replace(";", " ");
        String strReplace2 = Build.MODEL.replace(";", " ");
        boolean zE = com.alipay.sdk.m.s.b.e();
        String strD = cVarB.d();
        String strI = i();
        String strH = h();
        StringBuilder sb = new StringBuilder();
        sb.append(this.f1218a);
        sb.append(";");
        sb.append(strB);
        sb.append(";");
        sb.append(strB2);
        sb.append(";");
        sb.append(strE);
        sb.append(";");
        sb.append(strC);
        sb.append(";");
        sb.append(strB3);
        sb.append(";");
        sb.append(this.c);
        sb.append(";");
        sb.append(strReplace);
        sb.append(";");
        sb.append(strReplace2);
        sb.append(";");
        sb.append(zE);
        sb.append(";");
        sb.append(strD);
        sb.append(";");
        sb.append(d());
        sb.append(";");
        sb.append(this.b);
        sb.append(";");
        sb.append(strG);
        sb.append(";");
        sb.append(strF);
        sb.append(";");
        sb.append(strI);
        sb.append(";");
        sb.append(strH);
        if (aVar2 != null) {
            String strA = com.alipay.sdk.m.w.b.a(aVar, contextB, com.alipay.sdk.m.t.a.a(contextB).d(), com.alipay.sdk.m.w.b.c(aVar, contextB));
            if (!TextUtils.isEmpty(strA)) {
                sb.append(";;;");
                sb.append(strA);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}
