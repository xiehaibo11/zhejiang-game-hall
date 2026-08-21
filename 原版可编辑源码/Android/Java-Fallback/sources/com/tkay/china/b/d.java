package com.tkay.china.b;

public final class d {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a() {
            java.lang.String r0 = ""
            java.util.Enumeration r1 = java.net.NetworkInterface.getNetworkInterfaces()     // Catch: java.lang.Exception -> L61
            java.util.ArrayList r1 = java.util.Collections.list(r1)     // Catch: java.lang.Exception -> L61
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L61
        Le:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L61
            if (r2 == 0) goto L65
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L61
            java.net.NetworkInterface r2 = (java.net.NetworkInterface) r2     // Catch: java.lang.Exception -> L61
            java.lang.String r3 = r2.getName()     // Catch: java.lang.Exception -> L61
            java.lang.String r4 = "wlan0"
            boolean r3 = r3.equalsIgnoreCase(r4)     // Catch: java.lang.Exception -> L61
            if (r3 == 0) goto Le
            byte[] r1 = r2.getHardwareAddress()     // Catch: java.lang.Exception -> L61
            if (r1 != 0) goto L2d
            return r0
        L2d:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L61
            r2.<init>()     // Catch: java.lang.Exception -> L61
            int r3 = r1.length     // Catch: java.lang.Exception -> L61
            r4 = 0
            r5 = r4
        L35:
            r6 = 1
            if (r5 >= r3) goto L4e
            r7 = r1[r5]     // Catch: java.lang.Exception -> L61
            java.lang.Byte r7 = java.lang.Byte.valueOf(r7)     // Catch: java.lang.Exception -> L61
            java.lang.String r8 = "%02X:"
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> L61
            r6[r4] = r7     // Catch: java.lang.Exception -> L61
            java.lang.String r6 = java.lang.String.format(r8, r6)     // Catch: java.lang.Exception -> L61
            r2.append(r6)     // Catch: java.lang.Exception -> L61
            int r5 = r5 + 1
            goto L35
        L4e:
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L61
            if (r1 != 0) goto L5c
            int r1 = r2.length()     // Catch: java.lang.Exception -> L61
            int r1 = r1 - r6
            r2.deleteCharAt(r1)     // Catch: java.lang.Exception -> L61
        L5c:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L61
            return r0
        L61:
            r1 = move-exception
            r1.printStackTrace()
        L65:
            return r0
    }

    public static java.lang.String a(android.content.Context r2) {
            if (r2 != 0) goto L5
            java.lang.String r2 = ""
            return r2
        L5:
            r0 = 0
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L17
            java.lang.String r1 = "wifi"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Throwable -> L17
            android.net.wifi.WifiManager r2 = (android.net.wifi.WifiManager) r2     // Catch: java.lang.Throwable -> L17
            android.net.wifi.WifiInfo r2 = r2.getConnectionInfo()     // Catch: java.lang.Throwable -> L17
            goto L1c
        L17:
            r2 = move-exception
            r2.printStackTrace()
            r2 = r0
        L1c:
            if (r2 != 0) goto L1f
            return r0
        L1f:
            java.lang.String r2 = r2.getMacAddress()
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L2f
            java.util.Locale r0 = java.util.Locale.ENGLISH
            java.lang.String r2 = r2.toUpperCase(r0)
        L2f:
            return r2
    }

    private static java.lang.String b(android.content.Context r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = "mac"
            boolean r0 = r0.c(r1)
            if (r0 == 0) goto Lf
            java.lang.String r2 = ""
            return r2
        Lf:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 >= r1) goto L1a
            java.lang.String r2 = a(r2)
            goto L1e
        L1a:
            java.lang.String r2 = a()
        L1e:
            return r2
    }
}
