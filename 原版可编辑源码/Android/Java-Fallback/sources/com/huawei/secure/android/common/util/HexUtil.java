package com.huawei.secure.android.common.util;

public final class HexUtil {
    private static final java.lang.String a = "";
    private static final java.lang.String b = "HexUtil";

    private HexUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String byteArray2HexStr(java.lang.String r4) {
            java.lang.String r0 = "HexUtil"
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r2 = ""
            if (r1 == 0) goto Lb
            return r2
        Lb:
            java.lang.String r1 = "UTF-8"
            byte[] r4 = r4.getBytes(r1)     // Catch: java.lang.Exception -> L16 java.io.UnsupportedEncodingException -> L30
            java.lang.String r2 = byteArray2HexStr(r4)     // Catch: java.lang.Exception -> L16 java.io.UnsupportedEncodingException -> L30
            goto L49
        L16:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "byte array 2 hex string exception : "
            r1.append(r3)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            android.util.Log.e(r0, r4)
            goto L49
        L30:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "byte array 2 hex string UnsupportedEncodingException : "
            r1.append(r3)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            android.util.Log.e(r0, r4)
        L49:
            return r2
    }

    public static java.lang.String byteArray2HexStr(byte[] r5) {
            if (r5 == 0) goto L2e
            int r0 = r5.length
            if (r0 != 0) goto L6
            goto L2e
        L6:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        Lc:
            int r2 = r5.length
            if (r1 >= r2) goto L29
            r2 = r5[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            int r3 = r2.length()
            r4 = 1
            if (r3 != r4) goto L23
            r3 = 48
            r0.append(r3)
        L23:
            r0.append(r2)
            int r1 = r1 + 1
            goto Lc
        L29:
            java.lang.String r5 = r0.toString()
            return r5
        L2e:
            java.lang.String r5 = ""
            return r5
    }

    public static byte[] hexStr2ByteArray(java.lang.String r13) {
            java.lang.String r0 = "0x"
            java.lang.String r1 = "HexUtil"
            java.lang.String r2 = "UTF-8"
            boolean r3 = android.text.TextUtils.isEmpty(r13)
            r4 = 0
            if (r3 == 0) goto L10
            byte[] r13 = new byte[r4]
            return r13
        L10:
            java.util.Locale r3 = java.util.Locale.ENGLISH
            java.lang.String r13 = r13.toUpperCase(r3)
            int r3 = r13.length()
            int r3 = r3 / 2
            byte[] r5 = new byte[r3]
            byte[] r13 = r13.getBytes(r2)     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r6 = r4
        L23:
            if (r6 >= r3) goto Laf
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r7.<init>()     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r7.append(r0)     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            java.lang.String r8 = new java.lang.String     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r9 = 1
            byte[] r10 = new byte[r9]     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            int r11 = r6 * 2
            r12 = r13[r11]     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r10[r4] = r12     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r8.<init>(r10, r2)     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r7.append(r8)     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            java.lang.Byte r7 = java.lang.Byte.decode(r7)     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            byte r7 = r7.byteValue()     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            int r7 = r7 << 4
            byte r7 = (byte) r7     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r8.<init>()     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r8.append(r0)     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            java.lang.String r10 = new java.lang.String     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            byte[] r9 = new byte[r9]     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            int r11 = r11 + 1
            r11 = r13[r11]     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r9[r4] = r11     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r10.<init>(r9, r2)     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r8.append(r10)     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            java.lang.Byte r8 = java.lang.Byte.decode(r8)     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            byte r8 = r8.byteValue()     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r7 = r7 ^ r8
            byte r7 = (byte) r7     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            r5[r6] = r7     // Catch: java.lang.Exception -> L78 java.lang.NumberFormatException -> L7a java.io.UnsupportedEncodingException -> L7c
            int r6 = r6 + 1
            goto L23
        L78:
            r13 = move-exception
            goto L7e
        L7a:
            r13 = move-exception
            goto L97
        L7c:
            r13 = move-exception
            goto L97
        L7e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "byte array 2 hex string exception : "
            r0.append(r2)
            java.lang.String r13 = r13.getMessage()
            r0.append(r13)
            java.lang.String r13 = r0.toString()
            android.util.Log.e(r1, r13)
            goto Laf
        L97:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "hex string 2 byte UnsupportedEncodingException or NumberFormatException : "
            r0.append(r2)
            java.lang.String r13 = r13.getMessage()
            r0.append(r13)
            java.lang.String r13 = r0.toString()
            android.util.Log.e(r1, r13)
        Laf:
            return r5
    }
}
