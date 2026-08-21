package com.tkay.china.b;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.location.LocationManager;
import android.net.ConnectivityManager;
import android.net.Proxy;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.text.TextUtils;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.bianfeng.libuniverse.Device;
import com.kuaishou.weapon.p0.g;
import com.qihoo360.replugin.RePlugin;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;

public final class b {
    private static final String[] a = {"/su", "/su/bin/su", "/sbin/su", "/data/local/xbin/su", "/data/local/bin/su", "/data/local/su", "/system/xbin/su", "/system/bin/su", "/system/sd/xbin/su", "/system/bin/failsafe/su", "/system/bin/cufsdosck", "/system/xbin/cufsdosck", "/system/bin/cufsmgr", "/system/xbin/cufsmgr", "/system/bin/cufaevdd", "/system/xbin/cufaevdd", "/system/bin/conbb", "/system/xbin/conbb"};

    public static String a() {
        try {
            String[] strArr = a;
            int length = strArr.length;
            boolean z = false;
            int i = 0;
            while (true) {
                if (i >= length) {
                    break;
                }
                if (new File(strArr[i]).exists()) {
                    z = true;
                    break;
                }
                i++;
            }
            if (Build.TAGS != null) {
                if (Build.TAGS.contains("test-keys")) {
                    return "1";
                }
            }
            return z ? "1" : "2";
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String a(Context context) {
        int port;
        String property;
        try {
            if (Build.VERSION.SDK_INT >= 14) {
                property = System.getProperty("http.proxyHost");
                String property2 = System.getProperty("http.proxyPort");
                if (property2 == null) {
                    property2 = RePlugin.PROCESS_UI;
                }
                port = Integer.parseInt(property2);
            } else {
                String host = Proxy.getHost(context);
                port = Proxy.getPort(context);
                property = host;
            }
            return (TextUtils.isEmpty(property) || port == -1) ? "2" : "1";
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String b(Context context) {
        try {
            if (Build.VERSION.SDK_INT < 28) {
                return e(context);
            }
            boolean zIsProviderEnabled = ((LocationManager) context.getApplicationContext().getSystemService(RequestParameters.SUBRESOURCE_LOCATION)).isProviderEnabled("gps");
            PackageManager packageManager = context.getApplicationContext().getPackageManager();
            boolean z = false;
            boolean z2 = packageManager.checkPermission(g.g, context.getPackageName()) == 0 || packageManager.checkPermission(g.h, context.getPackageName()) == 0;
            if (zIsProviderEnabled && z2) {
                z = true;
            }
            return z ? e(context) : "";
        } catch (Throwable unused) {
            return "";
        }
    }

    private static boolean d(Context context) {
        boolean zIsProviderEnabled = ((LocationManager) context.getApplicationContext().getSystemService(RequestParameters.SUBRESOURCE_LOCATION)).isProviderEnabled("gps");
        PackageManager packageManager = context.getApplicationContext().getPackageManager();
        return zIsProviderEnabled && (packageManager.checkPermission(g.g, context.getPackageName()) == 0 || packageManager.checkPermission(g.h, context.getPackageName()) == 0);
    }

    private static String e(Context context) {
        try {
            WifiInfo connectionInfo = ((WifiManager) context.getApplicationContext().getSystemService(Device.NETWORN_WIFI)).getConnectionInfo();
            String ssid = connectionInfo == null ? "" : connectionInfo.getSSID();
            if ("<unknown ssid>".equalsIgnoreCase(ssid)) {
                ssid = ((ConnectivityManager) context.getApplicationContext().getSystemService("connectivity")).getActiveNetworkInfo().getExtraInfo();
            }
            return "<unknown ssid>".equalsIgnoreCase(ssid) ? "" : ssid;
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String[] c(Context context) {
        try {
            PackageInfo packageInfo = context.getApplicationContext().getPackageManager().getPackageInfo(context.getPackageName(), 0);
            StringBuilder sb = new StringBuilder();
            sb.append(packageInfo.firstInstallTime);
            StringBuilder sb2 = new StringBuilder();
            sb2.append(packageInfo.lastUpdateTime);
            return new String[]{sb.toString(), sb2.toString()};
        } catch (Throwable unused) {
            return null;
        }
    }

    public static String b() {
        try {
            String str = Build.CPU_ABI;
            if (TextUtils.isEmpty(Build.CPU_ABI2)) {
                return str;
            }
            return str + "|" + Build.CPU_ABI2;
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String c() {
        BufferedReader bufferedReader;
        FileReader fileReader = null;
        try {
            File file = new File("/proc/sys/kernel/random/boot_id");
            if (file.exists()) {
                FileReader fileReader2 = new FileReader(file);
                try {
                    bufferedReader = new BufferedReader(fileReader2);
                    String str = "";
                    while (true) {
                        try {
                            String line = bufferedReader.readLine();
                            if (line != null) {
                                str = str + line;
                            } else {
                                try {
                                    break;
                                } catch (Throwable unused) {
                                }
                            }
                        } catch (Throwable unused2) {
                            fileReader = fileReader2;
                            if (fileReader != null) {
                                try {
                                    fileReader.close();
                                } catch (Throwable unused3) {
                                }
                            }
                            if (bufferedReader != null) {
                                try {
                                    bufferedReader.close();
                                } catch (Throwable unused4) {
                                }
                            }
                            return "";
                        }
                    }
                    fileReader2.close();
                    try {
                        bufferedReader.close();
                    } catch (Throwable unused5) {
                    }
                    return str;
                } catch (Throwable unused6) {
                    bufferedReader = null;
                }
            }
        } catch (Throwable unused7) {
            bufferedReader = null;
        }
        return "";
    }

    public static String d() {
        try {
            File file = new File("/data/data");
            if (!file.exists()) {
                return "";
            }
            return (file.lastModified() / 1000) + ".000000000";
        } catch (Throwable unused) {
            return "";
        }
    }
}
