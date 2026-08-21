package com.bianfeng.ymnsdk.utilslib.device;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.text.TextUtils;

public final class IntenetUtil {
    private static final String NETWORN_2G = "NETWORN_2G";
    private static final String NETWORN_3G = "NETWORN_3G";
    private static final String NETWORN_4G = "NETWORN_4G";
    private static final String NETWORN_5G = "NETWORN_5G";
    private static final String NETWORN_ETHERNET = "NETWORN_ETHERNET";
    private static final String NETWORN_MOBILE = "NETWORN_MOBILE";
    private static final String NETWORN_NONE = "NETWORN_NONE";
    private static final String NETWORN_WIFI = "NETWORN_WIFI";
    private static final String UNCON_WIFI = "UNCON_WIFI";
    private static NetworkInfo activeNetInfo;
    private static ConnectivityManager connManager;

    public static String getNetworkState(Context context) {
        if (context == null) {
            return NETWORN_NONE;
        }
        connManager = (ConnectivityManager) context.getSystemService("connectivity");
        if (connManager == null) {
            return NETWORN_NONE;
        }
        String networkInfo = getNetworkInfo();
        if (!TextUtils.isEmpty(networkInfo)) {
            return networkInfo;
        }
        String wifiType = getWifiType();
        if (!TextUtils.isEmpty(wifiType)) {
            return wifiType;
        }
        String mobileType = getMobileType();
        return !TextUtils.isEmpty(mobileType) ? mobileType : getEthernetType();
    }

    private static String getWifiType() {
        NetworkInfo networkInfo;
        NetworkInfo.State state;
        try {
            networkInfo = connManager.getNetworkInfo(1);
        } catch (Exception unused) {
            networkInfo = null;
        }
        if (networkInfo == null || (state = networkInfo.getState()) == null) {
            return null;
        }
        if (state == NetworkInfo.State.CONNECTED || state == NetworkInfo.State.CONNECTING) {
            return NETWORN_WIFI;
        }
        if (state == NetworkInfo.State.DISCONNECTED) {
            return UNCON_WIFI;
        }
        return null;
    }

    private static String getNetworkInfo() {
        try {
            activeNetInfo = connManager.getActiveNetworkInfo();
            NetworkInfo networkInfo = activeNetInfo;
            if (networkInfo == null || !networkInfo.isAvailable()) {
                return NETWORN_NONE;
            }
            return null;
        } catch (Exception unused) {
            return NETWORN_NONE;
        }
    }

    private static String getMobileType() {
        NetworkInfo networkInfo;
        try {
            networkInfo = connManager.getNetworkInfo(0);
        } catch (Exception unused) {
            return null;
        }
        if (networkInfo == null) {
            return null;
        }
        NetworkInfo.State state = networkInfo.getState();
        String subtypeName = networkInfo.getSubtypeName();
        if (state == null) {
            return null;
        }
        if (state != NetworkInfo.State.CONNECTED && state != NetworkInfo.State.CONNECTING) {
            return null;
        }
        int subtype = activeNetInfo.getSubtype();
        if (subtype == 20) {
            return NETWORN_5G;
        }
        switch (subtype) {
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
                if (!subtypeName.equalsIgnoreCase("TD-SCDMA") && !subtypeName.equalsIgnoreCase("WCDMA")) {
                    if (!subtypeName.equalsIgnoreCase("CDMA2000")) {
                        return NETWORN_MOBILE;
                    }
                }
                return NETWORN_3G;
        }
        return null;
    }

    private static String getEthernetType() {
        NetworkInfo.State state;
        try {
            NetworkInfo networkInfo = connManager.getNetworkInfo(9);
            return (networkInfo == null || (state = networkInfo.getState()) == null) ? NETWORN_NONE : state != NetworkInfo.State.CONNECTED ? state == NetworkInfo.State.CONNECTING ? NETWORN_ETHERNET : NETWORN_NONE : NETWORN_ETHERNET;
        } catch (Exception unused) {
            return NETWORN_NONE;
        }
    }
}
