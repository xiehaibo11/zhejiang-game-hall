package com.bianfeng.ymnsdk.utilslib.device;

public final class IntenetUtil {
    private static final java.lang.String NETWORN_2G = "NETWORN_2G";
    private static final java.lang.String NETWORN_3G = "NETWORN_3G";
    private static final java.lang.String NETWORN_4G = "NETWORN_4G";
    private static final java.lang.String NETWORN_5G = "NETWORN_5G";
    private static final java.lang.String NETWORN_ETHERNET = "NETWORN_ETHERNET";
    private static final java.lang.String NETWORN_MOBILE = "NETWORN_MOBILE";
    private static final java.lang.String NETWORN_NONE = "NETWORN_NONE";
    private static final java.lang.String NETWORN_WIFI = "NETWORN_WIFI";
    private static final java.lang.String UNCON_WIFI = "UNCON_WIFI";
    private static android.net.NetworkInfo activeNetInfo;
    private static android.net.ConnectivityManager connManager;

    public IntenetUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String getEthernetType() {
            android.net.ConnectivityManager r0 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.connManager     // Catch: java.lang.Exception -> L1c
            r1 = 9
            android.net.NetworkInfo r0 = r0.getNetworkInfo(r1)     // Catch: java.lang.Exception -> L1c
            if (r0 == 0) goto L1b
            android.net.NetworkInfo$State r1 = r0.getState()     // Catch: java.lang.Exception -> L1c
            if (r1 == 0) goto L1b
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.CONNECTED     // Catch: java.lang.Exception -> L1c
            if (r1 == r2) goto L18
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.CONNECTING     // Catch: java.lang.Exception -> L1c
            if (r1 != r2) goto L1b
        L18:
            java.lang.String r2 = "NETWORN_ETHERNET"
            return r2
        L1b:
            goto L1d
        L1c:
            r0 = move-exception
        L1d:
            java.lang.String r0 = "NETWORN_NONE"
            return r0
    }

    private static java.lang.String getMobileType() {
            java.lang.String r0 = "NETWORN_MOBILE"
            java.lang.String r1 = "NETWORN_5G"
            java.lang.String r2 = "NETWORN_4G"
            java.lang.String r3 = "NETWORN_2G"
            android.net.ConnectivityManager r4 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.connManager     // Catch: java.lang.Exception -> L87
            r5 = 0
            android.net.NetworkInfo r4 = r4.getNetworkInfo(r5)     // Catch: java.lang.Exception -> L87
            if (r4 == 0) goto L88
            android.net.NetworkInfo$State r5 = r4.getState()     // Catch: java.lang.Exception -> L87
            java.lang.String r6 = r4.getSubtypeName()     // Catch: java.lang.Exception -> L87
            if (r5 == 0) goto L88
            android.net.NetworkInfo$State r7 = android.net.NetworkInfo.State.CONNECTED     // Catch: java.lang.Exception -> L87
            if (r5 == r7) goto L23
            android.net.NetworkInfo$State r7 = android.net.NetworkInfo.State.CONNECTING     // Catch: java.lang.Exception -> L87
            if (r5 != r7) goto L88
        L23:
            android.net.NetworkInfo r7 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.activeNetInfo     // Catch: java.lang.Exception -> L87
            int r7 = r7.getSubtype()     // Catch: java.lang.Exception -> L87
            r8 = 20
            if (r7 == r8) goto L7d
            java.lang.String r1 = "NETWORN_3G"
            switch(r7) {
                case 1: goto L73;
                case 2: goto L73;
                case 3: goto L69;
                case 4: goto L73;
                case 5: goto L69;
                case 6: goto L69;
                case 7: goto L73;
                case 8: goto L69;
                case 9: goto L69;
                case 10: goto L69;
                case 11: goto L73;
                case 12: goto L69;
                case 13: goto L5f;
                case 14: goto L69;
                case 15: goto L69;
                default: goto L32;
            }
        L32:
            java.lang.String r2 = "TD-SCDMA"
            boolean r2 = r6.equalsIgnoreCase(r2)     // Catch: java.lang.Exception -> L87
            if (r2 != 0) goto L55
            java.lang.String r2 = "WCDMA"
            boolean r2 = r6.equalsIgnoreCase(r2)     // Catch: java.lang.Exception -> L87
            if (r2 != 0) goto L55
            java.lang.String r2 = "CDMA2000"
            boolean r2 = r6.equalsIgnoreCase(r2)     // Catch: java.lang.Exception -> L87
            if (r2 == 0) goto L4b
            goto L55
        L4b:
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getPLSPName()     // Catch: java.lang.Exception -> L87
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_network     // Catch: java.lang.Exception -> L87
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.setPLStringToSP(r1, r2, r0)     // Catch: java.lang.Exception -> L87
            return r0
        L55:
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getPLSPName()     // Catch: java.lang.Exception -> L87
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_network     // Catch: java.lang.Exception -> L87
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.setPLStringToSP(r0, r2, r1)     // Catch: java.lang.Exception -> L87
            return r1
        L5f:
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getPLSPName()     // Catch: java.lang.Exception -> L87
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_network     // Catch: java.lang.Exception -> L87
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.setPLStringToSP(r0, r1, r2)     // Catch: java.lang.Exception -> L87
            return r2
        L69:
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getPLSPName()     // Catch: java.lang.Exception -> L87
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_network     // Catch: java.lang.Exception -> L87
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.setPLStringToSP(r0, r2, r1)     // Catch: java.lang.Exception -> L87
            return r1
        L73:
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getPLSPName()     // Catch: java.lang.Exception -> L87
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_network     // Catch: java.lang.Exception -> L87
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.setPLStringToSP(r0, r1, r3)     // Catch: java.lang.Exception -> L87
            return r3
        L7d:
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getPLSPName()     // Catch: java.lang.Exception -> L87
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.pl_network     // Catch: java.lang.Exception -> L87
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.setPLStringToSP(r0, r2, r1)     // Catch: java.lang.Exception -> L87
            return r1
        L87:
            r0 = move-exception
        L88:
            r0 = 0
            return r0
    }

    private static java.lang.String getNetworkInfo() {
            java.lang.String r0 = "NETWORN_NONE"
            android.net.ConnectivityManager r1 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.connManager     // Catch: java.lang.Exception -> L19
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L19
            com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.activeNetInfo = r1     // Catch: java.lang.Exception -> L19
            android.net.NetworkInfo r1 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.activeNetInfo
            if (r1 == 0) goto L18
            boolean r1 = r1.isAvailable()
            if (r1 != 0) goto L16
            goto L18
        L16:
            r0 = 0
            return r0
        L18:
            return r0
        L19:
            r1 = move-exception
            return r0
    }

    public static java.lang.String getNetworkState(android.content.Context r2) {
            java.lang.String r0 = "NETWORN_NONE"
            if (r2 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = "connectivity"
            java.lang.Object r1 = r2.getSystemService(r1)
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1
            com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.connManager = r1
            android.net.ConnectivityManager r1 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.connManager
            if (r1 != 0) goto L14
            return r0
        L14:
            java.lang.String r0 = getNetworkInfo()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L1f
            return r0
        L1f:
            java.lang.String r0 = getWifiType()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L2a
            return r0
        L2a:
            java.lang.String r0 = getMobileType()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L35
            return r0
        L35:
            java.lang.String r1 = getEthernetType()
            return r1
    }

    private static java.lang.String getWifiType() {
            r0 = 0
            android.net.ConnectivityManager r1 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.connManager     // Catch: java.lang.Exception -> La
            r2 = 1
            android.net.NetworkInfo r1 = r1.getNetworkInfo(r2)     // Catch: java.lang.Exception -> La
            r0 = r1
            goto Lb
        La:
            r1 = move-exception
        Lb:
            if (r0 == 0) goto L27
            android.net.NetworkInfo$State r1 = r0.getState()
            if (r1 == 0) goto L27
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.CONNECTED
            if (r1 == r2) goto L24
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.CONNECTING
            if (r1 != r2) goto L1d
            goto L24
        L1d:
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.DISCONNECTED
            if (r1 != r2) goto L27
            java.lang.String r2 = "UNCON_WIFI"
            return r2
        L24:
            java.lang.String r2 = "NETWORN_WIFI"
            return r2
        L27:
            r1 = 0
            return r1
    }
}
