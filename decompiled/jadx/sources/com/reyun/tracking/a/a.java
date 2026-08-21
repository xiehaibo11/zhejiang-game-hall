package com.reyun.tracking.a;

import android.app.ActivityManager;
import android.content.Context;
import android.content.pm.PackageManager;
import android.hardware.Sensor;
import android.hardware.SensorManager;
import android.media.AudioManager;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.provider.Settings;
import android.support.v4.os.EnvironmentCompat;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.WindowManager;
import com.bianfeng.libuniverse.Device;
import com.bykv.vk.openvk.live.TTLiveConstants;
import com.reyun.tracking.sdk.Tracking;
import java.net.Inet6Address;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.TimeZone;
import java.util.regex.Pattern;
import kotlin.UByte;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static String f4696a;
    public static String b;
    private static String c;
    private static String d;
    private static String e;
    private static String f;
    private static String g;
    private static String h;
    private static float i;
    private static JSONArray j;
    private static long k;
    private static Runnable l;
    private static SensorManager m;
    private static d n;

    public static String a() {
        StringBuilder sb;
        int rawOffset = (TimeZone.getTimeZone("GMT+8:00").getRawOffset() / 1000) / 3600;
        if (rawOffset > 0) {
            sb = new StringBuilder();
            sb.append("+");
            sb.append(rawOffset);
        } else {
            sb = new StringBuilder();
            sb.append(rawOffset);
            sb.append("");
        }
        return sb.toString();
    }

    public static String a(long j2) {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
        simpleDateFormat.setTimeZone(TimeZone.getTimeZone("GMT+8"));
        return simpleDateFormat.format(Long.valueOf(j2));
    }

    public static String a(Context context) {
        return context == null ? EnvironmentCompat.MEDIA_UNKNOWN : context.getPackageName();
    }

    public static String a(Context context, int i2) {
        List<ActivityManager.RunningAppProcessInfo> runningAppProcesses;
        ActivityManager activityManager = (ActivityManager) context.getSystemService("activity");
        if (activityManager == null || (runningAppProcesses = activityManager.getRunningAppProcesses()) == null) {
            return null;
        }
        for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : runningAppProcesses) {
            if (runningAppProcessInfo != null && runningAppProcessInfo.pid == i2) {
                return runningAppProcessInfo.processName;
            }
        }
        return null;
    }

    public static String a(String str, String str2, String str3) {
        boolean zB = b(str);
        String str4 = str;
        if (zB) {
            str4 = str2;
        }
        if (str2.equals(str4)) {
            b("Tracking", str3);
        }
        return str4;
    }

    public static String a(Map map) {
        if (map == null) {
            return null;
        }
        for (String str : map.keySet()) {
            if (str == null) {
                return "null";
            }
            if (!str.matches("^[A-Za-z_][a-zA-Z0-9_]*$")) {
                return str;
            }
        }
        return null;
    }

    public static void a(String str, String str2) {
        if (i.f4704a) {
            if (str == null) {
                str = "null tag";
            }
            if (str2 == null) {
                str2 = "null log";
            }
            Log.d(str, str2);
        }
    }

    public static void a(Map map, JSONObject jSONObject) {
        if (map != null) {
            try {
                JSONObject jSONObject2 = jSONObject.getJSONObject(TTLiveConstants.CONTEXT_KEY);
                if (jSONObject2 != null) {
                    for (Map.Entry entry : map.entrySet()) {
                        String str = (String) entry.getKey();
                        Object value = entry.getValue();
                        if (str != null && value != null) {
                            jSONObject2.put(str.toString(), value.toString());
                        }
                    }
                }
            } catch (Exception unused) {
            }
        }
    }

    public static boolean a(Context context, String str) {
        PackageManager packageManager;
        if (context == null || (packageManager = context.getPackageManager()) == null) {
            return false;
        }
        try {
            return packageManager.checkPermission(str, context.getPackageName()) == 0;
        } catch (Exception unused) {
            return false;
        }
    }

    public static boolean a(String str) {
        return !b(str);
    }

    public static String b() {
        return b;
    }

    public static String b(Context context) {
        String str = f4696a;
        if (str != null) {
            return str;
        }
        f4696a = com.reyun.tracking.utils.f.a(context, "tracking_device_id_cache", "device_id");
        b = com.reyun.tracking.utils.f.a(context, "tracking_device_id_cache", "device_id_type");
        if ("_default_".equals(f4696a)) {
            f fVarR = r(context);
            f4696a = fVarR.f4701a;
            b = fVarR.b;
            com.reyun.tracking.utils.f.b(context, "tracking_device_id_cache", "device_id", f4696a);
            com.reyun.tracking.utils.f.b(context, "tracking_device_id_cache", "device_id_type", b);
        }
        return f4696a;
    }

    public static void b(String str, String str2) {
        if (i.f4704a) {
            if (str == null) {
                str = "null tag";
            }
            if (str2 == null) {
                str2 = "null log";
            }
            Log.w(str, str2);
        }
    }

    public static void b(Map map) {
        Object obj;
        if (map == null) {
            return;
        }
        Iterator it = map.keySet().iterator();
        while (it.hasNext()) {
            String str = (String) it.next();
            if (str == null || !str.matches("^[_A-Za-z][a-zA-Z0-9_]*$") || (obj = map.get(str)) == null || String.valueOf(obj).length() > 64) {
                it.remove();
            }
        }
    }

    private static boolean b(Context context, String str) {
        return context.getPackageManager().checkPermission(str, context.getPackageName()) == 0;
    }

    public static boolean b(String str) {
        return str == null || str.trim().length() == 0;
    }

    public static String c() {
        String str;
        String hostAddress;
        String str2 = EnvironmentCompat.MEDIA_UNKNOWN;
        String str3 = h;
        if (str3 != null) {
            return str3;
        }
        try {
            Enumeration<NetworkInterface> networkInterfaces = NetworkInterface.getNetworkInterfaces();
            str = EnvironmentCompat.MEDIA_UNKNOWN;
            while (networkInterfaces.hasMoreElements()) {
                try {
                    Enumeration<InetAddress> inetAddresses = networkInterfaces.nextElement().getInetAddresses();
                    while (true) {
                        if (!inetAddresses.hasMoreElements()) {
                            break;
                        }
                        InetAddress inetAddressNextElement = inetAddresses.nextElement();
                        if (inetAddressNextElement != null && (inetAddressNextElement instanceof Inet6Address) && (hostAddress = inetAddressNextElement.getHostAddress()) != null && !hostAddress.toLowerCase().startsWith("fe80") && !hostAddress.toLowerCase().startsWith("::1") && !hostAddress.toLowerCase().startsWith("::") && !hostAddress.toLowerCase().startsWith("fec0")) {
                            str = hostAddress;
                            break;
                        }
                    }
                    if (str != null && !str.equals(EnvironmentCompat.MEDIA_UNKNOWN)) {
                        break;
                    }
                } catch (Exception unused) {
                    str2 = str;
                    str = str2;
                }
            }
        } catch (Exception unused2) {
        }
        h = str;
        return str;
    }

    public static String c(Context context) {
        String string;
        String str = e;
        if (str != null) {
            return str;
        }
        try {
            string = Settings.Secure.getString(context.getContentResolver(), "android_id");
        } catch (Exception e2) {
            e2.printStackTrace();
            string = EnvironmentCompat.MEDIA_UNKNOWN;
        }
        if (string == null || string.length() == 0) {
            e = EnvironmentCompat.MEDIA_UNKNOWN;
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
        e = string;
        return string;
    }

    public static String c(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        try {
            String str2 = "";
            for (byte b2 : MessageDigest.getInstance("MD5").digest(str.getBytes())) {
                String hexString = Integer.toHexString(b2 & UByte.MAX_VALUE);
                if (hexString.length() == 1) {
                    hexString = "0" + hexString;
                }
                str2 = str2 + hexString;
            }
            return str2;
        } catch (NoSuchAlgorithmException e2) {
            e2.printStackTrace();
            return "";
        }
    }

    public static void c(String str, String str2) {
        if (i.f4704a) {
            if (str == null) {
                str = "null tag";
            }
            if (str2 == null) {
                str2 = "null log";
            }
            Log.e(str, str2);
        }
    }

    public static String d(Context context) {
        if (!b(context, "android.permission.READ_PHONE_STATE")) {
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
        synchronized (a.class) {
            if (c != null) {
                return c;
            }
            try {
                String strA = com.reyun.tracking.utils.f.a(context, "tracking_device_id_cache", "imei2");
                if (strA == null || "_default_".equals(strA)) {
                    TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
                    c = Build.VERSION.SDK_INT >= 29 ? EnvironmentCompat.MEDIA_UNKNOWN : Build.VERSION.SDK_INT >= 26 ? telephonyManager.getImei(1) : telephonyManager.getClass().getDeclaredMethod("getImei", Integer.TYPE).invoke(telephonyManager, 1).toString();
                    if (c == null) {
                        c = EnvironmentCompat.MEDIA_UNKNOWN;
                    }
                    com.reyun.tracking.utils.f.b(context, "tracking_device_id_cache", "imei2", c);
                    return c;
                }
                d("Tracking", "%%% imei2=" + c);
                c = strA;
                return strA;
            } catch (Exception unused) {
                c = EnvironmentCompat.MEDIA_UNKNOWN;
                return EnvironmentCompat.MEDIA_UNKNOWN;
            }
        }
    }

    public static void d() {
        if (l == null) {
            return;
        }
        HashMap map = new HashMap();
        map.put("electricityStartTime", new SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.getDefault()).format(new Date(k)));
        map.put("electricityEndTime", new SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.getDefault()).format(new Date()));
        map.put("electricityData", j);
        Tracking.setEvent("electricityDataEvent", map);
        l = null;
    }

    public static void d(String str, String str2) {
        if (i.f4704a) {
            Log.i(str, str2);
        }
    }

    public static String e(Context context) {
        if (!b(context, "android.permission.READ_PHONE_STATE")) {
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
        String str = d;
        if (str != null) {
            return str;
        }
        try {
            String strA = com.reyun.tracking.utils.f.a(context, "tracking_device_id_cache", "meid");
            if (strA != null && !"_default_".equals(strA)) {
                d = strA;
                return strA;
            }
            TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
            d = Build.VERSION.SDK_INT >= 26 ? telephonyManager.getMeid(0) : Build.VERSION.SDK_INT >= 23 ? telephonyManager.getDeviceId(0) : telephonyManager.getDeviceId();
            com.reyun.tracking.utils.f.b(context, "tracking_device_id_cache", "meid", d);
            return d;
        } catch (Exception unused) {
            d = EnvironmentCompat.MEDIA_UNKNOWN;
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
    }

    public static void e() {
        d dVar;
        if (m != null && (dVar = n) != null) {
            dVar.a();
            m.unregisterListener(n);
        }
        n = null;
    }

    public static f f(Context context) {
        String strC;
        String strC2;
        f fVar = new f();
        try {
            fVar.f4701a = g(context);
            fVar.b = "imei";
            if (!b(fVar.f4701a) && !EnvironmentCompat.MEDIA_UNKNOWN.equals(fVar.f4701a)) {
                return fVar;
            }
            if (h.f4703a == null || h.f4703a.equals(EnvironmentCompat.MEDIA_UNKNOWN) || h.f4703a.length() <= 0) {
                fVar.b = "androidid";
                fVar.f4701a = c(context);
                return fVar;
            }
            if (Pattern.matches("^[0]+-[0]+-[0]+-[0]+-[0]+$", h.f4703a) || Pattern.matches("^[0]+$", h.f4703a)) {
                fVar.b = "androidid";
                strC2 = c(context);
            } else {
                fVar.b = "oaid";
                strC2 = h.f4703a;
            }
            fVar.f4701a = strC2;
            return fVar;
        } catch (Exception unused) {
            if (h.f4703a == null || h.f4703a.equals(EnvironmentCompat.MEDIA_UNKNOWN) || h.f4703a.length() <= 0) {
                fVar.b = "androidid";
                fVar.f4701a = c(context);
                return fVar;
            }
            if (Pattern.matches("^[0]+-[0]+-[0]+-[0]+-[0]+$", h.f4703a)) {
                fVar.b = "androidid";
                strC = c(context);
            } else {
                fVar.b = "oaid";
                strC = h.f4703a;
            }
            fVar.f4701a = strC;
            return fVar;
        }
    }

    public static String g(Context context) {
        if (!b(context, "android.permission.READ_PHONE_STATE")) {
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
        String str = f;
        if (str != null) {
            return str;
        }
        try {
            TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
            if (Build.VERSION.SDK_INT >= 29) {
                f = EnvironmentCompat.MEDIA_UNKNOWN;
                return EnvironmentCompat.MEDIA_UNKNOWN;
            }
            if (Build.VERSION.SDK_INT >= 26) {
                String imei = telephonyManager.getImei(0);
                f = imei;
                return imei;
            }
            if (Build.VERSION.SDK_INT >= 23) {
                String deviceId = telephonyManager.getDeviceId(0);
                f = deviceId;
                return deviceId;
            }
            String deviceId2 = telephonyManager.getDeviceId();
            f = deviceId2;
            return deviceId2;
        } catch (Throwable unused) {
            f = EnvironmentCompat.MEDIA_UNKNOWN;
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
    }

    public static String h(Context context) {
        if (!b(context, "android.permission.READ_PHONE_STATE")) {
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
        String str = g;
        if (str != null) {
            return str;
        }
        try {
            String simOperatorName = ((TelephonyManager) context.getSystemService("phone")).getSimOperatorName();
            if (!TextUtils.isEmpty(simOperatorName)) {
                g = simOperatorName;
                return simOperatorName;
            }
            String str2 = "";
            String subscriberId = ((TelephonyManager) context.getSystemService("phone")).getSubscriberId();
            if (subscriberId == null) {
                g = EnvironmentCompat.MEDIA_UNKNOWN;
                return EnvironmentCompat.MEDIA_UNKNOWN;
            }
            if (subscriberId.startsWith("46000") || subscriberId.startsWith("46002") || subscriberId.startsWith("46007")) {
                str2 = "中国移动";
            } else if (subscriberId.startsWith("46001") || subscriberId.startsWith("46006")) {
                str2 = "中国联通";
            } else if (subscriberId.startsWith("46003")) {
                str2 = "中国电信";
            }
            g = str2;
            return str2;
        } catch (Exception e2) {
            d("Tracking", "get operator failed! cause " + e2.getMessage());
            g = EnvironmentCompat.MEDIA_UNKNOWN;
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
    }

    public static String i(Context context) {
        try {
            WindowManager windowManager = (WindowManager) context.getSystemService("window");
            DisplayMetrics displayMetrics = new DisplayMetrics();
            windowManager.getDefaultDisplay().getMetrics(displayMetrics);
            return displayMetrics.widthPixels + "*" + displayMetrics.heightPixels;
        } catch (Exception unused) {
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
    }

    public static String j(Context context) {
        if (!a(context, com.kuaishou.weapon.p0.g.f2775a)) {
            if (i.f4704a) {
                Log.w(" lost  permission", "lost----> android.permission.INTERNET");
            }
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
        ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
        NetworkInfo networkInfo = connectivityManager.getNetworkInfo(1);
        NetworkInfo networkInfo2 = connectivityManager.getNetworkInfo(0);
        return (networkInfo != null && networkInfo.isAvailable() && networkInfo.isConnected()) ? "WIFI" : (networkInfo2 != null && networkInfo2.isAvailable() && networkInfo2.isConnected()) ? s(context) : EnvironmentCompat.MEDIA_UNKNOWN;
    }

    public static String k(Context context) {
        Exception e2;
        String str;
        try {
            str = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionName;
        } catch (Exception e3) {
            e2 = e3;
            str = EnvironmentCompat.MEDIA_UNKNOWN;
        }
        if (str != null) {
            try {
            } catch (Exception e4) {
                e2 = e4;
                e2.printStackTrace();
            }
            if (str.length() > 0) {
                return str;
            }
        }
        return EnvironmentCompat.MEDIA_UNKNOWN;
    }

    public static boolean l(Context context) {
        return context != null && (context.getResources().getConfiguration().screenLayout & 15) >= 3;
    }

    public static String m(Context context) {
        try {
            if (a(context, com.kuaishou.weapon.p0.g.d)) {
                WifiInfo connectionInfo = ((WifiManager) context.getSystemService(Device.NETWORN_WIFI)).getConnectionInfo();
                return connectionInfo == null ? EnvironmentCompat.MEDIA_UNKNOWN : connectionInfo.getMacAddress();
            }
            Log.w("Tracking", "!!!MISSING permission [" + com.kuaishou.weapon.p0.g.d + "]");
            return EnvironmentCompat.MEDIA_UNKNOWN;
        } catch (Throwable unused) {
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
    }

    public static int n(Context context) {
        try {
            return Settings.System.getInt(context.getContentResolver(), "screen_brightness");
        } catch (Exception unused) {
            return 255;
        }
    }

    public static int o(Context context) {
        try {
            return ((AudioManager) context.getSystemService("audio")).getStreamVolume(1);
        } catch (Exception unused) {
            return 0;
        }
    }

    public static void p(Context context) {
        if (l != null) {
            return;
        }
        i = 0.0f;
        j = new JSONArray();
        k = System.currentTimeMillis();
        com.reyun.tracking.sdk.a aVarA = com.reyun.tracking.sdk.a.a();
        b bVar = new b(context, aVarA);
        l = bVar;
        aVarA.a(bVar);
    }

    public static void q(Context context) {
        Sensor defaultSensor;
        if (n != null) {
            return;
        }
        n = new d(null);
        SensorManager sensorManager = (SensorManager) context.getSystemService("sensor");
        m = sensorManager;
        if (sensorManager == null || (defaultSensor = sensorManager.getDefaultSensor(4)) == null) {
            return;
        }
        m.registerListener(n, defaultSensor, 2);
    }

    private static f r(Context context) {
        f fVar = new f();
        try {
            fVar.f4701a = g(context);
            fVar.b = "imei";
            if (!b(fVar.f4701a) && !EnvironmentCompat.MEDIA_UNKNOWN.equals(fVar.f4701a)) {
                return fVar;
            }
            if (h.f4703a == null || h.f4703a.equals(EnvironmentCompat.MEDIA_UNKNOWN) || h.f4703a.length() <= 0) {
                fVar.b = "androidid";
                fVar.f4701a = c(context);
                return fVar;
            }
            if (Pattern.matches("^[0]+-[0]+-[0]+-[0]+-[0]+$", h.f4703a) || Pattern.matches("^[0]+$", h.f4703a)) {
                fVar.b = "androidid";
                fVar.f4701a = c(context);
            } else {
                fVar.b = "oaid";
                fVar.f4701a = h.f4703a;
                com.reyun.tracking.utils.f.b(context, "tracking_device_id_cache", "oaid", fVar.f4701a);
            }
            return fVar;
        } catch (Exception unused) {
            if (h.f4703a == null || h.f4703a.equals(EnvironmentCompat.MEDIA_UNKNOWN) || h.f4703a.length() <= 0) {
                fVar.b = "androidid";
                fVar.f4701a = c(context);
                return fVar;
            }
            if (Pattern.matches("^[0]+-[0]+-[0]+-[0]+-[0]+$", h.f4703a)) {
                fVar.b = "androidid";
                fVar.f4701a = c(context);
            } else {
                fVar.b = "oaid";
                fVar.f4701a = h.f4703a;
                com.reyun.tracking.utils.f.b(context, "tracking_device_id_cache", "oaid", fVar.f4701a);
            }
            return fVar;
        }
    }

    private static String s(Context context) {
        if (!b(context, "android.permission.READ_PHONE_STATE")) {
            return EnvironmentCompat.MEDIA_UNKNOWN;
        }
        int networkType = ((TelephonyManager) context.getSystemService("phone")).getNetworkType();
        if (networkType != 4 && networkType != 2) {
            if (networkType != 5 && networkType != 6) {
                if (networkType != 1) {
                    if (networkType != 8) {
                        if (networkType == 10) {
                            return "HSPA";
                        }
                        if (networkType == 9) {
                            return "HSUPA";
                        }
                        if (networkType != 3) {
                            return networkType == 13 ? Device.NETWORN_4G : networkType == 20 ? "5G" : networkType == 0 ? "UNKOWN" : EnvironmentCompat.MEDIA_UNKNOWN;
                        }
                    }
                }
            }
            return Device.NETWORN_3G;
        }
        return Device.NETWORN_2G;
    }
}
