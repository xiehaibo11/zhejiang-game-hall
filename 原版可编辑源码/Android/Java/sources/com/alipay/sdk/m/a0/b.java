package com.alipay.sdk.m.a0;

import android.app.KeyguardManager;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.hardware.Sensor;
import android.hardware.SensorManager;
import android.media.AudioManager;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
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
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileReader;
import java.io.InputStreamReader;
import java.io.LineNumberReader;
import java.net.Inet4Address;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.util.Enumeration;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.TimeZone;
import org.json.JSONArray;
import org.json.JSONObject;

public final class b {
    public static b b = new b();
    public f a;

    public static b a(f fVar) {
        b bVar = b;
        bVar.a = fVar;
        return bVar;
    }

    public static boolean a(Context context, String str) {
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

    public static String c() {
        long blockSize;
        try {
            StatFs statFs = new StatFs("/sdcard");
            blockSize = ((long) statFs.getBlockSize()) * ((long) statFs.getAvailableBlocks());
        } catch (Throwable unused) {
            blockSize = 0;
        }
        return String.valueOf(blockSize);
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x002d, code lost:
    
        r0 = r6.substring(r6.indexOf(com.xiaomi.mipush.sdk.Constants.COLON_SEPARATOR) + 1, r6.length()).trim();
     */
    /* JADX WARN: Removed duplicated region for block: B:36:0x006a A[ORIG_RETURN, RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:59:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String d() {
        FileInputStream fileInputStream;
        InputStreamReader inputStreamReader;
        String strTrim = "0000000000000000";
        LineNumberReader lineNumberReader = null;
        try {
            fileInputStream = new FileInputStream(new File("/proc/cpuinfo"));
            try {
                inputStreamReader = new InputStreamReader(fileInputStream);
                try {
                    LineNumberReader lineNumberReader2 = new LineNumberReader(inputStreamReader);
                    int i = 1;
                    while (true) {
                        if (i < 100) {
                            try {
                                String line = lineNumberReader2.readLine();
                                if (line != null) {
                                    if (line.indexOf("Serial") >= 0) {
                                        break;
                                    }
                                    i++;
                                }
                            } catch (Throwable unused) {
                                lineNumberReader = lineNumberReader2;
                                if (lineNumberReader != null) {
                                    try {
                                        lineNumberReader.close();
                                    } catch (Throwable unused2) {
                                    }
                                }
                                if (inputStreamReader != null) {
                                    try {
                                        inputStreamReader.close();
                                    } catch (Throwable unused3) {
                                    }
                                }
                                if (fileInputStream != null) {
                                }
                                if (strTrim != null) {
                                }
                            }
                        }
                    }
                    try {
                        lineNumberReader2.close();
                    } catch (Throwable unused4) {
                    }
                    try {
                        inputStreamReader.close();
                        break;
                    } catch (Throwable unused5) {
                    }
                } catch (Throwable unused6) {
                }
            } catch (Throwable unused7) {
                inputStreamReader = null;
            }
        } catch (Throwable unused8) {
            fileInputStream = null;
            inputStreamReader = null;
        }
        try {
            fileInputStream.close();
        } catch (Throwable unused9) {
        }
        return strTrim != null ? "" : strTrim;
    }

    public static String e() {
        String strT = t();
        return !com.alipay.sdk.m.z.a.a(strT) ? strT : u();
    }

    public static String f() {
        BufferedReader bufferedReader;
        FileReader fileReader = null;
        try {
            FileReader fileReader2 = new FileReader("/proc/cpuinfo");
            try {
                bufferedReader = new BufferedReader(fileReader2);
            } catch (Throwable unused) {
                bufferedReader = null;
            }
            try {
                String[] strArrSplit = bufferedReader.readLine().split(":\\s+", 2);
                if (strArrSplit != null && strArrSplit.length > 1) {
                    String str = strArrSplit[1];
                    try {
                        fileReader2.close();
                    } catch (Throwable unused2) {
                    }
                    try {
                        bufferedReader.close();
                    } catch (Throwable unused3) {
                    }
                    return str;
                }
                try {
                    fileReader2.close();
                } catch (Throwable unused4) {
                }
            } catch (Throwable unused5) {
                fileReader = fileReader2;
                if (fileReader != null) {
                    try {
                        fileReader.close();
                    } catch (Throwable unused6) {
                    }
                }
                if (bufferedReader == null) {
                    return "";
                }
            }
        } catch (Throwable unused7) {
            bufferedReader = null;
        }
        try {
            bufferedReader.close();
            return "";
        } catch (Throwable unused8) {
            return "";
        }
    }

    public static String f(Context context) {
        int i = 0;
        try {
            i = Settings.System.getInt(context.getContentResolver(), "airplane_mode_on", 0);
        } catch (Throwable unused) {
        }
        return i == 1 ? "1" : "0";
    }

    public static String g() {
        BufferedReader bufferedReader;
        FileReader fileReader = null;
        try {
            FileReader fileReader2 = new FileReader("/proc/meminfo");
            try {
                bufferedReader = new BufferedReader(fileReader2, 8192);
            } catch (Throwable unused) {
                bufferedReader = null;
            }
            try {
                j = bufferedReader.readLine() != null ? Integer.parseInt(r1.split("\\s+")[1]) : 0L;
                try {
                    fileReader2.close();
                } catch (Throwable unused2) {
                }
            } catch (Throwable unused3) {
                fileReader = fileReader2;
                if (fileReader != null) {
                    try {
                        fileReader.close();
                    } catch (Throwable unused4) {
                    }
                }
                if (bufferedReader != null) {
                }
                return String.valueOf(j);
            }
        } catch (Throwable unused5) {
            bufferedReader = null;
        }
        try {
            bufferedReader.close();
        } catch (Throwable unused6) {
        }
        return String.valueOf(j);
    }

    public static String g(Context context) {
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

    public static String h() {
        long blockCount;
        try {
            StatFs statFs = new StatFs(Environment.getDataDirectory().getPath());
            blockCount = ((long) statFs.getBlockCount()) * ((long) statFs.getBlockSize());
        } catch (Throwable unused) {
            blockCount = 0;
        }
        return String.valueOf(blockCount);
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x004d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String h(Context context) {
        SensorManager sensorManager;
        List<Sensor> sensorList;
        String strE;
        if (context != null) {
            try {
                sensorManager = (SensorManager) context.getSystemService("sensor");
            } catch (Throwable unused) {
            }
            if (sensorManager == null || (sensorList = sensorManager.getSensorList(-1)) == null || sensorList.size() <= 0) {
                strE = null;
            } else {
                StringBuilder sb = new StringBuilder();
                for (Sensor sensor : sensorList) {
                    sb.append(sensor.getName());
                    sb.append(sensor.getVersion());
                    sb.append(sensor.getVendor());
                }
                strE = com.alipay.sdk.m.z.a.e(sb.toString());
            }
        }
        return strE == null ? "" : strE;
    }

    public static String i() {
        long blockSize;
        try {
            StatFs statFs = new StatFs("/sdcard");
            blockSize = ((long) statFs.getBlockSize()) * ((long) statFs.getBlockCount());
        } catch (Throwable unused) {
            blockSize = 0;
        }
        return String.valueOf(blockSize);
    }

    public static String i(Context context) {
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

    public static String j() {
        String str;
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            str = (String) cls.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class, String.class).invoke(cls.newInstance(), "gsm.version.baseband", "no message");
        } catch (Throwable unused) {
            str = "";
        }
        return str == null ? "" : str;
    }

    public static String j(Context context) {
        try {
            DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
            return Integer.toString(displayMetrics.widthPixels) + "*" + Integer.toString(displayMetrics.heightPixels);
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String k() {
        String string;
        try {
            string = Locale.getDefault().toString();
        } catch (Throwable unused) {
            string = "";
        }
        return string == null ? "" : string;
    }

    public static String k(Context context) {
        try {
            DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
            StringBuilder sb = new StringBuilder();
            sb.append(displayMetrics.widthPixels);
            return sb.toString();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String l() {
        String displayName;
        try {
            displayName = TimeZone.getDefault().getDisplayName(false, 0);
        } catch (Throwable unused) {
            displayName = "";
        }
        return displayName == null ? "" : displayName;
    }

    public static String l(Context context) {
        try {
            DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
            StringBuilder sb = new StringBuilder();
            sb.append(displayMetrics.heightPixels);
            return sb.toString();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String m() {
        try {
            long jCurrentTimeMillis = System.currentTimeMillis() - SystemClock.elapsedRealtime();
            StringBuilder sb = new StringBuilder();
            sb.append(jCurrentTimeMillis - (jCurrentTimeMillis % 1000));
            return sb.toString();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String m(Context context) {
        try {
            TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
            return telephonyManager != null ? String.valueOf(telephonyManager.getNetworkType()) : "";
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String n() {
        try {
            StringBuilder sb = new StringBuilder();
            sb.append(SystemClock.elapsedRealtime());
            return sb.toString();
        } catch (Throwable unused) {
            return "";
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0025  */
    /* JADX WARN: Removed duplicated region for block: B:22:? A[RETURN, SYNTHETIC] */
    /*  JADX ERROR: JadxRuntimeException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxRuntimeException: Can't find top splitter block for handler:B:18:0x0021
        	at jadx.core.utils.BlockUtils.getTopSplitterForHandler(BlockUtils.java:1182)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.collectHandlerRegions(ExcHandlersRegionMaker.java:53)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.process(ExcHandlersRegionMaker.java:38)
        	at jadx.core.dex.visitors.regions.RegionMakerVisitor.visit(RegionMakerVisitor.java:27)
        */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static java.lang.String n(android.content.Context r3) {
        /*
            java.lang.String r0 = ""
            android.content.pm.ApplicationInfo r3 = r3.getApplicationInfo()
            int r3 = r3.targetSdkVersion
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L21
            r2 = 29
            if (r1 < r2) goto Lf
            goto L21
        Lf:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L21
            r2 = 26
            if (r1 < r2) goto L1e
            r1 = 28
            if (r3 < r1) goto L1e
            java.lang.String r3 = android.os.Build.getSerial()     // Catch: java.lang.Throwable -> L21
            goto L22
        L1e:
            java.lang.String r3 = android.os.Build.SERIAL     // Catch: java.lang.Throwable -> L21
            goto L22
        L21:
            r3 = r0
        L22:
            if (r3 != 0) goto L25
            goto L26
        L25:
            r0 = r3
        L26:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.alipay.sdk.m.a0.b.n(android.content.Context):java.lang.String");
    }

    public static String o() {
        try {
            StringBuilder sb = new StringBuilder();
            String[] strArr = {"/dev/qemu_pipe", "/dev/socket/qemud", "/system/lib/libc_malloc_debug_qemu.so", "/sys/qemu_trace", "/system/bin/qemu-props", "/dev/socket/genyd", "/dev/socket/baseband_genyd"};
            sb.append("00:");
            for (int i = 0; i < 7; i++) {
                sb.append(new File(strArr[i]).exists() ? "1" : "0");
            }
            return sb.toString();
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String o(Context context) {
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

    public static String p() {
        String[] strArr = {"dalvik.system.Taint"};
        StringBuilder sb = new StringBuilder();
        sb.append(com.sigmob.sdk.archives.tar.e.V);
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

    public static String p(Context context) {
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

    public static String q() {
        StringBuilder sb = new StringBuilder();
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put("/system/build.prop", "ro.product.name=sdk");
        linkedHashMap.put("/proc/tty/drivers", "goldfish");
        linkedHashMap.put("/proc/cpuinfo", "goldfish");
        sb.append("00:");
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

    public static String q(Context context) {
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
            return (subtype == 4 || subtype == 1 || subtype == 2 || subtype == 7 || subtype == 11) ? Device.NETWORN_2G : (subtype == 3 || subtype == 5 || subtype == 6 || subtype == 8 || subtype == 9 || subtype == 10 || subtype == 12 || subtype == 14 || subtype == 15) ? Device.NETWORN_3G : subtype == 13 ? Device.NETWORN_4G : "UNKNOW";
        } catch (Throwable unused) {
            return null;
        }
    }

    public static String r() {
        StringBuilder sb = new StringBuilder();
        sb.append("00:");
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

    public static String s() {
        StringBuilder sb = new StringBuilder();
        sb.append("00:");
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
            String strB = com.alipay.sdk.m.z.a.b(str, "");
            if (strB != null && strB.contains(str2)) {
                c = '1';
            }
            sb.append(c);
        }
        return sb.toString();
    }

    public static String t() {
        FileReader fileReader;
        BufferedReader bufferedReader = null;
        try {
            fileReader = new FileReader("/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq");
            try {
                BufferedReader bufferedReader2 = new BufferedReader(fileReader, 8192);
                try {
                    String line = bufferedReader2.readLine();
                    if (!com.alipay.sdk.m.z.a.a(line)) {
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
    */
    public static String u() {
        BufferedReader bufferedReader;
        String[] strArrSplit;
        String strTrim = "";
        FileReader fileReader = null;
        try {
            FileReader fileReader2 = new FileReader("/proc/cpuinfo");
            try {
                bufferedReader = new BufferedReader(fileReader2, 8192);
                while (true) {
                    try {
                        String line = bufferedReader.readLine();
                        if (line != null) {
                            if (!com.alipay.sdk.m.z.a.a(line) && (strArrSplit = line.split(Constants.COLON_SEPARATOR)) != null && strArrSplit.length > 1 && strArrSplit[0].contains("BogoMIPS")) {
                                break;
                            }
                        }
                    } catch (Throwable unused) {
                        fileReader = fileReader2;
                        if (fileReader != null) {
                            try {
                                fileReader.close();
                            } catch (Throwable unused2) {
                            }
                        }
                        if (bufferedReader != null) {
                        }
                        return strTrim;
                    }
                }
                try {
                    fileReader2.close();
                    break;
                } catch (Throwable unused3) {
                }
            } catch (Throwable unused4) {
                bufferedReader = null;
            }
        } catch (Throwable unused5) {
            bufferedReader = null;
        }
        try {
            bufferedReader.close();
        } catch (Throwable unused6) {
        }
        return strTrim;
    }

    private String v() {
        String strA = d.a("ip");
        if (strA != null) {
            return strA;
        }
        if (this.a.isBackgroundRunning()) {
            return "";
        }
        try {
            Enumeration<NetworkInterface> networkInterfaces = NetworkInterface.getNetworkInterfaces();
            while (networkInterfaces.hasMoreElements() && strA == null) {
                Enumeration<InetAddress> inetAddresses = networkInterfaces.nextElement().getInetAddresses();
                while (true) {
                    if (inetAddresses.hasMoreElements()) {
                        InetAddress inetAddressNextElement = inetAddresses.nextElement();
                        if (!inetAddressNextElement.isLoopbackAddress() && (inetAddressNextElement instanceof Inet4Address)) {
                            strA = inetAddressNextElement.getHostAddress().toString();
                            break;
                        }
                    }
                }
            }
        } catch (Throwable unused) {
        }
        String str = strA != null ? strA : "";
        d.a("ip", str);
        return str;
    }

    public final String a() {
        try {
            return String.valueOf(new File("/sys/devices/system/cpu/").listFiles(new c(this)).length);
        } catch (Throwable unused) {
            return "1";
        }
    }

    public final synchronized String a(Context context) {
        String subscriberId = this.a.getSubscriberId();
        if (subscriberId != null) {
            return subscriberId;
        }
        String strA = d.a("imsi");
        if (strA != null) {
            return strA;
        }
        if (this.a.isBackgroundRunning()) {
            return "";
        }
        if (a(context, "android.permission.READ_PHONE_STATE")) {
            return "";
        }
        if (context != null) {
            try {
                TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
                if (telephonyManager != null) {
                    strA = telephonyManager.getSubscriberId();
                }
            } catch (Throwable unused) {
            }
        }
        if (strA == null) {
            strA = "";
        }
        d.a("imsi", strA);
        return strA;
    }

    public final synchronized String b(Context context) {
        String strA = d.a("NetworkOperatorName");
        if (strA != null) {
            return strA;
        }
        if (context != null) {
            try {
                TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
                if (telephonyManager != null) {
                    strA = telephonyManager.getNetworkOperatorName();
                }
            } catch (Throwable unused) {
            }
        }
        if (strA == null || "null".equals(strA)) {
            strA = "";
        }
        d.a("NetworkOperatorName", strA);
        return strA;
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x0039  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized String c(Context context) {
        String strA = d.a("SimSerial");
        if (strA != null) {
            return strA;
        }
        if (this.a.isBackgroundRunning()) {
            return "";
        }
        if (a(context, "android.permission.READ_PHONE_STATE")) {
            return "";
        }
        try {
            strA = ((TelephonyManager) context.getSystemService("phone")).getSimSerialNumber();
        } catch (Throwable unused) {
        }
        if (strA == null) {
            strA = "";
            d.a("SimSerial", strA);
            return strA;
        }
        if (strA != null) {
            if (strA.length() == 0) {
            }
        }
        d.a("SimSerial", strA);
        return strA;
    }

    public final synchronized String d(Context context) {
        String androidId = this.a.getAndroidId();
        if (androidId != null) {
            return androidId;
        }
        String strA = d.a("ANDROIDID");
        if (strA != null) {
            return strA;
        }
        if (this.a.isBackgroundRunning()) {
            return "";
        }
        try {
            strA = Settings.Secure.getString(context.getContentResolver(), "android_id");
        } catch (Throwable unused) {
        }
        if (strA == null) {
            strA = "";
        }
        d.a("ANDROIDID", strA);
        return strA;
    }

    public final String e(Context context) {
        try {
            String strQ = q(context);
            String strV = v();
            if (com.alipay.sdk.m.z.a.b(strQ) && com.alipay.sdk.m.z.a.b(strV)) {
                return strQ + Constants.COLON_SEPARATOR + v();
            }
        } catch (Throwable unused) {
        }
        return "";
    }
}
