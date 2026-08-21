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
            android.net.ConnectivityManager r0 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.connManager     // Catch: java.lang.Exception -> L1b
            r1 = 9
            android.net.NetworkInfo r0 = r0.getNetworkInfo(r1)     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L1b
            android.net.NetworkInfo$State r0 = r0.getState()     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L1b
            android.net.NetworkInfo$State r1 = android.net.NetworkInfo.State.CONNECTED     // Catch: java.lang.Exception -> L1b
            if (r0 == r1) goto L18
            android.net.NetworkInfo$State r1 = android.net.NetworkInfo.State.CONNECTING     // Catch: java.lang.Exception -> L1b
            if (r0 != r1) goto L1b
        L18:
            java.lang.String r0 = "NETWORN_ETHERNET"
            return r0
        L1b:
            java.lang.String r0 = "NETWORN_NONE"
            return r0
    }

    private static java.lang.String getMobileType() {
            android.net.ConnectivityManager r0 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.connManager     // Catch: java.lang.Exception -> L51
            r1 = 0
            android.net.NetworkInfo r0 = r0.getNetworkInfo(r1)     // Catch: java.lang.Exception -> L51
            if (r0 == 0) goto L51
            android.net.NetworkInfo$State r1 = r0.getState()     // Catch: java.lang.Exception -> L51
            java.lang.String r0 = r0.getSubtypeName()     // Catch: java.lang.Exception -> L51
            if (r1 == 0) goto L51
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.CONNECTED     // Catch: java.lang.Exception -> L51
            if (r1 == r2) goto L1b
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.CONNECTING     // Catch: java.lang.Exception -> L51
            if (r1 != r2) goto L51
        L1b:
            android.net.NetworkInfo r1 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.activeNetInfo     // Catch: java.lang.Exception -> L51
            int r1 = r1.getSubtype()     // Catch: java.lang.Exception -> L51
            r2 = 20
            if (r1 == r2) goto L4e
            java.lang.String r2 = "NETWORN_3G"
            switch(r1) {
                case 1: goto L4b;
                case 2: goto L4b;
                case 3: goto L4a;
                case 4: goto L4b;
                case 5: goto L4a;
                case 6: goto L4a;
                case 7: goto L4b;
                case 8: goto L4a;
                case 9: goto L4a;
                case 10: goto L4a;
                case 11: goto L4b;
                case 12: goto L4a;
                case 13: goto L47;
                case 14: goto L4a;
                case 15: goto L4a;
                default: goto L2a;
            }
        L2a:
            java.lang.String r1 = "TD-SCDMA"
            boolean r1 = r0.equalsIgnoreCase(r1)     // Catch: java.lang.Exception -> L51
            if (r1 != 0) goto L46
            java.lang.String r1 = "WCDMA"
            boolean r1 = r0.equalsIgnoreCase(r1)     // Catch: java.lang.Exception -> L51
            if (r1 != 0) goto L46
            java.lang.String r1 = "CDMA2000"
            boolean r0 = r0.equalsIgnoreCase(r1)     // Catch: java.lang.Exception -> L51
            if (r0 == 0) goto L43
            goto L46
        L43:
            java.lang.String r0 = "NETWORN_MOBILE"
            return r0
        L46:
            return r2
        L47:
            java.lang.String r0 = "NETWORN_4G"
            return r0
        L4a:
            return r2
        L4b:
            java.lang.String r0 = "NETWORN_2G"
            return r0
        L4e:
            java.lang.String r0 = "NETWORN_5G"
            return r0
        L51:
            r0 = 0
            return r0
    }

    private static java.lang.String getNetworkInfo() {
            java.lang.String r0 = "NETWORN_NONE"
            android.net.ConnectivityManager r1 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.connManager     // Catch: java.lang.Exception -> L16
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L16
            com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.activeNetInfo = r1     // Catch: java.lang.Exception -> L16
            android.net.NetworkInfo r1 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.activeNetInfo
            if (r1 == 0) goto L16
            boolean r1 = r1.isAvailable()
            if (r1 != 0) goto L15
            goto L16
        L15:
            r0 = 0
        L16:
            return r0
    }

    public static java.lang.String getNetworkState(android.content.Context r2) {
            java.lang.String r0 = "NETWORN_NONE"
            if (r2 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r1)
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2
            com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.connManager = r2
            android.net.ConnectivityManager r2 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.connManager
            if (r2 != 0) goto L14
            return r0
        L14:
            java.lang.String r2 = getNetworkInfo()
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1f
            return r2
        L1f:
            java.lang.String r2 = getWifiType()
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L2a
            return r2
        L2a:
            java.lang.String r2 = getMobileType()
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L35
            return r2
        L35:
            java.lang.String r2 = getEthernetType()
            return r2
    }

    private static java.lang.String getWifiType() {
            r0 = 0
            android.net.ConnectivityManager r1 = com.bianfeng.ymnsdk.utilslib.device.IntenetUtil.connManager     // Catch: java.lang.Exception -> L9
            r2 = 1
            android.net.NetworkInfo r1 = r1.getNetworkInfo(r2)     // Catch: java.lang.Exception -> L9
            goto La
        L9:
            r1 = r0
        La:
            if (r1 == 0) goto L24
            android.net.NetworkInfo$State r1 = r1.getState()
            if (r1 == 0) goto L24
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.CONNECTED
            if (r1 == r2) goto L22
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.CONNECTING
            if (r1 != r2) goto L1b
            goto L22
        L1b:
            android.net.NetworkInfo$State r2 = android.net.NetworkInfo.State.DISCONNECTED
            if (r1 != r2) goto L24
            java.lang.String r0 = "UNCON_WIFI"
            return r0
        L22:
            java.lang.String r0 = "NETWORN_WIFI"
        L24:
            return r0
    }
}
