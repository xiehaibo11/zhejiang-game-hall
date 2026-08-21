package com.sigmob.sdk.archives.utils;

public class a {
    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(com.sigmob.sdk.archives.a r5) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            boolean r1 = r5.c()
            if (r1 == 0) goto Le
            r1 = 100
            goto L10
        Le:
            r1 = 45
        L10:
            r0.append(r1)
            long r1 = r5.b()
            java.lang.String r1 = java.lang.Long.toString(r1)
            r2 = 32
            r0.append(r2)
            r3 = 7
        L21:
            int r4 = r1.length()
            if (r3 <= r4) goto L2d
            r0.append(r2)
            int r3 = r3 + (-1)
            goto L21
        L2d:
            r0.append(r1)
            r0.append(r2)
            java.lang.String r5 = r5.a()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            return r5
    }

    public static java.lang.String a(byte[] r2) {
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L8
            java.lang.String r1 = "ASCII"
            r0.<init>(r2, r1)     // Catch: java.io.UnsupportedEncodingException -> L8
            return r0
        L8:
            r2 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r2)
            throw r0
    }

    public static java.lang.String a(byte[] r2, int r3, int r4) {
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L8
            java.lang.String r1 = "ASCII"
            r0.<init>(r2, r3, r4, r1)     // Catch: java.io.UnsupportedEncodingException -> L8
            return r0
        L8:
            r2 = move-exception
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            r3.<init>(r2)
            throw r3
    }

    public static boolean a(java.lang.String r2, byte[] r3) {
            int r0 = r3.length
            r1 = 0
            boolean r2 = a(r2, r3, r1, r0)
            return r2
    }

    public static boolean a(java.lang.String r8, byte[] r9, int r10, int r11) {
            java.lang.String r0 = "ASCII"
            byte[] r1 = r8.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L11
            r2 = 0
            int r3 = r1.length
            r7 = 0
            r4 = r9
            r5 = r10
            r6 = r11
            boolean r8 = a(r1, r2, r3, r4, r5, r6, r7)
            return r8
        L11:
            r8 = move-exception
            java.lang.RuntimeException r9 = new java.lang.RuntimeException
            r9.<init>(r8)
            throw r9
    }

    public static boolean a(byte[] r7, int r8, int r9, byte[] r10, int r11, int r12) {
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            boolean r7 = a(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }

    public static boolean a(byte[] r5, int r6, int r7, byte[] r8, int r9, int r10, boolean r11) {
            if (r7 >= r10) goto L4
            r0 = r7
            goto L5
        L4:
            r0 = r10
        L5:
            r1 = 0
            r2 = r1
        L7:
            if (r2 >= r0) goto L17
            int r3 = r6 + r2
            r3 = r5[r3]
            int r4 = r9 + r2
            r4 = r8[r4]
            if (r3 == r4) goto L14
            return r1
        L14:
            int r2 = r2 + 1
            goto L7
        L17:
            r0 = 1
            if (r7 != r10) goto L1b
            return r0
        L1b:
            if (r11 == 0) goto L38
            if (r7 <= r10) goto L2b
        L1f:
            if (r10 >= r7) goto L37
            int r8 = r6 + r10
            r8 = r5[r8]
            if (r8 == 0) goto L28
            return r1
        L28:
            int r10 = r10 + 1
            goto L1f
        L2b:
            if (r7 >= r10) goto L37
            int r5 = r9 + r7
            r5 = r8[r5]
            if (r5 == 0) goto L34
            return r1
        L34:
            int r7 = r7 + 1
            goto L2b
        L37:
            return r0
        L38:
            return r1
    }

    public static boolean a(byte[] r7, byte[] r8) {
            int r2 = r7.length
            int r5 = r8.length
            r1 = 0
            r4 = 0
            r6 = 0
            r0 = r7
            r3 = r8
            boolean r7 = a(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }

    public static boolean a(byte[] r7, byte[] r8, boolean r9) {
            int r2 = r7.length
            int r5 = r8.length
            r1 = 0
            r4 = 0
            r0 = r7
            r3 = r8
            r6 = r9
            boolean r7 = a(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }

    public static byte[] a(java.lang.String r1) {
            java.lang.String r0 = "ASCII"
            byte[] r1 = r1.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r1
        L7:
            r1 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r1)
            throw r0
    }

    public static boolean b(byte[] r7, int r8, int r9, byte[] r10, int r11, int r12) {
            r6 = 1
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            boolean r7 = a(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }
}
