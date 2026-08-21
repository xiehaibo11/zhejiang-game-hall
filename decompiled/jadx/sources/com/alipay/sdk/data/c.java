package com.alipay.sdk.data;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.pm.PackageInfo;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.preference.PreferenceManager;
import android.text.TextUtils;
import android.widget.TextView;
import com.alipay.mobilesecuritysdk.face.SecurityClientMobile;
import com.alipay.sdk.app.i;
import com.alipay.sdk.util.n;
import com.bianfeng.libuniverse.Device;
import com.qihoo360.replugin.RePlugin;
import com.sigmob.sdk.archives.tar.e;
import java.util.HashMap;
import java.util.Random;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f1143a = "virtualImeiAndImsi";
    private static final String b = "virtual_imei";
    private static final String c = "virtual_imsi";
    private static c d;
    private String e;
    private String f = "sdk-and-lite";
    private String g;

    private String e() {
        return "1";
    }

    private String f() {
        return "-1;-1";
    }

    public String a() {
        return this.g;
    }

    private c() {
        String strA = i.a();
        if (i.b()) {
            return;
        }
        this.f += '_' + strA;
    }

    public static synchronized c b() {
        if (d == null) {
            d = new c();
        }
        return d;
    }

    public synchronized void a(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        PreferenceManager.getDefaultSharedPreferences(com.alipay.sdk.sys.b.a().b()).edit().putString("trideskey", str).commit();
        com.alipay.sdk.cons.a.c = str;
    }

    private String b(Context context) {
        return Float.toString(new TextView(context).getTextSize());
    }

    public String a(com.alipay.sdk.tid.b bVar) {
        Context contextB = com.alipay.sdk.sys.b.a().b();
        com.alipay.sdk.util.a aVarA = com.alipay.sdk.util.a.a(contextB);
        if (TextUtils.isEmpty(this.e)) {
            this.e = "Msp/15.6.2 (" + n.b() + ";" + n.c() + ";" + n.d(contextB) + ";" + n.g(contextB) + ";" + n.e(contextB) + ";" + b(contextB);
        }
        String strB = com.alipay.sdk.util.a.b(contextB).b();
        String strH = n.h(contextB);
        String strE = e();
        String strA = aVarA.a();
        String strB2 = aVarA.b();
        String strD = d();
        String strC = c();
        if (bVar != null) {
            this.g = bVar.b();
        }
        String strReplace = Build.MANUFACTURER.replace(";", " ");
        String strReplace2 = Build.MODEL.replace(";", " ");
        boolean zD = com.alipay.sdk.sys.b.d();
        String strD2 = aVarA.d();
        String strC2 = c(contextB);
        String strD3 = d(contextB);
        StringBuilder sb = new StringBuilder();
        sb.append(this.e);
        sb.append(";");
        sb.append(strB);
        sb.append(";");
        sb.append(strH);
        sb.append(";");
        sb.append(strE);
        sb.append(";");
        sb.append(strA);
        sb.append(";");
        sb.append(strB2);
        sb.append(";");
        sb.append(this.g);
        sb.append(";");
        sb.append(strReplace);
        sb.append(";");
        sb.append(strReplace2);
        sb.append(";");
        sb.append(zD);
        sb.append(";");
        sb.append(strD2);
        sb.append(";");
        sb.append(f());
        sb.append(";");
        sb.append(this.f);
        sb.append(";");
        sb.append(strD);
        sb.append(";");
        sb.append(strC);
        sb.append(";");
        sb.append(strC2);
        sb.append(";");
        sb.append(strD3);
        if (bVar != null) {
            HashMap<String, String> map = new HashMap<>();
            map.put("tid", com.alipay.sdk.tid.b.a(contextB).a());
            map.put("utdid", com.alipay.sdk.sys.b.a().e());
            String strB3 = b(contextB, map);
            if (!TextUtils.isEmpty(strB3)) {
                sb.append(";");
                sb.append(strB3);
            }
        }
        sb.append(")");
        return sb.toString();
    }

    public String c() {
        String strB;
        Context contextB = com.alipay.sdk.sys.b.a().b();
        SharedPreferences sharedPreferences = contextB.getSharedPreferences("virtualImeiAndImsi", 0);
        String string = sharedPreferences.getString("virtual_imei", null);
        if (!TextUtils.isEmpty(string)) {
            return string;
        }
        if (TextUtils.isEmpty(com.alipay.sdk.tid.b.a(contextB).a())) {
            strB = g();
        } else {
            strB = com.alipay.sdk.util.a.a(contextB).b();
        }
        String str = strB;
        sharedPreferences.edit().putString("virtual_imei", str).commit();
        return str;
    }

    public String d() {
        String strA;
        Context contextB = com.alipay.sdk.sys.b.a().b();
        SharedPreferences sharedPreferences = contextB.getSharedPreferences("virtualImeiAndImsi", 0);
        String string = sharedPreferences.getString("virtual_imsi", null);
        if (!TextUtils.isEmpty(string)) {
            return string;
        }
        if (TextUtils.isEmpty(com.alipay.sdk.tid.b.a(contextB).a())) {
            String strE = com.alipay.sdk.sys.b.a().e();
            if (TextUtils.isEmpty(strE)) {
                strA = g();
            } else {
                strA = strE.substring(3, 18);
            }
        } else {
            strA = com.alipay.sdk.util.a.a(contextB).a();
        }
        String str = strA;
        sharedPreferences.edit().putString("virtual_imsi", str).commit();
        return str;
    }

    private String g() {
        return Long.toHexString(System.currentTimeMillis()) + (new Random().nextInt(9000) + 1000);
    }

    private String c(Context context) {
        WifiInfo connectionInfo = ((WifiManager) context.getApplicationContext().getSystemService(Device.NETWORN_WIFI)).getConnectionInfo();
        return connectionInfo != null ? connectionInfo.getSSID() : RePlugin.PROCESS_UI;
    }

    private String d(Context context) {
        WifiInfo connectionInfo = ((WifiManager) context.getApplicationContext().getSystemService(Device.NETWORN_WIFI)).getConnectionInfo();
        return connectionInfo != null ? connectionInfo.getBSSID() : e.V;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String a(Context context, HashMap<String, String> map) {
        String strGetApdid;
        try {
            strGetApdid = SecurityClientMobile.GetApdid(context, map);
        } catch (Throwable th) {
            com.alipay.sdk.util.c.a(th);
            com.alipay.sdk.app.statistic.a.a("third", "GetApdidEx", th);
            strGetApdid = "";
        }
        if (TextUtils.isEmpty(strGetApdid)) {
            com.alipay.sdk.app.statistic.a.a("third", "GetApdidNull", "apdid == null");
        }
        com.alipay.sdk.util.c.d(com.alipay.sdk.m.o.a.f1226a, "apdid:" + strGetApdid);
        return strGetApdid;
    }

    private String b(Context context, HashMap<String, String> map) {
        try {
            return (String) Executors.newFixedThreadPool(2).submit(new d(this, context, map)).get(3000L, TimeUnit.MILLISECONDS);
        } catch (Throwable th) {
            com.alipay.sdk.app.statistic.a.a("third", "GetApdidTimeout", th);
            return "";
        }
    }

    public String a(Context context) {
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
}
