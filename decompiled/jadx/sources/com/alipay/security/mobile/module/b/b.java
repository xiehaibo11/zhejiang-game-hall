package com.alipay.security.mobile.module.b;

import android.app.KeyguardManager;
import android.bluetooth.BluetoothAdapter;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.hardware.Sensor;
import android.hardware.SensorManager;
import android.media.AudioManager;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.os.Environment;
import android.os.StatFs;
import android.os.SystemClock;
import android.provider.Settings;
import android.support.v4.app.NotificationCompat;
import android.support.v4.os.EnvironmentCompat;
import android.telephony.TelephonyManager;
import android.util.DisplayMetrics;
import com.bianfeng.libuniverse.Device;
import com.kuaishou.weapon.p0.g;
import com.sigmob.sdk.archives.tar.e;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileReader;
import java.io.InputStreamReader;
import java.io.LineNumberReader;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.net.Inet4Address;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Enumeration;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.TimeZone;
import kotlin.UByte;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static b f1352a = new b();

    private b() {
    }

    private static String A() {
        try {
            Enumeration<NetworkInterface> networkInterfaces = NetworkInterface.getNetworkInterfaces();
            while (networkInterfaces.hasMoreElements()) {
                Enumeration<InetAddress> inetAddresses = networkInterfaces.nextElement().getInetAddresses();
                while (inetAddresses.hasMoreElements()) {
                    InetAddress inetAddressNextElement = inetAddresses.nextElement();
                    if (!inetAddressNextElement.isLoopbackAddress() && (inetAddressNextElement instanceof Inet4Address)) {
                        return inetAddressNextElement.getHostAddress().toString();
                    }
                }
            }
            return "";
        } catch (Throwable unused) {
            return "";
        }
    }

    public static b a() {
        return f1352a;
    }

    private static String a(BluetoothAdapter bluetoothAdapter) {
        try {
            Field declaredField = BluetoothAdapter.class.getDeclaredField("mService");
            declaredField.setAccessible(true);
            Object obj = declaredField.get(bluetoothAdapter);
            if (obj == null) {
                return null;
            }
            Method declaredMethod = obj.getClass().getDeclaredMethod("getAddress", new Class[0]);
            declaredMethod.setAccessible(true);
            Object objInvoke = declaredMethod.invoke(obj, new Object[0]);
            if (objInvoke != null && (objInvoke instanceof String)) {
                return (String) objInvoke;
            }
        } catch (Throwable unused) {
        }
        return null;
    }

    public static String a(Context context) {
        if (a(context, "android.permission.READ_PHONE_STATE")) {
            return "";
        }
        String deviceId = null;
        if (context != null) {
            try {
                TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
                if (telephonyManager != null) {
                    deviceId = telephonyManager.getDeviceId();
                }
            } catch (Throwable unused) {
            }
        }
        return deviceId == null ? "" : deviceId;
    }

    private static boolean a(Context context, String str) {
        return !(context.getPackageManager().checkPermission(str, context.getPackageName()) == 0);
    }

    public static String b() {
        long availableBlocks;
        try {
            StatFs statFs = new StatFs(Environment.getDataDirectory().getPath());
            availableBlocks = ((long) statFs.getAvailableBlocks()) * ((long) statFs.getBlockSize());
        } catch (Throwable unused) {
            availableBlocks = 0;
        }
        return String.valueOf(availableBlocks);
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x001c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String b(android.content.Context r2) {
        /*
            java.lang.String r0 = "android.permission.READ_PHONE_STATE"
            boolean r0 = a(r2, r0)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lb
            return r1
        Lb:
            if (r2 == 0) goto L1c
            java.lang.String r0 = "phone"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Throwable -> L1c
            android.telephony.TelephonyManager r2 = (android.telephony.TelephonyManager) r2     // Catch: java.lang.Throwable -> L1c
            if (r2 == 0) goto L1c
            java.lang.String r2 = r2.getSubscriberId()     // Catch: java.lang.Throwable -> L1c
            goto L1d
        L1c:
            r2 = r1
        L1d:
            if (r2 != 0) goto L20
            r2 = r1
        L20:
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.alipay.security.mobile.module.b.b.b(android.content.Context):java.lang.String");
    }

    public static String c() {
        long blockSize = 0;
        try {
            if ("mounted".equals(Environment.getExternalStorageState())) {
                StatFs statFs = new StatFs(com.alipay.security.mobile.module.a.a.a().getPath());
                blockSize = ((long) statFs.getBlockSize()) * ((long) statFs.getAvailableBlocks());
            }
        } catch (Throwable unused) {
        }
        return String.valueOf(blockSize);
    }

    public static String c(Context context) {
        int i = 0;
        try {
            i = Settings.System.getInt(context.getContentResolver(), "airplane_mode_on", 0);
        } catch (Throwable unused) {
        }
        return i == 1 ? "1" : "0";
    }

    public static String d() {
        return "";
    }

    public static String d(Context context) {
        JSONObject jSONObject = new JSONObject();
        try {
            AudioManager audioManager = (AudioManager) context.getSystemService("audio");
            int i = audioManager.getRingerMode() == 0 ? 1 : 0;
            int streamVolume = audioManager.getStreamVolume(0);
            int streamVolume2 = audioManager.getStreamVolume(1);
            int streamVolume3 = audioManager.getStreamVolume(2);
            int streamVolume4 = audioManager.getStreamVolume(3);
            int streamVolume5 = audioManager.getStreamVolume(4);
            jSONObject.put("ringermode", String.valueOf(i));
            jSONObject.put("call", String.valueOf(streamVolume));
            jSONObject.put("system", String.valueOf(streamVolume2));
            jSONObject.put("ring", String.valueOf(streamVolume3));
            jSONObject.put("music", String.valueOf(streamVolume4));
            jSONObject.put(NotificationCompat.CATEGORY_ALARM, String.valueOf(streamVolume5));
        } catch (Throwable unused) {
        }
        return jSONObject.toString();
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x002d, code lost:
    
        r0 = r6.substring(r6.indexOf(com.xiaomi.mipush.sdk.Constants.COLON_SEPARATOR) + 1, r6.length()).trim();
     */
    /* JADX WARN: Removed duplicated region for block: B:36:0x006b A[ORIG_RETURN, RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:59:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String e() {
        /*
            java.lang.String r0 = "0000000000000000"
            r1 = 0
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L56
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L56
            java.lang.String r4 = "/proc/cpuinfo"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L56
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L56
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L54
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L54
            java.io.LineNumberReader r4 = new java.io.LineNumberReader     // Catch: java.lang.Throwable -> L52
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L52
            r1 = 1
            r5 = 1
        L1b:
            r6 = 100
            if (r5 >= r6) goto L46
            java.lang.String r6 = r4.readLine()     // Catch: java.lang.Throwable -> L44
            if (r6 == 0) goto L46
            java.lang.String r7 = "Serial"
            int r7 = r6.indexOf(r7)     // Catch: java.lang.Throwable -> L44
            if (r7 < 0) goto L41
            java.lang.String r5 = ":"
            int r5 = r6.indexOf(r5)     // Catch: java.lang.Throwable -> L44
            int r5 = r5 + r1
            int r1 = r6.length()     // Catch: java.lang.Throwable -> L44
            java.lang.String r1 = r6.substring(r5, r1)     // Catch: java.lang.Throwable -> L44
            java.lang.String r0 = r1.trim()     // Catch: java.lang.Throwable -> L44
            goto L46
        L41:
            int r5 = r5 + 1
            goto L1b
        L44:
            r1 = r4
            goto L58
        L46:
            r4.close()     // Catch: java.lang.Throwable -> L49
        L49:
            r3.close()     // Catch: java.lang.Throwable -> L4c
        L4c:
            r2.close()     // Catch: java.lang.Throwable -> L50
            goto L69
        L50:
            goto L69
        L52:
            goto L58
        L54:
            r3 = r1
            goto L58
        L56:
            r2 = r1
            r3 = r2
        L58:
            if (r1 == 0) goto L5f
            r1.close()     // Catch: java.lang.Throwable -> L5e
            goto L5f
        L5e:
        L5f:
            if (r3 == 0) goto L66
            r3.close()     // Catch: java.lang.Throwable -> L65
            goto L66
        L65:
        L66:
            if (r2 == 0) goto L69
            goto L4c
        L69:
            if (r0 != 0) goto L6d
            java.lang.String r0 = ""
        L6d:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.alipay.security.mobile.module.b.b.e():java.lang.String");
    }

    public static String e(Context context) {
        String networkOperatorName = null;
        if (context != null) {
            try {
                TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
                if (telephonyManager != null) {
                    networkOperatorName = telephonyManager.getNetworkOperatorName();
                }
            } catch (Throwable unused) {
            }
        }
        return (networkOperatorName == null || "null".equals(networkOperatorName)) ? "" : networkOperatorName;
    }

    public static String f(Context context) {
        List<Sensor> sensorList;
        String strE = null;
        if (context != null) {
            try {
                SensorManager sensorManager = (SensorManager) context.getSystemService("sensor");
                if (sensorManager != null && (sensorList = sensorManager.getSensorList(-1)) != null && sensorList.size() > 0) {
                    StringBuilder sb = new StringBuilder();
                    for (Sensor sensor : sensorList) {
                        sb.append(sensor.getName());
                        sb.append(sensor.getVersion());
                        sb.append(sensor.getVendor());
                    }
                    strE = com.alipay.security.mobile.module.a.a.e(sb.toString());
                }
            } catch (Throwable unused) {
            }
        }
        return strE == null ? "" : strE;
    }

    public static String g() {
        String strX = x();
        return !com.alipay.security.mobile.module.a.a.a(strX) ? strX : y();
    }

    public static String g(Context context) {
        List<Sensor> sensorList;
        JSONArray jSONArray = new JSONArray();
        if (context != null) {
            try {
                SensorManager sensorManager = (SensorManager) context.getSystemService("sensor");
                if (sensorManager != null && (sensorList = sensorManager.getSensorList(-1)) != null && sensorList.size() > 0) {
                    for (Sensor sensor : sensorList) {
                        if (sensor != null) {
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put("name", sensor.getName());
                            jSONObject.put("version", sensor.getVersion());
                            jSONObject.put("vendor", sensor.getVendor());
                            jSONArray.put(jSONObject);
                        }
                    }
                }
            } catch (Throwable unused) {
            }
        }
        return jSONArray.toString();
    }

    public static String h() {
        FileReader fileReader;
        BufferedReader bufferedReader;
        BufferedReader bufferedReader2 = null;
        try {
            try {
                fileReader = new FileReader("/proc/cpuinfo");
                try {
                    bufferedReader = new BufferedReader(fileReader);
                } catch (Throwable unused) {
                }
            } catch (Throwable unused2) {
                fileReader = null;
            }
            try {
                String[] strArrSplit = bufferedReader.readLine().split(":\\s+", 2);
                if (strArrSplit != null && strArrSplit.length > 1) {
                    String str = strArrSplit[1];
                    try {
                        fileReader.close();
                    } catch (Throwable unused3) {
                    }
                    try {
                        bufferedReader.close();
                    } catch (Throwable unused4) {
                    }
                    return str;
                }
                try {
                    fileReader.close();
                } catch (Throwable unused5) {
                }
                bufferedReader.close();
            } catch (Throwable unused6) {
                bufferedReader2 = bufferedReader;
                if (fileReader != null) {
                    try {
                        fileReader.close();
                    } catch (Throwable unused7) {
                    }
                }
                if (bufferedReader2 == null) {
                    return "";
                }
                bufferedReader2.close();
            }
            return "";
        } catch (Throwable unused8) {
            return "";
        }
    }

    public static String h(Context context) {
        try {
            DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
            return Integer.toString(displayMetrics.widthPixels) + "*" + Integer.toString(displayMetrics.heightPixels);
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String i() {
        FileReader fileReader;
        BufferedReader bufferedReader = null;
        try {
            try {
                fileReader = new FileReader("/proc/meminfo");
                try {
                    BufferedReader bufferedReader2 = new BufferedReader(fileReader, 8192);
                    try {
                        j = bufferedReader2.readLine() != null ? Integer.parseInt(r1.split("\\s+")[1]) : 0L;
                        try {
                            fileReader.close();
                        } catch (Throwable unused) {
                        }
                        bufferedReader2.close();
                    } catch (Throwable unused2) {
                        bufferedReader = bufferedReader2;
                        if (fileReader != null) {
                            try {
                                fileReader.close();
                            } catch (Throwable unused3) {
                            }
                        }
                        if (bufferedReader != null) {
                            bufferedReader.close();
                        }
                        return String.valueOf(j);
                    }
                } catch (Throwable unused4) {
                }
            } catch (Throwable unused5) {
                fileReader = null;
            }
        } catch (Throwable unused6) {
        }
        return String.valueOf(j);
    }

    public static String i(Context context) {
        try {
            DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
            StringBuilder sb = new StringBuilder();
            sb.append(displayMetrics.widthPixels);
            return sb.toString();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String j() {
        long blockCount;
        try {
            StatFs statFs = new StatFs(Environment.getDataDirectory().getPath());
            blockCount = ((long) statFs.getBlockCount()) * ((long) statFs.getBlockSize());
        } catch (Throwable unused) {
            blockCount = 0;
        }
        return String.valueOf(blockCount);
    }

    public static String j(Context context) {
        try {
            DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
            StringBuilder sb = new StringBuilder();
            sb.append(displayMetrics.heightPixels);
            return sb.toString();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String k() {
        long blockSize = 0;
        try {
            if ("mounted".equals(Environment.getExternalStorageState())) {
                StatFs statFs = new StatFs(Environment.getExternalStorageDirectory().getPath());
                blockSize = ((long) statFs.getBlockSize()) * ((long) statFs.getBlockCount());
            }
        } catch (Throwable unused) {
        }
        return String.valueOf(blockSize);
    }

    public static String k(Context context) {
        String macAddress = "";
        if (a(context, g.d)) {
            return "";
        }
        try {
            macAddress = ((WifiManager) context.getSystemService(Device.NETWORN_WIFI)).getConnectionInfo().getMacAddress();
            if (macAddress == null || macAddress.length() == 0 || "02:00:00:00:00:00".equals(macAddress)) {
                return w();
            }
        } catch (Throwable unused) {
        }
        return macAddress;
    }

    public static String l() {
        String str;
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            str = (String) cls.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class, String.class).invoke(cls.newInstance(), "gsm.version.baseband", "no message");
        } catch (Throwable unused) {
            str = "";
        }
        return str == null ? "" : str;
    }

    public static String l(Context context) {
        if (a(context, "android.permission.READ_PHONE_STATE")) {
            return "";
        }
        try {
            String simSerialNumber = ((TelephonyManager) context.getSystemService("phone")).getSimSerialNumber();
            if (simSerialNumber != null) {
                if (simSerialNumber == null) {
                    return simSerialNumber;
                }
                try {
                    if (simSerialNumber.length() != 0) {
                        return simSerialNumber;
                    }
                } catch (Throwable unused) {
                    return simSerialNumber;
                }
            }
        } catch (Throwable unused2) {
        }
        return "";
    }

    public static String m() {
        String str;
        try {
            str = Build.SERIAL;
        } catch (Throwable unused) {
            str = "";
        }
        return str == null ? "" : str;
    }

    public static String m(Context context) {
        String string;
        try {
            string = Settings.Secure.getString(context.getContentResolver(), "android_id");
        } catch (Throwable unused) {
            string = "";
        }
        return string == null ? "" : string;
    }

    public static String n() {
        String string;
        try {
            string = Locale.getDefault().toString();
        } catch (Throwable unused) {
            string = "";
        }
        return string == null ? "" : string;
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0022 A[Catch: all -> 0x0031, TRY_LEAVE, TryCatch #0 {all -> 0x0031, blocks: (B:7:0x0011, B:9:0x0017, B:13:0x0022), top: B:19:0x0011 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String n(android.content.Context r3) {
        /*
            java.lang.String r0 = "android.permission.BLUETOOTH"
            boolean r0 = a(r3, r0)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lb
            return r1
        Lb:
            java.lang.String r0 = z()
            if (r0 == 0) goto L22
            int r2 = r0.length()     // Catch: java.lang.Throwable -> L31
            if (r2 == 0) goto L22
            java.lang.String r2 = "02:00:00:00:00:00"
            boolean r2 = r2.equals(r0)     // Catch: java.lang.Throwable -> L31
            if (r2 == 0) goto L20
            goto L22
        L20:
            r3 = r0
            goto L2c
        L22:
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "bluetooth_address"
            java.lang.String r3 = android.provider.Settings.Secure.getString(r3, r2)     // Catch: java.lang.Throwable -> L31
        L2c:
            if (r3 != 0) goto L30
            r0 = r1
            goto L31
        L30:
            r0 = r3
        L31:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.alipay.security.mobile.module.b.b.n(android.content.Context):java.lang.String");
    }

    public static String o() {
        String displayName;
        try {
            displayName = TimeZone.getDefault().getDisplayName(false, 0);
        } catch (Throwable unused) {
            displayName = "";
        }
        return displayName == null ? "" : displayName;
    }

    public static String o(Context context) {
        try {
            TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
            return telephonyManager != null ? String.valueOf(telephonyManager.getNetworkType()) : "";
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String p() {
        try {
            long jCurrentTimeMillis = System.currentTimeMillis() - SystemClock.elapsedRealtime();
            StringBuilder sb = new StringBuilder();
            sb.append(jCurrentTimeMillis - (jCurrentTimeMillis % 1000));
            return sb.toString();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String p(Context context) {
        WifiManager wifiManager;
        if (a(context, g.d)) {
            return "";
        }
        try {
            wifiManager = (WifiManager) context.getSystemService(Device.NETWORN_WIFI);
        } catch (Throwable unused) {
        }
        String bssid = wifiManager.isWifiEnabled() ? wifiManager.getConnectionInfo().getBSSID() : "";
        return bssid == null ? "" : bssid;
    }

    public static String q() {
        try {
            StringBuilder sb = new StringBuilder();
            sb.append(SystemClock.elapsedRealtime());
            return sb.toString();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String q(Context context) {
        try {
            String strT = t(context);
            String strA = A();
            if (!com.alipay.security.mobile.module.a.a.b(strT) || !com.alipay.security.mobile.module.a.a.b(strA)) {
                return "";
            }
            return strT + Constants.COLON_SEPARATOR + A();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String r() {
        try {
            StringBuilder sb = new StringBuilder();
            String[] strArr = {"/dev/qemu_pipe", "/dev/socket/qemud", "/system/lib/libc_malloc_debug_qemu.so", "/sys/qemu_trace", "/system/bin/qemu-props", "/dev/socket/genyd", "/dev/socket/baseband_genyd"};
            sb.append(e.V + Constants.COLON_SEPARATOR);
            for (int i = 0; i < 7; i++) {
                sb.append(new File(strArr[i]).exists() ? "1" : "0");
            }
            return sb.toString();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String r(Context context) {
        try {
            long jMax = 0;
            if (!((KeyguardManager) context.getSystemService("keyguard")).isKeyguardSecure()) {
                return "0:0";
            }
            String[] strArr = {"/data/system/password.key", "/data/system/gesture.key", "/data/system/gatekeeper.password.key", "/data/system/gatekeeper.gesture.key", "/data/system/gatekeeper.pattern.key"};
            for (int i = 0; i < 5; i++) {
                long jLastModified = -1;
                try {
                    jLastModified = new File(strArr[i]).lastModified();
                } catch (Throwable unused) {
                }
                jMax = Math.max(jLastModified, jMax);
            }
            return "1:" + jMax;
        } catch (Throwable unused2) {
            return "";
        }
    }

    public static String s() {
        String[] strArr = {"dalvik.system.Taint"};
        StringBuilder sb = new StringBuilder();
        sb.append(e.V);
        sb.append(Constants.COLON_SEPARATOR);
        for (int i = 0; i <= 0; i++) {
            try {
                Class.forName(strArr[0]);
                sb.append("1");
            } catch (Throwable unused) {
                sb.append("0");
            }
        }
        return sb.toString();
    }

    public static String s(Context context) {
        try {
            Intent intentRegisterReceiver = context.registerReceiver(null, new IntentFilter("android.intent.action.BATTERY_CHANGED"));
            int intExtra = intentRegisterReceiver.getIntExtra("level", -1);
            int intExtra2 = intentRegisterReceiver.getIntExtra("status", -1);
            boolean z = intExtra2 == 2 || intExtra2 == 5;
            StringBuilder sb = new StringBuilder();
            sb.append(z ? "1" : "0");
            sb.append(Constants.COLON_SEPARATOR);
            sb.append(intExtra);
            return sb.toString();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String t() {
        StringBuilder sb = new StringBuilder();
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put("/system/build.prop", "ro.product.name=sdk");
        linkedHashMap.put("/proc/tty/drivers", "goldfish");
        linkedHashMap.put("/proc/cpuinfo", "goldfish");
        sb.append(e.V + Constants.COLON_SEPARATOR);
        for (String str : linkedHashMap.keySet()) {
            LineNumberReader lineNumberReader = null;
            char c = '0';
            try {
                LineNumberReader lineNumberReader2 = new LineNumberReader(new InputStreamReader(new FileInputStream(str)));
                while (true) {
                    try {
                        String line = lineNumberReader2.readLine();
                        if (line == null) {
                            break;
                        }
                        if (line.toLowerCase().contains((CharSequence) linkedHashMap.get(str))) {
                            c = '1';
                            break;
                        }
                    } catch (Throwable unused) {
                        lineNumberReader = lineNumberReader2;
                        sb.append('0');
                        if (lineNumberReader != null) {
                            lineNumberReader.close();
                        }
                    }
                }
                sb.append(c);
                try {
                    lineNumberReader2.close();
                } catch (Throwable unused2) {
                }
            } catch (Throwable unused3) {
            }
        }
        return sb.toString();
    }

    private static String t(Context context) {
        if (a(context, g.b)) {
            return "";
        }
        try {
            NetworkInfo activeNetworkInfo = ((ConnectivityManager) context.getSystemService("connectivity")).getActiveNetworkInfo();
            if (activeNetworkInfo == null) {
                return null;
            }
            if (activeNetworkInfo.getType() == 1) {
                return "WIFI";
            }
            if (activeNetworkInfo.getType() != 0) {
                return null;
            }
            int subtype = activeNetworkInfo.getSubtype();
            if (subtype != 4 && subtype != 1 && subtype != 2 && subtype != 7 && subtype != 11) {
                if (subtype != 3 && subtype != 5 && subtype != 6 && subtype != 8 && subtype != 9 && subtype != 10 && subtype != 12 && subtype != 14 && subtype != 15) {
                    return subtype == 13 ? Device.NETWORN_4G : "UNKNOW";
                }
                return Device.NETWORN_3G;
            }
            return Device.NETWORN_2G;
        } catch (Throwable unused) {
            return null;
        }
    }

    public static String u() {
        StringBuilder sb = new StringBuilder();
        sb.append(e.V + Constants.COLON_SEPARATOR);
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put("BRAND", "generic");
        linkedHashMap.put("BOARD", EnvironmentCompat.MEDIA_UNKNOWN);
        linkedHashMap.put("DEVICE", "generic");
        linkedHashMap.put("HARDWARE", "goldfish");
        linkedHashMap.put("PRODUCT", "sdk");
        linkedHashMap.put("MODEL", "sdk");
        for (String str : linkedHashMap.keySet()) {
            char c = '0';
            try {
                String str2 = (String) Build.class.getField(str).get(null);
                String str3 = (String) linkedHashMap.get(str);
                String lowerCase = str2 != null ? str2.toLowerCase() : null;
                if (lowerCase != null && lowerCase.contains(str3)) {
                    c = '1';
                }
            } catch (Throwable unused) {
            }
            sb.append(c);
        }
        return sb.toString();
    }

    public static String v() {
        StringBuilder sb = new StringBuilder();
        sb.append(e.V + Constants.COLON_SEPARATOR);
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put("ro.hardware", "goldfish");
        linkedHashMap.put("ro.kernel.qemu", "1");
        linkedHashMap.put("ro.product.device", "generic");
        linkedHashMap.put("ro.product.model", "sdk");
        linkedHashMap.put("ro.product.brand", "generic");
        linkedHashMap.put("ro.product.name", "sdk");
        linkedHashMap.put("ro.build.fingerprint", "test-keys");
        linkedHashMap.put("ro.product.manufacturer", "unknow");
        for (String str : linkedHashMap.keySet()) {
            char c = '0';
            String str2 = (String) linkedHashMap.get(str);
            String strB = com.alipay.security.mobile.module.a.a.b(str, "");
            if (strB != null && strB.contains(str2)) {
                c = '1';
            }
            sb.append(c);
        }
        return sb.toString();
    }

    private static String w() {
        try {
            ArrayList<NetworkInterface> list = Collections.list(NetworkInterface.getNetworkInterfaces());
            if (list == null) {
                return "02:00:00:00:00:00";
            }
            for (NetworkInterface networkInterface : list) {
                if (networkInterface != null && networkInterface.getName() != null && networkInterface.getName().equalsIgnoreCase("wlan0")) {
                    byte[] hardwareAddress = networkInterface.getHardwareAddress();
                    if (hardwareAddress == null) {
                        return "02:00:00:00:00:00";
                    }
                    StringBuilder sb = new StringBuilder();
                    for (byte b : hardwareAddress) {
                        sb.append(String.format("%02X:", Integer.valueOf(b & UByte.MAX_VALUE)));
                    }
                    if (sb.length() > 0) {
                        sb.deleteCharAt(sb.length() - 1);
                    }
                    return sb.toString();
                }
            }
            return "02:00:00:00:00:00";
        } catch (Throwable unused) {
            return "02:00:00:00:00:00";
        }
    }

    private static String x() {
        FileReader fileReader;
        BufferedReader bufferedReader = null;
        try {
            fileReader = new FileReader("/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq");
            try {
                BufferedReader bufferedReader2 = new BufferedReader(fileReader, 8192);
                try {
                    String line = bufferedReader2.readLine();
                    if (!com.alipay.security.mobile.module.a.a.a(line)) {
                        String strTrim = line.trim();
                        try {
                            bufferedReader2.close();
                        } catch (Throwable unused) {
                        }
                        try {
                            fileReader.close();
                        } catch (Throwable unused2) {
                        }
                        return strTrim;
                    }
                    try {
                        bufferedReader2.close();
                    } catch (Throwable unused3) {
                    }
                } catch (Throwable unused4) {
                    bufferedReader = bufferedReader2;
                    if (bufferedReader != null) {
                        try {
                            bufferedReader.close();
                        } catch (Throwable unused5) {
                        }
                    }
                    if (fileReader == null) {
                        return "";
                    }
                }
            } catch (Throwable unused6) {
            }
        } catch (Throwable unused7) {
            fileReader = null;
        }
        try {
            fileReader.close();
            return "";
        } catch (Throwable unused8) {
            return "";
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:15:0x0034, code lost:
    
        r1 = r2[1].trim();
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static java.lang.String y() {
        /*
            java.lang.String r0 = "/proc/cpuinfo"
            java.lang.String r1 = ""
            r2 = 0
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> L45
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L45
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L43
            r4 = 8192(0x2000, float:1.148E-41)
            r0.<init>(r3, r4)     // Catch: java.lang.Throwable -> L43
        L11:
            java.lang.String r2 = r0.readLine()     // Catch: java.lang.Throwable -> L41
            if (r2 == 0) goto L3a
            boolean r4 = com.alipay.security.mobile.module.a.a.a(r2)     // Catch: java.lang.Throwable -> L41
            if (r4 != 0) goto L11
            java.lang.String r4 = ":"
            java.lang.String[] r2 = r2.split(r4)     // Catch: java.lang.Throwable -> L41
            if (r2 == 0) goto L11
            int r4 = r2.length     // Catch: java.lang.Throwable -> L41
            r5 = 1
            if (r4 <= r5) goto L11
            r4 = 0
            r4 = r2[r4]     // Catch: java.lang.Throwable -> L41
            java.lang.String r6 = "BogoMIPS"
            boolean r4 = r4.contains(r6)     // Catch: java.lang.Throwable -> L41
            if (r4 == 0) goto L11
            r2 = r2[r5]     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = r2.trim()     // Catch: java.lang.Throwable -> L41
        L3a:
            r3.close()     // Catch: java.lang.Throwable -> L3d
        L3d:
            r0.close()     // Catch: java.lang.Throwable -> L52
            goto L52
        L41:
            r2 = r0
            goto L46
        L43:
            goto L46
        L45:
            r3 = r2
        L46:
            if (r3 == 0) goto L4d
            r3.close()     // Catch: java.lang.Throwable -> L4c
            goto L4d
        L4c:
        L4d:
            if (r2 == 0) goto L52
            r2.close()     // Catch: java.lang.Throwable -> L52
        L52:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.alipay.security.mobile.module.b.b.y():java.lang.String");
    }

    private static String z() {
        BluetoothAdapter defaultAdapter;
        String address;
        String strA;
        try {
            defaultAdapter = BluetoothAdapter.getDefaultAdapter();
            if (defaultAdapter != null) {
                try {
                    if (!defaultAdapter.isEnabled()) {
                        return "";
                    }
                } catch (Throwable unused) {
                    address = "";
                }
            }
            address = defaultAdapter.getAddress();
        } catch (Throwable unused2) {
            defaultAdapter = null;
        }
        if (address == null || address.endsWith("00:00:00:00:00")) {
            try {
                strA = a(defaultAdapter);
            } catch (Throwable unused3) {
                strA = address;
            }
        } else {
            strA = address;
        }
        return strA == null ? "" : strA;
    }

    public final String f() {
        try {
            return String.valueOf(new File("/sys/devices/system/cpu/").listFiles(new c(this)).length);
        } catch (Throwable unused) {
            return "1";
        }
    }
}
