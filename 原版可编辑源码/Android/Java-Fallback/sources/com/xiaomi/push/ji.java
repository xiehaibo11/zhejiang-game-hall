package com.xiaomi.push;

public class ji {
    private static int a = Integer.MAX_VALUE;

    static {
            return
    }

    public static void a(com.xiaomi.push.jf r1, byte r2) {
            int r0 = com.xiaomi.push.ji.a
            a(r1, r2, r0)
            return
    }

    public static void a(com.xiaomi.push.jf r3, byte r4, int r5) {
            if (r5 <= 0) goto L86
            r0 = 0
            switch(r4) {
                case 2: goto L82;
                case 3: goto L7e;
                case 4: goto L7a;
                case 5: goto L6;
                case 6: goto L76;
                case 7: goto L6;
                case 8: goto L72;
                case 9: goto L6;
                case 10: goto L6e;
                case 11: goto L6a;
                case 12: goto L50;
                case 13: goto L35;
                case 14: goto L1f;
                case 15: goto L8;
                default: goto L6;
            }
        L6:
            goto L85
        L8:
            com.xiaomi.push.jd r4 = r3.a()
        Lc:
            int r1 = r4.a
            if (r0 >= r1) goto L1a
            byte r1 = r4.a
            int r2 = r5 + (-1)
            a(r3, r1, r2)
            int r0 = r0 + 1
            goto Lc
        L1a:
            r3.i()
            goto L85
        L1f:
            com.xiaomi.push.jj r4 = r3.a()
        L23:
            int r1 = r4.a
            if (r0 >= r1) goto L31
            byte r1 = r4.a
            int r2 = r5 + (-1)
            a(r3, r1, r2)
            int r0 = r0 + 1
            goto L23
        L31:
            r3.j()
            goto L85
        L35:
            com.xiaomi.push.je r4 = r3.a()
        L39:
            int r1 = r4.a
            if (r0 >= r1) goto L4c
            byte r1 = r4.a
            int r2 = r5 + (-1)
            a(r3, r1, r2)
            byte r1 = r4.b
            a(r3, r1, r2)
            int r0 = r0 + 1
            goto L39
        L4c:
            r3.h()
            goto L85
        L50:
            r3.a()
        L53:
            com.xiaomi.push.jc r4 = r3.a()
            byte r0 = r4.a
            if (r0 != 0) goto L5f
            r3.f()
            goto L85
        L5f:
            byte r4 = r4.a
            int r0 = r5 + (-1)
            a(r3, r4, r0)
            r3.g()
            goto L53
        L6a:
            r3.a()
            goto L85
        L6e:
            r3.a()
            goto L85
        L72:
            r3.a()
            goto L85
        L76:
            r3.a()
            goto L85
        L7a:
            r3.a()
            goto L85
        L7e:
            r3.a()
            goto L85
        L82:
            r3.a()
        L85:
            return
        L86:
            com.xiaomi.push.iz r3 = new com.xiaomi.push.iz
            java.lang.String r4 = "Maximum skip depth exceeded"
            r3.<init>(r4)
            throw r3
    }
}
