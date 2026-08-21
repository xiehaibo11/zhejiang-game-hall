package com.czhj.sdk.common.utils;

import android.app.ActivityManager;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.Signature;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.net.NetworkInfo;
import android.net.NetworkRequest;
import android.net.wifi.WifiManager;
import android.os.BatteryManager;
import android.os.Build;
import android.os.IBinder;
import android.os.StatFs;
import android.os.SystemClock;
import android.os.storage.StorageManager;
import android.os.storage.StorageVolume;
import android.provider.Settings;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.Display;
import android.view.WindowManager;
import com.bianfeng.libuniverse.Device;
import com.czhj.sdk.common.utils.ReflectionUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.kuaishou.weapon.p0.g;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.File;
import java.io.InputStreamReader;
import java.lang.reflect.Array;
import java.lang.reflect.Method;
import java.net.Inet4Address;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.net.SocketException;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Enumeration;
import java.util.Locale;
import kotlin.UByte;

public class DeviceUtils {
    private static final int b = 31457280;
    private static final String c = "getSimState";
    private static final String d = "getImei";
    private static final String e = "getLine1Number";
    private static final int f = 31457280;
    private static final int g = 104857600;
    private static final int h = -1;
    private static String i;
    private static String k;
    private static String l;
    private static String m;
    private static String n;
    private static boolean p;
    private static long q;
    private static long r;
    private static long s;
    private static long t;
    private static Network v;
    static final String[] a = {"/system/lib/libdroid4x.so", "/system/bin/mount.vboxsf", "/system/lib/vboxguest.ko", "/etc/mumu-configs", "/system/lib/vboxsf.ko", "/system/lib/vboxvideo.ko", "/data/.bluestacks.prop", "/system/bin/microvirt-vbox-sf", "/system/lib/tboxsf.ko", "/system/bin/androVM-vbox-sf", "/system/bin/microvirtd", "/system/bin/windroyed", "/system/lib/libdroid4x.so"};
    private static int j = 0;
    private static NetworkType o = NetworkType.UNKNOWN;
    private static ArrayList<Network> u = new ArrayList<>();

    public static class NetBroadcastReceiver extends BroadcastReceiver {
        @Override
        public void onReceive(Context context, Intent intent) {
            if (intent.getAction().equals("android.net.conn.CONNECTIVITY_CHANGE")) {
                DeviceUtils.updateNetworkType(context);
            }
        }
    }

    public enum NetworkType {
        UNKNOWN(0),
        ETHERNET(101),
        WIFI(100),
        MOBILE(1),
        MOBILE_2G(2),
        MOBILE_3G(3),
        MOBILE_4G(4),
        MOBILE_5G(5);

        private final int mId;

        NetworkType(int i) {
            this.mId = i;
        }

        private static NetworkType b(Context context, int i) {
            if (i != 0) {
                if (i == 1) {
                    return WIFI;
                }
                if (i != 2 && i != 3 && i != 4 && i != 5) {
                    return i != 9 ? UNKNOWN : ETHERNET;
                }
            }
            return DeviceUtils.getDataNetworkType(context);
        }

        public int getId() {
            return this.mId;
        }

        @Override
        public String toString() {
            return Integer.toString(this.mId);
        }
    }

    private static boolean a(int i2, int i3) {
        return (i2 & i3) != 0;
    }

    private static boolean a(Context context) {
        return context.checkCallingOrSelfPermission(g.a) == 0;
    }

    private static boolean a(String str) {
        Process processExec = null;
        try {
            processExec = Runtime.getRuntime().exec("ls -l " + str);
            String line = new BufferedReader(new InputStreamReader(processExec.getInputStream())).readLine();
            if (line != null && line.length() >= 4) {
                char cCharAt = line.charAt(3);
                if (cCharAt == 's' || cCharAt == 'x') {
                    if (processExec != null) {
                        processExec.destroy();
                    }
                    return true;
                }
            }
            if (processExec == null) {
                return false;
            }
        } catch (Throwable unused) {
            if (processExec == null) {
                return false;
            }
        }
        processExec.destroy();
        return false;
    }

    public static long diskCacheSizeBytes(File file, long j2) {
        try {
            StatFs statFs = new StatFs(file.getAbsolutePath());
            j2 = (((long) statFs.getBlockCount()) * ((long) statFs.getBlockSize())) / 50;
        } catch (IllegalArgumentException unused) {
            SigmobLog.d("Unable to calculate 2% of available disk space, defaulting to minimum");
        }
        return Math.max(Math.min(j2, 104857600L), 31457280L);
    }

    public static NetworkType getActiveNetworkType() {
        return o;
    }

    public static String getAndroidId(Context context) {
        if (m == null && context != null) {
            m = "";
            try {
                SigmobLog.d("private : AndroidId");
                m = Settings.Secure.getString(context.getContentResolver(), "android_id");
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
            }
        }
        return m;
    }

    public static String getApkSha1OrMd5(Context context, String str) {
        Signature signature;
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(context.getPackageName(), 64);
            if (packageInfo == null || packageInfo.signatures == null || packageInfo.signatures.length <= 0 || (signature = packageInfo.signatures[0]) == null) {
                return null;
            }
            byte[] byteArray = signature.toByteArray();
            MessageDigest messageDigest = MessageDigest.getInstance(str);
            if (messageDigest == null) {
                return null;
            }
            byte[] bArrDigest = messageDigest.digest(byteArray);
            StringBuilder sb = new StringBuilder();
            for (byte b2 : bArrDigest) {
                sb.append(Integer.toHexString((b2 & UByte.MAX_VALUE) | 256).substring(1, 3).toUpperCase());
                sb.append(Constants.COLON_SEPARATOR);
            }
            return sb.substring(0, sb.length() - 1);
        } catch (Exception e2) {
            SigmobLog.e(e2.getMessage());
            return null;
        }
    }

    public static int getAppLaunchCount(Context context, String str) {
        try {
            Intent launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(str);
            SigmobLog.d("getAppLaunchCount==" + str);
            if (launchIntentForPackage == null) {
                return 0;
            }
            ComponentName component = launchIntentForPackage.getComponent();
            SigmobLog.d("getAppLaunchCount==" + str);
            Object objInvoke = Class.forName("com.android.internal.app.IUsageStats$Stub").getMethod("asInterface", IBinder.class).invoke(null, Class.forName("android.os.ServiceManager").getMethod("getService", String.class).invoke(null, "usagestats"));
            Object objInvoke2 = objInvoke.getClass().getMethod("getPkgUsageStats", ComponentName.class).invoke(objInvoke, component);
            SigmobLog.d("getAppLaunchCount==" + str);
            if (objInvoke2 == null) {
                return 0;
            }
            Class<?> cls = Class.forName("com.android.internal.os.PkgUsageStats");
            SigmobLog.d("getAppLaunchCount==" + str);
            return cls.getDeclaredField("launchCount").getInt(objInvoke2);
        } catch (Exception e2) {
            e2.printStackTrace();
            return 0;
        }
    }

    public static float getBatteryLevel(Context context) {
        BatteryManager batteryManager;
        if (Build.VERSION.SDK_INT < 21 || (batteryManager = (BatteryManager) context.getSystemService("batterymanager")) == null) {
            return 0.0f;
        }
        return batteryManager.getIntProperty(4) / 100.0f;
    }

    public static boolean getBatterySaveEnable(Context context) {
        BatteryManager batteryManager;
        return Build.VERSION.SDK_INT >= 21 && (batteryManager = (BatteryManager) context.getSystemService("batterymanager")) != null && batteryManager.getIntProperty(4) < 16;
    }

    public static int getBatteryState(Context context) {
        BatteryManager batteryManager;
        if (Build.VERSION.SDK_INT < 21 || (batteryManager = (BatteryManager) context.getSystemService("batterymanager")) == null) {
            return 0;
        }
        int intProperty = Build.VERSION.SDK_INT >= 26 ? batteryManager.getIntProperty(6) : 0;
        if (intProperty == 2) {
            return 2;
        }
        if (intProperty == 3 || intProperty == 4) {
            return 1;
        }
        return intProperty != 5 ? 0 : 3;
    }

    public static String getBlueToothName(Context context) {
        if (TextUtils.isEmpty(n)) {
            try {
                n = Settings.Secure.getString(context.getContentResolver(), "bluetooth_name");
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
            }
        }
        return n;
    }

    public static long getBootSystemTime() {
        return System.currentTimeMillis() - SystemClock.elapsedRealtime();
    }

    public static String getCPUInfo() {
        try {
            return Build.VERSION.SDK_INT >= 21 ? Build.SUPPORTED_ABIS[0] : Build.CPU_ABI;
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return null;
        }
    }

    public static String getCell_ip() {
        try {
            Enumeration<NetworkInterface> networkInterfaces = NetworkInterface.getNetworkInterfaces();
            while (networkInterfaces.hasMoreElements()) {
                Enumeration<InetAddress> inetAddresses = networkInterfaces.nextElement().getInetAddresses();
                while (inetAddresses.hasMoreElements()) {
                    InetAddress inetAddressNextElement = inetAddresses.nextElement();
                    if (!inetAddressNextElement.isLoopbackAddress() && (inetAddressNextElement instanceof Inet4Address)) {
                        return inetAddressNextElement.getHostAddress();
                    }
                }
            }
            return "0.0.0.0";
        } catch (SocketException e2) {
            e2.printStackTrace();
            return "0.0.0.0";
        } catch (Exception e3) {
            e3.printStackTrace();
            return "0.0.0.0";
        }
    }

    public static ConnectivityManager getConnectivityManager(Context context) {
        if (context != null) {
            return (ConnectivityManager) context.getSystemService("connectivity");
        }
        return null;
    }

    public static NetworkType getDataNetworkType(Context context) {
        int subtype;
        NetworkInfo activeNetworkInfo;
        SigmobLog.d("getDataNetworkType ");
        TelephonyManager telephonyManager = getTelephonyManager(context);
        if (telephonyManager == null) {
            subtype = 0;
        } else if (Build.VERSION.SDK_INT >= 24) {
            subtype = telephonyManager.getDataNetworkType();
        } else {
            try {
                subtype = telephonyManager.getNetworkType();
            } catch (Exception unused) {
                subtype = 0;
            }
        }
        ConnectivityManager connectivityManager = getConnectivityManager(context);
        if (subtype == 0 && connectivityManager != null && (activeNetworkInfo = connectivityManager.getActiveNetworkInfo()) != null) {
            subtype = activeNetworkInfo.getSubtype();
        }
        SigmobLog.d("getDataNetworkType " + subtype);
        if (subtype == 20) {
            return NetworkType.MOBILE_5G;
        }
        switch (subtype) {
            case 1:
            case 2:
            case 4:
            case 7:
            case 11:
                return NetworkType.MOBILE_2G;
            case 3:
            case 5:
            case 6:
            case 8:
            case 9:
            case 10:
            case 12:
            case 14:
            case 15:
                return NetworkType.MOBILE_3G;
            case 13:
                return NetworkType.MOBILE_4G;
            default:
                return NetworkType.MOBILE;
        }
    }

    public static float getDensityDpi(Context context) {
        try {
            return context.getResources().getDisplayMetrics().densityDpi;
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return 0.0f;
        }
    }

    public static String getDeviceBrand() {
        return Build.BRAND;
    }

    public static String getDeviceDispaly() {
        return Build.DISPLAY;
    }

    public static Locale getDeviceLocale(Context context) {
        try {
            return context.getResources().getConfiguration().locale;
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return null;
        }
    }

    public static String getDeviceManufacturer() {
        return Build.MANUFACTURER;
    }

    public static String getDeviceModel() {
        return Build.MODEL;
    }

    public static String getDeviceName(Context context) {
        if (Build.VERSION.SDK_INT < 17) {
            return getBlueToothName(context);
        }
        try {
            return Settings.Global.getString(context.getContentResolver(), "device_name");
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return null;
        }
    }

    public static int getDeviceOSLevel() {
        return Build.VERSION.SDK_INT;
    }

    public static String getDeviceOsVersion() {
        return Build.VERSION.RELEASE;
    }

    public static int getDeviceScreenHeightDip(Context context) {
        if (context == null) {
            return 0;
        }
        return Dips.screenHeightAsIntDips(context);
    }

    public static int getDeviceScreenRealHeightDip(Context context) {
        if (context == null) {
            return 0;
        }
        return Dips.pixelsToIntDips(getRealMetrics(context).heightPixels, context);
    }

    public static int getDeviceScreenRealWidthDip(Context context) {
        if (context == null) {
            return 0;
        }
        return Dips.pixelsToIntDips(getRealMetrics(context).widthPixels, context);
    }

    public static int getDeviceScreenWidthDip(Context context) {
        return Dips.screenWidthAsIntDips(context);
    }

    public static String getDeviceSerial() {
        return Build.SERIAL;
    }

    public static String getDeviceType(Context context) {
        return isTablet(context) ? "pad" : "phone";
    }

    public static DisplayMetrics getDisplayMetrics(Context context) {
        try {
            return context.getResources().getDisplayMetrics();
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return null;
        }
    }

    public static String getNetworkOperator(Context context) {
        TelephonyManager telephonyManager = getTelephonyManager(context);
        if (telephonyManager != null) {
            return (telephonyManager.getPhoneType() == 2 && telephonyManager.getSimState() == 5) ? telephonyManager.getSimOperator() : telephonyManager.getNetworkOperator();
        }
        return null;
    }

    public static String getNetworkOperatorForUrl(Context context) {
        return getNetworkOperator(context);
    }

    public static String getNetworkOperatorName(Context context) {
        TelephonyManager telephonyManager = getTelephonyManager(context);
        if (telephonyManager != null) {
            return (telephonyManager.getPhoneType() == 2 && telephonyManager.getSimState() == 5) ? telephonyManager.getSimOperatorName() : telephonyManager.getNetworkOperatorName();
        }
        return null;
    }

    public static int getOrientationInt(Context context) {
        return context.getResources().getConfiguration().orientation;
    }

    public static String getProperty(String str) {
        try {
            Object objInvoke = Class.forName("android.os.SystemProperties").getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(null, str);
            if (objInvoke != null) {
                return (String) objInvoke;
            }
            return null;
        } catch (Throwable unused) {
            return null;
        }
    }

    public static DisplayMetrics getRealMetrics(Context context) {
        WindowManager windowManger = getWindowManger(context);
        DisplayMetrics displayMetrics = new DisplayMetrics();
        Display defaultDisplay = windowManger.getDefaultDisplay();
        if (Build.VERSION.SDK_INT >= 17) {
            defaultDisplay.getRealMetrics(displayMetrics);
        } else {
            try {
                Class.forName("android.view.Display").getMethod("getRealMetrics", DisplayMetrics.class).invoke(defaultDisplay, displayMetrics);
            } catch (Exception e2) {
                SigmobLog.e(e2.getMessage());
            }
        }
        return displayMetrics;
    }

    public static String getRotation(Context context) {
        WindowManager windowManger = getWindowManger(context);
        if (windowManger == null) {
            return "0";
        }
        int rotation = windowManger.getDefaultDisplay().getRotation();
        return rotation != 1 ? rotation != 2 ? rotation != 3 ? "0" : "270" : "180" : "90";
    }

    public static String getSDCardPath(Context context) {
        StorageManager storageManager = (StorageManager) context.getSystemService("storage");
        if (Build.VERSION.SDK_INT >= 24) {
            for (StorageVolume storageVolume : storageManager.getStorageVolumes()) {
                if (storageVolume.isRemovable()) {
                    try {
                        return (String) storageVolume.getClass().getMethod("getPath", new Class[0]).invoke(storageVolume, new Object[0]);
                    } catch (Exception e2) {
                        SigmobLog.e(e2.getMessage());
                    }
                }
            }
            return null;
        }
        try {
            Method method = storageManager.getClass().getMethod("getVolumeList", new Class[0]);
            Class<?> cls = Class.forName("android.os.storage.StorageVolume");
            Method method2 = cls.getMethod("getPath", new Class[0]);
            Method method3 = cls.getMethod("isRemovable", new Class[0]);
            Object objInvoke = method.invoke(storageManager, new Object[0]);
            int length = Array.getLength(objInvoke);
            for (int i2 = 0; i2 < length; i2++) {
                try {
                    Object obj = Array.get(objInvoke, i2);
                    Object objInvoke2 = method3.invoke(obj, new Object[0]);
                    if ((objInvoke2 instanceof Boolean) && ((Boolean) objInvoke2).booleanValue()) {
                        Object objInvoke3 = method2.invoke(obj, new Object[0]);
                        if (objInvoke3 instanceof String) {
                            return (String) objInvoke3;
                        }
                        continue;
                    }
                } catch (Throwable unused) {
                }
            }
            return null;
        } catch (Throwable unused2) {
            return null;
        }
    }

    public static long getSysteTotalMemorySize(Context context) {
        try {
            if (Build.VERSION.SDK_INT < 16) {
                return 0L;
            }
            ActivityManager activityManager = (ActivityManager) context.getSystemService("activity");
            ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
            if (activityManager == null) {
                return 0L;
            }
            activityManager.getMemoryInfo(memoryInfo);
            return memoryInfo.totalMem;
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return 0L;
        }
    }

    public static TelephonyManager getTelephonyManager(Context context) {
        if (context == null) {
            return null;
        }
        try {
            if (!isCanUsePhoneState(context)) {
                return null;
            }
        } catch (Throwable unused) {
        }
        return (TelephonyManager) context.getSystemService("phone");
    }

    public static WifiManager getWifiManager(Context context) {
        if (context == null || !isCanUseWifiState(context)) {
            return null;
        }
        return (WifiManager) context.getSystemService(Device.NETWORN_WIFI);
    }

    public static WindowManager getWindowManger(Context context) {
        return (WindowManager) context.getSystemService("window");
    }

    public static boolean isCanRetryIMEI() {
        boolean z = System.currentTimeMillis() - q > 30000;
        if (z) {
            q = System.currentTimeMillis();
        }
        SigmobLog.d("isCanRetryIMEI status " + z);
        return z;
    }

    public static boolean isCanRetryLocation() {
        boolean z = System.currentTimeMillis() - s > 36000;
        if (z) {
            s = System.currentTimeMillis();
        }
        SigmobLog.d("isCanRetryLocation status " + z);
        return z;
    }

    public static boolean isCanRetryWIFI() {
        boolean z = System.currentTimeMillis() - t > 30000;
        if (z) {
            t = System.currentTimeMillis();
        }
        SigmobLog.d("isCanRetryWIFI status " + z);
        return z;
    }

    public static boolean isCanUseLocation(Context context) {
        boolean z = context.checkCallingOrSelfPermission(g.h) == 0 || context.checkCallingOrSelfPermission(g.g) == 0;
        SigmobLog.d("isCanUseLocation status " + z);
        return z;
    }

    public static boolean isCanUsePhoneState(Context context) {
        boolean z = context.checkCallingOrSelfPermission("android.permission.READ_PHONE_STATE") == 0;
        SigmobLog.d("isCanUsePhoneState status " + z);
        return z;
    }

    public static boolean isCanUseWifiState(Context context) {
        boolean z = context.checkCallingOrSelfPermission(g.d) == 0;
        SigmobLog.d("isCanUseWifiState status " + z);
        return z;
    }

    public static boolean isCanUseWriteExternal(Context context) {
        boolean z = context.checkCallingOrSelfPermission("android.permission.WRITE_EXTERNAL_STORAGE") == 0;
        SigmobLog.d("isCanUseWriteExternal status " + z);
        return z;
    }

    public static boolean isEmulator() {
        int i2 = j;
        if (i2 > 0) {
            return i2 > 3;
        }
        try {
            String property = getProperty("gsm.version.baseband");
            if (TextUtils.isEmpty(property) || property.contains("1.0.0.0")) {
                j++;
            }
            String property2 = getProperty("ro.build.flavor");
            if (TextUtils.isEmpty(property2)) {
                j++;
            } else if (property2.contains("vbox") || property2.contains("sdk_gphone")) {
                j += 10;
            }
            String property3 = getProperty("ro.product.board");
            if (TextUtils.isEmpty(property3)) {
                j++;
            } else if (property3.contains("android") || property3.contains("goldfish")) {
                j += 10;
            }
            String property4 = getProperty("ro.board.platform");
            if (TextUtils.isEmpty(property4) || property4.contains("android")) {
                j++;
            }
            String property5 = getProperty("ro.hardware");
            if (property5 == null) {
                j++;
            } else if (property5.toLowerCase().contains("ttvm") || property5.toLowerCase().contains("nox")) {
                j += 10;
            }
            for (String str : a) {
                if (new File(str).exists()) {
                    SigmobLog.e("find emulator " + str);
                    j = j + 10;
                }
            }
        } catch (Throwable unused) {
        }
        return j > 3;
    }

    public static boolean isNetworkConnected() {
        return p;
    }

    public static boolean isNetworkValid(NetworkCapabilities networkCapabilities) {
        if (networkCapabilities == null || Build.VERSION.SDK_INT < 21) {
            return false;
        }
        return networkCapabilities.hasTransport(1) || networkCapabilities.hasTransport(0) || networkCapabilities.hasTransport(3) || networkCapabilities.hasTransport(4) || (Build.VERSION.SDK_INT >= 23 ? networkCapabilities.hasCapability(16) : false);
    }

    public static boolean isRoot() {
        return (new File("/system/bin/su").exists() && a("/system/bin/su")) || (new File("/system/xbin/su").exists() && a("/system/xbin/su"));
    }

    public static boolean isTablet(Context context) {
        return (context.getResources().getConfiguration().screenLayout & 15) >= 3;
    }

    public static int memoryCacheSizeBytes(Context context) {
        ActivityManager activityManager = (ActivityManager) context.getSystemService("activity");
        if (activityManager == null) {
            return 0;
        }
        long memoryClass = activityManager.getMemoryClass();
        try {
            if (a(context.getApplicationInfo().flags, ApplicationInfo.class.getDeclaredField("FLAG_LARGE_HEAP").getInt(null))) {
                memoryClass = ((Integer) new ReflectionUtil.MethodBuilder(activityManager, "getLargeMemoryClass").execute()).intValue();
            }
        } catch (Throwable unused) {
            SigmobLog.d("Unable to reflectively determine large heap size.");
        }
        return (int) Math.min(31457280L, (memoryClass / 8) * 1024 * 1024);
    }

    public static void registerNetworkChange(final Context context) {
        if (Build.VERSION.SDK_INT < 21) {
            context.registerReceiver(new NetBroadcastReceiver(), new IntentFilter("android.net.conn.CONNECTIVITY_CHANGE"));
            return;
        }
        NetworkRequest networkRequestBuild = new NetworkRequest.Builder().addCapability(12).addTransportType(0).addTransportType(1).build();
        ConnectivityManager connectivityManager = getConnectivityManager(context);
        if (connectivityManager == null) {
            return;
        }
        connectivityManager.registerNetworkCallback(networkRequestBuild, new ConnectivityManager.NetworkCallback() {
            @Override
            public void onAvailable(Network network) {
                SigmobLog.d("updateNetworkType registerNetworkCallback  onAvailable");
                super.onAvailable(network);
                DeviceUtils.u.add(network);
                DeviceUtils.updateNetworkType(context);
            }

            @Override
            public void onCapabilitiesChanged(Network network, NetworkCapabilities networkCapabilities) {
                super.onCapabilitiesChanged(network, networkCapabilities);
                DeviceUtils.updateNetworkType(context);
            }

            @Override
            public void onLost(Network network) {
                SigmobLog.d("updateNetworkType registerNetworkCallback  onLost" + network);
                super.onLost(network);
                NetworkType unused = DeviceUtils.o = NetworkType.UNKNOWN;
                boolean unused2 = DeviceUtils.p = false;
                try {
                    Network unused3 = DeviceUtils.v = network;
                    DeviceUtils.u.remove(network);
                    DeviceUtils.updateNetworkType(context);
                } catch (Throwable unused4) {
                }
            }
        });
    }

    public static void resetRetryIMEI() {
        q = 0L;
    }

    public static void updateNetworkType(Context context) {
        NetworkType networkTypeB;
        NetworkCapabilities networkCapabilities;
        try {
            if (a(context)) {
                if (Build.VERSION.SDK_INT >= 23) {
                    Network activeNetwork = getConnectivityManager(context).getActiveNetwork();
                    NetworkCapabilities networkCapabilities2 = null;
                    if (activeNetwork == null || activeNetwork == v) {
                        SigmobLog.d(" updateNetworkType activeNetwork is null");
                        for (int size = u.size() - 1; size >= 0; size--) {
                            networkCapabilities2 = getConnectivityManager(context).getNetworkCapabilities(u.get(size));
                            if (networkCapabilities2 != null) {
                                break;
                            }
                        }
                        networkCapabilities = networkCapabilities2;
                    } else {
                        SigmobLog.d(" updateNetworkType activeNetwork " + activeNetwork);
                        networkCapabilities = getConnectivityManager(context).getNetworkCapabilities(activeNetwork);
                    }
                    if (networkCapabilities == null) {
                        return;
                    }
                    SigmobLog.d("updateNetworkType " + networkCapabilities);
                    p = isNetworkValid(networkCapabilities);
                    SigmobLog.d("updateNetworkType misNetworkConnected " + p);
                    networkTypeB = (networkCapabilities.hasCapability(12) && networkCapabilities.hasTransport(1)) ? NetworkType.WIFI : (networkCapabilities.hasCapability(12) && networkCapabilities.hasTransport(0)) ? getDataNetworkType(context) : NetworkType.UNKNOWN;
                } else {
                    NetworkInfo activeNetworkInfo = getConnectivityManager(context).getActiveNetworkInfo();
                    if (activeNetworkInfo != null) {
                        p = activeNetworkInfo.isAvailable();
                    }
                    networkTypeB = NetworkType.b(context, activeNetworkInfo != null ? activeNetworkInfo.getType() : -1);
                }
                o = networkTypeB;
            }
        } catch (Exception unused) {
        }
    }
}
