package com.tkay.expressad.foundation.g.f.g;

public final class a {
    public static final int a = -2;
    public static final int b = 1;
    public static final int c = 2;
    public static final int d = 3;
    public static final int e = 4;
    public static final int f = 5;
    public static final int g = 6;
    public static final int h = 7;
    public static final int i = 8;
    public static final int j = 9;
    public static final int k = 10;
    public static final int l = 11;
    public static final int m = 12;
    public static final int n = 13;
    public static final int o = 14;
    public static final int p = 15;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(com.tkay.expressad.foundation.g.f.a.a r3) {
            if (r3 == 0) goto L55
            int r0 = r3.a     // Catch: java.lang.Exception -> L51
            r1 = 0
            com.tkay.expressad.foundation.g.f.f.c r2 = r3.b     // Catch: java.lang.Exception -> L51
            if (r2 == 0) goto Ld
            com.tkay.expressad.foundation.g.f.f.c r3 = r3.b     // Catch: java.lang.Exception -> L51
            int r1 = r3.a     // Catch: java.lang.Exception -> L51
        Ld:
            r3 = -2
            if (r0 == r3) goto L4e
            r3 = 1
            if (r0 == r3) goto L55
            switch(r0) {
                case 3: goto L4b;
                case 4: goto L48;
                case 5: goto L45;
                case 6: goto L35;
                case 7: goto L25;
                case 8: goto L22;
                case 9: goto L1f;
                case 10: goto L1c;
                case 11: goto L19;
                case 12: goto L1f;
                default: goto L16;
            }     // Catch: java.lang.Exception -> L51
        L16:
            java.lang.String r3 = "Network error,I/O exception"
            goto L57
        L19:
            java.lang.String r3 = "Network error,sslp exception"
            goto L57
        L1c:
            java.lang.String r3 = "Network error,socket timeout exception"
            goto L57
        L1f:
            java.lang.String r3 = "Network error,disconnected network exception"
            goto L57
        L22:
            java.lang.String r3 = "Cast exception, return data can't be casted correctly"
            goto L57
        L25:
            if (r1 == 0) goto L32
            java.lang.String r3 = "The server returns an exception state code "
            java.lang.String r0 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> L51
            java.lang.String r3 = r3.concat(r0)     // Catch: java.lang.Exception -> L51
            goto L57
        L32:
            java.lang.String r3 = "The server returns an exception "
            goto L57
        L35:
            if (r1 == 0) goto L42
            java.lang.String r3 = "Network error,please check state code"
            java.lang.String r0 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> L51
            java.lang.String r3 = r3.concat(r0)     // Catch: java.lang.Exception -> L51
            goto L57
        L42:
            java.lang.String r3 = "Network error,please check "
            goto L57
        L45:
            java.lang.String r3 = "Network error,https is not work,please check your phone time"
            goto L57
        L48:
            java.lang.String r3 = "Network unknown error"
            goto L57
        L4b:
            java.lang.String r3 = "Network error,timeout exception"
            goto L57
        L4e:
            java.lang.String r3 = "Network is canceled"
            goto L57
        L51:
            r3 = move-exception
            r3.printStackTrace()
        L55:
            java.lang.String r3 = "Network error,Load failed"
        L57:
            return r3
    }
}
