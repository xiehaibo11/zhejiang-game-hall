package com.bianfeng.libuniverse;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.provider.Settings;
import android.support.v4.os.EnvironmentCompat;
import android.telephony.TelephonyManager;
import android.util.Log;
import java.io.BufferedReader;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.RandomAccessFile;
import java.math.BigInteger;
import java.net.Inet4Address;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.net.SocketException;
import java.security.MessageDigest;
import java.util.Enumeration;
import java.util.List;
import java.util.UUID;

public class Device {
    public static final String NETWORN_2G = "2G";
    public static final String NETWORN_3G = "3G";
    public static final String NETWORN_4G = "4G";
    public static final String NETWORN_MOBILE = "mobile";
    public static final String NETWORN_NONE = "none";
    public static final String NETWORN_WIFI = "wifi";
    static int mBatterylevel = 100;
    static int mBatteryplugged = 0;
    static int mBatteryscale = 100;
    static int mBatterystatus = 1;
    private static String sUuid = "";
    private static String sUuidFIle = "/INSTALLATION";
    private BroadcastReceiver mBroadcastReceiver;

    static {
    }

    public static void createNotification(String r0, int r1, int r2) {
    }

    public Device() {
        this.mBroadcastReceiver = new 1(this);
    }

    public static String getOsName() {
        return "Android " + Build.VERSION.RELEASE;
    }

    public static String getSystemVersion() {
        return Build.VERSION.RELEASE;
    }

    public static String getDeviceName() {
        return String.valueOf(Build.BRAND) + "#" + Build.MODEL;
    }

    public static int getOsVersion() {
        return Build.VERSION.SDK_INT;
    }

    public static String getIp() {
        Enumeration<NetworkInterface> r0 = NetworkInterface.getNetworkInterfaces();     // Catch: Exception -> L14
    L4:
        if (r0.hasMoreElements() == false) goto L27;
        Enumeration<InetAddress> r1 = r0.nextElement().getInetAddresses();     // Catch: Exception -> L14
    L7:
        if (r1.hasMoreElements() == false) goto L4;
        InetAddress r2 = r1.nextElement();     // Catch: Exception -> L14
        if (r2.isLoopbackAddress() == true) goto L7;
        if ((r2 instanceof Inet4Address) == false) goto L7;
        return r2.getHostAddress();
    L27:
        return "nan";
    L14:
        e = move-exception;
        e.printStackTrace();
        return "nan";
    }

    public static String getUUID() {
        if (sUuid.isEmpty() == false) goto L20;
        sUuid = readUuidFile();     // Catch: IOException -> L17
        if (sUuid.isEmpty() == false) goto L11;
        StringBuffer r1 = new StringBuffer();     // Catch: IOException -> L17
        r1.append(getSerial());     // Catch: IOException -> L17
        r1.append(getDeviceId());     // Catch: IOException -> L17
        r1.append(getMac());     // Catch: IOException -> L17
        if (r1.length() > 0) goto L9;
        r1.append(UUID.randomUUID().toString().replace("-", ""));     // Catch: IOException -> L17
    L9:
        sUuid = getMD5(r1.toString());     // Catch: IOException -> L17
    L11:
        if (sUuid.isEmpty() == true) goto L20;
        writeUuidFile();     // Catch: IOException -> L14
    L14:
        e = move-exception;
        sUuid = "";     // Catch: IOException -> L17
        e.printStackTrace();     // Catch: IOException -> L17
    L17:
        e = move-exception;
        sUuid = "";
        e.printStackTrace();
    L20:
        return sUuid;
    }

    private static String getSerial() {
        String r0 = Build.SERIAL;
        if (r0.equals(EnvironmentCompat.MEDIA_UNKNOWN) == true) goto L5;
        return r0;
    L5:
        return "";
    }

    private static String getDeviceId() {
        TelephonyManager r0 = (TelephonyManager) Universe.getContext().getSystemService("phone");
        if (r0 != null) goto L10;
        return "";
    L10:
        String r02 = r0.getDeviceId();     // Catch: SecurityException -> L9
        if (r02 == null) goto L12;
        return r02;
    L12:
        return "";
    L13:
        return "";
    }

    private static String getMac() {
        StringBuffer r0 = new StringBuffer();
        NetworkInterface r2 = NetworkInterface.getByName("eth1");     // Catch: SocketException -> L16
        if (r2 != null) goto L6;
        r2 = NetworkInterface.getByName("wlan0");     // Catch: SocketException -> L16
    L6:
        if (r2 == null) goto L20;
        byte[] r22 = r2.getHardwareAddress();     // Catch: SocketException -> L16
        int r3 = r22.length;     // Catch: SocketException -> L16
        int r5 = 0;
    L9:
        if (r5 >= r3) goto L12;
        r0.append(String.format("%02X", new Object[]{Byte.valueOf(r22[r5])}));     // Catch: SocketException -> L16
        r5 = r5 + 1;     // Catch: SocketException -> L16
        goto L9
    L12:
        if (r0.length() <= 0) goto L14;
        r0.deleteCharAt(r0.length() - 1);     // Catch: SocketException -> L16
    L14:
        return r0.toString();
    L20:
        return null;
    L21:
        return null;
    }

    private static String getMD5(String r2) {
        MessageDigest r0 = MessageDigest.getInstance("MD5");     // Catch: Exception -> L4
        r0.update(r2.getBytes());     // Catch: Exception -> L4
        return new BigInteger(1, r0.digest()).toString(16);
    L4:
        return "";
    }

    private static String readUuidFile() throws IOException {
        RandomAccessFile r0 = new RandomAccessFile(Universe.getContext().getFilesDir() + sUuidFIle, "r");
        byte[] r1 = new byte[(int) r0.length()];
        r0.readFully(r1);
        r0.close();
        return new String(r1);
    }

    private static void writeUuidFile() throws IOException {
        FileOutputStream r0 = new FileOutputStream(Universe.getContext().getFilesDir() + sUuidFIle);
        r0.write(sUuid.getBytes());
        r0.close();
    }

    private static String getAppVersion() {
        Context r0 = Universe.getContext();     // Catch: PackageManager.NameNotFoundException -> L4
        return Integer.toString(r0.getPackageManager().getPackageInfo(r0.getPackageName(), 0).versionCode);
    L4:
        e = move-exception;
        e.printStackTrace();
        return "";
    }

    private static String getPackageName() {
        Context r0 = Universe.getContext();
        if (r0 != null) goto L5;
        return "";
    L5:
        return r0.getPackageName();
    }

    public static String getNetEnvName() {
        ConnectivityManager r0 = (ConnectivityManager) Universe.getContext().getSystemService("connectivity");
        if (r0 != null) goto L5;
        return NETWORN_NONE;
    L5:
        NetworkInfo r2 = r0.getActiveNetworkInfo();
        if (r2 != null) goto L8;
    L45:
        return NETWORN_NONE;
    L8:
        if (r2.isAvailable() == false) goto L45;
        NetworkInfo r3 = r0.getNetworkInfo(1);
        if (r3 == null) goto L20;
        NetworkInfo.State r32 = r3.getState();
        if (r32 == null) goto L20;
        if (r32 != NetworkInfo.State.CONNECTED) goto L17;
        return NETWORN_WIFI;
    L17:
        if (r32 != NetworkInfo.State.CONNECTING) goto L20;
        return NETWORN_WIFI;
    L20:
        NetworkInfo r02 = r0.getNetworkInfo(0);
        if (r02 == null) goto L45;
        NetworkInfo.State r33 = r02.getState();
        String r03 = r02.getSubtypeName();
        if (r33 == null) goto L45;
        if (r33 == NetworkInfo.State.CONNECTED) goto L29;
        if (r33 != NetworkInfo.State.CONNECTING) goto L45;
    L29:
        switch(r2.getSubtype()) {
            case 1: goto L40;
            case 2: goto L40;
            case 3: goto L39;
            case 4: goto L40;
            case 5: goto L39;
            case 6: goto L39;
            case 7: goto L40;
            case 8: goto L39;
            case 9: goto L39;
            case 10: goto L39;
            case 11: goto L40;
            case 12: goto L39;
            case 13: goto L37;
            case 14: goto L39;
            case 15: goto L39;
            default: goto L31;
        };
    L37:
        return NETWORN_4G;
    L39:
        return NETWORN_3G;
    L40:
        return NETWORN_2G;
    L31:
        if (r03.equalsIgnoreCase("TD-SCDMA") == false) goto L33;
    L44:
        return NETWORN_3G;
    L33:
        if (r03.equalsIgnoreCase("WCDMA") == true) goto L44;
        if (r03.equalsIgnoreCase("CDMA2000") == true) goto L44;
        return NETWORN_MOBILE;
    }

    public static int ping(String r5, int r6) {
        Log.i("universe", "Start ping ...");
        Process r52 = Runtime.getRuntime().exec("/system/bin/ping -c " + Integer.toString(r6) + " " + r5);     // Catch: IOException -> L15 InterruptedException -> L18
        if (r52.waitFor() == 0) goto L6;
        return -1;
    L6:
        BufferedReader r62 = new BufferedReader(new InputStreamReader(r52.getInputStream()));     // Catch: IOException -> L15 InterruptedException -> L18
    L7:
        String r53 = r62.readLine();     // Catch: IOException -> L15 InterruptedException -> L18
        if (r53 == null) goto L13;
        if (r53.length() <= 0) goto L7;
        if (r53.contains("/avg") == false) goto L7;
    L13:
        String r54 = r53.substring(r53.indexOf("=") + 1, r53.length()).trim();
        String r55 = r54.substring(r54.indexOf("/") + 1, r54.length()).trim();
        Log.i("universe", "avgRtt = " + Double.valueOf(r55.substring(0, r55.indexOf("/"))).intValue());
        return -1;
    L15:
        e = move-exception;
        e.printStackTrace();
        return -1;
    L18:
        e = move-exception;
        e.printStackTrace();
        return -1;
    }

    public static String getMacAddress() {
        return ((WifiManager) Universe.getContext().getSystemService(NETWORN_WIFI)).getConnectionInfo().getMacAddress().replace(":", "");
    L4:
        return "1";
    }

    public static String getIosIDFA() {
        String r0 = ((TelephonyManager) Universe.getContext().getSystemService("phone")).getDeviceId();
        if (r0 != null) goto L5;
    L6:
        r0 = getMacAddress();
    L7:
        if (r0 == null) goto L13;
        if (r0.length() <= 0) goto L13;
        if (r0.equals("1") == true) goto L13;
        return r0;
    L13:
        return Settings.Secure.getString(Universe.getContext().getContentResolver(), "android_id");
    L5:
        if (r0.length() > 0) goto L7;
        goto L6
    }

    public static String getCarrierName() {
        TelephonyManager r0 = (TelephonyManager) Universe.getContext().getSystemService("phone");
        if (r0 != null) goto L5;
    L40:
        return "";
    L5:
        if (r0.getPhoneType() != 0) goto L8;
        return "";
    L8:
        if (1 != r0.getSimState()) goto L10;
        return "";
    L10:
        String r2 = r0.getSubscriberId();
        if (r2 == null) goto L13;
        r2 = r0.getSimOperator();
    L13:
        if (r2 == null) goto L40;
        if (r2.startsWith("46000") == false) goto L17;
        return "中国移动";
    L17:
        if (r2.startsWith("46002") == false) goto L19;
        return "中国移动";
    L19:
        if (r2.startsWith("46007") == false) goto L21;
        return "中国移动";
    L21:
        if (r2.startsWith("46020") == false) goto L24;
        return "中国移动";
    L24:
        if (r2.startsWith("46001") == false) goto L26;
        return "中国联通";
    L26:
        if (r2.startsWith("46006") == false) goto L29;
        return "中国联通";
    L29:
        if (r2.startsWith("46003") == false) goto L31;
        return "中国电信";
    L31:
        if (r2.startsWith("46005") == false) goto L33;
        return "中国电信";
    L33:
        if (r2.startsWith("46011") == false) goto L40;
        return "中国电信";
    }

    public static int[] getBatteryState() {
        return new int[]{mBatterylevel, mBatteryscale, mBatterystatus, mBatteryplugged};
    }

    public static boolean isHaveApp(String r4) {
        List<PackageInfo> r0 = Universe.getContext().getPackageManager().getInstalledPackages(0);
        int r2 = 0;
    L4:
        if (r2 >= r0.size()) goto L10;
        if (r0.get(r2).packageName.equalsIgnoreCase(r4) == true) goto L7;
        r2 = r2 + 1;
        goto L4
    L7:
        return true;
    L10:
        return false;
    }

    public static void startApp(String r1) {
        if (isHaveApp(r1) == false) goto L6;
        Intent r12 = Universe.getContext().getPackageManager().getLaunchIntentForPackage(r1);
        Universe.getContext().startActivity(r12);
        return;
    }

    public static String getHardwareCode() {
        return getUUID();
    }
}
