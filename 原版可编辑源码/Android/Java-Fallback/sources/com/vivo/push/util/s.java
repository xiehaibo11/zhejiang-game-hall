package com.vivo.push.util;

public final class s {
    public static int a(com.vivo.push.b.c r13) {
            com.vivo.push.util.w r0 = com.vivo.push.util.w.b()
            int r1 = r13.b()
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "com.vivo.push_preferences.operate."
            r4.<init>(r5)
            r4.append(r1)
            java.lang.String r6 = "OPERATE_COUNT"
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            int r4 = r0.a(r4)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>(r5)
            r7.append(r1)
            java.lang.String r8 = "START_TIME"
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            r9 = 0
            long r11 = r0.b(r7, r9)
            long r2 = r2 - r11
            r11 = 86400000(0x5265c00, double:4.2687272E-316)
            int r7 = (r2 > r11 ? 1 : (r2 == r11 ? 0 : -1))
            r11 = 1
            if (r7 > 0) goto L65
            int r2 = (r2 > r9 ? 1 : (r2 == r9 ? 0 : -1))
            if (r2 >= 0) goto L48
            goto L65
        L48:
            int r13 = r13.f()
            if (r4 < r13) goto L51
            r13 = 1001(0x3e9, float:1.403E-42)
            return r13
        L51:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>(r5)
            r13.append(r1)
            r13.append(r6)
            java.lang.String r13 = r13.toString()
            int r4 = r4 + r11
            r0.a(r13, r4)
            goto L8d
        L65:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>(r5)
            r13.append(r1)
            r13.append(r8)
            java.lang.String r13 = r13.toString()
            long r2 = java.lang.System.currentTimeMillis()
            r0.a(r13, r2)
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>(r5)
            r13.append(r1)
            r13.append(r6)
            java.lang.String r13 = r13.toString()
            r0.a(r13, r11)
        L8d:
            r13 = 0
            return r13
    }
}
