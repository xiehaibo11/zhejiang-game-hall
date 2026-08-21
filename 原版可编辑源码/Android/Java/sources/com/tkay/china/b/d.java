package com.tkay.china.b;

import android.content.Context;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;
import com.tkay.core.common.b.m;
import java.net.NetworkInterface;
import java.util.Collections;
import java.util.Locale;

public final class d {
    public static String a(Context context) {
        WifiInfo connectionInfo;
        if (context == null) {
            return "";
        }
        try {
            connectionInfo = ((WifiManager) context.getApplicationContext().getSystemService(Device.NETWORN_WIFI)).getConnectionInfo();
        } catch (Throwable th) {
            th.printStackTrace();
            connectionInfo = null;
        }
        if (connectionInfo == null) {
            return null;
        }
        String macAddress = connectionInfo.getMacAddress();
        return !TextUtils.isEmpty(macAddress) ? macAddress.toUpperCase(Locale.ENGLISH) : macAddress;
    }

    public static String a() {
        try {
        } catch (Exception e) {
            e.printStackTrace();
        }
        for (NetworkInterface networkInterface : Collections.list(NetworkInterface.getNetworkInterfaces())) {
            if (networkInterface.getName().equalsIgnoreCase("wlan0")) {
                byte[] hardwareAddress = networkInterface.getHardwareAddress();
                if (hardwareAddress == null) {
                    return "";
                }
                StringBuilder sb = new StringBuilder();
                for (byte b : hardwareAddress) {
                    sb.append(String.format("%02X:", Byte.valueOf(b)));
                }
                if (!TextUtils.isEmpty(sb)) {
                    sb.deleteCharAt(sb.length() - 1);
                }
                return sb.toString();
            }
            return "";
        }
        return "";
    }

    private static String b(Context context) {
        if (m.a().c("mac")) {
            return "";
        }
        if (Build.VERSION.SDK_INT < 23) {
            return a(context);
        }
        return a();
    }
}
