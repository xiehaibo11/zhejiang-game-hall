package com.xiaomi.push;

public class gy {
    private static java.util.Random a;
    private static final char[] a = null;
    private static final char[] b = null;
    private static final char[] c = null;
    private static final char[] d = null;
    private static final char[] e = null;
    private static char[] f;

    static {
            java.lang.String r0 = "&quot;"
            char[] r0 = r0.toCharArray()
            com.xiaomi.push.gy.a = r0
            java.lang.String r0 = "&apos;"
            char[] r0 = r0.toCharArray()
            com.xiaomi.push.gy.b = r0
            java.lang.String r0 = "&amp;"
            char[] r0 = r0.toCharArray()
            com.xiaomi.push.gy.c = r0
            java.lang.String r0 = "&lt;"
            char[] r0 = r0.toCharArray()
            com.xiaomi.push.gy.d = r0
            java.lang.String r0 = "&gt;"
            char[] r0 = r0.toCharArray()
            com.xiaomi.push.gy.e = r0
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            com.xiaomi.push.gy.a = r0
            java.lang.String r0 = "0123456789abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            char[] r0 = r0.toCharArray()
            com.xiaomi.push.gy.f = r0
            return
    }

    public static java.lang.String a(int r5) {
            r0 = 1
            if (r5 >= r0) goto L5
            r5 = 0
            return r5
        L5:
            char[] r0 = new char[r5]
            r1 = 0
        L8:
            if (r1 >= r5) goto L1b
            char[] r2 = com.xiaomi.push.gy.f
            java.util.Random r3 = com.xiaomi.push.gy.a
            r4 = 71
            int r3 = r3.nextInt(r4)
            char r2 = r2[r3]
            r0[r1] = r2
            int r1 = r1 + 1
            goto L8
        L1b:
            java.lang.String r5 = new java.lang.String
            r5.<init>(r0)
            return r5
    }

    public static java.lang.String a(java.lang.String r8) {
            if (r8 != 0) goto L4
            r8 = 0
            return r8
        L4:
            char[] r0 = r8.toCharArray()
            int r1 = r0.length
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            double r3 = (double) r1
            r5 = 4608533498688228557(0x3ff4cccccccccccd, double:1.3)
            double r3 = r3 * r5
            int r3 = (int) r3
            r2.<init>(r3)
            r3 = 0
            r4 = r3
        L18:
            if (r3 >= r1) goto Lb3
            char r5 = r0[r3]
            r6 = 62
            if (r5 <= r6) goto L22
            goto Laf
        L22:
            r7 = 60
            if (r5 != r7) goto L36
            if (r3 <= r4) goto L2d
            int r5 = r3 - r4
            r2.append(r0, r4, r5)
        L2d:
            int r4 = r3 + 1
            char[] r5 = com.xiaomi.push.gy.d
            r2.append(r5)
            goto Laf
        L36:
            if (r5 != r6) goto L47
            if (r3 <= r4) goto L3f
            int r5 = r3 - r4
            r2.append(r0, r4, r5)
        L3f:
            int r4 = r3 + 1
            char[] r5 = com.xiaomi.push.gy.e
            r2.append(r5)
            goto Laf
        L47:
            r6 = 38
            if (r5 != r6) goto L8a
            if (r3 <= r4) goto L52
            int r5 = r3 - r4
            r2.append(r0, r4, r5)
        L52:
            int r5 = r3 + 5
            if (r1 <= r5) goto L82
            int r6 = r3 + 1
            char r6 = r0[r6]
            r7 = 35
            if (r6 != r7) goto L82
            int r6 = r3 + 2
            char r6 = r0[r6]
            boolean r6 = java.lang.Character.isDigit(r6)
            if (r6 == 0) goto L82
            int r6 = r3 + 3
            char r6 = r0[r6]
            boolean r6 = java.lang.Character.isDigit(r6)
            if (r6 == 0) goto L82
            int r6 = r3 + 4
            char r6 = r0[r6]
            boolean r6 = java.lang.Character.isDigit(r6)
            if (r6 == 0) goto L82
            char r5 = r0[r5]
            r6 = 59
            if (r5 == r6) goto Laf
        L82:
            int r4 = r3 + 1
            char[] r5 = com.xiaomi.push.gy.c
            r2.append(r5)
            goto Laf
        L8a:
            r6 = 34
            if (r5 != r6) goto L9d
            if (r3 <= r4) goto L95
            int r5 = r3 - r4
            r2.append(r0, r4, r5)
        L95:
            int r4 = r3 + 1
            char[] r5 = com.xiaomi.push.gy.a
            r2.append(r5)
            goto Laf
        L9d:
            r6 = 39
            if (r5 != r6) goto Laf
            if (r3 <= r4) goto La8
            int r5 = r3 - r4
            r2.append(r0, r4, r5)
        La8:
            int r4 = r3 + 1
            char[] r5 = com.xiaomi.push.gy.b
            r2.append(r5)
        Laf:
            int r3 = r3 + 1
            goto L18
        Lb3:
            if (r4 != 0) goto Lb6
            return r8
        Lb6:
            if (r3 <= r4) goto Lbc
            int r3 = r3 - r4
            r2.append(r0, r4, r3)
        Lbc:
            java.lang.String r8 = r2.toString()
            return r8
    }

    public static final java.lang.String a(java.lang.String r6, java.lang.String r7, java.lang.String r8) {
            if (r6 != 0) goto L4
            r6 = 0
            return r6
        L4:
            r0 = 0
            int r1 = r6.indexOf(r7, r0)
            if (r1 < 0) goto L3e
            char[] r2 = r6.toCharArray()
            char[] r8 = r8.toCharArray()
            int r3 = r7.length()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            int r5 = r2.length
            r4.<init>(r5)
            r4.append(r2, r0, r1)
            r4.append(r8)
            int r1 = r1 + r3
        L24:
            int r0 = r6.indexOf(r7, r1)
            if (r0 <= 0) goto L35
            int r5 = r0 - r1
            r4.append(r2, r1, r5)
            r4.append(r8)
            int r1 = r0 + r3
            goto L24
        L35:
            int r6 = r2.length
            int r6 = r6 - r1
            r4.append(r2, r1, r6)
            java.lang.String r6 = r4.toString()
        L3e:
            return r6
    }

    public static java.lang.String a(byte[] r0) {
            char[] r0 = com.xiaomi.push.bm.a(r0)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public static final java.lang.String b(java.lang.String r2) {
            java.lang.String r0 = "&lt;"
            java.lang.String r1 = "<"
            java.lang.String r2 = a(r2, r0, r1)
            java.lang.String r0 = "&gt;"
            java.lang.String r1 = ">"
            java.lang.String r2 = a(r2, r0, r1)
            java.lang.String r0 = "&quot;"
            java.lang.String r1 = "\""
            java.lang.String r2 = a(r2, r0, r1)
            java.lang.String r0 = "&apos;"
            java.lang.String r1 = "'"
            java.lang.String r2 = a(r2, r0, r1)
            java.lang.String r0 = "&amp;"
            java.lang.String r1 = "&"
            java.lang.String r2 = a(r2, r0, r1)
            return r2
    }
}
