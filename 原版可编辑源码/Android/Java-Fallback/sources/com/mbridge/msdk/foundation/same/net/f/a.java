package com.mbridge.msdk.foundation.same.net.f;

public final class a {
    public static java.lang.String a(com.mbridge.msdk.foundation.same.net.a.a r4) {
            java.lang.String r0 = "Network error,Load failed"
            if (r4 != 0) goto L5
            return r0
        L5:
            int r1 = r4.a     // Catch: java.lang.Exception -> L86
            r2 = 0
            com.mbridge.msdk.foundation.same.net.e.c r3 = r4.b     // Catch: java.lang.Exception -> L86
            if (r3 == 0) goto L10
            com.mbridge.msdk.foundation.same.net.e.c r2 = r4.b     // Catch: java.lang.Exception -> L86
            int r2 = r2.a     // Catch: java.lang.Exception -> L86
        L10:
            r3 = -2
            if (r1 == r3) goto L83
            switch(r1) {
                case 1: goto L8a;
                case 2: goto L80;
                case 3: goto L7d;
                case 4: goto L7a;
                case 5: goto L77;
                case 6: goto L60;
                case 7: goto L49;
                case 8: goto L46;
                case 9: goto L43;
                case 10: goto L40;
                case 11: goto L3d;
                case 12: goto L3a;
                case 13: goto L22;
                case 14: goto L1e;
                case 15: goto L1a;
                default: goto L16;
            }     // Catch: java.lang.Exception -> L86
        L16:
            java.lang.String r0 = "Network error,unknown"
            goto L8a
        L1a:
            java.lang.String r0 = "Network error,I/O exception contents null"
            goto L8a
        L1e:
            java.lang.String r0 = "Network error,I/O exception response null"
            goto L8a
        L22:
            com.mbridge.msdk.foundation.same.net.e.c r1 = r4.b     // Catch: java.lang.Exception -> L86
            if (r1 == 0) goto L37
            com.mbridge.msdk.foundation.same.net.e.c r4 = r4.b     // Catch: java.lang.Exception -> L86
            byte[] r4 = r4.b     // Catch: java.lang.Exception -> L86
            if (r4 == 0) goto L33
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L86
            r1.<init>(r4)     // Catch: java.lang.Exception -> L86
            r0 = r1
            goto L8a
        L33:
            java.lang.String r4 = "Socket exception message is NULL"
            r0 = r4
            goto L8a
        L37:
            java.lang.String r0 = "Unknown socket exception"
            goto L8a
        L3a:
            java.lang.String r0 = "Network error,ConnectException"
            goto L8a
        L3d:
            java.lang.String r0 = "Network error，sslp exception"
            goto L8a
        L40:
            java.lang.String r0 = "Network error,socket timeout exception"
            goto L8a
        L43:
            java.lang.String r0 = "Network error,UnknownHostException"
            goto L8a
        L46:
            java.lang.String r0 = "Cast exception, return data can not be casted correctly"
            goto L8a
        L49:
            if (r2 == 0) goto L5d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L86
            r4.<init>()     // Catch: java.lang.Exception -> L86
            java.lang.String r1 = "The server returns an exception state code "
            r4.append(r1)     // Catch: java.lang.Exception -> L86
            r4.append(r2)     // Catch: java.lang.Exception -> L86
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> L86
            goto L8a
        L5d:
            java.lang.String r0 = "The server returns an exception "
            goto L8a
        L60:
            if (r2 == 0) goto L74
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L86
            r4.<init>()     // Catch: java.lang.Exception -> L86
            java.lang.String r1 = "Network error,please check state code "
            r4.append(r1)     // Catch: java.lang.Exception -> L86
            r4.append(r2)     // Catch: java.lang.Exception -> L86
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> L86
            goto L8a
        L74:
            java.lang.String r0 = "Network error,please check "
            goto L8a
        L77:
            java.lang.String r0 = "Network error，https is not work,please check your phone time"
            goto L8a
        L7a:
            java.lang.String r0 = "Network unknown error"
            goto L8a
        L7d:
            java.lang.String r0 = "Network error,timeout exception"
            goto L8a
        L80:
            java.lang.String r0 = "Network error,I/O exception"
            goto L8a
        L83:
            java.lang.String r0 = "Network is canceled"
            goto L8a
        L86:
            r4 = move-exception
            r4.printStackTrace()
        L8a:
            return r0
    }
}
