package com.xiaomi.push;

public class fy {
    public static int a(java.lang.Throwable r4) {
            boolean r0 = r4 instanceof com.xiaomi.push.gh
            if (r0 == 0) goto L11
            r1 = r4
            com.xiaomi.push.gh r1 = (com.xiaomi.push.gh) r1
            java.lang.Throwable r2 = r1.a()
            if (r2 == 0) goto L11
            java.lang.Throwable r4 = r1.a()
        L11:
            java.lang.String r1 = r4.getMessage()
            java.lang.Throwable r2 = r4.getCause()
            if (r2 == 0) goto L23
            java.lang.Throwable r1 = r4.getCause()
            java.lang.String r1 = r1.getMessage()
        L23:
            boolean r2 = r4 instanceof java.net.SocketTimeoutException
            r3 = 105(0x69, float:1.47E-43)
            if (r2 == 0) goto L2a
            return r3
        L2a:
            boolean r2 = r4 instanceof java.net.SocketException
            if (r2 == 0) goto L88
            java.lang.String r4 = "Network is unreachable"
            int r4 = r1.indexOf(r4)
            r0 = -1
            if (r4 == r0) goto L3a
            r4 = 102(0x66, float:1.43E-43)
            return r4
        L3a:
            java.lang.String r4 = "Connection refused"
            int r4 = r1.indexOf(r4)
            if (r4 == r0) goto L45
            r4 = 103(0x67, float:1.44E-43)
            return r4
        L45:
            java.lang.String r4 = "Connection timed out"
            int r4 = r1.indexOf(r4)
            if (r4 == r0) goto L4e
            return r3
        L4e:
            java.lang.String r4 = "EACCES (Permission denied)"
            boolean r4 = r1.endsWith(r4)
            if (r4 == 0) goto L59
            r4 = 101(0x65, float:1.42E-43)
            return r4
        L59:
            java.lang.String r4 = "Connection reset by peer"
            int r4 = r1.indexOf(r4)
            if (r4 == r0) goto L64
            r4 = 109(0x6d, float:1.53E-43)
            return r4
        L64:
            java.lang.String r4 = "Broken pipe"
            int r4 = r1.indexOf(r4)
            if (r4 == r0) goto L6f
            r4 = 110(0x6e, float:1.54E-43)
            return r4
        L6f:
            java.lang.String r4 = "No route to host"
            int r4 = r1.indexOf(r4)
            if (r4 == r0) goto L7a
            r4 = 104(0x68, float:1.46E-43)
            return r4
        L7a:
            java.lang.String r4 = "EINVAL (Invalid argument)"
            boolean r4 = r1.endsWith(r4)
            if (r4 == 0) goto L85
            r4 = 106(0x6a, float:1.49E-43)
            return r4
        L85:
            r4 = 199(0xc7, float:2.79E-43)
            return r4
        L88:
            boolean r4 = r4 instanceof java.net.UnknownHostException
            if (r4 == 0) goto L8f
            r4 = 107(0x6b, float:1.5E-43)
            return r4
        L8f:
            if (r0 == 0) goto L94
            r4 = 399(0x18f, float:5.59E-43)
            return r4
        L94:
            r4 = 0
            return r4
    }
}
