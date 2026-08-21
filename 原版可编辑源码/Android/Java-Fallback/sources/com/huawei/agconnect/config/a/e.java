package com.huawei.agconnect.config.a;

public class e {
    private static final char[] a = null;

    static {
            java.lang.String r0 = "0123456789ABCDEF"
            char[] r0 = r0.toCharArray()
            com.huawei.agconnect.config.a.e.a = r0
            return
    }

    public static java.lang.String a(byte[] r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r6.length
            int r1 = r1 * 2
            r0.<init>(r1)
            int r1 = r6.length
            r2 = 0
        La:
            if (r2 >= r1) goto L25
            r3 = r6[r2]
            char[] r4 = com.huawei.agconnect.config.a.e.a
            int r5 = r3 >> 4
            r5 = r5 & 15
            char r4 = r4[r5]
            r0.append(r4)
            char[] r4 = com.huawei.agconnect.config.a.e.a
            r3 = r3 & 15
            char r3 = r4[r3]
            r0.append(r3)
            int r2 = r2 + 1
            goto La
        L25:
            java.lang.String r6 = r0.toString()
            return r6
    }

    public static byte[] a(java.lang.String r0) {
            char[] r0 = r0.toCharArray()
            byte[] r0 = a(r0)
            return r0
    }

    private static byte[] a(char[] r8) {
            int r0 = r8.length
            r0 = r0 & 1
            if (r0 != 0) goto L5e
            int r0 = r8.length
            int r0 = r0 >> 1
            byte[] r0 = new byte[r0]
            r1 = 0
            r2 = r1
        Lc:
            int r3 = r8.length
            if (r1 >= r3) goto L5d
            char r3 = r8[r1]
            r4 = 16
            int r3 = java.lang.Character.digit(r3, r4)
            java.lang.String r5 = "Illegal hexadecimal character at index "
            r6 = -1
            if (r3 == r6) goto L48
            int r1 = r1 + 1
            char r7 = r8[r1]
            int r4 = java.lang.Character.digit(r7, r4)
            if (r4 == r6) goto L33
            int r1 = r1 + 1
            int r3 = r3 << 4
            r3 = r3 | r4
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r0[r2] = r3
            int r2 = r2 + 1
            goto Lc
        L33:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r8.<init>(r0)
            throw r8
        L48:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r8.<init>(r0)
            throw r8
        L5d:
            return r0
        L5e:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Odd number of characters."
            r8.<init>(r0)
            throw r8
    }
}
