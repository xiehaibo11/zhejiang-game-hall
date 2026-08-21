package com.alipay.sdk.m.l0;

public class f {
    public static final java.util.regex.Pattern a = null;

    static {
            java.lang.String r0 = "([\t\r\n])+"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.alipay.sdk.m.l0.f.a = r0
            return
    }

    public static int a(java.lang.String r3) {
            int r0 = r3.length()
            r1 = 0
            if (r0 <= 0) goto L18
            char[] r3 = r3.toCharArray()
            r0 = 0
        Lc:
            int r2 = r3.length
            if (r1 >= r2) goto L17
            int r0 = r0 * 31
            char r2 = r3[r1]
            int r0 = r0 + r2
            int r1 = r1 + 1
            goto Lc
        L17:
            r1 = r0
        L18:
            return r1
    }

    public static boolean a(java.lang.String r0) {
            if (r0 == 0) goto La
            int r0 = r0.length()
            if (r0 <= 0) goto La
            r0 = 0
            return r0
        La:
            r0 = 1
            return r0
    }
}
