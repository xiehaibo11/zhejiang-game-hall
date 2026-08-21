package com.cmic.gen.sdk.e;

public class p {
    public static java.lang.String[] a(boolean r13) {
            java.lang.String r0 = "onlyMobileDataIp "
            java.lang.String r1 = "UmcIPUtils"
            r2 = 2
            java.lang.String[] r2 = new java.lang.String[r2]
            r3 = 0
            java.lang.String r4 = ""
            r2[r3] = r4
            r5 = 1
            r2[r5] = r4
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.util.Enumeration r7 = java.net.NetworkInterface.getNetworkInterfaces()     // Catch: java.lang.Exception -> Le9
        L1d:
            boolean r8 = r7.hasMoreElements()     // Catch: java.lang.Exception -> Le9
            if (r8 == 0) goto L7a
            java.lang.Object r8 = r7.nextElement()     // Catch: java.lang.Exception -> Le9
            java.net.NetworkInterface r8 = (java.net.NetworkInterface) r8     // Catch: java.lang.Exception -> Le9
            if (r13 == 0) goto L3c
            java.lang.String r9 = r8.getName()     // Catch: java.lang.Exception -> Le9
            java.lang.String r9 = r9.toLowerCase()     // Catch: java.lang.Exception -> Le9
            java.lang.String r10 = "wlan"
            boolean r9 = r9.contains(r10)     // Catch: java.lang.Exception -> Le9
            if (r9 == 0) goto L3c
            goto L1d
        L3c:
            java.util.Enumeration r8 = r8.getInetAddresses()     // Catch: java.lang.Exception -> Le9
        L40:
            boolean r9 = r8.hasMoreElements()     // Catch: java.lang.Exception -> Le9
            if (r9 == 0) goto L1d
            java.lang.Object r9 = r8.nextElement()     // Catch: java.lang.Exception -> Le9
            java.net.InetAddress r9 = (java.net.InetAddress) r9     // Catch: java.lang.Exception -> Le9
            boolean r10 = r9.isLoopbackAddress()     // Catch: java.lang.Exception -> Le9
            if (r10 != 0) goto L40
            boolean r10 = r9.isLinkLocalAddress()     // Catch: java.lang.Exception -> Le9
            if (r10 != 0) goto L40
            java.lang.String r10 = r9.getHostAddress()     // Catch: java.lang.Exception -> Le9
            boolean r11 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> Le9
            if (r11 != 0) goto L40
            boolean r11 = r9 instanceof java.net.Inet6Address     // Catch: java.lang.Exception -> Le9
            java.lang.String r12 = ","
            if (r11 == 0) goto L6f
            r4.append(r10)     // Catch: java.lang.Exception -> Le9
            r4.append(r12)     // Catch: java.lang.Exception -> Le9
            goto L40
        L6f:
            boolean r9 = r9 instanceof java.net.Inet4Address     // Catch: java.lang.Exception -> Le9
            if (r9 == 0) goto L40
            r6.append(r10)     // Catch: java.lang.Exception -> Le9
            r6.append(r12)     // Catch: java.lang.Exception -> Le9
            goto L40
        L7a:
            boolean r7 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Le9
            if (r7 != 0) goto L8d
            int r7 = r4.length()     // Catch: java.lang.Exception -> Le9
            int r7 = r7 - r5
            int r8 = r4.length()     // Catch: java.lang.Exception -> Le9
            java.lang.StringBuilder r4 = r4.delete(r7, r8)     // Catch: java.lang.Exception -> Le9
        L8d:
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> Le9
            if (r7 != 0) goto La0
            int r7 = r6.length()     // Catch: java.lang.Exception -> Le9
            int r7 = r7 - r5
            int r8 = r6.length()     // Catch: java.lang.Exception -> Le9
            java.lang.StringBuilder r6 = r6.delete(r7, r8)     // Catch: java.lang.Exception -> Le9
        La0:
            java.lang.String r7 = r6.toString()     // Catch: java.lang.Exception -> Le9
            r2[r3] = r7     // Catch: java.lang.Exception -> Le9
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Exception -> Le9
            r2[r5] = r3     // Catch: java.lang.Exception -> Le9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            r3.<init>()     // Catch: java.lang.Exception -> Le9
            r3.append(r0)     // Catch: java.lang.Exception -> Le9
            r3.append(r13)     // Catch: java.lang.Exception -> Le9
            java.lang.String r5 = " IPV6 ip："
            r3.append(r5)     // Catch: java.lang.Exception -> Le9
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Le9
            r3.append(r4)     // Catch: java.lang.Exception -> Le9
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Le9
            com.cmic.gen.sdk.e.c.b(r1, r3)     // Catch: java.lang.Exception -> Le9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le9
            r3.<init>()     // Catch: java.lang.Exception -> Le9
            r3.append(r0)     // Catch: java.lang.Exception -> Le9
            r3.append(r13)     // Catch: java.lang.Exception -> Le9
            java.lang.String r13 = " IPV4 ip："
            r3.append(r13)     // Catch: java.lang.Exception -> Le9
            java.lang.String r13 = r6.toString()     // Catch: java.lang.Exception -> Le9
            r3.append(r13)     // Catch: java.lang.Exception -> Le9
            java.lang.String r13 = r3.toString()     // Catch: java.lang.Exception -> Le9
            com.cmic.gen.sdk.e.c.b(r1, r13)     // Catch: java.lang.Exception -> Le9
            return r2
        Le9:
            r13 = move-exception
            r13.printStackTrace()
            return r2
    }
}
