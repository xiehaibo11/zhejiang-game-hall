package com.meizu.cloud.pushsdk.util;

public class a {
    public static android.net.NetworkInfo a(android.content.Context r2) {
            r0 = 0
            java.lang.String r1 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L11
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L11
            if (r2 != 0) goto Lc
            return r0
        Lc:
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L11
            return r2
        L11:
            r2 = move-exception
            r2.printStackTrace()
            return r0
    }

    public static boolean b(android.content.Context r2) {
            android.net.NetworkInfo r2 = a(r2)
            r0 = 1
            if (r2 == 0) goto L14
            boolean r1 = r2.isConnected()
            if (r1 == 0) goto L14
            int r2 = r2.getType()
            if (r2 != r0) goto L14
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }
}
