package com.loc;

public final class eo {
    private static java.text.SimpleDateFormat a;
    private static java.lang.String b;

    static {
            return
    }

    public static java.lang.String a(byte[] r5, java.lang.String r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            if (r5 == 0) goto L3c
            int r1 = r5.length
            if (r1 > 0) goto Lb
            goto L3c
        Lb:
            r1 = 0
        Lc:
            int r2 = r5.length
            if (r1 >= r2) goto L37
            r2 = r5[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            int r3 = r2.length()
            r4 = 2
            if (r3 >= r4) goto L23
            java.lang.String r3 = "0"
            r0.append(r3)
        L23:
            r0.append(r2)
            int r2 = r6.length()
            if (r2 <= 0) goto L34
            int r2 = r5.length
            int r2 = r2 + (-1)
            if (r1 >= r2) goto L34
            r0.append(r6)
        L34:
            int r1 = r1 + 1
            goto Lc
        L37:
            java.lang.String r5 = r0.toString()
            return r5
        L3c:
            r5 = 0
            return r5
    }

    public static byte[] a(long r7) {
            r0 = 6
            byte[] r1 = new byte[r0]
            r2 = 0
        L4:
            if (r2 >= r0) goto L18
            int r3 = 6 - r2
            int r3 = r3 + (-1)
            int r3 = r3 * 8
            long r3 = r7 >> r3
            r5 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r5
            int r4 = (int) r3
            byte r3 = (byte) r4
            r1[r2] = r3
            int r2 = r2 + 1
            goto L4
        L18:
            return r1
    }
}
