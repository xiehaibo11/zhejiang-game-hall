package com.ta.utdid2.a.a;

public class f {
    private static final java.util.regex.Pattern a = null;

    static {
            java.lang.String r0 = "([\t\r\n])+"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.ta.utdid2.a.a.f.a = r0
            return
    }

    public static int hashCode(java.lang.String r3) {
            int r0 = r3.length()
            r1 = 0
            if (r0 <= 0) goto L17
            char[] r3 = r3.toCharArray()
            r0 = 0
        Lc:
            int r2 = r3.length
            if (r1 >= r2) goto L18
            int r0 = r0 * 31
            char r2 = r3[r1]
            int r0 = r0 + r2
            int r1 = r1 + 1
            goto Lc
        L17:
            r0 = 0
        L18:
            return r0
    }

    public static boolean isEmpty(java.lang.String r0) {
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
