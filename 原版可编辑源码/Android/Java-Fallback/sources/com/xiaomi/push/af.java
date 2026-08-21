package com.xiaomi.push;

public class af {
    public static int a(byte[] r2) {
            int r0 = r2.length
            r1 = 4
            if (r0 != r1) goto L23
            r0 = 0
            r1 = r2[r0]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 24
            r0 = r0 | r1
            r1 = 1
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            r1 = 2
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            r1 = 3
            r2 = r2[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            r2 = r2 | r0
            return r2
        L23:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "the length of bytes must be 4"
            r2.<init>(r0)
            throw r2
    }

    public static byte[] a(int r3) {
            r0 = 4
            byte[] r0 = new byte[r0]
            int r1 = r3 >> 24
            byte r1 = (byte) r1
            r2 = 0
            r0[r2] = r1
            int r1 = r3 >> 16
            byte r1 = (byte) r1
            r2 = 1
            r0[r2] = r1
            int r1 = r3 >> 8
            byte r1 = (byte) r1
            r2 = 2
            r0[r2] = r1
            byte r3 = (byte) r3
            r1 = 3
            r0[r1] = r3
            return r0
    }
}
