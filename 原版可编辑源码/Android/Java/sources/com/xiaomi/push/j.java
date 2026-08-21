package com.xiaomi.push;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageInfo;
import android.content.pm.ServiceInfo;
import android.os.Build;
import android.os.Environment;
import android.os.PowerManager;
import android.os.StatFs;
import android.provider.Settings;
import android.support.v4.os.EnvironmentCompat;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.kwad.sdk.collector.AppStatusRules;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.HashSet;
import java.util.Set;

public class j {
    private static String a = null;
    private static final Set<String> a;
    private static boolean a = false;
    private static String b = null;
    private static String c = "";
    private static String d;
    private static String e;
    private static final String f = String.valueOf((char) 2);
    private static final String[] a = {"--", "a-", "u-", "v-", "o-", "g-"};

    static {
        HashSet hashSet = new HashSet();
        a = hashSet;
        hashSet.add("com.xiaomi.xmsf");
        a.add("com.xiaomi.finddevice");
        a.add("com.miui.securitycenter");
        a = true;
    }

    private static double a(double d2) {
        int i = 1;
        while (true) {
            double d3 = i;
            if (d3 >= d2) {
                return d3;
            }
            i <<= 1;
        }
    }

    private static float a(int i) {
        float f2 = ((((((i + AppStatusRules.UploadConfig.DEFAULT_FILE_MAX_SIZE) / 524288) + 1) * 512) * 1024) / 1024.0f) / 1024.0f;
        double d2 = f2;
        return d2 > 0.5d ? (float) Math.ceil(d2) : f2;
    }

    public static int a() {
        Object objA = bk.a("android.os.UserHandle", "myUserId", new Object[0]);
        if (objA == null) {
            return -1;
        }
        return ((Integer) Integer.class.cast(objA)).intValue();
    }

    private static long a(File file) {
        StatFs statFs = new StatFs(file.getPath());
        return statFs.getBlockSizeLong() * statFs.getBlockCountLong();
    }

    public static String a() {
        return a(b()) + "GB";
    }

    private static String a(int i) {
        if (i > 0) {
            String[] strArr = a;
            if (i < strArr.length) {
                return strArr[i];
            }
        }
        return a[0];
    }

    public static String a(Context context) {
        try {
            return k.a(context).a();
        } catch (Exception e2) {
            com.xiaomi.channel.commonutils.logger.b.a("failure to get gaid:" + e2.getMessage());
            return null;
        }
    }

    public static String a(Context context, boolean z) {
        if (d == null) {
            String strC = c(context);
            String strD = !m.d() ? z ? d(context) : l(context) : "";
            String strB = b(context);
            int i = 1;
            if (!(Build.VERSION.SDK_INT < 26) && b(strD) && b(strB)) {
                String strB2 = ba.a(context).b();
                if (TextUtils.isEmpty(strB2)) {
                    String strA = ba.a(context).a();
                    if (TextUtils.isEmpty(strA) || strA.startsWith("00000000-0000-0000-0000-000000000000")) {
                        i = 5;
                    } else {
                        i = 4;
                        strC = strA;
                    }
                } else {
                    strC = strB2 + strC;
                    i = 2;
                }
            } else {
                strC = strD + strC + strB;
            }
            com.xiaomi.channel.commonutils.logger.b.b("devid rule select:" + i);
            if (i == 3) {
                d = strC;
            } else {
                d = a(i) + bp.b(strC);
            }
        }
        return d;
    }

    public static boolean a(Context context) {
        Intent intentRegisterReceiver = context.registerReceiver(null, new IntentFilter("android.intent.action.BATTERY_CHANGED"));
        if (intentRegisterReceiver == null) {
            return false;
        }
        int intExtra = intentRegisterReceiver.getIntExtra("status", -1);
        return intExtra == 2 || intExtra == 5;
    }

    public static boolean a(Context context, String str) {
        PackageInfo packageInfo = (PackageInfo) bk.a((Object) context.getPackageManager(), "getPackageInfoAsUser", str, 0, 999);
        return packageInfo == null || packageInfo.applicationInfo == null || ((packageInfo.applicationInfo.flags & 2097152) == 2097152 && (packageInfo.applicationInfo.flags & 8388608) != 8388608);
    }

    public static boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        int i = 0;
        while (true) {
            String[] strArr = a;
            if (i >= strArr.length) {
                return false;
            }
            if (str.startsWith(strArr[i])) {
                return true;
            }
            i++;
        }
    }

    public static int b() throws Throwable {
        BufferedReader bufferedReader;
        Throwable th;
        String[] strArrSplit;
        int i = 0;
        if (new File("/proc/meminfo").exists()) {
            BufferedReader bufferedReader2 = null;
            try {
                try {
                    bufferedReader = new BufferedReader(new FileReader("/proc/meminfo"), 8192);
                } catch (IOException unused) {
                }
                try {
                    String line = bufferedReader.readLine();
                    if (!TextUtils.isEmpty(line) && (strArrSplit = line.split("\\s+")) != null && strArrSplit.length >= 2 && TextUtils.isDigitsOnly(strArrSplit[1])) {
                        i = Integer.parseInt(strArrSplit[1]);
                    }
                    bufferedReader.close();
                } catch (Exception unused2) {
                    bufferedReader2 = bufferedReader;
                    if (bufferedReader2 != null) {
                        bufferedReader2.close();
                    }
                    return i;
                } catch (Throwable th2) {
                    th = th2;
                    if (bufferedReader != null) {
                        try {
                            bufferedReader.close();
                        } catch (IOException unused3) {
                        }
                    }
                    throw th;
                }
            } catch (Exception unused4) {
            } catch (Throwable th3) {
                bufferedReader = null;
                th = th3;
            }
        }
        return i;
    }

    public static String b() {
        return a(((a(Environment.getDataDirectory()) / 1024.0d) / 1024.0d) / 1024.0d) + "GB";
    }

    public static String b(Context context) {
        return null;
    }

    public static boolean b(Context context) {
        PowerManager powerManager = (PowerManager) context.getSystemService("power");
        return powerManager == null || powerManager.isScreenOn();
    }

    private static boolean b(String str) {
        if (str == null) {
            return true;
        }
        String strTrim = str.trim();
        return strTrim.length() == 0 || strTrim.equalsIgnoreCase("null") || strTrim.equalsIgnoreCase(EnvironmentCompat.MEDIA_UNKNOWN);
    }

    private static int c() {
        return Build.VERSION.SDK_INT < 29 ? 10 : 0;
    }

    public static String c() {
        return b() + "KB";
    }

    public static String c(Context context) {
        if (b != null || !a) {
            return b;
        }
        boolean zD = d(context);
        a = zD;
        if (!zD) {
            return null;
        }
        try {
            b = Settings.Secure.getString(context.getContentResolver(), "android_id");
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.a("failure to get androidId: " + th);
        }
        return b;
    }

    private static boolean c(Context context) {
        String packageName = context.getPackageName();
        if (m.a() && a.contains(packageName)) {
            return context.getPackageManager().checkPermission("android.permission.READ_PHONE_STATE", packageName) == 0 || context.getPackageManager().checkPermission("android.permission.READ_PRIVILEGED_PHONE_STATE", packageName) == 0;
        }
        return false;
    }

    private static boolean c(String str) {
        return !TextUtils.isEmpty(str) && str.length() <= 15 && str.length() >= 14 && bp.b(str) && !bp.c(str);
    }

    public static String d() {
        return (a(Environment.getDataDirectory()) / 1024) + "KB";
    }

    public static String d(Context context) {
        int iC = c();
        String strE = e(context);
        while (strE == null) {
            int i = iC - 1;
            if (iC <= 0) {
                break;
            }
            try {
                Thread.sleep(500L);
            } catch (InterruptedException unused) {
            }
            strE = e(context);
            iC = i;
        }
        return strE;
    }

    private static boolean d(Context context) {
        if ("com.xiaomi.xmsf".equals(context.getPackageName())) {
            return true;
        }
        Intent intent = new Intent();
        ComponentName componentName = new ComponentName(context.getPackageName(), "com.xiaomi.push.service.XMPushService");
        intent.setComponent(componentName);
        try {
            ServiceInfo serviceInfo = context.getPackageManager().getServiceInfo(componentName, 128);
            if (serviceInfo.metaData != null) {
                String string = serviceInfo.metaData.getString("supportGetAndroidID");
                if (TextUtils.isEmpty(string)) {
                    return true;
                }
                return Boolean.parseBoolean(string);
            }
        } catch (Exception unused) {
        }
        return true;
    }

    public static String e(Context context) {
        String deviceId;
        Object objA;
        Object objA2;
        Object objA3;
        if (m.d()) {
            return "";
        }
        String str = a;
        if (str != null) {
            return str;
        }
        try {
            if (c(context)) {
                deviceId = (!m.a() || (objA2 = bk.a("miui.telephony.TelephonyManager", "getDefault", new Object[0])) == null || (objA3 = bk.a(objA2, "getMiuiDeviceId", new Object[0])) == null || !(objA3 instanceof String)) ? null : (String) String.class.cast(objA3);
                if (deviceId == null) {
                    TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
                    if (Build.VERSION.SDK_INT < 26) {
                        deviceId = telephonyManager.getDeviceId();
                    } else {
                        if (1 == telephonyManager.getPhoneType()) {
                            objA = bk.a((Object) telephonyManager, "getImei", (Object[]) null);
                        } else if (2 == telephonyManager.getPhoneType()) {
                            objA = bk.a((Object) telephonyManager, "getMeid", (Object[]) null);
                        }
                        deviceId = (String) objA;
                    }
                }
            } else {
                deviceId = null;
            }
            if (!c(deviceId)) {
                return "";
            }
            a = deviceId;
            return deviceId;
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.a("failure to get id:" + th);
            return null;
        }
    }

    public static String f(Context context) {
        int iC = c();
        String strH = h(context);
        while (strH == null) {
            int i = iC - 1;
            if (iC <= 0) {
                break;
            }
            try {
                Thread.sleep(500L);
            } catch (InterruptedException unused) {
            }
            strH = h(context);
            iC = i;
        }
        return strH;
    }

    public static String g(Context context) {
        Object objA;
        if (m.d() || Build.VERSION.SDK_INT < 22) {
            return "";
        }
        if (!TextUtils.isEmpty(c)) {
            return c;
        }
        e(context);
        if (TextUtils.isEmpty(a)) {
            return "";
        }
        try {
            if (c(context)) {
                TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
                Integer num = (Integer) bk.a((Object) telephonyManager, "getPhoneCount", new Object[0]);
                if (num != null && num.intValue() > 1) {
                    String str = null;
                    for (int i = 0; i < num.intValue(); i++) {
                        if (Build.VERSION.SDK_INT < 26) {
                            objA = bk.a((Object) telephonyManager, "getDeviceId", Integer.valueOf(i));
                        } else if (1 == telephonyManager.getPhoneType()) {
                            objA = bk.a((Object) telephonyManager, "getImei", Integer.valueOf(i));
                        } else {
                            if (2 == telephonyManager.getPhoneType()) {
                                objA = bk.a((Object) telephonyManager, "getMeid", Integer.valueOf(i));
                            }
                            if (TextUtils.isEmpty(str) && !TextUtils.equals(a, str) && c(str)) {
                                c += str + Constants.ACCEPT_TIME_SEPARATOR_SP;
                            }
                        }
                        str = (String) objA;
                        if (TextUtils.isEmpty(str)) {
                        }
                    }
                    int length = c.length();
                    if (length > 0) {
                        c = c.substring(0, length - 1);
                    }
                    return c;
                }
            }
            return "";
        } catch (Exception e2) {
            com.xiaomi.channel.commonutils.logger.b.a("failure to get ids: " + e2);
            return "";
        }
    }

    public static String h(Context context) {
        g(context);
        String str = "";
        if (TextUtils.isEmpty(c)) {
            return "";
        }
        for (String str2 : c.split(Constants.ACCEPT_TIME_SEPARATOR_SP)) {
            if (c(str2)) {
                str = str + bp.a(str2) + Constants.ACCEPT_TIME_SEPARATOR_SP;
            }
        }
        int length = str.length();
        return length > 0 ? str.substring(0, length - 1) : str;
    }

    public static synchronized String i(Context context) {
        if (e != null) {
            return e;
        }
        String strB = bp.b(c(context) + b(context));
        e = strB;
        return strB;
    }

    public static synchronized String j(Context context) {
        return bp.b(c(context) + ((String) null));
    }

    public static String k(Context context) {
        return ((TelephonyManager) context.getSystemService("phone")).getSimOperatorName();
    }

    private static String l(Context context) {
        int iC = c();
        String strE = e(context);
        while (TextUtils.isEmpty(strE)) {
            int i = iC - 1;
            if (iC <= 0) {
                break;
            }
            try {
                Thread.sleep(500L);
            } catch (InterruptedException unused) {
            }
            strE = e(context);
            iC = i;
        }
        return strE;
    }
}
