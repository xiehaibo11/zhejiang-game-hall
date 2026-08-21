package com.mbridge.msdk.foundation.tools;

import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.hardware.SensorManager;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import android.view.inputmethod.InputMethodInfo;
import android.view.inputmethod.InputMethodManager;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.ab;
import com.mbridge.msdk.optimize.SensitiveDataUtil;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: DomainSameDiTool.java */
/* JADX INFO: loaded from: classes2.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f3524a = "";
    private static String b = "";
    private static int c = -1;
    private static String d = "";
    private static String e = "";
    private static String f = "";
    private static JSONObject g = null;
    private static String h = "";
    private static String i = "";
    private static String j = "";
    private static String k = "";
    private static String l = "";
    private static String m;
    private static String n;

    public static int a() {
        return 0;
    }

    public static String a(Context context) {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_DEVICE_ID)) {
            return "";
        }
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()) {
            return f3524a;
        }
        if (context == null) {
            return "";
        }
        if (!TextUtils.isEmpty(f3524a)) {
            return f3524a;
        }
        try {
            String oaid = SensitiveDataUtil.getOaid(context);
            f3524a = oaid;
            if (!TextUtils.isEmpty(oaid)) {
                return f3524a;
            }
        } catch (Throwable th) {
            z.a("DomainSameDiTool", th.getMessage(), th);
        }
        return f3524a;
    }

    public static String b(Context context) {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_imei_mac")) {
            return "";
        }
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()) {
            return k;
        }
        if (context == null) {
            return "";
        }
        try {
            String imei = SensitiveDataUtil.getIMEI(context);
            k = imei;
            if (!TextUtils.isEmpty(imei)) {
                return k;
            }
        } catch (Throwable th) {
            z.a("DomainSameDiTool", th.getMessage(), th);
        }
        return "";
    }

    public static String c(Context context) {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_imei_mac")) {
            return "";
        }
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()) {
            return l;
        }
        if (context == null) {
            return "";
        }
        try {
            String imsi = SensitiveDataUtil.getImsi(context);
            l = imsi;
            if (!TextUtils.isEmpty(imsi)) {
                return l;
            }
        } catch (Throwable th) {
            z.a("DomainSameDiTool", th.getMessage(), th);
        }
        return "";
    }

    public static String d(Context context) {
        return i;
    }

    public static String e(Context context) {
        return j;
    }

    public static String f(Context context) {
        if (context == null) {
            return d;
        }
        try {
            if (TextUtils.isEmpty(d)) {
                d = t.a(SensitiveDataUtil.getAndroidID(context));
            }
        } catch (Throwable th) {
            z.a("DomainSameDiTool", th.getMessage(), th);
        }
        return d;
    }

    public static String g(Context context) {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_android_id")) {
            return "";
        }
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()) {
            return d;
        }
        if (context == null) {
            return m;
        }
        try {
            if (TextUtils.isEmpty(m)) {
                m = SensitiveDataUtil.getAndroidID(context);
            }
        } catch (Throwable th) {
            z.a("DomainSameDiTool", th.getMessage(), th);
        }
        return m;
    }

    public static String h(Context context) {
        if (context == null) {
            return "";
        }
        n = null;
        try {
            if (TextUtils.isEmpty(null)) {
                String strG = g(context);
                n = strG;
                n = SameMD5.getUPMD5(strG);
            }
        } catch (Throwable th) {
            z.c("DomainSameDiTool", th.getMessage(), th);
        }
        return n;
    }

    public static String i(Context context) {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_imei_mac")) {
            return "";
        }
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()) {
            return e;
        }
        if (context == null) {
            return e;
        }
        try {
            if (TextUtils.isEmpty(e)) {
                e = SensitiveDataUtil.getMacAddress(context);
            }
        } catch (Throwable th) {
            z.a("DomainSameDiTool", th.getMessage(), th);
        }
        return e;
    }

    public static String j(Context context) {
        if (context == null) {
            return "";
        }
        if (TextUtils.isEmpty(f)) {
            try {
                String str = context.getPackageManager().getPackageInfo("com.android.vending", 0).versionName;
                f = str;
                return str;
            } catch (Exception unused) {
                return "";
            }
        }
        return f;
    }

    public static String b() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.CPU_ABI2;
    }

    public static String c() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.CPU_ABI;
    }

    public static String d() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.TAGS;
    }

    public static String e() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.USER;
    }

    public static String f() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.RADIO;
    }

    public static String g() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.BOOTLOADER;
    }

    public static String h() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.HARDWARE;
    }

    public static String i() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.HOST;
    }

    public static String j() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.VERSION.CODENAME;
    }

    public static String k() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.VERSION.INCREMENTAL;
    }

    public static String l() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_SERIAL_ID) ? "" : Build.SERIAL;
    }

    public static String m() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.DISPLAY;
    }

    public static String n() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.BOARD;
    }

    public static String o() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.TYPE;
    }

    public static String p() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? "" : Build.VERSION.RELEASE;
    }

    public static int q() {
        if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
            return Build.VERSION.SDK_INT;
        }
        return -1;
    }

    public static int r() {
        return !com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) ? -1 : 1;
    }

    public static int k(Context context) {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) || context == null) {
            return -1;
        }
        try {
            Intent intentRegisterReceiver = context.registerReceiver(null, new IntentFilter("android.intent.action.BATTERY_CHANGED"));
            if (intentRegisterReceiver == null || intentRegisterReceiver.getExtras() == null) {
                return 0;
            }
            int intExtra = intentRegisterReceiver.getIntExtra("status", -1);
            return (intExtra == 2 || intExtra == 5) ? 1 : 0;
        } catch (Exception e2) {
            z.c("DomainSameDiTool", e2.getMessage(), e2);
            return 0;
        }
    }

    public static String l(Context context) {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
            return "";
        }
        double dDoubleValue = 0.0d;
        if (context != null) {
            return "";
        }
        try {
            dDoubleValue = ((Double) Class.forName("com.android.internal.os.PowerProfile").getMethod("getBatteryCapacity", new Class[0]).invoke(Class.forName("com.android.internal.os.PowerProfile").getConstructor(Context.class).newInstance(context), new Object[0])).doubleValue();
        } catch (Exception e2) {
            z.c("DomainSameDiTool", e2.getMessage(), e2);
        } catch (Throwable th) {
            z.c("DomainSameDiTool", th.getMessage(), th);
        }
        return String.valueOf(dDoubleValue + " mAh");
    }

    /* JADX WARN: Removed duplicated region for block: B:37:0x008a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static int m(android.content.Context r3) {
        /*
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            r1 = -1
            if (r0 != 0) goto Le
            return r1
        Le:
            if (r3 != 0) goto L11
            return r1
        L11:
            java.lang.String r0 = "phone"
            java.lang.Object r3 = r3.getSystemService(r0)     // Catch: java.lang.Exception -> L91
            android.telephony.TelephonyManager r3 = (android.telephony.TelephonyManager) r3     // Catch: java.lang.Exception -> L91
            java.lang.String r3 = r3.getSimOperator()     // Catch: java.lang.Exception -> L91
            java.lang.String r0 = "46000"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8e
            java.lang.String r0 = "46002"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8e
            java.lang.String r0 = "46007"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8e
            java.lang.String r0 = "46008"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8e
            java.lang.String r0 = "45412"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 == 0) goto L46
            goto L8e
        L46:
            java.lang.String r0 = "46001"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8c
            java.lang.String r0 = "46006"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8c
            java.lang.String r0 = "46009"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 == 0) goto L5f
            goto L8c
        L5f:
            java.lang.String r0 = "46003"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8a
            java.lang.String r0 = "46005"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8a
            java.lang.String r0 = "46011"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8a
            java.lang.String r0 = "45502"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r0 != 0) goto L8a
            java.lang.String r0 = "45507"
            boolean r3 = r0.equals(r3)     // Catch: java.lang.Exception -> L91
            if (r3 == 0) goto L88
            goto L8a
        L88:
            r3 = -2
            goto L8f
        L8a:
            r3 = 2
            goto L8f
        L8c:
            r3 = 1
            goto L8f
        L8e:
            r3 = 0
        L8f:
            r1 = r3
            goto L9b
        L91:
            r3 = move-exception
            java.lang.String r0 = r3.getMessage()
            java.lang.String r2 = "DomainSameDiTool"
            com.mbridge.msdk.foundation.tools.z.c(r2, r0, r3)
        L9b:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.tools.e.m(android.content.Context):int");
    }

    public static int n(Context context) {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) || context == null) {
            return -1;
        }
        try {
            return ((SensorManager) context.getSystemService("sensor")).getSensorList(-1).size();
        } catch (Exception e2) {
            z.c("DomainSameDiTool", e2.getMessage(), e2);
            return -1;
        } catch (Throwable th) {
            z.c("DomainSameDiTool", th.getMessage(), th);
            return -1;
        }
    }

    public static String o(Context context) {
        if (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) || context == null) {
            return "";
        }
        try {
            List<InputMethodInfo> inputMethodList = ((InputMethodManager) context.getSystemService("input_method")).getInputMethodList();
            StringBuilder sb = new StringBuilder();
            for (int i2 = 0; i2 < inputMethodList.size(); i2++) {
                sb.append("keybroad" + i2 + ((Object) inputMethodList.get(i2).loadLabel(context.getPackageManager())) + " ");
            }
            return sb.toString();
        } catch (Exception e2) {
            z.c("DomainSameDiTool", e2.getMessage(), e2);
            return "";
        } catch (Throwable th) {
            z.c("DomainSameDiTool", th.getMessage(), th);
            return "";
        }
    }

    public static String s() {
        if (TextUtils.isEmpty(b)) {
            if (Build.VERSION.SDK_INT >= 21) {
                b = (!com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA) || Build.VERSION.SDK_INT < 21) ? "" : Arrays.asList(Build.SUPPORTED_ABIS).toString();
            } else {
                ArrayList arrayList = new ArrayList();
                arrayList.add(c());
                arrayList.add(b());
                b = arrayList.toString();
            }
        }
        return b;
    }

    protected static void p(Context context) {
        if (context == null) {
            return;
        }
        try {
            Class<?> cls = Class.forName("com.mbridge.msdk.mbjscommon.webEnvCheck.WebEnvCheckEntry");
            cls.getMethod("check", Context.class).invoke(cls.newInstance(), context);
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public static void a(String str) {
        k = str;
    }

    public static void b(String str) {
        l = str;
    }

    public static void c(String str) {
        e = str;
    }

    public static void d(String str) {
        f3524a = str;
    }

    public static void e(String str) {
        d = str;
    }

    public static JSONObject t() {
        if (g == null) {
            g = new JSONObject();
        }
        if (g.length() > 0) {
            return g;
        }
        try {
            boolean z = false;
            if (ab.a.f3513a.a("e_c", false)) {
                g.put("qemu", "1".equals(f("ro.kernel.qemu")));
                JSONObject jSONObject = g;
                String strF = f("ro.product.cpu.abi");
                if (strF != null && !TextUtils.isEmpty(strF) && strF.contains("x86")) {
                    z = true;
                }
                jSONObject.put("abi", z);
            }
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        return g;
    }

    public static String u() {
        if (TextUtils.isEmpty(h)) {
            String string = v.t().toString();
            z.a("DomainSameDiTool", "emuStr:" + string);
            h = t.a(string);
            z.a("DomainSameDiTool", "_emuBase64String:" + h);
        }
        return h;
    }

    private static String f(String str) {
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (contextJ == null) {
                return null;
            }
            Class<?> clsLoadClass = contextJ.getClassLoader().loadClass("android.os.SystemProperties");
            return (String) clsLoadClass.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(clsLoadClass, str);
        } catch (Exception e2) {
            Log.e("DomainSameDiTool", e2.toString());
            return null;
        }
    }
}
