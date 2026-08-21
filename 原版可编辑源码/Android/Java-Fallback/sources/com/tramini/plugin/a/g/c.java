package com.tramini.plugin.a.g;

public class c {
    public static java.lang.String a;
    private static final java.lang.String b = null;
    private static java.util.Map<java.lang.Character, java.lang.Character> c;
    private static java.util.Map<java.lang.Character, java.lang.Character> d;
    private static char[] e;
    private static byte[] f;
    private static java.lang.String g;

    static {
            java.lang.Class<com.tramini.plugin.a.g.c> r0 = com.tramini.plugin.a.g.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.tramini.plugin.a.g.c.b = r0
            r0 = 0
            com.tramini.plugin.a.g.c.c = r0
            com.tramini.plugin.a.g.c.d = r0
            r0 = 64
            char[] r0 = new char[r0]
            r0 = {x0034: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47} // fill-array
            com.tramini.plugin.a.g.c.e = r0
            r0 = 128(0x80, float:1.8E-43)
            byte[] r0 = new byte[r0]
            r0 = {x0078: FILL_ARRAY_DATA , data: [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1} // fill-array
            com.tramini.plugin.a.g.c.f = r0
            java.lang.String r0 = ""
            com.tramini.plugin.a.g.c.a = r0
            com.tramini.plugin.a.g.c.g = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tramini.plugin.a.g.c.d = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tramini.plugin.a.g.c.c = r0
            return
    }

    private c() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.Character a(char r4) {
            java.util.Map<java.lang.Character, java.lang.Character> r0 = com.tramini.plugin.a.g.c.d
            if (r0 != 0) goto L30
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tramini.plugin.a.g.c.d = r0
            r0 = 0
        Lc:
            java.lang.String r1 = com.tramini.plugin.a.g.c.a
            int r1 = r1.length()
            if (r0 >= r1) goto L30
            java.util.Map<java.lang.Character, java.lang.Character> r1 = com.tramini.plugin.a.g.c.d
            java.lang.String r2 = com.tramini.plugin.a.g.c.g
            char r2 = r2.charAt(r0)
            java.lang.Character r2 = java.lang.Character.valueOf(r2)
            java.lang.String r3 = com.tramini.plugin.a.g.c.a
            char r3 = r3.charAt(r0)
            java.lang.Character r3 = java.lang.Character.valueOf(r3)
            r1.put(r2, r3)
            int r0 = r0 + 1
            goto Lc
        L30:
            java.util.Map<java.lang.Character, java.lang.Character> r0 = com.tramini.plugin.a.g.c.d
            java.lang.Character r1 = java.lang.Character.valueOf(r4)
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L49
            java.util.Map<java.lang.Character, java.lang.Character> r0 = com.tramini.plugin.a.g.c.d
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            java.lang.Object r4 = r0.get(r4)
            java.lang.Character r4 = (java.lang.Character) r4
            return r4
        L49:
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            return r4
    }

    public static java.lang.String a(java.lang.String r9) {
            java.lang.String r0 = ""
            boolean r1 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L82
            if (r1 != 0) goto L86
            char[] r9 = r9.toCharArray()     // Catch: java.lang.Exception -> L82
            if (r9 == 0) goto L77
            int r1 = r9.length     // Catch: java.lang.Exception -> L82
            if (r1 <= 0) goto L77
            int r1 = r9.length     // Catch: java.lang.Exception -> L82
            char[] r1 = new char[r1]     // Catch: java.lang.Exception -> L82
            r2 = 0
            r3 = r2
        L16:
            int r4 = r9.length     // Catch: java.lang.Exception -> L82
            if (r3 >= r4) goto L71
            char r4 = r9[r3]     // Catch: java.lang.Exception -> L82
            java.util.Map<java.lang.Character, java.lang.Character> r5 = com.tramini.plugin.a.g.c.d     // Catch: java.lang.Exception -> L82
            if (r5 != 0) goto L4b
            java.util.HashMap r5 = new java.util.HashMap     // Catch: java.lang.Exception -> L82
            r5.<init>()     // Catch: java.lang.Exception -> L82
            com.tramini.plugin.a.g.c.d = r5     // Catch: java.lang.Exception -> L82
            r5 = r2
        L27:
            java.lang.String r6 = com.tramini.plugin.a.g.c.a     // Catch: java.lang.Exception -> L82
            int r6 = r6.length()     // Catch: java.lang.Exception -> L82
            if (r5 >= r6) goto L4b
            java.util.Map<java.lang.Character, java.lang.Character> r6 = com.tramini.plugin.a.g.c.d     // Catch: java.lang.Exception -> L82
            java.lang.String r7 = com.tramini.plugin.a.g.c.g     // Catch: java.lang.Exception -> L82
            char r7 = r7.charAt(r5)     // Catch: java.lang.Exception -> L82
            java.lang.Character r7 = java.lang.Character.valueOf(r7)     // Catch: java.lang.Exception -> L82
            java.lang.String r8 = com.tramini.plugin.a.g.c.a     // Catch: java.lang.Exception -> L82
            char r8 = r8.charAt(r5)     // Catch: java.lang.Exception -> L82
            java.lang.Character r8 = java.lang.Character.valueOf(r8)     // Catch: java.lang.Exception -> L82
            r6.put(r7, r8)     // Catch: java.lang.Exception -> L82
            int r5 = r5 + 1
            goto L27
        L4b:
            java.util.Map<java.lang.Character, java.lang.Character> r5 = com.tramini.plugin.a.g.c.d     // Catch: java.lang.Exception -> L82
            java.lang.Character r6 = java.lang.Character.valueOf(r4)     // Catch: java.lang.Exception -> L82
            boolean r5 = r5.containsKey(r6)     // Catch: java.lang.Exception -> L82
            if (r5 == 0) goto L64
            java.util.Map<java.lang.Character, java.lang.Character> r5 = com.tramini.plugin.a.g.c.d     // Catch: java.lang.Exception -> L82
            java.lang.Character r4 = java.lang.Character.valueOf(r4)     // Catch: java.lang.Exception -> L82
            java.lang.Object r4 = r5.get(r4)     // Catch: java.lang.Exception -> L82
            java.lang.Character r4 = (java.lang.Character) r4     // Catch: java.lang.Exception -> L82
            goto L68
        L64:
            java.lang.Character r4 = java.lang.Character.valueOf(r4)     // Catch: java.lang.Exception -> L82
        L68:
            char r4 = r4.charValue()     // Catch: java.lang.Exception -> L82
            r1[r3] = r4     // Catch: java.lang.Exception -> L82
            int r3 = r3 + 1
            goto L16
        L71:
            java.lang.String r9 = new java.lang.String     // Catch: java.lang.Exception -> L82
            r9.<init>(r1)     // Catch: java.lang.Exception -> L82
            r0 = r9
        L77:
            java.lang.String r9 = new java.lang.String     // Catch: java.lang.Exception -> L82
            byte[] r1 = d(r0)     // Catch: java.lang.Exception -> L82
            r9.<init>(r1)     // Catch: java.lang.Exception -> L82
            r0 = r9
            goto L86
        L82:
            r9 = move-exception
            r9.printStackTrace()
        L86:
            return r0
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
            char[] r8 = com.tramini.plugin.a.g.c.e
            int r1 = r2 >>> 2
            char r8 = r8[r1]
            r0.append(r8)
            char[] r8 = com.tramini.plugin.a.g.c.e
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
            char[] r8 = com.tramini.plugin.a.g.c.e
            int r1 = r2 >>> 2
            char r8 = r8[r1]
            r0.append(r8)
            char[] r8 = com.tramini.plugin.a.g.c.e
            r1 = r2 & 3
            int r1 = r1 << 4
            r2 = r3 & 240(0xf0, float:3.36E-43)
            int r2 = r2 >>> 4
            r1 = r1 | r2
            char r8 = r8[r1]
            r0.append(r8)
            char[] r8 = com.tramini.plugin.a.g.c.e
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
            char[] r6 = com.tramini.plugin.a.g.c.e
            int r7 = r2 >>> 2
            char r6 = r6[r7]
            r0.append(r6)
            char[] r6 = com.tramini.plugin.a.g.c.e
            r2 = r2 & 3
            int r2 = r2 << 4
            r7 = r3 & 240(0xf0, float:3.36E-43)
            int r7 = r7 >>> 4
            r2 = r2 | r7
            char r2 = r6[r2]
            r0.append(r2)
            char[] r2 = com.tramini.plugin.a.g.c.e
            r3 = r3 & 15
            int r3 = r3 << 2
            r6 = r4 & 192(0xc0, float:2.69E-43)
            int r6 = r6 >>> 6
            r3 = r3 | r6
            char r2 = r2[r3]
            r0.append(r2)
            char[] r2 = com.tramini.plugin.a.g.c.e
            r3 = r4 & 63
            char r2 = r2[r3]
            r0.append(r2)
            r2 = r5
            goto L7
        L98:
            java.lang.String r8 = r0.toString()
            return r8
    }

    private static java.lang.Character b(char r4) {
            java.util.Map<java.lang.Character, java.lang.Character> r0 = com.tramini.plugin.a.g.c.c
            if (r0 != 0) goto L30
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tramini.plugin.a.g.c.c = r0
            r0 = 0
        Lc:
            java.lang.String r1 = com.tramini.plugin.a.g.c.a
            int r1 = r1.length()
            if (r0 >= r1) goto L30
            java.util.Map<java.lang.Character, java.lang.Character> r1 = com.tramini.plugin.a.g.c.c
            java.lang.String r2 = com.tramini.plugin.a.g.c.a
            char r2 = r2.charAt(r0)
            java.lang.Character r2 = java.lang.Character.valueOf(r2)
            java.lang.String r3 = com.tramini.plugin.a.g.c.g
            char r3 = r3.charAt(r0)
            java.lang.Character r3 = java.lang.Character.valueOf(r3)
            r1.put(r2, r3)
            int r0 = r0 + 1
            goto Lc
        L30:
            java.util.Map<java.lang.Character, java.lang.Character> r0 = com.tramini.plugin.a.g.c.c
            java.lang.Character r1 = java.lang.Character.valueOf(r4)
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L49
            java.util.Map<java.lang.Character, java.lang.Character> r0 = com.tramini.plugin.a.g.c.c
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            java.lang.Object r4 = r0.get(r4)
            java.lang.Character r4 = (java.lang.Character) r4
            return r4
        L49:
            java.lang.Character r4 = java.lang.Character.valueOf(r4)
            return r4
    }

    public static java.lang.String b(java.lang.String r9) {
            java.lang.String r0 = ""
            boolean r1 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L80
            if (r1 != 0) goto L84
            byte[] r9 = r9.getBytes()     // Catch: java.lang.Exception -> L80
            java.lang.String r9 = a(r9)     // Catch: java.lang.Exception -> L80
            char[] r9 = r9.toCharArray()     // Catch: java.lang.Exception -> L80
            if (r9 == 0) goto L84
            int r1 = r9.length     // Catch: java.lang.Exception -> L80
            if (r1 <= 0) goto L84
            int r1 = r9.length     // Catch: java.lang.Exception -> L80
            char[] r1 = new char[r1]     // Catch: java.lang.Exception -> L80
            r2 = 0
            r3 = r2
        L1e:
            int r4 = r9.length     // Catch: java.lang.Exception -> L80
            if (r3 >= r4) goto L79
            char r4 = r9[r3]     // Catch: java.lang.Exception -> L80
            java.util.Map<java.lang.Character, java.lang.Character> r5 = com.tramini.plugin.a.g.c.c     // Catch: java.lang.Exception -> L80
            if (r5 != 0) goto L53
            java.util.HashMap r5 = new java.util.HashMap     // Catch: java.lang.Exception -> L80
            r5.<init>()     // Catch: java.lang.Exception -> L80
            com.tramini.plugin.a.g.c.c = r5     // Catch: java.lang.Exception -> L80
            r5 = r2
        L2f:
            java.lang.String r6 = com.tramini.plugin.a.g.c.a     // Catch: java.lang.Exception -> L80
            int r6 = r6.length()     // Catch: java.lang.Exception -> L80
            if (r5 >= r6) goto L53
            java.util.Map<java.lang.Character, java.lang.Character> r6 = com.tramini.plugin.a.g.c.c     // Catch: java.lang.Exception -> L80
            java.lang.String r7 = com.tramini.plugin.a.g.c.a     // Catch: java.lang.Exception -> L80
            char r7 = r7.charAt(r5)     // Catch: java.lang.Exception -> L80
            java.lang.Character r7 = java.lang.Character.valueOf(r7)     // Catch: java.lang.Exception -> L80
            java.lang.String r8 = com.tramini.plugin.a.g.c.g     // Catch: java.lang.Exception -> L80
            char r8 = r8.charAt(r5)     // Catch: java.lang.Exception -> L80
            java.lang.Character r8 = java.lang.Character.valueOf(r8)     // Catch: java.lang.Exception -> L80
            r6.put(r7, r8)     // Catch: java.lang.Exception -> L80
            int r5 = r5 + 1
            goto L2f
        L53:
            java.util.Map<java.lang.Character, java.lang.Character> r5 = com.tramini.plugin.a.g.c.c     // Catch: java.lang.Exception -> L80
            java.lang.Character r6 = java.lang.Character.valueOf(r4)     // Catch: java.lang.Exception -> L80
            boolean r5 = r5.containsKey(r6)     // Catch: java.lang.Exception -> L80
            if (r5 == 0) goto L6c
            java.util.Map<java.lang.Character, java.lang.Character> r5 = com.tramini.plugin.a.g.c.c     // Catch: java.lang.Exception -> L80
            java.lang.Character r4 = java.lang.Character.valueOf(r4)     // Catch: java.lang.Exception -> L80
            java.lang.Object r4 = r5.get(r4)     // Catch: java.lang.Exception -> L80
            java.lang.Character r4 = (java.lang.Character) r4     // Catch: java.lang.Exception -> L80
            goto L70
        L6c:
            java.lang.Character r4 = java.lang.Character.valueOf(r4)     // Catch: java.lang.Exception -> L80
        L70:
            char r4 = r4.charValue()     // Catch: java.lang.Exception -> L80
            r1[r3] = r4     // Catch: java.lang.Exception -> L80
            int r3 = r3 + 1
            goto L1e
        L79:
            java.lang.String r9 = new java.lang.String     // Catch: java.lang.Exception -> L80
            r9.<init>(r1)     // Catch: java.lang.Exception -> L80
            r0 = r9
            goto L84
        L80:
            r9 = move-exception
            r9.printStackTrace()
        L84:
            return r0
    }

    public static void c(java.lang.String r4) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L6b
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r4 = "k"
            java.lang.String r4 = r0.optString(r4)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = "v"
            java.lang.String r0 = r0.optString(r1)     // Catch: java.lang.Throwable -> L6b
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L6b
            if (r1 != 0) goto L6b
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L6b
            if (r1 != 0) goto L6b
            com.tramini.plugin.a.g.c.a = r4     // Catch: java.lang.Throwable -> L6b
            com.tramini.plugin.a.g.c.g = r0     // Catch: java.lang.Throwable -> L6b
            r4 = 0
            r0 = r4
        L23:
            java.lang.String r1 = com.tramini.plugin.a.g.c.a     // Catch: java.lang.Throwable -> L6b
            int r1 = r1.length()     // Catch: java.lang.Throwable -> L6b
            if (r0 >= r1) goto L47
            java.util.Map<java.lang.Character, java.lang.Character> r1 = com.tramini.plugin.a.g.c.d     // Catch: java.lang.Throwable -> L6b
            java.lang.String r2 = com.tramini.plugin.a.g.c.g     // Catch: java.lang.Throwable -> L6b
            char r2 = r2.charAt(r0)     // Catch: java.lang.Throwable -> L6b
            java.lang.Character r2 = java.lang.Character.valueOf(r2)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r3 = com.tramini.plugin.a.g.c.a     // Catch: java.lang.Throwable -> L6b
            char r3 = r3.charAt(r0)     // Catch: java.lang.Throwable -> L6b
            java.lang.Character r3 = java.lang.Character.valueOf(r3)     // Catch: java.lang.Throwable -> L6b
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L6b
            int r0 = r0 + 1
            goto L23
        L47:
            java.lang.String r0 = com.tramini.plugin.a.g.c.a     // Catch: java.lang.Throwable -> L6b
            int r0 = r0.length()     // Catch: java.lang.Throwable -> L6b
            if (r4 >= r0) goto L6b
            java.util.Map<java.lang.Character, java.lang.Character> r0 = com.tramini.plugin.a.g.c.c     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = com.tramini.plugin.a.g.c.a     // Catch: java.lang.Throwable -> L6b
            char r1 = r1.charAt(r4)     // Catch: java.lang.Throwable -> L6b
            java.lang.Character r1 = java.lang.Character.valueOf(r1)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r2 = com.tramini.plugin.a.g.c.g     // Catch: java.lang.Throwable -> L6b
            char r2 = r2.charAt(r4)     // Catch: java.lang.Throwable -> L6b
            java.lang.Character r2 = java.lang.Character.valueOf(r2)     // Catch: java.lang.Throwable -> L6b
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L6b
            int r4 = r4 + 1
            goto L47
        L6b:
            return
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
            byte[] r3 = com.tramini.plugin.a.g.c.f
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
            byte[] r5 = com.tramini.plugin.a.g.c.f
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
            byte[] r7 = com.tramini.plugin.a.g.c.f
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
            byte[] r7 = com.tramini.plugin.a.g.c.f
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
