package com.bianfeng.ymnsdk.utilslib.device;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;

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
        String type = getNetworkInfo();
        if (!TextUtils.isEmpty(type)) {
            return type;
        }
        String type2 = getWifiType();
        if (!TextUtils.isEmpty(type2)) {
            return type2;
        }
        String type3 = getMobileType();
        if (!TextUtils.isEmpty(type3)) {
            return type3;
        }
        return getEthernetType();
    }

    private static String getWifiType() {
        NetworkInfo.State state;
        NetworkInfo wifiInfo = null;
        try {
            wifiInfo = connManager.getNetworkInfo(1);
        } catch (Exception e) {
        }
        if (wifiInfo != null && (state = wifiInfo.getState()) != null) {
            if (state == NetworkInfo.State.CONNECTED || state == NetworkInfo.State.CONNECTING) {
                return NETWORN_WIFI;
            }
            if (state == NetworkInfo.State.DISCONNECTED) {
                return UNCON_WIFI;
            }
            return null;
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
        } catch (Exception e) {
            return NETWORN_NONE;
        }
    }

    private static String getMobileType() {
        try {
            NetworkInfo networkInfo = connManager.getNetworkInfo(0);
            if (networkInfo != null) {
                NetworkInfo.State state = networkInfo.getState();
                String strSubTypeName = networkInfo.getSubtypeName();
                if (state != null) {
                    if (state == NetworkInfo.State.CONNECTED || state == NetworkInfo.State.CONNECTING) {
                        int subtype = activeNetInfo.getSubtype();
                        if (subtype != 20) {
                            switch (subtype) {
                                case 1:
                                case 2:
                                case 4:
                                case 7:
                                case 11:
                                    SharedPreferencesUtils.setPLStringToSP(SharedPreferencesUtils.getPLSPName(), SharedPreferencesUtils.pl_network, NETWORN_2G);
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
                                    SharedPreferencesUtils.setPLStringToSP(SharedPreferencesUtils.getPLSPName(), SharedPreferencesUtils.pl_network, NETWORN_3G);
                                    return NETWORN_3G;
                                case 13:
                                    SharedPreferencesUtils.setPLStringToSP(SharedPreferencesUtils.getPLSPName(), SharedPreferencesUtils.pl_network, NETWORN_4G);
                                    return NETWORN_4G;
                                default:
                                    if (!strSubTypeName.equalsIgnoreCase("TD-SCDMA") && !strSubTypeName.equalsIgnoreCase("WCDMA") && !strSubTypeName.equalsIgnoreCase("CDMA2000")) {
                                        SharedPreferencesUtils.setPLStringToSP(SharedPreferencesUtils.getPLSPName(), SharedPreferencesUtils.pl_network, NETWORN_MOBILE);
                                        return NETWORN_MOBILE;
                                    }
                                    SharedPreferencesUtils.setPLStringToSP(SharedPreferencesUtils.getPLSPName(), SharedPreferencesUtils.pl_network, NETWORN_3G);
                                    return NETWORN_3G;
                            }
                        }
                        SharedPreferencesUtils.setPLStringToSP(SharedPreferencesUtils.getPLSPName(), SharedPreferencesUtils.pl_network, NETWORN_5G);
                        return NETWORN_5G;
                    }
                    return null;
                }
                return null;
            }
            return null;
        } catch (Exception e) {
            return null;
        }
    }

    private static String getEthernetType() {
        NetworkInfo.State state;
        try {
            NetworkInfo EthernetInfo = connManager.getNetworkInfo(9);
            if (EthernetInfo != null && (state = EthernetInfo.getState()) != null) {
                if (state == NetworkInfo.State.CONNECTED) {
                    return NETWORN_ETHERNET;
                }
                if (state == NetworkInfo.State.CONNECTING) {
                    return NETWORN_ETHERNET;
                }
                return NETWORN_NONE;
            }
            return NETWORN_NONE;
        } catch (Exception e) {
            return NETWORN_NONE;
        }
    }
}
