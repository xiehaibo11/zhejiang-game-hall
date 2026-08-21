package com.bianfeng.ymnsdk.sysfunc.utils;

public class IntenetUtil {
    public static final int NETWORN_2G = 2;
    public static final int NETWORN_3G = 3;
    public static final int NETWORN_4G = 4;
    public static final int NETWORN_MOBILE = 5;
    public static final int NETWORN_NONE = 0;
    public static final int NETWORN_WIFI = 1;

    public IntenetUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getNetworkState(android.content.Context r5) {
            java.lang.String r0 = "connectivity"
            java.lang.Object r5 = r5.getSystemService(r0)
            android.net.ConnectivityManager r5 = (android.net.ConnectivityManager) r5
            r0 = 0
            if (r5 != 0) goto Lc
            return r0
        Lc:
            android.net.NetworkInfo r1 = r5.getActiveNetworkInfo()
            if (r1 == 0) goto L70
            boolean r2 = r1.isAvailable()
            if (r2 != 0) goto L19
            goto L70
        L19:
            r2 = 1
            android.net.NetworkInfo r3 = r5.getNetworkInfo(r2)
            if (r3 == 0) goto L2f
            android.net.NetworkInfo$State r3 = r3.getState()
            if (r3 == 0) goto L2f
            android.net.NetworkInfo$State r4 = android.net.NetworkInfo.State.CONNECTED
            if (r3 == r4) goto L2e
            android.net.NetworkInfo$State r4 = android.net.NetworkInfo.State.CONNECTING
            if (r3 != r4) goto L2f
        L2e:
            return r2
        L2f:
            android.net.NetworkInfo r5 = r5.getNetworkInfo(r0)
            if (r5 == 0) goto L70
            android.net.NetworkInfo$State r2 = r5.getState()
            java.lang.String r5 = r5.getSubtypeName()
            if (r2 == 0) goto L70
            android.net.NetworkInfo$State r3 = android.net.NetworkInfo.State.CONNECTED
            if (r2 == r3) goto L47
            android.net.NetworkInfo$State r3 = android.net.NetworkInfo.State.CONNECTING
            if (r2 != r3) goto L70
        L47:
            int r0 = r1.getSubtype()
            r1 = 3
            switch(r0) {
                case 1: goto L6b;
                case 2: goto L6b;
                case 3: goto L6a;
                case 4: goto L6b;
                case 5: goto L6a;
                case 6: goto L6a;
                case 7: goto L6b;
                case 8: goto L6a;
                case 9: goto L6a;
                case 10: goto L6a;
                case 11: goto L6b;
                case 12: goto L6a;
                case 13: goto L68;
                case 14: goto L6a;
                case 15: goto L6a;
                default: goto L4f;
            }
        L4f:
            java.lang.String r0 = "TD-SCDMA"
            boolean r0 = r5.equalsIgnoreCase(r0)
            if (r0 != 0) goto L6f
            java.lang.String r0 = "WCDMA"
            boolean r0 = r5.equalsIgnoreCase(r0)
            if (r0 != 0) goto L6f
            java.lang.String r0 = "CDMA2000"
            boolean r5 = r5.equalsIgnoreCase(r0)
            if (r5 == 0) goto L6d
            goto L6f
        L68:
            r5 = 4
            return r5
        L6a:
            return r1
        L6b:
            r5 = 2
            return r5
        L6d:
            r5 = 5
            return r5
        L6f:
            return r1
        L70:
            return r0
    }
}
