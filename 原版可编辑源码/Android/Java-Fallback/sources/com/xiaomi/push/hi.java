package com.xiaomi.push;

public class hi {
    public static boolean a(android.content.Context r2) {
            java.util.ArrayList<com.xiaomi.push.hn> r0 = com.xiaomi.push.service.ca.a
            boolean r0 = r0.isEmpty()
            r1 = 0
            if (r0 == 0) goto La
            return r1
        La:
            boolean r0 = com.xiaomi.push.bj.e(r2)
            if (r0 == 0) goto L17
            boolean r2 = com.xiaomi.push.j.b(r2)
            if (r2 == 0) goto L17
            r1 = 1
        L17:
            return r1
    }

    public static boolean a(android.content.Context r6, int r7) {
            r0 = 0
            if (r6 == 0) goto L32
            if (r7 > 0) goto L6
            goto L32
        L6:
            java.lang.String r6 = com.xiaomi.push.service.u.a(r6)
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L32
            r1 = 1
            r2 = r1
        L12:
            if (r2 > r7) goto L32
            r3 = 10
            int r3 = com.xiaomi.push.g.a(r3)
            int r4 = r6.length()
            int r4 = r4 - r1
            int r5 = r6.length()
            java.lang.String r4 = r6.substring(r4, r5)
            r5 = -1
            int r4 = com.xiaomi.push.w.a(r4, r5)
            if (r3 != r4) goto L2f
            return r1
        L2f:
            int r2 = r2 + 1
            goto L12
        L32:
            return r0
    }
}
