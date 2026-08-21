package com.bykv.vk.openvk.api.plugin.df;

public class q {
    private static final char[] rg = null;

    static {
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            com.bykv.vk.openvk.api.plugin.df.q.rg = r0
            return
    }

    public static java.lang.String rg(byte[] r2) {
            if (r2 == 0) goto L9
            r0 = 0
            int r1 = r2.length
            java.lang.String r2 = rg(r2, r0, r1)
            return r2
        L9:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "bytes is null"
            r2.<init>(r0)
            throw r2
    }

    public static java.lang.String rg(byte[] r9, int r10, int r11) {
            if (r9 == 0) goto L39
            if (r10 < 0) goto L33
            int r0 = r10 + r11
            int r1 = r9.length
            if (r0 > r1) goto L33
            int r0 = r11 * 2
            char[] r1 = new char[r0]
            r2 = 0
            r3 = r2
            r4 = r3
        L10:
            if (r3 >= r11) goto L2d
            int r5 = r3 + r10
            r5 = r9[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r6 = r4 + 1
            char[] r7 = com.bykv.vk.openvk.api.plugin.df.q.rg
            int r8 = r5 >> 4
            char r8 = r7[r8]
            r1[r4] = r8
            int r4 = r6 + 1
            r5 = r5 & 15
            char r5 = r7[r5]
            r1[r6] = r5
            int r3 = r3 + 1
            goto L10
        L2d:
            java.lang.String r9 = new java.lang.String
            r9.<init>(r1, r2, r0)
            return r9
        L33:
            java.lang.IndexOutOfBoundsException r9 = new java.lang.IndexOutOfBoundsException
            r9.<init>()
            throw r9
        L39:
            java.lang.NullPointerException r9 = new java.lang.NullPointerException
            java.lang.String r10 = "bytes is null"
            r9.<init>(r10)
            throw r9
    }
}
