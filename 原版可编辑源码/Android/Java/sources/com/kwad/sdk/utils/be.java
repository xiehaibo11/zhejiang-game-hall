package com.kwad.sdk.utils;

import android.app.ActivityManager;
import android.content.Context;
import android.media.AudioManager;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.BatteryManager;
import android.os.Build;
import android.os.Environment;
import android.os.LocaleList;
import android.os.Process;
import android.os.SystemClock;
import android.provider.Settings;
import android.system.Os;
import android.system.StructStat;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.WindowManager;
import com.bianfeng.libuniverse.Device;
import com.kwad.sdk.service.ServiceProvider;
import com.tencent.mm.opensdk.constants.ConstantsAPI;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.net.Inet4Address;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Enumeration;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Random;

public final class be {
    private static String aJL = null;
    private static String aJM = "";
    private static boolean aJN = false;
    private static String aJO = "";
    private static String aJP = "";
    private static int aJQ;
    private static boolean aJR;
    private static int aJS;
    private static boolean aJT;
    private static String aJY;
    private static String aJZ;
    private static int aKh;
    private static long aKi;
    private static final String[] aJU = {"", ""};
    private static String aJV = "";
    private static String aJW = "";
    private static String aJX = "";
    private static int aKa = -1;
    private static boolean aKb = false;
    private static boolean aKc = false;
    private static boolean aKd = false;
    private static boolean aKe = false;
    private static boolean aKf = false;
    private static boolean aKg = false;
    private static String aKj = "";
    private static String aKk = "";
    private static final List<String> aKl = Arrays.asList("a5f5faddde9e9f02", "8e17f7422b35fbea", "b88c3c236923d9d9", "cb36bf76cca443d0", "5d4e49ed381836c5", "cffa38e9136f93e9", "62bd2daa59ea0173", "b7aad49a2d5bc5d9", "f2138912c5e5dd5c", "330a1e81a2bf9f31", "59c0f432ccbef844", "521376155e535f39", "aa5ec6ce14abd680", "5522a09bb500d82f", "6dfe4a96800edfb4", "ecc9a2dded8cdf72", "399f868043955b11", "34dc327c00dbff94", "d1b4e3862c309f8b", "68bdbf71f863ccac", "01558dd995085a35", "351174200a06da52", "fa0988506c76ff4b", "8eb8ef823312c61a", "a72e81be65c4638b", "416d15a015c8f324", "474086ea2d737519", "befdddf908c8d749", "780ee58a6f57aab6", "cfe86fa07cae3601", "704ff4d1534f0ff4", "9298b9e9bbd7cdea", "7b634c42f236c6e8", "11eacf22b9ceab7d", "2941a4f39eec5864", "87d134dc5ba45550", "fdd2313bb1750eb9", "6560ef232d8424bb", "5d876286e1064482", "f66fefb916f4962d", "7baf82d0ac49f596", "57748921d8d88ed4", "120cd57f1a50b8f5", "e164f9610ddd9fc8", "6256f0e8da6389de", "bcb22df712476416", "714fa9aff63f7adb", "cb8252e4da7cf610", "e18f649aa80e140c", "966790a9db5ea8d8", "e1769e681af901dd", "d23f2574a60964a4", "d717e6298d3c9cb2", "f5ea5e8ba730864e", "a8a0a223d1a42232", "6675a4f231f5c8db", "3edb7c2103e5c75a", "8ce6a9a216b326c4", "af606153eb3be0a7", "7ae255c3d760c920", "e50e94c40048c5fd", "55009bca30f9dc4c", "c37566487909214a", "891b74f7e534d14a", "726e190aae663525", "df473127d30fb669", "bfbcc646d92dfd48", "a4a1954c44751936", "da4a44a3d7c4d8be", "5ff5bca4a775dd30", "14917461e1917c53", "14ce20d0a80955fa", "a56a63de4d3f3d39", "f780246adc7bd556", "3495a541aea0da72", "f7f205ce47fed2a5", "f52db3f434279c3a", "dca17088c97dee5e", "dd53a8b3a2a4ccc0", "52e07629290d45e4", "cda522b0f8f50d9a", "b85a1c8bcd51d82c", "e344a00cd3f5e93a", "fa59d8a66d7bdd88", "68fb1f1393a216e8", "4c30ab1fb10af181", "b1376e0578099143", "88752f72d8d305fd", "fddf20078d27bf3c", "dab2120bffa2be8c", "c7c8dde481793471", "e4b1bdbcabfc284d");

    private static long JE() throws Throwable {
        BufferedReader bufferedReader;
        Throwable th;
        String line;
        BufferedReader bufferedReader2 = null;
        try {
            bufferedReader = new BufferedReader(new FileReader("/proc/meminfo"), 8192);
            do {
                try {
                    line = bufferedReader.readLine();
                    if (line == null) {
                        com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
                        return 0L;
                    }
                } catch (Exception unused) {
                    bufferedReader2 = bufferedReader;
                    com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader2);
                    return 0L;
                } catch (Throwable th2) {
                    th = th2;
                    com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
                    throw th;
                }
            } while (!line.contains("MemTotal"));
            long jLongValue = Long.valueOf(line.split("\\s+")[1]).longValue() << 10;
            com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
            return jLongValue;
        } catch (Exception unused2) {
        } catch (Throwable th3) {
            bufferedReader = null;
            th = th3;
        }
    }

    public static long JG() {
        return com.kwad.sdk.crash.utils.h.K(Environment.getDataDirectory());
    }

    public static long JH() {
        if (((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(1024L)) {
            return 0L;
        }
        return com.kwad.sdk.crash.utils.h.J(Environment.getDataDirectory());
    }

    public static int JI() {
        int i = aKh;
        if (i > 0) {
            return i;
        }
        int iAvailableProcessors = Runtime.getRuntime().availableProcessors();
        aKh = iAvailableProcessors;
        return iAvailableProcessors;
    }

    public static String JJ() {
        return Build.MODEL;
    }

    public static synchronized long JK() {
        long j;
        j = 0;
        if (at.IY() && (!TextUtils.isEmpty(at.IZ()) || at.Ja() != null)) {
            j = 1;
        }
        if (at.IW() && at.IX() != null) {
            j |= 64;
        }
        if (at.IY() && !TextUtils.isEmpty(at.Jb())) {
            j |= 2;
        }
        if (at.Jc() && !TextUtils.isEmpty(at.Jd())) {
            j |= 4;
        }
        if (at.Je() && !TextUtils.isEmpty(at.Jf())) {
            j |= ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX;
        }
        if (at.Ji()) {
            if (at.Jj() != null) {
                j |= 16;
            }
        }
        return j;
    }

    public static String JL() {
        return Build.BRAND;
    }

    public static synchronized long JM() {
        return SystemClock.elapsedRealtime() / 1000;
    }

    public static synchronized long JN() {
        return Build.TIME;
    }

    public static synchronized String JO() {
        return Build.FINGERPRINT;
    }

    public static synchronized String JP() {
        if (!TextUtils.isEmpty(aJL)) {
            return aJL;
        }
        String radioVersion = Build.getRadioVersion();
        aJL = radioVersion;
        return radioVersion;
    }

    public static synchronized String JQ() {
        return as.getName();
    }

    public static synchronized String JR() {
        return as.getVersion();
    }

    public static String JS() {
        return Build.MANUFACTURER;
    }

    public static int JT() {
        if (aKa == -1) {
            aKa = di(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext()) ? 4 : 3;
        }
        return aKa;
    }

    public static String JU() {
        if (TextUtils.isEmpty(aJZ)) {
            aJZ = System.getProperty("os.arch");
        }
        return aJZ;
    }

    public static int JV() {
        return Build.VERSION.SDK_INT;
    }

    public static String JW() {
        Enumeration<NetworkInterface> networkInterfaces;
        if (at.Jg() || ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(8L)) {
            return "";
        }
        try {
            networkInterfaces = NetworkInterface.getNetworkInterfaces();
        } catch (Throwable unused) {
        }
        while (networkInterfaces.hasMoreElements()) {
            Enumeration<InetAddress> inetAddresses = networkInterfaces.nextElement().getInetAddresses();
            while (inetAddresses.hasMoreElements()) {
                InetAddress inetAddressNextElement = inetAddresses.nextElement();
                if ((inetAddressNextElement instanceof Inet4Address) && !inetAddressNextElement.isLoopbackAddress()) {
                    return inetAddressNextElement.getHostAddress();
                }
                return "";
            }
        }
        return "";
    }

    private static String JX() {
        try {
            return a(Long.toHexString(new Random(System.currentTimeMillis()).nextLong()), 16, '0');
        } catch (Throwable unused) {
            return null;
        }
    }

    private static String JY() {
        if (((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext() == null) {
            return null;
        }
        String strH = y.h("ksadsdk_pref", "android_id", (String) null);
        y.i(strH, "ksadsdk_pref", "android_id");
        return strH;
    }

    public static String JZ() {
        if (!TextUtils.isEmpty(aKj)) {
            return aKj;
        }
        try {
            String strV = q.V(new File("/proc/sys/kernel/random/boot_id"));
            aKj = TextUtils.isEmpty(strV) ? "" : strV.substring(0, strV.indexOf("\n"));
        } catch (Throwable unused) {
        }
        return aKj;
    }

    private static String a(String str, int i, char c) {
        StringBuilder sb = new StringBuilder();
        while (sb.length() + str.length() < 16) {
            sb.append('0');
        }
        sb.append(str);
        return sb.toString();
    }

    public static String bQ(boolean z) {
        Context context = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext();
        String strBa = com.kwad.sdk.core.f.a.ba(context);
        return (TextUtils.isEmpty(strBa) && !z && TextUtils.isEmpty(db(context))) ? ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).xz() : strBa;
    }

    public static long cY(Context context) {
        if (context == null || ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(1024L)) {
            return 0L;
        }
        try {
            ActivityManager activityManager = (ActivityManager) context.getSystemService("activity");
            ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
            activityManager.getMemoryInfo(memoryInfo);
            return memoryInfo.availMem;
        } catch (Exception unused) {
            return 0L;
        }
    }

    public static int cZ(Context context) {
        if (((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(512L)) {
            return 0;
        }
        try {
            if (Build.VERSION.SDK_INT >= 21) {
                return ((BatteryManager) context.getApplicationContext().getSystemService("batterymanager")).getIntProperty(4);
            }
        } catch (Exception unused) {
        }
        return 0;
    }

    public static int checkSelfPermission(Context context, String str) {
        return context.checkPermission(str, Process.myPid(), Process.myUid());
    }

    public static String cv(Context context) {
        if (!TextUtils.isEmpty(aJX) || context == null || aKe) {
            return aJX;
        }
        if (at.IY()) {
            return at.Jb();
        }
        if (!o.HX()) {
            return aJX;
        }
        try {
            String string = Settings.Secure.getString(context.getContentResolver(), "android_id");
            aJX = string;
            if (!fN(string)) {
                aJX = "";
            }
        } catch (Exception unused) {
        }
        if (TextUtils.isEmpty(aJX)) {
            aKe = true;
        }
        return aJX;
    }

    public static synchronized String cz(Context context) {
        if (context != null) {
            if (!aKc && TextUtils.isEmpty(aJV) && SystemUtil.cX(context) && !at.IY() && o.Id()) {
                try {
                    aJV = ((TelephonyManager) context.getApplicationContext().getSystemService("phone")).getSubscriberId();
                } catch (Exception unused) {
                }
                aKc = TextUtils.isEmpty(aJV);
                return aJV;
            }
        }
        return aJV;
    }

    public static long da(Context context) throws Throwable {
        long j = aKi;
        if (j > 0) {
            return j;
        }
        if (context == null) {
            return 0L;
        }
        try {
            ActivityManager activityManager = (ActivityManager) context.getApplicationContext().getSystemService("activity");
            ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
            activityManager.getMemoryInfo(memoryInfo);
            long jJE = memoryInfo.totalMem;
            if (jJE <= 0) {
                jJE = JE();
            }
            aKi = jJE;
            return jJE;
        } catch (Exception unused) {
            return 0L;
        }
    }

    private static synchronized String db(Context context) {
        if (at.IY() && !TextUtils.isEmpty(at.IZ())) {
            return at.IZ();
        }
        if (aKb) {
            return aJO;
        }
        if (TextUtils.isEmpty(aJO) && context != null) {
            if (Build.VERSION.SDK_INT >= 29) {
                return aJO;
            }
            if (at.IY()) {
                return aJO;
            }
            if (!o.Ic()) {
                return aJO;
            }
            boolean zCX = false;
            try {
                zCX = SystemUtil.cX(context);
                if (zCX) {
                    String deviceId = ((TelephonyManager) context.getSystemService("phone")).getDeviceId();
                    aJO = deviceId;
                    if (TextUtils.isEmpty(deviceId)) {
                        aKb = true;
                    }
                }
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
                if (zCX) {
                    aKb = true;
                }
            }
            return aJO;
        }
        return aJO;
    }

    public static synchronized String dc(Context context) {
        TelephonyManager telephonyManager;
        if (aKg) {
            return aJP;
        }
        if (TextUtils.isEmpty(aJP) && context != null) {
            if (at.IY()) {
                return aJP;
            }
            if (!o.Ib()) {
                return aJX;
            }
            boolean zCX = false;
            try {
                zCX = SystemUtil.cX(context);
                if (zCX && (telephonyManager = (TelephonyManager) context.getSystemService("phone")) != null) {
                    if (Build.VERSION.SDK_INT >= 26) {
                        String meid = telephonyManager.getMeid();
                        aJP = meid;
                        if (TextUtils.isEmpty(meid)) {
                            aKg = true;
                        }
                    } else {
                        if (telephonyManager.getPhoneType() == 2) {
                            String deviceId = telephonyManager.getDeviceId();
                            aJP = deviceId;
                            if (TextUtils.isEmpty(deviceId)) {
                            }
                        } else {
                            aJP = null;
                        }
                        aKg = true;
                    }
                }
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
                if (zCX) {
                    aKg = true;
                }
            }
            return aJP;
        }
        return aJP;
    }

    public static synchronized String[] dd(Context context) {
        if (at.IY() && at.Ja() != null) {
            return at.Ja();
        }
        if (aKf) {
            return aJU;
        }
        if (Build.VERSION.SDK_INT >= 29) {
            return aJU;
        }
        boolean z = false;
        if (TextUtils.isEmpty(aJU[0]) && TextUtils.isEmpty(aJU[1]) && context != null) {
            if (at.IY()) {
                return aJU;
            }
            if (!o.Ic()) {
                return aJU;
            }
            try {
                boolean zCX = SystemUtil.cX(context);
                if (zCX) {
                    try {
                        TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
                        if (telephonyManager != null) {
                            if (Build.VERSION.SDK_INT >= 26) {
                                int iMin = Math.min(de(context), 2);
                                for (int i = 0; i < iMin; i++) {
                                    aJU[i] = telephonyManager.getImei(i);
                                }
                                if (TextUtils.isEmpty(aJU[0]) && TextUtils.isEmpty(aJU[1])) {
                                    aKf = true;
                                }
                            } else {
                                if (telephonyManager.getPhoneType() == 1) {
                                    if (Build.VERSION.SDK_INT >= 23) {
                                        int iMin2 = Math.min(de(context), 2);
                                        for (int i2 = 0; i2 < iMin2; i2++) {
                                            aJU[i2] = telephonyManager.getDeviceId(i2);
                                        }
                                    } else {
                                        aJU[0] = telephonyManager.getDeviceId();
                                        aJU[1] = null;
                                    }
                                    if (TextUtils.isEmpty(aJU[0]) && TextUtils.isEmpty(aJU[1])) {
                                    }
                                } else {
                                    aJU[0] = null;
                                    aJU[1] = null;
                                }
                                aKf = true;
                            }
                        }
                    } catch (Exception e) {
                        e = e;
                        z = zCX;
                        com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                        if (z) {
                            aKf = true;
                        }
                    }
                }
            } catch (Exception e2) {
                e = e2;
            }
            return aJU;
        }
        return aJU;
    }

    public static synchronized int de(Context context) {
        if (aJR || aJQ > 0 || Build.VERSION.SDK_INT < 23 || context == null || at.IY()) {
            return aJQ;
        }
        try {
            aJQ = ((TelephonyManager) context.getSystemService("phone")).getPhoneCount();
        } catch (Exception unused) {
        }
        aJR = aJQ == 0;
        return aJQ;
    }

    public static int df(Context context) {
        if (context == null || aJS > 0 || aJT || Build.VERSION.SDK_INT < 22 || !SystemUtil.cX(context) || at.IY()) {
            return aJS;
        }
        try {
            aJS = ((SubscriptionManager) context.getSystemService("telephony_subscription_service")).getActiveSubscriptionInfoCount();
        } catch (Throwable unused) {
        }
        aJT = aJS != 0;
        return aJS;
    }

    public static String dg(Context context) {
        if (!TextUtils.isEmpty(aJW) || context == null) {
            return aJW;
        }
        if (!aKd && !at.IY() && o.Ie()) {
            try {
                if (SystemUtil.cX(context)) {
                    aJW = ((TelephonyManager) context.getApplicationContext().getSystemService("phone")).getSimSerialNumber();
                }
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
                aJW = null;
            }
            if (TextUtils.isEmpty(aJW)) {
                aKd = true;
            }
            String str = TextUtils.isEmpty(aJW) ? "" : aJW;
            aJW = str;
            return str;
        }
        return aJW;
    }

    public static synchronized int dh(Context context) {
        return ((AudioManager) context.getSystemService("audio")).getRingerMode();
    }

    private static boolean di(Context context) {
        return (context == null || context.getResources() == null || context.getResources().getConfiguration() == null || (context.getResources().getConfiguration().screenLayout & 15) < 3) ? false : true;
    }

    public static synchronized String dj(Context context) {
        if (TextUtils.isEmpty(aJM) && context != null && !aJN) {
            if (at.Jc()) {
                String strJd = at.Jd();
                aJM = strJd;
                return strJd;
            }
            if (!o.HY()) {
                return aJM;
            }
            try {
                WifiInfo connectionInfo = ((WifiManager) context.getApplicationContext().getSystemService(Device.NETWORN_WIFI)).getConnectionInfo();
                if (connectionInfo != null) {
                    aJM = connectionInfo.getMacAddress();
                }
                if (fL(aJM)) {
                    Iterator it = Collections.list(NetworkInterface.getNetworkInterfaces()).iterator();
                    while (true) {
                        if (!it.hasNext()) {
                            break;
                        }
                        NetworkInterface networkInterface = (NetworkInterface) it.next();
                        if (networkInterface != null && "wlan0".equals(networkInterface.getName())) {
                            byte[] hardwareAddress = networkInterface.getHardwareAddress();
                            if (hardwareAddress != null && hardwareAddress.length != 0) {
                                StringBuilder sb = new StringBuilder();
                                for (byte b : hardwareAddress) {
                                    sb.append(String.format("%02X:", Byte.valueOf(b)));
                                }
                                if (sb.length() > 0) {
                                    sb.deleteCharAt(sb.length() - 1);
                                }
                                aJM = sb.toString();
                            }
                        }
                    }
                }
                if (fL(aJM)) {
                    aJM = com.kwad.sdk.crash.utils.h.c(Runtime.getRuntime().exec("cat /sys/class/net/wlan0/address ").getInputStream());
                }
                if (!fL(aJM)) {
                    aJM = aJM.toUpperCase(Locale.US);
                }
            } catch (Exception unused) {
                aJN = true;
            }
            aJN = fL(aJM);
            return aJM;
        }
        return aJM;
    }

    public static List<String> dk(Context context) {
        String[] list;
        if (!c.bF(context) && dl(context)) {
            File file = new File(Environment.getExternalStorageDirectory().getAbsolutePath() + "/Android/data");
            if (!file.exists() || !file.isDirectory() || (list = file.list()) == null) {
                return null;
            }
            ArrayList arrayList = new ArrayList();
            for (String str : list) {
                if (!TextUtils.isEmpty(str) && !str.startsWith(".")) {
                    arrayList.add(str);
                }
            }
            return arrayList;
        }
        return new ArrayList();
    }

    public static boolean dl(Context context) {
        return context.checkCallingOrSelfPermission("android.permission.WRITE_EXTERNAL_STORAGE") == 0;
    }

    private static boolean fL(String str) {
        return TextUtils.isEmpty(str) || str.equals("02:00:00:00:00:00");
    }

    private static boolean fM(String str) {
        return aKl.contains(str.toLowerCase(Locale.US));
    }

    private static boolean fN(String str) {
        for (int i = 0; i < str.length(); i++) {
            try {
                if (str.charAt(i) != '0') {
                    return true;
                }
            } catch (Throwable unused) {
            }
        }
        return false;
    }

    private static void fO(String str) {
        if (((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext() == null) {
            return;
        }
        y.a("ksadsdk_pref", "android_id", str, true);
    }

    public static String fP(String str) {
        String strValueOf;
        if (!TextUtils.isEmpty(aKk) || TextUtils.isEmpty(str)) {
            return aKk;
        }
        if (Build.VERSION.SDK_INT >= 21) {
            try {
                StructStat structStatStat = Os.stat(str);
                if (structStatStat == null) {
                    return aKk;
                }
                String strValueOf2 = "";
                if (Build.VERSION.SDK_INT >= 27) {
                    if (structStatStat.st_atim == null) {
                        strValueOf = "";
                    } else {
                        strValueOf2 = String.valueOf(structStatStat.st_atim.tv_sec);
                        strValueOf = String.valueOf(structStatStat.st_atim.tv_nsec);
                    }
                    aKk = strValueOf2 + "." + strValueOf;
                } else {
                    if (structStatStat.st_atime != 0) {
                        strValueOf2 = String.valueOf(structStatStat.st_atime);
                    }
                    aKk = strValueOf2;
                }
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        }
        return aKk;
    }

    public static String getDeviceId() {
        try {
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
        if (!TextUtils.isEmpty(aJY)) {
            return aJY;
        }
        String strJY = JY();
        if (!TextUtils.isEmpty(strJY)) {
            String str = "ANDROID_" + strJY;
            aJY = str;
            return str;
        }
        String strCv = cv(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext());
        if (!TextUtils.isEmpty(strCv) && !fM(strCv) && fN(strCv)) {
            String str2 = "ANDROID_" + strCv;
            aJY = str2;
            return str2;
        }
        String strJX = JX();
        if (!TextUtils.isEmpty(strJX)) {
            aJY = "ANDROID_" + strJX;
            fO(strJX);
            return aJY;
        }
        return "ANDROID_";
    }

    public static String getLanguage() {
        return Locale.getDefault().getLanguage();
    }

    public static String getLocale() {
        Locale locale = Build.VERSION.SDK_INT >= 24 ? LocaleList.getDefault().get(0) : Locale.getDefault();
        if (locale == null) {
            locale = Locale.CHINESE;
        }
        return String.valueOf(locale);
    }

    public static String getOsVersion() {
        return Build.VERSION.RELEASE;
    }

    public static int getScreenHeight(Context context) {
        try {
            DisplayMetrics displayMetrics = new DisplayMetrics();
            ((WindowManager) context.getSystemService("window")).getDefaultDisplay().getMetrics(displayMetrics);
            return displayMetrics.heightPixels;
        } catch (Exception unused) {
            return 0;
        }
    }

    public static int getScreenWidth(Context context) {
        try {
            DisplayMetrics displayMetrics = new DisplayMetrics();
            ((WindowManager) context.getSystemService("window")).getDefaultDisplay().getMetrics(displayMetrics);
            return displayMetrics.widthPixels;
        } catch (Exception unused) {
            return 0;
        }
    }

    public static String u(Context context, boolean z) {
        if (at.IY() && !TextUtils.isEmpty(at.IZ())) {
            return at.IZ();
        }
        String strDb = db(context);
        return (TextUtils.isEmpty(strDb) && !z && TextUtils.isEmpty(com.kwad.sdk.core.f.a.ba(context))) ? ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).xy() : strDb;
    }
}
