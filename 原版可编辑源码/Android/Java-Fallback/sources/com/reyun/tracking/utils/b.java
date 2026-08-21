package com.reyun.tracking.utils;

public class b {
    private static long a;

    static {
            return
    }

    public static boolean a(android.content.Context r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "connectivity"
            java.lang.Object r4 = r4.getSystemService(r1)     // Catch: java.lang.Exception -> L27
            android.net.ConnectivityManager r4 = (android.net.ConnectivityManager) r4     // Catch: java.lang.Exception -> L27
            if (r4 == 0) goto L27
            android.net.NetworkInfo[] r4 = r4.getAllNetworkInfo()     // Catch: java.lang.Exception -> L27
            if (r4 == 0) goto L27
            r1 = 0
        L15:
            int r2 = r4.length     // Catch: java.lang.Exception -> L27
            if (r1 >= r2) goto L27
            r2 = r4[r1]     // Catch: java.lang.Exception -> L27
            android.net.NetworkInfo$State r2 = r2.getState()     // Catch: java.lang.Exception -> L27
            android.net.NetworkInfo$State r3 = android.net.NetworkInfo.State.CONNECTED     // Catch: java.lang.Exception -> L27
            if (r2 != r3) goto L24
            r4 = 1
            return r4
        L24:
            int r1 = r1 + 1
            goto L15
        L27:
            return r0
    }
}
