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
import com.huawei.hms.framework.common.ContainerUtils;
import com.xiaomi.mipush.sdk.Constants;
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
    private BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() {
        @Override
        public void onReceive(Context context, Intent intent) {
            if (intent.getAction().equals("android.intent.action.BATTERY_CHANGED")) {
                Device.mBatterylevel = intent.getIntExtra("level", 0);
                Device.mBatteryscale = intent.getIntExtra("scale", 0);
                Device.mBatterystatus = intent.getIntExtra("status", 0);
                Device.mBatteryplugged = intent.getIntExtra("plugged", 0);
            }
        }
    };

    public static void createNotification(String str, int i, int i2) {
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
            return "nan";
        } catch (Exception e) {
            e.printStackTrace();
            return "nan";
        }
    }

    public static String getUUID() {
        if (sUuid.isEmpty()) {
            try {
                sUuid = readUuidFile();
                if (sUuid.isEmpty()) {
                    StringBuffer stringBuffer = new StringBuffer();
                    stringBuffer.append(getSerial());
                    stringBuffer.append(getDeviceId());
                    stringBuffer.append(getMac());
                    if (stringBuffer.length() <= 0) {
                        stringBuffer.append(UUID.randomUUID().toString().replace(Constants.ACCEPT_TIME_SEPARATOR_SERVER, ""));
                    }
                    sUuid = getMD5(stringBuffer.toString());
                }
                if (!sUuid.isEmpty()) {
                    try {
                        writeUuidFile();
                    } catch (IOException e) {
                        sUuid = "";
                        e.printStackTrace();
                    }
                }
            } catch (IOException e2) {
                sUuid = "";
                e2.printStackTrace();
            }
        }
        return sUuid;
    }

    private static String getSerial() {
        String str = Build.SERIAL;
        return !str.equals(EnvironmentCompat.MEDIA_UNKNOWN) ? str : "";
    }

    private static String getDeviceId() {
        TelephonyManager telephonyManager = (TelephonyManager) Universe.getContext().getSystemService("phone");
        if (telephonyManager == null) {
            return "";
        }
        try {
            String deviceId = telephonyManager.getDeviceId();
            return deviceId != null ? deviceId : "";
        } catch (SecurityException unused) {
            return "";
        }
    }

    private static String getMac() {
        StringBuffer stringBuffer = new StringBuffer();
        try {
            NetworkInterface byName = NetworkInterface.getByName("eth1");
            if (byName == null) {
                byName = NetworkInterface.getByName("wlan0");
            }
            if (byName == null) {
                return null;
            }
            for (byte b : byName.getHardwareAddress()) {
                stringBuffer.append(String.format("%02X", Byte.valueOf(b)));
            }
            if (stringBuffer.length() > 0) {
                stringBuffer.deleteCharAt(stringBuffer.length() - 1);
            }
            return stringBuffer.toString();
        } catch (SocketException unused) {
            return null;
        }
    }

    private static String getMD5(String str) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("MD5");
            messageDigest.update(str.getBytes());
            return new BigInteger(1, messageDigest.digest()).toString(16);
        } catch (Exception unused) {
            return "";
        }
    }

    private static String readUuidFile() throws IOException {
        RandomAccessFile randomAccessFile = new RandomAccessFile(Universe.getContext().getFilesDir() + sUuidFIle, "r");
        byte[] bArr = new byte[(int) randomAccessFile.length()];
        randomAccessFile.readFully(bArr);
        randomAccessFile.close();
        return new String(bArr);
    }

    private static void writeUuidFile() throws IOException {
        FileOutputStream fileOutputStream = new FileOutputStream(Universe.getContext().getFilesDir() + sUuidFIle);
        fileOutputStream.write(sUuid.getBytes());
        fileOutputStream.close();
    }

    private static String getAppVersion() {
        try {
            Context context = Universe.getContext();
            return Integer.toString(context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionCode);
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
            return "";
        }
    }

    private static String getPackageName() {
        Context context = Universe.getContext();
        return context != null ? context.getPackageName() : "";
    }

    public static String getNetEnvName() {
        NetworkInfo activeNetworkInfo;
        NetworkInfo.State state;
        ConnectivityManager connectivityManager = (ConnectivityManager) Universe.getContext().getSystemService("connectivity");
        if (connectivityManager != null && (activeNetworkInfo = connectivityManager.getActiveNetworkInfo()) != null && activeNetworkInfo.isAvailable()) {
            NetworkInfo networkInfo = connectivityManager.getNetworkInfo(1);
            if (networkInfo != null && (state = networkInfo.getState()) != null && (state == NetworkInfo.State.CONNECTED || state == NetworkInfo.State.CONNECTING)) {
                return NETWORN_WIFI;
            }
            NetworkInfo networkInfo2 = connectivityManager.getNetworkInfo(0);
            if (networkInfo2 != null) {
                NetworkInfo.State state2 = networkInfo2.getState();
                String subtypeName = networkInfo2.getSubtypeName();
                if (state2 != null && (state2 == NetworkInfo.State.CONNECTED || state2 == NetworkInfo.State.CONNECTING)) {
                    switch (activeNetworkInfo.getSubtype()) {
                        case 1:
                        case 2:
                        case 4:
                        case 7:
                        case 11:
                            return NETWORN_2G;
                        case 3:
                        case 5:
                        case 6:
                        case 8:
                        case 9:
                        case 10:
                        case 12:
                        case 14:
                        case 15:
                            return NETWORN_3G;
                        case 13:
                            return NETWORN_4G;
                        default:
                            return (subtypeName.equalsIgnoreCase("TD-SCDMA") || subtypeName.equalsIgnoreCase("WCDMA") || subtypeName.equalsIgnoreCase("CDMA2000")) ? NETWORN_3G : NETWORN_MOBILE;
                    }
                }
            }
        }
        return NETWORN_NONE;
    }

    public static int ping(String str, int i) {
        String line;
        Log.i("universe", "Start ping ...");
        try {
            Process processExec = Runtime.getRuntime().exec("/system/bin/ping -c " + Integer.toString(i) + " " + str);
            if (processExec.waitFor() != 0) {
                return -1;
            }
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(processExec.getInputStream()));
            while (true) {
                line = bufferedReader.readLine();
                if (line == null || (line.length() > 0 && line.contains("/avg"))) {
                    break;
                }
            }
            String strTrim = line.substring(line.indexOf(ContainerUtils.KEY_VALUE_DELIMITER) + 1, line.length()).trim();
            String strTrim2 = strTrim.substring(strTrim.indexOf("/") + 1, strTrim.length()).trim();
            Log.i("universe", "avgRtt = " + Double.valueOf(strTrim2.substring(0, strTrim2.indexOf("/"))).intValue());
            return -1;
        } catch (IOException e) {
            e.printStackTrace();
            return -1;
        } catch (InterruptedException e2) {
            e2.printStackTrace();
            return -1;
        }
    }

    public static String getMacAddress() {
        try {
            return ((WifiManager) Universe.getContext().getSystemService(NETWORN_WIFI)).getConnectionInfo().getMacAddress().replace(Constants.COLON_SEPARATOR, "");
        } catch (Exception unused) {
            return "1";
        }
    }

    public static String getIosIDFA() {
        String deviceId = ((TelephonyManager) Universe.getContext().getSystemService("phone")).getDeviceId();
        if (deviceId == null || deviceId.length() <= 0) {
            deviceId = getMacAddress();
        }
        return (deviceId == null || deviceId.length() <= 0 || deviceId.equals("1")) ? Settings.Secure.getString(Universe.getContext().getContentResolver(), "android_id") : deviceId;
    }

    public static String getCarrierName() {
        TelephonyManager telephonyManager = (TelephonyManager) Universe.getContext().getSystemService("phone");
        if (telephonyManager == null || telephonyManager.getPhoneType() == 0 || 1 == telephonyManager.getSimState()) {
            return "";
        }
        String subscriberId = telephonyManager.getSubscriberId();
        if (subscriberId != null) {
            subscriberId = telephonyManager.getSimOperator();
        }
        if (subscriberId != null) {
            if (subscriberId.startsWith("46000") || subscriberId.startsWith("46002") || subscriberId.startsWith("46007") || subscriberId.startsWith("46020")) {
                return "中国移动";
            }
            if (subscriberId.startsWith("46001") || subscriberId.startsWith("46006")) {
                return "中国联通";
            }
            if (subscriberId.startsWith("46003") || subscriberId.startsWith("46005") || subscriberId.startsWith("46011")) {
                return "中国电信";
            }
        }
        return "";
    }

    public static int[] getBatteryState() {
        return new int[]{mBatterylevel, mBatteryscale, mBatterystatus, mBatteryplugged};
    }

    public static boolean isHaveApp(String str) {
        List<PackageInfo> installedPackages = Universe.getContext().getPackageManager().getInstalledPackages(0);
        for (int i = 0; i < installedPackages.size(); i++) {
            if (installedPackages.get(i).packageName.equalsIgnoreCase(str)) {
                return true;
            }
        }
        return false;
    }

    public static void startApp(String str) {
        if (isHaveApp(str)) {
            Universe.getContext().startActivity(Universe.getContext().getPackageManager().getLaunchIntentForPackage(str));
        }
    }

    public static String getHardwareCode() {
        return getUUID();
    }
}
