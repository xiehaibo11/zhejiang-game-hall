package com.carlt.networklibs.utils;

public class NetworkUtils {
    public NetworkUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.carlt.networklibs.NetType getNetType() {
            com.carlt.networklibs.NetworkManager r0 = com.carlt.networklibs.NetworkManager.getInstance()
            android.app.Application r0 = r0.getApplication()
            java.lang.String r1 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            if (r0 != 0) goto L15
            com.carlt.networklibs.NetType r0 = com.carlt.networklibs.NetType.NONE
            return r0
        L15:
            android.net.NetworkInfo r0 = r0.getActiveNetworkInfo()
            if (r0 == 0) goto L46
            int r1 = r0.getType()
            if (r1 != 0) goto L40
            java.lang.String r1 = r0.getExtraInfo()
            if (r1 != 0) goto L2a
            com.carlt.networklibs.NetType r0 = com.carlt.networklibs.NetType.CMWAP
            return r0
        L2a:
            java.lang.String r0 = r0.getExtraInfo()
            java.lang.String r0 = r0.toLowerCase()
            java.lang.String r1 = "cmnet"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3d
            com.carlt.networklibs.NetType r0 = com.carlt.networklibs.NetType.CMNET
            return r0
        L3d:
            com.carlt.networklibs.NetType r0 = com.carlt.networklibs.NetType.CMWAP
            return r0
        L40:
            r0 = 1
            if (r1 != r0) goto L46
            com.carlt.networklibs.NetType r0 = com.carlt.networklibs.NetType.WIFI
            return r0
        L46:
            com.carlt.networklibs.NetType r0 = com.carlt.networklibs.NetType.NONE
            return r0
    }

    public static boolean isAvailable() {
            com.carlt.networklibs.NetworkManager r0 = com.carlt.networklibs.NetworkManager.getInstance()
            android.app.Application r0 = r0.getApplication()
            java.lang.String r1 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            r1 = 0
            if (r0 != 0) goto L14
            return r1
        L14:
            android.net.NetworkInfo[] r0 = r0.getAllNetworkInfo()
            if (r0 == 0) goto L2d
            int r2 = r0.length
            r3 = r1
        L1c:
            if (r3 >= r2) goto L2d
            r4 = r0[r3]
            android.net.NetworkInfo$State r4 = r4.getState()
            android.net.NetworkInfo$State r5 = android.net.NetworkInfo.State.CONNECTED
            if (r4 != r5) goto L2a
            r0 = 1
            return r0
        L2a:
            int r3 = r3 + 1
            goto L1c
        L2d:
            return r1
    }

    public static void openNetSetting(android.app.Activity r4, int r5) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "/"
            r0.<init>(r1)
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.String r2 = "com.android.settings"
            java.lang.String r3 = "com.android.settings.WirelessSettings"
            r1.<init>(r2, r3)
            r0.setComponent(r1)
            r4.startActivityForResult(r0, r5)
            return
    }
}
