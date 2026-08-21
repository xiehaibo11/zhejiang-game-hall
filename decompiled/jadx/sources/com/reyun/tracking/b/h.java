package com.reyun.tracking.b;

import android.content.Context;
import android.os.Build;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import com.reyun.tracking.sdk.Tracking;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.ymnsdk.replugin.util.RomUtil;
import java.util.Arrays;
import java.util.HashMap;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes3.dex */
public class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f4729a = false;
    private long b;

    private static String a(String str) {
        if (str == null) {
            return null;
        }
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            return (String) cls.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class, String.class).invoke(cls, str, EnvironmentCompat.MEDIA_UNKNOWN);
        } catch (Exception unused) {
            return null;
        }
    }

    private void a(Context context) {
        com.reyun.tracking.utils.c.a(context, "oaid_start", null);
    }

    private void a(Context context, String str, l lVar) {
        new Thread(new j(this, context, lVar, str)).start();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(Context context, String str, String str2) {
        HashMap map = new HashMap();
        map.put("_oaid_interval_time", Long.valueOf(System.currentTimeMillis() - this.b));
        map.put("_oaid_code", str);
        map.put("_oaid_errmsg", str2);
        com.reyun.tracking.utils.c.a(context, "oaid_end", map);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(Context context, String str, boolean z) {
        com.reyun.tracking.a.h.a(context, str, z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(l lVar, String str, boolean z) {
        if (this.f4729a) {
            return;
        }
        this.f4729a = true;
        if (lVar != null) {
            lVar.a(str, z);
        }
    }

    public static boolean a() {
        String strA = a("ro.build.freeme.label");
        return !TextUtils.isEmpty(strA) && strA.equalsIgnoreCase("FREEMEOS");
    }

    public static boolean b() {
        String strA = a("ro.ssui.product");
        return (TextUtils.isEmpty(strA) || strA.equalsIgnoreCase(EnvironmentCompat.MEDIA_UNKNOWN)) ? false : true;
    }

    public void a(Context context, l lVar) {
        String str;
        String str2;
        try {
            String strA = com.reyun.tracking.utils.f.a(context, "tracking_device_id_cache", "oaid", "");
            com.reyun.tracking.a.a.d(Tracking.TAG, "spOaid :" + strA);
            if (!TextUtils.isEmpty(strA) && !EnvironmentCompat.MEDIA_UNKNOWN.equals(strA) && !Pattern.matches("^[0]+-[0]+-[0]+-[0]+-[0]+$", strA) && !Pattern.matches("^[0]+$", strA)) {
                com.reyun.tracking.a.a.d(Tracking.TAG, "sp有oaid");
                a(context, strA, false);
                a(lVar, strA, false);
                return;
            }
            this.b = System.currentTimeMillis();
            a(context);
            String str3 = new m(context).b;
            com.reyun.tracking.sdk.a.a().a(new i(this, lVar), 5000L);
            if (!TextUtils.isEmpty(str3)) {
                com.reyun.tracking.a.a.d(Tracking.TAG, "oaid realTime:" + str3);
                a(context, str3, false);
                a(lVar, str3, false);
                a(context, "100001", "");
                return;
            }
            String str4 = Build.MANUFACTURER;
            if (a()) {
                str4 = "FERRMEOS";
            } else if (b()) {
                str4 = "SSUI";
            }
            if (!TextUtils.isEmpty(str4)) {
                String upperCase = str4.toUpperCase();
                if (Arrays.asList("ASUS", "HUAWEI", "HONOR", RomUtil.ROM_OPPO, "ONEPLUS", "ZTE", "FERRMEOS", "SSUI", "SAMSUNG", "MEIZU", "MOTOLORA", "LENOVO").contains(upperCase)) {
                    a(context, upperCase, lVar);
                    return;
                }
                if (RomUtil.ROM_VIVO.equals(upperCase)) {
                    String strA2 = new com.reyun.tracking.b.a.m(context).a();
                    com.reyun.tracking.a.a.d(Tracking.TAG, "oaid vivo:" + strA2);
                    a(context, strA2, false);
                    a(lVar, strA2, false);
                } else if ("NUBIA".equals(upperCase)) {
                    String strA3 = new com.reyun.tracking.b.a.f(context).a();
                    com.reyun.tracking.a.a.d(Tracking.TAG, "oaid NUBIA:" + strA3);
                    a(context, strA3, false);
                    a(lVar, strA3, false);
                } else {
                    com.reyun.tracking.a.a.d(Tracking.TAG, "oaid error:unknown manufacturer");
                    a(context, EnvironmentCompat.MEDIA_UNKNOWN, false);
                    a(lVar, EnvironmentCompat.MEDIA_UNKNOWN, false);
                    str = "100006";
                    str2 = "unknown manufacturer";
                }
                a(context, "100002", "");
                return;
            }
            com.reyun.tracking.a.a.d(Tracking.TAG, "oaid error:manufacturer is empty");
            a(lVar, EnvironmentCompat.MEDIA_UNKNOWN, false);
            str = "100007";
            str2 = "manufacturer is empty";
            a(context, str, str2);
        } catch (Throwable th) {
            th.printStackTrace();
            com.reyun.tracking.a.a.d(Tracking.TAG, "oaid error:unknown");
            a(lVar, EnvironmentCompat.MEDIA_UNKNOWN, false);
            a(context, "100004", EnvironmentCompat.MEDIA_UNKNOWN);
        }
    }
}
