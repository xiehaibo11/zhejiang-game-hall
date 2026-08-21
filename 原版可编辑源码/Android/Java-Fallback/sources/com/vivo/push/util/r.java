package com.vivo.push.util;

public final class r {
    public static android.net.NetworkInfo a(android.content.Context r1) {
            java.lang.String r0 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r0)     // Catch: java.lang.Exception -> Ld
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Exception -> Ld
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> Ld
            return r1
        Ld:
            r1 = move-exception
            java.lang.String r0 = "NetUtils"
            com.vivo.push.util.p.a(r0, r1)
            r1 = 0
            return r1
    }
}
