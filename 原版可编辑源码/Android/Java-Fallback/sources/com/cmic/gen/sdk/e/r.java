package com.cmic.gen.sdk.e;

public class r {
    private static com.cmic.gen.sdk.e.r a;
    private android.net.ConnectivityManager b;


    public interface a {
        void a(android.net.Network r1, android.net.ConnectivityManager.NetworkCallback r2);
    }

    static {
            return
    }

    private r(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Exception -> Le
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> Le
            r1.b = r2     // Catch: java.lang.Exception -> Le
            goto L12
        Le:
            r2 = move-exception
            r2.printStackTrace()
        L12:
            return
    }

    static android.net.ConnectivityManager a(com.cmic.gen.sdk.e.r r0) {
            android.net.ConnectivityManager r0 = r0.b
            return r0
    }

    public static com.cmic.gen.sdk.e.r a(android.content.Context r2) {
            com.cmic.gen.sdk.e.r r0 = com.cmic.gen.sdk.e.r.a
            if (r0 != 0) goto L17
            java.lang.Class<com.cmic.gen.sdk.e.r> r0 = com.cmic.gen.sdk.e.r.class
            monitor-enter(r0)
            com.cmic.gen.sdk.e.r r1 = com.cmic.gen.sdk.e.r.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.cmic.gen.sdk.e.r r1 = new com.cmic.gen.sdk.e.r     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.cmic.gen.sdk.e.r.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.cmic.gen.sdk.e.r r2 = com.cmic.gen.sdk.e.r.a
            return r2
    }

    public void a(android.net.ConnectivityManager.NetworkCallback r3) {
            r2 = this;
            android.net.ConnectivityManager r0 = r2.b
            if (r0 != 0) goto L5
            return
        L5:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L1b
            r1 = 21
            if (r0 < r1) goto L1f
            if (r3 != 0) goto Le
            return
        Le:
            java.lang.String r0 = "WifiNetworkUtils"
            java.lang.String r1 = "unregisterNetworkCallback"
            com.cmic.gen.sdk.e.c.b(r0, r1)     // Catch: java.lang.Exception -> L1b
            android.net.ConnectivityManager r0 = r2.b     // Catch: java.lang.Exception -> L1b
            r0.unregisterNetworkCallback(r3)     // Catch: java.lang.Exception -> L1b
            goto L1f
        L1b:
            r3 = move-exception
            r3.printStackTrace()
        L1f:
            return
    }

    public synchronized void a(com.cmic.gen.sdk.e.r.a r5) {
            r4 = this;
            monitor-enter(r4)
            android.net.ConnectivityManager r0 = r4.b     // Catch: java.lang.Throwable -> L3a
            r1 = 0
            if (r0 != 0) goto L12
            java.lang.String r0 = "WifiNetworkUtils"
            java.lang.String r2 = "mConnectivityManager 为空"
            com.cmic.gen.sdk.e.c.a(r0, r2)     // Catch: java.lang.Throwable -> L3a
            r5.a(r1, r1)     // Catch: java.lang.Throwable -> L3a
            monitor-exit(r4)
            return
        L12:
            android.net.NetworkRequest$Builder r0 = new android.net.NetworkRequest$Builder     // Catch: java.lang.Throwable -> L3a
            r0.<init>()     // Catch: java.lang.Throwable -> L3a
            r2 = 12
            android.net.NetworkRequest$Builder r0 = r0.addCapability(r2)     // Catch: java.lang.Throwable -> L3a
            r2 = 0
            android.net.NetworkRequest$Builder r0 = r0.addTransportType(r2)     // Catch: java.lang.Throwable -> L3a
            android.net.NetworkRequest r0 = r0.build()     // Catch: java.lang.Throwable -> L3a
            com.cmic.gen.sdk.e.r$1 r2 = new com.cmic.gen.sdk.e.r$1     // Catch: java.lang.Throwable -> L3a
            r2.<init>(r4, r5)     // Catch: java.lang.Throwable -> L3a
            android.net.ConnectivityManager r3 = r4.b     // Catch: java.lang.Exception -> L31 java.lang.Throwable -> L3a
            r3.requestNetwork(r0, r2)     // Catch: java.lang.Exception -> L31 java.lang.Throwable -> L3a
            goto L38
        L31:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L3a
            r5.a(r1, r2)     // Catch: java.lang.Throwable -> L3a
        L38:
            monitor-exit(r4)
            return
        L3a:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }
}
