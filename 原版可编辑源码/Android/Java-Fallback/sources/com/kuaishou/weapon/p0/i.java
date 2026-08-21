package com.kuaishou.weapon.p0;

public class i {
    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    private static byte a(byte r6, byte r7) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "0x"
            r0.<init>(r1)
            java.lang.String r2 = new java.lang.String
            r3 = 1
            byte[] r4 = new byte[r3]
            r5 = 0
            r4[r5] = r6
            r2.<init>(r4)
            r0.append(r2)
            java.lang.String r6 = r0.toString()
            java.lang.Byte r6 = java.lang.Byte.decode(r6)
            byte r6 = r6.byteValue()
            char r6 = (char) r6
            int r6 = r6 << 4
            char r6 = (char) r6
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r1)
            java.lang.String r1 = new java.lang.String
            byte[] r2 = new byte[r3]
            r2[r5] = r7
            r1.<init>(r2)
            r0.append(r1)
            java.lang.String r7 = r0.toString()
            java.lang.Byte r7 = java.lang.Byte.decode(r7)
            byte r7 = r7.byteValue()
            char r7 = (char) r7
            r6 = r6 ^ r7
            byte r6 = (byte) r6
            return r6
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2) {
            if (r1 == 0) goto L13
            if (r2 != 0) goto L5
            goto L13
        L5:
            java.lang.String r0 = new java.lang.String
            byte[] r1 = c(r1)
            byte[] r1 = c(r1, r2)
            r0.<init>(r1)
            return r0
        L13:
            r1 = 0
            return r1
    }

    private static java.lang.String a(byte[] r3) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            int r1 = r3.length
            r0.<init>(r1)
            r1 = 0
        L7:
            int r2 = r3.length
            if (r1 >= r2) goto L13
            r2 = r3[r1]
            char r2 = (char) r2
            r0.append(r2)
            int r1 = r1 + 1
            goto L7
        L13:
            java.lang.String r3 = r0.toString()
            return r3
    }

    private static byte[] a(java.lang.String r7) {
            byte[] r7 = r7.getBytes()
            r0 = 256(0x100, float:3.59E-43)
            byte[] r1 = new byte[r0]
            r2 = 0
            r3 = r2
        La:
            if (r3 >= r0) goto L12
            byte r4 = (byte) r3
            r1[r3] = r4
            int r3 = r3 + 1
            goto La
        L12:
            if (r7 == 0) goto L38
            int r3 = r7.length
            if (r3 != 0) goto L18
            goto L38
        L18:
            r3 = r2
            r4 = r3
        L1a:
            if (r2 >= r0) goto L37
            r5 = r7[r3]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r6 = r1[r2]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r5 = r5 + r6
            int r5 = r5 + r4
            r4 = r5 & 255(0xff, float:3.57E-43)
            r5 = r1[r2]
            r6 = r1[r4]
            r1[r2] = r6
            r1[r4] = r5
            int r3 = r3 + 1
            int r5 = r7.length
            int r3 = r3 % r5
            int r2 = r2 + 1
            goto L1a
        L37:
            return r1
        L38:
            r7 = 0
            return r7
    }

    public static byte[] a(byte[] r0, java.lang.String r1) {
            if (r0 == 0) goto La
            if (r1 != 0) goto L5
            goto La
        L5:
            byte[] r0 = c(r0, r1)
            return r0
        La:
            r0 = 0
            return r0
    }

    private static java.lang.String b(java.lang.String r5) {
            java.lang.String r0 = ""
            r1 = 0
        L3:
            int r2 = r5.length()
            if (r1 >= r2) goto L3a
            char r2 = r5.charAt(r1)
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            int r3 = r2.length()
            r4 = 1
            if (r3 != r4) goto L28
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "0"
            r3.<init>(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
        L28:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r2)
            java.lang.String r0 = r3.toString()
            int r1 = r1 + 1
            goto L3
        L3a:
            return r0
    }

    private static byte[] b(java.lang.String r0, java.lang.String r1) {
            if (r0 == 0) goto Le
            if (r1 != 0) goto L5
            goto Le
        L5:
            byte[] r0 = r0.getBytes()
            byte[] r0 = c(r0, r1)
            return r0
        Le:
            r0 = 0
            return r0
    }

    public static byte[] b(byte[] r0, java.lang.String r1) {
            if (r0 == 0) goto La
            if (r1 != 0) goto L5
            goto La
        L5:
            byte[] r0 = c(r0, r1)
            return r0
        La:
            r0 = 0
            return r0
    }

    private static byte[] c(java.lang.String r5) {
            int r0 = r5.length()
            int r0 = r0 / 2
            byte[] r1 = new byte[r0]
            byte[] r5 = r5.getBytes()
            r2 = 0
        Ld:
            if (r2 >= r0) goto L20
            int r3 = r2 * 2
            r4 = r5[r3]
            int r3 = r3 + 1
            r3 = r5[r3]
            byte r3 = a(r4, r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto Ld
        L20:
            return r1
    }

    private static byte[] c(byte[] r6, java.lang.String r7) {
            byte[] r7 = a(r7)
            int r0 = r6.length
            byte[] r0 = new byte[r0]
            r1 = 0
            r2 = r1
            r3 = r2
        La:
            int r4 = r6.length
            if (r1 >= r4) goto L36
            int r2 = r2 + 1
            r2 = r2 & 255(0xff, float:3.57E-43)
            r4 = r7[r2]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r4 = r4 + r3
            r3 = r4 & 255(0xff, float:3.57E-43)
            r4 = r7[r2]
            r5 = r7[r3]
            r7[r2] = r5
            r7[r3] = r4
            r4 = r7[r2]
            r4 = r4 & 255(0xff, float:3.57E-43)
            r5 = r7[r3]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r4 = r4 + r5
            r4 = r4 & 255(0xff, float:3.57E-43)
            r5 = r6[r1]
            r4 = r7[r4]
            r4 = r4 ^ r5
            byte r4 = (byte) r4
            r0[r1] = r4
            int r1 = r1 + 1
            goto La
        L36:
            return r0
    }
}
