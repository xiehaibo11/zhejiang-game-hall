package com.tkay.core.common.l;

public class c {
    static java.util.HashMap<java.lang.Character, java.lang.Character> a = null;
    private static final java.lang.String b = null;
    private static final char[] c = null;
    private static final byte[] d = null;
    private static final java.lang.String e = "ZE1XbmhiZXlLcjBKSXZMTk94M0JGa0V1bWw5Mlk1ZmpTcUdUN1I4cFpWY2lQSEFzdEM0VVhhNlFEdzFnb3orLw==";
    private static java.lang.String f;

    static {
            java.lang.Class<com.tkay.core.common.l.c> r0 = com.tkay.core.common.l.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.common.l.c.b = r0
            r0 = 64
            char[] r0 = new char[r0]
            r0 = {x0020: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47} // fill-array
            com.tkay.core.common.l.c.c = r0
            r0 = 128(0x80, float:1.8E-43)
            byte[] r0 = new byte[r0]
            r0 = {x0064: FILL_ARRAY_DATA , data: [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1} // fill-array
            com.tkay.core.common.l.c.d = r0
            java.lang.String r0 = ""
            com.tkay.core.common.l.c.f = r0
            return
    }

    private c() {
            r0 = this;
            r0.<init>()
            return
    }

    private static synchronized java.lang.Character a(char r5) {
            java.lang.Class<com.tkay.core.common.l.c> r0 = com.tkay.core.common.l.c.class
            monitor-enter(r0)
            java.lang.String r1 = com.tkay.core.common.l.c.f     // Catch: java.lang.Throwable -> L5e
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L5e
            if (r1 == 0) goto L13
            java.lang.String r1 = "ZE1XbmhiZXlLcjBKSXZMTk94M0JGa0V1bWw5Mlk1ZmpTcUdUN1I4cFpWY2lQSEFzdEM0VVhhNlFEdzFnb3orLw=="
            java.lang.String r1 = b(r1)     // Catch: java.lang.Throwable -> L5e
            com.tkay.core.common.l.c.f = r1     // Catch: java.lang.Throwable -> L5e
        L13:
            java.util.HashMap<java.lang.Character, java.lang.Character> r1 = com.tkay.core.common.l.c.a     // Catch: java.lang.Throwable -> L5e
            if (r1 != 0) goto L3e
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L5e
            r1.<init>()     // Catch: java.lang.Throwable -> L5e
            com.tkay.core.common.l.c.a = r1     // Catch: java.lang.Throwable -> L5e
            r1 = 0
        L1f:
            char[] r2 = com.tkay.core.common.l.c.c     // Catch: java.lang.Throwable -> L5e
            int r2 = r2.length     // Catch: java.lang.Throwable -> L5e
            if (r1 >= r2) goto L3e
            java.util.HashMap<java.lang.Character, java.lang.Character> r2 = com.tkay.core.common.l.c.a     // Catch: java.lang.Throwable -> L5e
            java.lang.String r3 = com.tkay.core.common.l.c.f     // Catch: java.lang.Throwable -> L5e
            char r3 = r3.charAt(r1)     // Catch: java.lang.Throwable -> L5e
            java.lang.Character r3 = java.lang.Character.valueOf(r3)     // Catch: java.lang.Throwable -> L5e
            char[] r4 = com.tkay.core.common.l.c.c     // Catch: java.lang.Throwable -> L5e
            char r4 = r4[r1]     // Catch: java.lang.Throwable -> L5e
            java.lang.Character r4 = java.lang.Character.valueOf(r4)     // Catch: java.lang.Throwable -> L5e
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L5e
            int r1 = r1 + 1
            goto L1f
        L3e:
            java.util.HashMap<java.lang.Character, java.lang.Character> r1 = com.tkay.core.common.l.c.a     // Catch: java.lang.Throwable -> L5e
            java.lang.Character r2 = java.lang.Character.valueOf(r5)     // Catch: java.lang.Throwable -> L5e
            boolean r1 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> L5e
            if (r1 == 0) goto L58
            java.util.HashMap<java.lang.Character, java.lang.Character> r1 = com.tkay.core.common.l.c.a     // Catch: java.lang.Throwable -> L5e
            java.lang.Character r5 = java.lang.Character.valueOf(r5)     // Catch: java.lang.Throwable -> L5e
            java.lang.Object r5 = r1.get(r5)     // Catch: java.lang.Throwable -> L5e
            java.lang.Character r5 = (java.lang.Character) r5     // Catch: java.lang.Throwable -> L5e
            monitor-exit(r0)
            return r5
        L58:
            java.lang.Character r5 = java.lang.Character.valueOf(r5)     // Catch: java.lang.Throwable -> L5e
            monitor-exit(r0)
            return r5
        L5e:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    public static java.lang.String a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            return r1
        L9:
            byte[] r1 = r1.getBytes()
            java.lang.String r1 = a(r1)
            return r1
    }

    public static java.lang.String a(byte[] r8) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            int r1 = r8.length
            r2 = 0
        L7:
            if (r2 >= r1) goto L98
            int r3 = r2 + 1
            r2 = r8[r2]
            r2 = r2 & 255(0xff, float:3.57E-43)
            if (r3 != r1) goto L2b
            char[] r8 = com.tkay.core.common.l.c.c
            int r1 = r2 >>> 2
            char r8 = r8[r1]
            r0.append(r8)
            char[] r8 = com.tkay.core.common.l.c.c
            r1 = r2 & 3
            int r1 = r1 << 4
            char r8 = r8[r1]
            r0.append(r8)
            java.lang.String r8 = "=="
            r0.append(r8)
            goto L98
        L2b:
            int r4 = r3 + 1
            r3 = r8[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            if (r4 != r1) goto L5d
            char[] r8 = com.tkay.core.common.l.c.c
            int r1 = r2 >>> 2
            char r8 = r8[r1]
            r0.append(r8)
            char[] r8 = com.tkay.core.common.l.c.c
            r1 = r2 & 3
            int r1 = r1 << 4
            r2 = r3 & 240(0xf0, float:3.36E-43)
            int r2 = r2 >>> 4
            r1 = r1 | r2
            char r8 = r8[r1]
            r0.append(r8)
            char[] r8 = com.tkay.core.common.l.c.c
            r1 = r3 & 15
            int r1 = r1 << 2
            char r8 = r8[r1]
            r0.append(r8)
            java.lang.String r8 = "="
            r0.append(r8)
            goto L98
        L5d:
            int r5 = r4 + 1
            r4 = r8[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            char[] r6 = com.tkay.core.common.l.c.c
            int r7 = r2 >>> 2
            char r6 = r6[r7]
            r0.append(r6)
            char[] r6 = com.tkay.core.common.l.c.c
            r2 = r2 & 3
            int r2 = r2 << 4
            r7 = r3 & 240(0xf0, float:3.36E-43)
            int r7 = r7 >>> 4
            r2 = r2 | r7
            char r2 = r6[r2]
            r0.append(r2)
            char[] r2 = com.tkay.core.common.l.c.c
            r3 = r3 & 15
            int r3 = r3 << 2
            r6 = r4 & 192(0xc0, float:2.69E-43)
            int r6 = r6 >>> 6
            r3 = r3 | r6
            char r2 = r2[r3]
            r0.append(r2)
            char[] r2 = com.tkay.core.common.l.c.c
            r3 = r4 & 63
            char r2 = r2[r3]
            r0.append(r2)
            r2 = r5
            goto L7
        L98:
            java.lang.String r8 = r0.toString()
            return r8
    }

    public static java.lang.String b(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            return r1
        L9:
            java.lang.String r0 = new java.lang.String
            byte[] r1 = d(r1)
            r0.<init>(r1)
            return r0
    }

    public static java.lang.String c(java.lang.String r4) {
            java.lang.String r0 = ""
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L38
            if (r1 != 0) goto L3c
            char[] r4 = r4.toCharArray()     // Catch: java.lang.Exception -> L38
            if (r4 == 0) goto L2d
            int r1 = r4.length     // Catch: java.lang.Exception -> L38
            if (r1 <= 0) goto L2d
            int r1 = r4.length     // Catch: java.lang.Exception -> L38
            char[] r1 = new char[r1]     // Catch: java.lang.Exception -> L38
            r2 = 0
        L15:
            int r3 = r4.length     // Catch: java.lang.Exception -> L38
            if (r2 >= r3) goto L27
            char r3 = r4[r2]     // Catch: java.lang.Exception -> L38
            java.lang.Character r3 = a(r3)     // Catch: java.lang.Exception -> L38
            char r3 = r3.charValue()     // Catch: java.lang.Exception -> L38
            r1[r2] = r3     // Catch: java.lang.Exception -> L38
            int r2 = r2 + 1
            goto L15
        L27:
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L38
            r4.<init>(r1)     // Catch: java.lang.Exception -> L38
            r0 = r4
        L2d:
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L38
            byte[] r1 = d(r0)     // Catch: java.lang.Exception -> L38
            r4.<init>(r1)     // Catch: java.lang.Exception -> L38
            r0 = r4
            goto L3c
        L38:
            r4 = move-exception
            r4.printStackTrace()
        L3c:
            return r0
    }

    private static byte[] d(java.lang.String r8) {
            byte[] r8 = r8.getBytes()
            int r0 = r8.length
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>(r0)
            r2 = 0
        Lb:
            if (r2 >= r0) goto L82
        Ld:
            byte[] r3 = com.tkay.core.common.l.c.d
            int r4 = r2 + 1
            r2 = r8[r2]
            r2 = r3[r2]
            r3 = -1
            if (r4 >= r0) goto L1d
            if (r2 == r3) goto L1b
            goto L1d
        L1b:
            r2 = r4
            goto Ld
        L1d:
            if (r2 == r3) goto L82
        L1f:
            byte[] r5 = com.tkay.core.common.l.c.d
            int r6 = r4 + 1
            r4 = r8[r4]
            r4 = r5[r4]
            if (r6 >= r0) goto L2e
            if (r4 == r3) goto L2c
            goto L2e
        L2c:
            r4 = r6
            goto L1f
        L2e:
            if (r4 == r3) goto L82
            int r2 = r2 << 2
            r5 = r4 & 48
            int r5 = r5 >>> 4
            r2 = r2 | r5
            r1.write(r2)
        L3a:
            int r2 = r6 + 1
            r5 = r8[r6]
            r6 = 61
            if (r5 != r6) goto L47
            byte[] r8 = r1.toByteArray()
            return r8
        L47:
            byte[] r7 = com.tkay.core.common.l.c.d
            r5 = r7[r5]
            if (r2 >= r0) goto L52
            if (r5 == r3) goto L50
            goto L52
        L50:
            r6 = r2
            goto L3a
        L52:
            if (r5 == r3) goto L82
            r4 = r4 & 15
            int r4 = r4 << 4
            r7 = r5 & 60
            int r7 = r7 >>> 2
            r4 = r4 | r7
            r1.write(r4)
        L60:
            int r4 = r2 + 1
            r2 = r8[r2]
            if (r2 != r6) goto L6b
            byte[] r8 = r1.toByteArray()
            return r8
        L6b:
            byte[] r7 = com.tkay.core.common.l.c.d
            r2 = r7[r2]
            if (r4 >= r0) goto L76
            if (r2 == r3) goto L74
            goto L76
        L74:
            r2 = r4
            goto L60
        L76:
            if (r2 == r3) goto L82
            r3 = r5 & 3
            int r3 = r3 << 6
            r2 = r2 | r3
            r1.write(r2)
            r2 = r4
            goto Lb
        L82:
            byte[] r8 = r1.toByteArray()
            return r8
    }
}
