package com.xiaomi.push;

public class ai {
    static final char[] a = null;

    static {
            java.lang.String r0 = "0123456789ABCDEF"
            char[] r0 = r0.toCharArray()
            com.xiaomi.push.ai.a = r0
            return
    }

    public static java.lang.String a(byte[] r5, int r6, int r7) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r7 * 2
            r0.<init>(r1)
            r1 = 0
        L8:
            if (r1 >= r7) goto L25
            int r2 = r6 + r1
            r2 = r5[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            char[] r3 = com.xiaomi.push.ai.a
            int r4 = r2 >> 4
            char r3 = r3[r4]
            r0.append(r3)
            char[] r3 = com.xiaomi.push.ai.a
            r2 = r2 & 15
            char r2 = r3[r2]
            r0.append(r2)
            int r1 = r1 + 1
            goto L8
        L25:
            java.lang.String r5 = r0.toString()
            return r5
    }

    public static boolean a(android.content.Context r0) {
            boolean r0 = com.xiaomi.push.ah.a
            return r0
    }
}
