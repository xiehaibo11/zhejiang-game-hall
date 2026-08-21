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

    public IntenetUtil() {
    }

    public static String getNetworkState(Context r2) {
        if (r2 != null) goto L5;
        return NETWORN_NONE;
    L5:
        connManager = (ConnectivityManager) r2.getSystemService("connectivity");
        if (connManager != null) goto L8;
        return NETWORN_NONE;
    L8:
        String r22 = getNetworkInfo();
        if (TextUtils.isEmpty(r22) == true) goto L11;
        return r22;
    L11:
        String r23 = getWifiType();
        if (TextUtils.isEmpty(r23) == true) goto L14;
        return r23;
    L14:
        String r24 = getMobileType();
        if (TextUtils.isEmpty(r24) == true) goto L18;
        return r24;
    L18:
        return getEthernetType();
    }

    private static String getWifiType() {
        NetworkInfo r1 = connManager.getNetworkInfo(1);     // Catch: Exception -> L5
    L6:
        if (r1 == null) goto L22;
        NetworkInfo.State r12 = r1.getState();
        if (r12 != null) goto L10;
        return null;
    L10:
        if (r12 != NetworkInfo.State.CONNECTED) goto L12;
    L18:
        return NETWORN_WIFI;
    L12:
        if (r12 == NetworkInfo.State.CONNECTING) goto L18;
        if (r12 != NetworkInfo.State.DISCONNECTED) goto L24;
        return UNCON_WIFI;
    L24:
        return null;
    L22:
        return null;
    L5:
        r1 = null;
        goto L6
    }

    private static String getNetworkInfo() {
        activeNetInfo = connManager.getActiveNetworkInfo();     // Catch: Exception -> L11
        NetworkInfo r1 = activeNetInfo;
        if (r1 != null) goto L7;
        return NETWORN_NONE;
    L7:
        if (r1.isAvailable() == false) goto L15;
        return null;
    L15:
        return NETWORN_NONE;
    L16:
        return NETWORN_NONE;
    }

    private static String getMobileType() {
        NetworkInfo r0 = connManager.getNetworkInfo(0);     // Catch: Exception -> L34
        if (r0 == null) goto L32;
        NetworkInfo.State r1 = r0.getState();     // Catch: Exception -> L34
        String r02 = r0.getSubtypeName();     // Catch: Exception -> L34
        if (r1 != null) goto L7;
        return null;
    L7:
        if (r1 != NetworkInfo.State.CONNECTED) goto L9;
    L10:
        int r12 = activeNetInfo.getSubtype();     // Catch: Exception -> L34
        if (r12 != 20) goto L14;
        return NETWORN_5G;
    L14:
        switch(r12) {
            case 1: goto L28;
            case 2: goto L28;
            case 3: goto L27;
            case 4: goto L28;
            case 5: goto L27;
            case 6: goto L27;
            case 7: goto L28;
            case 8: goto L27;
            case 9: goto L27;
            case 10: goto L27;
            case 11: goto L28;
            case 12: goto L27;
            case 13: goto L25;
            case 14: goto L27;
            case 15: goto L27;
            default: goto L16;
        };
    L25:
        return NETWORN_4G;
    L27:
        return NETWORN_3G;
    L28:
        return NETWORN_2G;
    L16:
        if (r02.equalsIgnoreCase("TD-SCDMA") == false) goto L18;
    L24:
        return NETWORN_3G;
    L18:
        if (r02.equalsIgnoreCase("WCDMA") == true) goto L24;
        if (r02.equalsIgnoreCase("CDMA2000") == true) goto L24;
        return NETWORN_MOBILE;
    L9:
        if (r1 == NetworkInfo.State.CONNECTING) goto L10;
        return null;
    L32:
        return null;
    L39:
        return null;
    }

    private static String getEthernetType() {
        NetworkInfo r0 = connManager.getNetworkInfo(9);     // Catch: Exception -> L14
        if (r0 == null) goto L12;
        NetworkInfo.State r02 = r0.getState();     // Catch: Exception -> L14
        if (r02 != null) goto L7;
        return NETWORN_NONE;
    L7:
        if (r02 == NetworkInfo.State.CONNECTED) goto L10;
        if (r02 != NetworkInfo.State.CONNECTING) goto L19;
        return NETWORN_ETHERNET;
    L19:
        return NETWORN_NONE;
    L10:
        return NETWORN_ETHERNET;
    L12:
        return NETWORN_NONE;
    L20:
        return NETWORN_NONE;
    }
}
