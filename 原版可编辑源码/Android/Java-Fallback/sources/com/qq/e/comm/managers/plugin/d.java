package com.qq.e.comm.managers.plugin;

class d {
    private static final java.lang.String[] a = null;

    static {
            java.lang.String r0 = "0"
            java.lang.String r1 = "1"
            java.lang.String r2 = "2"
            java.lang.String r3 = "3"
            java.lang.String r4 = "4"
            java.lang.String r5 = "5"
            java.lang.String r6 = "6"
            java.lang.String r7 = "7"
            java.lang.String r8 = "8"
            java.lang.String r9 = "9"
            java.lang.String r10 = "a"
            java.lang.String r11 = "b"
            java.lang.String r12 = "c"
            java.lang.String r13 = "d"
            java.lang.String r14 = "e"
            java.lang.String r15 = "f"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15}
            com.qq.e.comm.managers.plugin.d.a = r0
            return
    }

    public static java.lang.String a(byte[] r6) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r6.length
            if (r1 >= r2) goto L30
            r2 = r6[r1]
            if (r2 >= 0) goto Lf
            int r2 = r2 + 256
        Lf:
            int r3 = r2 / 16
            int r2 = r2 % 16
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String[] r5 = com.qq.e.comm.managers.plugin.d.a
            r3 = r5[r3]
            r4.append(r3)
            java.lang.String[] r3 = com.qq.e.comm.managers.plugin.d.a
            r2 = r3[r2]
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r0.append(r2)
            int r1 = r1 + 1
            goto L6
        L30:
            java.lang.String r6 = r0.toString()
            return r6
    }
}
