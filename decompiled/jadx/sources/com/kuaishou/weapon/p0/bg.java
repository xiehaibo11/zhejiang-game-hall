package com.kuaishou.weapon.p0;

import android.accessibilityservice.AccessibilityServiceInfo;
import android.content.ComponentName;
import android.content.Context;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.LocaleList;
import android.provider.Settings;
import android.text.TextUtils;
import android.view.accessibility.AccessibilityManager;
import android.view.inputmethod.InputMethodInfo;
import android.view.inputmethod.InputMethodManager;
import com.huawei.hms.framework.common.ContainerUtils;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.reflect.Method;
import java.net.URLEncoder;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class bg {
    public static String A(Context context) {
        StringBuilder sb = new StringBuilder();
        try {
            String[] strArr = {"android.permission.READ_PHONE_STATE", g.i, "android.permission.WRITE_EXTERNAL_STORAGE", "android.permission.READ_CONTACTS", "android.permission.CAMERA", "android.permission.RECORD_AUDIO", g.g, g.h, "android.permission.BLUETOOTH", "android.permission.WRITE_CALENDAR", "android.permission.READ_CALENDAR"};
            for (int i = 0; i < 11; i++) {
                sb.append(g.a(context, strArr[i]) == 0 ? "1" : "0");
            }
        } catch (Exception unused) {
        }
        return sb.toString();
    }

    public static String B(Context context) {
        Iterator<String> itKeys;
        try {
            StringBuilder sb = new StringBuilder();
            JSONObject jSONObjectC = C(context);
            if (jSONObjectC != null && (itKeys = jSONObjectC.keys()) != null) {
                String str = "";
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    String string = jSONObjectC.getString(next);
                    sb.append(str);
                    str = ";";
                    sb.append(next);
                    sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                    sb.append(string);
                }
                return sb.toString();
            }
        } catch (Exception unused) {
        }
        return "";
    }

    private static JSONObject C(Context context) {
        try {
            JSONObject jSONObject = new JSONObject();
            String str = WeaponHI.sUserId;
            String strL = l();
            String str2 = WeaponHI.sChannel;
            String strK = k();
            String strJ = j();
            String strEncode = "";
            jSONObject.put("userId", TextUtils.isEmpty(str) ? "" : URLEncoder.encode(str, "UTF-8"));
            jSONObject.put("platform", TextUtils.isEmpty(strL) ? "" : URLEncoder.encode(strL, "UTF-8"));
            jSONObject.put("channel", TextUtils.isEmpty(str2) ? "" : URLEncoder.encode(str2, "UTF-8"));
            try {
                if (h.a(context, "re_po_rt").e("a1_p_s_p_s")) {
                    jSONObject.put("mod", TextUtils.isEmpty(strK) ? "" : URLEncoder.encode(strK, "UTF-8"));
                    if (!TextUtils.isEmpty(strJ)) {
                        strEncode = URLEncoder.encode(strJ, "UTF-8");
                    }
                } else {
                    jSONObject.put("mod", "");
                }
                jSONObject.put("sysver", strEncode);
            } catch (Exception unused) {
            }
            return jSONObject;
        } catch (Exception unused2) {
            return null;
        }
    }

    public static double a() {
        try {
            String strC = c(com.kwad.sdk.f.b.FA().getLocation());
            if (!TextUtils.isEmpty(strC) && !strC.startsWith("RISK")) {
                return new JSONObject(strC).getDouble("latitude");
            }
            return -1.0d;
        } catch (Throwable unused) {
            return -1.0d;
        }
    }

    private static String a(AccessibilityServiceInfo accessibilityServiceInfo) {
        String id = accessibilityServiceInfo.getId();
        int iLastIndexOf = id.lastIndexOf("/");
        return iLastIndexOf > 0 ? id.substring(0, iLastIndexOf) : id;
    }

    public static String a(Context context) {
        try {
            return c(com.kwad.sdk.f.b.FA().Fo());
        } catch (Throwable unused) {
            return bh.d;
        }
    }

    public static String a(Context context, int i) {
        try {
            return i == 1 ? c(com.kwad.sdk.f.b.FA().Fr()) : c(com.kwad.sdk.f.b.FA().Fo());
        } catch (Throwable unused) {
            return bh.d;
        }
    }

    public static String a(String str) {
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            return (String) cls.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(cls, str);
        } catch (Throwable unused) {
            return null;
        }
    }

    public static Method a(Class<?> cls, String str, Class<?>... clsArr) {
        try {
            Method methodB = b(cls, str, clsArr);
            try {
                methodB.setAccessible(true);
                return methodB;
            } catch (Throwable unused) {
                return methodB;
            }
        } catch (Throwable unused2) {
            return null;
        }
    }

    public static void a(final Context context, String str, Map<String, String> map) {
        if (TextUtils.isEmpty(str) || h.a(context, "re_po_rt").c(df.bl, 1) == 0) {
            return;
        }
        try {
            JSONObject jSONObjectA = new cl(str, cj.j).a(context);
            if (map == null || map.size() <= 0) {
                jSONObjectA.put("module_section", new JSONObject());
            } else {
                jSONObjectA.put("module_section", new JSONObject((Map<String, Object>) map));
            }
            final String string = jSONObjectA.toString();
            n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.bg.1
                @Override // java.lang.Runnable
                public final void run() {
                    co.a(context, string);
                }
            });
        } catch (Throwable unused) {
        }
    }

    public static double b() {
        try {
            String strC = c(com.kwad.sdk.f.b.FA().getLocation());
            if (!TextUtils.isEmpty(strC) && !strC.startsWith("RISK")) {
                return new JSONObject(strC).getDouble("longitude");
            }
            return -1.0d;
        } catch (Throwable unused) {
            return -1.0d;
        }
    }

    public static int b(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return 0;
            }
            return new JSONObject(str).getBoolean("userSet") ? 1 : 0;
        } catch (Throwable unused) {
            return -2;
        }
    }

    public static String b(Context context) {
        try {
            return c(com.kwad.sdk.f.b.FA().Fo());
        } catch (Throwable unused) {
            return bh.d;
        }
    }

    public static String b(Context context, int i) {
        try {
            return i == 1 ? c(com.kwad.sdk.f.b.FA().Fr()) : c(com.kwad.sdk.f.b.FA().Fo());
        } catch (Throwable unused) {
            return bh.d;
        }
    }

    public static Method b(Class<?> cls, String str, Class<?>... clsArr) throws NoSuchMethodException {
        try {
            Method method = cls.getMethod(str, clsArr);
            if (method != null) {
                return method;
            }
        } catch (Throwable unused) {
        }
        while (cls != null) {
            try {
                Method declaredMethod = cls.getDeclaredMethod(str, clsArr);
                declaredMethod.setAccessible(true);
                return declaredMethod;
            } catch (NoSuchMethodException unused2) {
                cls = cls.getSuperclass();
            }
        }
        throw new NoSuchMethodException();
    }

    public static String c() {
        try {
            String strC = c(com.kwad.sdk.f.b.FA().Fw());
            if (!TextUtils.isEmpty(strC) && !strC.startsWith("RISK")) {
                JSONObject jSONObject = new JSONObject(strC);
                return jSONObject.getString("cellId") + ", " + jSONObject.getString("lac");
            }
            return strC;
        } catch (Throwable unused) {
            return bh.d;
        }
    }

    public static String c(Context context) {
        try {
            return c(com.kwad.sdk.f.b.FA().Fo());
        } catch (Throwable unused) {
            return bh.d;
        }
    }

    public static String c(String str) {
        String string = "";
        try {
            if (TextUtils.isEmpty(str)) {
                return "";
            }
            JSONObject jSONObject = new JSONObject(str);
            int i = jSONObject.getInt("errorCode");
            if (i != 0) {
                return i == 3 ? bh.c : i == 1 ? bh.f2709a : bh.d;
            }
            string = jSONObject.getString("value");
            return string;
        } catch (Throwable unused) {
            return string;
        }
    }

    public static String d() {
        try {
            String strC = c(com.kwad.sdk.f.b.FA().Fy());
            if (!TextUtils.isEmpty(strC)) {
                if (strC.startsWith("RISK")) {
                }
            }
            return strC;
        } catch (Throwable unused) {
            return bh.d;
        }
    }

    public static String d(Context context) {
        try {
            return c(com.kwad.sdk.f.b.FA().Ft());
        } catch (Throwable unused) {
            return bh.d;
        }
    }

    public static String e(Context context) {
        try {
            return c(com.kwad.sdk.f.b.FA().getIccId());
        } catch (Throwable unused) {
            return bh.d;
        }
    }

    public static JSONArray e() {
        try {
            String strC = c(com.kwad.sdk.f.b.FA().Fx());
            if (!TextUtils.isEmpty(strC) && !strC.startsWith("RISK")) {
                JSONArray jSONArray = new JSONArray();
                JSONArray jSONArray2 = new JSONArray(strC);
                for (int i = 0; i < jSONArray2.length(); i++) {
                    JSONObject jSONObject = new JSONObject();
                    jSONObject.put("1", jSONArray2.getJSONObject(i).getString("ssid"));
                    jSONObject.put("2", jSONArray2.getJSONObject(i).getString("bssid"));
                    jSONArray.put(jSONObject);
                }
                return jSONArray;
            }
        } catch (Throwable unused) {
        }
        return null;
    }

    public static String f() {
        try {
            return c(com.kwad.sdk.f.b.FA().getIp());
        } catch (Throwable unused) {
            return bh.c;
        }
    }

    public static String f(Context context) {
        try {
            return c(com.kwad.sdk.f.b.FA().Fp());
        } catch (Throwable unused) {
            return bh.d;
        }
    }

    public static String g() {
        try {
            return c(com.kwad.sdk.f.b.FA().Fq());
        } catch (Throwable unused) {
            return bh.c;
        }
    }

    public static boolean g(Context context) {
        try {
            return Settings.Secure.getInt(context.getContentResolver(), "adb_enabled", 0) > 0;
        } catch (Throwable unused) {
            return false;
        }
    }

    public static String h() {
        try {
            Locale locale = Locale.getDefault();
            return locale.getLanguage() + Constants.ACCEPT_TIME_SEPARATOR_SERVER + locale.getCountry();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static boolean h(Context context) {
        boolean z = false;
        try {
            if (Build.VERSION.SDK_INT <= 16 ? Settings.Secure.getInt(context.getContentResolver(), "adb_enabled", 0) > 0 : Settings.Secure.getInt(context.getContentResolver(), "adb_enabled", 0) > 0) {
                z = true;
            }
        } catch (Throwable unused) {
        }
        return z;
    }

    public static String i() {
        Locale locale = Build.VERSION.SDK_INT >= 24 ? LocaleList.getDefault().get(0) : Locale.getDefault();
        return locale.getLanguage() + Constants.ACCEPT_TIME_SEPARATOR_SERVER + locale.getCountry();
    }

    public static String i(Context context) {
        try {
            List<InputMethodInfo> inputMethodList = ((InputMethodManager) context.getSystemService("input_method")).getInputMethodList();
            StringBuilder sb = new StringBuilder();
            Iterator<InputMethodInfo> it = inputMethodList.iterator();
            while (it.hasNext()) {
                sb.append(it.next().getId());
                sb.append(";");
            }
            if (TextUtils.isEmpty(sb)) {
                return bh.c;
            }
            String string = sb.toString();
            return string.endsWith(";") ? string.substring(0, string.length() - 1) : string;
        } catch (Exception unused) {
            return bh.d;
        }
    }

    public static String j() {
        return "ANDROID_" + Build.VERSION.RELEASE;
    }

    public static String j(Context context) {
        List<InputMethodInfo> enabledInputMethodList;
        ActivityInfo activityInfo;
        int i = -1;
        if (context == null) {
            return "";
        }
        try {
            PackageManager packageManager = context.getPackageManager();
            String string = Settings.Secure.getString(context.getContentResolver(), "default_input_method");
            if (string == null) {
                string = "null";
            }
            String str = "1=" + string + ";";
            InputMethodManager inputMethodManager = (InputMethodManager) context.getSystemService("input_method");
            if (inputMethodManager != null && (enabledInputMethodList = inputMethodManager.getEnabledInputMethodList()) != null) {
                str = str + "2=";
                for (InputMethodInfo inputMethodInfo : enabledInputMethodList) {
                    String packageName = inputMethodInfo.getPackageName();
                    if (packageName == null) {
                        packageName = "null";
                    }
                    String settingsActivity = inputMethodInfo.getSettingsActivity();
                    if (settingsActivity == null) {
                        settingsActivity = "null";
                    }
                    if (packageManager != null) {
                        try {
                            if (!packageName.equals("null") && !settingsActivity.equals("null") && (activityInfo = packageManager.getActivityInfo(new ComponentName(packageName, settingsActivity), 0)) != null) {
                                i = activityInfo.launchMode;
                            }
                        } catch (Exception unused) {
                        }
                    }
                    str = str + packageName + Constants.ACCEPT_TIME_SEPARATOR_SERVER + settingsActivity + Constants.ACCEPT_TIME_SEPARATOR_SERVER + String.format("%d", Integer.valueOf(i)) + ";";
                }
            }
            return str;
        } catch (Throwable unused2) {
            return "";
        }
    }

    public static String k() {
        return Build.MANUFACTURER + "(" + Build.MODEL + ")";
    }

    public static String k(Context context) {
        try {
            if (Settings.Secure.getInt(context.getContentResolver(), "accessibility_enabled", 0) != 1) {
                return bh.e;
            }
            String string = Settings.Secure.getString(context.getContentResolver(), "enabled_accessibility_services");
            return TextUtils.isEmpty(string) ? bh.c : string;
        } catch (Throwable unused) {
            return bh.d;
        }
    }

    private static String l() {
        return "ANDROID_PHONE";
    }

    public static String l(Context context) {
        StringBuilder sb;
        List<AccessibilityServiceInfo> installedAccessibilityServiceList;
        AccessibilityManager accessibilityManager = (AccessibilityManager) context.getSystemService("accessibility");
        if (accessibilityManager == null) {
            return null;
        }
        try {
            installedAccessibilityServiceList = accessibilityManager.getInstalledAccessibilityServiceList();
        } catch (Exception unused) {
        }
        if (installedAccessibilityServiceList == null || installedAccessibilityServiceList.size() <= 0) {
            sb = null;
        } else {
            sb = new StringBuilder();
            try {
                Iterator<AccessibilityServiceInfo> it = installedAccessibilityServiceList.iterator();
                while (it.hasNext()) {
                    String strA = a(it.next());
                    if (sb.indexOf(strA) == -1) {
                        sb.append(strA);
                        sb.append("|");
                    }
                }
            } catch (Exception unused2) {
            }
        }
        if (sb == null) {
            return null;
        }
        if (sb.length() > 0) {
            sb.deleteCharAt(sb.length() - 1);
        }
        return sb.toString();
    }

    public static String m(Context context) {
        StringBuilder sb;
        List<AccessibilityServiceInfo> enabledAccessibilityServiceList;
        AccessibilityManager accessibilityManager = (AccessibilityManager) context.getSystemService("accessibility");
        StringBuilder sb2 = null;
        if (accessibilityManager == null) {
            return null;
        }
        try {
            if (!accessibilityManager.isEnabled() || (enabledAccessibilityServiceList = accessibilityManager.getEnabledAccessibilityServiceList(-1)) == null || enabledAccessibilityServiceList.size() <= 0) {
                sb = null;
            } else {
                sb = new StringBuilder();
                try {
                    Iterator<AccessibilityServiceInfo> it = enabledAccessibilityServiceList.iterator();
                    while (it.hasNext()) {
                        String strA = a(it.next());
                        if (sb.indexOf(strA) == -1) {
                            sb.append(strA);
                            sb.append("|");
                        }
                    }
                } catch (Exception unused) {
                    sb2 = sb;
                    sb = sb2;
                }
            }
        } catch (Exception unused2) {
        }
        if (sb == null) {
            return null;
        }
        if (sb.length() > 0 && sb.charAt(sb.length() - 1) == '|') {
            sb.deleteCharAt(sb.length() - 1);
        }
        return sb.toString();
    }

    public static String n(Context context) {
        return bh.d;
    }

    public static String o(Context context) {
        return bh.c;
    }

    public static String p(Context context) {
        return bh.f2709a;
    }

    public static String q(Context context) {
        try {
            return context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionName;
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String r(Context context) {
        try {
            return (String) context.getPackageManager().getPackageInfo(context.getPackageName(), 0).applicationInfo.loadLabel(context.getPackageManager());
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String s(Context context) {
        try {
            return context.getPackageName();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String t(Context context) {
        try {
            return context.getPackageManager().getPackageInfo(context.getPackageName(), 0).applicationInfo.name;
        } catch (Throwable unused) {
            return "";
        }
    }

    public static int u(Context context) {
        try {
            String strC = c(com.kwad.sdk.f.b.FA().Fu());
            if (!TextUtils.isEmpty(strC) && !strC.startsWith("RISK")) {
                return Integer.parseInt(strC);
            }
            return -1;
        } catch (Throwable unused) {
            return -2;
        }
    }

    public static int v(Context context) {
        try {
            String strC = c(com.kwad.sdk.f.b.FA().Fv());
            if (!TextUtils.isEmpty(strC) && !strC.startsWith("RISK")) {
                return Integer.parseInt(strC);
            }
            return -1;
        } catch (Throwable unused) {
            return -2;
        }
    }

    public static String w(Context context) {
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(context.getPackageName(), 0);
            StringBuilder sb = new StringBuilder();
            sb.append(packageInfo.firstInstallTime);
            return sb.toString();
        } catch (Exception unused) {
            return "";
        }
    }

    public static String x(Context context) {
        return bh.c;
    }

    public static String y(Context context) {
        try {
            return c(com.kwad.sdk.f.b.FA().getOaid());
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String z(Context context) {
        StringBuilder sb = new StringBuilder();
        try {
            PackageManager packageManager = context.getPackageManager();
            String[] strArr = {"android.hardware.camera", "android.hardware.camera.autofocus", "android.hardware.camera.flash", "android.hardware.location", "android.hardware.location.gps", "android.hardware.location.network", "android.hardware.microphone", "android.hardware.sensor.compass", "android.hardware.sensor.accelerometer", "android.hardware.sensor.light", "android.hardware.sensor.proximity", "android.hardware.telephony", "android.hardware.telephony.cdma", "android.hardware.telephony.gsm", "android.hardware.touchscreen", "android.hardware.touchscreen.multitouch", "android.hardware.touchscreen.multitouch.distinct", "android.hardware.camera.front", "android.hardware.wifi", "android.hardware.bluetooth", "android.hardware.nfc", "android.hardware.fingerprint", "android.hardware.biometrics.face", "android.hardware.screen.portrait", "android.hardware.screen.landscape", "android.hardware.faketouch", "android.hardware.audio.output"};
            for (int i = 0; i < 27; i++) {
                sb.append(packageManager.hasSystemFeature(strArr[i]) ? "1" : "0");
            }
        } catch (Exception unused) {
        }
        return sb.toString();
    }
}
