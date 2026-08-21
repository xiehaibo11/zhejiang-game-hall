package com.huawei.secure.android.common.util;

public class EncodeUtil {
    private static final java.lang.String a = "EncodeUtil";
    private static final char[] b = null;
    private static final java.lang.String[] c = null;

    static {
            r0 = 3
            char[] r0 = new char[r0]
            r0 = {x0044: FILL_ARRAY_DATA , data: [44, 46, 45} // fill-array
            com.huawei.secure.android.common.util.EncodeUtil.b = r0
            r0 = 256(0x100, float:3.59E-43)
            java.lang.String[] r0 = new java.lang.String[r0]
            com.huawei.secure.android.common.util.EncodeUtil.c = r0
            r0 = 0
        Lf:
            r1 = 255(0xff, float:3.57E-43)
            if (r0 >= r1) goto L42
            r1 = 48
            if (r0 < r1) goto L1b
            r1 = 57
            if (r0 <= r1) goto L2c
        L1b:
            r1 = 65
            if (r0 < r1) goto L23
            r1 = 90
            if (r0 <= r1) goto L2c
        L23:
            r1 = 97
            if (r0 < r1) goto L32
            r1 = 122(0x7a, float:1.71E-43)
            if (r0 <= r1) goto L2c
            goto L32
        L2c:
            java.lang.String[] r1 = com.huawei.secure.android.common.util.EncodeUtil.c
            r2 = 0
            r1[r0] = r2
            goto L3e
        L32:
            java.lang.String[] r1 = com.huawei.secure.android.common.util.EncodeUtil.c
            java.lang.String r2 = b(r0)
            java.lang.String r2 = r2.intern()
            r1[r0] = r2
        L3e:
            int r0 = r0 + 1
            char r0 = (char) r0
            goto Lf
        L42:
            return
    }

    public EncodeUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.Character a(com.huawei.secure.android.common.util.a r7) {
            r7.c()
            java.lang.Character r0 = r7.d()
            r1 = 0
            if (r0 != 0) goto Le
            r7.i()
            return r1
        Le:
            char r0 = r0.charValue()
            r2 = 92
            if (r0 == r2) goto L1a
            r7.i()
            return r1
        L1a:
            java.lang.Character r0 = r7.d()
            if (r0 != 0) goto L24
            r7.i()
            return r1
        L24:
            char r3 = r0.charValue()
            r4 = 98
            r5 = 8
            if (r3 != r4) goto L33
            java.lang.Character r7 = java.lang.Character.valueOf(r5)
            return r7
        L33:
            char r3 = r0.charValue()
            r4 = 116(0x74, float:1.63E-43)
            if (r3 != r4) goto L42
            r7 = 9
            java.lang.Character r7 = java.lang.Character.valueOf(r7)
            return r7
        L42:
            char r3 = r0.charValue()
            r4 = 110(0x6e, float:1.54E-43)
            if (r3 != r4) goto L51
            r7 = 10
            java.lang.Character r7 = java.lang.Character.valueOf(r7)
            return r7
        L51:
            char r3 = r0.charValue()
            r4 = 118(0x76, float:1.65E-43)
            if (r3 != r4) goto L60
            r7 = 11
            java.lang.Character r7 = java.lang.Character.valueOf(r7)
            return r7
        L60:
            char r3 = r0.charValue()
            r4 = 102(0x66, float:1.43E-43)
            if (r3 != r4) goto L6f
            r7 = 12
            java.lang.Character r7 = java.lang.Character.valueOf(r7)
            return r7
        L6f:
            char r3 = r0.charValue()
            r4 = 114(0x72, float:1.6E-43)
            if (r3 != r4) goto L7e
            r7 = 13
            java.lang.Character r7 = java.lang.Character.valueOf(r7)
            return r7
        L7e:
            char r3 = r0.charValue()
            r4 = 34
            if (r3 != r4) goto L8b
            java.lang.Character r7 = java.lang.Character.valueOf(r4)
            return r7
        L8b:
            char r3 = r0.charValue()
            r4 = 39
            if (r3 != r4) goto L98
            java.lang.Character r7 = java.lang.Character.valueOf(r4)
            return r7
        L98:
            char r3 = r0.charValue()
            if (r3 != r2) goto La3
            java.lang.Character r7 = java.lang.Character.valueOf(r2)
            return r7
        La3:
            char r2 = r0.charValue()
            char r2 = java.lang.Character.toLowerCase(r2)
            r3 = 120(0x78, float:1.68E-43)
            r4 = 16
            r6 = 0
            if (r2 != r3) goto Le2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
        Lb7:
            r3 = 2
            if (r6 >= r3) goto Lca
            java.lang.Character r3 = r7.e()
            if (r3 == 0) goto Lc6
            r2.append(r3)
            int r6 = r6 + 1
            goto Lb7
        Lc6:
            r7.i()
            return r1
        Lca:
            java.lang.String r2 = r2.toString()     // Catch: java.lang.NumberFormatException -> Lde
            int r2 = java.lang.Integer.parseInt(r2, r4)     // Catch: java.lang.NumberFormatException -> Lde
            boolean r3 = java.lang.Character.isValidCodePoint(r2)     // Catch: java.lang.NumberFormatException -> Lde
            if (r3 == 0) goto L166
            char r0 = (char) r2     // Catch: java.lang.NumberFormatException -> Lde
            java.lang.Character r7 = java.lang.Character.valueOf(r0)     // Catch: java.lang.NumberFormatException -> Lde
            return r7
        Lde:
            r7.i()
            return r1
        Le2:
            char r2 = r0.charValue()
            char r2 = java.lang.Character.toLowerCase(r2)
            r3 = 117(0x75, float:1.64E-43)
            if (r2 != r3) goto L11e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
        Lf3:
            r3 = 4
            if (r6 >= r3) goto L106
            java.lang.Character r3 = r7.e()
            if (r3 == 0) goto L102
            r2.append(r3)
            int r6 = r6 + 1
            goto Lf3
        L102:
            r7.i()
            return r1
        L106:
            java.lang.String r2 = r2.toString()     // Catch: java.lang.NumberFormatException -> L11a
            int r2 = java.lang.Integer.parseInt(r2, r4)     // Catch: java.lang.NumberFormatException -> L11a
            boolean r3 = java.lang.Character.isValidCodePoint(r2)     // Catch: java.lang.NumberFormatException -> L11a
            if (r3 == 0) goto L166
            char r0 = (char) r2     // Catch: java.lang.NumberFormatException -> L11a
            java.lang.Character r7 = java.lang.Character.valueOf(r0)     // Catch: java.lang.NumberFormatException -> L11a
            return r7
        L11a:
            r7.i()
            return r1
        L11e:
            boolean r2 = com.huawei.secure.android.common.util.a.c(r0)
            if (r2 == 0) goto L166
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.Character r3 = r7.d()
            boolean r4 = com.huawei.secure.android.common.util.a.c(r3)
            if (r4 != 0) goto L13a
            r7.a(r3)
            goto L14e
        L13a:
            r2.append(r3)
            java.lang.Character r3 = r7.d()
            boolean r4 = com.huawei.secure.android.common.util.a.c(r3)
            if (r4 != 0) goto L14b
            r7.a(r3)
            goto L14e
        L14b:
            r2.append(r3)
        L14e:
            java.lang.String r2 = r2.toString()     // Catch: java.lang.NumberFormatException -> L162
            int r2 = java.lang.Integer.parseInt(r2, r5)     // Catch: java.lang.NumberFormatException -> L162
            boolean r3 = java.lang.Character.isValidCodePoint(r2)     // Catch: java.lang.NumberFormatException -> L162
            if (r3 == 0) goto L166
            char r0 = (char) r2     // Catch: java.lang.NumberFormatException -> L162
            java.lang.Character r7 = java.lang.Character.valueOf(r0)     // Catch: java.lang.NumberFormatException -> L162
            return r7
        L162:
            r7.i()
            return r1
        L166:
            return r0
    }

    private static java.lang.String a(char r1) {
            r0 = 255(0xff, float:3.57E-43)
            if (r1 >= r0) goto L9
            java.lang.String[] r0 = com.huawei.secure.android.common.util.EncodeUtil.c
            r1 = r0[r1]
            return r1
        L9:
            java.lang.String r1 = b(r1)
            return r1
    }

    private static java.lang.String a(char[] r2, java.lang.Character r3) {
            char r0 = r3.charValue()
            boolean r2 = a(r0, r2)
            java.lang.String r0 = ""
            if (r2 == 0) goto L1c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            return r2
        L1c:
            char r2 = r3.charValue()
            java.lang.String r2 = a(r2)
            if (r2 != 0) goto L36
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            return r2
        L36:
            char r2 = r3.charValue()
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            char r3 = r3.charValue()
            r0 = 256(0x100, float:3.59E-43)
            if (r3 >= r0) goto L6b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "\\x"
            r3.append(r0)
            int r0 = r2.length()
            java.lang.String r1 = "00"
            java.lang.String r0 = r1.substring(r0)
            r3.append(r0)
            java.util.Locale r0 = java.util.Locale.ENGLISH
            java.lang.String r2 = r2.toUpperCase(r0)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            return r2
        L6b:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "\\u"
            r3.append(r0)
            int r0 = r2.length()
            java.lang.String r1 = "0000"
            java.lang.String r0 = r1.substring(r0)
            r3.append(r0)
            java.util.Locale r0 = java.util.Locale.ENGLISH
            java.lang.String r2 = r2.toUpperCase(r0)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            return r2
    }

    private static java.lang.String a(char[] r3, java.lang.String r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r4.length()
            if (r1 >= r2) goto L1e
            char r2 = r4.charAt(r1)
            java.lang.Character r2 = java.lang.Character.valueOf(r2)
            java.lang.String r2 = a(r3, r2)
            r0.append(r2)
            int r1 = r1 + 1
            goto L6
        L1e:
            java.lang.String r3 = r0.toString()
            return r3
    }

    private static boolean a(char r4, char[] r5) {
            int r0 = r5.length
            r1 = 0
            r2 = r1
        L3:
            if (r2 >= r0) goto Le
            char r3 = r5[r2]
            if (r4 != r3) goto Lb
            r4 = 1
            return r4
        Lb:
            int r2 = r2 + 1
            goto L3
        Le:
            return r1
    }

    private static java.lang.String b(char r0) {
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            return r0
    }

    public static java.lang.String decodeForJavaScript(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            com.huawei.secure.android.common.util.a r2 = new com.huawei.secure.android.common.util.a     // Catch: java.lang.Exception -> L30
            r2.<init>(r4)     // Catch: java.lang.Exception -> L30
        L13:
            boolean r4 = r2.a()     // Catch: java.lang.Exception -> L30
            if (r4 == 0) goto L2b
            java.lang.Character r4 = a(r2)     // Catch: java.lang.Exception -> L30
            if (r4 == 0) goto L23
            r0.append(r4)     // Catch: java.lang.Exception -> L30
            goto L13
        L23:
            java.lang.Character r4 = r2.d()     // Catch: java.lang.Exception -> L30
            r0.append(r4)     // Catch: java.lang.Exception -> L30
            goto L13
        L2b:
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L30
            return r4
        L30:
            r4 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.util.EncodeUtil.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "decode js: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            android.util.Log.e(r0, r4)
            return r1
    }

    public static java.lang.String encodeForJavaScript(java.lang.String r1) {
            char[] r0 = com.huawei.secure.android.common.util.EncodeUtil.b
            java.lang.String r1 = encodeForJavaScript(r1, r0)
            return r1
    }

    public static java.lang.String encodeForJavaScript(java.lang.String r3, char[] r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r3 = a(r4, r3)     // Catch: java.lang.Exception -> Le
            return r3
        Le:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.util.EncodeUtil.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "encode js: "
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.util.Log.e(r4, r3)
            return r1
    }
}
